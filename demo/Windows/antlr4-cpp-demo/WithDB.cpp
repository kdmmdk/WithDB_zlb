// WithDB.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"

#include <fstream>
#include <iostream>
#include <random>
#include <string>
#include <vector>

using namespace std;

const char * path = "E:\\test.db";
std::random_device rd;
std::mt19937 random_engine(rd());

void init();
void testUtils();
void testRelation();
void testEndian();
void testCache();
void testPage();
void testDriveBuffer();
void testDrive();
void testTranslator();
void testKeeper();
void testRelationGuard();
void testController();
void testWorkflow();

int main()
{
	init();
	testWorkFlow();
	//testUtils();
	//testRelation();
	//testEndian();
	//testCache();
	//testPage();
	//testDriveBuffer();
	//testDrive();
	//testTranslator();
	//testKeeper();
	//testRelationGuard();
	//testController();
	// test1();
	// test2();
	// test3();
	// test4();
	// test5();
	// test6();
	// test7();
	
	return 0;
}

#include <unordered_set>

void init() {
	cout << hex;
	ios::sync_with_stdio(false);
}




void testUtils() {
	struct Test {
		Test() {
			cout << "default constructor" << endl;
		}
		Test(const Test &t) {
			cout << "copy constructor" << endl;
		}
		Test(Test &&t) {
			cout << "move constructor" << endl;
		}
	};
	cout << db::getInstance<int>(1) << endl;
	cout << db::getInstance<double>() << endl;
	db::getInstance<Test>();
	db::getInstance<Test>(Test());
	Test t;
	db::getInstance<Test>(t);
	db::getInstance<Test>(std::move(t));
	cout << db::current() << endl;
	cout << db::toString("12345") << endl;
	cout << db::toString(3.0) << endl;
	int x = 1 << 31;
	cout << db::getFlag(x, 31) << endl;
	cout << db::getFlag(x, 11) << endl;
	cout << db::getFlag(x, 41) << endl;
	x = db::setFlag(x, true, 11);
	cout << db::getFlag(x, 31) << endl;
	cout << db::getFlag(x, 11) << endl;
	x = db::resetFlag(x, 11, 12);
	cout << db::getFlag(x, 31) << endl;
	cout << db::getFlag(x, 11) << endl;
	x = db::setFlag(x, 0xe, 11, 14);
	cout << db::getFlag(x, 31) << endl;
	cout << db::getFlag(x, 11) << endl;
	cout << db::getFlag(x, 11, 18) << endl;
	x = db::resetFlag(x, 11);
	cout << db::getFlag(x, 31) << endl;
	cout << db::getFlag(x, 11) << endl;
	cout << db::getFlag(x, 11, 18) << endl;

	string con(1000, '\0');
	cout << db::BasicTypes::write(1, con.data(), db::INT_T) << endl;
	int value;
	cout << db::BasicTypes::read(value, con.data(), db::INT_T) << endl;
	cout << value << endl;
}

