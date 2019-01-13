#pragma once
#ifndef __PARSER__
#define __PARSER__
#include<string>
#include<vector>
#include<iostream>
namespace db {
	enum NodeType {
		SELECT = 0,
		INSERT,
		DROP,
		DELET,
		CREATE,
		UPDATE,
		CREATEINDEX,
		UNDEFINED,

		// DIFFERENET  EXPRESSION
		NOTEXPRSSION = 100,
		LOGICALEXPRESSION,
		ISEXPRESSION,

		PREDICATEEXPRESSION,
		INPREDICATE,		// IN ()/
		CONSTANT,			// 123
		FULLID,				// A.TA
		UNARYEXPRESSION,	//
		EXISTSEXPRSSION,	// EXISTS (JJ)
		SUBQUERYEXPRESSION,

		COMPAREEXPRESSION,
		MATHEXPRESSION,

		//
		CREATETABLE,
		//
		FROMCLAUSE,
		TABLESUBQUERY,

		//EXPR_TYPE
		STRINGLITERAL,
		DECIMALLITERAL,
		BOOLEANLITERAL,
		ID
	};

	class SQLNode {
	public:
		NodeType type; 		/*enum kind, describe the kind of the SQLNode*/
	};

	enum ColConstraint {
		NOTNULL,
		DEFAULT,
		AUTO_INCREMENT,
		PRIMARY_KEY,
		UNIQUE_KEY
	};

	enum DropType {
		RESTRICT,
		CASCADE
	};

	enum COMPARISONOPERATOR {
		EQ,
		GT,
		LT,
		LET,
		GET,
		NEQ
	};

	enum JOINTYPE {
		INNERJOIN
	};

	class CreateTable;
	class DropTable;
	class Expression;
	class TermialExpression;
	class SimpleExpression;
	class SubQueryComparasionExpression;
	class ExistsExpression;
	class InExpression;
	class SelectStmt;

	struct colDef {
		std::string colName;
		std::string colType;
		std::string typeLen;	// for the variable type arguments
		std::vector<ColConstraint> colConstraints;
	};

	class CreateTable : public SQLNode {
	public:
		bool ifNotExists;		// ifExists
		std::string		tableName;
		std::vector<colDef> colDefs;
	};

	class DropTable : public SQLNode {
	public:
		bool ifExists;
		std::string tableName;
		DropType droptype;		// RESTRICT or CASCADE
	};


	class Expression : public SQLNode {
	public:
		std::string content;
	};


	class SimpleExpression : public Expression {
	public:
		SimpleExpression *left;

		std::string opcode;

		SimpleExpression *right;
	};


	class TableSourceItem {
	public:
		int itemType;  // 0 table, 1 temp select table
	};

	class TableSelectTemp : public TableSourceItem {
	public:
		SQLNode select;  // contains the colNames in the temp names 
		std::string alias;	// name of the temp list 
	};

	class TableAtom : public TableSourceItem {
	public:
		std::string tableName;	// int main
	};

	class JoinPart {
	public:
		TableSourceItem item;
		JOINTYPE jointype;
		Expression *joinCondition;
	};

	class TableSource : public SQLNode {
	public:
		int itemType; // 0 table, 1 select
		std::vector<JoinPart*> joinParts;
	};

	struct OrderClause {
		std::string name;
		bool asc;			// true: order by ascend
	};

	class FromClause : public SQLNode {
	public:
		std::vector<std::string>		tables;
		SimpleExpression	*whereLimits;
		//std::vector<OrderClause*>		groupbyClause;  // the format is the sam as the orderClause
		//std::vector<Expression*>		havingExpressions;
	};

	class SelectCol {
	public:
		std::string colName;
		std::string alias;  // by default, the alias is null
	};


	class SelectStmt : public SQLNode {
	public:
		bool ifDistinct;		// select distinct 
		bool ifSelectAll;		// select * from ....
		FromClause *fromclause;	// from tables
		std::vector<SelectCol*> selectList;
		std::vector<OrderClause*> orderClauses;
	};

	class DeleteStmt : public SQLNode {
	public:
		std::string tableName;
		SimpleExpression* whereLimists;
	};

	class InsertStmt : public SQLNode {
	public:
		std::string tableName;
		std::vector<std::string> colums;
		std::vector<std::string> values;
	};

	class UpdateStmt : public SQLNode {
	public:
		std::string tableName;
		std::vector<std::string> colums;
		std::vector<std::string> values;
		SimpleExpression* whereLimists;
	};

	class CreateIndexStmt : public SQLNode {
	public:
		std::string tableName;
		std::string indexName;
		std::string colName;
	};

	enum QUANTIFIER {
		ALL,
		ANY,
		SOME
	};

	class SubQueryComparasionExpression : public Expression {
	public:
		Expression left;
		COMPARISONOPERATOR OP;
		QUANTIFIER quantifer;
		SelectStmt right;
	};

	class ExistsExpression : public Expression {
	public:
		bool flag; // exists or not exists
		SelectStmt selectStmt;
	};

	class InExpression : public Expression {
	public:
		bool flag; // in or not in 
		SelectStmt selectStmt;
	};

	// print the selectStmt in the cmd
	inline void printSelect(SelectStmt *root) {
		// print selectList
		for (SelectCol *col : root->selectList) {
			std::cout << "colName:" << col->colName << "; alias:" << col->alias << std::endl;
		}
		// print fromList
		std::cout << "tableNames:";
		for (std::string name : root->fromclause->tables)
			std::cout << name << " ;";

		// print condition

	}

	inline void printCreate(CreateTable *root) {
		std::cout << "**************createTable\n";
		std::cout << "table Name: " << root->tableName << std::endl;
		std::cout << "ifNotExists: " << root->ifNotExists << std::endl;
		for (colDef i : root->colDefs) {
			std::cout << "colName: " << i.colName << "colType: " << i.colType << ";" << "colLen" << i.typeLen;
		}
	}

	inline void printDrop(DropTable *root) {

	}

	inline void printInsert(InsertStmt *root) {

	}

	inline void printUpdate(UpdateStmt *root) {

	}

	class BaseParser {

	public:
		//STMT parseSQL(std::string &script);
		//STMT parseSQL(std::fstream &in);
		//STMT simpleTree;

		SQLNode* parseSQL(std::string &script);
		std::vector < SQLNode* > parseSQL(std::fstream &in);
	};
}

#endif