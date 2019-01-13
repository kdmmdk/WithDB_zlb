#pragma once
#ifndef __PLANTREE_HPP__
#define __PLANTREE_HPP__

#include "parser.hpp"
#include "query.hpp"
//#include "join.hpp"
#include<stack>
namespace db{ 
	typedef enum {
		CREATE_P,
		INSERT_P,
		CREATEINDEX_P,
		UPATE_P,
		DELETE_P,
		DROP_P
	}PTYPE;

	class QueryGenerator {
	public:
		Schema &_schema;
		std::vector<UnaryQueryStep> usteps;
		std::vector<BinaryQueryStep> bsteps;
		std::vector<std::string>	tables;
		std::vector<std::string>	selects;
		QueryGenerator(Schema &schema) : _schema(schema) {
			
		}

		Query createQuery(SQLNode *node) {
			Query query;
			
			if (node->type == CREATE) {
				CreateTable *ctNode = (CreateTable*)node;
				Relation *table = new Relation();
				table->_name = ctNode->tableName;
				for (colDef i : ctNode->colDefs) {
					if (i.typeLen.size() > 0)
						table->addAttribute(i.colName, i.colName);
					else
						table->addAttribute(i.colName, i.colName);
				}
				table->format();

				CreateTableExpr *createTable = new CreateTableExpr();
				createTable->_type = CREATE_TABLE;
				createTable->_relation = table;
				query._exprs.push_back(createTable);
				return query;
			}
			else if (node->type == INSERT) {
				InsertStmt *iNode = (InsertStmt*)node;
				std::string tableName = iNode->tableName;
				if (ifExistsTable(tableName)) {
					Relation *r = _schema._relations.at(_schema.relationPos(tableName));
					auto builder = r->builder();
					TupleBuilder temp = builder.start();

					for (int i = 0; i < iNode->colums.size(); i++) {
						temp.build(r->attributePos(iNode->colums[i]), iNode->values[i]);
					}
					InsertExpr *insertExpr = new InsertExpr(tableName, std::move(temp.complete()));
					insertExpr->_type = INSERT_T;
					
					query._exprs.push_back(insertExpr);
					return query;
				}
				else {
					std::cout << "this table doesn't exists" << std::endl;
					return query;
				}
			}
			else if (node->type == CREATEINDEX) {
				CreateIndexStmt *ciNode = (CreateIndexStmt*)node;
				
			}
			else if (node->type == SELECT) {
				SelectStmt *sNode = (SelectStmt*)node;
				tables = sNode->fromclause->tables;
				selects = sNode->selectList->
				SimpleExpression *whereLimits = sNode->fromclause->whereLimits;
				//push_back(new C(std::move()))
				//a.emplace_back(std::())

			}
		}

		void parseExpression(SimpleExpression *expr, bool ifAll) {

			if (expr->type == LOGICALEXPRESSION) {
				parseExpression(expr->left);
				parseExpression(expr->right);
			}
			if (expr->type == COMPAREEXPRESSION) {
				std::string left_content = expr->left->content;
				std::string right_content = expr->right->content;
				std::string opCode = expr->opcode;

				NodeType leftType = expr->left->type;
				NodeType rightType = expr->right->type;

				if (leftType == CONSTANT && rightType == FULLID) {

				}

				if (leftType == FULLID && rightType == CONSTANT) {

					[](Tuple &tuple) {
						return tuple.get<int_t>(1) < 5;
					};
				}

				if (leftType == CONSTANT && rightType == FULLID) {
				
				}

				if (leftType == FULLID)
			}

		}

		bool ifExistsTable(const std::string &tableName) {
			return !(_schema.relationPos(tableName) == _schema._relations.size());
		}

		type_enum getType(std::string type) {
			
		}
	};


	//class CreatePlan : public PlanTree{
	//public:
	//	std::string tableName;
	//	Relation *cRelation;

	//	void buildPlan(CreateTable *node){
	//		

	//	}
	//};


	//class SelectPlan : public PlanTree {
	//public :
	//	

	//	// get a query order from the sql tree
	//	void selectPlan() {

	//	}
	//	
	//	// check if the SQLTree is fit to the grammar,   
	//	bool checkSQLTree(SelectStmt *Root) {
	//		
	//	}

	//	void runCreate(CreateTable *root) {
	//		printCreate(root);
	//		std::cout << "create success!" << std::endl;
	//	}

	//	void runInsert(InsertStmt *root) {
	//		std::vector<std::string> cols = root->colums;
	//		std::vector<std::string> values = root->values;
	//		std::vector<std::string> head = getColNames(root->tableName);

	//		std::string res = "";
	//		for (std::string i : head) {
	//			std::string temp = "|";
	//			
	//			for (int j = 0; j < cols.size(); j++) {
	//				if (cols[j] == i) {
	//					temp = values[j] + '|';
	//					break;
	//				}
	//			}
	//			res += temp;
	//		}
	//		//TODO insert 

	//	}

