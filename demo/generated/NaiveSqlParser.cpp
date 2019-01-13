
// Generated from NaiveSqlParser.g4 by ANTLR 4.7.1


#include "NaiveSqlParserListener.h"
#include "NaiveSqlParserVisitor.h"

#include "NaiveSqlParser.h"


using namespace antlrcpp;
using namespace WithDbSql;
using namespace antlr4;

NaiveSqlParser::NaiveSqlParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

NaiveSqlParser::~NaiveSqlParser() {
  delete _interpreter;
}

std::string NaiveSqlParser::getGrammarFileName() const {
  return "NaiveSqlParser.g4";
}

const std::vector<std::string>& NaiveSqlParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& NaiveSqlParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- RootContext ------------------------------------------------------------------

NaiveSqlParser::RootContext::RootContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NaiveSqlParser::RootContext::EOF() {
  return getToken(NaiveSqlParser::EOF, 0);
}

NaiveSqlParser::SqlStatementsContext* NaiveSqlParser::RootContext::sqlStatements() {
  return getRuleContext<NaiveSqlParser::SqlStatementsContext>(0);
}


size_t NaiveSqlParser::RootContext::getRuleIndex() const {
  return NaiveSqlParser::RuleRoot;
}

void NaiveSqlParser::RootContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRoot(this);
}

void NaiveSqlParser::RootContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRoot(this);
}


antlrcpp::Any NaiveSqlParser::RootContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitRoot(this);
  else
    return visitor->visitChildren(this);
}

NaiveSqlParser::RootContext* NaiveSqlParser::root() {
  RootContext *_localctx = _tracker.createInstance<RootContext>(_ctx, getState());
  enterRule(_localctx, 0, NaiveSqlParser::RuleRoot);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(115);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      setState(114);
      sqlStatements();
      break;
    }

    }
    setState(117);
    match(NaiveSqlParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SqlStatementsContext ------------------------------------------------------------------

NaiveSqlParser::SqlStatementsContext::SqlStatementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<NaiveSqlParser::SqlStatementContext *> NaiveSqlParser::SqlStatementsContext::sqlStatement() {
  return getRuleContexts<NaiveSqlParser::SqlStatementContext>();
}

NaiveSqlParser::SqlStatementContext* NaiveSqlParser::SqlStatementsContext::sqlStatement(size_t i) {
  return getRuleContext<NaiveSqlParser::SqlStatementContext>(i);
}

std::vector<tree::TerminalNode *> NaiveSqlParser::SqlStatementsContext::SEMI() {
  return getTokens(NaiveSqlParser::SEMI);
}

tree::TerminalNode* NaiveSqlParser::SqlStatementsContext::SEMI(size_t i) {
  return getToken(NaiveSqlParser::SEMI, i);
}

std::vector<NaiveSqlParser::EmptyStatementContext *> NaiveSqlParser::SqlStatementsContext::emptyStatement() {
  return getRuleContexts<NaiveSqlParser::EmptyStatementContext>();
}

NaiveSqlParser::EmptyStatementContext* NaiveSqlParser::SqlStatementsContext::emptyStatement(size_t i) {
  return getRuleContext<NaiveSqlParser::EmptyStatementContext>(i);
}


size_t NaiveSqlParser::SqlStatementsContext::getRuleIndex() const {
  return NaiveSqlParser::RuleSqlStatements;
}

void NaiveSqlParser::SqlStatementsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSqlStatements(this);
}

void NaiveSqlParser::SqlStatementsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSqlStatements(this);
}


antlrcpp::Any NaiveSqlParser::SqlStatementsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitSqlStatements(this);
  else
    return visitor->visitChildren(this);
}

NaiveSqlParser::SqlStatementsContext* NaiveSqlParser::sqlStatements() {
  SqlStatementsContext *_localctx = _tracker.createInstance<SqlStatementsContext>(_ctx, getState());
  enterRule(_localctx, 2, NaiveSqlParser::RuleSqlStatements);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(125);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 29) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 29)) & ((1ULL << (NaiveSqlParser::CREATE - 29))
      | (1ULL << (NaiveSqlParser::DELETE - 29))
      | (1ULL << (NaiveSqlParser::DROP - 29))
      | (1ULL << (NaiveSqlParser::INSERT - 29)))) != 0) || _la == NaiveSqlParser::SELECT

    || _la == NaiveSqlParser::UPDATE || _la == NaiveSqlParser::SEMI) {
      setState(123);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case NaiveSqlParser::CREATE:
        case NaiveSqlParser::DELETE:
        case NaiveSqlParser::DROP:
        case NaiveSqlParser::INSERT:
        case NaiveSqlParser::SELECT:
        case NaiveSqlParser::UPDATE: {
          setState(119);
          sqlStatement();
          setState(120);
          match(NaiveSqlParser::SEMI);
          break;
        }

        case NaiveSqlParser::SEMI: {
          setState(122);
          emptyStatement();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(127);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SqlStatementContext ------------------------------------------------------------------

NaiveSqlParser::SqlStatementContext::SqlStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NaiveSqlParser::DdlStatementContext* NaiveSqlParser::SqlStatementContext::ddlStatement() {
  return getRuleContext<NaiveSqlParser::DdlStatementContext>(0);
}

NaiveSqlParser::DmlStatementContext* NaiveSqlParser::SqlStatementContext::dmlStatement() {
  return getRuleContext<NaiveSqlParser::DmlStatementContext>(0);
}


size_t NaiveSqlParser::SqlStatementContext::getRuleIndex() const {
  return NaiveSqlParser::RuleSqlStatement;
}

void NaiveSqlParser::SqlStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSqlStatement(this);
}

void NaiveSqlParser::SqlStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSqlStatement(this);
}


antlrcpp::Any NaiveSqlParser::SqlStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitSqlStatement(this);
  else
    return visitor->visitChildren(this);
}

NaiveSqlParser::SqlStatementContext* NaiveSqlParser::sqlStatement() {
  SqlStatementContext *_localctx = _tracker.createInstance<SqlStatementContext>(_ctx, getState());
  enterRule(_localctx, 4, NaiveSqlParser::RuleSqlStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(130);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NaiveSqlParser::CREATE:
      case NaiveSqlParser::DROP: {
        enterOuterAlt(_localctx, 1);
        setState(128);
        ddlStatement();
        break;
      }

      case NaiveSqlParser::DELETE:
      case NaiveSqlParser::INSERT:
      case NaiveSqlParser::SELECT:
      case NaiveSqlParser::UPDATE: {
        enterOuterAlt(_localctx, 2);
        setState(129);
        dmlStatement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EmptyStatementContext ------------------------------------------------------------------

NaiveSqlParser::EmptyStatementContext::EmptyStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NaiveSqlParser::EmptyStatementContext::SEMI() {
  return getToken(NaiveSqlParser::SEMI, 0);
}


size_t NaiveSqlParser::EmptyStatementContext::getRuleIndex() const {
  return NaiveSqlParser::RuleEmptyStatement;
}

void NaiveSqlParser::EmptyStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEmptyStatement(this);
}

void NaiveSqlParser::EmptyStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEmptyStatement(this);
}


antlrcpp::Any NaiveSqlParser::EmptyStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitEmptyStatement(this);
  else
    return visitor->visitChildren(this);
}

NaiveSqlParser::EmptyStatementContext* NaiveSqlParser::emptyStatement() {
  EmptyStatementContext *_localctx = _tracker.createInstance<EmptyStatementContext>(_ctx, getState());
  enterRule(_localctx, 6, NaiveSqlParser::RuleEmptyStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(132);
    match(NaiveSqlParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DdlStatementContext ------------------------------------------------------------------

NaiveSqlParser::DdlStatementContext::DdlStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NaiveSqlParser::CreateTableContext* NaiveSqlParser::DdlStatementContext::createTable() {
  return getRuleContext<NaiveSqlParser::CreateTableContext>(0);
}

NaiveSqlParser::DropTableContext* NaiveSqlParser::DdlStatementContext::dropTable() {
  return getRuleContext<NaiveSqlParser::DropTableContext>(0);
}

NaiveSqlParser::CreateIndexContext* NaiveSqlParser::DdlStatementContext::createIndex() {
  return getRuleContext<NaiveSqlParser::CreateIndexContext>(0);
}


size_t NaiveSqlParser::DdlStatementContext::getRuleIndex() const {
  return NaiveSqlParser::RuleDdlStatement;
}

void NaiveSqlParser::DdlStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDdlStatement(this);
}

void NaiveSqlParser::DdlStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDdlStatement(this);
}


antlrcpp::Any NaiveSqlParser::DdlStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitDdlStatement(this);
  else
    return visitor->visitChildren(this);
}

NaiveSqlParser::DdlStatementContext* NaiveSqlParser::ddlStatement() {
  DdlStatementContext *_localctx = _tracker.createInstance<DdlStatementContext>(_ctx, getState());
  enterRule(_localctx, 8, NaiveSqlParser::RuleDdlStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(137);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(134);
      createTable();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(135);
      dropTable();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(136);
      createIndex();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CreateTableContext ------------------------------------------------------------------

NaiveSqlParser::CreateTableContext::CreateTableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t NaiveSqlParser::CreateTableContext::getRuleIndex() const {
  return NaiveSqlParser::RuleCreateTable;
}

void NaiveSqlParser::CreateTableContext::copyFrom(CreateTableContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ColumnCreateTableContext ------------------------------------------------------------------

tree::TerminalNode* NaiveSqlParser::ColumnCreateTableContext::CREATE() {
  return getToken(NaiveSqlParser::CREATE, 0);
}

tree::TerminalNode* NaiveSqlParser::ColumnCreateTableContext::TABLE() {
  return getToken(NaiveSqlParser::TABLE, 0);
}

NaiveSqlParser::TableNameContext* NaiveSqlParser::ColumnCreateTableContext::tableName() {
  return getRuleContext<NaiveSqlParser::TableNameContext>(0);
}

NaiveSqlParser::CreateDefinitionsContext* NaiveSqlParser::ColumnCreateTableContext::createDefinitions() {
  return getRuleContext<NaiveSqlParser::CreateDefinitionsContext>(0);
}

NaiveSqlParser::IfNotExistsContext* NaiveSqlParser::ColumnCreateTableContext::ifNotExists() {
  return getRuleContext<NaiveSqlParser::IfNotExistsContext>(0);
}

NaiveSqlParser::ColumnCreateTableContext::ColumnCreateTableContext(CreateTableContext *ctx) { copyFrom(ctx); }

void NaiveSqlParser::ColumnCreateTableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterColumnCreateTable(this);
}
void NaiveSqlParser::ColumnCreateTableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitColumnCreateTable(this);
}

antlrcpp::Any NaiveSqlParser::ColumnCreateTableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitColumnCreateTable(this);
  else
    return visitor->visitChildren(this);
}
NaiveSqlParser::CreateTableContext* NaiveSqlParser::createTable() {
  CreateTableContext *_localctx = _tracker.createInstance<CreateTableContext>(_ctx, getState());
  enterRule(_localctx, 10, NaiveSqlParser::RuleCreateTable);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<CreateTableContext *>(_tracker.createInstance<NaiveSqlParser::ColumnCreateTableContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(139);
    match(NaiveSqlParser::CREATE);
    setState(140);
    match(NaiveSqlParser::TABLE);
    setState(142);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NaiveSqlParser::IF) {
      setState(141);
      ifNotExists();
    }
    setState(144);
    tableName();
    setState(145);
    createDefinitions();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CreateIndexContext ------------------------------------------------------------------

NaiveSqlParser::CreateIndexContext::CreateIndexContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NaiveSqlParser::CreateIndexContext::CREATE() {
  return getToken(NaiveSqlParser::CREATE, 0);
}

tree::TerminalNode* NaiveSqlParser::CreateIndexContext::INDEX() {
  return getToken(NaiveSqlParser::INDEX, 0);
}

NaiveSqlParser::Index_nameContext* NaiveSqlParser::CreateIndexContext::index_name() {
  return getRuleContext<NaiveSqlParser::Index_nameContext>(0);
}

tree::TerminalNode* NaiveSqlParser::CreateIndexContext::ON() {
  return getToken(NaiveSqlParser::ON, 0);
}

NaiveSqlParser::TableNameContext* NaiveSqlParser::CreateIndexContext::tableName() {
  return getRuleContext<NaiveSqlParser::TableNameContext>(0);
}

NaiveSqlParser::UidContext* NaiveSqlParser::CreateIndexContext::uid() {
  return getRuleContext<NaiveSqlParser::UidContext>(0);
}

tree::TerminalNode* NaiveSqlParser::CreateIndexContext::UNIQUE() {
  return getToken(NaiveSqlParser::UNIQUE, 0);
}


size_t NaiveSqlParser::CreateIndexContext::getRuleIndex() const {
  return NaiveSqlParser::RuleCreateIndex;
}

void NaiveSqlParser::CreateIndexContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCreateIndex(this);
}

void NaiveSqlParser::CreateIndexContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCreateIndex(this);
}


antlrcpp::Any NaiveSqlParser::CreateIndexContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitCreateIndex(this);
  else
    return visitor->visitChildren(this);
}

NaiveSqlParser::CreateIndexContext* NaiveSqlParser::createIndex() {
  CreateIndexContext *_localctx = _tracker.createInstance<CreateIndexContext>(_ctx, getState());
  enterRule(_localctx, 12, NaiveSqlParser::RuleCreateIndex);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(147);
    match(NaiveSqlParser::CREATE);
    setState(149);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NaiveSqlParser::UNIQUE) {
      setState(148);
      match(NaiveSqlParser::UNIQUE);
    }
    setState(151);
    match(NaiveSqlParser::INDEX);
    setState(152);
    index_name();
    setState(153);
    match(NaiveSqlParser::ON);
    setState(154);
    tableName();
    setState(155);
    match(NaiveSqlParser::LR_BRACKET);
    setState(156);
    uid();
    setState(157);
    match(NaiveSqlParser::RR_BRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Index_nameContext ------------------------------------------------------------------

NaiveSqlParser::Index_nameContext::Index_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NaiveSqlParser::FullIdContext* NaiveSqlParser::Index_nameContext::fullId() {
  return getRuleContext<NaiveSqlParser::FullIdContext>(0);
}


size_t NaiveSqlParser::Index_nameContext::getRuleIndex() const {
  return NaiveSqlParser::RuleIndex_name;
}

void NaiveSqlParser::Index_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIndex_name(this);
}

void NaiveSqlParser::Index_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIndex_name(this);
}


antlrcpp::Any NaiveSqlParser::Index_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitIndex_name(this);
  else
    return visitor->visitChildren(this);
}

NaiveSqlParser::Index_nameContext* NaiveSqlParser::index_name() {
  Index_nameContext *_localctx = _tracker.createInstance<Index_nameContext>(_ctx, getState());
  enterRule(_localctx, 14, NaiveSqlParser::RuleIndex_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(159);
    fullId();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CreateDefinitionsContext ------------------------------------------------------------------

NaiveSqlParser::CreateDefinitionsContext::CreateDefinitionsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<NaiveSqlParser::CreateDefinitionContext *> NaiveSqlParser::CreateDefinitionsContext::createDefinition() {
  return getRuleContexts<NaiveSqlParser::CreateDefinitionContext>();
}

NaiveSqlParser::CreateDefinitionContext* NaiveSqlParser::CreateDefinitionsContext::createDefinition(size_t i) {
  return getRuleContext<NaiveSqlParser::CreateDefinitionContext>(i);
}


size_t NaiveSqlParser::CreateDefinitionsContext::getRuleIndex() const {
  return NaiveSqlParser::RuleCreateDefinitions;
}

void NaiveSqlParser::CreateDefinitionsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCreateDefinitions(this);
}

void NaiveSqlParser::CreateDefinitionsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCreateDefinitions(this);
}


antlrcpp::Any NaiveSqlParser::CreateDefinitionsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitCreateDefinitions(this);
  else
    return visitor->visitChildren(this);
}

NaiveSqlParser::CreateDefinitionsContext* NaiveSqlParser::createDefinitions() {
  CreateDefinitionsContext *_localctx = _tracker.createInstance<CreateDefinitionsContext>(_ctx, getState());
  enterRule(_localctx, 16, NaiveSqlParser::RuleCreateDefinitions);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(161);
    match(NaiveSqlParser::LR_BRACKET);
    setState(162);
    createDefinition();
    setState(167);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == NaiveSqlParser::COMMA) {
      setState(163);
      match(NaiveSqlParser::COMMA);
      setState(164);
      createDefinition();
      setState(169);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(170);
    match(NaiveSqlParser::RR_BRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CreateDefinitionContext ------------------------------------------------------------------

NaiveSqlParser::CreateDefinitionContext::CreateDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t NaiveSqlParser::CreateDefinitionContext::getRuleIndex() const {
  return NaiveSqlParser::RuleCreateDefinition;
}

void NaiveSqlParser::CreateDefinitionContext::copyFrom(CreateDefinitionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ColumnDeclarationContext ------------------------------------------------------------------

NaiveSqlParser::UidContext* NaiveSqlParser::ColumnDeclarationContext::uid() {
  return getRuleContext<NaiveSqlParser::UidContext>(0);
}

NaiveSqlParser::ColumnDefinitionContext* NaiveSqlParser::ColumnDeclarationContext::columnDefinition() {
  return getRuleContext<NaiveSqlParser::ColumnDefinitionContext>(0);
}

NaiveSqlParser::ColumnDeclarationContext::ColumnDeclarationContext(CreateDefinitionContext *ctx) { copyFrom(ctx); }

void NaiveSqlParser::ColumnDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterColumnDeclaration(this);
}
void NaiveSqlParser::ColumnDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitColumnDeclaration(this);
}

antlrcpp::Any NaiveSqlParser::ColumnDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitColumnDeclaration(this);
  else
    return visitor->visitChildren(this);
}
NaiveSqlParser::CreateDefinitionContext* NaiveSqlParser::createDefinition() {
  CreateDefinitionContext *_localctx = _tracker.createInstance<CreateDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 18, NaiveSqlParser::RuleCreateDefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<CreateDefinitionContext *>(_tracker.createInstance<NaiveSqlParser::ColumnDeclarationContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(172);
    uid();
    setState(173);
    columnDefinition();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ColumnDefinitionContext ------------------------------------------------------------------

NaiveSqlParser::ColumnDefinitionContext::ColumnDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NaiveSqlParser::DataTypeContext* NaiveSqlParser::ColumnDefinitionContext::dataType() {
  return getRuleContext<NaiveSqlParser::DataTypeContext>(0);
}

std::vector<NaiveSqlParser::ColumnConstraintContext *> NaiveSqlParser::ColumnDefinitionContext::columnConstraint() {
  return getRuleContexts<NaiveSqlParser::ColumnConstraintContext>();
}

NaiveSqlParser::ColumnConstraintContext* NaiveSqlParser::ColumnDefinitionContext::columnConstraint(size_t i) {
  return getRuleContext<NaiveSqlParser::ColumnConstraintContext>(i);
}


size_t NaiveSqlParser::ColumnDefinitionContext::getRuleIndex() const {
  return NaiveSqlParser::RuleColumnDefinition;
}

void NaiveSqlParser::ColumnDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterColumnDefinition(this);
}

void NaiveSqlParser::ColumnDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitColumnDefinition(this);
}


antlrcpp::Any NaiveSqlParser::ColumnDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitColumnDefinition(this);
  else
    return visitor->visitChildren(this);
}

NaiveSqlParser::ColumnDefinitionContext* NaiveSqlParser::columnDefinition() {
  ColumnDefinitionContext *_localctx = _tracker.createInstance<ColumnDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 20, NaiveSqlParser::RuleColumnDefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(175);
    dataType();
    setState(179);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 36) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 36)) & ((1ULL << (NaiveSqlParser::DEFAULT - 36))
      | (1ULL << (NaiveSqlParser::KEY - 36))
      | (1ULL << (NaiveSqlParser::NOT - 36))
      | (1ULL << (NaiveSqlParser::NULL_LITERAL - 36)))) != 0) || ((((_la - 110) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 110)) & ((1ULL << (NaiveSqlParser::PRIMARY - 110))
      | (1ULL << (NaiveSqlParser::UNIQUE - 110))
      | (1ULL << (NaiveSqlParser::AUTO_INCREMENT - 110)))) != 0) || _la == NaiveSqlParser::NULL_SPEC_LITERAL) {
      setState(176);
      columnConstraint();
      setState(181);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ColumnConstraintContext ------------------------------------------------------------------

NaiveSqlParser::ColumnConstraintContext::ColumnConstraintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t NaiveSqlParser::ColumnConstraintContext::getRuleIndex() const {
  return NaiveSqlParser::RuleColumnConstraint;
}

void NaiveSqlParser::ColumnConstraintContext::copyFrom(ColumnConstraintContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- AutoIncrementColumnConstraintContext ------------------------------------------------------------------

tree::TerminalNode* NaiveSqlParser::AutoIncrementColumnConstraintContext::AUTO_INCREMENT() {
  return getToken(NaiveSqlParser::AUTO_INCREMENT, 0);
}

NaiveSqlParser::AutoIncrementColumnConstraintContext::AutoIncrementColumnConstraintContext(ColumnConstraintContext *ctx) { copyFrom(ctx); }

void NaiveSqlParser::AutoIncrementColumnConstraintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAutoIncrementColumnConstraint(this);
}
void NaiveSqlParser::AutoIncrementColumnConstraintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAutoIncrementColumnConstraint(this);
}

antlrcpp::Any NaiveSqlParser::AutoIncrementColumnConstraintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitAutoIncrementColumnConstraint(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrimaryKeyColumnConstraintContext ------------------------------------------------------------------

tree::TerminalNode* NaiveSqlParser::PrimaryKeyColumnConstraintContext::KEY() {
  return getToken(NaiveSqlParser::KEY, 0);
}

tree::TerminalNode* NaiveSqlParser::PrimaryKeyColumnConstraintContext::PRIMARY() {
  return getToken(NaiveSqlParser::PRIMARY, 0);
}

NaiveSqlParser::PrimaryKeyColumnConstraintContext::PrimaryKeyColumnConstraintContext(ColumnConstraintContext *ctx) { copyFrom(ctx); }

void NaiveSqlParser::PrimaryKeyColumnConstraintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimaryKeyColumnConstraint(this);
}
void NaiveSqlParser::PrimaryKeyColumnConstraintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimaryKeyColumnConstraint(this);
}

antlrcpp::Any NaiveSqlParser::PrimaryKeyColumnConstraintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitPrimaryKeyColumnConstraint(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UniqueKeyColumnConstraintContext ------------------------------------------------------------------

tree::TerminalNode* NaiveSqlParser::UniqueKeyColumnConstraintContext::UNIQUE() {
  return getToken(NaiveSqlParser::UNIQUE, 0);
}

tree::TerminalNode* NaiveSqlParser::UniqueKeyColumnConstraintContext::KEY() {
  return getToken(NaiveSqlParser::KEY, 0);
}

NaiveSqlParser::UniqueKeyColumnConstraintContext::UniqueKeyColumnConstraintContext(ColumnConstraintContext *ctx) { copyFrom(ctx); }

void NaiveSqlParser::UniqueKeyColumnConstraintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUniqueKeyColumnConstraint(this);
}
void NaiveSqlParser::UniqueKeyColumnConstraintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUniqueKeyColumnConstraint(this);
}

antlrcpp::Any NaiveSqlParser::UniqueKeyColumnConstraintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitUniqueKeyColumnConstraint(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NullColumnConstraintContext ------------------------------------------------------------------

NaiveSqlParser::NullNotnullContext* NaiveSqlParser::NullColumnConstraintContext::nullNotnull() {
  return getRuleContext<NaiveSqlParser::NullNotnullContext>(0);
}

NaiveSqlParser::NullColumnConstraintContext::NullColumnConstraintContext(ColumnConstraintContext *ctx) { copyFrom(ctx); }

void NaiveSqlParser::NullColumnConstraintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNullColumnConstraint(this);
}
void NaiveSqlParser::NullColumnConstraintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNullColumnConstraint(this);
}

antlrcpp::Any NaiveSqlParser::NullColumnConstraintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitNullColumnConstraint(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DefaultColumnConstraintContext ------------------------------------------------------------------

tree::TerminalNode* NaiveSqlParser::DefaultColumnConstraintContext::DEFAULT() {
  return getToken(NaiveSqlParser::DEFAULT, 0);
}

NaiveSqlParser::DefaultValueContext* NaiveSqlParser::DefaultColumnConstraintContext::defaultValue() {
  return getRuleContext<NaiveSqlParser::DefaultValueContext>(0);
}

NaiveSqlParser::DefaultColumnConstraintContext::DefaultColumnConstraintContext(ColumnConstraintContext *ctx) { copyFrom(ctx); }

void NaiveSqlParser::DefaultColumnConstraintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefaultColumnConstraint(this);
}
void NaiveSqlParser::DefaultColumnConstraintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefaultColumnConstraint(this);
}

antlrcpp::Any NaiveSqlParser::DefaultColumnConstraintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitDefaultColumnConstraint(this);
  else
    return visitor->visitChildren(this);
}
NaiveSqlParser::ColumnConstraintContext* NaiveSqlParser::columnConstraint() {
  ColumnConstraintContext *_localctx = _tracker.createInstance<ColumnConstraintContext>(_ctx, getState());
  enterRule(_localctx, 22, NaiveSqlParser::RuleColumnConstraint);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(194);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NaiveSqlParser::NOT:
      case NaiveSqlParser::NULL_LITERAL:
      case NaiveSqlParser::NULL_SPEC_LITERAL: {
        _localctx = dynamic_cast<ColumnConstraintContext *>(_tracker.createInstance<NaiveSqlParser::NullColumnConstraintContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(182);
        nullNotnull();
        break;
      }

      case NaiveSqlParser::DEFAULT: {
        _localctx = dynamic_cast<ColumnConstraintContext *>(_tracker.createInstance<NaiveSqlParser::DefaultColumnConstraintContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(183);
        match(NaiveSqlParser::DEFAULT);
        setState(184);
        defaultValue();
        break;
      }

      case NaiveSqlParser::AUTO_INCREMENT: {
        _localctx = dynamic_cast<ColumnConstraintContext *>(_tracker.createInstance<NaiveSqlParser::AutoIncrementColumnConstraintContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(185);
        match(NaiveSqlParser::AUTO_INCREMENT);
        break;
      }

      case NaiveSqlParser::KEY:
      case NaiveSqlParser::PRIMARY: {
        _localctx = dynamic_cast<ColumnConstraintContext *>(_tracker.createInstance<NaiveSqlParser::PrimaryKeyColumnConstraintContext>(_localctx));
        enterOuterAlt(_localctx, 4);
        setState(187);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == NaiveSqlParser::PRIMARY) {
          setState(186);
          match(NaiveSqlParser::PRIMARY);
        }
        setState(189);
        match(NaiveSqlParser::KEY);
        break;
      }

      case NaiveSqlParser::UNIQUE: {
        _localctx = dynamic_cast<ColumnConstraintContext *>(_tracker.createInstance<NaiveSqlParser::UniqueKeyColumnConstraintContext>(_localctx));
        enterOuterAlt(_localctx, 5);
        setState(190);
        match(NaiveSqlParser::UNIQUE);
        setState(192);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
        case 1: {
          setState(191);
          match(NaiveSqlParser::KEY);
          break;
        }

        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DropTableContext ------------------------------------------------------------------

NaiveSqlParser::DropTableContext::DropTableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NaiveSqlParser::DropTableContext::DROP() {
  return getToken(NaiveSqlParser::DROP, 0);
}

tree::TerminalNode* NaiveSqlParser::DropTableContext::TABLE() {
  return getToken(NaiveSqlParser::TABLE, 0);
}

NaiveSqlParser::TableNameContext* NaiveSqlParser::DropTableContext::tableName() {
  return getRuleContext<NaiveSqlParser::TableNameContext>(0);
}

NaiveSqlParser::IfExistsContext* NaiveSqlParser::DropTableContext::ifExists() {
  return getRuleContext<NaiveSqlParser::IfExistsContext>(0);
}

tree::TerminalNode* NaiveSqlParser::DropTableContext::RESTRICT() {
  return getToken(NaiveSqlParser::RESTRICT, 0);
}

tree::TerminalNode* NaiveSqlParser::DropTableContext::CASCADE() {
  return getToken(NaiveSqlParser::CASCADE, 0);
}


size_t NaiveSqlParser::DropTableContext::getRuleIndex() const {
  return NaiveSqlParser::RuleDropTable;
}

void NaiveSqlParser::DropTableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDropTable(this);
}

void NaiveSqlParser::DropTableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDropTable(this);
}


antlrcpp::Any NaiveSqlParser::DropTableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitDropTable(this);
  else
    return visitor->visitChildren(this);
}

NaiveSqlParser::DropTableContext* NaiveSqlParser::dropTable() {
  DropTableContext *_localctx = _tracker.createInstance<DropTableContext>(_ctx, getState());
  enterRule(_localctx, 24, NaiveSqlParser::RuleDropTable);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(196);
    match(NaiveSqlParser::DROP);
    setState(197);
    match(NaiveSqlParser::TABLE);
    setState(199);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NaiveSqlParser::IF) {
      setState(198);
      ifExists();
    }
    setState(201);
    tableName();
    setState(203);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NaiveSqlParser::CASCADE || _la == NaiveSqlParser::RESTRICT) {
      setState(202);
      dynamic_cast<DropTableContext *>(_localctx)->dropType = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == NaiveSqlParser::CASCADE || _la == NaiveSqlParser::RESTRICT)) {
        dynamic_cast<DropTableContext *>(_localctx)->dropType = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DmlStatementContext ------------------------------------------------------------------

NaiveSqlParser::DmlStatementContext::DmlStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NaiveSqlParser::SelectStatementContext* NaiveSqlParser::DmlStatementContext::selectStatement() {
  return getRuleContext<NaiveSqlParser::SelectStatementContext>(0);
}

NaiveSqlParser::DeleteStatementContext* NaiveSqlParser::DmlStatementContext::deleteStatement() {
  return getRuleContext<NaiveSqlParser::DeleteStatementContext>(0);
}

NaiveSqlParser::InsertStatementContext* NaiveSqlParser::DmlStatementContext::insertStatement() {
  return getRuleContext<NaiveSqlParser::InsertStatementContext>(0);
}

NaiveSqlParser::UpdateStatementContext* NaiveSqlParser::DmlStatementContext::updateStatement() {
  return getRuleContext<NaiveSqlParser::UpdateStatementContext>(0);
}


size_t NaiveSqlParser::DmlStatementContext::getRuleIndex() const {
  return NaiveSqlParser::RuleDmlStatement;
}

void NaiveSqlParser::DmlStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDmlStatement(this);
}

