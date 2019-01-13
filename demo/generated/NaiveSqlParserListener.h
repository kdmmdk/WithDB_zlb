
// Generated from NaiveSqlParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "NaiveSqlParser.h"


namespace WithDbSql {

/**
 * This interface defines an abstract listener for a parse tree produced by NaiveSqlParser.
 */
class  NaiveSqlParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterRoot(NaiveSqlParser::RootContext *ctx) = 0;
  virtual void exitRoot(NaiveSqlParser::RootContext *ctx) = 0;

  virtual void enterSqlStatements(NaiveSqlParser::SqlStatementsContext *ctx) = 0;
  virtual void exitSqlStatements(NaiveSqlParser::SqlStatementsContext *ctx) = 0;

  virtual void enterSqlStatement(NaiveSqlParser::SqlStatementContext *ctx) = 0;
  virtual void exitSqlStatement(NaiveSqlParser::SqlStatementContext *ctx) = 0;

  virtual void enterEmptyStatement(NaiveSqlParser::EmptyStatementContext *ctx) = 0;
  virtual void exitEmptyStatement(NaiveSqlParser::EmptyStatementContext *ctx) = 0;

  virtual void enterDdlStatement(NaiveSqlParser::DdlStatementContext *ctx) = 0;
  virtual void exitDdlStatement(NaiveSqlParser::DdlStatementContext *ctx) = 0;

  virtual void enterColumnCreateTable(NaiveSqlParser::ColumnCreateTableContext *ctx) = 0;
  virtual void exitColumnCreateTable(NaiveSqlParser::ColumnCreateTableContext *ctx) = 0;

  virtual void enterCreateIndex(NaiveSqlParser::CreateIndexContext *ctx) = 0;
  virtual void exitCreateIndex(NaiveSqlParser::CreateIndexContext *ctx) = 0;

  virtual void enterIndex_name(NaiveSqlParser::Index_nameContext *ctx) = 0;
  virtual void exitIndex_name(NaiveSqlParser::Index_nameContext *ctx) = 0;

  virtual void enterCreateDefinitions(NaiveSqlParser::CreateDefinitionsContext *ctx) = 0;
  virtual void exitCreateDefinitions(NaiveSqlParser::CreateDefinitionsContext *ctx) = 0;

  virtual void enterColumnDeclaration(NaiveSqlParser::ColumnDeclarationContext *ctx) = 0;
  virtual void exitColumnDeclaration(NaiveSqlParser::ColumnDeclarationContext *ctx) = 0;

  virtual void enterColumnDefinition(NaiveSqlParser::ColumnDefinitionContext *ctx) = 0;
  virtual void exitColumnDefinition(NaiveSqlParser::ColumnDefinitionContext *ctx) = 0;

  virtual void enterNullColumnConstraint(NaiveSqlParser::NullColumnConstraintContext *ctx) = 0;
  virtual void exitNullColumnConstraint(NaiveSqlParser::NullColumnConstraintContext *ctx) = 0;

  virtual void enterDefaultColumnConstraint(NaiveSqlParser::DefaultColumnConstraintContext *ctx) = 0;
  virtual void exitDefaultColumnConstraint(NaiveSqlParser::DefaultColumnConstraintContext *ctx) = 0;

  virtual void enterAutoIncrementColumnConstraint(NaiveSqlParser::AutoIncrementColumnConstraintContext *ctx) = 0;
  virtual void exitAutoIncrementColumnConstraint(NaiveSqlParser::AutoIncrementColumnConstraintContext *ctx) = 0;

  virtual void enterPrimaryKeyColumnConstraint(NaiveSqlParser::PrimaryKeyColumnConstraintContext *ctx) = 0;
  virtual void exitPrimaryKeyColumnConstraint(NaiveSqlParser::PrimaryKeyColumnConstraintContext *ctx) = 0;

  virtual void enterUniqueKeyColumnConstraint(NaiveSqlParser::UniqueKeyColumnConstraintContext *ctx) = 0;
  virtual void exitUniqueKeyColumnConstraint(NaiveSqlParser::UniqueKeyColumnConstraintContext *ctx) = 0;

