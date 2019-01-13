
// Generated from NaiveSqlParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "NaiveSqlParserVisitor.h"


namespace WithDbSql {

/**
 * This class provides an empty implementation of NaiveSqlParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  NaiveSqlParserBaseVisitor : public NaiveSqlParserVisitor {
public:

  virtual antlrcpp::Any visitRoot(NaiveSqlParser::RootContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSqlStatements(NaiveSqlParser::SqlStatementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSqlStatement(NaiveSqlParser::SqlStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEmptyStatement(NaiveSqlParser::EmptyStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDdlStatement(NaiveSqlParser::DdlStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumnCreateTable(NaiveSqlParser::ColumnCreateTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateIndex(NaiveSqlParser::CreateIndexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndex_name(NaiveSqlParser::Index_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateDefinitions(NaiveSqlParser::CreateDefinitionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumnDeclaration(NaiveSqlParser::ColumnDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumnDefinition(NaiveSqlParser::ColumnDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNullColumnConstraint(NaiveSqlParser::NullColumnConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefaultColumnConstraint(NaiveSqlParser::DefaultColumnConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAutoIncrementColumnConstraint(NaiveSqlParser::AutoIncrementColumnConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrimaryKeyColumnConstraint(NaiveSqlParser::PrimaryKeyColumnConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUniqueKeyColumnConstraint(NaiveSqlParser::UniqueKeyColumnConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDropTable(NaiveSqlParser::DropTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDmlStatement(NaiveSqlParser::DmlStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleSelect(NaiveSqlParser::SimpleSelectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUpdateStatement(NaiveSqlParser::UpdateStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelectElements(NaiveSqlParser::SelectElementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelectStarElement(NaiveSqlParser::SelectStarElementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelectColumnElement(NaiveSqlParser::SelectColumnElementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeleteStatement(NaiveSqlParser::DeleteStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInsertStatement(NaiveSqlParser::InsertStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUpdatedElement(NaiveSqlParser::UpdatedElementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFromClause(NaiveSqlParser::FromClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGroupByItem(NaiveSqlParser::GroupByItemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOrderByClause(NaiveSqlParser::OrderByClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOrderByExpression(NaiveSqlParser::OrderByExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableSources(NaiveSqlParser::TableSourcesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNotExpression(NaiveSqlParser::NotExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicalExpression(NaiveSqlParser::LogicalExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPredicateExpression(NaiveSqlParser::PredicateExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressionAtomPredicate(NaiveSqlParser::ExpressionAtomPredicateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBetweenPredicate(NaiveSqlParser::BetweenPredicateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinaryComparasionPredicate(NaiveSqlParser::BinaryComparasionPredicateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIsNullPredicate(NaiveSqlParser::IsNullPredicateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLikePredicate(NaiveSqlParser::LikePredicateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRegexpPredicate(NaiveSqlParser::RegexpPredicateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstantExpressionAtom(NaiveSqlParser::ConstantExpressionAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFullColumnNameExpressionAtom(NaiveSqlParser::FullColumnNameExpressionAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMathExpressionAtom(NaiveSqlParser::MathExpressionAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComparisonOperator(NaiveSqlParser::ComparisonOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicalOperator(NaiveSqlParser::LogicalOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMathOperator(NaiveSqlParser::MathOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDecimalLiteral(NaiveSqlParser::DecimalLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStringLiteral(NaiveSqlParser::StringLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBooleanLiteral(NaiveSqlParser::BooleanLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHexadecimalLiteral(NaiveSqlParser::HexadecimalLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNullNotnull(NaiveSqlParser::NullNotnullContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstant(NaiveSqlParser::ConstantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUid(NaiveSqlParser::UidContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFullId(NaiveSqlParser::FullIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableName(NaiveSqlParser::TableNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUidList(NaiveSqlParser::UidListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTables(NaiveSqlParser::TablesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressions(NaiveSqlParser::ExpressionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstants(NaiveSqlParser::ConstantsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleStrings(NaiveSqlParser::SimpleStringsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUserVariables(NaiveSqlParser::UserVariablesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStringDataType(NaiveSqlParser::StringDataTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDimensionDataType(NaiveSqlParser::DimensionDataTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleDataType(NaiveSqlParser::SimpleDataTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIntervalType(NaiveSqlParser::IntervalTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIntervalTypeBase(NaiveSqlParser::IntervalTypeBaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLengthOneDimension(NaiveSqlParser::LengthOneDimensionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLengthTwoDimension(NaiveSqlParser::LengthTwoDimensionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefaultValue(NaiveSqlParser::DefaultValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCurrentTimestamp(NaiveSqlParser::CurrentTimestampContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressionOrDefault(NaiveSqlParser::ExpressionOrDefaultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfExists(NaiveSqlParser::IfExistsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfNotExists(NaiveSqlParser::IfNotExistsContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace WithDbSql