void testRelation() {
	auto r = db::Relation()
		.addAttribute("int", db::INT_T)
		.addAttribute("char1", db::CHAR_T, 18)
		.addAttribute("vchar1", db::VARCHAR_T, 100)
		.addAttribute("long", db::LONG_T)
		.addAttribute("char2", db::CHAR_T, 15)
		.addAttribute("double", db::DOUBLE_T)
		.addAttribute("float", db::FLOAT_T)
		.addAttribute("date", db::DATE_T)
		.addAttribute("vchar2", db::VARCHAR_T, 50)
		.format();
	auto builder = r.builder();
	db::Tuple tmp = builder.start()
		.build("long", 2ll)
		.build("char1", string("Supplier#000000001"))
		.build("vchar2", string("N kD4on9OM Ipw3, gf0JBoQDd7tgrzrddZ"))
		.build(3, 1ll)
		.build("double", 5755.94)
		.build("char2", string("27-918-335-17"))
		.build("float", 1.1f)
		.build("vchar2", string("each slyly above the careful"))
		.complete();
	for (size_t i = 0; i < r.attributeSize(); ++i) {
		cout << tmp.get<string>(i) << endl;
	}
	//auto lr = db::Relation(true)
	//	.loadAttribute("int", 0, r.attribute("int"))
	//	.loadAttribute("char2", 4, r.attribute("char2"))
	//	.loadAttribute("char1", 1, r.attribute("char1"))
	//	.loadAttribute("date", 7, r.attribute("date"))
	//	.loadAttribute("double", 5, r.attribute("double"))
	//	.loadAttribute("vchar1", 2, r.attribute("vchar1"))
	//	.loadAttribute("long", 3, r.attribute("long"))
	//	.loadAttribute("float", 6, r.attribute("float"))
	//	.loadAttribute("vchar2", 8, r.attribute("vchar2"))
	//	.format(true);
	//lr._fixedTupleSize = r._fixedTupleSize;
	//lr._maxTupleSize = r._maxTupleSize;
	//db::Tuple tmp2(lr);
	//tmp2.insert(tmp2.begin(), tmp.begin(), tmp.end());
	//for (size_t i = 0; i < lr.attributeSize(); ++i) {
	//	cout << tmp2.get<string>(i) << endl;
	//}
}

void testEndian() {
	for (double i = 0.01234; i < 0.01234  + 0.7; i += 0.1) {
		cout << db::decode<double>(db::encode(i)) << endl;
	}
}

db::size_t testHash(int addr) {
	return static_cast<db::size_t>(addr);
}

void testCache() {
	struct TestHandler : db::BasicCacheHandler<int, string> {
		bool onInsert(int addr, string &value, int arg = 0) {
			value = to_string(addr);
			cout << "insert " << addr << " with arg=" << arg << endl;
			return true;
		}

		bool onHit(int addr, string &value, int arg = 0) {
			cout << "hit " << addr << " with arg=" << arg << endl;
			return true;
		}

		bool onErase(int addr, string &value, int arg = 0) {
			cout << "erase " << addr << " with arg=" << arg << endl;
			return true;
		}
	};
	{
		
		TestHandler h;
		db::Cache<int, string, TestHandler, db::HashCacheCore<int, testHash>> c(h, 4);
		for (auto i = 8; i < 16; ++i) {
			cout << c.fetch(i, 1) << endl;
		}
		for (auto i = 0; i < 4; ++i) {
			cout << c.fetch(i, 2) << endl;
		}
		try {
			cout << c.fetch(4) << endl;
		} catch (std::runtime_error e) {
			cout << e.what() << endl;
		}
		string s = "123";
		for (auto i = 0; i < 8; ++i) {
			c.collect(i, s, i);
			cout << s << endl;
		}
		try {
			c.close();
		} catch (std::runtime_error e) {
			cout << e.what() << endl;
		}
	}
	{
		TestHandler h;
		db::Cache<int, string, TestHandler> c(h, 4);
		for (auto i = 8; i < 16; ++i) {
			cout << c.fetch(i) << endl;
		}
		for (auto i = 0; i < 4; ++i) {
			cout << c.fetch(i) << endl;
			c.pin(i);
		}
		try {
			cout << c.fetch(4) << endl;
		} catch (std::runtime_error e) {
			cout << e.what() << endl;
		}
		c.unpin(0);
		for (auto i = 0; i < 8; ++i) {
			cout << c.fetch(i) << endl;
		}
		try {
			c.close();
		} catch (std::runtime_error e) {
			cout << e.what() << endl;
		}
		for (auto i = 0; i < 8; ++i) {
			c.unpin(i);
		}
	}
}

struct TestHandler : db::BasicCacheHandler<int, db::Page> {
	db::Cache<int, db::Page, TestHandler> _cache;

	TestHandler() :_cache(*this, 4) {
	}

	template<typename Type, typename... Args>
	db::Page onCreate(const Args &... args) {
		return db::Page(_cache.container());
	}