  virtual void enterDropTable(NaiveSqlParser::DropTableContext *ctx) = 0;
  virtual void exitDropTable(NaiveSqlParser::DropTableContext *ctx) = 0;

  virtual void enterDmlStatement(NaiveSqlParser::DmlStatementContext *ctx) = 0;
  virtual void exitDmlStatement(NaiveSqlParser::DmlStatementContext *ctx) = 0;

  virtual void enterSimpleSelect(NaiveSqlParser::SimpleSelectContext *ctx) = 0;
  virtual void exitSimpleSelect(NaiveSqlParser::SimpleSelectContext *ctx) = 0;

  virtual void enterUpdateStatement(NaiveSqlParser::UpdateStatementContext *ctx) = 0;
  virtual void exitUpdateStatement(NaiveSqlParser::UpdateStatementContext *ctx) = 0;

  virtual void enterSelectElements(NaiveSqlParser::SelectElementsContext *ctx) = 0;
  virtual void exitSelectElements(NaiveSqlParser::SelectElementsContext *ctx) = 0;

  virtual void enterSelectStarElement(NaiveSqlParser::SelectStarElementContext *ctx) = 0;
  virtual void exitSelectStarElement(NaiveSqlParser::SelectStarElementContext *ctx) = 0;

  virtual void enterSelectColumnElement(NaiveSqlParser::SelectColumnElementContext *ctx) = 0;
  virtual void exitSelectColumnElement(NaiveSqlParser::SelectColumnElementContext *ctx) = 0;

  virtual void enterDeleteStatement(NaiveSqlParser::DeleteStatementContext *ctx) = 0;
  virtual void exitDeleteStatement(NaiveSqlParser::DeleteStatementContext *ctx) = 0;

  virtual void enterInsertStatement(NaiveSqlParser::InsertStatementContext *ctx) = 0;
  virtual void exitInsertStatement(NaiveSqlParser::InsertStatementContext *ctx) = 0;

  virtual void enterUpdatedElement(NaiveSqlParser::UpdatedElementContext *ctx) = 0;
  virtual void exitUpdatedElement(NaiveSqlParser::UpdatedElementContext *ctx) = 0;

  virtual void enterFromClause(NaiveSqlParser::FromClauseContext *ctx) = 0;
  virtual void exitFromClause(NaiveSqlParser::FromClauseContext *ctx) = 0;

  virtual void enterGroupByItem(NaiveSqlParser::GroupByItemContext *ctx) = 0;
  virtual void exitGroupByItem(NaiveSqlParser::GroupByItemContext *ctx) = 0;

  virtual void enterOrderByClause(NaiveSqlParser::OrderByClauseContext *ctx) = 0;
  virtual void exitOrderByClause(NaiveSqlParser::OrderByClauseContext *ctx) = 0;

  virtual void enterOrderByExpression(NaiveSqlParser::OrderByExpressionContext *ctx) = 0;
  virtual void exitOrderByExpression(NaiveSqlParser::OrderByExpressionContext *ctx) = 0;

  virtual void enterTableSources(NaiveSqlParser::TableSourcesContext *ctx) = 0;
  virtual void exitTableSources(NaiveSqlParser::TableSourcesContext *ctx) = 0;

  virtual void enterNotExpression(NaiveSqlParser::NotExpressionContext *ctx) = 0;
  virtual void exitNotExpression(NaiveSqlParser::NotExpressionContext *ctx) = 0;

  virtual void enterLogicalExpression(NaiveSqlParser::LogicalExpressionContext *ctx) = 0;
  virtual void exitLogicalExpression(NaiveSqlParser::LogicalExpressionContext *ctx) = 0;

  virtual void enterPredicateExpression(NaiveSqlParser::PredicateExpressionContext *ctx) = 0;
  virtual void exitPredicateExpression(NaiveSqlParser::PredicateExpressionContext *ctx) = 0;

  virtual void enterExpressionAtomPredicate(NaiveSqlParser::ExpressionAtomPredicateContext *ctx) = 0;
  virtual void exitExpressionAtomPredicate(NaiveSqlParser::ExpressionAtomPredicateContext *ctx) = 0;

