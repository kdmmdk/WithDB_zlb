
// Generated from NaiveSqlParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "NaiveSqlParser.h"


namespace WithDbSql {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by NaiveSqlParser.
 */
class  NaiveSqlParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by NaiveSqlParser.
   */
    virtual antlrcpp::Any visitRoot(NaiveSqlParser::RootContext *context) = 0;

    virtual antlrcpp::Any visitSqlStatements(NaiveSqlParser::SqlStatementsContext *context) = 0;

    virtual antlrcpp::Any visitSqlStatement(NaiveSqlParser::SqlStatementContext *context) = 0;

    virtual antlrcpp::Any visitEmptyStatement(NaiveSqlParser::EmptyStatementContext *context) = 0;

    virtual antlrcpp::Any visitDdlStatement(NaiveSqlParser::DdlStatementContext *context) = 0;

    virtual antlrcpp::Any visitColumnCreateTable(NaiveSqlParser::ColumnCreateTableContext *context) = 0;

    virtual antlrcpp::Any visitCreateIndex(NaiveSqlParser::CreateIndexContext *context) = 0;

    virtual antlrcpp::Any visitIndex_name(NaiveSqlParser::Index_nameContext *context) = 0;

    virtual antlrcpp::Any visitCreateDefinitions(NaiveSqlParser::CreateDefinitionsContext *context) = 0;