	bool onInsert(int addr, db::Page &p) {
		p.write(addr, 0);
		p.write("content = " + db::toString(addr), 4);
		return true;
	}
	bool onHit(int addr, db::Page &p) {
		cout << "hit " << addr << ' ' << p.read<string>(4) << endl;
		return true;
	}

	bool onErase(int addr, db::Page &p) {
		cout << "kick " << addr << ' ' << p.read<string>(4) << endl;
		return true;
	}
};

void testPage() {
	{
		db::Container c;
		db::Page p(c, 0);
		for (int i = 0; i < 100; i += 4) {
			p.write(i, i);
		}
		for (int i = 0; i < 100; i += 4) {
			cout << p.read<int>(i) << endl;
		}
		string x = "123456789123456789123456789";
		p.write(x, 0);
		cout << p.read<string>(0) << endl;
	}
	
	{
		TestHandler h;
		auto &c = h._cache;
		for (auto i = 8; i < 16; ++i) {
			cout << c.fetch<db::Page>(i)->read<int>(0) << endl;
		}
		for (auto i = 0; i < 4; ++i) {
			cout << c.fetch<db::Page>(i)->read<int>(0) << endl;
			c.pin(i);
		}
		try {
			cout << c.fetch<db::Page>(5)->read<int>(0) << endl;
		} catch (std::runtime_error e) {
			cout << e.what() << endl;
		}
		c.unpin(0);
		for (auto i = 0; i < 8; ++i) {
			cout << c.fetch<db::Page>(i)->read<int>(0) << endl;
		}
		try {
			c.close();
		} catch (std::runtime_error e) {
			cout << e.what() << endl;
		}
		for (auto i = 0; i < 8; ++i) {
			c.unpin(i);
		}
	}
}

// for temporary use to save strange file
void testDriveBuffer() {
	db::Container c(db::PAGE_SIZE);
	db::Page p(c, 0);
	{
		db::DriveBuffer buf(path, true);
		cout << buf.isOpen() << endl;
		cout << buf.size() << endl;
		buf.expand(db::PAGE_SIZE * 10);
		for (auto i = 0; i < 10; ++i) {
			p.write(0.123456 + 0.1 * i, 0);
			buf.put(p, i * db::PAGE_SIZE);
		}
		for (auto i = 9; i >= 0; --i) {
			buf.get(p, i * db::PAGE_SIZE);
			cout << p.read<double>(0) << endl;
		}
	}
	{
		db::DriveBuffer buf(path);
		cout << buf.size() << endl;
		for (auto i = 9; i >= 0; --i) {
			buf.get(p, i * db::PAGE_SIZE);
			cout << p.read<double>(0) << endl;
		}
	}
}

