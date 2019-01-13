// the grammar is a subset of original mysql g4 grammar

parser grammar NaiveSqlParser;

options {tokenVocab = NaiveSqlLexer;}

// TOP Level Description
root
    : sqlStatements? EOF
    ;

sqlStatements
    : (sqlStatement SEMI | emptyStatement)*
    ;

sqlStatement
    : ddlStatement | dmlStatement
    // : dmlStatement
    ;

emptyStatement
    : SEMI
    ;

ddlStatement
    : createTable | dropTable | createIndex
    ;

createTable
    : CREATE  TABLE ifNotExists?
       tableName createDefinitions                                  #columnCreateTable
    ;

createIndex
    : CREATE UNIQUE? INDEX index_name ON tableName '(' uid ')';

index_name
    : fullId;

createDefinitions
    : '(' createDefinition (',' createDefinition)* ')'
    ;

createDefinition
    : uid columnDefinition                                          #columnDeclaration
    ;

columnDefinition
    : dataType columnConstraint*
    ;

columnConstraint
    : nullNotnull                                                   #nullColumnConstraint
    | DEFAULT defaultValue                                          #defaultColumnConstraint
    | AUTO_INCREMENT                                                #autoIncrementColumnConstraint
    | PRIMARY? KEY                                                  #primaryKeyColumnConstraint
    | UNIQUE KEY?                                                   #uniqueKeyColumnConstraint
    ;

dropTable
    : DROP TABLE ifExists?
      tableName dropType=(RESTRICT | CASCADE)?
    ;


dmlStatement
    : selectStatement | deleteStatement | insertStatement| updateStatement
    ;

selectStatement
    : SELECT UNIQUE? selectElements
      fromClause? orderByClause?            #simpleSelect 
    ;                                
    

updateStatement
    : UPDATE tableName SET updatedElement (',' updatedElement)*
    (WHERE expression)? orderByClause?
    ;


selectElements
    : (star='*' | selectElement ) (',' selectElement)*
    ;

selectElement
    : fullId '.' '*'                              #selectStarElement
    | fullId (AS? uid)?                           #selectColumnElement
    ;



// dml statements: delete and insert 
deleteStatement
    : DELETE FROM tableName
      (WHERE expression)?
    ;

insertStatement
    : INSERT INTO tableName
      '(' columns=uidList ')' VALUES '(' constants ')'  
    ;

updatedElement
    : fullId '=' (expression | DEFAULT)
    ;
// 

fromClause
    : FROM tables
      (WHERE whereExpr=expression)?
    ;

groupByItem
    : expression order=(ASC | DESC)?
    ;

orderByClause
    : ORDER BY orderByExpression (',' orderByExpression)*
    ;

orderByExpression
    : expression order=(ASC | DESC)?
    ;

tableSources
    : tableName (',' tableName)*
    ;

//    Expressions, predicates

// Simplified approach for expression
expression
    : notOperator=(NOT | '!') expression                            #notExpression
    | expression logicalOperator expression                         #logicalExpression
    | predicate                                                     #predicateExpression
    ;

predicate
    : predicate IS nullNotnull                                      #isNullPredicate
    | left=predicate comparisonOperator right=predicate             #binaryComparasionPredicate
    | predicate NOT? BETWEEN predicate AND predicate                #betweenPredicate
    | predicate NOT? LIKE predicate (ESCAPE STRING_LITERAL)?        #likePredicate
    | predicate NOT? regex=(REGEXP | RLIKE) predicate               #regexpPredicate
    | expressionAtom                                                #expressionAtomPredicate
    ;


// Add in ASTVisitor nullNotnull in constant
expressionAtom
    : constant                                                      #constantExpressionAtom
    | fullId                                                        #fullColumnNameExpressionAtom
    | left=expressionAtom mathOperator right=expressionAtom         #mathExpressionAtom
    ;