void NaiveSqlParser::DmlStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDmlStatement(this);
}


antlrcpp::Any NaiveSqlParser::DmlStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitDmlStatement(this);
  else
    return visitor->visitChildren(this);
}

NaiveSqlParser::DmlStatementContext* NaiveSqlParser::dmlStatement() {
  DmlStatementContext *_localctx = _tracker.createInstance<DmlStatementContext>(_ctx, getState());
  enterRule(_localctx, 26, NaiveSqlParser::RuleDmlStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(209);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NaiveSqlParser::SELECT: {
        enterOuterAlt(_localctx, 1);
        setState(205);
        selectStatement();
        break;
      }

      case NaiveSqlParser::DELETE: {
        enterOuterAlt(_localctx, 2);
        setState(206);
        deleteStatement();
        break;
      }

      case NaiveSqlParser::INSERT: {
        enterOuterAlt(_localctx, 3);
        setState(207);
        insertStatement();
        break;
      }

      case NaiveSqlParser::UPDATE: {
        enterOuterAlt(_localctx, 4);
        setState(208);
        updateStatement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SelectStatementContext ------------------------------------------------------------------

NaiveSqlParser::SelectStatementContext::SelectStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t NaiveSqlParser::SelectStatementContext::getRuleIndex() const {
  return NaiveSqlParser::RuleSelectStatement;
}

void NaiveSqlParser::SelectStatementContext::copyFrom(SelectStatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- SimpleSelectContext ------------------------------------------------------------------

tree::TerminalNode* NaiveSqlParser::SimpleSelectContext::SELECT() {
  return getToken(NaiveSqlParser::SELECT, 0);
}

NaiveSqlParser::SelectElementsContext* NaiveSqlParser::SimpleSelectContext::selectElements() {
  return getRuleContext<NaiveSqlParser::SelectElementsContext>(0);
}

tree::TerminalNode* NaiveSqlParser::SimpleSelectContext::UNIQUE() {
  return getToken(NaiveSqlParser::UNIQUE, 0);
}

NaiveSqlParser::FromClauseContext* NaiveSqlParser::SimpleSelectContext::fromClause() {
  return getRuleContext<NaiveSqlParser::FromClauseContext>(0);
}

NaiveSqlParser::OrderByClauseContext* NaiveSqlParser::SimpleSelectContext::orderByClause() {
  return getRuleContext<NaiveSqlParser::OrderByClauseContext>(0);
}

NaiveSqlParser::SimpleSelectContext::SimpleSelectContext(SelectStatementContext *ctx) { copyFrom(ctx); }

void NaiveSqlParser::SimpleSelectContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimpleSelect(this);
}
void NaiveSqlParser::SimpleSelectContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimpleSelect(this);
}

antlrcpp::Any NaiveSqlParser::SimpleSelectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitSimpleSelect(this);
  else
    return visitor->visitChildren(this);
}
NaiveSqlParser::SelectStatementContext* NaiveSqlParser::selectStatement() {
  SelectStatementContext *_localctx = _tracker.createInstance<SelectStatementContext>(_ctx, getState());
  enterRule(_localctx, 28, NaiveSqlParser::RuleSelectStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<SelectStatementContext *>(_tracker.createInstance<NaiveSqlParser::SimpleSelectContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(211);
    match(NaiveSqlParser::SELECT);
    setState(213);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NaiveSqlParser::UNIQUE) {
      setState(212);
      match(NaiveSqlParser::UNIQUE);
    }
    setState(215);
    selectElements();
    setState(217);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NaiveSqlParser::FROM) {
      setState(216);
      fromClause();
    }
    setState(220);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NaiveSqlParser::ORDER) {
      setState(219);
      orderByClause();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UpdateStatementContext ------------------------------------------------------------------

NaiveSqlParser::UpdateStatementContext::UpdateStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NaiveSqlParser::UpdateStatementContext::UPDATE() {
  return getToken(NaiveSqlParser::UPDATE, 0);
}

NaiveSqlParser::TableNameContext* NaiveSqlParser::UpdateStatementContext::tableName() {
  return getRuleContext<NaiveSqlParser::TableNameContext>(0);
}

tree::TerminalNode* NaiveSqlParser::UpdateStatementContext::SET() {
  return getToken(NaiveSqlParser::SET, 0);
}

std::vector<NaiveSqlParser::UpdatedElementContext *> NaiveSqlParser::UpdateStatementContext::updatedElement() {
  return getRuleContexts<NaiveSqlParser::UpdatedElementContext>();
}

NaiveSqlParser::UpdatedElementContext* NaiveSqlParser::UpdateStatementContext::updatedElement(size_t i) {
  return getRuleContext<NaiveSqlParser::UpdatedElementContext>(i);
}

tree::TerminalNode* NaiveSqlParser::UpdateStatementContext::WHERE() {
  return getToken(NaiveSqlParser::WHERE, 0);
}

NaiveSqlParser::ExpressionContext* NaiveSqlParser::UpdateStatementContext::expression() {
  return getRuleContext<NaiveSqlParser::ExpressionContext>(0);
}

NaiveSqlParser::OrderByClauseContext* NaiveSqlParser::UpdateStatementContext::orderByClause() {
  return getRuleContext<NaiveSqlParser::OrderByClauseContext>(0);
}


size_t NaiveSqlParser::UpdateStatementContext::getRuleIndex() const {
  return NaiveSqlParser::RuleUpdateStatement;
}

void NaiveSqlParser::UpdateStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUpdateStatement(this);
}

void NaiveSqlParser::UpdateStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUpdateStatement(this);
}


antlrcpp::Any NaiveSqlParser::UpdateStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitUpdateStatement(this);
  else
    return visitor->visitChildren(this);
}

NaiveSqlParser::UpdateStatementContext* NaiveSqlParser::updateStatement() {
  UpdateStatementContext *_localctx = _tracker.createInstance<UpdateStatementContext>(_ctx, getState());
  enterRule(_localctx, 30, NaiveSqlParser::RuleUpdateStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(222);
    match(NaiveSqlParser::UPDATE);
    setState(223);
    tableName();
    setState(224);
    match(NaiveSqlParser::SET);
    setState(225);
    updatedElement();
    setState(230);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == NaiveSqlParser::COMMA) {
      setState(226);
      match(NaiveSqlParser::COMMA);
      setState(227);
      updatedElement();
      setState(232);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(235);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NaiveSqlParser::WHERE) {
      setState(233);
      match(NaiveSqlParser::WHERE);
      setState(234);
      expression(0);
    }
    setState(238);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NaiveSqlParser::ORDER) {
      setState(237);
      orderByClause();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SelectElementsContext ------------------------------------------------------------------

NaiveSqlParser::SelectElementsContext::SelectElementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<NaiveSqlParser::SelectElementContext *> NaiveSqlParser::SelectElementsContext::selectElement() {
  return getRuleContexts<NaiveSqlParser::SelectElementContext>();
}

NaiveSqlParser::SelectElementContext* NaiveSqlParser::SelectElementsContext::selectElement(size_t i) {
  return getRuleContext<NaiveSqlParser::SelectElementContext>(i);
}


size_t NaiveSqlParser::SelectElementsContext::getRuleIndex() const {
  return NaiveSqlParser::RuleSelectElements;
}

void NaiveSqlParser::SelectElementsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSelectElements(this);
}

void NaiveSqlParser::SelectElementsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSelectElements(this);
}


antlrcpp::Any NaiveSqlParser::SelectElementsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitSelectElements(this);
  else
    return visitor->visitChildren(this);
}

NaiveSqlParser::SelectElementsContext* NaiveSqlParser::selectElements() {
  SelectElementsContext *_localctx = _tracker.createInstance<SelectElementsContext>(_ctx, getState());
  enterRule(_localctx, 32, NaiveSqlParser::RuleSelectElements);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(242);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NaiveSqlParser::STAR: {
        setState(240);
        dynamic_cast<SelectElementsContext *>(_localctx)->star = match(NaiveSqlParser::STAR);
        break;
      }

      case NaiveSqlParser::ID: {
        setState(241);
        selectElement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(248);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == NaiveSqlParser::COMMA) {
      setState(244);
      match(NaiveSqlParser::COMMA);
      setState(245);
      selectElement();
      setState(250);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SelectElementContext ------------------------------------------------------------------

NaiveSqlParser::SelectElementContext::SelectElementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t NaiveSqlParser::SelectElementContext::getRuleIndex() const {
  return NaiveSqlParser::RuleSelectElement;
}

void NaiveSqlParser::SelectElementContext::copyFrom(SelectElementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- SelectStarElementContext ------------------------------------------------------------------

NaiveSqlParser::FullIdContext* NaiveSqlParser::SelectStarElementContext::fullId() {
  return getRuleContext<NaiveSqlParser::FullIdContext>(0);
}

NaiveSqlParser::SelectStarElementContext::SelectStarElementContext(SelectElementContext *ctx) { copyFrom(ctx); }

void NaiveSqlParser::SelectStarElementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSelectStarElement(this);
}
void NaiveSqlParser::SelectStarElementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSelectStarElement(this);
}

antlrcpp::Any NaiveSqlParser::SelectStarElementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitSelectStarElement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SelectColumnElementContext ------------------------------------------------------------------

NaiveSqlParser::FullIdContext* NaiveSqlParser::SelectColumnElementContext::fullId() {
  return getRuleContext<NaiveSqlParser::FullIdContext>(0);
}

NaiveSqlParser::UidContext* NaiveSqlParser::SelectColumnElementContext::uid() {
  return getRuleContext<NaiveSqlParser::UidContext>(0);
}

tree::TerminalNode* NaiveSqlParser::SelectColumnElementContext::AS() {
  return getToken(NaiveSqlParser::AS, 0);
}

NaiveSqlParser::SelectColumnElementContext::SelectColumnElementContext(SelectElementContext *ctx) { copyFrom(ctx); }

void NaiveSqlParser::SelectColumnElementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSelectColumnElement(this);
}
void NaiveSqlParser::SelectColumnElementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSelectColumnElement(this);
}

antlrcpp::Any NaiveSqlParser::SelectColumnElementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitSelectColumnElement(this);
  else
    return visitor->visitChildren(this);
}
NaiveSqlParser::SelectElementContext* NaiveSqlParser::selectElement() {
  SelectElementContext *_localctx = _tracker.createInstance<SelectElementContext>(_ctx, getState());
  enterRule(_localctx, 34, NaiveSqlParser::RuleSelectElement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(262);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<SelectElementContext *>(_tracker.createInstance<NaiveSqlParser::SelectStarElementContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(251);
      fullId();
      setState(252);
      match(NaiveSqlParser::DOT);
      setState(253);
      match(NaiveSqlParser::STAR);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<SelectElementContext *>(_tracker.createInstance<NaiveSqlParser::SelectColumnElementContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(255);
      fullId();
      setState(260);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == NaiveSqlParser::AS || _la == NaiveSqlParser::ID) {
        setState(257);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == NaiveSqlParser::AS) {
          setState(256);
          match(NaiveSqlParser::AS);
        }
        setState(259);
        uid();
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeleteStatementContext ------------------------------------------------------------------

NaiveSqlParser::DeleteStatementContext::DeleteStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NaiveSqlParser::DeleteStatementContext::DELETE() {
  return getToken(NaiveSqlParser::DELETE, 0);
}

tree::TerminalNode* NaiveSqlParser::DeleteStatementContext::FROM() {
  return getToken(NaiveSqlParser::FROM, 0);
}

NaiveSqlParser::TableNameContext* NaiveSqlParser::DeleteStatementContext::tableName() {
  return getRuleContext<NaiveSqlParser::TableNameContext>(0);
}

tree::TerminalNode* NaiveSqlParser::DeleteStatementContext::WHERE() {
  return getToken(NaiveSqlParser::WHERE, 0);
}

NaiveSqlParser::ExpressionContext* NaiveSqlParser::DeleteStatementContext::expression() {
  return getRuleContext<NaiveSqlParser::ExpressionContext>(0);
}


size_t NaiveSqlParser::DeleteStatementContext::getRuleIndex() const {
  return NaiveSqlParser::RuleDeleteStatement;
}

void NaiveSqlParser::DeleteStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeleteStatement(this);
}

void NaiveSqlParser::DeleteStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeleteStatement(this);
}


antlrcpp::Any NaiveSqlParser::DeleteStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitDeleteStatement(this);
  else
    return visitor->visitChildren(this);
}

NaiveSqlParser::DeleteStatementContext* NaiveSqlParser::deleteStatement() {
  DeleteStatementContext *_localctx = _tracker.createInstance<DeleteStatementContext>(_ctx, getState());
  enterRule(_localctx, 36, NaiveSqlParser::RuleDeleteStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(264);
    match(NaiveSqlParser::DELETE);
    setState(265);
    match(NaiveSqlParser::FROM);
    setState(266);
    tableName();
    setState(269);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NaiveSqlParser::WHERE) {
      setState(267);
      match(NaiveSqlParser::WHERE);
      setState(268);
      expression(0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InsertStatementContext ------------------------------------------------------------------

NaiveSqlParser::InsertStatementContext::InsertStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NaiveSqlParser::InsertStatementContext::INSERT() {
  return getToken(NaiveSqlParser::INSERT, 0);
}

tree::TerminalNode* NaiveSqlParser::InsertStatementContext::INTO() {
  return getToken(NaiveSqlParser::INTO, 0);
}

NaiveSqlParser::TableNameContext* NaiveSqlParser::InsertStatementContext::tableName() {
  return getRuleContext<NaiveSqlParser::TableNameContext>(0);
}

tree::TerminalNode* NaiveSqlParser::InsertStatementContext::VALUES() {
  return getToken(NaiveSqlParser::VALUES, 0);
}

NaiveSqlParser::ConstantsContext* NaiveSqlParser::InsertStatementContext::constants() {
  return getRuleContext<NaiveSqlParser::ConstantsContext>(0);
}

NaiveSqlParser::UidListContext* NaiveSqlParser::InsertStatementContext::uidList() {
  return getRuleContext<NaiveSqlParser::UidListContext>(0);
}


size_t NaiveSqlParser::InsertStatementContext::getRuleIndex() const {
  return NaiveSqlParser::RuleInsertStatement;
}

void NaiveSqlParser::InsertStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInsertStatement(this);
}

void NaiveSqlParser::InsertStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInsertStatement(this);
}


antlrcpp::Any NaiveSqlParser::InsertStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitInsertStatement(this);
  else
    return visitor->visitChildren(this);
}

NaiveSqlParser::InsertStatementContext* NaiveSqlParser::insertStatement() {
  InsertStatementContext *_localctx = _tracker.createInstance<InsertStatementContext>(_ctx, getState());
  enterRule(_localctx, 38, NaiveSqlParser::RuleInsertStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(271);
    match(NaiveSqlParser::INSERT);
    setState(272);
    match(NaiveSqlParser::INTO);
    setState(273);
    tableName();
    setState(274);
    match(NaiveSqlParser::LR_BRACKET);
    setState(275);
    dynamic_cast<InsertStatementContext *>(_localctx)->columns = uidList();
    setState(276);
    match(NaiveSqlParser::RR_BRACKET);
    setState(277);
    match(NaiveSqlParser::VALUES);
    setState(278);
    match(NaiveSqlParser::LR_BRACKET);
    setState(279);
    constants();
    setState(280);
    match(NaiveSqlParser::RR_BRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UpdatedElementContext ------------------------------------------------------------------

NaiveSqlParser::UpdatedElementContext::UpdatedElementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NaiveSqlParser::FullIdContext* NaiveSqlParser::UpdatedElementContext::fullId() {
  return getRuleContext<NaiveSqlParser::FullIdContext>(0);
}

NaiveSqlParser::ExpressionContext* NaiveSqlParser::UpdatedElementContext::expression() {
  return getRuleContext<NaiveSqlParser::ExpressionContext>(0);
}

tree::TerminalNode* NaiveSqlParser::UpdatedElementContext::DEFAULT() {
  return getToken(NaiveSqlParser::DEFAULT, 0);
}


size_t NaiveSqlParser::UpdatedElementContext::getRuleIndex() const {
  return NaiveSqlParser::RuleUpdatedElement;
}

void NaiveSqlParser::UpdatedElementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUpdatedElement(this);
}

void NaiveSqlParser::UpdatedElementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUpdatedElement(this);
}


antlrcpp::Any NaiveSqlParser::UpdatedElementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitUpdatedElement(this);
  else
    return visitor->visitChildren(this);
}

NaiveSqlParser::UpdatedElementContext* NaiveSqlParser::updatedElement() {
  UpdatedElementContext *_localctx = _tracker.createInstance<UpdatedElementContext>(_ctx, getState());
  enterRule(_localctx, 40, NaiveSqlParser::RuleUpdatedElement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(282);
    fullId();
    setState(283);
    match(NaiveSqlParser::EQUAL_SYMBOL);
    setState(286);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NaiveSqlParser::FALSE:
      case NaiveSqlParser::NOT:
      case NaiveSqlParser::NULL_LITERAL:
      case NaiveSqlParser::TRUE:
      case NaiveSqlParser::MINUS:
      case NaiveSqlParser::EXCLAMATION_SYMBOL:
      case NaiveSqlParser::ZERO_DECIMAL:
      case NaiveSqlParser::ONE_DECIMAL:
      case NaiveSqlParser::TWO_DECIMAL:
      case NaiveSqlParser::STRING_LITERAL:
      case NaiveSqlParser::DECIMAL_LITERAL:
      case NaiveSqlParser::HEXADECIMAL_LITERAL:
      case NaiveSqlParser::REAL_LITERAL:
      case NaiveSqlParser::NULL_SPEC_LITERAL:
      case NaiveSqlParser::BIT_STRING:
      case NaiveSqlParser::ID: {
        setState(284);
        expression(0);
        break;
      }

      case NaiveSqlParser::DEFAULT: {
        setState(285);
        match(NaiveSqlParser::DEFAULT);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FromClauseContext ------------------------------------------------------------------

NaiveSqlParser::FromClauseContext::FromClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NaiveSqlParser::FromClauseContext::FROM() {
  return getToken(NaiveSqlParser::FROM, 0);
}

NaiveSqlParser::TablesContext* NaiveSqlParser::FromClauseContext::tables() {
  return getRuleContext<NaiveSqlParser::TablesContext>(0);
}

tree::TerminalNode* NaiveSqlParser::FromClauseContext::WHERE() {
  return getToken(NaiveSqlParser::WHERE, 0);
}

NaiveSqlParser::ExpressionContext* NaiveSqlParser::FromClauseContext::expression() {
  return getRuleContext<NaiveSqlParser::ExpressionContext>(0);
}


size_t NaiveSqlParser::FromClauseContext::getRuleIndex() const {
  return NaiveSqlParser::RuleFromClause;
}

void NaiveSqlParser::FromClauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFromClause(this);
}

void NaiveSqlParser::FromClauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFromClause(this);
}


antlrcpp::Any NaiveSqlParser::FromClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitFromClause(this);
  else
    return visitor->visitChildren(this);
}

NaiveSqlParser::FromClauseContext* NaiveSqlParser::fromClause() {
  FromClauseContext *_localctx = _tracker.createInstance<FromClauseContext>(_ctx, getState());
  enterRule(_localctx, 42, NaiveSqlParser::RuleFromClause);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(288);
    match(NaiveSqlParser::FROM);
    setState(289);
    tables();
    setState(292);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NaiveSqlParser::WHERE) {
      setState(290);
      match(NaiveSqlParser::WHERE);
      setState(291);
      dynamic_cast<FromClauseContext *>(_localctx)->whereExpr = expression(0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GroupByItemContext ------------------------------------------------------------------

NaiveSqlParser::GroupByItemContext::GroupByItemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NaiveSqlParser::ExpressionContext* NaiveSqlParser::GroupByItemContext::expression() {
  return getRuleContext<NaiveSqlParser::ExpressionContext>(0);
}

tree::TerminalNode* NaiveSqlParser::GroupByItemContext::ASC() {
  return getToken(NaiveSqlParser::ASC, 0);
}

tree::TerminalNode* NaiveSqlParser::GroupByItemContext::DESC() {
  return getToken(NaiveSqlParser::DESC, 0);
}


size_t NaiveSqlParser::GroupByItemContext::getRuleIndex() const {
  return NaiveSqlParser::RuleGroupByItem;
}

void NaiveSqlParser::GroupByItemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGroupByItem(this);
}

void NaiveSqlParser::GroupByItemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGroupByItem(this);
}


antlrcpp::Any NaiveSqlParser::GroupByItemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitGroupByItem(this);
  else
    return visitor->visitChildren(this);
}

NaiveSqlParser::GroupByItemContext* NaiveSqlParser::groupByItem() {
  GroupByItemContext *_localctx = _tracker.createInstance<GroupByItemContext>(_ctx, getState());
  enterRule(_localctx, 44, NaiveSqlParser::RuleGroupByItem);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(294);
    expression(0);
    setState(296);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NaiveSqlParser::ASC

    || _la == NaiveSqlParser::DESC) {
      setState(295);
      dynamic_cast<GroupByItemContext *>(_localctx)->order = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == NaiveSqlParser::ASC

      || _la == NaiveSqlParser::DESC)) {
        dynamic_cast<GroupByItemContext *>(_localctx)->order = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OrderByClauseContext ------------------------------------------------------------------

NaiveSqlParser::OrderByClauseContext::OrderByClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NaiveSqlParser::OrderByClauseContext::ORDER() {
  return getToken(NaiveSqlParser::ORDER, 0);
}

tree::TerminalNode* NaiveSqlParser::OrderByClauseContext::BY() {
  return getToken(NaiveSqlParser::BY, 0);
}

std::vector<NaiveSqlParser::OrderByExpressionContext *> NaiveSqlParser::OrderByClauseContext::orderByExpression() {
  return getRuleContexts<NaiveSqlParser::OrderByExpressionContext>();
}

NaiveSqlParser::OrderByExpressionContext* NaiveSqlParser::OrderByClauseContext::orderByExpression(size_t i) {
  return getRuleContext<NaiveSqlParser::OrderByExpressionContext>(i);
}


size_t NaiveSqlParser::OrderByClauseContext::getRuleIndex() const {
  return NaiveSqlParser::RuleOrderByClause;
}

void NaiveSqlParser::OrderByClauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOrderByClause(this);
}

void NaiveSqlParser::OrderByClauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOrderByClause(this);
}


antlrcpp::Any NaiveSqlParser::OrderByClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitOrderByClause(this);
  else
    return visitor->visitChildren(this);
}

NaiveSqlParser::OrderByClauseContext* NaiveSqlParser::orderByClause() {
  OrderByClauseContext *_localctx = _tracker.createInstance<OrderByClauseContext>(_ctx, getState());
  enterRule(_localctx, 46, NaiveSqlParser::RuleOrderByClause);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(298);
    match(NaiveSqlParser::ORDER);
    setState(299);
    match(NaiveSqlParser::BY);
    setState(300);
    orderByExpression();
    setState(305);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == NaiveSqlParser::COMMA) {
      setState(301);
      match(NaiveSqlParser::COMMA);
      setState(302);
      orderByExpression();
      setState(307);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OrderByExpressionContext ------------------------------------------------------------------

NaiveSqlParser::OrderByExpressionContext::OrderByExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NaiveSqlParser::ExpressionContext* NaiveSqlParser::OrderByExpressionContext::expression() {
  return getRuleContext<NaiveSqlParser::ExpressionContext>(0);
}

tree::TerminalNode* NaiveSqlParser::OrderByExpressionContext::ASC() {
  return getToken(NaiveSqlParser::ASC, 0);
}

tree::TerminalNode* NaiveSqlParser::OrderByExpressionContext::DESC() {
  return getToken(NaiveSqlParser::DESC, 0);
}


size_t NaiveSqlParser::OrderByExpressionContext::getRuleIndex() const {
  return NaiveSqlParser::RuleOrderByExpression;
}

void NaiveSqlParser::OrderByExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOrderByExpression(this);
}

void NaiveSqlParser::OrderByExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOrderByExpression(this);
}


antlrcpp::Any NaiveSqlParser::OrderByExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitOrderByExpression(this);
  else
    return visitor->visitChildren(this);
}

NaiveSqlParser::OrderByExpressionContext* NaiveSqlParser::orderByExpression() {
  OrderByExpressionContext *_localctx = _tracker.createInstance<OrderByExpressionContext>(_ctx, getState());
  enterRule(_localctx, 48, NaiveSqlParser::RuleOrderByExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(308);
    expression(0);
    setState(310);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NaiveSqlParser::ASC

    || _la == NaiveSqlParser::DESC) {
      setState(309);
      dynamic_cast<OrderByExpressionContext *>(_localctx)->order = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == NaiveSqlParser::ASC

      || _la == NaiveSqlParser::DESC)) {
        dynamic_cast<OrderByExpressionContext *>(_localctx)->order = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TableSourcesContext ------------------------------------------------------------------

NaiveSqlParser::TableSourcesContext::TableSourcesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<NaiveSqlParser::TableNameContext *> NaiveSqlParser::TableSourcesContext::tableName() {
  return getRuleContexts<NaiveSqlParser::TableNameContext>();
}

NaiveSqlParser::TableNameContext* NaiveSqlParser::TableSourcesContext::tableName(size_t i) {
  return getRuleContext<NaiveSqlParser::TableNameContext>(i);
}


size_t NaiveSqlParser::TableSourcesContext::getRuleIndex() const {
  return NaiveSqlParser::RuleTableSources;
}

void NaiveSqlParser::TableSourcesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTableSources(this);
}

void NaiveSqlParser::TableSourcesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTableSources(this);
}


antlrcpp::Any NaiveSqlParser::TableSourcesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitTableSources(this);
  else
    return visitor->visitChildren(this);
}

NaiveSqlParser::TableSourcesContext* NaiveSqlParser::tableSources() {
  TableSourcesContext *_localctx = _tracker.createInstance<TableSourcesContext>(_ctx, getState());
  enterRule(_localctx, 50, NaiveSqlParser::RuleTableSources);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(312);
    tableName();
    setState(317);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == NaiveSqlParser::COMMA) {
      setState(313);
      match(NaiveSqlParser::COMMA);
      setState(314);
      tableName();
      setState(319);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

NaiveSqlParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t NaiveSqlParser::ExpressionContext::getRuleIndex() const {
  return NaiveSqlParser::RuleExpression;
}

void NaiveSqlParser::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- NotExpressionContext ------------------------------------------------------------------

NaiveSqlParser::ExpressionContext* NaiveSqlParser::NotExpressionContext::expression() {
  return getRuleContext<NaiveSqlParser::ExpressionContext>(0);
}

tree::TerminalNode* NaiveSqlParser::NotExpressionContext::NOT() {
  return getToken(NaiveSqlParser::NOT, 0);
}

NaiveSqlParser::NotExpressionContext::NotExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void NaiveSqlParser::NotExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNotExpression(this);
}
void NaiveSqlParser::NotExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNotExpression(this);
}