void testDrive() {
	std::unordered_set<db::drive_address> addrs;
	{
		db::Drive ctrl(path, true);
		for (int i = 0x1000; i > 0; --i) {
			auto ret = ctrl.allocate(i * db::PAGE_SIZE);
			// cout << ret << endl;
			if (ret % db::PAGE_SIZE) {
				cout << ret << endl;
			}
			if (!addrs.insert(ret).second) {
				throw runtime_error("testDrive");
			}
		}
		cout << addrs.size() << endl;
		db::drive_address i = 0;
		unordered_set<db::drive_address> r;
		for (auto addr : addrs) {
			r.insert(addr);
			++i;
			ctrl.free(addr);
			
			db::drive_address t = 0;
			for (auto y : ctrl._user._masters) {
				if (y <= t) {
					throw runtime_error("testDrive");
				}
				t = y;
			}
			unordered_set<db::drive_address> s;
			while (t) {
				if (!s.insert(t).second) {
					throw runtime_error("testDrive");
				}
				auto ptr = ctrl._user._cache.fetch<db::DriveMasterPage>(t);
				
				if (t <= ptr->_forward) {
					throw runtime_error("testDrive");
				}

				for (auto offset : ptr->_slaves) {
					if (!s.insert(t + offset * db::PAGE_SIZE).second) {
						throw runtime_error("testDrive");
					}
				}
				t = ptr->_forward;
			}
			ctrl._user.dump();
			if (s.size() != i) {
				if (s.find(addr) == s.end()) {
					cerr << addr << endl;
				}
				for (auto x : r) {
					if (s.find(x) == s.end()) {
						cerr << x << endl;
					}
				}
				throw runtime_error("testDrive");
			}
		}
		addrs.clear();
		for (int i = 0x1000; i > 0; --i) {
			auto ret = ctrl.allocate(i * db::PAGE_SIZE);
			// cout << ret << endl;
			if (ret % db::PAGE_SIZE) {
				cout << ret << endl;
			}
			if (!addrs.insert(ret).second) {
				throw runtime_error("testDrive");
			}
		}
	}
	{
		db::Drive ctrl(path, false);
		for (auto addr : addrs) {
			ctrl.free(addr);
		}
		unordered_set<db::drive_address> s;
		auto t = ctrl._entry._userMasters.back();
		size_t cnt = 0;
		while (t) {
			if (s.find(t) != s.end()) {
				throw runtime_error("testDrive");
			}
			s.insert(t);
			auto ptr = ctrl._user._cache.fetch<db::DriveMasterPage>(t);
			if (t <= ptr->_forward) {
				throw runtime_error("testDrive");
			}
			t = ptr->_forward;
			cnt += ptr->_slaves.size();
		}
	}
}

void testTranslator() {
	size_t data_segment = db::DATA_SEG_BEGIN;
	unordered_map<db::address, db::drive_address> record;
	{
		db::Drive drive(path, true);
		db::Translator translator(drive);
		translator.param(db::NULL_ADDRESS) = 1;
		for (int i = 0; i < 0x100; ++i) {
			auto x = data_segment + i * db::PAGE_SIZE;
			auto y = drive.allocate();
			translator.link(x, y);
			record[x] = y;
		}
		for (int i = 0; i < 0x1000; ++i) {
			std::uniform_int_distribution<> dis(0, 0xff);
			auto x = data_segment + dis(random_engine) * db::PAGE_SIZE;
			if (record[x] != translator(x)) {
				throw runtime_error("testTranslator");
			}
		}
		for (int i = 0; i < 0x100; ++i) {
			auto x = data_segment + i * db::PAGE_SIZE;
			translator.unlink(x);
		}
		for (int i = 0; i < 0x100; ++i) {
			auto x = data_segment + i * db::PAGE_SIZE;
			bool flag;
			translator(x, flag);
			if (flag) {
				throw runtime_error("testTranslator");
			}
		} // TODO: relink
		for (int i = 0; i < 0x1000; ++i) {
			auto x = data_segment + i * db::PAGE_SIZE;
			auto y = drive.allocate();
			translator.link(x, y);
			record[x] = y;
		}
	}
	{
		db::Drive drive(path, false);
		db::Translator translator(drive);
		auto t = db::current();
		for (int i = 0; i < 0x100; ++i) {
			for (int j = 0; j < 0x1000; ++j) {
				auto x = data_segment + j * db::PAGE_SIZE;
				if (record[x] != translator(x)) {
					throw runtime_error("testTranslator");
				}
			}
		}
		cout << db::current() - t << endl;
	}
}