comparisonOperator
    : '=' | '>' | '<' | '<' '=' | '>' '='
    | '<' '>' | '!' '=' | '<' '=' '>'
    ;

logicalOperator
    : AND | '&' '&' | XOR | OR | '|' '|'
    ;

mathOperator
    : '*' | '/' | '%' | DIV | MOD | '+' | '-' | '--'
    ;


// Literals 
decimalLiteral
    : DECIMAL_LITERAL | ZERO_DECIMAL | ONE_DECIMAL | TWO_DECIMAL
    ;


stringLiteral
    : STRING_LITERAL
    ;

booleanLiteral
    : TRUE | FALSE;

hexadecimalLiteral
    : HEXADECIMAL_LITERAL;

nullNotnull
    : NOT? (NULL_LITERAL | NULL_SPEC_LITERAL)
    ;

constant
    : stringLiteral | decimalLiteral
    | '-' decimalLiteral
    | hexadecimalLiteral | booleanLiteral
    | REAL_LITERAL | BIT_STRING
    | NOT? nullLiteral=(NULL_LITERAL | NULL_SPEC_LITERAL)
    ;



// DB Objects 
uid
    : ID
    ;

fullId
    : uid ('.' uid)?
    ;

tableName
    : uid ('.' uid)?
    ;

//    Common Lists

uidList
    : uid (',' uid)*
    ;

tables
    : tableName (',' tableName)*
    ;

expressions
    : expression (',' expression)*
    ;

constants
    : constant (',' constant)*
    ;

simpleStrings
    : STRING_LITERAL (',' STRING_LITERAL)*
    ;

userVariables
    : LOCAL_ID (',' LOCAL_ID)*
    ;

//    Data Types

dataType
    : typeName=(
      CHAR | VARCHAR | TINYTEXT | TEXT | MEDIUMTEXT | LONGTEXT
      )
      lengthOneDimension? BINARY?         #stringDataType
    | typeName=(
        TINYINT | SMALLINT | MEDIUMINT | INT | INTEGER | BIGINT
      )
      lengthOneDimension? UNSIGNED? ZEROFILL?                       #dimensionDataType
    | typeName=(REAL | DOUBLE | FLOAT)
      lengthTwoDimension? UNSIGNED? ZEROFILL?                       #dimensionDataType
    | typeName=(
        DATE | TINYBLOB | BLOB | MEDIUMBLOB | LONGBLOB
        | BOOL | BOOLEAN
      )                                                             #simpleDataType
    | typeName=(
        BIT | TIME | TIMESTAMP | DATETIME | BINARY
        | VARBINARY | YEAR
      )
      lengthOneDimension?                                           #dimensionDataType
    ;

intervalType
    : intervalTypeBase
    | YEAR | YEAR_MONTH | DAY_HOUR | DAY_MINUTE
    | DAY_SECOND | HOUR_MINUTE | HOUR_SECOND | MINUTE_SECOND
    | SECOND_MICROSECOND | MINUTE_MICROSECOND
    | HOUR_MICROSECOND | DAY_MICROSECOND
    ;

intervalTypeBase
    : QUARTER | MONTH | DAY | HOUR
    | MINUTE | WEEK | SECOND | MICROSECOND
    ;


lengthOneDimension
    : '(' decimalLiteral ')'
    ;

lengthTwoDimension
    : '(' decimalLiteral ',' decimalLiteral ')'
    ;

//    Common Expressons

defaultValue
    : NULL_LITERAL
    | constant
    | currentTimestamp (ON UPDATE currentTimestamp)?
    ;

currentTimestamp
    :
    (
      (CURRENT_TIMESTAMP | LOCALTIME | LOCALTIMESTAMP) ('(' decimalLiteral? ')')?
      | NOW '(' decimalLiteral? ')'
    )
    ;

expressionOrDefault
    : expression | DEFAULT
    ;

ifExists
    : IF EXISTS;

ifNotExists
    : IF NOT EXISTS;