#pragma once
#include "antlr4-runtime.h"
#include "NaiveSqlLexer.h"
#include "NaiveSqlParser.h"
#include "NaiveSqlParserBaseListener.h"
#include "NaiveSqlParserBaseVisitor.h"
#include "parser.hpp"
namespace db {

	class WithDbTreeListener : public WithDbSql::NaiveSqlParserBaseListener {
	public:

		/***************create***************/
		void enterColumnCreateTable(WithDbSql::NaiveSqlParser::ColumnCreateTableContext *context) {
			CreateTable *node = new CreateTable();
			if (context->ifNotExists() != nullptr)
				node->ifNotExists = true;
			else
				node->ifNotExists = false;
			node->tableName = context->tableName()->getText();
			node->type = CREATE;
			stmt.push_back(node);
		}

		void enterColumnDeclaration(WithDbSql::NaiveSqlParser::ColumnDeclarationContext * context) {
			colDef coldef;
			coldef.colName = context->uid()->getText();
			CreateTable *createTable = (CreateTable *)stmt.back();
			createTable->colDefs.push_back(coldef);
		}

		void enterCreateIndex(WithDbSql::NaiveSqlParser::CreateIndexContext * context) { 
			CreateIndexStmt *node = new CreateIndexStmt;
			node->tableName = context->tableName()->getText();
			node->indexName = context->index_name()->getText();
			node->colName = context->uid()->getText();
			stmt.push_back(node);
		}

		/*add colconstraints*/
		void enterDefaultColumnConstraint(WithDbSql::NaiveSqlParser::DefaultColumnConstraintContext * context) {
			CreateTable *createTable = (CreateTable *)stmt.back();
			colDef *coldef = &createTable->colDefs.back();
			coldef->colConstraints.push_back(DEFAULT);
		}
		void enterNullColumnConstraint(WithDbSql::NaiveSqlParser::NullColumnConstraintContext * context) {
			CreateTable* createTable = (CreateTable *)stmt.back();
			colDef  *coldef = &createTable->colDefs.back();
			coldef->colConstraints.push_back(NOTNULL);
		}
		void enterAutoIncrementColumnConstraint(WithDbSql::NaiveSqlParser::AutoIncrementColumnConstraintContext * context) {
			CreateTable *createTable = (CreateTable *)stmt.back();
			colDef  *coldef = &createTable->colDefs.back();
			coldef->colConstraints.push_back(AUTO_INCREMENT);
		}
		void enterPrimaryKeyColumnConstraint(WithDbSql::NaiveSqlParser::PrimaryKeyColumnConstraintContext * context) {
			CreateTable *createTable = (CreateTable *)stmt.back();
			colDef  *coldef = &createTable->colDefs.back();
			coldef->colConstraints.push_back(PRIMARY_KEY);
		}
		void enterUniqueKeyColumnConstraint(WithDbSql::NaiveSqlParser::UniqueKeyColumnConstraintContext * context) {
			CreateTable* createTable = (CreateTable *)stmt.back();
			colDef  *coldef = &createTable->colDefs.back();
			coldef->colConstraints.push_back(UNIQUE_KEY);
		}
		/*parser col type*/
		void enterDimensionDataType(WithDbSql::NaiveSqlParser::DimensionDataTypeContext *context) {
			CreateTable* createTable = (CreateTable *)stmt.back();
			colDef  *coldef = &createTable->colDefs.back();
			coldef->colType = context->typeName->getText();
			if (context->lengthOneDimension() != nullptr)
				coldef->typeLen = context->lengthOneDimension()->getText();
		}

		void enterStringDataType(WithDbSql::NaiveSqlParser::StringDataTypeContext *context) {
			std::cout << context->typeName->getText() << std::endl;
			CreateTable* createTable = (CreateTable *)stmt.back();
			colDef  *coldef = &createTable->colDefs.back();
			coldef->colType = context->typeName->getText();
			if (context->lengthOneDimension() != nullptr)
				coldef->typeLen = context->lengthOneDimension()->getText();
		}

		void enterSimpleDataType(WithDbSql::NaiveSqlParser::SimpleDataTypeContext * context) {
			CreateTable* createTable = (CreateTable *)stmt.back();
			colDef  *coldef = &createTable->colDefs.back();
			coldef->colType = context->typeName->getText();
		}