void testKeeper() {
	{
		db::Keeper keeper(path, true);
		for (int i = 0; i < 0x100; ++i) {
			auto x = db::DATA_SEG_BEGIN + i * db::PAGE_SIZE;
			auto y = keeper.hold<db::VirtualPage>(x);
			y->write(-i, 0);
		}
		for (int i = 0; i < 0x1000; ++i) {
			std::uniform_int_distribution<> dis(0, 0xff);
			int j = dis(random_engine);
			auto x = db::DATA_SEG_BEGIN + j * db::PAGE_SIZE;
			auto y = keeper.hold<db::VirtualPage>(x)->read<int>(0);
			if (y != -j) {
				throw runtime_error("testKeeper");
			}
		}
		for (int i = 0; i < 0x100; ++i) {
			auto x = db::DATA_SEG_BEGIN + i * db::PAGE_SIZE;
			keeper.loosen(x);
		}
		for (int i = 0; i < 0x100; ++i) {
			auto x = db::DATA_SEG_BEGIN + i * db::PAGE_SIZE;
			if (keeper.hold<db::VirtualPage>(x)->read<int>(0) != 0) {
				throw runtime_error("testKeeper");
			}
		} // TODO: relink
		for (int i = 0; i < 0x1000; ++i) {
			auto x = db::DATA_SEG_BEGIN + i * db::PAGE_SIZE;
			auto y = keeper.hold<db::VirtualPage>(x);
			y->write(-i, 0);
			if (i > 0x300) {
				x = i;
			}
		}
	}
	{
		db::Keeper keeper(path, false);
		auto t = db::current();
		for (int i = 0; i < 0x100; ++i) {
			for (int j = 0; j < 0x1000; ++j) {
				std::uniform_int_distribution<> dis(0, 0x3ff);
				auto k = dis(random_engine);
				auto x = db::DATA_SEG_BEGIN + k * db::PAGE_SIZE;
				auto ptr = keeper.hold<db::VirtualPage>(x);
				ptr->setDirty(false);
				if (ptr->read<int>(0) != -k) {
					throw runtime_error("testKeeper");
				}
			}
		}
		cout << db::current() - t << endl;
	}
}

void testRelationGuard() {
	db::address addr = 0;
	db::Relation table;
	table._ptr = table._end = table._begin = db::DATA_SEG_BEGIN;
	table._capacity = db::SEGMENT_SIZE / 4;
	auto f = table.addAttribute("1", db::INT_T)
		.addAttribute("2", db::CHAR_T, 18)
		.addAttribute("3", db::VARCHAR_T, 100)
		.addAttribute("4", db::INT_T)
		.addAttribute("5", db::CHAR_T, 15)
		.addAttribute("6", db::DOUBLE_T)
		.addAttribute("7", db::VARCHAR_T, 50)
		.format();
	{
		db::Keeper keeper(path, true);
		db::RelationGuard guard(keeper, table);
		{
			db::Tuple tmp = table.builder().start()
				.build(0, 1)
				.build(1, string("Supplier#000000001"))
				.build(2, string("N kD4on9OM Ipw3, gf0JBoQDd7tgrzrddZ"))
				.build(3, 17)
				.build(4, string("27-918-335-1736"))
				.build(5, 5755.94)
				.build(6, string("each slyly above the careful"))
				.complete();
			addr = guard.allocate(tmp);
		}

		db::Tuple tmp = guard.fetch(addr);
		cout << tmp.get<int>(3) << endl;
		cout << tmp.get<int>(0) << endl;
		cout << tmp.get<string>(1) << endl;
		cout << tmp.get<string>(2) << endl;
		cout << tmp.get<string>(4) << endl;
		cout << tmp.get<double>(5) << endl;
		cout << tmp.get<string>(6) << endl;
	}
	{
		db::Keeper keeper(path, false);
		db::RelationGuard guard(keeper, table);
		db::Tuple tmp = guard.fetch(addr);
		cout << tmp.get<int>(3) << endl;
		cout << tmp.get<int>(0) << endl;
		cout << tmp.get<string>(1) << endl;
		cout << tmp.get<string>(2) << endl;
		cout << tmp.get<string>(4) << endl;
		cout << tmp.get<double>(5) << endl;
		cout << tmp.get<string>(6) << endl;
	}
}