antlrcpp::Any NaiveSqlParser::NotExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitNotExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogicalExpressionContext ------------------------------------------------------------------

std::vector<NaiveSqlParser::ExpressionContext *> NaiveSqlParser::LogicalExpressionContext::expression() {
  return getRuleContexts<NaiveSqlParser::ExpressionContext>();
}

NaiveSqlParser::ExpressionContext* NaiveSqlParser::LogicalExpressionContext::expression(size_t i) {
  return getRuleContext<NaiveSqlParser::ExpressionContext>(i);
}

NaiveSqlParser::LogicalOperatorContext* NaiveSqlParser::LogicalExpressionContext::logicalOperator() {
  return getRuleContext<NaiveSqlParser::LogicalOperatorContext>(0);
}

NaiveSqlParser::LogicalExpressionContext::LogicalExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void NaiveSqlParser::LogicalExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalExpression(this);
}
void NaiveSqlParser::LogicalExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalExpression(this);
}

antlrcpp::Any NaiveSqlParser::LogicalExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitLogicalExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PredicateExpressionContext ------------------------------------------------------------------

NaiveSqlParser::PredicateContext* NaiveSqlParser::PredicateExpressionContext::predicate() {
  return getRuleContext<NaiveSqlParser::PredicateContext>(0);
}

NaiveSqlParser::PredicateExpressionContext::PredicateExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void NaiveSqlParser::PredicateExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPredicateExpression(this);
}
void NaiveSqlParser::PredicateExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPredicateExpression(this);
}

antlrcpp::Any NaiveSqlParser::PredicateExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitPredicateExpression(this);
  else
    return visitor->visitChildren(this);
}

NaiveSqlParser::ExpressionContext* NaiveSqlParser::expression() {
   return expression(0);
}

NaiveSqlParser::ExpressionContext* NaiveSqlParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  NaiveSqlParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  NaiveSqlParser::ExpressionContext *previousContext = _localctx;
  size_t startState = 52;
  enterRecursionRule(_localctx, 52, NaiveSqlParser::RuleExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(324);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<NotExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(321);
      dynamic_cast<NotExpressionContext *>(_localctx)->notOperator = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == NaiveSqlParser::NOT || _la == NaiveSqlParser::EXCLAMATION_SYMBOL)) {
        dynamic_cast<NotExpressionContext *>(_localctx)->notOperator = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(322);
      expression(3);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<PredicateExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(323);
      predicate(0);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(332);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<LogicalExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleExpression);
        setState(326);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(327);
        logicalOperator();
        setState(328);
        expression(3); 
      }
      setState(334);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- PredicateContext ------------------------------------------------------------------

NaiveSqlParser::PredicateContext::PredicateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t NaiveSqlParser::PredicateContext::getRuleIndex() const {
  return NaiveSqlParser::RulePredicate;
}

void NaiveSqlParser::PredicateContext::copyFrom(PredicateContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ExpressionAtomPredicateContext ------------------------------------------------------------------

NaiveSqlParser::ExpressionAtomContext* NaiveSqlParser::ExpressionAtomPredicateContext::expressionAtom() {
  return getRuleContext<NaiveSqlParser::ExpressionAtomContext>(0);
}

NaiveSqlParser::ExpressionAtomPredicateContext::ExpressionAtomPredicateContext(PredicateContext *ctx) { copyFrom(ctx); }

void NaiveSqlParser::ExpressionAtomPredicateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionAtomPredicate(this);
}
void NaiveSqlParser::ExpressionAtomPredicateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionAtomPredicate(this);
}

antlrcpp::Any NaiveSqlParser::ExpressionAtomPredicateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitExpressionAtomPredicate(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BetweenPredicateContext ------------------------------------------------------------------

std::vector<NaiveSqlParser::PredicateContext *> NaiveSqlParser::BetweenPredicateContext::predicate() {
  return getRuleContexts<NaiveSqlParser::PredicateContext>();
}

NaiveSqlParser::PredicateContext* NaiveSqlParser::BetweenPredicateContext::predicate(size_t i) {
  return getRuleContext<NaiveSqlParser::PredicateContext>(i);
}

tree::TerminalNode* NaiveSqlParser::BetweenPredicateContext::BETWEEN() {
  return getToken(NaiveSqlParser::BETWEEN, 0);
}

tree::TerminalNode* NaiveSqlParser::BetweenPredicateContext::AND() {
  return getToken(NaiveSqlParser::AND, 0);
}

tree::TerminalNode* NaiveSqlParser::BetweenPredicateContext::NOT() {
  return getToken(NaiveSqlParser::NOT, 0);
}

NaiveSqlParser::BetweenPredicateContext::BetweenPredicateContext(PredicateContext *ctx) { copyFrom(ctx); }

void NaiveSqlParser::BetweenPredicateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBetweenPredicate(this);
}
void NaiveSqlParser::BetweenPredicateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBetweenPredicate(this);
}

antlrcpp::Any NaiveSqlParser::BetweenPredicateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitBetweenPredicate(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BinaryComparasionPredicateContext ------------------------------------------------------------------

NaiveSqlParser::ComparisonOperatorContext* NaiveSqlParser::BinaryComparasionPredicateContext::comparisonOperator() {
  return getRuleContext<NaiveSqlParser::ComparisonOperatorContext>(0);
}

std::vector<NaiveSqlParser::PredicateContext *> NaiveSqlParser::BinaryComparasionPredicateContext::predicate() {
  return getRuleContexts<NaiveSqlParser::PredicateContext>();
}

NaiveSqlParser::PredicateContext* NaiveSqlParser::BinaryComparasionPredicateContext::predicate(size_t i) {
  return getRuleContext<NaiveSqlParser::PredicateContext>(i);
}

NaiveSqlParser::BinaryComparasionPredicateContext::BinaryComparasionPredicateContext(PredicateContext *ctx) { copyFrom(ctx); }

void NaiveSqlParser::BinaryComparasionPredicateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBinaryComparasionPredicate(this);
}
void NaiveSqlParser::BinaryComparasionPredicateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBinaryComparasionPredicate(this);
}

antlrcpp::Any NaiveSqlParser::BinaryComparasionPredicateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitBinaryComparasionPredicate(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IsNullPredicateContext ------------------------------------------------------------------

NaiveSqlParser::PredicateContext* NaiveSqlParser::IsNullPredicateContext::predicate() {
  return getRuleContext<NaiveSqlParser::PredicateContext>(0);
}

tree::TerminalNode* NaiveSqlParser::IsNullPredicateContext::IS() {
  return getToken(NaiveSqlParser::IS, 0);
}

NaiveSqlParser::NullNotnullContext* NaiveSqlParser::IsNullPredicateContext::nullNotnull() {
  return getRuleContext<NaiveSqlParser::NullNotnullContext>(0);
}

NaiveSqlParser::IsNullPredicateContext::IsNullPredicateContext(PredicateContext *ctx) { copyFrom(ctx); }

void NaiveSqlParser::IsNullPredicateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIsNullPredicate(this);
}
void NaiveSqlParser::IsNullPredicateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIsNullPredicate(this);
}

antlrcpp::Any NaiveSqlParser::IsNullPredicateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitIsNullPredicate(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LikePredicateContext ------------------------------------------------------------------

std::vector<NaiveSqlParser::PredicateContext *> NaiveSqlParser::LikePredicateContext::predicate() {
  return getRuleContexts<NaiveSqlParser::PredicateContext>();
}

NaiveSqlParser::PredicateContext* NaiveSqlParser::LikePredicateContext::predicate(size_t i) {
  return getRuleContext<NaiveSqlParser::PredicateContext>(i);
}

tree::TerminalNode* NaiveSqlParser::LikePredicateContext::LIKE() {
  return getToken(NaiveSqlParser::LIKE, 0);
}

tree::TerminalNode* NaiveSqlParser::LikePredicateContext::NOT() {
  return getToken(NaiveSqlParser::NOT, 0);
}

tree::TerminalNode* NaiveSqlParser::LikePredicateContext::ESCAPE() {
  return getToken(NaiveSqlParser::ESCAPE, 0);
}

tree::TerminalNode* NaiveSqlParser::LikePredicateContext::STRING_LITERAL() {
  return getToken(NaiveSqlParser::STRING_LITERAL, 0);
}

NaiveSqlParser::LikePredicateContext::LikePredicateContext(PredicateContext *ctx) { copyFrom(ctx); }

void NaiveSqlParser::LikePredicateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLikePredicate(this);
}
void NaiveSqlParser::LikePredicateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLikePredicate(this);
}

antlrcpp::Any NaiveSqlParser::LikePredicateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitLikePredicate(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RegexpPredicateContext ------------------------------------------------------------------

std::vector<NaiveSqlParser::PredicateContext *> NaiveSqlParser::RegexpPredicateContext::predicate() {
  return getRuleContexts<NaiveSqlParser::PredicateContext>();
}

NaiveSqlParser::PredicateContext* NaiveSqlParser::RegexpPredicateContext::predicate(size_t i) {
  return getRuleContext<NaiveSqlParser::PredicateContext>(i);
}

tree::TerminalNode* NaiveSqlParser::RegexpPredicateContext::REGEXP() {
  return getToken(NaiveSqlParser::REGEXP, 0);
}

tree::TerminalNode* NaiveSqlParser::RegexpPredicateContext::RLIKE() {
  return getToken(NaiveSqlParser::RLIKE, 0);
}

tree::TerminalNode* NaiveSqlParser::RegexpPredicateContext::NOT() {
  return getToken(NaiveSqlParser::NOT, 0);
}

NaiveSqlParser::RegexpPredicateContext::RegexpPredicateContext(PredicateContext *ctx) { copyFrom(ctx); }

void NaiveSqlParser::RegexpPredicateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRegexpPredicate(this);
}
void NaiveSqlParser::RegexpPredicateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRegexpPredicate(this);
}

antlrcpp::Any NaiveSqlParser::RegexpPredicateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitRegexpPredicate(this);
  else
    return visitor->visitChildren(this);
}

NaiveSqlParser::PredicateContext* NaiveSqlParser::predicate() {
   return predicate(0);
}

NaiveSqlParser::PredicateContext* NaiveSqlParser::predicate(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  NaiveSqlParser::PredicateContext *_localctx = _tracker.createInstance<PredicateContext>(_ctx, parentState);
  NaiveSqlParser::PredicateContext *previousContext = _localctx;
  size_t startState = 54;
  enterRecursionRule(_localctx, 54, NaiveSqlParser::RulePredicate, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<ExpressionAtomPredicateContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(336);
    expressionAtom(0);
    _ctx->stop = _input->LT(-1);
    setState(372);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(370);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<BinaryComparasionPredicateContext>(_tracker.createInstance<PredicateContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RulePredicate);
          setState(338);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(339);
          comparisonOperator();
          setState(340);
          dynamic_cast<BinaryComparasionPredicateContext *>(_localctx)->right = predicate(6);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<BetweenPredicateContext>(_tracker.createInstance<PredicateContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RulePredicate);
          setState(342);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(344);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == NaiveSqlParser::NOT) {
            setState(343);
            match(NaiveSqlParser::NOT);
          }
          setState(346);
          match(NaiveSqlParser::BETWEEN);
          setState(347);
          predicate(0);
          setState(348);
          match(NaiveSqlParser::AND);
          setState(349);
          predicate(5);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<RegexpPredicateContext>(_tracker.createInstance<PredicateContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RulePredicate);
          setState(351);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(353);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == NaiveSqlParser::NOT) {
            setState(352);
            match(NaiveSqlParser::NOT);
          }
          setState(355);
          dynamic_cast<RegexpPredicateContext *>(_localctx)->regex = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == NaiveSqlParser::REGEXP

          || _la == NaiveSqlParser::RLIKE)) {
            dynamic_cast<RegexpPredicateContext *>(_localctx)->regex = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(356);
          predicate(3);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<IsNullPredicateContext>(_tracker.createInstance<PredicateContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RulePredicate);
          setState(357);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(358);
          match(NaiveSqlParser::IS);
          setState(359);
          nullNotnull();
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<LikePredicateContext>(_tracker.createInstance<PredicateContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RulePredicate);
          setState(360);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(362);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == NaiveSqlParser::NOT) {
            setState(361);
            match(NaiveSqlParser::NOT);
          }
          setState(364);
          match(NaiveSqlParser::LIKE);
          setState(365);
          predicate(0);
          setState(368);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx)) {
          case 1: {
            setState(366);
            match(NaiveSqlParser::ESCAPE);
            setState(367);
            match(NaiveSqlParser::STRING_LITERAL);
            break;
          }

          }
          break;
        }

        } 
      }
      setState(374);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ExpressionAtomContext ------------------------------------------------------------------

NaiveSqlParser::ExpressionAtomContext::ExpressionAtomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t NaiveSqlParser::ExpressionAtomContext::getRuleIndex() const {
  return NaiveSqlParser::RuleExpressionAtom;
}

void NaiveSqlParser::ExpressionAtomContext::copyFrom(ExpressionAtomContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ConstantExpressionAtomContext ------------------------------------------------------------------

NaiveSqlParser::ConstantContext* NaiveSqlParser::ConstantExpressionAtomContext::constant() {
  return getRuleContext<NaiveSqlParser::ConstantContext>(0);
}

NaiveSqlParser::ConstantExpressionAtomContext::ConstantExpressionAtomContext(ExpressionAtomContext *ctx) { copyFrom(ctx); }

void NaiveSqlParser::ConstantExpressionAtomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstantExpressionAtom(this);
}
void NaiveSqlParser::ConstantExpressionAtomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstantExpressionAtom(this);
}

antlrcpp::Any NaiveSqlParser::ConstantExpressionAtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitConstantExpressionAtom(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FullColumnNameExpressionAtomContext ------------------------------------------------------------------

NaiveSqlParser::FullIdContext* NaiveSqlParser::FullColumnNameExpressionAtomContext::fullId() {
  return getRuleContext<NaiveSqlParser::FullIdContext>(0);
}

NaiveSqlParser::FullColumnNameExpressionAtomContext::FullColumnNameExpressionAtomContext(ExpressionAtomContext *ctx) { copyFrom(ctx); }

void NaiveSqlParser::FullColumnNameExpressionAtomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFullColumnNameExpressionAtom(this);
}
void NaiveSqlParser::FullColumnNameExpressionAtomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFullColumnNameExpressionAtom(this);
}

antlrcpp::Any NaiveSqlParser::FullColumnNameExpressionAtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitFullColumnNameExpressionAtom(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MathExpressionAtomContext ------------------------------------------------------------------

NaiveSqlParser::MathOperatorContext* NaiveSqlParser::MathExpressionAtomContext::mathOperator() {
  return getRuleContext<NaiveSqlParser::MathOperatorContext>(0);
}

std::vector<NaiveSqlParser::ExpressionAtomContext *> NaiveSqlParser::MathExpressionAtomContext::expressionAtom() {
  return getRuleContexts<NaiveSqlParser::ExpressionAtomContext>();
}

NaiveSqlParser::ExpressionAtomContext* NaiveSqlParser::MathExpressionAtomContext::expressionAtom(size_t i) {
  return getRuleContext<NaiveSqlParser::ExpressionAtomContext>(i);
}

NaiveSqlParser::MathExpressionAtomContext::MathExpressionAtomContext(ExpressionAtomContext *ctx) { copyFrom(ctx); }

void NaiveSqlParser::MathExpressionAtomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMathExpressionAtom(this);
}
void NaiveSqlParser::MathExpressionAtomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMathExpressionAtom(this);
}

antlrcpp::Any NaiveSqlParser::MathExpressionAtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitMathExpressionAtom(this);
  else
    return visitor->visitChildren(this);
}

NaiveSqlParser::ExpressionAtomContext* NaiveSqlParser::expressionAtom() {
   return expressionAtom(0);
}

NaiveSqlParser::ExpressionAtomContext* NaiveSqlParser::expressionAtom(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  NaiveSqlParser::ExpressionAtomContext *_localctx = _tracker.createInstance<ExpressionAtomContext>(_ctx, parentState);
  NaiveSqlParser::ExpressionAtomContext *previousContext = _localctx;
  size_t startState = 56;
  enterRecursionRule(_localctx, 56, NaiveSqlParser::RuleExpressionAtom, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(378);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NaiveSqlParser::FALSE:
      case NaiveSqlParser::NOT:
      case NaiveSqlParser::NULL_LITERAL:
      case NaiveSqlParser::TRUE:
      case NaiveSqlParser::MINUS:
      case NaiveSqlParser::ZERO_DECIMAL:
      case NaiveSqlParser::ONE_DECIMAL:
      case NaiveSqlParser::TWO_DECIMAL:
      case NaiveSqlParser::STRING_LITERAL:
      case NaiveSqlParser::DECIMAL_LITERAL:
      case NaiveSqlParser::HEXADECIMAL_LITERAL:
      case NaiveSqlParser::REAL_LITERAL:
      case NaiveSqlParser::NULL_SPEC_LITERAL:
      case NaiveSqlParser::BIT_STRING: {
        _localctx = _tracker.createInstance<ConstantExpressionAtomContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(376);
        constant();
        break;
      }

      case NaiveSqlParser::ID: {
        _localctx = _tracker.createInstance<FullColumnNameExpressionAtomContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(377);
        fullId();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(386);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<MathExpressionAtomContext>(_tracker.createInstance<ExpressionAtomContext>(parentContext, parentState));
        _localctx = newContext;
        newContext->left = previousContext;
        pushNewRecursionContext(newContext, startState, RuleExpressionAtom);
        setState(380);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(381);
        mathOperator();
        setState(382);
        dynamic_cast<MathExpressionAtomContext *>(_localctx)->right = expressionAtom(2); 
      }
      setState(388);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ComparisonOperatorContext ------------------------------------------------------------------

NaiveSqlParser::ComparisonOperatorContext::ComparisonOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t NaiveSqlParser::ComparisonOperatorContext::getRuleIndex() const {
  return NaiveSqlParser::RuleComparisonOperator;
}

void NaiveSqlParser::ComparisonOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComparisonOperator(this);
}

void NaiveSqlParser::ComparisonOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComparisonOperator(this);
}


antlrcpp::Any NaiveSqlParser::ComparisonOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitComparisonOperator(this);
  else
    return visitor->visitChildren(this);
}

NaiveSqlParser::ComparisonOperatorContext* NaiveSqlParser::comparisonOperator() {
  ComparisonOperatorContext *_localctx = _tracker.createInstance<ComparisonOperatorContext>(_ctx, getState());
  enterRule(_localctx, 58, NaiveSqlParser::RuleComparisonOperator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(403);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(389);
      match(NaiveSqlParser::EQUAL_SYMBOL);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(390);
      match(NaiveSqlParser::GREATER_SYMBOL);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(391);
      match(NaiveSqlParser::LESS_SYMBOL);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(392);
      match(NaiveSqlParser::LESS_SYMBOL);
      setState(393);
      match(NaiveSqlParser::EQUAL_SYMBOL);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(394);
      match(NaiveSqlParser::GREATER_SYMBOL);
      setState(395);
      match(NaiveSqlParser::EQUAL_SYMBOL);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(396);
      match(NaiveSqlParser::LESS_SYMBOL);
      setState(397);
      match(NaiveSqlParser::GREATER_SYMBOL);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(398);
      match(NaiveSqlParser::EXCLAMATION_SYMBOL);
      setState(399);
      match(NaiveSqlParser::EQUAL_SYMBOL);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(400);
      match(NaiveSqlParser::LESS_SYMBOL);
      setState(401);
      match(NaiveSqlParser::EQUAL_SYMBOL);
      setState(402);
      match(NaiveSqlParser::GREATER_SYMBOL);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicalOperatorContext ------------------------------------------------------------------

NaiveSqlParser::LogicalOperatorContext::LogicalOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NaiveSqlParser::LogicalOperatorContext::AND() {
  return getToken(NaiveSqlParser::AND, 0);
}

tree::TerminalNode* NaiveSqlParser::LogicalOperatorContext::XOR() {
  return getToken(NaiveSqlParser::XOR, 0);
}

tree::TerminalNode* NaiveSqlParser::LogicalOperatorContext::OR() {
  return getToken(NaiveSqlParser::OR, 0);
}


size_t NaiveSqlParser::LogicalOperatorContext::getRuleIndex() const {
  return NaiveSqlParser::RuleLogicalOperator;
}

void NaiveSqlParser::LogicalOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalOperator(this);
}

void NaiveSqlParser::LogicalOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalOperator(this);
}


antlrcpp::Any NaiveSqlParser::LogicalOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitLogicalOperator(this);
  else
    return visitor->visitChildren(this);
}

NaiveSqlParser::LogicalOperatorContext* NaiveSqlParser::logicalOperator() {
  LogicalOperatorContext *_localctx = _tracker.createInstance<LogicalOperatorContext>(_ctx, getState());
  enterRule(_localctx, 60, NaiveSqlParser::RuleLogicalOperator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(412);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NaiveSqlParser::AND: {
        enterOuterAlt(_localctx, 1);
        setState(405);
        match(NaiveSqlParser::AND);
        break;
      }

      case NaiveSqlParser::BIT_AND_OP: {
        enterOuterAlt(_localctx, 2);
        setState(406);
        match(NaiveSqlParser::BIT_AND_OP);
        setState(407);
        match(NaiveSqlParser::BIT_AND_OP);
        break;
      }

      case NaiveSqlParser::XOR: {
        enterOuterAlt(_localctx, 3);
        setState(408);
        match(NaiveSqlParser::XOR);
        break;
      }

      case NaiveSqlParser::OR: {
        enterOuterAlt(_localctx, 4);
        setState(409);
        match(NaiveSqlParser::OR);
        break;
      }

      case NaiveSqlParser::BIT_OR_OP: {
        enterOuterAlt(_localctx, 5);
        setState(410);
        match(NaiveSqlParser::BIT_OR_OP);
        setState(411);
        match(NaiveSqlParser::BIT_OR_OP);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MathOperatorContext ------------------------------------------------------------------

NaiveSqlParser::MathOperatorContext::MathOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NaiveSqlParser::MathOperatorContext::DIV() {
  return getToken(NaiveSqlParser::DIV, 0);
}

tree::TerminalNode* NaiveSqlParser::MathOperatorContext::MOD() {
  return getToken(NaiveSqlParser::MOD, 0);
}


size_t NaiveSqlParser::MathOperatorContext::getRuleIndex() const {
  return NaiveSqlParser::RuleMathOperator;
}

void NaiveSqlParser::MathOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMathOperator(this);
}

void NaiveSqlParser::MathOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMathOperator(this);
}


antlrcpp::Any NaiveSqlParser::MathOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitMathOperator(this);
  else
    return visitor->visitChildren(this);
}