		/* *****************select*******************/
		void enterSimpleSelect(WithDbSql::NaiveSqlParser::SimpleSelectContext * context) {
			std::cout << "enter select\n";
			SelectStmt *node = new SelectStmt();
			node->type = SELECT;
			if (context->UNIQUE() != nullptr) {
				node->ifDistinct = true;
			}
			stmt.push_back(node);
		}

		void enterSelectElements(WithDbSql::NaiveSqlParser::SelectElementsContext *ctx) {
			SelectStmt *node = (SelectStmt *)stmt.back();
			if (ctx->star != nullptr) {
				node->ifSelectAll = true;
			}
		}

		void enterSelectStarElement(WithDbSql::NaiveSqlParser::SelectStarElementContext *ctx) {
			SelectStmt *node = (SelectStmt *)stmt.back();
			SelectCol *selectCol = new SelectCol();
			selectCol->colName = ctx->fullId()->getText();
			selectCol->alias = "*";
			node->selectList.push_back(selectCol);
		}

		void enterSelectColumnElement(WithDbSql::NaiveSqlParser::SelectColumnElementContext *context) {
			SelectStmt *node = (SelectStmt *)stmt.back();
			SelectCol *selectCol = new SelectCol();
			selectCol->colName = context->fullId()->getText();
			if(context->AS() != nullptr)
				selectCol->alias = context->uid()->getText();
			node->selectList.push_back(selectCol);
		}

		void enterFromClause(WithDbSql::NaiveSqlParser::FromClauseContext *ctx)  {
			SelectStmt *node = (SelectStmt *)stmt.back();
			FromClause *from = new FromClause();
			for (WithDbSql::NaiveSqlParser::TableNameContext *i : ctx->tables()->tableName()) {
				from->tables.push_back(i->getText());
			}
			node->fromclause = from;
			isWhere = 1;
		}

		void enterOrderByClause(WithDbSql::NaiveSqlParser::OrderByClauseContext *ctx)  {
			SelectStmt *node = (SelectStmt *)stmt.back();
			for (WithDbSql::NaiveSqlParser::OrderByExpressionContext *i : ctx->orderByExpression()) {
				OrderClause *o = new OrderClause();
				o->name = i->expression()->getText();
				if (i->DESC() != nullptr)
					o->asc = false;
				node->orderClauses.push_back(o);
			}
		}


		/***************insert****************/
		void enterInsertStatement(WithDbSql::NaiveSqlParser::InsertStatementContext * context)  {
			InsertStmt *node = new InsertStmt();
			node->type = INSERT;
			node->tableName = context->tableName()->getText();
			for (WithDbSql::NaiveSqlParser::ConstantContext *i : context->constants()->constant()) {
				node->values.push_back(i->getText());
			}
			stmt.push_back(node);
		}

		void enterUidList(WithDbSql::NaiveSqlParser::UidListContext *ctx)  {
			InsertStmt *node = (InsertStmt *)stmt.back();
			for (WithDbSql::NaiveSqlParser::UidContext *i : ctx->uid()) {
				node->colums.push_back(i->getText());
			}
		}

		/*************DROP*****************/
		void enterDropTable(WithDbSql::NaiveSqlParser::DropTableContext * context) {
			DropTable *node = new DropTable();
			node->type = DROP;
			node->tableName = context->tableName()->getText();
			node->droptype = RESTRICT;
			node->ifExists = false;
			if (context->CASCADE() != nullptr)
				node->droptype = RESTRICT;
			if (context->ifExists() != nullptr)
				node->ifExists = true;
			stmt.push_back(node);
		}

		/***********DELETE*****************/
		void enterDeleteStatement(WithDbSql::NaiveSqlParser::DeleteStatementContext * context) { 
			DeleteStmt *node = new DeleteStmt();
			node->tableName = context->tableName()->getText();
			node->type = DELET;
			isWhere = 2;
			stmt.push_back(node);
		}


		/************UPDATE***************/
		void enterUpdateStatement(WithDbSql::NaiveSqlParser::UpdateStatementContext * context)  { 
			UpdateStmt *node = new UpdateStmt();
			node->tableName = context->tableName()->getText();
			node->type = UPDATE;

			for (WithDbSql::NaiveSqlParser::UpdatedElementContext *i : context->updatedElement()) {
				node->colums.push_back(i->fullId()->getText());
				node->values.push_back(i->expression()->getText());
			}
			isWhere = 3;
			stmt.push_back(node);
		}