//void testController() {
//	unordered_map<int, db::address> m;
//	{
//		db::Controller controller(path, true);
//		db::Relation table;
//		auto f = table.addAttribute("1", db::INT_T)
//			.addAttribute("2", db::CHAR_T, 18)
//			.addAttribute("3", db::VARCHAR_T, 100)
//			.addAttribute("4", db::INT_T)
//			.addAttribute("5", db::CHAR_T, 15)
//			.addAttribute("6", db::DOUBLE_T)
//			.addAttribute("7", db::VARCHAR_T, 50)
//			.format();
//		controller.createRelation("foo", std::move(table));
//
//		auto builder = controller.relationGuard("foo")._relation.builder();
//		for (auto i = 0; i < 0x20; ++i) {
//			db::Tuple tmp = builder.start()
//				.build(0, 1)
//				.build(1, string("Supplier#000000001"))
//				.build(2, string("N kD4on9OM Ipw3, gf0JBoQDd7tgrzrddZ"))
//				.build(3, 17)
//				.build(4, string("27-918-335-1736"))
//				.build(5, 5755.94)
//				.build(6, string("each slyly above the careful"))
//				.complete();
//			m[i] = controller.insertTuple("foo", tmp);
//		}
//		cout << "print relation: RelationMeta" << endl;
//		controller.printAll("RelationMeta");
//		cout << "print relation: AttributeMeta" << endl;
//		controller.printAll("AttributeMeta");
//		cout << "print relation: IndexMeta" << endl;
//		controller.printAll("IndexMeta");
//		cout << "print relation: foo" << endl;
//		controller.printAll("foo");
//	}
//	{
//		db::Controller controller(path, false);
//		cout << "print relation: RelationMeta" << endl;
//		controller.printAll("RelationMeta");
//		cout << "print relation: AttributeMeta" << endl;
//		controller.printAll("AttributeMeta");
//		cout << "print relation: IndexMeta" << endl;
//		controller.printAll("IndexMeta");
//		cout << "print relation: foo" << endl;
//		controller.printAll("foo");
//	}
//}


