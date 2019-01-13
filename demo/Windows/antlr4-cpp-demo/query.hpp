#pragma once

#include "definitions.hpp"
#include "relation.hpp"
#include "utils.hpp"
#include <functional>

namespace db {

	struct VariableEntry {
		type_enum _type;
		size_t _offset;

		VariableEntry(type_enum type = DUMMY_T, size_t offset = 0) : _type(type), _offset(offset) {
		}
	};

	struct ExprBase {
		type_enum _type;
	};

	struct ConditionExpr : ExprBase {

	};

	struct BooleanExpr : ConditionExpr {
		int _left;	// Expr vector's index
		int _right;	// Expr vector's index
	};

	struct ComparisonExpr : ConditionExpr {
		int _left;	// std::vector<VariableEntry>'s index;
		int _right;  // std::vector<VariableEntry>'s index;
	};

	struct RelationsExpr : ExprBase {

	};

	struct AttributesExpr : ExprBase {
		std::vector<int> _attributes;	
	};

	struct TupleExpr : ExprBase {
		Tuple _tuple;
	};

	struct FunctionExpr : ExprBase { // operation with return value

	};

	struct AssignmentExpr : ExprBase {
		int _attrIndex;		// variable: entry index
		int _valueIndex;	// constant value
	};

	struct CreateTableExpr : ExprBase {
		Relation _relation;
	};

	struct CreateIndexExpr : ExprBase {
		size_t _index; 
		//db::Schema::getIndexKey();
	};

	struct InsertExpr : ExprBase {
		std::string _tableName;
		//AttributesExpr _attributes;
		//AttributesExpr _constants;
		Tuple _tuple;

		InsertExpr(const string &tableName, Tuple &&tuple) :_tableName(tableName)
			, _tuple(std::move(tuple)) {}
	};

	struct SelectExpr : ExprBase {
		AttributesExpr _selectList;
		std::vector<std::string> _selectNames;
		std::vector<std::string> _fromTables;
		int _exprRoot;	// index in the expr vector
	};

	struct UpdateExpr : ExprBase {
		std::string _tableName;
		AttributesExpr _cols;
		AttributesExpr _values;
		int _exprRoor;
	};

	struct DeleteExpr : ExprBase {
		std::string _tableName;
		int _exprRoot;
	};

	struct Query {
		
		std::vector<element_t> _storage;
		std::vector<VariableEntry> _variables;
		std::vector<ExprBase *> _exprs;

		template<typename Value>
		int appendLiteral(Value value) {
			int offset = _storage.size();
			_storage.resize(_storage.size() + sizeof(Value));
			BasicTypes::write(value, _storage.data() + offset);

			VariableEntry entry;
			if (std::is_same_v<Value, int_t>) {
				entry._type = INT_T;
			}
			else if (std::is_same_v<Value, double_t>) {
				entry._type = DOUBLE_T;
			}
			else if (std::is_same_v < Value, long_t>) {
				entry._type = LONG_T;
			} 
			else if(std::is_same_v < Value, date_t>) {
				entry._type = DATE_T;
			}
			entry._offset = offset;
			_variables.push_back(entry);
			return _variables.size() - 1;
		}

		int appendLiteral(const string &value) {
			int offset = _storage.size();
			_storage.resize(_storage.size() + sizeof(value) + 1);
			BasicTypes::write(value, _storage.data() + offset);
			VariableEntry entry;
			entry._type = CHAR_T;
			entry._offset = offset;
			_variables.push_back(entry);
			return _variables.size() - 1;
		}
	};


	struct QueryStep {
		size_t _result;		//-1
		Relation _resultRelation;
	};

	struct UnaryQueryStep : QueryStep {
		size_t _single;
		std::function<bool(Tuple &)> _selection;
		std::vector<size_t> _projection;
	};

	struct BinaryQueryStep : QueryStep{
		size_t _left, _right;
		std::function<bool(Tuple &, Tuple &)> _join;
		std::vector<size_t> _leftProjection;
		std::vector<size_t> _rightProjection;
	};

	struct QueryPlan : std::vector<QueryStep *> {
		inline ~QueryPlan() {
			for (auto iter = begin(); iter != end(); ++iter) {
				delete *iter;
			}
		}
	};

	// TODO: query nesting
	struct QueryOptimizer {
		Schema &_schema;

		inline QueryOptimizer(Schema &schema) : _schema(_schema) {

		}

		inline QueryPlan generate(Query &query) {
			
		}
	};
}