		/*************Common***************/

		void addChildsForExpr() {
			if (exprStack.size() < 3) {
				std::cout << "error" << std::endl;
				return;
			}

			SimpleExpression *right = exprStack.top();
			exprStack.pop();
			SimpleExpression *left = exprStack.top();
			exprStack.pop();
			SimpleExpression *parent = exprStack.top();
			parent->left = left;
			parent->right = right;

			if (exprStack.size() > 1) {
				return;
			}
			SelectStmt *selNode;
			DeleteStmt *delNode;
			UpdateStmt *updateNode;
			switch (isWhere)
			{
				case 1:	// select
					selNode = (SelectStmt *)stmt.back();
					selNode->fromclause->whereLimits = parent;
					break;
				case 2: // delete
					delNode = (DeleteStmt *)stmt.back();
					delNode->whereLimists = parent;
					break;
				case 3: // update
					updateNode = (UpdateStmt *)stmt.back();
					updateNode->whereLimists = parent;
					break;
				default:
					break;
			}

			exprStack.pop();
		}

		void enterConstantExpressionAtom(WithDbSql::NaiveSqlParser::ConstantExpressionAtomContext * context) { 
			SimpleExpression *expr = new SimpleExpression();
			// expression is a str
			if (context->constant()->stringLiteral() != nullptr) {
				expr->type = STRINGLITERAL;
			}
			if (context->constant()->decimalLiteral() != nullptr) {
				expr->type = DECIMALLITERAL;
			}
			if (context->constant()->booleanLiteral() != nullptr) {
				expr->type = BOOLEANLITERAL;
			}
			expr->content = context->constant()->getText();
			exprStack.push(expr);
		}

		void enterFullColumnNameExpressionAtom(WithDbSql::NaiveSqlParser::FullColumnNameExpressionAtomContext * context) { 
			SimpleExpression *expr = new SimpleExpression();
			expr->content = context->fullId()->getText();
			expr->type = FULLID;
			exprStack.push(expr);
		}

		
		// Top Expression
		void enterLogicalExpression(WithDbSql::NaiveSqlParser::LogicalExpressionContext * ctx) { 
			SimpleExpression *expr = new SimpleExpression();
			expr->opcode = ctx->logicalOperator()->getText();
			expr->type = LOGICALEXPRESSION;
			exprStack.push(expr);
		}

		void exitLogicalExpression(WithDbSql::NaiveSqlParser::LogicalExpressionContext * ctx) {
			addChildsForExpr();
		}

		void enterBinaryComparasionPredicate(WithDbSql::NaiveSqlParser::BinaryComparasionPredicateContext *ctx) {
			SimpleExpression *expr = new SimpleExpression();
			expr->opcode = ctx->comparisonOperator()->getText();
			expr->type = COMPAREEXPRESSION;
			exprStack.push(expr);
		}

		void exitBinaryComparasionPredicate(WithDbSql::NaiveSqlParser::BinaryComparasionPredicateContext *ctx) {
			addChildsForExpr();
		}

		std::vector<SQLNode*> stmt;
		std::stack<SimpleExpression *> exprStack;
		int isWhere;   // 1 = select, 2 = delete, 3 = update;
	};

	class TreeVisitor : public WithDbSql::NaiveSqlParserBaseVisitor {

	public:
		std::vector<SQLNode*> stmt;

		antlrcpp::Any visitColumnCreateTable(WithDbSql::NaiveSqlParser::ColumnCreateTableContext *context) {
			CreateTable *node = new CreateTable();
			if (context->ifNotExists() != nullptr)
				node->ifNotExists = true;
			else
				node->ifNotExists = false;
			node->tableName = context->tableName()->getText();
			node->type = CREATE;
			stmt.push_back(node);
			return visit(context->createDefinitions());
		}

		antlrcpp::Any visitColumnDeclaration(WithDbSql::NaiveSqlParser::ColumnDeclarationContext *context) {
			colDef coldef;
			coldef.colName = context->uid()->getText();
			CreateTable *createTable = (CreateTable *)stmt.back();
			createTable->colDefs.push_back(coldef);
			return visitChildren(context);
		}

