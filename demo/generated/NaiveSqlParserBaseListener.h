
// Generated from NaiveSqlParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "NaiveSqlParserListener.h"


namespace WithDbSql {

/**
 * This class provides an empty implementation of NaiveSqlParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  NaiveSqlParserBaseListener : public NaiveSqlParserListener {
public:

  virtual void enterRoot(NaiveSqlParser::RootContext * /*ctx*/) override { }
  virtual void exitRoot(NaiveSqlParser::RootContext * /*ctx*/) override { }

  virtual void enterSqlStatements(NaiveSqlParser::SqlStatementsContext * /*ctx*/) override { }
  virtual void exitSqlStatements(NaiveSqlParser::SqlStatementsContext * /*ctx*/) override { }

  virtual void enterSqlStatement(NaiveSqlParser::SqlStatementContext * /*ctx*/) override { }
  virtual void exitSqlStatement(NaiveSqlParser::SqlStatementContext * /*ctx*/) override { }

  virtual void enterEmptyStatement(NaiveSqlParser::EmptyStatementContext * /*ctx*/) override { }
  virtual void exitEmptyStatement(NaiveSqlParser::EmptyStatementContext * /*ctx*/) override { }

  virtual void enterDdlStatement(NaiveSqlParser::DdlStatementContext * /*ctx*/) override { }
  virtual void exitDdlStatement(NaiveSqlParser::DdlStatementContext * /*ctx*/) override { }

  virtual void enterColumnCreateTable(NaiveSqlParser::ColumnCreateTableContext * /*ctx*/) override { }
  virtual void exitColumnCreateTable(NaiveSqlParser::ColumnCreateTableContext * /*ctx*/) override { }

  virtual void enterCreateIndex(NaiveSqlParser::CreateIndexContext * /*ctx*/) override { }
  virtual void exitCreateIndex(NaiveSqlParser::CreateIndexContext * /*ctx*/) override { }

  virtual void enterIndex_name(NaiveSqlParser::Index_nameContext * /*ctx*/) override { }
  virtual void exitIndex_name(NaiveSqlParser::Index_nameContext * /*ctx*/) override { }

  virtual void enterCreateDefinitions(NaiveSqlParser::CreateDefinitionsContext * /*ctx*/) override { }
  virtual void exitCreateDefinitions(NaiveSqlParser::CreateDefinitionsContext * /*ctx*/) override { }

  virtual void enterColumnDeclaration(NaiveSqlParser::ColumnDeclarationContext * /*ctx*/) override { }
  virtual void exitColumnDeclaration(NaiveSqlParser::ColumnDeclarationContext * /*ctx*/) override { }

  virtual void enterColumnDefinition(NaiveSqlParser::ColumnDefinitionContext * /*ctx*/) override { }
  virtual void exitColumnDefinition(NaiveSqlParser::ColumnDefinitionContext * /*ctx*/) override { }

  virtual void enterNullColumnConstraint(NaiveSqlParser::NullColumnConstraintContext * /*ctx*/) override { }
  virtual void exitNullColumnConstraint(NaiveSqlParser::NullColumnConstraintContext * /*ctx*/) override { }

  virtual void enterDefaultColumnConstraint(NaiveSqlParser::DefaultColumnConstraintContext * /*ctx*/) override { }
  virtual void exitDefaultColumnConstraint(NaiveSqlParser::DefaultColumnConstraintContext * /*ctx*/) override { }

  virtual void enterAutoIncrementColumnConstraint(NaiveSqlParser::AutoIncrementColumnConstraintContext * /*ctx*/) override { }
  virtual void exitAutoIncrementColumnConstraint(NaiveSqlParser::AutoIncrementColumnConstraintContext * /*ctx*/) override { }

  virtual void enterPrimaryKeyColumnConstraint(NaiveSqlParser::PrimaryKeyColumnConstraintContext * /*ctx*/) override { }
  virtual void exitPrimaryKeyColumnConstraint(NaiveSqlParser::PrimaryKeyColumnConstraintContext * /*ctx*/) override { }

  virtual void enterUniqueKeyColumnConstraint(NaiveSqlParser::UniqueKeyColumnConstraintContext * /*ctx*/) override { }
  virtual void exitUniqueKeyColumnConstraint(NaiveSqlParser::UniqueKeyColumnConstraintContext * /*ctx*/) override { }

  virtual void enterDropTable(NaiveSqlParser::DropTableContext * /*ctx*/) override { }
  virtual void exitDropTable(NaiveSqlParser::DropTableContext * /*ctx*/) override { }

  virtual void enterDmlStatement(NaiveSqlParser::DmlStatementContext * /*ctx*/) override { }
  virtual void exitDmlStatement(NaiveSqlParser::DmlStatementContext * /*ctx*/) override { }

  virtual void enterSimpleSelect(NaiveSqlParser::SimpleSelectContext * /*ctx*/) override { }
  virtual void exitSimpleSelect(NaiveSqlParser::SimpleSelectContext * /*ctx*/) override { }

  virtual void enterUpdateStatement(NaiveSqlParser::UpdateStatementContext * /*ctx*/) override { }
  virtual void exitUpdateStatement(NaiveSqlParser::UpdateStatementContext * /*ctx*/) override { }

  virtual void enterSelectElements(NaiveSqlParser::SelectElementsContext * /*ctx*/) override { }
  virtual void exitSelectElements(NaiveSqlParser::SelectElementsContext * /*ctx*/) override { }

  virtual void enterSelectStarElement(NaiveSqlParser::SelectStarElementContext * /*ctx*/) override { }
  virtual void exitSelectStarElement(NaiveSqlParser::SelectStarElementContext * /*ctx*/) override { }

  virtual void enterSelectColumnElement(NaiveSqlParser::SelectColumnElementContext * /*ctx*/) override { }
  virtual void exitSelectColumnElement(NaiveSqlParser::SelectColumnElementContext * /*ctx*/) override { }

  virtual void enterDeleteStatement(NaiveSqlParser::DeleteStatementContext * /*ctx*/) override { }
  virtual void exitDeleteStatement(NaiveSqlParser::DeleteStatementContext * /*ctx*/) override { }

  virtual void enterInsertStatement(NaiveSqlParser::InsertStatementContext * /*ctx*/) override { }
  virtual void exitInsertStatement(NaiveSqlParser::InsertStatementContext * /*ctx*/) override { }

  virtual void enterUpdatedElement(NaiveSqlParser::UpdatedElementContext * /*ctx*/) override { }
  virtual void exitUpdatedElement(NaiveSqlParser::UpdatedElementContext * /*ctx*/) override { }

  virtual void enterFromClause(NaiveSqlParser::FromClauseContext * /*ctx*/) override { }
  virtual void exitFromClause(NaiveSqlParser::FromClauseContext * /*ctx*/) override { }

  virtual void enterGroupByItem(NaiveSqlParser::GroupByItemContext * /*ctx*/) override { }
  virtual void exitGroupByItem(NaiveSqlParser::GroupByItemContext * /*ctx*/) override { }

  virtual void enterOrderByClause(NaiveSqlParser::OrderByClauseContext * /*ctx*/) override { }
  virtual void exitOrderByClause(NaiveSqlParser::OrderByClauseContext * /*ctx*/) override { }

  virtual void enterOrderByExpression(NaiveSqlParser::OrderByExpressionContext * /*ctx*/) override { }
  virtual void exitOrderByExpression(NaiveSqlParser::OrderByExpressionContext * /*ctx*/) override { }

  virtual void enterTableSources(NaiveSqlParser::TableSourcesContext * /*ctx*/) override { }
  virtual void exitTableSources(NaiveSqlParser::TableSourcesContext * /*ctx*/) override { }

  virtual void enterNotExpression(NaiveSqlParser::NotExpressionContext * /*ctx*/) override { }
  virtual void exitNotExpression(NaiveSqlParser::NotExpressionContext * /*ctx*/) override { }

  virtual void enterLogicalExpression(NaiveSqlParser::LogicalExpressionContext * /*ctx*/) override { }
  virtual void exitLogicalExpression(NaiveSqlParser::LogicalExpressionContext * /*ctx*/) override { }

  virtual void enterPredicateExpression(NaiveSqlParser::PredicateExpressionContext * /*ctx*/) override { }
  virtual void exitPredicateExpression(NaiveSqlParser::PredicateExpressionContext * /*ctx*/) override { }

  virtual void enterExpressionAtomPredicate(NaiveSqlParser::ExpressionAtomPredicateContext * /*ctx*/) override { }
  virtual void exitExpressionAtomPredicate(NaiveSqlParser::ExpressionAtomPredicateContext * /*ctx*/) override { }

  virtual void enterBetweenPredicate(NaiveSqlParser::BetweenPredicateContext * /*ctx*/) override { }
  virtual void exitBetweenPredicate(NaiveSqlParser::BetweenPredicateContext * /*ctx*/) override { }

  virtual void enterBinaryComparasionPredicate(NaiveSqlParser::BinaryComparasionPredicateContext * /*ctx*/) override { }
  virtual void exitBinaryComparasionPredicate(NaiveSqlParser::BinaryComparasionPredicateContext * /*ctx*/) override { }

  virtual void enterIsNullPredicate(NaiveSqlParser::IsNullPredicateContext * /*ctx*/) override { }
  virtual void exitIsNullPredicate(NaiveSqlParser::IsNullPredicateContext * /*ctx*/) override { }

  virtual void enterLikePredicate(NaiveSqlParser::LikePredicateContext * /*ctx*/) override { }
  virtual void exitLikePredicate(NaiveSqlParser::LikePredicateContext * /*ctx*/) override { }

  virtual void enterRegexpPredicate(NaiveSqlParser::RegexpPredicateContext * /*ctx*/) override { }
  virtual void exitRegexpPredicate(NaiveSqlParser::RegexpPredicateContext * /*ctx*/) override { }

  virtual void enterConstantExpressionAtom(NaiveSqlParser::ConstantExpressionAtomContext * /*ctx*/) override { }
  virtual void exitConstantExpressionAtom(NaiveSqlParser::ConstantExpressionAtomContext * /*ctx*/) override { }

  virtual void enterFullColumnNameExpressionAtom(NaiveSqlParser::FullColumnNameExpressionAtomContext * /*ctx*/) override { }
  virtual void exitFullColumnNameExpressionAtom(NaiveSqlParser::FullColumnNameExpressionAtomContext * /*ctx*/) override { }

  virtual void enterMathExpressionAtom(NaiveSqlParser::MathExpressionAtomContext * /*ctx*/) override { }
  virtual void exitMathExpressionAtom(NaiveSqlParser::MathExpressionAtomContext * /*ctx*/) override { }

  virtual void enterComparisonOperator(NaiveSqlParser::ComparisonOperatorContext * /*ctx*/) override { }
  virtual void exitComparisonOperator(NaiveSqlParser::ComparisonOperatorContext * /*ctx*/) override { }

  virtual void enterLogicalOperator(NaiveSqlParser::LogicalOperatorContext * /*ctx*/) override { }
  virtual void exitLogicalOperator(NaiveSqlParser::LogicalOperatorContext * /*ctx*/) override { }

  virtual void enterMathOperator(NaiveSqlParser::MathOperatorContext * /*ctx*/) override { }
  virtual void exitMathOperator(NaiveSqlParser::MathOperatorContext * /*ctx*/) override { }

  virtual void enterDecimalLiteral(NaiveSqlParser::DecimalLiteralContext * /*ctx*/) override { }
  virtual void exitDecimalLiteral(NaiveSqlParser::DecimalLiteralContext * /*ctx*/) override { }

  virtual void enterStringLiteral(NaiveSqlParser::StringLiteralContext * /*ctx*/) override { }
  virtual void exitStringLiteral(NaiveSqlParser::StringLiteralContext * /*ctx*/) override { }

  virtual void enterBooleanLiteral(NaiveSqlParser::BooleanLiteralContext * /*ctx*/) override { }
  virtual void exitBooleanLiteral(NaiveSqlParser::BooleanLiteralContext * /*ctx*/) override { }

  virtual void enterHexadecimalLiteral(NaiveSqlParser::HexadecimalLiteralContext * /*ctx*/) override { }
  virtual void exitHexadecimalLiteral(NaiveSqlParser::HexadecimalLiteralContext * /*ctx*/) override { }

  virtual void enterNullNotnull(NaiveSqlParser::NullNotnullContext * /*ctx*/) override { }
  virtual void exitNullNotnull(NaiveSqlParser::NullNotnullContext * /*ctx*/) override { }

  virtual void enterConstant(NaiveSqlParser::ConstantContext * /*ctx*/) override { }
  virtual void exitConstant(NaiveSqlParser::ConstantContext * /*ctx*/) override { }

  virtual void enterUid(NaiveSqlParser::UidContext * /*ctx*/) override { }
  virtual void exitUid(NaiveSqlParser::UidContext * /*ctx*/) override { }

  virtual void enterFullId(NaiveSqlParser::FullIdContext * /*ctx*/) override { }
  virtual void exitFullId(NaiveSqlParser::FullIdContext * /*ctx*/) override { }

  virtual void enterTableName(NaiveSqlParser::TableNameContext * /*ctx*/) override { }
  virtual void exitTableName(NaiveSqlParser::TableNameContext * /*ctx*/) override { }

  virtual void enterUidList(NaiveSqlParser::UidListContext * /*ctx*/) override { }
  virtual void exitUidList(NaiveSqlParser::UidListContext * /*ctx*/) override { }

  virtual void enterTables(NaiveSqlParser::TablesContext * /*ctx*/) override { }
  virtual void exitTables(NaiveSqlParser::TablesContext * /*ctx*/) override { }

  virtual void enterExpressions(NaiveSqlParser::ExpressionsContext * /*ctx*/) override { }
  virtual void exitExpressions(NaiveSqlParser::ExpressionsContext * /*ctx*/) override { }

  virtual void enterConstants(NaiveSqlParser::ConstantsContext * /*ctx*/) override { }
  virtual void exitConstants(NaiveSqlParser::ConstantsContext * /*ctx*/) override { }

  virtual void enterSimpleStrings(NaiveSqlParser::SimpleStringsContext * /*ctx*/) override { }
  virtual void exitSimpleStrings(NaiveSqlParser::SimpleStringsContext * /*ctx*/) override { }

  virtual void enterUserVariables(NaiveSqlParser::UserVariablesContext * /*ctx*/) override { }
  virtual void exitUserVariables(NaiveSqlParser::UserVariablesContext * /*ctx*/) override { }

  virtual void enterStringDataType(NaiveSqlParser::StringDataTypeContext * /*ctx*/) override { }
  virtual void exitStringDataType(NaiveSqlParser::StringDataTypeContext * /*ctx*/) override { }

  virtual void enterDimensionDataType(NaiveSqlParser::DimensionDataTypeContext * /*ctx*/) override { }
  virtual void exitDimensionDataType(NaiveSqlParser::DimensionDataTypeContext * /*ctx*/) override { }

  virtual void enterSimpleDataType(NaiveSqlParser::SimpleDataTypeContext * /*ctx*/) override { }
  virtual void exitSimpleDataType(NaiveSqlParser::SimpleDataTypeContext * /*ctx*/) override { }

  virtual void enterIntervalType(NaiveSqlParser::IntervalTypeContext * /*ctx*/) override { }
  virtual void exitIntervalType(NaiveSqlParser::IntervalTypeContext * /*ctx*/) override { }

  virtual void enterIntervalTypeBase(NaiveSqlParser::IntervalTypeBaseContext * /*ctx*/) override { }
  virtual void exitIntervalTypeBase(NaiveSqlParser::IntervalTypeBaseContext * /*ctx*/) override { }

  virtual void enterLengthOneDimension(NaiveSqlParser::LengthOneDimensionContext * /*ctx*/) override { }
  virtual void exitLengthOneDimension(NaiveSqlParser::LengthOneDimensionContext * /*ctx*/) override { }

  virtual void enterLengthTwoDimension(NaiveSqlParser::LengthTwoDimensionContext * /*ctx*/) override { }
  virtual void exitLengthTwoDimension(NaiveSqlParser::LengthTwoDimensionContext * /*ctx*/) override { }

  virtual void enterDefaultValue(NaiveSqlParser::DefaultValueContext * /*ctx*/) override { }
  virtual void exitDefaultValue(NaiveSqlParser::DefaultValueContext * /*ctx*/) override { }

  virtual void enterCurrentTimestamp(NaiveSqlParser::CurrentTimestampContext * /*ctx*/) override { }
  virtual void exitCurrentTimestamp(NaiveSqlParser::CurrentTimestampContext * /*ctx*/) override { }

  virtual void enterExpressionOrDefault(NaiveSqlParser::ExpressionOrDefaultContext * /*ctx*/) override { }
  virtual void exitExpressionOrDefault(NaiveSqlParser::ExpressionOrDefaultContext * /*ctx*/) override { }

  virtual void enterIfExists(NaiveSqlParser::IfExistsContext * /*ctx*/) override { }
  virtual void exitIfExists(NaiveSqlParser::IfExistsContext * /*ctx*/) override { }

  virtual void enterIfNotExists(NaiveSqlParser::IfNotExistsContext * /*ctx*/) override { }
  virtual void exitIfNotExists(NaiveSqlParser::IfNotExistsContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace WithDbSql
