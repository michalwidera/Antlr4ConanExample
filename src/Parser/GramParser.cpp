
// Generated from Gram.g4 by ANTLR 4.12.0



#include "GramParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct GramParserStaticData final {
  GramParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  GramParserStaticData(const GramParserStaticData&) = delete;
  GramParserStaticData(GramParserStaticData&&) = delete;
  GramParserStaticData& operator=(const GramParserStaticData&) = delete;
  GramParserStaticData& operator=(GramParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag gramParserOnceFlag;
GramParserStaticData *gramParserStaticData = nullptr;

void gramParserInitialize() {
  assert(gramParserStaticData == nullptr);
  auto staticData = std::make_unique<GramParserStaticData>(
    std::vector<std::string>{
      "prog", "expr"
    },
    std::vector<std::string>{
      "", "'*'", "'/'", "'+'", "'-'", "'('", "')'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "NEWLINE", "INT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,8,32,2,0,7,0,2,1,7,1,1,0,1,0,1,0,5,0,8,8,0,10,0,12,0,11,9,0,1,1,1,
  	1,1,1,1,1,1,1,1,1,3,1,19,8,1,1,1,1,1,1,1,1,1,1,1,1,1,5,1,27,8,1,10,1,
  	12,1,30,9,1,1,1,0,1,2,2,0,2,0,2,1,0,1,2,1,0,3,4,33,0,9,1,0,0,0,2,18,1,
  	0,0,0,4,5,3,2,1,0,5,6,5,7,0,0,6,8,1,0,0,0,7,4,1,0,0,0,8,11,1,0,0,0,9,
  	7,1,0,0,0,9,10,1,0,0,0,10,1,1,0,0,0,11,9,1,0,0,0,12,13,6,1,-1,0,13,19,
  	5,8,0,0,14,15,5,5,0,0,15,16,3,2,1,0,16,17,5,6,0,0,17,19,1,0,0,0,18,12,
  	1,0,0,0,18,14,1,0,0,0,19,28,1,0,0,0,20,21,10,4,0,0,21,22,7,0,0,0,22,27,
  	3,2,1,5,23,24,10,3,0,0,24,25,7,1,0,0,25,27,3,2,1,4,26,20,1,0,0,0,26,23,
  	1,0,0,0,27,30,1,0,0,0,28,26,1,0,0,0,28,29,1,0,0,0,29,3,1,0,0,0,30,28,
  	1,0,0,0,4,9,18,26,28
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  gramParserStaticData = staticData.release();
}

}

GramParser::GramParser(TokenStream *input) : GramParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

GramParser::GramParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  GramParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *gramParserStaticData->atn, gramParserStaticData->decisionToDFA, gramParserStaticData->sharedContextCache, options);
}

GramParser::~GramParser() {
  delete _interpreter;
}

const atn::ATN& GramParser::getATN() const {
  return *gramParserStaticData->atn;
}

std::string GramParser::getGrammarFileName() const {
  return "Gram.g4";
}

const std::vector<std::string>& GramParser::getRuleNames() const {
  return gramParserStaticData->ruleNames;
}

const dfa::Vocabulary& GramParser::getVocabulary() const {
  return gramParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView GramParser::getSerializedATN() const {
  return gramParserStaticData->serializedATN;
}


//----------------- ProgContext ------------------------------------------------------------------

GramParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<GramParser::ExprContext *> GramParser::ProgContext::expr() {
  return getRuleContexts<GramParser::ExprContext>();
}

GramParser::ExprContext* GramParser::ProgContext::expr(size_t i) {
  return getRuleContext<GramParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> GramParser::ProgContext::NEWLINE() {
  return getTokens(GramParser::NEWLINE);
}

tree::TerminalNode* GramParser::ProgContext::NEWLINE(size_t i) {
  return getToken(GramParser::NEWLINE, i);
}


size_t GramParser::ProgContext::getRuleIndex() const {
  return GramParser::RuleProg;
}


GramParser::ProgContext* GramParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, GramParser::RuleProg);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(9);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GramParser::T__4

    || _la == GramParser::INT) {
      setState(4);
      expr(0);
      setState(5);
      match(GramParser::NEWLINE);
      setState(11);
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

//----------------- ExprContext ------------------------------------------------------------------

GramParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GramParser::ExprContext::INT() {
  return getToken(GramParser::INT, 0);
}

std::vector<GramParser::ExprContext *> GramParser::ExprContext::expr() {
  return getRuleContexts<GramParser::ExprContext>();
}

GramParser::ExprContext* GramParser::ExprContext::expr(size_t i) {
  return getRuleContext<GramParser::ExprContext>(i);
}


size_t GramParser::ExprContext::getRuleIndex() const {
  return GramParser::RuleExpr;
}



GramParser::ExprContext* GramParser::expr() {
   return expr(0);
}

GramParser::ExprContext* GramParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  GramParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  GramParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 2;
  enterRecursionRule(_localctx, 2, GramParser::RuleExpr, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(18);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GramParser::INT: {
        setState(13);
        match(GramParser::INT);
        break;
      }

      case GramParser::T__4: {
        setState(14);
        match(GramParser::T__4);
        setState(15);
        expr(0);
        setState(16);
        match(GramParser::T__5);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(28);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(26);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(20);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(21);
          _la = _input->LA(1);
          if (!(_la == GramParser::T__0

          || _la == GramParser::T__1)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(22);
          expr(5);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(23);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(24);
          _la = _input->LA(1);
          if (!(_la == GramParser::T__2

          || _la == GramParser::T__3)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(25);
          expr(4);
          break;
        }

        default:
          break;
        } 
      }
      setState(30);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool GramParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 1: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool GramParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 4);
    case 1: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

void GramParser::initialize() {
  ::antlr4::internal::call_once(gramParserOnceFlag, gramParserInitialize);
}