		antlrcpp::Any visitDefaultColumnConstraint(WithDbSql::NaiveSqlParser::DefaultColumnConstraintContext *context) {
			CreateTable *createTable = (CreateTable *)stmt.back();
			colDef *coldef = &createTable->colDefs.back();
			coldef->colConstraints.push_back(DEFAULT);
			return visitChildren(context);
		}

		antlrcpp::Any visitAutoIncrementColumnConstraint(WithDbSql::NaiveSqlParser::AutoIncrementColumnConstraintContext *context) {
			CreateTable *createTable = (CreateTable *)stmt.back();
			colDef  *coldef = &createTable->colDefs.back();
			coldef->colConstraints.push_back(AUTO_INCREMENT);
			return visitChildren(context);
		}

		antlrcpp::Any visitPrimaryKeyColumnConstraint(WithDbSql::NaiveSqlParser::PrimaryKeyColumnConstraintContext *context) {
			CreateTable *createTable = (CreateTable *)stmt.back();
			colDef  *coldef =&createTable->colDefs.back();
			coldef->colConstraints.push_back(PRIMARY_KEY);
			return visitChildren(context);
		}

		antlrcpp::Any visitUniqueKeyColumnConstraint(WithDbSql::NaiveSqlParser::UniqueKeyColumnConstraintContext *context) {
			CreateTable* createTable = (CreateTable *)stmt.back();
			colDef  *coldef = &createTable->colDefs.back();
			coldef->colConstraints.push_back(UNIQUE_KEY);
			return visitChildren(context);
		}

		

		antlrcpp::Any visitDmlStatement(WithDbSql::NaiveSqlParser::DmlStatementContext *context) {
			std::cout << "visit DMLstat" << std::endl;
			return visitChildren(context);
		}

		antlrcpp::Any visitSimpleSelect(WithDbSql::NaiveSqlParser::SimpleSelectContext *context) {
			std::cout << "visit SimpleSelect" << std::endl;
			return visitChildren(context);
		}
		
		antlrcpp::Any visitStringDataType(WithDbSql::NaiveSqlParser::StringDataTypeContext *context) {
			std::cout << context->typeName->getText() << std::endl;
			CreateTable* createTable = (CreateTable *)stmt.back();
			colDef  *coldef = &createTable->colDefs.back();
			coldef->colType = context->typeName->getText();
			if (context->lengthOneDimension() != nullptr)
				coldef->typeLen = context->lengthOneDimension()->getText(); 
			return visitChildren(context);
		}

		antlrcpp::Any visitDimensionDataType(WithDbSql::NaiveSqlParser::DimensionDataTypeContext *context) {
			CreateTable* createTable = (CreateTable *)stmt.back();
			colDef  *coldef = &createTable->colDefs.back();
			coldef->colType = context->typeName->getText();
			if (context->lengthOneDimension() != nullptr)
				coldef->typeLen = context->lengthOneDimension()->getText();
			return visitChildren(context);
		}

		antlrcpp::Any visitSimpleDataType(WithDbSql::NaiveSqlParser::SimpleDataTypeContext *context) {
			CreateTable* createTable = (CreateTable *)stmt.back();
			colDef  *coldef = &createTable->colDefs.back();
			coldef->colType = context->typeName->getText();
			return visitChildren(context);
		}
	};

	SQLNode* BaseParser::parseSQL(std::string &script) {
		antlr4::ANTLRInputStream input(script);

		WithDbSql::NaiveSqlLexer lexer(&input);
		antlr4::CommonTokenStream tokens(&lexer);


		WithDbSql::NaiveSqlParser parser(&tokens);
		antlr4::tree::ParseTree *tree = parser.root();

		WithDbTreeListener listener;
		antlr4::tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);

		std::cout << tree->toStringTree(&parser) << std::endl;

		if (listener.stmt.size() > 0)
			return listener.stmt.back();
		
		std::cout << "parser Error" << std::endl;
		return NULL;
	}

	std::vector<SQLNode*> BaseParser::parseSQL(std::fstream &in) {
		antlr4::ANTLRInputStream input(in);

		WithDbSql::NaiveSqlLexer lexer(&input);
		antlr4::CommonTokenStream tokens(&lexer);


		WithDbSql::NaiveSqlParser parser(&tokens);
		antlr4::tree::ParseTree *tree = parser.root();

		WithDbTreeListener listener;
		antlr4::tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);

		std::cout << tree->toStringTree() << std::endl;

		return listener.stmt;
		//return listener.stmt;
	}
}