  virtual void enterBetweenPredicate(NaiveSqlParser::BetweenPredicateContext *ctx) = 0;
  virtual void exitBetweenPredicate(NaiveSqlParser::BetweenPredicateContext *ctx) = 0;

  virtual void enterBinaryComparasionPredicate(NaiveSqlParser::BinaryComparasionPredicateContext *ctx) = 0;
  virtual void exitBinaryComparasionPredicate(NaiveSqlParser::BinaryComparasionPredicateContext *ctx) = 0;

  virtual void enterIsNullPredicate(NaiveSqlParser::IsNullPredicateContext *ctx) = 0;
  virtual void exitIsNullPredicate(NaiveSqlParser::IsNullPredicateContext *ctx) = 0;

  virtual void enterLikePredicate(NaiveSqlParser::LikePredicateContext *ctx) = 0;
  virtual void exitLikePredicate(NaiveSqlParser::LikePredicateContext *ctx) = 0;

  virtual void enterRegexpPredicate(NaiveSqlParser::RegexpPredicateContext *ctx) = 0;
  virtual void exitRegexpPredicate(NaiveSqlParser::RegexpPredicateContext *ctx) = 0;

  virtual void enterConstantExpressionAtom(NaiveSqlParser::ConstantExpressionAtomContext *ctx) = 0;
  virtual void exitConstantExpressionAtom(NaiveSqlParser::ConstantExpressionAtomContext *ctx) = 0;

  virtual void enterFullColumnNameExpressionAtom(NaiveSqlParser::FullColumnNameExpressionAtomContext *ctx) = 0;
  virtual void exitFullColumnNameExpressionAtom(NaiveSqlParser::FullColumnNameExpressionAtomContext *ctx) = 0;

  virtual void enterMathExpressionAtom(NaiveSqlParser::MathExpressionAtomContext *ctx) = 0;
  virtual void exitMathExpressionAtom(NaiveSqlParser::MathExpressionAtomContext *ctx) = 0;

  virtual void enterComparisonOperator(NaiveSqlParser::ComparisonOperatorContext *ctx) = 0;
  virtual void exitComparisonOperator(NaiveSqlParser::ComparisonOperatorContext *ctx) = 0;

  virtual void enterLogicalOperator(NaiveSqlParser::LogicalOperatorContext *ctx) = 0;
  virtual void exitLogicalOperator(NaiveSqlParser::LogicalOperatorContext *ctx) = 0;

  virtual void enterMathOperator(NaiveSqlParser::MathOperatorContext *ctx) = 0;
  virtual void exitMathOperator(NaiveSqlParser::MathOperatorContext *ctx) = 0;

  virtual void enterDecimalLiteral(NaiveSqlParser::DecimalLiteralContext *ctx) = 0;
  virtual void exitDecimalLiteral(NaiveSqlParser::DecimalLiteralContext *ctx) = 0;

  virtual void enterStringLiteral(NaiveSqlParser::StringLiteralContext *ctx) = 0;
  virtual void exitStringLiteral(NaiveSqlParser::StringLiteralContext *ctx) = 0;

  virtual void enterBooleanLiteral(NaiveSqlParser::BooleanLiteralContext *ctx) = 0;
  virtual void exitBooleanLiteral(NaiveSqlParser::BooleanLiteralContext *ctx) = 0;

  virtual void enterHexadecimalLiteral(NaiveSqlParser::HexadecimalLiteralContext *ctx) = 0;
  virtual void exitHexadecimalLiteral(NaiveSqlParser::HexadecimalLiteralContext *ctx) = 0;

  virtual void enterNullNotnull(NaiveSqlParser::NullNotnullContext *ctx) = 0;
  virtual void exitNullNotnull(NaiveSqlParser::NullNotnullContext *ctx) = 0;

  virtual void enterConstant(NaiveSqlParser::ConstantContext *ctx) = 0;
  virtual void exitConstant(NaiveSqlParser::ConstantContext *ctx) = 0;

  virtual void enterUid(NaiveSqlParser::UidContext *ctx) = 0;
  virtual void exitUid(NaiveSqlParser::UidContext *ctx) = 0;

  virtual void enterFullId(NaiveSqlParser::FullIdContext *ctx) = 0;
  virtual void exitFullId(NaiveSqlParser::FullIdContext *ctx) = 0;