void testWorkFlow() {
	std::string script = "CREATE TABLE NATION ( N_NATIONKEY INTEGER NOT NULL,N_NAME CHAR(25) NOT NULL,N_REGIONKEY INTEGER NOT NULL,N_COMMENT VARCHAR(152)); ";
	db::BaseParser parser;

	db::SQLNode* node =  parser.parseSQL(script);

	

}
//
//void test6() {
//	db::keeper k(path, false);
//	k.start();
//	cout << hex;
//	db::TuplePage x(std::move(k.hold(0)));
//	cout << x.addr << endl;
//	cout << x.get_free_space() << endl;
//	auto i = x.allocate(600);
//	cout << i << endl;
//	auto p = x.get(i);
//	cout << p.first << "  " << p.second << endl;
//	char s[] = "1234567890", r[20] = {};
//	x.copy_from(s, p.first, p.first + 10);
//	x.copy_to(r, p.first, p.first + 10);
//	cout << r << endl;
//	k.stop();
//	k.close();
//}
//
//void test7() {
//	db::AttributeTable table{
//		db::Attribute(db::INT_T),
//		db::Attribute(db::CHAR_T, 18),
//		db::Attribute(db::VARCHAR_T),
//		db::Attribute(db::INT_T),
//		db::Attribute(db::CHAR_T, 15),
//		db::Attribute(db::DOUBLE_T),
//		db::Attribute(db::VARCHAR_T),
//	};
//	db::TupleBuilder builder;
//	builder.set_table(make_shared<db::AttributeTable>(table));
//	db::keeper k(path, true);
//	k.start();
//	for (auto i = 0; i < 0x100; ++i) {
//		builder.start();
//		builder.set(1, 0);
//		builder.set(string("Supplier#000000001"), 1);
//		builder.set(string("N kD4on9OM Ipw3, gf0JBoQDd7tgrzrddZ"), 2);
//		builder.set(17, 3);
//		builder.set(string("27-918-335-1736"), 4);
//		builder.set(5755.94, 5);
//		builder.set(string("each slyly above the careful"), 6);
//		auto out = builder.get();
//		builder.reset();
//		for (db::address addr = 0; addr >= 0; addr += db::PAGE_SIZE) {
//			db::TuplePage p(std::move(k.hold(addr)));
//			try {
//				p.load();
//			} catch (runtime_error e) {
//				p.init();
//			}
//			try {
//				auto result = p.allocate(static_cast<db::page_address>(out->size()));
//				auto pa = p.get(result);
//				p.copy_from(out->begin(), pa.first, pa.second);
//				p.dump();
//				cout << i << " -- " << p.addr << ":" << result << endl;
//				break;
//			} catch (runtime_error e) {
//				// cout << e.what() << endl;
//			}
//		}
//	}
//	int t = 0;
//	for (db::address addr = 0; addr >= 0; addr += db::PAGE_SIZE) {
//		db::TuplePage p(std::move(k.hold(addr)));
//		try {
//			p.load();
//		} catch (runtime_error e) {
//			break;
//		}
//		for (auto &entry : p._entries) {
//			auto pa = p.get(entry.index);
//			if (pa.second == 0) {
//				continue;
//			}
//			db::tuple tmp(pa.second - pa.first);
//			p.copy_to(tmp.begin(), pa.first, pa.second);
//			cout << table.get<int>(tmp, 0) << endl;
//			cout << table.get<string>(tmp, 1) << endl;
//			cout << table.get<string>(tmp, 2) << endl;
//			cout << table.get<int>(tmp, 3) << endl;
//			cout << table.get<string>(tmp, 4) << endl;
//			cout << table.get<double>(tmp, 5) << endl;
//			cout << table.get<string>(tmp, 6) << endl;
//			cout << t++ << " -- " << p.addr << ":" << entry.index << endl;
//			p.free(entry.index);
//		}
//	}
//	for (auto i = 0; i < 0x100; ++i) {
//		builder.start();
//		builder.set(1, 0);
//		builder.set(string("Supplier#000000001"), 1);
//		builder.set(string("N kD4on9OM Ipw3, gf0JBoQDd7tgrzrddZ"), 2);
//		builder.set(17, 3);
//		builder.set(string("27-918-335-1736"), 4);
//		builder.set(5755.94, 5);
//		builder.set(string("each slyly above the careful"), 6);
//		auto out = builder.get();
//		builder.reset();
//		for (db::address addr = 0; addr >= 0; addr += db::PAGE_SIZE) {
//			db::TuplePage p(std::move(k.hold(addr)));
//			try {
//				p.load();
//			} catch (runtime_error e) {
//				p.init();
//			}
//			try {
//				auto result = p.allocate(static_cast<db::page_address>(out->size()));
//				auto pa = p.get(result);
//				p.copy_from(out->begin(), pa.first, pa.second);
//				cout << i << " -- " << p.addr << ":" << result << endl;
//				break;
//			} catch (runtime_error e) {
//				// cout << e.what() << endl;
//			}
//		}
//	}
//	for (auto i = 0; i < 0x100; ++i) {
//
//		builder.start();
//		builder.set(1, 0);
//		builder.set(string("Supplier#000000001"), 1);
//		builder.set(string("N kD4on9OM Ipw3, gf0JBoQDd7tgrzrddZ"), 2);
//		builder.set(17, 3);
//		builder.set(string("27-918-335-1736"), 4);
//		builder.set(5755.94, 5);
//		builder.set(string("each slyly above the careful"), 6);
//		auto out = builder.get();
//		builder.reset();
//		for (db::address addr = 0; addr >= 0; addr += db::PAGE_SIZE) {
//			db::TuplePage p(std::move(k.hold(addr)));
//			try {
//				p.load();
//			} catch (runtime_error e) {
//				p.init();
//			}
//			try {
//				auto result = p.allocate(static_cast<db::page_address>(out->size()), false);
//				auto pa = p.get(result);
//				p.copy_from(out->begin(), pa.first, pa.second);
//				cout << i << " -- " << p.addr << ":" << result << endl;
//				break;
//			} catch (runtime_error e) {
//				cout << e.what() << endl;
//			}
//		}
//	}
//
//	k.stop();
//	k.close();
//}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
