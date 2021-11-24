
// Generated from Gram.g4 by ANTLR 4.9.3



#include "GramParser.h"


using namespace antlrcpp;
using namespace antlr4;

GramParser::GramParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

GramParser::~GramParser() {
  delete _interpreter;
}

std::string GramParser::getGrammarFileName() const {
  return "Gram.g4";
}

const std::vector<std::string>& GramParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& GramParser::getVocabulary() const {
  return _vocabulary;
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

// Static vars and initialization.
std::vector<dfa::DFA> GramParser::_decisionToDFA;
atn::PredictionContextCache GramParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN GramParser::_atn;
std::vector<uint16_t> GramParser::_serializedATN;

std::vector<std::string> GramParser::_ruleNames = {
  "prog", "expr"
};

std::vector<std::string> GramParser::_literalNames = {
  "", "'*'", "'/'", "'+'", "'-'", "'('", "')'"
};

std::vector<std::string> GramParser::_symbolicNames = {
  "", "", "", "", "", "", "", "NEWLINE", "INT"
};

dfa::Vocabulary GramParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> GramParser::_tokenNames;

GramParser::Initializer::Initializer() {
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

  static const uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0xa, 0x22, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x3, 0x2, 
       0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0xa, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 
       0xd, 0xb, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x5, 0x3, 0x15, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x1d, 0xa, 0x3, 0xc, 0x3, 
       0xe, 0x3, 0x20, 0xb, 0x3, 0x3, 0x3, 0x2, 0x3, 0x4, 0x4, 0x2, 0x4, 
       0x2, 0x4, 0x3, 0x2, 0x3, 0x4, 0x3, 0x2, 0x5, 0x6, 0x2, 0x23, 0x2, 
       0xb, 0x3, 0x2, 0x2, 0x2, 0x4, 0x14, 0x3, 0x2, 0x2, 0x2, 0x6, 0x7, 
       0x5, 0x4, 0x3, 0x2, 0x7, 0x8, 0x7, 0x9, 0x2, 0x2, 0x8, 0xa, 0x3, 
       0x2, 0x2, 0x2, 0x9, 0x6, 0x3, 0x2, 0x2, 0x2, 0xa, 0xd, 0x3, 0x2, 
       0x2, 0x2, 0xb, 0x9, 0x3, 0x2, 0x2, 0x2, 0xb, 0xc, 0x3, 0x2, 0x2, 
       0x2, 0xc, 0x3, 0x3, 0x2, 0x2, 0x2, 0xd, 0xb, 0x3, 0x2, 0x2, 0x2, 
       0xe, 0xf, 0x8, 0x3, 0x1, 0x2, 0xf, 0x15, 0x7, 0xa, 0x2, 0x2, 0x10, 
       0x11, 0x7, 0x7, 0x2, 0x2, 0x11, 0x12, 0x5, 0x4, 0x3, 0x2, 0x12, 0x13, 
       0x7, 0x8, 0x2, 0x2, 0x13, 0x15, 0x3, 0x2, 0x2, 0x2, 0x14, 0xe, 0x3, 
       0x2, 0x2, 0x2, 0x14, 0x10, 0x3, 0x2, 0x2, 0x2, 0x15, 0x1e, 0x3, 0x2, 
       0x2, 0x2, 0x16, 0x17, 0xc, 0x6, 0x2, 0x2, 0x17, 0x18, 0x9, 0x2, 0x2, 
       0x2, 0x18, 0x1d, 0x5, 0x4, 0x3, 0x7, 0x19, 0x1a, 0xc, 0x5, 0x2, 0x2, 
       0x1a, 0x1b, 0x9, 0x3, 0x2, 0x2, 0x1b, 0x1d, 0x5, 0x4, 0x3, 0x6, 0x1c, 
       0x16, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x19, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x20, 
       0x3, 0x2, 0x2, 0x2, 0x1e, 0x1c, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x1f, 0x3, 
       0x2, 0x2, 0x2, 0x1f, 0x5, 0x3, 0x2, 0x2, 0x2, 0x20, 0x1e, 0x3, 0x2, 
       0x2, 0x2, 0x6, 0xb, 0x14, 0x1c, 0x1e, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

GramParser::Initializer GramParser::_init;