  virtual void enterTableName(NaiveSqlParser::TableNameContext *ctx) = 0;
  virtual void exitTableName(NaiveSqlParser::TableNameContext *ctx) = 0;

  virtual void enterUidList(NaiveSqlParser::UidListContext *ctx) = 0;
  virtual void exitUidList(NaiveSqlParser::UidListContext *ctx) = 0;

  virtual void enterTables(NaiveSqlParser::TablesContext *ctx) = 0;
  virtual void exitTables(NaiveSqlParser::TablesContext *ctx) = 0;

  virtual void enterExpressions(NaiveSqlParser::ExpressionsContext *ctx) = 0;
  virtual void exitExpressions(NaiveSqlParser::ExpressionsContext *ctx) = 0;

  virtual void enterConstants(NaiveSqlParser::ConstantsContext *ctx) = 0;
  virtual void exitConstants(NaiveSqlParser::ConstantsContext *ctx) = 0;

  virtual void enterSimpleStrings(NaiveSqlParser::SimpleStringsContext *ctx) = 0;
  virtual void exitSimpleStrings(NaiveSqlParser::SimpleStringsContext *ctx) = 0;

  virtual void enterUserVariables(NaiveSqlParser::UserVariablesContext *ctx) = 0;
  virtual void exitUserVariables(NaiveSqlParser::UserVariablesContext *ctx) = 0;

  virtual void enterStringDataType(NaiveSqlParser::StringDataTypeContext *ctx) = 0;
  virtual void exitStringDataType(NaiveSqlParser::StringDataTypeContext *ctx) = 0;

  virtual void enterDimensionDataType(NaiveSqlParser::DimensionDataTypeContext *ctx) = 0;
  virtual void exitDimensionDataType(NaiveSqlParser::DimensionDataTypeContext *ctx) = 0;

  virtual void enterSimpleDataType(NaiveSqlParser::SimpleDataTypeContext *ctx) = 0;
  virtual void exitSimpleDataType(NaiveSqlParser::SimpleDataTypeContext *ctx) = 0;

  virtual void enterIntervalType(NaiveSqlParser::IntervalTypeContext *ctx) = 0;
  virtual void exitIntervalType(NaiveSqlParser::IntervalTypeContext *ctx) = 0;

  virtual void enterIntervalTypeBase(NaiveSqlParser::IntervalTypeBaseContext *ctx) = 0;
  virtual void exitIntervalTypeBase(NaiveSqlParser::IntervalTypeBaseContext *ctx) = 0;

  virtual void enterLengthOneDimension(NaiveSqlParser::LengthOneDimensionContext *ctx) = 0;
  virtual void exitLengthOneDimension(NaiveSqlParser::LengthOneDimensionContext *ctx) = 0;

  virtual void enterLengthTwoDimension(NaiveSqlParser::LengthTwoDimensionContext *ctx) = 0;
  virtual void exitLengthTwoDimension(NaiveSqlParser::LengthTwoDimensionContext *ctx) = 0;

  virtual void enterDefaultValue(NaiveSqlParser::DefaultValueContext *ctx) = 0;
  virtual void exitDefaultValue(NaiveSqlParser::DefaultValueContext *ctx) = 0;

  virtual void enterCurrentTimestamp(NaiveSqlParser::CurrentTimestampContext *ctx) = 0;
  virtual void exitCurrentTimestamp(NaiveSqlParser::CurrentTimestampContext *ctx) = 0;

  virtual void enterExpressionOrDefault(NaiveSqlParser::ExpressionOrDefaultContext *ctx) = 0;
  virtual void exitExpressionOrDefault(NaiveSqlParser::ExpressionOrDefaultContext *ctx) = 0;

  virtual void enterIfExists(NaiveSqlParser::IfExistsContext *ctx) = 0;
  virtual void exitIfExists(NaiveSqlParser::IfExistsContext *ctx) = 0;

  virtual void enterIfNotExists(NaiveSqlParser::IfNotExistsContext *ctx) = 0;
  virtual void exitIfNotExists(NaiveSqlParser::IfNotExistsContext *ctx) = 0;


};

}  // namespace WithDbSql