	//	void runSelect(SelectStmt *root) {
	//		std::vector < std::string> tablenames = root->fromclause->tables;
	//		std::vector<Condition*> conditions;
	//		if(root->fromclause->whereLimits != nullptr)
	//			conditions = condition(root->fromclause->whereLimits);
	//		std::vector<int> colum;
	//		std::vector<std::pair<std::string, std::string>> scale;
	//		std::vector<std::string> value;
	//		std::vector<int> out_colum;

	//		if (conditions.size() == 0) {
	//			table_join test("D:\\tmp\\benchmark_data\\test1.db");
	//			if (root->ifSelectAll)
	//				test.table_select();
	//			else {
	//				std::vector<SelectCol*> selects = root->selectList;
	//				for (int j = 0; j < selects.size(); j++) {
	//					out_colum.push_back(getColNum(selects[j]->colName, tablenames[0]));
	//				}
	//				test.table_select({}, {} , 0, out_colum);
	//			}
	//			return;
	//		}
	//		else if(conditions.size() == 1) {
	//			std::string tempOP = conditions[0]->opcode;
	//			if (tempOP == "join") {
	//				
	//			}
	//			else {
	//				if (tempOP == "=") {
	//					colum.push_back(getColNum(conditions[0]->left, tablenames[0]));
	//					value.push_back(conditions[0]->right);
	//					table_join test("D:\\tmp\\benchmark_data\\test1.db");
	//					if (root->ifSelectAll) 
	//						test.table_select(colum, value, 0);
	//					else {
	//						std::vector<SelectCol*> selects = root->selectList;
	//						for (int j = 0; j < selects.size(); j++) {
	//							out_colum.push_back(getColNum(selects[j]->colName, tablenames[0]));
	//						}
	//						test.table_select(colum, value, 0, out_colum);
	//					}
	//					return;
	//				}
	//			
	//			}
	//		}
	//		else {
	//			if (conditions[0]->opcode == ">" && conditions[1]->opcode == "<" && conditions[0]->left == conditions[1]->left) {
	//				colum.push_back(getColNum(conditions[0]->left, tablenames[0]));
	//				scale.push_back(std::make_pair(conditions[0]->right, conditions[1]->right));
	//				
	//				table_join test("D:\\tmp\\benchmark_data\\test1.db");
	//				if (root->ifSelectAll)
	//					test.table_select_scale(colum, scale);
	//				else {
	//					std::vector<SelectCol*> selects = root->selectList;
	//					for (int j = 0; j < selects.size(); j++) {
	//						out_colum.push_back(getColNum(selects[j]->colName, tablenames[0]));
	//					}
	//					test.table_select_scale(colum, scale, out_colum);
	//				}
	//				return;
	//			}
	//		}
	//	}


	//	void runDelete() {

	//	}

	//	int getColNum(std::string colName, std::string tableName) {
	//		std::vector<std::string> colNames = getColNames(tableName);
	//		for (int i = 0; i < colNames.size(); i++) {
	//			if (colName == colNames[i])
	//				return i;
	//		}
	//	}
	//	 
	//	std::vector<Condition*> condition(SimpleExpression *root) {
	//		std::vector<Condition*> conditons;
	//		SimpleExpression *p;
	//		if (root->type != COMPAREEXPRESSION) {
	//			p = root->left;
	//			Condition *c = new Condition();
	//			if (p->left->type == FULLID && p->right->type == FULLID) {
	//						c->opcode = "join";
	//						c->left = root->left->content;
	//						c->right = root->right->content;
	//						conditons.push_back(c);
	//			}
	//			else {
	//				c->left = p->left->content;
	//				c->right = p->right->content;
	//				c->opcode = p->opcode;
	//				conditons.push_back(c);
	//			}
	//			p = root->right;
	//			c = new Condition();
	//			if (p->left->type == FULLID && p->right->type == FULLID) {
	//				c->opcode = "join";
	//				c->left = root->left->content;
	//				c->right = root->right->content;
	//				conditons.push_back(c);
	//			}
	//			else {
	//				c->left = p->left->content;
	//				c->right = p->right->content;
	//				c->opcode = p->opcode;
	//				conditons.push_back(c);
	//			}
	//		}
	//		else {
	//			Condition *c = new Condition();
	//			if (root->left->type == FULLID && root->right->type == FULLID) {
	//				c->opcode = "join";
	//				c->left = root->left->content;
	//				c->right = root->right->content;
	//				conditons.push_back(c);
	//			}
	//			else {
	//				c->left = root->left->content;
	//				c->right = root->right->content;
	//				c->opcode = root->opcode;
	//				conditons.push_back(c);
	//			}
	//		}
	//		return conditons;
	//	}

	//	std::vector<std::string> getColNames (std::string table){
	//		std::vector<std::string> res = {"ID", "S_NAME", "S_PASS", "S_AGE", "S_NO", "REGIONKEY", "COMMENT"};
	//		return res;
	//	}
	//};
}

#endif