NaiveSqlParser::MathOperatorContext* NaiveSqlParser::mathOperator() {
  MathOperatorContext *_localctx = _tracker.createInstance<MathOperatorContext>(_ctx, getState());
  enterRule(_localctx, 62, NaiveSqlParser::RuleMathOperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(414);
    _la = _input->LA(1);
    if (!(((((_la - 562) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 562)) & ((1ULL << (NaiveSqlParser::STAR - 562))
      | (1ULL << (NaiveSqlParser::DIVIDE - 562))
      | (1ULL << (NaiveSqlParser::MODULE - 562))
      | (1ULL << (NaiveSqlParser::PLUS - 562))
      | (1ULL << (NaiveSqlParser::MINUSMINUS - 562))
      | (1ULL << (NaiveSqlParser::MINUS - 562))
      | (1ULL << (NaiveSqlParser::DIV - 562))
      | (1ULL << (NaiveSqlParser::MOD - 562)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DecimalLiteralContext ------------------------------------------------------------------

NaiveSqlParser::DecimalLiteralContext::DecimalLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NaiveSqlParser::DecimalLiteralContext::DECIMAL_LITERAL() {
  return getToken(NaiveSqlParser::DECIMAL_LITERAL, 0);
}

tree::TerminalNode* NaiveSqlParser::DecimalLiteralContext::ZERO_DECIMAL() {
  return getToken(NaiveSqlParser::ZERO_DECIMAL, 0);
}

tree::TerminalNode* NaiveSqlParser::DecimalLiteralContext::ONE_DECIMAL() {
  return getToken(NaiveSqlParser::ONE_DECIMAL, 0);
}

tree::TerminalNode* NaiveSqlParser::DecimalLiteralContext::TWO_DECIMAL() {
  return getToken(NaiveSqlParser::TWO_DECIMAL, 0);
}


size_t NaiveSqlParser::DecimalLiteralContext::getRuleIndex() const {
  return NaiveSqlParser::RuleDecimalLiteral;
}

void NaiveSqlParser::DecimalLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecimalLiteral(this);
}

void NaiveSqlParser::DecimalLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecimalLiteral(this);
}


antlrcpp::Any NaiveSqlParser::DecimalLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitDecimalLiteral(this);
  else
    return visitor->visitChildren(this);
}

NaiveSqlParser::DecimalLiteralContext* NaiveSqlParser::decimalLiteral() {
  DecimalLiteralContext *_localctx = _tracker.createInstance<DecimalLiteralContext>(_ctx, getState());
  enterRule(_localctx, 64, NaiveSqlParser::RuleDecimalLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(416);
    _la = _input->LA(1);
    if (!(((((_la - 584) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 584)) & ((1ULL << (NaiveSqlParser::ZERO_DECIMAL - 584))
      | (1ULL << (NaiveSqlParser::ONE_DECIMAL - 584))
      | (1ULL << (NaiveSqlParser::TWO_DECIMAL - 584))
      | (1ULL << (NaiveSqlParser::DECIMAL_LITERAL - 584)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringLiteralContext ------------------------------------------------------------------

NaiveSqlParser::StringLiteralContext::StringLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NaiveSqlParser::StringLiteralContext::STRING_LITERAL() {
  return getToken(NaiveSqlParser::STRING_LITERAL, 0);
}


size_t NaiveSqlParser::StringLiteralContext::getRuleIndex() const {
  return NaiveSqlParser::RuleStringLiteral;
}

void NaiveSqlParser::StringLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStringLiteral(this);
}

void NaiveSqlParser::StringLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStringLiteral(this);
}


antlrcpp::Any NaiveSqlParser::StringLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitStringLiteral(this);
  else
    return visitor->visitChildren(this);
}

NaiveSqlParser::StringLiteralContext* NaiveSqlParser::stringLiteral() {
  StringLiteralContext *_localctx = _tracker.createInstance<StringLiteralContext>(_ctx, getState());
  enterRule(_localctx, 66, NaiveSqlParser::RuleStringLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(418);
    match(NaiveSqlParser::STRING_LITERAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BooleanLiteralContext ------------------------------------------------------------------

NaiveSqlParser::BooleanLiteralContext::BooleanLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NaiveSqlParser::BooleanLiteralContext::TRUE() {
  return getToken(NaiveSqlParser::TRUE, 0);
}

tree::TerminalNode* NaiveSqlParser::BooleanLiteralContext::FALSE() {
  return getToken(NaiveSqlParser::FALSE, 0);
}


size_t NaiveSqlParser::BooleanLiteralContext::getRuleIndex() const {
  return NaiveSqlParser::RuleBooleanLiteral;
}

void NaiveSqlParser::BooleanLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBooleanLiteral(this);
}

void NaiveSqlParser::BooleanLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBooleanLiteral(this);
}


antlrcpp::Any NaiveSqlParser::BooleanLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitBooleanLiteral(this);
  else
    return visitor->visitChildren(this);
}

NaiveSqlParser::BooleanLiteralContext* NaiveSqlParser::booleanLiteral() {
  BooleanLiteralContext *_localctx = _tracker.createInstance<BooleanLiteralContext>(_ctx, getState());
  enterRule(_localctx, 68, NaiveSqlParser::RuleBooleanLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(420);
    _la = _input->LA(1);
    if (!(_la == NaiveSqlParser::FALSE || _la == NaiveSqlParser::TRUE)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HexadecimalLiteralContext ------------------------------------------------------------------

NaiveSqlParser::HexadecimalLiteralContext::HexadecimalLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NaiveSqlParser::HexadecimalLiteralContext::HEXADECIMAL_LITERAL() {
  return getToken(NaiveSqlParser::HEXADECIMAL_LITERAL, 0);
}


size_t NaiveSqlParser::HexadecimalLiteralContext::getRuleIndex() const {
  return NaiveSqlParser::RuleHexadecimalLiteral;
}

void NaiveSqlParser::HexadecimalLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHexadecimalLiteral(this);
}

void NaiveSqlParser::HexadecimalLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHexadecimalLiteral(this);
}


antlrcpp::Any NaiveSqlParser::HexadecimalLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitHexadecimalLiteral(this);
  else
    return visitor->visitChildren(this);
}

NaiveSqlParser::HexadecimalLiteralContext* NaiveSqlParser::hexadecimalLiteral() {
  HexadecimalLiteralContext *_localctx = _tracker.createInstance<HexadecimalLiteralContext>(_ctx, getState());
  enterRule(_localctx, 70, NaiveSqlParser::RuleHexadecimalLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(422);
    match(NaiveSqlParser::HEXADECIMAL_LITERAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NullNotnullContext ------------------------------------------------------------------

NaiveSqlParser::NullNotnullContext::NullNotnullContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NaiveSqlParser::NullNotnullContext::NULL_LITERAL() {
  return getToken(NaiveSqlParser::NULL_LITERAL, 0);
}

tree::TerminalNode* NaiveSqlParser::NullNotnullContext::NULL_SPEC_LITERAL() {
  return getToken(NaiveSqlParser::NULL_SPEC_LITERAL, 0);
}

tree::TerminalNode* NaiveSqlParser::NullNotnullContext::NOT() {
  return getToken(NaiveSqlParser::NOT, 0);
}


size_t NaiveSqlParser::NullNotnullContext::getRuleIndex() const {
  return NaiveSqlParser::RuleNullNotnull;
}

void NaiveSqlParser::NullNotnullContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNullNotnull(this);
}

void NaiveSqlParser::NullNotnullContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNullNotnull(this);
}


antlrcpp::Any NaiveSqlParser::NullNotnullContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitNullNotnull(this);
  else
    return visitor->visitChildren(this);
}

NaiveSqlParser::NullNotnullContext* NaiveSqlParser::nullNotnull() {
  NullNotnullContext *_localctx = _tracker.createInstance<NullNotnullContext>(_ctx, getState());
  enterRule(_localctx, 72, NaiveSqlParser::RuleNullNotnull);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(425);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NaiveSqlParser::NOT) {
      setState(424);
      match(NaiveSqlParser::NOT);
    }
    setState(427);
    _la = _input->LA(1);
    if (!(_la == NaiveSqlParser::NULL_LITERAL || _la == NaiveSqlParser::NULL_SPEC_LITERAL)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantContext ------------------------------------------------------------------

NaiveSqlParser::ConstantContext::ConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NaiveSqlParser::StringLiteralContext* NaiveSqlParser::ConstantContext::stringLiteral() {
  return getRuleContext<NaiveSqlParser::StringLiteralContext>(0);
}

NaiveSqlParser::DecimalLiteralContext* NaiveSqlParser::ConstantContext::decimalLiteral() {
  return getRuleContext<NaiveSqlParser::DecimalLiteralContext>(0);
}

NaiveSqlParser::HexadecimalLiteralContext* NaiveSqlParser::ConstantContext::hexadecimalLiteral() {
  return getRuleContext<NaiveSqlParser::HexadecimalLiteralContext>(0);
}

NaiveSqlParser::BooleanLiteralContext* NaiveSqlParser::ConstantContext::booleanLiteral() {
  return getRuleContext<NaiveSqlParser::BooleanLiteralContext>(0);
}

tree::TerminalNode* NaiveSqlParser::ConstantContext::REAL_LITERAL() {
  return getToken(NaiveSqlParser::REAL_LITERAL, 0);
}

tree::TerminalNode* NaiveSqlParser::ConstantContext::BIT_STRING() {
  return getToken(NaiveSqlParser::BIT_STRING, 0);
}

tree::TerminalNode* NaiveSqlParser::ConstantContext::NULL_LITERAL() {
  return getToken(NaiveSqlParser::NULL_LITERAL, 0);
}

tree::TerminalNode* NaiveSqlParser::ConstantContext::NULL_SPEC_LITERAL() {
  return getToken(NaiveSqlParser::NULL_SPEC_LITERAL, 0);
}

tree::TerminalNode* NaiveSqlParser::ConstantContext::NOT() {
  return getToken(NaiveSqlParser::NOT, 0);
}


size_t NaiveSqlParser::ConstantContext::getRuleIndex() const {
  return NaiveSqlParser::RuleConstant;
}

void NaiveSqlParser::ConstantContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstant(this);
}

void NaiveSqlParser::ConstantContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstant(this);
}


antlrcpp::Any NaiveSqlParser::ConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitConstant(this);
  else
    return visitor->visitChildren(this);
}

NaiveSqlParser::ConstantContext* NaiveSqlParser::constant() {
  ConstantContext *_localctx = _tracker.createInstance<ConstantContext>(_ctx, getState());
  enterRule(_localctx, 74, NaiveSqlParser::RuleConstant);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(441);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NaiveSqlParser::STRING_LITERAL: {
        enterOuterAlt(_localctx, 1);
        setState(429);
        stringLiteral();
        break;
      }

      case NaiveSqlParser::ZERO_DECIMAL:
      case NaiveSqlParser::ONE_DECIMAL:
      case NaiveSqlParser::TWO_DECIMAL:
      case NaiveSqlParser::DECIMAL_LITERAL: {
        enterOuterAlt(_localctx, 2);
        setState(430);
        decimalLiteral();
        break;
      }

      case NaiveSqlParser::MINUS: {
        enterOuterAlt(_localctx, 3);
        setState(431);
        match(NaiveSqlParser::MINUS);
        setState(432);
        decimalLiteral();
        break;
      }

      case NaiveSqlParser::HEXADECIMAL_LITERAL: {
        enterOuterAlt(_localctx, 4);
        setState(433);
        hexadecimalLiteral();
        break;
      }

      case NaiveSqlParser::FALSE:
      case NaiveSqlParser::TRUE: {
        enterOuterAlt(_localctx, 5);
        setState(434);
        booleanLiteral();
        break;
      }

      case NaiveSqlParser::REAL_LITERAL: {
        enterOuterAlt(_localctx, 6);
        setState(435);
        match(NaiveSqlParser::REAL_LITERAL);
        break;
      }

      case NaiveSqlParser::BIT_STRING: {
        enterOuterAlt(_localctx, 7);
        setState(436);
        match(NaiveSqlParser::BIT_STRING);
        break;
      }

      case NaiveSqlParser::NOT:
      case NaiveSqlParser::NULL_LITERAL:
      case NaiveSqlParser::NULL_SPEC_LITERAL: {
        enterOuterAlt(_localctx, 8);
        setState(438);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == NaiveSqlParser::NOT) {
          setState(437);
          match(NaiveSqlParser::NOT);
        }
        setState(440);
        dynamic_cast<ConstantContext *>(_localctx)->nullLiteral = _input->LT(1);
        _la = _input->LA(1);
        if (!(_la == NaiveSqlParser::NULL_LITERAL || _la == NaiveSqlParser::NULL_SPEC_LITERAL)) {
          dynamic_cast<ConstantContext *>(_localctx)->nullLiteral = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UidContext ------------------------------------------------------------------

NaiveSqlParser::UidContext::UidContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NaiveSqlParser::UidContext::ID() {
  return getToken(NaiveSqlParser::ID, 0);
}


size_t NaiveSqlParser::UidContext::getRuleIndex() const {
  return NaiveSqlParser::RuleUid;
}

void NaiveSqlParser::UidContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUid(this);
}

void NaiveSqlParser::UidContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUid(this);
}


antlrcpp::Any NaiveSqlParser::UidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitUid(this);
  else
    return visitor->visitChildren(this);
}

NaiveSqlParser::UidContext* NaiveSqlParser::uid() {
  UidContext *_localctx = _tracker.createInstance<UidContext>(_ctx, getState());
  enterRule(_localctx, 76, NaiveSqlParser::RuleUid);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(443);
    match(NaiveSqlParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FullIdContext ------------------------------------------------------------------

NaiveSqlParser::FullIdContext::FullIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<NaiveSqlParser::UidContext *> NaiveSqlParser::FullIdContext::uid() {
  return getRuleContexts<NaiveSqlParser::UidContext>();
}

NaiveSqlParser::UidContext* NaiveSqlParser::FullIdContext::uid(size_t i) {
  return getRuleContext<NaiveSqlParser::UidContext>(i);
}


size_t NaiveSqlParser::FullIdContext::getRuleIndex() const {
  return NaiveSqlParser::RuleFullId;
}

void NaiveSqlParser::FullIdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFullId(this);
}

void NaiveSqlParser::FullIdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFullId(this);
}


antlrcpp::Any NaiveSqlParser::FullIdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitFullId(this);
  else
    return visitor->visitChildren(this);
}

NaiveSqlParser::FullIdContext* NaiveSqlParser::fullId() {
  FullIdContext *_localctx = _tracker.createInstance<FullIdContext>(_ctx, getState());
  enterRule(_localctx, 78, NaiveSqlParser::RuleFullId);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(445);
    uid();
    setState(448);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx)) {
    case 1: {
      setState(446);
      match(NaiveSqlParser::DOT);
      setState(447);
      uid();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TableNameContext ------------------------------------------------------------------

NaiveSqlParser::TableNameContext::TableNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<NaiveSqlParser::UidContext *> NaiveSqlParser::TableNameContext::uid() {
  return getRuleContexts<NaiveSqlParser::UidContext>();
}

NaiveSqlParser::UidContext* NaiveSqlParser::TableNameContext::uid(size_t i) {
  return getRuleContext<NaiveSqlParser::UidContext>(i);
}


size_t NaiveSqlParser::TableNameContext::getRuleIndex() const {
  return NaiveSqlParser::RuleTableName;
}

void NaiveSqlParser::TableNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTableName(this);
}

void NaiveSqlParser::TableNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTableName(this);
}


antlrcpp::Any NaiveSqlParser::TableNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitTableName(this);
  else
    return visitor->visitChildren(this);
}

NaiveSqlParser::TableNameContext* NaiveSqlParser::tableName() {
  TableNameContext *_localctx = _tracker.createInstance<TableNameContext>(_ctx, getState());
  enterRule(_localctx, 80, NaiveSqlParser::RuleTableName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(450);
    uid();
    setState(453);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NaiveSqlParser::DOT) {
      setState(451);
      match(NaiveSqlParser::DOT);
      setState(452);
      uid();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UidListContext ------------------------------------------------------------------

NaiveSqlParser::UidListContext::UidListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<NaiveSqlParser::UidContext *> NaiveSqlParser::UidListContext::uid() {
  return getRuleContexts<NaiveSqlParser::UidContext>();
}

NaiveSqlParser::UidContext* NaiveSqlParser::UidListContext::uid(size_t i) {
  return getRuleContext<NaiveSqlParser::UidContext>(i);
}


size_t NaiveSqlParser::UidListContext::getRuleIndex() const {
  return NaiveSqlParser::RuleUidList;
}

void NaiveSqlParser::UidListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUidList(this);
}

void NaiveSqlParser::UidListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUidList(this);
}


antlrcpp::Any NaiveSqlParser::UidListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitUidList(this);
  else
    return visitor->visitChildren(this);
}

NaiveSqlParser::UidListContext* NaiveSqlParser::uidList() {
  UidListContext *_localctx = _tracker.createInstance<UidListContext>(_ctx, getState());
  enterRule(_localctx, 82, NaiveSqlParser::RuleUidList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(455);
    uid();
    setState(460);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == NaiveSqlParser::COMMA) {
      setState(456);
      match(NaiveSqlParser::COMMA);
      setState(457);
      uid();
      setState(462);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TablesContext ------------------------------------------------------------------

NaiveSqlParser::TablesContext::TablesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<NaiveSqlParser::TableNameContext *> NaiveSqlParser::TablesContext::tableName() {
  return getRuleContexts<NaiveSqlParser::TableNameContext>();
}

NaiveSqlParser::TableNameContext* NaiveSqlParser::TablesContext::tableName(size_t i) {
  return getRuleContext<NaiveSqlParser::TableNameContext>(i);
}


size_t NaiveSqlParser::TablesContext::getRuleIndex() const {
  return NaiveSqlParser::RuleTables;
}

void NaiveSqlParser::TablesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTables(this);
}

void NaiveSqlParser::TablesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTables(this);
}


antlrcpp::Any NaiveSqlParser::TablesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitTables(this);
  else
    return visitor->visitChildren(this);
}

NaiveSqlParser::TablesContext* NaiveSqlParser::tables() {
  TablesContext *_localctx = _tracker.createInstance<TablesContext>(_ctx, getState());
  enterRule(_localctx, 84, NaiveSqlParser::RuleTables);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(463);
    tableName();
    setState(468);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == NaiveSqlParser::COMMA) {
      setState(464);
      match(NaiveSqlParser::COMMA);
      setState(465);
      tableName();
      setState(470);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionsContext ------------------------------------------------------------------

NaiveSqlParser::ExpressionsContext::ExpressionsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<NaiveSqlParser::ExpressionContext *> NaiveSqlParser::ExpressionsContext::expression() {
  return getRuleContexts<NaiveSqlParser::ExpressionContext>();
}

NaiveSqlParser::ExpressionContext* NaiveSqlParser::ExpressionsContext::expression(size_t i) {
  return getRuleContext<NaiveSqlParser::ExpressionContext>(i);
}


size_t NaiveSqlParser::ExpressionsContext::getRuleIndex() const {
  return NaiveSqlParser::RuleExpressions;
}

void NaiveSqlParser::ExpressionsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressions(this);
}

void NaiveSqlParser::ExpressionsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressions(this);
}


antlrcpp::Any NaiveSqlParser::ExpressionsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitExpressions(this);
  else
    return visitor->visitChildren(this);
}

NaiveSqlParser::ExpressionsContext* NaiveSqlParser::expressions() {
  ExpressionsContext *_localctx = _tracker.createInstance<ExpressionsContext>(_ctx, getState());
  enterRule(_localctx, 86, NaiveSqlParser::RuleExpressions);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(471);
    expression(0);
    setState(476);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == NaiveSqlParser::COMMA) {
      setState(472);
      match(NaiveSqlParser::COMMA);
      setState(473);
      expression(0);
      setState(478);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantsContext ------------------------------------------------------------------

NaiveSqlParser::ConstantsContext::ConstantsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<NaiveSqlParser::ConstantContext *> NaiveSqlParser::ConstantsContext::constant() {
  return getRuleContexts<NaiveSqlParser::ConstantContext>();
}

NaiveSqlParser::ConstantContext* NaiveSqlParser::ConstantsContext::constant(size_t i) {
  return getRuleContext<NaiveSqlParser::ConstantContext>(i);
}


size_t NaiveSqlParser::ConstantsContext::getRuleIndex() const {
  return NaiveSqlParser::RuleConstants;
}

void NaiveSqlParser::ConstantsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstants(this);
}

void NaiveSqlParser::ConstantsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstants(this);
}


antlrcpp::Any NaiveSqlParser::ConstantsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitConstants(this);
  else
    return visitor->visitChildren(this);
}

NaiveSqlParser::ConstantsContext* NaiveSqlParser::constants() {
  ConstantsContext *_localctx = _tracker.createInstance<ConstantsContext>(_ctx, getState());
  enterRule(_localctx, 88, NaiveSqlParser::RuleConstants);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(479);
    constant();
    setState(484);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == NaiveSqlParser::COMMA) {
      setState(480);
      match(NaiveSqlParser::COMMA);
      setState(481);
      constant();
      setState(486);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpleStringsContext ------------------------------------------------------------------

NaiveSqlParser::SimpleStringsContext::SimpleStringsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> NaiveSqlParser::SimpleStringsContext::STRING_LITERAL() {
  return getTokens(NaiveSqlParser::STRING_LITERAL);
}

tree::TerminalNode* NaiveSqlParser::SimpleStringsContext::STRING_LITERAL(size_t i) {
  return getToken(NaiveSqlParser::STRING_LITERAL, i);
}


size_t NaiveSqlParser::SimpleStringsContext::getRuleIndex() const {
  return NaiveSqlParser::RuleSimpleStrings;
}

void NaiveSqlParser::SimpleStringsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimpleStrings(this);
}

void NaiveSqlParser::SimpleStringsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimpleStrings(this);
}


antlrcpp::Any NaiveSqlParser::SimpleStringsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitSimpleStrings(this);
  else
    return visitor->visitChildren(this);
}

NaiveSqlParser::SimpleStringsContext* NaiveSqlParser::simpleStrings() {
  SimpleStringsContext *_localctx = _tracker.createInstance<SimpleStringsContext>(_ctx, getState());
  enterRule(_localctx, 90, NaiveSqlParser::RuleSimpleStrings);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(487);
    match(NaiveSqlParser::STRING_LITERAL);
    setState(492);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == NaiveSqlParser::COMMA) {
      setState(488);
      match(NaiveSqlParser::COMMA);
      setState(489);
      match(NaiveSqlParser::STRING_LITERAL);
      setState(494);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UserVariablesContext ------------------------------------------------------------------

NaiveSqlParser::UserVariablesContext::UserVariablesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> NaiveSqlParser::UserVariablesContext::LOCAL_ID() {
  return getTokens(NaiveSqlParser::LOCAL_ID);
}

tree::TerminalNode* NaiveSqlParser::UserVariablesContext::LOCAL_ID(size_t i) {
  return getToken(NaiveSqlParser::LOCAL_ID, i);
}


size_t NaiveSqlParser::UserVariablesContext::getRuleIndex() const {
  return NaiveSqlParser::RuleUserVariables;
}

void NaiveSqlParser::UserVariablesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUserVariables(this);
}

void NaiveSqlParser::UserVariablesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUserVariables(this);
}


antlrcpp::Any NaiveSqlParser::UserVariablesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitUserVariables(this);
  else
    return visitor->visitChildren(this);
}

NaiveSqlParser::UserVariablesContext* NaiveSqlParser::userVariables() {
  UserVariablesContext *_localctx = _tracker.createInstance<UserVariablesContext>(_ctx, getState());
  enterRule(_localctx, 92, NaiveSqlParser::RuleUserVariables);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(495);
    match(NaiveSqlParser::LOCAL_ID);
    setState(500);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == NaiveSqlParser::COMMA) {
      setState(496);
      match(NaiveSqlParser::COMMA);
      setState(497);
      match(NaiveSqlParser::LOCAL_ID);
      setState(502);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DataTypeContext ------------------------------------------------------------------

NaiveSqlParser::DataTypeContext::DataTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t NaiveSqlParser::DataTypeContext::getRuleIndex() const {
  return NaiveSqlParser::RuleDataType;
}

void NaiveSqlParser::DataTypeContext::copyFrom(DataTypeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- DimensionDataTypeContext ------------------------------------------------------------------

tree::TerminalNode* NaiveSqlParser::DimensionDataTypeContext::TINYINT() {
  return getToken(NaiveSqlParser::TINYINT, 0);
}

tree::TerminalNode* NaiveSqlParser::DimensionDataTypeContext::SMALLINT() {
  return getToken(NaiveSqlParser::SMALLINT, 0);
}

tree::TerminalNode* NaiveSqlParser::DimensionDataTypeContext::MEDIUMINT() {
  return getToken(NaiveSqlParser::MEDIUMINT, 0);
}

tree::TerminalNode* NaiveSqlParser::DimensionDataTypeContext::INT() {
  return getToken(NaiveSqlParser::INT, 0);
}

tree::TerminalNode* NaiveSqlParser::DimensionDataTypeContext::INTEGER() {
  return getToken(NaiveSqlParser::INTEGER, 0);
}

tree::TerminalNode* NaiveSqlParser::DimensionDataTypeContext::BIGINT() {
  return getToken(NaiveSqlParser::BIGINT, 0);
}

NaiveSqlParser::LengthOneDimensionContext* NaiveSqlParser::DimensionDataTypeContext::lengthOneDimension() {
  return getRuleContext<NaiveSqlParser::LengthOneDimensionContext>(0);
}

tree::TerminalNode* NaiveSqlParser::DimensionDataTypeContext::UNSIGNED() {
  return getToken(NaiveSqlParser::UNSIGNED, 0);
}

tree::TerminalNode* NaiveSqlParser::DimensionDataTypeContext::ZEROFILL() {
  return getToken(NaiveSqlParser::ZEROFILL, 0);
}

tree::TerminalNode* NaiveSqlParser::DimensionDataTypeContext::REAL() {
  return getToken(NaiveSqlParser::REAL, 0);
}

tree::TerminalNode* NaiveSqlParser::DimensionDataTypeContext::DOUBLE() {
  return getToken(NaiveSqlParser::DOUBLE, 0);
}

tree::TerminalNode* NaiveSqlParser::DimensionDataTypeContext::FLOAT() {
  return getToken(NaiveSqlParser::FLOAT, 0);
}

NaiveSqlParser::LengthTwoDimensionContext* NaiveSqlParser::DimensionDataTypeContext::lengthTwoDimension() {
  return getRuleContext<NaiveSqlParser::LengthTwoDimensionContext>(0);
}

tree::TerminalNode* NaiveSqlParser::DimensionDataTypeContext::BIT() {
  return getToken(NaiveSqlParser::BIT, 0);
}

tree::TerminalNode* NaiveSqlParser::DimensionDataTypeContext::TIME() {
  return getToken(NaiveSqlParser::TIME, 0);
}

tree::TerminalNode* NaiveSqlParser::DimensionDataTypeContext::TIMESTAMP() {
  return getToken(NaiveSqlParser::TIMESTAMP, 0);
}

tree::TerminalNode* NaiveSqlParser::DimensionDataTypeContext::DATETIME() {
  return getToken(NaiveSqlParser::DATETIME, 0);
}

tree::TerminalNode* NaiveSqlParser::DimensionDataTypeContext::BINARY() {
  return getToken(NaiveSqlParser::BINARY, 0);
}

tree::TerminalNode* NaiveSqlParser::DimensionDataTypeContext::VARBINARY() {
  return getToken(NaiveSqlParser::VARBINARY, 0);
}

tree::TerminalNode* NaiveSqlParser::DimensionDataTypeContext::YEAR() {
  return getToken(NaiveSqlParser::YEAR, 0);
}

NaiveSqlParser::DimensionDataTypeContext::DimensionDataTypeContext(DataTypeContext *ctx) { copyFrom(ctx); }

void NaiveSqlParser::DimensionDataTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDimensionDataType(this);
}
void NaiveSqlParser::DimensionDataTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDimensionDataType(this);
}

antlrcpp::Any NaiveSqlParser::DimensionDataTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitDimensionDataType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StringDataTypeContext ------------------------------------------------------------------

tree::TerminalNode* NaiveSqlParser::StringDataTypeContext::CHAR() {
  return getToken(NaiveSqlParser::CHAR, 0);
}

tree::TerminalNode* NaiveSqlParser::StringDataTypeContext::VARCHAR() {
  return getToken(NaiveSqlParser::VARCHAR, 0);
}

tree::TerminalNode* NaiveSqlParser::StringDataTypeContext::TINYTEXT() {
  return getToken(NaiveSqlParser::TINYTEXT, 0);
}

tree::TerminalNode* NaiveSqlParser::StringDataTypeContext::TEXT() {
  return getToken(NaiveSqlParser::TEXT, 0);
}

tree::TerminalNode* NaiveSqlParser::StringDataTypeContext::MEDIUMTEXT() {
  return getToken(NaiveSqlParser::MEDIUMTEXT, 0);
}

tree::TerminalNode* NaiveSqlParser::StringDataTypeContext::LONGTEXT() {
  return getToken(NaiveSqlParser::LONGTEXT, 0);
}

NaiveSqlParser::LengthOneDimensionContext* NaiveSqlParser::StringDataTypeContext::lengthOneDimension() {
  return getRuleContext<NaiveSqlParser::LengthOneDimensionContext>(0);
}

tree::TerminalNode* NaiveSqlParser::StringDataTypeContext::BINARY() {
  return getToken(NaiveSqlParser::BINARY, 0);
}

NaiveSqlParser::StringDataTypeContext::StringDataTypeContext(DataTypeContext *ctx) { copyFrom(ctx); }

void NaiveSqlParser::StringDataTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStringDataType(this);
}
void NaiveSqlParser::StringDataTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStringDataType(this);
}

antlrcpp::Any NaiveSqlParser::StringDataTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitStringDataType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SimpleDataTypeContext ------------------------------------------------------------------

tree::TerminalNode* NaiveSqlParser::SimpleDataTypeContext::DATE() {
  return getToken(NaiveSqlParser::DATE, 0);
}

tree::TerminalNode* NaiveSqlParser::SimpleDataTypeContext::TINYBLOB() {
  return getToken(NaiveSqlParser::TINYBLOB, 0);
}

tree::TerminalNode* NaiveSqlParser::SimpleDataTypeContext::BLOB() {
  return getToken(NaiveSqlParser::BLOB, 0);
}

tree::TerminalNode* NaiveSqlParser::SimpleDataTypeContext::MEDIUMBLOB() {
  return getToken(NaiveSqlParser::MEDIUMBLOB, 0);
}

tree::TerminalNode* NaiveSqlParser::SimpleDataTypeContext::LONGBLOB() {
  return getToken(NaiveSqlParser::LONGBLOB, 0);
}

tree::TerminalNode* NaiveSqlParser::SimpleDataTypeContext::BOOL() {
  return getToken(NaiveSqlParser::BOOL, 0);
}

tree::TerminalNode* NaiveSqlParser::SimpleDataTypeContext::BOOLEAN() {
  return getToken(NaiveSqlParser::BOOLEAN, 0);
}

NaiveSqlParser::SimpleDataTypeContext::SimpleDataTypeContext(DataTypeContext *ctx) { copyFrom(ctx); }

void NaiveSqlParser::SimpleDataTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimpleDataType(this);
}
void NaiveSqlParser::SimpleDataTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimpleDataType(this);
}