    virtual antlrcpp::Any visitColumnDeclaration(NaiveSqlParser::ColumnDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitColumnDefinition(NaiveSqlParser::ColumnDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitNullColumnConstraint(NaiveSqlParser::NullColumnConstraintContext *context) = 0;

    virtual antlrcpp::Any visitDefaultColumnConstraint(NaiveSqlParser::DefaultColumnConstraintContext *context) = 0;

    virtual antlrcpp::Any visitAutoIncrementColumnConstraint(NaiveSqlParser::AutoIncrementColumnConstraintContext *context) = 0;

    virtual antlrcpp::Any visitPrimaryKeyColumnConstraint(NaiveSqlParser::PrimaryKeyColumnConstraintContext *context) = 0;

    virtual antlrcpp::Any visitUniqueKeyColumnConstraint(NaiveSqlParser::UniqueKeyColumnConstraintContext *context) = 0;

    virtual antlrcpp::Any visitDropTable(NaiveSqlParser::DropTableContext *context) = 0;

    virtual antlrcpp::Any visitDmlStatement(NaiveSqlParser::DmlStatementContext *context) = 0;

    virtual antlrcpp::Any visitSimpleSelect(NaiveSqlParser::SimpleSelectContext *context) = 0;

    virtual antlrcpp::Any visitUpdateStatement(NaiveSqlParser::UpdateStatementContext *context) = 0;

    virtual antlrcpp::Any visitSelectElements(NaiveSqlParser::SelectElementsContext *context) = 0;

    virtual antlrcpp::Any visitSelectStarElement(NaiveSqlParser::SelectStarElementContext *context) = 0;

    virtual antlrcpp::Any visitSelectColumnElement(NaiveSqlParser::SelectColumnElementContext *context) = 0;

    virtual antlrcpp::Any visitDeleteStatement(NaiveSqlParser::DeleteStatementContext *context) = 0;

    virtual antlrcpp::Any visitInsertStatement(NaiveSqlParser::InsertStatementContext *context) = 0;

    virtual antlrcpp::Any visitUpdatedElement(NaiveSqlParser::UpdatedElementContext *context) = 0;

    virtual antlrcpp::Any visitFromClause(NaiveSqlParser::FromClauseContext *context) = 0;

    virtual antlrcpp::Any visitGroupByItem(NaiveSqlParser::GroupByItemContext *context) = 0;

    virtual antlrcpp::Any visitOrderByClause(NaiveSqlParser::OrderByClauseContext *context) = 0;

    virtual antlrcpp::Any visitOrderByExpression(NaiveSqlParser::OrderByExpressionContext *context) = 0;

    virtual antlrcpp::Any visitTableSources(NaiveSqlParser::TableSourcesContext *context) = 0;

    virtual antlrcpp::Any visitNotExpression(NaiveSqlParser::NotExpressionContext *context) = 0;

    virtual antlrcpp::Any visitLogicalExpression(NaiveSqlParser::LogicalExpressionContext *context) = 0;

    virtual antlrcpp::Any visitPredicateExpression(NaiveSqlParser::PredicateExpressionContext *context) = 0;

    virtual antlrcpp::Any visitExpressionAtomPredicate(NaiveSqlParser::ExpressionAtomPredicateContext *context) = 0;

    virtual antlrcpp::Any visitBetweenPredicate(NaiveSqlParser::BetweenPredicateContext *context) = 0;

    virtual antlrcpp::Any visitBinaryComparasionPredicate(NaiveSqlParser::BinaryComparasionPredicateContext *context) = 0;

    virtual antlrcpp::Any visitIsNullPredicate(NaiveSqlParser::IsNullPredicateContext *context) = 0;

    virtual antlrcpp::Any visitLikePredicate(NaiveSqlParser::LikePredicateContext *context) = 0;

    virtual antlrcpp::Any visitRegexpPredicate(NaiveSqlParser::RegexpPredicateContext *context) = 0;

    virtual antlrcpp::Any visitConstantExpressionAtom(NaiveSqlParser::ConstantExpressionAtomContext *context) = 0;

    virtual antlrcpp::Any visitFullColumnNameExpressionAtom(NaiveSqlParser::FullColumnNameExpressionAtomContext *context) = 0;

    virtual antlrcpp::Any visitMathExpressionAtom(NaiveSqlParser::MathExpressionAtomContext *context) = 0;

    virtual antlrcpp::Any visitComparisonOperator(NaiveSqlParser::ComparisonOperatorContext *context) = 0;

    virtual antlrcpp::Any visitLogicalOperator(NaiveSqlParser::LogicalOperatorContext *context) = 0;

    virtual antlrcpp::Any visitMathOperator(NaiveSqlParser::MathOperatorContext *context) = 0;

    virtual antlrcpp::Any visitDecimalLiteral(NaiveSqlParser::DecimalLiteralContext *context) = 0;

    virtual antlrcpp::Any visitStringLiteral(NaiveSqlParser::StringLiteralContext *context) = 0;

    virtual antlrcpp::Any visitBooleanLiteral(NaiveSqlParser::BooleanLiteralContext *context) = 0;

    virtual antlrcpp::Any visitHexadecimalLiteral(NaiveSqlParser::HexadecimalLiteralContext *context) = 0;

    virtual antlrcpp::Any visitNullNotnull(NaiveSqlParser::NullNotnullContext *context) = 0;

    virtual antlrcpp::Any visitConstant(NaiveSqlParser::ConstantContext *context) = 0;

    virtual antlrcpp::Any visitUid(NaiveSqlParser::UidContext *context) = 0;

    virtual antlrcpp::Any visitFullId(NaiveSqlParser::FullIdContext *context) = 0;

    virtual antlrcpp::Any visitTableName(NaiveSqlParser::TableNameContext *context) = 0;

    virtual antlrcpp::Any visitUidList(NaiveSqlParser::UidListContext *context) = 0;

    virtual antlrcpp::Any visitTables(NaiveSqlParser::TablesContext *context) = 0;

    virtual antlrcpp::Any visitExpressions(NaiveSqlParser::ExpressionsContext *context) = 0;

    virtual antlrcpp::Any visitConstants(NaiveSqlParser::ConstantsContext *context) = 0;

    virtual antlrcpp::Any visitSimpleStrings(NaiveSqlParser::SimpleStringsContext *context) = 0;

    virtual antlrcpp::Any visitUserVariables(NaiveSqlParser::UserVariablesContext *context) = 0;

    virtual antlrcpp::Any visitStringDataType(NaiveSqlParser::StringDataTypeContext *context) = 0;

    virtual antlrcpp::Any visitDimensionDataType(NaiveSqlParser::DimensionDataTypeContext *context) = 0;

    virtual antlrcpp::Any visitSimpleDataType(NaiveSqlParser::SimpleDataTypeContext *context) = 0;

    virtual antlrcpp::Any visitIntervalType(NaiveSqlParser::IntervalTypeContext *context) = 0;

    virtual antlrcpp::Any visitIntervalTypeBase(NaiveSqlParser::IntervalTypeBaseContext *context) = 0;

    virtual antlrcpp::Any visitLengthOneDimension(NaiveSqlParser::LengthOneDimensionContext *context) = 0;

    virtual antlrcpp::Any visitLengthTwoDimension(NaiveSqlParser::LengthTwoDimensionContext *context) = 0;

    virtual antlrcpp::Any visitDefaultValue(NaiveSqlParser::DefaultValueContext *context) = 0;

    virtual antlrcpp::Any visitCurrentTimestamp(NaiveSqlParser::CurrentTimestampContext *context) = 0;

    virtual antlrcpp::Any visitExpressionOrDefault(NaiveSqlParser::ExpressionOrDefaultContext *context) = 0;

    virtual antlrcpp::Any visitIfExists(NaiveSqlParser::IfExistsContext *context) = 0;

    virtual antlrcpp::Any visitIfNotExists(NaiveSqlParser::IfNotExistsContext *context) = 0;


};

}  // namespace WithDbSql