antlrcpp::Any NaiveSqlParser::SimpleDataTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitSimpleDataType(this);
  else
    return visitor->visitChildren(this);
}
NaiveSqlParser::DataTypeContext* NaiveSqlParser::dataType() {
  DataTypeContext *_localctx = _tracker.createInstance<DataTypeContext>(_ctx, getState());
  enterRule(_localctx, 94, NaiveSqlParser::RuleDataType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(535);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NaiveSqlParser::CHAR:
      case NaiveSqlParser::VARCHAR:
      case NaiveSqlParser::TINYTEXT:
      case NaiveSqlParser::TEXT:
      case NaiveSqlParser::MEDIUMTEXT:
      case NaiveSqlParser::LONGTEXT: {
        _localctx = dynamic_cast<DataTypeContext *>(_tracker.createInstance<NaiveSqlParser::StringDataTypeContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(503);
        dynamic_cast<StringDataTypeContext *>(_localctx)->typeName = _input->LT(1);
        _la = _input->LA(1);
        if (!(((((_la - 486) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 486)) & ((1ULL << (NaiveSqlParser::CHAR - 486))
          | (1ULL << (NaiveSqlParser::VARCHAR - 486))
          | (1ULL << (NaiveSqlParser::TINYTEXT - 486))
          | (1ULL << (NaiveSqlParser::TEXT - 486))
          | (1ULL << (NaiveSqlParser::MEDIUMTEXT - 486))
          | (1ULL << (NaiveSqlParser::LONGTEXT - 486)))) != 0))) {
          dynamic_cast<StringDataTypeContext *>(_localctx)->typeName = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(505);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == NaiveSqlParser::LR_BRACKET) {
          setState(504);
          lengthOneDimension();
        }
        setState(508);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == NaiveSqlParser::BINARY) {
          setState(507);
          match(NaiveSqlParser::BINARY);
        }
        break;
      }

      case NaiveSqlParser::TINYINT:
      case NaiveSqlParser::SMALLINT:
      case NaiveSqlParser::MEDIUMINT:
      case NaiveSqlParser::INT:
      case NaiveSqlParser::INTEGER:
      case NaiveSqlParser::BIGINT: {
        _localctx = dynamic_cast<DataTypeContext *>(_tracker.createInstance<NaiveSqlParser::DimensionDataTypeContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(510);
        dynamic_cast<DimensionDataTypeContext *>(_localctx)->typeName = _input->LT(1);
        _la = _input->LA(1);
        if (!(((((_la - 470) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 470)) & ((1ULL << (NaiveSqlParser::TINYINT - 470))
          | (1ULL << (NaiveSqlParser::SMALLINT - 470))
          | (1ULL << (NaiveSqlParser::MEDIUMINT - 470))
          | (1ULL << (NaiveSqlParser::INT - 470))
          | (1ULL << (NaiveSqlParser::INTEGER - 470))
          | (1ULL << (NaiveSqlParser::BIGINT - 470)))) != 0))) {
          dynamic_cast<DimensionDataTypeContext *>(_localctx)->typeName = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(512);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == NaiveSqlParser::LR_BRACKET) {
          setState(511);
          lengthOneDimension();
        }
        setState(515);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == NaiveSqlParser::UNSIGNED) {
          setState(514);
          match(NaiveSqlParser::UNSIGNED);
        }
        setState(518);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == NaiveSqlParser::ZEROFILL) {
          setState(517);
          match(NaiveSqlParser::ZEROFILL);
        }
        break;
      }

      case NaiveSqlParser::REAL:
      case NaiveSqlParser::DOUBLE:
      case NaiveSqlParser::FLOAT: {
        _localctx = dynamic_cast<DataTypeContext *>(_tracker.createInstance<NaiveSqlParser::DimensionDataTypeContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(520);
        dynamic_cast<DimensionDataTypeContext *>(_localctx)->typeName = _input->LT(1);
        _la = _input->LA(1);
        if (!(((((_la - 476) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 476)) & ((1ULL << (NaiveSqlParser::REAL - 476))
          | (1ULL << (NaiveSqlParser::DOUBLE - 476))
          | (1ULL << (NaiveSqlParser::FLOAT - 476)))) != 0))) {
          dynamic_cast<DimensionDataTypeContext *>(_localctx)->typeName = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(522);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == NaiveSqlParser::LR_BRACKET) {
          setState(521);
          lengthTwoDimension();
        }
        setState(525);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == NaiveSqlParser::UNSIGNED) {
          setState(524);
          match(NaiveSqlParser::UNSIGNED);
        }
        setState(528);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == NaiveSqlParser::ZEROFILL) {
          setState(527);
          match(NaiveSqlParser::ZEROFILL);
        }
        break;
      }

      case NaiveSqlParser::BOOL:
      case NaiveSqlParser::BOOLEAN:
      case NaiveSqlParser::DATE:
      case NaiveSqlParser::TINYBLOB:
      case NaiveSqlParser::BLOB:
      case NaiveSqlParser::MEDIUMBLOB:
      case NaiveSqlParser::LONGBLOB: {
        _localctx = dynamic_cast<DataTypeContext *>(_tracker.createInstance<NaiveSqlParser::SimpleDataTypeContext>(_localctx));
        enterOuterAlt(_localctx, 4);
        setState(530);
        dynamic_cast<SimpleDataTypeContext *>(_localctx)->typeName = _input->LT(1);
        _la = _input->LA(1);
        if (!(_la == NaiveSqlParser::BOOL

        || _la == NaiveSqlParser::BOOLEAN || ((((_la - 481) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 481)) & ((1ULL << (NaiveSqlParser::DATE - 481))
          | (1ULL << (NaiveSqlParser::TINYBLOB - 481))
          | (1ULL << (NaiveSqlParser::BLOB - 481))
          | (1ULL << (NaiveSqlParser::MEDIUMBLOB - 481))
          | (1ULL << (NaiveSqlParser::LONGBLOB - 481)))) != 0))) {
          dynamic_cast<SimpleDataTypeContext *>(_localctx)->typeName = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case NaiveSqlParser::BIT:
      case NaiveSqlParser::TIME:
      case NaiveSqlParser::TIMESTAMP:
      case NaiveSqlParser::DATETIME:
      case NaiveSqlParser::YEAR:
      case NaiveSqlParser::BINARY:
      case NaiveSqlParser::VARBINARY: {
        _localctx = dynamic_cast<DataTypeContext *>(_tracker.createInstance<NaiveSqlParser::DimensionDataTypeContext>(_localctx));
        enterOuterAlt(_localctx, 5);
        setState(531);
        dynamic_cast<DimensionDataTypeContext *>(_localctx)->typeName = _input->LT(1);
        _la = _input->LA(1);
        if (!(_la == NaiveSqlParser::BIT || ((((_la - 482) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 482)) & ((1ULL << (NaiveSqlParser::TIME - 482))
          | (1ULL << (NaiveSqlParser::TIMESTAMP - 482))
          | (1ULL << (NaiveSqlParser::DATETIME - 482))
          | (1ULL << (NaiveSqlParser::YEAR - 482))
          | (1ULL << (NaiveSqlParser::BINARY - 482))
          | (1ULL << (NaiveSqlParser::VARBINARY - 482)))) != 0))) {
          dynamic_cast<DimensionDataTypeContext *>(_localctx)->typeName = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(533);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == NaiveSqlParser::LR_BRACKET) {
          setState(532);
          lengthOneDimension();
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntervalTypeContext ------------------------------------------------------------------

NaiveSqlParser::IntervalTypeContext::IntervalTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NaiveSqlParser::IntervalTypeBaseContext* NaiveSqlParser::IntervalTypeContext::intervalTypeBase() {
  return getRuleContext<NaiveSqlParser::IntervalTypeBaseContext>(0);
}

tree::TerminalNode* NaiveSqlParser::IntervalTypeContext::YEAR() {
  return getToken(NaiveSqlParser::YEAR, 0);
}

tree::TerminalNode* NaiveSqlParser::IntervalTypeContext::YEAR_MONTH() {
  return getToken(NaiveSqlParser::YEAR_MONTH, 0);
}

tree::TerminalNode* NaiveSqlParser::IntervalTypeContext::DAY_HOUR() {
  return getToken(NaiveSqlParser::DAY_HOUR, 0);
}

tree::TerminalNode* NaiveSqlParser::IntervalTypeContext::DAY_MINUTE() {
  return getToken(NaiveSqlParser::DAY_MINUTE, 0);
}

tree::TerminalNode* NaiveSqlParser::IntervalTypeContext::DAY_SECOND() {
  return getToken(NaiveSqlParser::DAY_SECOND, 0);
}

tree::TerminalNode* NaiveSqlParser::IntervalTypeContext::HOUR_MINUTE() {
  return getToken(NaiveSqlParser::HOUR_MINUTE, 0);
}

tree::TerminalNode* NaiveSqlParser::IntervalTypeContext::HOUR_SECOND() {
  return getToken(NaiveSqlParser::HOUR_SECOND, 0);
}

tree::TerminalNode* NaiveSqlParser::IntervalTypeContext::MINUTE_SECOND() {
  return getToken(NaiveSqlParser::MINUTE_SECOND, 0);
}

tree::TerminalNode* NaiveSqlParser::IntervalTypeContext::SECOND_MICROSECOND() {
  return getToken(NaiveSqlParser::SECOND_MICROSECOND, 0);
}

tree::TerminalNode* NaiveSqlParser::IntervalTypeContext::MINUTE_MICROSECOND() {
  return getToken(NaiveSqlParser::MINUTE_MICROSECOND, 0);
}

tree::TerminalNode* NaiveSqlParser::IntervalTypeContext::HOUR_MICROSECOND() {
  return getToken(NaiveSqlParser::HOUR_MICROSECOND, 0);
}

tree::TerminalNode* NaiveSqlParser::IntervalTypeContext::DAY_MICROSECOND() {
  return getToken(NaiveSqlParser::DAY_MICROSECOND, 0);
}


size_t NaiveSqlParser::IntervalTypeContext::getRuleIndex() const {
  return NaiveSqlParser::RuleIntervalType;
}

void NaiveSqlParser::IntervalTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntervalType(this);
}

void NaiveSqlParser::IntervalTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntervalType(this);
}


antlrcpp::Any NaiveSqlParser::IntervalTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitIntervalType(this);
  else
    return visitor->visitChildren(this);
}

NaiveSqlParser::IntervalTypeContext* NaiveSqlParser::intervalType() {
  IntervalTypeContext *_localctx = _tracker.createInstance<IntervalTypeContext>(_ctx, getState());
  enterRule(_localctx, 96, NaiveSqlParser::RuleIntervalType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(550);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NaiveSqlParser::QUARTER:
      case NaiveSqlParser::MONTH:
      case NaiveSqlParser::DAY:
      case NaiveSqlParser::HOUR:
      case NaiveSqlParser::MINUTE:
      case NaiveSqlParser::WEEK:
      case NaiveSqlParser::SECOND:
      case NaiveSqlParser::MICROSECOND: {
        enterOuterAlt(_localctx, 1);
        setState(537);
        intervalTypeBase();
        break;
      }

      case NaiveSqlParser::YEAR: {
        enterOuterAlt(_localctx, 2);
        setState(538);
        match(NaiveSqlParser::YEAR);
        break;
      }

      case NaiveSqlParser::YEAR_MONTH: {
        enterOuterAlt(_localctx, 3);
        setState(539);
        match(NaiveSqlParser::YEAR_MONTH);
        break;
      }

      case NaiveSqlParser::DAY_HOUR: {
        enterOuterAlt(_localctx, 4);
        setState(540);
        match(NaiveSqlParser::DAY_HOUR);
        break;
      }

      case NaiveSqlParser::DAY_MINUTE: {
        enterOuterAlt(_localctx, 5);
        setState(541);
        match(NaiveSqlParser::DAY_MINUTE);
        break;
      }

      case NaiveSqlParser::DAY_SECOND: {
        enterOuterAlt(_localctx, 6);
        setState(542);
        match(NaiveSqlParser::DAY_SECOND);
        break;
      }

      case NaiveSqlParser::HOUR_MINUTE: {
        enterOuterAlt(_localctx, 7);
        setState(543);
        match(NaiveSqlParser::HOUR_MINUTE);
        break;
      }

      case NaiveSqlParser::HOUR_SECOND: {
        enterOuterAlt(_localctx, 8);
        setState(544);
        match(NaiveSqlParser::HOUR_SECOND);
        break;
      }

      case NaiveSqlParser::MINUTE_SECOND: {
        enterOuterAlt(_localctx, 9);
        setState(545);
        match(NaiveSqlParser::MINUTE_SECOND);
        break;
      }

      case NaiveSqlParser::SECOND_MICROSECOND: {
        enterOuterAlt(_localctx, 10);
        setState(546);
        match(NaiveSqlParser::SECOND_MICROSECOND);
        break;
      }

      case NaiveSqlParser::MINUTE_MICROSECOND: {
        enterOuterAlt(_localctx, 11);
        setState(547);
        match(NaiveSqlParser::MINUTE_MICROSECOND);
        break;
      }

      case NaiveSqlParser::HOUR_MICROSECOND: {
        enterOuterAlt(_localctx, 12);
        setState(548);
        match(NaiveSqlParser::HOUR_MICROSECOND);
        break;
      }

      case NaiveSqlParser::DAY_MICROSECOND: {
        enterOuterAlt(_localctx, 13);
        setState(549);
        match(NaiveSqlParser::DAY_MICROSECOND);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntervalTypeBaseContext ------------------------------------------------------------------

NaiveSqlParser::IntervalTypeBaseContext::IntervalTypeBaseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NaiveSqlParser::IntervalTypeBaseContext::QUARTER() {
  return getToken(NaiveSqlParser::QUARTER, 0);
}

tree::TerminalNode* NaiveSqlParser::IntervalTypeBaseContext::MONTH() {
  return getToken(NaiveSqlParser::MONTH, 0);
}

tree::TerminalNode* NaiveSqlParser::IntervalTypeBaseContext::DAY() {
  return getToken(NaiveSqlParser::DAY, 0);
}

tree::TerminalNode* NaiveSqlParser::IntervalTypeBaseContext::HOUR() {
  return getToken(NaiveSqlParser::HOUR, 0);
}

tree::TerminalNode* NaiveSqlParser::IntervalTypeBaseContext::MINUTE() {
  return getToken(NaiveSqlParser::MINUTE, 0);
}

tree::TerminalNode* NaiveSqlParser::IntervalTypeBaseContext::WEEK() {
  return getToken(NaiveSqlParser::WEEK, 0);
}

tree::TerminalNode* NaiveSqlParser::IntervalTypeBaseContext::SECOND() {
  return getToken(NaiveSqlParser::SECOND, 0);
}

tree::TerminalNode* NaiveSqlParser::IntervalTypeBaseContext::MICROSECOND() {
  return getToken(NaiveSqlParser::MICROSECOND, 0);
}


size_t NaiveSqlParser::IntervalTypeBaseContext::getRuleIndex() const {
  return NaiveSqlParser::RuleIntervalTypeBase;
}

void NaiveSqlParser::IntervalTypeBaseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntervalTypeBase(this);
}

void NaiveSqlParser::IntervalTypeBaseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntervalTypeBase(this);
}


antlrcpp::Any NaiveSqlParser::IntervalTypeBaseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitIntervalTypeBase(this);
  else
    return visitor->visitChildren(this);
}

NaiveSqlParser::IntervalTypeBaseContext* NaiveSqlParser::intervalTypeBase() {
  IntervalTypeBaseContext *_localctx = _tracker.createInstance<IntervalTypeBaseContext>(_ctx, getState());
  enterRule(_localctx, 98, NaiveSqlParser::RuleIntervalTypeBase);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(552);
    _la = _input->LA(1);
    if (!(((((_la - 545) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 545)) & ((1ULL << (NaiveSqlParser::QUARTER - 545))
      | (1ULL << (NaiveSqlParser::MONTH - 545))
      | (1ULL << (NaiveSqlParser::DAY - 545))
      | (1ULL << (NaiveSqlParser::HOUR - 545))
      | (1ULL << (NaiveSqlParser::MINUTE - 545))
      | (1ULL << (NaiveSqlParser::WEEK - 545))
      | (1ULL << (NaiveSqlParser::SECOND - 545))
      | (1ULL << (NaiveSqlParser::MICROSECOND - 545)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LengthOneDimensionContext ------------------------------------------------------------------

NaiveSqlParser::LengthOneDimensionContext::LengthOneDimensionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NaiveSqlParser::DecimalLiteralContext* NaiveSqlParser::LengthOneDimensionContext::decimalLiteral() {
  return getRuleContext<NaiveSqlParser::DecimalLiteralContext>(0);
}


size_t NaiveSqlParser::LengthOneDimensionContext::getRuleIndex() const {
  return NaiveSqlParser::RuleLengthOneDimension;
}

void NaiveSqlParser::LengthOneDimensionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLengthOneDimension(this);
}

void NaiveSqlParser::LengthOneDimensionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLengthOneDimension(this);
}


antlrcpp::Any NaiveSqlParser::LengthOneDimensionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitLengthOneDimension(this);
  else
    return visitor->visitChildren(this);
}

NaiveSqlParser::LengthOneDimensionContext* NaiveSqlParser::lengthOneDimension() {
  LengthOneDimensionContext *_localctx = _tracker.createInstance<LengthOneDimensionContext>(_ctx, getState());
  enterRule(_localctx, 100, NaiveSqlParser::RuleLengthOneDimension);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(554);
    match(NaiveSqlParser::LR_BRACKET);
    setState(555);
    decimalLiteral();
    setState(556);
    match(NaiveSqlParser::RR_BRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LengthTwoDimensionContext ------------------------------------------------------------------

NaiveSqlParser::LengthTwoDimensionContext::LengthTwoDimensionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<NaiveSqlParser::DecimalLiteralContext *> NaiveSqlParser::LengthTwoDimensionContext::decimalLiteral() {
  return getRuleContexts<NaiveSqlParser::DecimalLiteralContext>();
}

NaiveSqlParser::DecimalLiteralContext* NaiveSqlParser::LengthTwoDimensionContext::decimalLiteral(size_t i) {
  return getRuleContext<NaiveSqlParser::DecimalLiteralContext>(i);
}


size_t NaiveSqlParser::LengthTwoDimensionContext::getRuleIndex() const {
  return NaiveSqlParser::RuleLengthTwoDimension;
}

void NaiveSqlParser::LengthTwoDimensionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLengthTwoDimension(this);
}

void NaiveSqlParser::LengthTwoDimensionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLengthTwoDimension(this);
}


antlrcpp::Any NaiveSqlParser::LengthTwoDimensionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitLengthTwoDimension(this);
  else
    return visitor->visitChildren(this);
}

NaiveSqlParser::LengthTwoDimensionContext* NaiveSqlParser::lengthTwoDimension() {
  LengthTwoDimensionContext *_localctx = _tracker.createInstance<LengthTwoDimensionContext>(_ctx, getState());
  enterRule(_localctx, 102, NaiveSqlParser::RuleLengthTwoDimension);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(558);
    match(NaiveSqlParser::LR_BRACKET);
    setState(559);
    decimalLiteral();
    setState(560);
    match(NaiveSqlParser::COMMA);
    setState(561);
    decimalLiteral();
    setState(562);
    match(NaiveSqlParser::RR_BRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefaultValueContext ------------------------------------------------------------------

NaiveSqlParser::DefaultValueContext::DefaultValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NaiveSqlParser::DefaultValueContext::NULL_LITERAL() {
  return getToken(NaiveSqlParser::NULL_LITERAL, 0);
}

NaiveSqlParser::ConstantContext* NaiveSqlParser::DefaultValueContext::constant() {
  return getRuleContext<NaiveSqlParser::ConstantContext>(0);
}

std::vector<NaiveSqlParser::CurrentTimestampContext *> NaiveSqlParser::DefaultValueContext::currentTimestamp() {
  return getRuleContexts<NaiveSqlParser::CurrentTimestampContext>();
}

NaiveSqlParser::CurrentTimestampContext* NaiveSqlParser::DefaultValueContext::currentTimestamp(size_t i) {
  return getRuleContext<NaiveSqlParser::CurrentTimestampContext>(i);
}

tree::TerminalNode* NaiveSqlParser::DefaultValueContext::ON() {
  return getToken(NaiveSqlParser::ON, 0);
}

tree::TerminalNode* NaiveSqlParser::DefaultValueContext::UPDATE() {
  return getToken(NaiveSqlParser::UPDATE, 0);
}


size_t NaiveSqlParser::DefaultValueContext::getRuleIndex() const {
  return NaiveSqlParser::RuleDefaultValue;
}

void NaiveSqlParser::DefaultValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefaultValue(this);
}

void NaiveSqlParser::DefaultValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefaultValue(this);
}


antlrcpp::Any NaiveSqlParser::DefaultValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitDefaultValue(this);
  else
    return visitor->visitChildren(this);
}

NaiveSqlParser::DefaultValueContext* NaiveSqlParser::defaultValue() {
  DefaultValueContext *_localctx = _tracker.createInstance<DefaultValueContext>(_ctx, getState());
  enterRule(_localctx, 104, NaiveSqlParser::RuleDefaultValue);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(572);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(564);
      match(NaiveSqlParser::NULL_LITERAL);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(565);
      constant();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(566);
      currentTimestamp();
      setState(570);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == NaiveSqlParser::ON) {
        setState(567);
        match(NaiveSqlParser::ON);
        setState(568);
        match(NaiveSqlParser::UPDATE);
        setState(569);
        currentTimestamp();
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CurrentTimestampContext ------------------------------------------------------------------

NaiveSqlParser::CurrentTimestampContext::CurrentTimestampContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NaiveSqlParser::CurrentTimestampContext::NOW() {
  return getToken(NaiveSqlParser::NOW, 0);
}

tree::TerminalNode* NaiveSqlParser::CurrentTimestampContext::CURRENT_TIMESTAMP() {
  return getToken(NaiveSqlParser::CURRENT_TIMESTAMP, 0);
}

tree::TerminalNode* NaiveSqlParser::CurrentTimestampContext::LOCALTIME() {
  return getToken(NaiveSqlParser::LOCALTIME, 0);
}

tree::TerminalNode* NaiveSqlParser::CurrentTimestampContext::LOCALTIMESTAMP() {
  return getToken(NaiveSqlParser::LOCALTIMESTAMP, 0);
}

NaiveSqlParser::DecimalLiteralContext* NaiveSqlParser::CurrentTimestampContext::decimalLiteral() {
  return getRuleContext<NaiveSqlParser::DecimalLiteralContext>(0);
}


size_t NaiveSqlParser::CurrentTimestampContext::getRuleIndex() const {
  return NaiveSqlParser::RuleCurrentTimestamp;
}

void NaiveSqlParser::CurrentTimestampContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCurrentTimestamp(this);
}

void NaiveSqlParser::CurrentTimestampContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCurrentTimestamp(this);
}


antlrcpp::Any NaiveSqlParser::CurrentTimestampContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitCurrentTimestamp(this);
  else
    return visitor->visitChildren(this);
}

NaiveSqlParser::CurrentTimestampContext* NaiveSqlParser::currentTimestamp() {
  CurrentTimestampContext *_localctx = _tracker.createInstance<CurrentTimestampContext>(_ctx, getState());
  enterRule(_localctx, 106, NaiveSqlParser::RuleCurrentTimestamp);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(588);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NaiveSqlParser::CURRENT_TIMESTAMP:
      case NaiveSqlParser::LOCALTIME:
      case NaiveSqlParser::LOCALTIMESTAMP: {
        setState(574);
        _la = _input->LA(1);
        if (!(((((_la - 528) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 528)) & ((1ULL << (NaiveSqlParser::CURRENT_TIMESTAMP - 528))
          | (1ULL << (NaiveSqlParser::LOCALTIME - 528))
          | (1ULL << (NaiveSqlParser::LOCALTIMESTAMP - 528)))) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(580);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == NaiveSqlParser::LR_BRACKET) {
          setState(575);
          match(NaiveSqlParser::LR_BRACKET);
          setState(577);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (((((_la - 584) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 584)) & ((1ULL << (NaiveSqlParser::ZERO_DECIMAL - 584))
            | (1ULL << (NaiveSqlParser::ONE_DECIMAL - 584))
            | (1ULL << (NaiveSqlParser::TWO_DECIMAL - 584))
            | (1ULL << (NaiveSqlParser::DECIMAL_LITERAL - 584)))) != 0)) {
            setState(576);
            decimalLiteral();
          }
          setState(579);
          match(NaiveSqlParser::RR_BRACKET);
        }
        break;
      }

      case NaiveSqlParser::NOW: {
        setState(582);
        match(NaiveSqlParser::NOW);
        setState(583);
        match(NaiveSqlParser::LR_BRACKET);
        setState(585);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (((((_la - 584) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 584)) & ((1ULL << (NaiveSqlParser::ZERO_DECIMAL - 584))
          | (1ULL << (NaiveSqlParser::ONE_DECIMAL - 584))
          | (1ULL << (NaiveSqlParser::TWO_DECIMAL - 584))
          | (1ULL << (NaiveSqlParser::DECIMAL_LITERAL - 584)))) != 0)) {
          setState(584);
          decimalLiteral();
        }
        setState(587);
        match(NaiveSqlParser::RR_BRACKET);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionOrDefaultContext ------------------------------------------------------------------

NaiveSqlParser::ExpressionOrDefaultContext::ExpressionOrDefaultContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NaiveSqlParser::ExpressionContext* NaiveSqlParser::ExpressionOrDefaultContext::expression() {
  return getRuleContext<NaiveSqlParser::ExpressionContext>(0);
}

tree::TerminalNode* NaiveSqlParser::ExpressionOrDefaultContext::DEFAULT() {
  return getToken(NaiveSqlParser::DEFAULT, 0);
}


size_t NaiveSqlParser::ExpressionOrDefaultContext::getRuleIndex() const {
  return NaiveSqlParser::RuleExpressionOrDefault;
}

void NaiveSqlParser::ExpressionOrDefaultContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionOrDefault(this);
}

void NaiveSqlParser::ExpressionOrDefaultContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionOrDefault(this);
}


antlrcpp::Any NaiveSqlParser::ExpressionOrDefaultContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitExpressionOrDefault(this);
  else
    return visitor->visitChildren(this);
}

NaiveSqlParser::ExpressionOrDefaultContext* NaiveSqlParser::expressionOrDefault() {
  ExpressionOrDefaultContext *_localctx = _tracker.createInstance<ExpressionOrDefaultContext>(_ctx, getState());
  enterRule(_localctx, 108, NaiveSqlParser::RuleExpressionOrDefault);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(592);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NaiveSqlParser::FALSE:
      case NaiveSqlParser::NOT:
      case NaiveSqlParser::NULL_LITERAL:
      case NaiveSqlParser::TRUE:
      case NaiveSqlParser::MINUS:
      case NaiveSqlParser::EXCLAMATION_SYMBOL:
      case NaiveSqlParser::ZERO_DECIMAL:
      case NaiveSqlParser::ONE_DECIMAL:
      case NaiveSqlParser::TWO_DECIMAL:
      case NaiveSqlParser::STRING_LITERAL:
      case NaiveSqlParser::DECIMAL_LITERAL:
      case NaiveSqlParser::HEXADECIMAL_LITERAL:
      case NaiveSqlParser::REAL_LITERAL:
      case NaiveSqlParser::NULL_SPEC_LITERAL:
      case NaiveSqlParser::BIT_STRING:
      case NaiveSqlParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(590);
        expression(0);
        break;
      }

      case NaiveSqlParser::DEFAULT: {
        enterOuterAlt(_localctx, 2);
        setState(591);
        match(NaiveSqlParser::DEFAULT);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfExistsContext ------------------------------------------------------------------

NaiveSqlParser::IfExistsContext::IfExistsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NaiveSqlParser::IfExistsContext::IF() {
  return getToken(NaiveSqlParser::IF, 0);
}

tree::TerminalNode* NaiveSqlParser::IfExistsContext::EXISTS() {
  return getToken(NaiveSqlParser::EXISTS, 0);
}


size_t NaiveSqlParser::IfExistsContext::getRuleIndex() const {
  return NaiveSqlParser::RuleIfExists;
}

void NaiveSqlParser::IfExistsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfExists(this);
}

void NaiveSqlParser::IfExistsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfExists(this);
}


antlrcpp::Any NaiveSqlParser::IfExistsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitIfExists(this);
  else
    return visitor->visitChildren(this);
}

NaiveSqlParser::IfExistsContext* NaiveSqlParser::ifExists() {
  IfExistsContext *_localctx = _tracker.createInstance<IfExistsContext>(_ctx, getState());
  enterRule(_localctx, 110, NaiveSqlParser::RuleIfExists);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(594);
    match(NaiveSqlParser::IF);
    setState(595);
    match(NaiveSqlParser::EXISTS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfNotExistsContext ------------------------------------------------------------------

NaiveSqlParser::IfNotExistsContext::IfNotExistsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NaiveSqlParser::IfNotExistsContext::IF() {
  return getToken(NaiveSqlParser::IF, 0);
}

tree::TerminalNode* NaiveSqlParser::IfNotExistsContext::NOT() {
  return getToken(NaiveSqlParser::NOT, 0);
}

tree::TerminalNode* NaiveSqlParser::IfNotExistsContext::EXISTS() {
  return getToken(NaiveSqlParser::EXISTS, 0);
}


size_t NaiveSqlParser::IfNotExistsContext::getRuleIndex() const {
  return NaiveSqlParser::RuleIfNotExists;
}

void NaiveSqlParser::IfNotExistsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfNotExists(this);
}

void NaiveSqlParser::IfNotExistsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NaiveSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfNotExists(this);
}


antlrcpp::Any NaiveSqlParser::IfNotExistsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NaiveSqlParserVisitor*>(visitor))
    return parserVisitor->visitIfNotExists(this);
  else
    return visitor->visitChildren(this);
}

NaiveSqlParser::IfNotExistsContext* NaiveSqlParser::ifNotExists() {
  IfNotExistsContext *_localctx = _tracker.createInstance<IfNotExistsContext>(_ctx, getState());
  enterRule(_localctx, 112, NaiveSqlParser::RuleIfNotExists);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(597);
    match(NaiveSqlParser::IF);
    setState(598);
    match(NaiveSqlParser::NOT);
    setState(599);
    match(NaiveSqlParser::EXISTS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool NaiveSqlParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 26: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);
    case 27: return predicateSempred(dynamic_cast<PredicateContext *>(context), predicateIndex);
    case 28: return expressionAtomSempred(dynamic_cast<ExpressionAtomContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool NaiveSqlParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool NaiveSqlParser::predicateSempred(PredicateContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 5);
    case 2: return precpred(_ctx, 4);
    case 3: return precpred(_ctx, 2);
    case 4: return precpred(_ctx, 6);
    case 5: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

bool NaiveSqlParser::expressionAtomSempred(ExpressionAtomContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 6: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> NaiveSqlParser::_decisionToDFA;
atn::PredictionContextCache NaiveSqlParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN NaiveSqlParser::_atn;
std::vector<uint16_t> NaiveSqlParser::_serializedATN;

std::vector<std::string> NaiveSqlParser::_ruleNames = {
  "root", "sqlStatements", "sqlStatement", "emptyStatement", "ddlStatement", 
  "createTable", "createIndex", "index_name", "createDefinitions", "createDefinition", 
  "columnDefinition", "columnConstraint", "dropTable", "dmlStatement", "selectStatement", 
  "updateStatement", "selectElements", "selectElement", "deleteStatement", 
  "insertStatement", "updatedElement", "fromClause", "groupByItem", "orderByClause", 
  "orderByExpression", "tableSources", "expression", "predicate", "expressionAtom", 
  "comparisonOperator", "logicalOperator", "mathOperator", "decimalLiteral", 
  "stringLiteral", "booleanLiteral", "hexadecimalLiteral", "nullNotnull", 
  "constant", "uid", "fullId", "tableName", "uidList", "tables", "expressions", 
  "constants", "simpleStrings", "userVariables", "dataType", "intervalType", 
  "intervalTypeBase", "lengthOneDimension", "lengthTwoDimension", "defaultValue", 
  "currentTimestamp", "expressionOrDefault", "ifExists", "ifNotExists"
};

std::vector<std::string> NaiveSqlParser::_literalNames = {
  "", "", "", "", "", "'ADD'", "'ALL'", "'ALTER'", "'ANALYZE'", "'AND'", 
  "'AS'", "'ASC'", "'BEFORE'", "'BETWEEN'", "'BOTH'", "'BY'", "'CALL'", 
  "'CASCADE'", "'CASE'", "'CAST'", "'CHANGE'", "'CHARACTER'", "'CHECK'", 
  "'COLLATE'", "'COLUMN'", "'CONDITION'", "'CONSTRAINT'", "'CONTINUE'", 
  "'CONVERT'", "'CREATE'", "'CROSS'", "'CURRENT_USER'", "'CURSOR'", "'DATABASE'", 
  "'DATABASES'", "'DECLARE'", "'DEFAULT'", "'DELAYED'", "'DELETE'", "'DESC'", 
  "'DESCRIBE'", "'DETERMINISTIC'", "'DISTINCT'", "'DISTINCTROW'", "'DROP'", 
  "'EACH'", "'ELSE'", "'ELSEIF'", "'ENCLOSED'", "'ESCAPED'", "'EXISTS'", 
  "'EXIT'", "'EXPLAIN'", "'FALSE'", "'FETCH'", "'FOR'", "'FORCE'", "'FOREIGN'", 
  "'FROM'", "'FULLTEXT'", "'GRANT'", "'GROUP'", "'HAVING'", "'HIGH_PRIORITY'", 
  "'IF'", "'IGNORE'", "'IN'", "'INDEX'", "'INFILE'", "'INNER'", "'INOUT'", 
  "'INSERT'", "'INTERVAL'", "'INTO'", "'IS'", "'ITERATE'", "'JOIN'", "'KEY'", 
  "'KEYS'", "'KILL'", "'LEADING'", "'LEAVE'", "'LEFT'", "'LIKE'", "'LIMIT'", 
  "'LINEAR'", "'LINES'", "'LOAD'", "'LOCK'", "'LOOP'", "'LOW_PRIORITY'", 
  "'MASTER_BIND'", "'MASTER_SSL_VERIFY_SERVER_CERT'", "'MATCH'", "'MAXVALUE'", 
  "'MODIFIES'", "'NATURAL'", "'NOT'", "'NO_WRITE_TO_BINLOG'", "'NULL'", 
  "'ON'", "'OPTIMIZE'", "'OPTION'", "'OPTIONALLY'", "'OR'", "'ORDER'", "'OUT'", 
  "'OUTER'", "'OUTFILE'", "'PARTITION'", "'PRIMARY'", "'PROCEDURE'", "'PURGE'", 
  "'RANGE'", "'READ'", "'READS'", "'REFERENCES'", "'REGEXP'", "'RELEASE'", 
  "'RENAME'", "'REPEAT'", "'REPLACE'", "'REQUIRE'", "'RESTRICT'", "'RETURN'", 
  "'REVOKE'", "'RIGHT'", "'RLIKE'", "'SCHEMA'", "'SCHEMAS'", "'SELECT'", 
  "'SET'", "'SEPARATOR'", "'SHOW'", "'SPATIAL'", "'SQL'", "'SQLEXCEPTION'", 
  "'SQLSTATE'", "'SQLWARNING'", "'SQL_BIG_RESULT'", "'SQL_CALC_FOUND_ROWS'", 
  "'SQL_SMALL_RESULT'", "'SSL'", "'STARTING'", "'STRAIGHT_JOIN'", "'TABLE'", 
  "'TERMINATED'", "'THEN'", "'TO'", "'TRAILING'", "'TRIGGER'", "'TRUE'", 
  "'UNDO'", "'UNION'", "'UNIQUE'", "'UNLOCK'", "'UNSIGNED'", "'UPDATE'", 
  "'USAGE'", "'USE'", "'USING'", "'VALUES'", "'WHEN'", "'WHERE'", "'WHILE'", 
  "'WITH'", "'WRITE'", "'XOR'", "'ZEROFILL'", "'AUTO_INCREMENT'", "'ACCOUNT'", 
  "'ACTION'", "'AFTER'", "'AGGREGATE'", "'ALGORITHM'", "'ANY'", "'AT'", 
  "'AUTHORS'", "'AUTOCOMMIT'", "'AUTOEXTEND_SIZE'", "'AVG_ROW_LENGTH'", 
  "'BEGIN'", "'BINLOG'", "'BIT'", "'BLOCK'", "'BOOL'", "'BOOLEAN'", "'BTREE'", 
  "'CACHE'", "'CASCADED'", "'CHAIN'", "'CHANGED'", "'CHANNEL'", "'CHECKSUM'", 
  "'CIPHER'", "'CLIENT'", "'CLOSE'", "'COALESCE'", "'CODE'", "'COLUMNS'", 
  "'COLUMN_FORMAT'", "'COMMENT'", "'COMMIT'", "'COMPACT'", "'COMPLETION'", 
  "'COMPRESSED'", "'COMPRESSION'", "'CONCURRENT'", "'CONNECTION'", "'CONSISTENT'", 
  "'CONTAINS'", "'CONTEXT'", "'CONTRIBUTORS'", "'COPY'", "'CPU'", "'DATA'", 
  "'DATAFILE'", "'DEALLOCATE'", "'DEFAULT_AUTH'", "'DEFINER'", "'DELAY_KEY_WRITE'", 
  "'DES_KEY_FILE'", "'DIRECTORY'", "'DISABLE'", "'DISCARD'", "'DISK'", "'DO'", 
  "'DUMPFILE'", "'DUPLICATE'", "'DYNAMIC'", "'ENABLE'", "'ENCRYPTION'", 
  "'END'", "'ENDS'", "'ENGINE'", "'ENGINES'", "'ERROR'", "'ERRORS'", "'ESCAPE'", 
  "'EVEN'", "'EVENT'", "'EVENTS'", "'EVERY'", "'EXCHANGE'", "'EXCLUSIVE'", 
  "'EXPIRE'", "'EXPORT'", "'EXTENDED'", "'EXTENT_SIZE'", "'FAST'", "'FAULTS'", 
  "'FIELDS'", "'FILE_BLOCK_SIZE'", "'FILTER'", "'FIRST'", "'FIXED'", "'FLUSH'", 
  "'FOLLOWS'", "'FOUND'", "'FULL'", "'FUNCTION'", "'GENERAL'", "'GLOBAL'", 
  "'GRANTS'", "'GROUP_REPLICATION'", "'HANDLER'", "'HASH'", "'HELP'", "'HOST'", 
  "'HOSTS'", "'IDENTIFIED'", "'IGNORE_SERVER_IDS'", "'IMPORT'", "'INDEXES'", 
  "'INITIAL_SIZE'", "'INPLACE'", "'INSERT_METHOD'", "'INSTALL'", "'INSTANCE'", 
  "'INVOKER'", "'IO'", "'IO_THREAD'", "'IPC'", "'ISOLATION'", "'ISSUER'", 
  "'JSON'", "'KEY_BLOCK_SIZE'", "'LANGUAGE'", "'LAST'", "'LEAVES'", "'LESS'", 
  "'LEVEL'", "'LIST'", "'LOCAL'", "'LOGFILE'", "'LOGS'", "'MASTER'", "'MASTER_AUTO_POSITION'", 
  "'MASTER_CONNECT_RETRY'", "'MASTER_DELAY'", "'MASTER_HEARTBEAT_PERIOD'", 
  "'MASTER_HOST'", "'MASTER_LOG_FILE'", "'MASTER_LOG_POS'", "'MASTER_PASSWORD'", 
  "'MASTER_PORT'", "'MASTER_RETRY_COUNT'", "'MASTER_SSL'", "'MASTER_SSL_CA'", 
  "'MASTER_SSL_CAPATH'", "'MASTER_SSL_CERT'", "'MASTER_SSL_CIPHER'", "'MASTER_SSL_CRL'", 
  "'MASTER_SSL_CRLPATH'", "'MASTER_SSL_KEY'", "'MASTER_TLS_VERSION'", "'MASTER_USER'", 
  "'MAX_CONNECTIONS_PER_HOUR'", "'MAX_QUERIES_PER_HOUR'", "'MAX_ROWS'", 
  "'MAX_SIZE'", "'MAX_UPDATES_PER_HOUR'", "'MAX_USER_CONNECTIONS'", "'MEDIUM'", 
  "'MERGE'", "'MID'", "'MIGRATE'", "'MIN_ROWS'", "'MODE'", "'MODIFY'", "'MUTEX'", 
  "'MYSQL'", "'NAME'", "'NAMES'", "'NCHAR'", "'NEVER'", "'NEXT'", "'NO'", 
  "'NODEGROUP'", "'NONE'", "'OFFLINE'", "'OFFSET'", "'OJ'", "'OLD_PASSWORD'", 
  "'ONE'", "'ONLINE'", "'ONLY'", "'OPEN'", "'OPTIMIZER_COSTS'", "'OPTIONS'", 
  "'OWNER'", "'PACK_KEYS'", "'PAGE'", "'PARSER'", "'PARTIAL'", "'PARTITIONING'", 
  "'PARTITIONS'", "'PASSWORD'", "'PHASE'", "'PLUGIN'", "'PLUGIN_DIR'", "'PLUGINS'", 
  "'PORT'", "'PRECEDES'", "'PREPARE'", "'PRESERVE'", "'PREV'", "'PROCESSLIST'", 
  "'PROFILE'", "'PROFILES'", "'PROXY'", "'QUERY'", "'QUICK'", "'REBUILD'", 
  "'RECOVER'", "'REDO_BUFFER_SIZE'", "'REDUNDANT'", "'RELAY'", "'RELAY_LOG_FILE'", 
  "'RELAY_LOG_POS'", "'RELAYLOG'", "'REMOVE'", "'REORGANIZE'", "'REPAIR'", 
  "'REPLICATE_DO_DB'", "'REPLICATE_DO_TABLE'", "'REPLICATE_IGNORE_DB'", 
  "'REPLICATE_IGNORE_TABLE'", "'REPLICATE_REWRITE_DB'", "'REPLICATE_WILD_DO_TABLE'", 
  "'REPLICATE_WILD_IGNORE_TABLE'", "'REPLICATION'", "'RESET'", "'RESUME'", 
  "'RETURNS'", "'ROLLBACK'", "'ROLLUP'", "'ROTATE'", "'ROW'", "'ROWS'", 
  "'ROW_FORMAT'", "'SAVEPOINT'", "'SCHEDULE'", "'SECURITY'", "'SERVER'", 
  "'SESSION'", "'SHARE'", "'SHARED'", "'SIGNED'", "'SIMPLE'", "'SLAVE'", 
  "'SLOW'", "'SNAPSHOT'", "'SOCKET'", "'SOME'", "'SONAME'", "'SOUNDS'", 
  "'SOURCE'", "'SQL_AFTER_GTIDS'", "'SQL_AFTER_MTS_GAPS'", "'SQL_BEFORE_GTIDS'", 
  "'SQL_BUFFER_RESULT'", "'SQL_CACHE'", "'SQL_NO_CACHE'", "'SQL_THREAD'", 
  "'START'", "'STARTS'", "'STATS_AUTO_RECALC'", "'STATS_PERSISTENT'", "'STATS_SAMPLE_PAGES'", 
  "'STATUS'", "'STOP'", "'STORAGE'", "'STRING'", "'SUBJECT'", "'SUBPARTITION'", 
  "'SUBPARTITIONS'", "'SUSPEND'", "'SWAPS'", "'SWITCHES'", "'TABLESPACE'", 
  "'TEMPORARY'", "'TEMPTABLE'", "'THAN'", "'TRADITIONAL'", "'TRANSACTION'", 
  "'TRIGGERS'", "'TRUNCATE'", "'UNDEFINED'", "'UNDOFILE'", "'UNDO_BUFFER_SIZE'", 
  "'UNINSTALL'", "'UNKNOWN'", "'UNTIL'", "'UPGRADE'", "'USER'", "'USE_FRM'", 
  "'USER_RESOURCES'", "'VALIDATION'", "'VALUE'", "'VARIABLES'", "'VIEW'", 
  "'WAIT'", "'WARNINGS'", "'WITHOUT'", "'WORK'", "'WRAPPER'", "'X509'", 
  "'XA'", "'XML'", "'TINYINT'", "'SMALLINT'", "'MEDIUMINT'", "'INT'", "'INTEGER'", 
  "'BIGINT'", "'REAL'", "'DOUBLE'", "'FLOAT'", "'DECIMAL'", "'NUMERIC'", 
  "'DATE'", "'TIME'", "'TIMESTAMP'", "'DATETIME'", "'YEAR'", "'CHAR'", "'VARCHAR'", 
  "'BINARY'", "'VARBINARY'", "'TINYBLOB'", "'BLOB'", "'MEDIUMBLOB'", "'LONGBLOB'", 
  "'TINYTEXT'", "'TEXT'", "'MEDIUMTEXT'", "'LONGTEXT'", "'ENUM'", "'YEAR_MONTH'", 
  "'DAY_HOUR'", "'DAY_MINUTE'", "'DAY_SECOND'", "'HOUR_MINUTE'", "'HOUR_SECOND'", 
  "'MINUTE_SECOND'", "'SECOND_MICROSECOND'", "'MINUTE_MICROSECOND'", "'HOUR_MICROSECOND'", 
  "'DAY_MICROSECOND'", "'AVG'", "'BIT_AND'", "'BIT_OR'", "'BIT_XOR'", "'COUNT'", 
  "'GROUP_CONCAT'", "'MAX'", "'MIN'", "'STD'", "'STDDEV'", "'STDDEV_POP'", 
  "'STDDEV_SAMP'", "'SUM'", "'VAR_POP'", "'VAR_SAMP'", "'VARIANCE'", "'CURRENT_DATE'", 
  "'CURRENT_TIME'", "'CURRENT_TIMESTAMP'", "'LOCALTIME'", "'CURDATE'", "'CURTIME'", 
  "'DATE_ADD'", "'DATE_SUB'", "'EXTRACT'", "'LOCALTIMESTAMP'", "'NOW'", 
  "'POSITION'", "'SUBSTR'", "'SUBSTRING'", "'SYSDATE'", "'TRIM'", "'UTC_DATE'", 
  "'UTC_TIME'", "'UTC_TIMESTAMP'", "'QUARTER'", "'MONTH'", "'DAY'", "'HOUR'", 
  "'MINUTE'", "'WEEK'", "'SECOND'", "'MICROSECOND'", "':='", "'+='", "'-='", 
  "'*='", "'/='", "'%='", "'&='", "'^='", "'|='", "'*'", "'/'", "'%'", "'+'", 
  "'--'", "'-'", "'DIV'", "'MOD'", "'='", "'>'", "'<'", "'!'", "'~'", "'|'", 
  "'&'", "'^'", "'.'", "'('", "')'", "','", "';'", "'@'", "'0'", "'1'", 
  "'2'", "'''", "'\"'", "'`'", "':'"
};

std::vector<std::string> NaiveSqlParser::_symbolicNames = {
  "", "SPACE", "SPEC_MYSQL_COMMENT", "COMMENT_INPUT", "LINE_COMMENT", "ADD", 
  "ALL", "ALTER", "ANALYZE", "AND", "AS", "ASC", "BEFORE", "BETWEEN", "BOTH", 
  "BY", "CALL", "CASCADE", "CASE", "CAST", "CHANGE", "CHARACTER", "CHECK", 
  "COLLATE", "COLUMN", "CONDITION", "CONSTRAINT", "CONTINUE", "CONVERT", 
  "CREATE", "CROSS", "CURRENT_USER", "CURSOR", "DATABASE", "DATABASES", 
  "DECLARE", "DEFAULT", "DELAYED", "DELETE", "DESC", "DESCRIBE", "DETERMINISTIC", 
  "DISTINCT", "DISTINCTROW", "DROP", "EACH", "ELSE", "ELSEIF", "ENCLOSED", 
  "ESCAPED", "EXISTS", "EXIT", "EXPLAIN", "FALSE", "FETCH", "FOR", "FORCE", 
  "FOREIGN", "FROM", "FULLTEXT", "GRANT", "GROUP", "HAVING", "HIGH_PRIORITY", 
  "IF", "IGNORE", "IN", "INDEX", "INFILE", "INNER", "INOUT", "INSERT", "INTERVAL", 
  "INTO", "IS", "ITERATE", "JOIN", "KEY", "KEYS", "KILL", "LEADING", "LEAVE", 
  "LEFT", "LIKE", "LIMIT", "LINEAR", "LINES", "LOAD", "LOCK", "LOOP", "LOW_PRIORITY", 
  "MASTER_BIND", "MASTER_SSL_VERIFY_SERVER_CERT", "MATCH", "MAXVALUE", "MODIFIES", 
  "NATURAL", "NOT", "NO_WRITE_TO_BINLOG", "NULL_LITERAL", "ON", "OPTIMIZE", 
  "OPTION", "OPTIONALLY", "OR", "ORDER", "OUT", "OUTER", "OUTFILE", "PARTITION", 
  "PRIMARY", "PROCEDURE", "PURGE", "RANGE", "READ", "READS", "REFERENCES", 
  "REGEXP", "RELEASE", "RENAME", "REPEAT", "REPLACE", "REQUIRE", "RESTRICT", 
  "RETURN", "REVOKE", "RIGHT", "RLIKE", "SCHEMA", "SCHEMAS", "SELECT", "SET", 
  "SEPARATOR", "SHOW", "SPATIAL", "SQL", "SQLEXCEPTION", "SQLSTATE", "SQLWARNING", 
  "SQL_BIG_RESULT", "SQL_CALC_FOUND_ROWS", "SQL_SMALL_RESULT", "SSL", "STARTING", 
  "STRAIGHT_JOIN", "TABLE", "TERMINATED", "THEN", "TO", "TRAILING", "TRIGGER", 
  "TRUE", "UNDO", "UNION", "UNIQUE", "UNLOCK", "UNSIGNED", "UPDATE", "USAGE", 
  "USE", "USING", "VALUES", "WHEN", "WHERE", "WHILE", "WITH", "WRITE", "XOR", 
  "ZEROFILL", "AUTO_INCREMENT", "ACCOUNT", "ACTION", "AFTER", "AGGREGATE", 
  "ALGORITHM", "ANY", "AT", "AUTHORS", "AUTOCOMMIT", "AUTOEXTEND_SIZE", 
  "AVG_ROW_LENGTH", "BEGIN", "BINLOG", "BIT", "BLOCK", "BOOL", "BOOLEAN", 
  "BTREE", "CACHE", "CASCADED", "CHAIN", "CHANGED", "CHANNEL", "CHECKSUM", 
  "CIPHER", "CLIENT", "CLOSE", "COALESCE", "CODE", "COLUMNS", "COLUMN_FORMAT", 
  "COMMENT", "COMMIT", "COMPACT", "COMPLETION", "COMPRESSED", "COMPRESSION", 
  "CONCURRENT", "CONNECTION", "CONSISTENT", "CONTAINS", "CONTEXT", "CONTRIBUTORS", 
  "COPY", "CPU", "DATA", "DATAFILE", "DEALLOCATE", "DEFAULT_AUTH", "DEFINER", 
  "DELAY_KEY_WRITE", "DES_KEY_FILE", "DIRECTORY", "DISABLE", "DISCARD", 
  "DISK", "DO", "DUMPFILE", "DUPLICATE", "DYNAMIC", "ENABLE", "ENCRYPTION", 
  "END", "ENDS", "ENGINE", "ENGINES", "ERROR", "ERRORS", "ESCAPE", "EVEN", 
  "EVENT", "EVENTS", "EVERY", "EXCHANGE", "EXCLUSIVE", "EXPIRE", "EXPORT", 
  "EXTENDED", "EXTENT_SIZE", "FAST", "FAULTS", "FIELDS", "FILE_BLOCK_SIZE", 
  "FILTER", "FIRST", "FIXED", "FLUSH", "FOLLOWS", "FOUND", "FULL", "FUNCTION", 
  "GENERAL", "GLOBAL", "GRANTS", "GROUP_REPLICATION", "HANDLER", "HASH", 
  "HELP", "HOST", "HOSTS", "IDENTIFIED", "IGNORE_SERVER_IDS", "IMPORT", 
  "INDEXES", "INITIAL_SIZE", "INPLACE", "INSERT_METHOD", "INSTALL", "INSTANCE", 
  "INVOKER", "IO", "IO_THREAD", "IPC", "ISOLATION", "ISSUER", "JSON", "KEY_BLOCK_SIZE", 
  "LANGUAGE", "LAST", "LEAVES", "LESS", "LEVEL", "LIST", "LOCAL", "LOGFILE", 
  "LOGS", "MASTER", "MASTER_AUTO_POSITION", "MASTER_CONNECT_RETRY", "MASTER_DELAY", 
  "MASTER_HEARTBEAT_PERIOD", "MASTER_HOST", "MASTER_LOG_FILE", "MASTER_LOG_POS", 
  "MASTER_PASSWORD", "MASTER_PORT", "MASTER_RETRY_COUNT", "MASTER_SSL", 
  "MASTER_SSL_CA", "MASTER_SSL_CAPATH", "MASTER_SSL_CERT", "MASTER_SSL_CIPHER", 
  "MASTER_SSL_CRL", "MASTER_SSL_CRLPATH", "MASTER_SSL_KEY", "MASTER_TLS_VERSION", 
  "MASTER_USER", "MAX_CONNECTIONS_PER_HOUR", "MAX_QUERIES_PER_HOUR", "MAX_ROWS", 
  "MAX_SIZE", "MAX_UPDATES_PER_HOUR", "MAX_USER_CONNECTIONS", "MEDIUM", 
  "MERGE", "MID", "MIGRATE", "MIN_ROWS", "MODE", "MODIFY", "MUTEX", "MYSQL", 
  "NAME", "NAMES", "NCHAR", "NEVER", "NEXT", "NO", "NODEGROUP", "NONE", 
  "OFFLINE", "OFFSET", "OJ", "OLD_PASSWORD", "ONE", "ONLINE", "ONLY", "OPEN", 
  "OPTIMIZER_COSTS", "OPTIONS", "OWNER", "PACK_KEYS", "PAGE", "PARSER", 
  "PARTIAL", "PARTITIONING", "PARTITIONS", "PASSWORD", "PHASE", "PLUGIN", 
  "PLUGIN_DIR", "PLUGINS", "PORT", "PRECEDES", "PREPARE", "PRESERVE", "PREV", 
  "PROCESSLIST", "PROFILE", "PROFILES", "PROXY", "QUERY", "QUICK", "REBUILD", 
  "RECOVER", "REDO_BUFFER_SIZE", "REDUNDANT", "RELAY", "RELAY_LOG_FILE", 
  "RELAY_LOG_POS", "RELAYLOG", "REMOVE", "REORGANIZE", "REPAIR", "REPLICATE_DO_DB", 
  "REPLICATE_DO_TABLE", "REPLICATE_IGNORE_DB", "REPLICATE_IGNORE_TABLE", 
  "REPLICATE_REWRITE_DB", "REPLICATE_WILD_DO_TABLE", "REPLICATE_WILD_IGNORE_TABLE", 
  "REPLICATION", "RESET", "RESUME", "RETURNS", "ROLLBACK", "ROLLUP", "ROTATE", 
  "ROW", "ROWS", "ROW_FORMAT", "SAVEPOINT", "SCHEDULE", "SECURITY", "SERVER", 
  "SESSION", "SHARE", "SHARED", "SIGNED", "SIMPLE", "SLAVE", "SLOW", "SNAPSHOT", 
  "SOCKET", "SOME", "SONAME", "SOUNDS", "SOURCE", "SQL_AFTER_GTIDS", "SQL_AFTER_MTS_GAPS", 
  "SQL_BEFORE_GTIDS", "SQL_BUFFER_RESULT", "SQL_CACHE", "SQL_NO_CACHE", 
  "SQL_THREAD", "START", "STARTS", "STATS_AUTO_RECALC", "STATS_PERSISTENT", 
  "STATS_SAMPLE_PAGES", "STATUS", "STOP", "STORAGE", "STRING", "SUBJECT", 
  "SUBPARTITION", "SUBPARTITIONS", "SUSPEND", "SWAPS", "SWITCHES", "TABLESPACE", 
  "TEMPORARY", "TEMPTABLE", "THAN", "TRADITIONAL", "TRANSACTION", "TRIGGERS", 
  "TRUNCATE", "UNDEFINED", "UNDOFILE", "UNDO_BUFFER_SIZE", "UNINSTALL", 
  "UNKNOWN", "UNTIL", "UPGRADE", "USER", "USE_FRM", "USER_RESOURCES", "VALIDATION", 
  "VALUE", "VARIABLES", "VIEW", "WAIT", "WARNINGS", "WITHOUT", "WORK", "WRAPPER", 
  "X509", "XA", "XML", "TINYINT", "SMALLINT", "MEDIUMINT", "INT", "INTEGER", 
  "BIGINT", "REAL", "DOUBLE", "FLOAT", "DECIMAL", "NUMERIC", "DATE", "TIME", 
  "TIMESTAMP", "DATETIME", "YEAR", "CHAR", "VARCHAR", "BINARY", "VARBINARY", 
  "TINYBLOB", "BLOB", "MEDIUMBLOB", "LONGBLOB", "TINYTEXT", "TEXT", "MEDIUMTEXT", 
  "LONGTEXT", "ENUM", "YEAR_MONTH", "DAY_HOUR", "DAY_MINUTE", "DAY_SECOND", 
  "HOUR_MINUTE", "HOUR_SECOND", "MINUTE_SECOND", "SECOND_MICROSECOND", "MINUTE_MICROSECOND", 
  "HOUR_MICROSECOND", "DAY_MICROSECOND", "AVG", "BIT_AND", "BIT_OR", "BIT_XOR", 
  "COUNT", "GROUP_CONCAT", "MAX", "MIN", "STD", "STDDEV", "STDDEV_POP", 
  "STDDEV_SAMP", "SUM", "VAR_POP", "VAR_SAMP", "VARIANCE", "CURRENT_DATE", 
  "CURRENT_TIME", "CURRENT_TIMESTAMP", "LOCALTIME", "CURDATE", "CURTIME", 
  "DATE_ADD", "DATE_SUB", "EXTRACT", "LOCALTIMESTAMP", "NOW", "POSITION", 
  "SUBSTR", "SUBSTRING", "SYSDATE", "TRIM", "UTC_DATE", "UTC_TIME", "UTC_TIMESTAMP", 
  "QUARTER", "MONTH", "DAY", "HOUR", "MINUTE", "WEEK", "SECOND", "MICROSECOND", 
  "VAR_ASSIGN", "PLUS_ASSIGN", "MINUS_ASSIGN", "MULT_ASSIGN", "DIV_ASSIGN", 
  "MOD_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "STAR", "DIVIDE", 
  "MODULE", "PLUS", "MINUSMINUS", "MINUS", "DIV", "MOD", "EQUAL_SYMBOL", 
  "GREATER_SYMBOL", "LESS_SYMBOL", "EXCLAMATION_SYMBOL", "BIT_NOT_OP", "BIT_OR_OP", 
  "BIT_AND_OP", "BIT_XOR_OP", "DOT", "LR_BRACKET", "RR_BRACKET", "COMMA", 
  "SEMI", "AT_SIGN", "ZERO_DECIMAL", "ONE_DECIMAL", "TWO_DECIMAL", "SINGLE_QUOTE_SYMB", 
  "DOUBLE_QUOTE_SYMB", "REVERSE_QUOTE_SYMB", "COLON_SYMB", "START_NATIONAL_STRING_LITERAL", 
  "STRING_LITERAL", "DECIMAL_LITERAL", "HEXADECIMAL_LITERAL", "REAL_LITERAL", 
  "NULL_SPEC_LITERAL", "BIT_STRING", "ID", "LOCAL_ID", "ERROR_RECONGNIGION"
};

dfa::Vocabulary NaiveSqlParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> NaiveSqlParser::_tokenNames;

NaiveSqlParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x25a, 0x25c, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 
    0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
    0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 0x9, 
    0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 0x9, 0x35, 
    0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 0x9, 0x38, 0x4, 
    0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x3, 0x2, 0x5, 0x2, 0x76, 0xa, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 
    0x3, 0x7e, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x81, 0xb, 0x3, 0x3, 0x4, 0x3, 
    0x4, 0x5, 0x4, 0x85, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x5, 0x6, 0x8c, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 
    0x7, 0x91, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 
    0x5, 0x8, 0x98, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0xa8, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 
    0xab, 0xb, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xc, 0x3, 0xc, 0x7, 0xc, 0xb4, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0xb7, 0xb, 
    0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0xbe, 
    0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0xc3, 0xa, 0xd, 0x5, 
    0xd, 0xc5, 0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0xca, 0xa, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0xce, 0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0xd4, 0xa, 0xf, 0x3, 0x10, 0x3, 0x10, 
    0x5, 0x10, 0xd8, 0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0xdc, 0xa, 
    0x10, 0x3, 0x10, 0x5, 0x10, 0xdf, 0xa, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 0xe7, 0xa, 0x11, 0xc, 
    0x11, 0xe, 0x11, 0xea, 0xb, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0xee, 
    0xa, 0x11, 0x3, 0x11, 0x5, 0x11, 0xf1, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 
    0x5, 0x12, 0xf5, 0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 0x7, 0x12, 0xf9, 0xa, 
    0x12, 0xc, 0x12, 0xe, 0x12, 0xfc, 0xb, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 
    0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x104, 0xa, 0x13, 
    0x3, 0x13, 0x5, 0x13, 0x107, 0xa, 0x13, 0x5, 0x13, 0x109, 0xa, 0x13, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x110, 
    0xa, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 0x121, 0xa, 0x16, 0x3, 0x17, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0x127, 0xa, 0x17, 0x3, 0x18, 
    0x3, 0x18, 0x5, 0x18, 0x12b, 0xa, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x7, 0x19, 0x132, 0xa, 0x19, 0xc, 0x19, 0xe, 0x19, 
    0x135, 0xb, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x139, 0xa, 0x1a, 
    0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x7, 0x1b, 0x13e, 0xa, 0x1b, 0xc, 0x1b, 
    0xe, 0x1b, 0x141, 0xb, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 
    0x5, 0x1c, 0x147, 0xa, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 
    0x7, 0x1c, 0x14d, 0xa, 0x1c, 0xc, 0x1c, 0xe, 0x1c, 0x150, 0xb, 0x1c, 
    0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 
    0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 0x15b, 0xa, 0x1d, 0x3, 0x1d, 
    0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x5, 
    0x1d, 0x164, 0xa, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 
    0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 0x16d, 0xa, 0x1d, 0x3, 0x1d, 
    0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 0x173, 0xa, 0x1d, 0x7, 0x1d, 
    0x175, 0xa, 0x1d, 0xc, 0x1d, 0xe, 0x1d, 0x178, 0xb, 0x1d, 0x3, 0x1e, 
    0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x17d, 0xa, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 
    0x3, 0x1e, 0x3, 0x1e, 0x7, 0x1e, 0x183, 0xa, 0x1e, 0xc, 0x1e, 0xe, 0x1e, 
    0x186, 0xb, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
    0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 
    0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x196, 0xa, 0x1f, 0x3, 0x20, 
    0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x5, 
    0x20, 0x19f, 0xa, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 0x3, 0x22, 
    0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 
    0x26, 0x5, 0x26, 0x1ac, 0xa, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x27, 
    0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 
    0x27, 0x3, 0x27, 0x5, 0x27, 0x1b9, 0xa, 0x27, 0x3, 0x27, 0x5, 0x27, 
    0x1bc, 0xa, 0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 
    0x5, 0x29, 0x1c3, 0xa, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 
    0x1c8, 0xa, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x7, 0x2b, 0x1cd, 
    0xa, 0x2b, 0xc, 0x2b, 0xe, 0x2b, 0x1d0, 0xb, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 
    0x3, 0x2c, 0x7, 0x2c, 0x1d5, 0xa, 0x2c, 0xc, 0x2c, 0xe, 0x2c, 0x1d8, 
    0xb, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x7, 0x2d, 0x1dd, 0xa, 0x2d, 
    0xc, 0x2d, 0xe, 0x2d, 0x1e0, 0xb, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 
    0x7, 0x2e, 0x1e5, 0xa, 0x2e, 0xc, 0x2e, 0xe, 0x2e, 0x1e8, 0xb, 0x2e, 
    0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x7, 0x2f, 0x1ed, 0xa, 0x2f, 0xc, 0x2f, 
    0xe, 0x2f, 0x1f0, 0xb, 0x2f, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x7, 0x30, 
    0x1f5, 0xa, 0x30, 0xc, 0x30, 0xe, 0x30, 0x1f8, 0xb, 0x30, 0x3, 0x31, 
    0x3, 0x31, 0x5, 0x31, 0x1fc, 0xa, 0x31, 0x3, 0x31, 0x5, 0x31, 0x1ff, 
    0xa, 0x31, 0x3, 0x31, 0x3, 0x31, 0x5, 0x31, 0x203, 0xa, 0x31, 0x3, 0x31, 
    0x5, 0x31, 0x206, 0xa, 0x31, 0x3, 0x31, 0x5, 0x31, 0x209, 0xa, 0x31, 
    0x3, 0x31, 0x3, 0x31, 0x5, 0x31, 0x20d, 0xa, 0x31, 0x3, 0x31, 0x5, 0x31, 
    0x210, 0xa, 0x31, 0x3, 0x31, 0x5, 0x31, 0x213, 0xa, 0x31, 0x3, 0x31, 
    0x3, 0x31, 0x3, 0x31, 0x5, 0x31, 0x218, 0xa, 0x31, 0x5, 0x31, 0x21a, 
    0xa, 0x31, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 
    0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 
    0x3, 0x32, 0x5, 0x32, 0x229, 0xa, 0x32, 0x3, 0x33, 0x3, 0x33, 0x3, 0x34, 
    0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
    0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 
    0x3, 0x36, 0x3, 0x36, 0x5, 0x36, 0x23d, 0xa, 0x36, 0x5, 0x36, 0x23f, 
    0xa, 0x36, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x5, 0x37, 0x244, 0xa, 0x37, 
    0x3, 0x37, 0x5, 0x37, 0x247, 0xa, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 
    0x5, 0x37, 0x24c, 0xa, 0x37, 0x3, 0x37, 0x5, 0x37, 0x24f, 0xa, 0x37, 
    0x3, 0x38, 0x3, 0x38, 0x5, 0x38, 0x253, 0xa, 0x38, 0x3, 0x39, 0x3, 0x39, 
    0x3, 0x39, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x2, 
    0x5, 0x36, 0x38, 0x3a, 0x3b, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 
    0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 
    0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 
    0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 
    0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 0x6e, 0x70, 
    0x72, 0x2, 0x11, 0x4, 0x2, 0x13, 0x13, 0x7d, 0x7d, 0x4, 0x2, 0xd, 0xd, 
    0x29, 0x29, 0x4, 0x2, 0x63, 0x63, 0x23f, 0x23f, 0x4, 0x2, 0x77, 0x77, 
    0x81, 0x81, 0x3, 0x2, 0x234, 0x23b, 0x4, 0x2, 0x24a, 0x24c, 0x253, 0x253, 
    0x4, 0x2, 0x37, 0x37, 0x99, 0x99, 0x4, 0x2, 0x65, 0x65, 0x256, 0x256, 
    0x4, 0x2, 0x1e8, 0x1e9, 0x1f0, 0x1f3, 0x3, 0x2, 0x1d8, 0x1dd, 0x3, 0x2, 
    0x1de, 0x1e0, 0x5, 0x2, 0xbb, 0xbc, 0x1e3, 0x1e3, 0x1ec, 0x1ef, 0x5, 
    0x2, 0xb9, 0xb9, 0x1e4, 0x1e7, 0x1ea, 0x1eb, 0x3, 0x2, 0x223, 0x22a, 
    0x4, 0x2, 0x212, 0x213, 0x219, 0x219, 0x2, 0x293, 0x2, 0x75, 0x3, 0x2, 
    0x2, 0x2, 0x4, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x6, 0x84, 0x3, 0x2, 0x2, 0x2, 
    0x8, 0x86, 0x3, 0x2, 0x2, 0x2, 0xa, 0x8b, 0x3, 0x2, 0x2, 0x2, 0xc, 0x8d, 
    0x3, 0x2, 0x2, 0x2, 0xe, 0x95, 0x3, 0x2, 0x2, 0x2, 0x10, 0xa1, 0x3, 
    0x2, 0x2, 0x2, 0x12, 0xa3, 0x3, 0x2, 0x2, 0x2, 0x14, 0xae, 0x3, 0x2, 
    0x2, 0x2, 0x16, 0xb1, 0x3, 0x2, 0x2, 0x2, 0x18, 0xc4, 0x3, 0x2, 0x2, 
    0x2, 0x1a, 0xc6, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xd3, 0x3, 0x2, 0x2, 0x2, 
    0x1e, 0xd5, 0x3, 0x2, 0x2, 0x2, 0x20, 0xe0, 0x3, 0x2, 0x2, 0x2, 0x22, 
    0xf4, 0x3, 0x2, 0x2, 0x2, 0x24, 0x108, 0x3, 0x2, 0x2, 0x2, 0x26, 0x10a, 
    0x3, 0x2, 0x2, 0x2, 0x28, 0x111, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x11c, 0x3, 
    0x2, 0x2, 0x2, 0x2c, 0x122, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x128, 0x3, 0x2, 
    0x2, 0x2, 0x30, 0x12c, 0x3, 0x2, 0x2, 0x2, 0x32, 0x136, 0x3, 0x2, 0x2, 
    0x2, 0x34, 0x13a, 0x3, 0x2, 0x2, 0x2, 0x36, 0x146, 0x3, 0x2, 0x2, 0x2, 
    0x38, 0x151, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x17c, 0x3, 0x2, 0x2, 0x2, 0x3c, 
    0x195, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x19e, 0x3, 0x2, 0x2, 0x2, 0x40, 0x1a0, 
    0x3, 0x2, 0x2, 0x2, 0x42, 0x1a2, 0x3, 0x2, 0x2, 0x2, 0x44, 0x1a4, 0x3, 
    0x2, 0x2, 0x2, 0x46, 0x1a6, 0x3, 0x2, 0x2, 0x2, 0x48, 0x1a8, 0x3, 0x2, 
    0x2, 0x2, 0x4a, 0x1ab, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x1bb, 0x3, 0x2, 0x2, 
    0x2, 0x4e, 0x1bd, 0x3, 0x2, 0x2, 0x2, 0x50, 0x1bf, 0x3, 0x2, 0x2, 0x2, 
    0x52, 0x1c4, 0x3, 0x2, 0x2, 0x2, 0x54, 0x1c9, 0x3, 0x2, 0x2, 0x2, 0x56, 
    0x1d1, 0x3, 0x2, 0x2, 0x2, 0x58, 0x1d9, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x1e1, 
    0x3, 0x2, 0x2, 0x2, 0x5c, 0x1e9, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x1f1, 0x3, 
    0x2, 0x2, 0x2, 0x60, 0x219, 0x3, 0x2, 0x2, 0x2, 0x62, 0x228, 0x3, 0x2, 
    0x2, 0x2, 0x64, 0x22a, 0x3, 0x2, 0x2, 0x2, 0x66, 0x22c, 0x3, 0x2, 0x2, 
    0x2, 0x68, 0x230, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x23e, 0x3, 0x2, 0x2, 0x2, 
    0x6c, 0x24e, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x252, 0x3, 0x2, 0x2, 0x2, 0x70, 
    0x254, 0x3, 0x2, 0x2, 0x2, 0x72, 0x257, 0x3, 0x2, 0x2, 0x2, 0x74, 0x76, 
    0x5, 0x4, 0x3, 0x2, 0x75, 0x74, 0x3, 0x2, 0x2, 0x2, 0x75, 0x76, 0x3, 
    0x2, 0x2, 0x2, 0x76, 0x77, 0x3, 0x2, 0x2, 0x2, 0x77, 0x78, 0x7, 0x2, 
    0x2, 0x3, 0x78, 0x3, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7a, 0x5, 0x6, 0x4, 
    0x2, 0x7a, 0x7b, 0x7, 0x248, 0x2, 0x2, 0x7b, 0x7e, 0x3, 0x2, 0x2, 0x2, 
    0x7c, 0x7e, 0x5, 0x8, 0x5, 0x2, 0x7d, 0x79, 0x3, 0x2, 0x2, 0x2, 0x7d, 
    0x7c, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x81, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x7d, 
    0x3, 0x2, 0x2, 0x2, 0x7f, 0x80, 0x3, 0x2, 0x2, 0x2, 0x80, 0x5, 0x3, 
    0x2, 0x2, 0x2, 0x81, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x82, 0x85, 0x5, 0xa, 
    0x6, 0x2, 0x83, 0x85, 0x5, 0x1c, 0xf, 0x2, 0x84, 0x82, 0x3, 0x2, 0x2, 
    0x2, 0x84, 0x83, 0x3, 0x2, 0x2, 0x2, 0x85, 0x7, 0x3, 0x2, 0x2, 0x2, 
    0x86, 0x87, 0x7, 0x248, 0x2, 0x2, 0x87, 0x9, 0x3, 0x2, 0x2, 0x2, 0x88, 
    0x8c, 0x5, 0xc, 0x7, 0x2, 0x89, 0x8c, 0x5, 0x1a, 0xe, 0x2, 0x8a, 0x8c, 
    0x5, 0xe, 0x8, 0x2, 0x8b, 0x88, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x89, 0x3, 
    0x2, 0x2, 0x2, 0x8b, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x8c, 0xb, 0x3, 0x2, 
    0x2, 0x2, 0x8d, 0x8e, 0x7, 0x1f, 0x2, 0x2, 0x8e, 0x90, 0x7, 0x93, 0x2, 
    0x2, 0x8f, 0x91, 0x5, 0x72, 0x3a, 0x2, 0x90, 0x8f, 0x3, 0x2, 0x2, 0x2, 
    0x90, 0x91, 0x3, 0x2, 0x2, 0x2, 0x91, 0x92, 0x3, 0x2, 0x2, 0x2, 0x92, 
    0x93, 0x5, 0x52, 0x2a, 0x2, 0x93, 0x94, 0x5, 0x12, 0xa, 0x2, 0x94, 0xd, 
    0x3, 0x2, 0x2, 0x2, 0x95, 0x97, 0x7, 0x1f, 0x2, 0x2, 0x96, 0x98, 0x7, 
    0x9c, 0x2, 0x2, 0x97, 0x96, 0x3, 0x2, 0x2, 0x2, 0x97, 0x98, 0x3, 0x2, 
    0x2, 0x2, 0x98, 0x99, 0x3, 0x2, 0x2, 0x2, 0x99, 0x9a, 0x7, 0x45, 0x2, 
    0x2, 0x9a, 0x9b, 0x5, 0x10, 0x9, 0x2, 0x9b, 0x9c, 0x7, 0x66, 0x2, 0x2, 
    0x9c, 0x9d, 0x5, 0x52, 0x2a, 0x2, 0x9d, 0x9e, 0x7, 0x245, 0x2, 0x2, 
    0x9e, 0x9f, 0x5, 0x4e, 0x28, 0x2, 0x9f, 0xa0, 0x7, 0x246, 0x2, 0x2, 
    0xa0, 0xf, 0x3, 0x2, 0x2, 0x2, 0xa1, 0xa2, 0x5, 0x50, 0x29, 0x2, 0xa2, 
    0x11, 0x3, 0x2, 0x2, 0x2, 0xa3, 0xa4, 0x7, 0x245, 0x2, 0x2, 0xa4, 0xa9, 
    0x5, 0x14, 0xb, 0x2, 0xa5, 0xa6, 0x7, 0x247, 0x2, 0x2, 0xa6, 0xa8, 0x5, 
    0x14, 0xb, 0x2, 0xa7, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xab, 0x3, 0x2, 
    0x2, 0x2, 0xa9, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xaa, 0x3, 0x2, 0x2, 
    0x2, 0xaa, 0xac, 0x3, 0x2, 0x2, 0x2, 0xab, 0xa9, 0x3, 0x2, 0x2, 0x2, 
    0xac, 0xad, 0x7, 0x246, 0x2, 0x2, 0xad, 0x13, 0x3, 0x2, 0x2, 0x2, 0xae, 
    0xaf, 0x5, 0x4e, 0x28, 0x2, 0xaf, 0xb0, 0x5, 0x16, 0xc, 0x2, 0xb0, 0x15, 
    0x3, 0x2, 0x2, 0x2, 0xb1, 0xb5, 0x5, 0x60, 0x31, 0x2, 0xb2, 0xb4, 0x5, 
    0x18, 0xd, 0x2, 0xb3, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb7, 0x3, 0x2, 
    0x2, 0x2, 0xb5, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb6, 0x3, 0x2, 0x2, 
    0x2, 0xb6, 0x17, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb5, 0x3, 0x2, 0x2, 0x2, 
    0xb8, 0xc5, 0x5, 0x4a, 0x26, 0x2, 0xb9, 0xba, 0x7, 0x26, 0x2, 0x2, 0xba, 
    0xc5, 0x5, 0x6a, 0x36, 0x2, 0xbb, 0xc5, 0x7, 0xab, 0x2, 0x2, 0xbc, 0xbe, 
    0x7, 0x70, 0x2, 0x2, 0xbd, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xbe, 0x3, 
    0x2, 0x2, 0x2, 0xbe, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xc5, 0x7, 0x4f, 
    0x2, 0x2, 0xc0, 0xc2, 0x7, 0x9c, 0x2, 0x2, 0xc1, 0xc3, 0x7, 0x4f, 0x2, 
    0x2, 0xc2, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc3, 0x3, 0x2, 0x2, 0x2, 
    0xc3, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xc4, 
    0xb9, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xbd, 
    0x3, 0x2, 0x2, 0x2, 0xc4, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xc5, 0x19, 0x3, 
    0x2, 0x2, 0x2, 0xc6, 0xc7, 0x7, 0x2e, 0x2, 0x2, 0xc7, 0xc9, 0x7, 0x93, 
    0x2, 0x2, 0xc8, 0xca, 0x5, 0x70, 0x39, 0x2, 0xc9, 0xc8, 0x3, 0x2, 0x2, 
    0x2, 0xc9, 0xca, 0x3, 0x2, 0x2, 0x2, 0xca, 0xcb, 0x3, 0x2, 0x2, 0x2, 
    0xcb, 0xcd, 0x5, 0x52, 0x2a, 0x2, 0xcc, 0xce, 0x9, 0x2, 0x2, 0x2, 0xcd, 
    0xcc, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xce, 0x3, 0x2, 0x2, 0x2, 0xce, 0x1b, 
    0x3, 0x2, 0x2, 0x2, 0xcf, 0xd4, 0x5, 0x1e, 0x10, 0x2, 0xd0, 0xd4, 0x5, 
    0x26, 0x14, 0x2, 0xd1, 0xd4, 0x5, 0x28, 0x15, 0x2, 0xd2, 0xd4, 0x5, 
    0x20, 0x11, 0x2, 0xd3, 0xcf, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd0, 0x3, 0x2, 
    0x2, 0x2, 0xd3, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd2, 0x3, 0x2, 0x2, 
    0x2, 0xd4, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd7, 0x7, 0x84, 0x2, 0x2, 
    0xd6, 0xd8, 0x7, 0x9c, 0x2, 0x2, 0xd7, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd7, 
    0xd8, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xdb, 
    0x5, 0x22, 0x12, 0x2, 0xda, 0xdc, 0x5, 0x2c, 0x17, 0x2, 0xdb, 0xda, 
    0x3, 0x2, 0x2, 0x2, 0xdb, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xde, 0x3, 
    0x2, 0x2, 0x2, 0xdd, 0xdf, 0x5, 0x30, 0x19, 0x2, 0xde, 0xdd, 0x3, 0x2, 
    0x2, 0x2, 0xde, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xdf, 0x1f, 0x3, 0x2, 0x2, 
    0x2, 0xe0, 0xe1, 0x7, 0x9f, 0x2, 0x2, 0xe1, 0xe2, 0x5, 0x52, 0x2a, 0x2, 
    0xe2, 0xe3, 0x7, 0x85, 0x2, 0x2, 0xe3, 0xe8, 0x5, 0x2a, 0x16, 0x2, 0xe4, 
    0xe5, 0x7, 0x247, 0x2, 0x2, 0xe5, 0xe7, 0x5, 0x2a, 0x16, 0x2, 0xe6, 
    0xe4, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xea, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xe6, 
    0x3, 0x2, 0x2, 0x2, 0xe8, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xed, 0x3, 
    0x2, 0x2, 0x2, 0xea, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xec, 0x7, 0xa5, 
    0x2, 0x2, 0xec, 0xee, 0x5, 0x36, 0x1c, 0x2, 0xed, 0xeb, 0x3, 0x2, 0x2, 
    0x2, 0xed, 0xee, 0x3, 0x2, 0x2, 0x2, 0xee, 0xf0, 0x3, 0x2, 0x2, 0x2, 
    0xef, 0xf1, 0x5, 0x30, 0x19, 0x2, 0xf0, 0xef, 0x3, 0x2, 0x2, 0x2, 0xf0, 
    0xf1, 0x3, 0x2, 0x2, 0x2, 0xf1, 0x21, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf5, 
    0x7, 0x234, 0x2, 0x2, 0xf3, 0xf5, 0x5, 0x24, 0x13, 0x2, 0xf4, 0xf2, 
    0x3, 0x2, 0x2, 0x2, 0xf4, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xfa, 0x3, 
    0x2, 0x2, 0x2, 0xf6, 0xf7, 0x7, 0x247, 0x2, 0x2, 0xf7, 0xf9, 0x5, 0x24, 
    0x13, 0x2, 0xf8, 0xf6, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xfc, 0x3, 0x2, 0x2, 
    0x2, 0xfa, 0xf8, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xfb, 0x3, 0x2, 0x2, 0x2, 
    0xfb, 0x23, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xfa, 0x3, 0x2, 0x2, 0x2, 0xfd, 
    0xfe, 0x5, 0x50, 0x29, 0x2, 0xfe, 0xff, 0x7, 0x244, 0x2, 0x2, 0xff, 
    0x100, 0x7, 0x234, 0x2, 0x2, 0x100, 0x109, 0x3, 0x2, 0x2, 0x2, 0x101, 
    0x106, 0x5, 0x50, 0x29, 0x2, 0x102, 0x104, 0x7, 0xc, 0x2, 0x2, 0x103, 
    0x102, 0x3, 0x2, 0x2, 0x2, 0x103, 0x104, 0x3, 0x2, 0x2, 0x2, 0x104, 
    0x105, 0x3, 0x2, 0x2, 0x2, 0x105, 0x107, 0x5, 0x4e, 0x28, 0x2, 0x106, 
    0x103, 0x3, 0x2, 0x2, 0x2, 0x106, 0x107, 0x3, 0x2, 0x2, 0x2, 0x107, 
    0x109, 0x3, 0x2, 0x2, 0x2, 0x108, 0xfd, 0x3, 0x2, 0x2, 0x2, 0x108, 0x101, 
    0x3, 0x2, 0x2, 0x2, 0x109, 0x25, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x10b, 0x7, 
    0x28, 0x2, 0x2, 0x10b, 0x10c, 0x7, 0x3c, 0x2, 0x2, 0x10c, 0x10f, 0x5, 
    0x52, 0x2a, 0x2, 0x10d, 0x10e, 0x7, 0xa5, 0x2, 0x2, 0x10e, 0x110, 0x5, 
    0x36, 0x1c, 0x2, 0x10f, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x110, 0x3, 
    0x2, 0x2, 0x2, 0x110, 0x27, 0x3, 0x2, 0x2, 0x2, 0x111, 0x112, 0x7, 0x49, 
    0x2, 0x2, 0x112, 0x113, 0x7, 0x4b, 0x2, 0x2, 0x113, 0x114, 0x5, 0x52, 
    0x2a, 0x2, 0x114, 0x115, 0x7, 0x245, 0x2, 0x2, 0x115, 0x116, 0x5, 0x54, 
    0x2b, 0x2, 0x116, 0x117, 0x7, 0x246, 0x2, 0x2, 0x117, 0x118, 0x7, 0xa3, 
    0x2, 0x2, 0x118, 0x119, 0x7, 0x245, 0x2, 0x2, 0x119, 0x11a, 0x5, 0x5a, 
    0x2e, 0x2, 0x11a, 0x11b, 0x7, 0x246, 0x2, 0x2, 0x11b, 0x29, 0x3, 0x2, 
    0x2, 0x2, 0x11c, 0x11d, 0x5, 0x50, 0x29, 0x2, 0x11d, 0x120, 0x7, 0x23c, 
    0x2, 0x2, 0x11e, 0x121, 0x5, 0x36, 0x1c, 0x2, 0x11f, 0x121, 0x7, 0x26, 
    0x2, 0x2, 0x120, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x120, 0x11f, 0x3, 0x2, 
    0x2, 0x2, 0x121, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x122, 0x123, 0x7, 0x3c, 
    0x2, 0x2, 0x123, 0x126, 0x5, 0x56, 0x2c, 0x2, 0x124, 0x125, 0x7, 0xa5, 
    0x2, 0x2, 0x125, 0x127, 0x5, 0x36, 0x1c, 0x2, 0x126, 0x124, 0x3, 0x2, 
    0x2, 0x2, 0x126, 0x127, 0x3, 0x2, 0x2, 0x2, 0x127, 0x2d, 0x3, 0x2, 0x2, 
    0x2, 0x128, 0x12a, 0x5, 0x36, 0x1c, 0x2, 0x129, 0x12b, 0x9, 0x3, 0x2, 
    0x2, 0x12a, 0x129, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x12b, 0x3, 0x2, 0x2, 
    0x2, 0x12b, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x12d, 0x7, 0x6b, 0x2, 
    0x2, 0x12d, 0x12e, 0x7, 0x11, 0x2, 0x2, 0x12e, 0x133, 0x5, 0x32, 0x1a, 
    0x2, 0x12f, 0x130, 0x7, 0x247, 0x2, 0x2, 0x130, 0x132, 0x5, 0x32, 0x1a, 
    0x2, 0x131, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x132, 0x135, 0x3, 0x2, 0x2, 
    0x2, 0x133, 0x131, 0x3, 0x2, 0x2, 0x2, 0x133, 0x134, 0x3, 0x2, 0x2, 
    0x2, 0x134, 0x31, 0x3, 0x2, 0x2, 0x2, 0x135, 0x133, 0x3, 0x2, 0x2, 0x2, 
    0x136, 0x138, 0x5, 0x36, 0x1c, 0x2, 0x137, 0x139, 0x9, 0x3, 0x2, 0x2, 
    0x138, 0x137, 0x3, 0x2, 0x2, 0x2, 0x138, 0x139, 0x3, 0x2, 0x2, 0x2, 
    0x139, 0x33, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x13f, 0x5, 0x52, 0x2a, 0x2, 
    0x13b, 0x13c, 0x7, 0x247, 0x2, 0x2, 0x13c, 0x13e, 0x5, 0x52, 0x2a, 0x2, 
    0x13d, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x141, 0x3, 0x2, 0x2, 0x2, 
    0x13f, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x13f, 0x140, 0x3, 0x2, 0x2, 0x2, 
    0x140, 0x35, 0x3, 0x2, 0x2, 0x2, 0x141, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x142, 
    0x143, 0x8, 0x1c, 0x1, 0x2, 0x143, 0x144, 0x9, 0x4, 0x2, 0x2, 0x144, 
    0x147, 0x5, 0x36, 0x1c, 0x5, 0x145, 0x147, 0x5, 0x38, 0x1d, 0x2, 0x146, 
    0x142, 0x3, 0x2, 0x2, 0x2, 0x146, 0x145, 0x3, 0x2, 0x2, 0x2, 0x147, 
    0x14e, 0x3, 0x2, 0x2, 0x2, 0x148, 0x149, 0xc, 0x4, 0x2, 0x2, 0x149, 
    0x14a, 0x5, 0x3e, 0x20, 0x2, 0x14a, 0x14b, 0x5, 0x36, 0x1c, 0x5, 0x14b, 
    0x14d, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x148, 0x3, 0x2, 0x2, 0x2, 0x14d, 
    0x150, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x14c, 0x3, 0x2, 0x2, 0x2, 0x14e, 
    0x14f, 0x3, 0x2, 0x2, 0x2, 0x14f, 0x37, 0x3, 0x2, 0x2, 0x2, 0x150, 0x14e, 
    0x3, 0x2, 0x2, 0x2, 0x151, 0x152, 0x8, 0x1d, 0x1, 0x2, 0x152, 0x153, 
    0x5, 0x3a, 0x1e, 0x2, 0x153, 0x176, 0x3, 0x2, 0x2, 0x2, 0x154, 0x155, 
    0xc, 0x7, 0x2, 0x2, 0x155, 0x156, 0x5, 0x3c, 0x1f, 0x2, 0x156, 0x157, 
    0x5, 0x38, 0x1d, 0x8, 0x157, 0x175, 0x3, 0x2, 0x2, 0x2, 0x158, 0x15a, 
    0xc, 0x6, 0x2, 0x2, 0x159, 0x15b, 0x7, 0x63, 0x2, 0x2, 0x15a, 0x159, 
    0x3, 0x2, 0x2, 0x2, 0x15a, 0x15b, 0x3, 0x2, 0x2, 0x2, 0x15b, 0x15c, 
    0x3, 0x2, 0x2, 0x2, 0x15c, 0x15d, 0x7, 0xf, 0x2, 0x2, 0x15d, 0x15e, 
    0x5, 0x38, 0x1d, 0x2, 0x15e, 0x15f, 0x7, 0xb, 0x2, 0x2, 0x15f, 0x160, 
    0x5, 0x38, 0x1d, 0x7, 0x160, 0x175, 0x3, 0x2, 0x2, 0x2, 0x161, 0x163, 
    0xc, 0x4, 0x2, 0x2, 0x162, 0x164, 0x7, 0x63, 0x2, 0x2, 0x163, 0x162, 
    0x3, 0x2, 0x2, 0x2, 0x163, 0x164, 0x3, 0x2, 0x2, 0x2, 0x164, 0x165, 
    0x3, 0x2, 0x2, 0x2, 0x165, 0x166, 0x9, 0x5, 0x2, 0x2, 0x166, 0x175, 
    0x5, 0x38, 0x1d, 0x5, 0x167, 0x168, 0xc, 0x8, 0x2, 0x2, 0x168, 0x169, 
    0x7, 0x4c, 0x2, 0x2, 0x169, 0x175, 0x5, 0x4a, 0x26, 0x2, 0x16a, 0x16c, 
    0xc, 0x5, 0x2, 0x2, 0x16b, 0x16d, 0x7, 0x63, 0x2, 0x2, 0x16c, 0x16b, 
    0x3, 0x2, 0x2, 0x2, 0x16c, 0x16d, 0x3, 0x2, 0x2, 0x2, 0x16d, 0x16e, 
    0x3, 0x2, 0x2, 0x2, 0x16e, 0x16f, 0x7, 0x55, 0x2, 0x2, 0x16f, 0x172, 
    0x5, 0x38, 0x1d, 0x2, 0x170, 0x171, 0x7, 0xf0, 0x2, 0x2, 0x171, 0x173, 
    0x7, 0x252, 0x2, 0x2, 0x172, 0x170, 0x3, 0x2, 0x2, 0x2, 0x172, 0x173, 
    0x3, 0x2, 0x2, 0x2, 0x173, 0x175, 0x3, 0x2, 0x2, 0x2, 0x174, 0x154, 
    0x3, 0x2, 0x2, 0x2, 0x174, 0x158, 0x3, 0x2, 0x2, 0x2, 0x174, 0x161, 
    0x3, 0x2, 0x2, 0x2, 0x174, 0x167, 0x3, 0x2, 0x2, 0x2, 0x174, 0x16a, 
    0x3, 0x2, 0x2, 0x2, 0x175, 0x178, 0x3, 0x2, 0x2, 0x2, 0x176, 0x174, 
    0x3, 0x2, 0x2, 0x2, 0x176, 0x177, 0x3, 0x2, 0x2, 0x2, 0x177, 0x39, 0x3, 
    0x2, 0x2, 0x2, 0x178, 0x176, 0x3, 0x2, 0x2, 0x2, 0x179, 0x17a, 0x8, 
    0x1e, 0x1, 0x2, 0x17a, 0x17d, 0x5, 0x4c, 0x27, 0x2, 0x17b, 0x17d, 0x5, 
    0x50, 0x29, 0x2, 0x17c, 0x179, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x17b, 0x3, 
    0x2, 0x2, 0x2, 0x17d, 0x184, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x17f, 0xc, 
    0x3, 0x2, 0x2, 0x17f, 0x180, 0x5, 0x40, 0x21, 0x2, 0x180, 0x181, 0x5, 
    0x3a, 0x1e, 0x4, 0x181, 0x183, 0x3, 0x2, 0x2, 0x2, 0x182, 0x17e, 0x3, 
    0x2, 0x2, 0x2, 0x183, 0x186, 0x3, 0x2, 0x2, 0x2, 0x184, 0x182, 0x3, 
    0x2, 0x2, 0x2, 0x184, 0x185, 0x3, 0x2, 0x2, 0x2, 0x185, 0x3b, 0x3, 0x2, 
    0x2, 0x2, 0x186, 0x184, 0x3, 0x2, 0x2, 0x2, 0x187, 0x196, 0x7, 0x23c, 
    0x2, 0x2, 0x188, 0x196, 0x7, 0x23d, 0x2, 0x2, 0x189, 0x196, 0x7, 0x23e, 
    0x2, 0x2, 0x18a, 0x18b, 0x7, 0x23e, 0x2, 0x2, 0x18b, 0x196, 0x7, 0x23c, 
    0x2, 0x2, 0x18c, 0x18d, 0x7, 0x23d, 0x2, 0x2, 0x18d, 0x196, 0x7, 0x23c, 
    0x2, 0x2, 0x18e, 0x18f, 0x7, 0x23e, 0x2, 0x2, 0x18f, 0x196, 0x7, 0x23d, 
    0x2, 0x2, 0x190, 0x191, 0x7, 0x23f, 0x2, 0x2, 0x191, 0x196, 0x7, 0x23c, 
    0x2, 0x2, 0x192, 0x193, 0x7, 0x23e, 0x2, 0x2, 0x193, 0x194, 0x7, 0x23c, 
    0x2, 0x2, 0x194, 0x196, 0x7, 0x23d, 0x2, 0x2, 0x195, 0x187, 0x3, 0x2, 
    0x2, 0x2, 0x195, 0x188, 0x3, 0x2, 0x2, 0x2, 0x195, 0x189, 0x3, 0x2, 
    0x2, 0x2, 0x195, 0x18a, 0x3, 0x2, 0x2, 0x2, 0x195, 0x18c, 0x3, 0x2, 
    0x2, 0x2, 0x195, 0x18e, 0x3, 0x2, 0x2, 0x2, 0x195, 0x190, 0x3, 0x2, 
    0x2, 0x2, 0x195, 0x192, 0x3, 0x2, 0x2, 0x2, 0x196, 0x3d, 0x3, 0x2, 0x2, 
    0x2, 0x197, 0x19f, 0x7, 0xb, 0x2, 0x2, 0x198, 0x199, 0x7, 0x242, 0x2, 
    0x2, 0x199, 0x19f, 0x7, 0x242, 0x2, 0x2, 0x19a, 0x19f, 0x7, 0xa9, 0x2, 
    0x2, 0x19b, 0x19f, 0x7, 0x6a, 0x2, 0x2, 0x19c, 0x19d, 0x7, 0x241, 0x2, 
    0x2, 0x19d, 0x19f, 0x7, 0x241, 0x2, 0x2, 0x19e, 0x197, 0x3, 0x2, 0x2, 
    0x2, 0x19e, 0x198, 0x3, 0x2, 0x2, 0x2, 0x19e, 0x19a, 0x3, 0x2, 0x2, 
    0x2, 0x19e, 0x19b, 0x3, 0x2, 0x2, 0x2, 0x19e, 0x19c, 0x3, 0x2, 0x2, 
    0x2, 0x19f, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x1a0, 0x1a1, 0x9, 0x6, 0x2, 0x2, 
    0x1a1, 0x41, 0x3, 0x2, 0x2, 0x2, 0x1a2, 0x1a3, 0x9, 0x7, 0x2, 0x2, 0x1a3, 
    0x43, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0x1a5, 0x7, 0x252, 0x2, 0x2, 0x1a5, 
    0x45, 0x3, 0x2, 0x2, 0x2, 0x1a6, 0x1a7, 0x9, 0x8, 0x2, 0x2, 0x1a7, 0x47, 
    0x3, 0x2, 0x2, 0x2, 0x1a8, 0x1a9, 0x7, 0x254, 0x2, 0x2, 0x1a9, 0x49, 
    0x3, 0x2, 0x2, 0x2, 0x1aa, 0x1ac, 0x7, 0x63, 0x2, 0x2, 0x1ab, 0x1aa, 
    0x3, 0x2, 0x2, 0x2, 0x1ab, 0x1ac, 0x3, 0x2, 0x2, 0x2, 0x1ac, 0x1ad, 
    0x3, 0x2, 0x2, 0x2, 0x1ad, 0x1ae, 0x9, 0x9, 0x2, 0x2, 0x1ae, 0x4b, 0x3, 
    0x2, 0x2, 0x2, 0x1af, 0x1bc, 0x5, 0x44, 0x23, 0x2, 0x1b0, 0x1bc, 0x5, 
    0x42, 0x22, 0x2, 0x1b1, 0x1b2, 0x7, 0x239, 0x2, 0x2, 0x1b2, 0x1bc, 0x5, 
    0x42, 0x22, 0x2, 0x1b3, 0x1bc, 0x5, 0x48, 0x25, 0x2, 0x1b4, 0x1bc, 0x5, 
    0x46, 0x24, 0x2, 0x1b5, 0x1bc, 0x7, 0x255, 0x2, 0x2, 0x1b6, 0x1bc, 0x7, 
    0x257, 0x2, 0x2, 0x1b7, 0x1b9, 0x7, 0x63, 0x2, 0x2, 0x1b8, 0x1b7, 0x3, 
    0x2, 0x2, 0x2, 0x1b8, 0x1b9, 0x3, 0x2, 0x2, 0x2, 0x1b9, 0x1ba, 0x3, 
    0x2, 0x2, 0x2, 0x1ba, 0x1bc, 0x9, 0x9, 0x2, 0x2, 0x1bb, 0x1af, 0x3, 
    0x2, 0x2, 0x2, 0x1bb, 0x1b0, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x1b1, 0x3, 
    0x2, 0x2, 0x2, 0x1bb, 0x1b3, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x1b4, 0x3, 
    0x2, 0x2, 0x2, 0x1bb, 0x1b5, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x1b6, 0x3, 
    0x2, 0x2, 0x2, 0x1bb, 0x1b8, 0x3, 0x2, 0x2, 0x2, 0x1bc, 0x4d, 0x3, 0x2, 
    0x2, 0x2, 0x1bd, 0x1be, 0x7, 0x258, 0x2, 0x2, 0x1be, 0x4f, 0x3, 0x2, 
    0x2, 0x2, 0x1bf, 0x1c2, 0x5, 0x4e, 0x28, 0x2, 0x1c0, 0x1c1, 0x7, 0x244, 
    0x2, 0x2, 0x1c1, 0x1c3, 0x5, 0x4e, 0x28, 0x2, 0x1c2, 0x1c0, 0x3, 0x2, 
    0x2, 0x2, 0x1c2, 0x1c3, 0x3, 0x2, 0x2, 0x2, 0x1c3, 0x51, 0x3, 0x2, 0x2, 
    0x2, 0x1c4, 0x1c7, 0x5, 0x4e, 0x28, 0x2, 0x1c5, 0x1c6, 0x7, 0x244, 0x2, 
    0x2, 0x1c6, 0x1c8, 0x5, 0x4e, 0x28, 0x2, 0x1c7, 0x1c5, 0x3, 0x2, 0x2, 
    0x2, 0x1c7, 0x1c8, 0x3, 0x2, 0x2, 0x2, 0x1c8, 0x53, 0x3, 0x2, 0x2, 0x2, 
    0x1c9, 0x1ce, 0x5, 0x4e, 0x28, 0x2, 0x1ca, 0x1cb, 0x7, 0x247, 0x2, 0x2, 
    0x1cb, 0x1cd, 0x5, 0x4e, 0x28, 0x2, 0x1cc, 0x1ca, 0x3, 0x2, 0x2, 0x2, 
    0x1cd, 0x1d0, 0x3, 0x2, 0x2, 0x2, 0x1ce, 0x1cc, 0x3, 0x2, 0x2, 0x2, 
    0x1ce, 0x1cf, 0x3, 0x2, 0x2, 0x2, 0x1cf, 0x55, 0x3, 0x2, 0x2, 0x2, 0x1d0, 
    0x1ce, 0x3, 0x2, 0x2, 0x2, 0x1d1, 0x1d6, 0x5, 0x52, 0x2a, 0x2, 0x1d2, 
    0x1d3, 0x7, 0x247, 0x2, 0x2, 0x1d3, 0x1d5, 0x5, 0x52, 0x2a, 0x2, 0x1d4, 
    0x1d2, 0x3, 0x2, 0x2, 0x2, 0x1d5, 0x1d8, 0x3, 0x2, 0x2, 0x2, 0x1d6, 
    0x1d4, 0x3, 0x2, 0x2, 0x2, 0x1d6, 0x1d7, 0x3, 0x2, 0x2, 0x2, 0x1d7, 
    0x57, 0x3, 0x2, 0x2, 0x2, 0x1d8, 0x1d6, 0x3, 0x2, 0x2, 0x2, 0x1d9, 0x1de, 
    0x5, 0x36, 0x1c, 0x2, 0x1da, 0x1db, 0x7, 0x247, 0x2, 0x2, 0x1db, 0x1dd, 
    0x5, 0x36, 0x1c, 0x2, 0x1dc, 0x1da, 0x3, 0x2, 0x2, 0x2, 0x1dd, 0x1e0, 
    0x3, 0x2, 0x2, 0x2, 0x1de, 0x1dc, 0x3, 0x2, 0x2, 0x2, 0x1de, 0x1df, 
    0x3, 0x2, 0x2, 0x2, 0x1df, 0x59, 0x3, 0x2, 0x2, 0x2, 0x1e0, 0x1de, 0x3, 
    0x2, 0x2, 0x2, 0x1e1, 0x1e6, 0x5, 0x4c, 0x27, 0x2, 0x1e2, 0x1e3, 0x7, 
    0x247, 0x2, 0x2, 0x1e3, 0x1e5, 0x5, 0x4c, 0x27, 0x2, 0x1e4, 0x1e2, 0x3, 
    0x2, 0x2, 0x2, 0x1e5, 0x1e8, 0x3, 0x2, 0x2, 0x2, 0x1e6, 0x1e4, 0x3, 
    0x2, 0x2, 0x2, 0x1e6, 0x1e7, 0x3, 0x2, 0x2, 0x2, 0x1e7, 0x5b, 0x3, 0x2, 
    0x2, 0x2, 0x1e8, 0x1e6, 0x3, 0x2, 0x2, 0x2, 0x1e9, 0x1ee, 0x7, 0x252, 
    0x2, 0x2, 0x1ea, 0x1eb, 0x7, 0x247, 0x2, 0x2, 0x1eb, 0x1ed, 0x7, 0x252, 
    0x2, 0x2, 0x1ec, 0x1ea, 0x3, 0x2, 0x2, 0x2, 0x1ed, 0x1f0, 0x3, 0x2, 
    0x2, 0x2, 0x1ee, 0x1ec, 0x3, 0x2, 0x2, 0x2, 0x1ee, 0x1ef, 0x3, 0x2, 
    0x2, 0x2, 0x1ef, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x1f0, 0x1ee, 0x3, 0x2, 0x2, 
    0x2, 0x1f1, 0x1f6, 0x7, 0x259, 0x2, 0x2, 0x1f2, 0x1f3, 0x7, 0x247, 0x2, 
    0x2, 0x1f3, 0x1f5, 0x7, 0x259, 0x2, 0x2, 0x1f4, 0x1f2, 0x3, 0x2, 0x2, 
    0x2, 0x1f5, 0x1f8, 0x3, 0x2, 0x2, 0x2, 0x1f6, 0x1f4, 0x3, 0x2, 0x2, 
    0x2, 0x1f6, 0x1f7, 0x3, 0x2, 0x2, 0x2, 0x1f7, 0x5f, 0x3, 0x2, 0x2, 0x2, 
    0x1f8, 0x1f6, 0x3, 0x2, 0x2, 0x2, 0x1f9, 0x1fb, 0x9, 0xa, 0x2, 0x2, 
    0x1fa, 0x1fc, 0x5, 0x66, 0x34, 0x2, 0x1fb, 0x1fa, 0x3, 0x2, 0x2, 0x2, 
    0x1fb, 0x1fc, 0x3, 0x2, 0x2, 0x2, 0x1fc, 0x1fe, 0x3, 0x2, 0x2, 0x2, 
    0x1fd, 0x1ff, 0x7, 0x1ea, 0x2, 0x2, 0x1fe, 0x1fd, 0x3, 0x2, 0x2, 0x2, 
    0x1fe, 0x1ff, 0x3, 0x2, 0x2, 0x2, 0x1ff, 0x21a, 0x3, 0x2, 0x2, 0x2, 
    0x200, 0x202, 0x9, 0xb, 0x2, 0x2, 0x201, 0x203, 0x5, 0x66, 0x34, 0x2, 
    0x202, 0x201, 0x3, 0x2, 0x2, 0x2, 0x202, 0x203, 0x3, 0x2, 0x2, 0x2, 
    0x203, 0x205, 0x3, 0x2, 0x2, 0x2, 0x204, 0x206, 0x7, 0x9e, 0x2, 0x2, 
    0x205, 0x204, 0x3, 0x2, 0x2, 0x2, 0x205, 0x206, 0x3, 0x2, 0x2, 0x2, 
    0x206, 0x208, 0x3, 0x2, 0x2, 0x2, 0x207, 0x209, 0x7, 0xaa, 0x2, 0x2, 
    0x208, 0x207, 0x3, 0x2, 0x2, 0x2, 0x208, 0x209, 0x3, 0x2, 0x2, 0x2, 
    0x209, 0x21a, 0x3, 0x2, 0x2, 0x2, 0x20a, 0x20c, 0x9, 0xc, 0x2, 0x2, 
    0x20b, 0x20d, 0x5, 0x68, 0x35, 0x2, 0x20c, 0x20b, 0x3, 0x2, 0x2, 0x2, 
    0x20c, 0x20d, 0x3, 0x2, 0x2, 0x2, 0x20d, 0x20f, 0x3, 0x2, 0x2, 0x2, 
    0x20e, 0x210, 0x7, 0x9e, 0x2, 0x2, 0x20f, 0x20e, 0x3, 0x2, 0x2, 0x2, 
    0x20f, 0x210, 0x3, 0x2, 0x2, 0x2, 0x210, 0x212, 0x3, 0x2, 0x2, 0x2, 
    0x211, 0x213, 0x7, 0xaa, 0x2, 0x2, 0x212, 0x211, 0x3, 0x2, 0x2, 0x2, 
    0x212, 0x213, 0x3, 0x2, 0x2, 0x2, 0x213, 0x21a, 0x3, 0x2, 0x2, 0x2, 
    0x214, 0x21a, 0x9, 0xd, 0x2, 0x2, 0x215, 0x217, 0x9, 0xe, 0x2, 0x2, 
    0x216, 0x218, 0x5, 0x66, 0x34, 0x2, 0x217, 0x216, 0x3, 0x2, 0x2, 0x2, 
    0x217, 0x218, 0x3, 0x2, 0x2, 0x2, 0x218, 0x21a, 0x3, 0x2, 0x2, 0x2, 
    0x219, 0x1f9, 0x3, 0x2, 0x2, 0x2, 0x219, 0x200, 0x3, 0x2, 0x2, 0x2, 
    0x219, 0x20a, 0x3, 0x2, 0x2, 0x2, 0x219, 0x214, 0x3, 0x2, 0x2, 0x2, 
    0x219, 0x215, 0x3, 0x2, 0x2, 0x2, 0x21a, 0x61, 0x3, 0x2, 0x2, 0x2, 0x21b, 
    0x229, 0x5, 0x64, 0x33, 0x2, 0x21c, 0x229, 0x7, 0x1e7, 0x2, 0x2, 0x21d, 
    0x229, 0x7, 0x1f5, 0x2, 0x2, 0x21e, 0x229, 0x7, 0x1f6, 0x2, 0x2, 0x21f, 
    0x229, 0x7, 0x1f7, 0x2, 0x2, 0x220, 0x229, 0x7, 0x1f8, 0x2, 0x2, 0x221, 
    0x229, 0x7, 0x1f9, 0x2, 0x2, 0x222, 0x229, 0x7, 0x1fa, 0x2, 0x2, 0x223, 
    0x229, 0x7, 0x1fb, 0x2, 0x2, 0x224, 0x229, 0x7, 0x1fc, 0x2, 0x2, 0x225, 
    0x229, 0x7, 0x1fd, 0x2, 0x2, 0x226, 0x229, 0x7, 0x1fe, 0x2, 0x2, 0x227, 
    0x229, 0x7, 0x1ff, 0x2, 0x2, 0x228, 0x21b, 0x3, 0x2, 0x2, 0x2, 0x228, 
    0x21c, 0x3, 0x2, 0x2, 0x2, 0x228, 0x21d, 0x3, 0x2, 0x2, 0x2, 0x228, 
    0x21e, 0x3, 0x2, 0x2, 0x2, 0x228, 0x21f, 0x3, 0x2, 0x2, 0x2, 0x228, 
    0x220, 0x3, 0x2, 0x2, 0x2, 0x228, 0x221, 0x3, 0x2, 0x2, 0x2, 0x228, 
    0x222, 0x3, 0x2, 0x2, 0x2, 0x228, 0x223, 0x3, 0x2, 0x2, 0x2, 0x228, 
    0x224, 0x3, 0x2, 0x2, 0x2, 0x228, 0x225, 0x3, 0x2, 0x2, 0x2, 0x228, 
    0x226, 0x3, 0x2, 0x2, 0x2, 0x228, 0x227, 0x3, 0x2, 0x2, 0x2, 0x229, 
    0x63, 0x3, 0x2, 0x2, 0x2, 0x22a, 0x22b, 0x9, 0xf, 0x2, 0x2, 0x22b, 0x65, 
    0x3, 0x2, 0x2, 0x2, 0x22c, 0x22d, 0x7, 0x245, 0x2, 0x2, 0x22d, 0x22e, 
    0x5, 0x42, 0x22, 0x2, 0x22e, 0x22f, 0x7, 0x246, 0x2, 0x2, 0x22f, 0x67, 
    0x3, 0x2, 0x2, 0x2, 0x230, 0x231, 0x7, 0x245, 0x2, 0x2, 0x231, 0x232, 
    0x5, 0x42, 0x22, 0x2, 0x232, 0x233, 0x7, 0x247, 0x2, 0x2, 0x233, 0x234, 
    0x5, 0x42, 0x22, 0x2, 0x234, 0x235, 0x7, 0x246, 0x2, 0x2, 0x235, 0x69, 
    0x3, 0x2, 0x2, 0x2, 0x236, 0x23f, 0x7, 0x65, 0x2, 0x2, 0x237, 0x23f, 
    0x5, 0x4c, 0x27, 0x2, 0x238, 0x23c, 0x5, 0x6c, 0x37, 0x2, 0x239, 0x23a, 
    0x7, 0x66, 0x2, 0x2, 0x23a, 0x23b, 0x7, 0x9f, 0x2, 0x2, 0x23b, 0x23d, 
    0x5, 0x6c, 0x37, 0x2, 0x23c, 0x239, 0x3, 0x2, 0x2, 0x2, 0x23c, 0x23d, 
    0x3, 0x2, 0x2, 0x2, 0x23d, 0x23f, 0x3, 0x2, 0x2, 0x2, 0x23e, 0x236, 
    0x3, 0x2, 0x2, 0x2, 0x23e, 0x237, 0x3, 0x2, 0x2, 0x2, 0x23e, 0x238, 
    0x3, 0x2, 0x2, 0x2, 0x23f, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x240, 0x246, 0x9, 
    0x10, 0x2, 0x2, 0x241, 0x243, 0x7, 0x245, 0x2, 0x2, 0x242, 0x244, 0x5, 
    0x42, 0x22, 0x2, 0x243, 0x242, 0x3, 0x2, 0x2, 0x2, 0x243, 0x244, 0x3, 
    0x2, 0x2, 0x2, 0x244, 0x245, 0x3, 0x2, 0x2, 0x2, 0x245, 0x247, 0x7, 
    0x246, 0x2, 0x2, 0x246, 0x241, 0x3, 0x2, 0x2, 0x2, 0x246, 0x247, 0x3, 
    0x2, 0x2, 0x2, 0x247, 0x24f, 0x3, 0x2, 0x2, 0x2, 0x248, 0x249, 0x7, 
    0x21a, 0x2, 0x2, 0x249, 0x24b, 0x7, 0x245, 0x2, 0x2, 0x24a, 0x24c, 0x5, 
    0x42, 0x22, 0x2, 0x24b, 0x24a, 0x3, 0x2, 0x2, 0x2, 0x24b, 0x24c, 0x3, 
    0x2, 0x2, 0x2, 0x24c, 0x24d, 0x3, 0x2, 0x2, 0x2, 0x24d, 0x24f, 0x7, 
    0x246, 0x2, 0x2, 0x24e, 0x240, 0x3, 0x2, 0x2, 0x2, 0x24e, 0x248, 0x3, 
    0x2, 0x2, 0x2, 0x24f, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x250, 0x253, 0x5, 0x36, 
    0x1c, 0x2, 0x251, 0x253, 0x7, 0x26, 0x2, 0x2, 0x252, 0x250, 0x3, 0x2, 
    0x2, 0x2, 0x252, 0x251, 0x3, 0x2, 0x2, 0x2, 0x253, 0x6f, 0x3, 0x2, 0x2, 
    0x2, 0x254, 0x255, 0x7, 0x42, 0x2, 0x2, 0x255, 0x256, 0x7, 0x34, 0x2, 
    0x2, 0x256, 0x71, 0x3, 0x2, 0x2, 0x2, 0x257, 0x258, 0x7, 0x42, 0x2, 
    0x2, 0x258, 0x259, 0x7, 0x63, 0x2, 0x2, 0x259, 0x25a, 0x7, 0x34, 0x2, 
    0x2, 0x25a, 0x73, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x75, 0x7d, 0x7f, 0x84, 
    0x8b, 0x90, 0x97, 0xa9, 0xb5, 0xbd, 0xc2, 0xc4, 0xc9, 0xcd, 0xd3, 0xd7, 
    0xdb, 0xde, 0xe8, 0xed, 0xf0, 0xf4, 0xfa, 0x103, 0x106, 0x108, 0x10f, 
    0x120, 0x126, 0x12a, 0x133, 0x138, 0x13f, 0x146, 0x14e, 0x15a, 0x163, 
    0x16c, 0x172, 0x174, 0x176, 0x17c, 0x184, 0x195, 0x19e, 0x1ab, 0x1b8, 
    0x1bb, 0x1c2, 0x1c7, 0x1ce, 0x1d6, 0x1de, 0x1e6, 0x1ee, 0x1f6, 0x1fb, 
    0x1fe, 0x202, 0x205, 0x208, 0x20c, 0x20f, 0x212, 0x217, 0x219, 0x228, 
    0x23c, 0x23e, 0x243, 0x246, 0x24b, 0x24e, 0x252, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

NaiveSqlParser::Initializer NaiveSqlParser::_init;
