#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 51
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_ATalias = 1,
  anon_sym_ATparam = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_ATreturns = 5,
  sym_tag_name = 6,
  sym_identifier = 7,
  sym_type = 8,
  sym__text = 9,
  sym__begin = 10,
  sym__end = 11,
  sym_document = 12,
  sym_description = 13,
  sym_alias_tag = 14,
  sym_param_tag = 15,
  sym_returns_tag = 16,
  sym_block_tag = 17,
  sym_inline_tag = 18,
  aux_sym_document_repeat1 = 19,
  aux_sym_description_repeat1 = 20,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_ATalias] = "@alias",
  [anon_sym_ATparam] = "@param",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_ATreturns] = "@returns",
  [sym_tag_name] = "tag_name",
  [sym_identifier] = "identifier",
  [sym_type] = "type",
  [sym__text] = "_text",
  [sym__begin] = "_begin",
  [sym__end] = "_end",
  [sym_document] = "document",
  [sym_description] = "description",
  [sym_alias_tag] = "alias_tag",
  [sym_param_tag] = "param_tag",
  [sym_returns_tag] = "returns_tag",
  [sym_block_tag] = "block_tag",
  [sym_inline_tag] = "inline_tag",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_description_repeat1] = "description_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_ATalias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATparam] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATreturns] = {
    .visible = true,
    .named = false,
  },
  [sym_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym__text] = {
    .visible = false,
    .named = true,
  },
  [sym__begin] = {
    .visible = false,
    .named = true,
  },
  [sym__end] = {
    .visible = false,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_description] = {
    .visible = true,
    .named = true,
  },
  [sym_alias_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_param_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_returns_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_block_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_tag] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_description_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(2);
      if (lookahead == '/')
        ADVANCE(4);
      if (lookahead == '@')
        ADVANCE(7);
      if (lookahead == '{')
        ADVANCE(26);
      if (lookahead == '}')
        ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(0);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      if (lookahead != '\r' &&
          lookahead != '*')
        ADVANCE(6);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(2);
      if (lookahead == '*')
        SKIP(3);
      if (lookahead == '/')
        ADVANCE(4);
      if (lookahead == '@')
        ADVANCE(7);
      if (lookahead == '{')
        ADVANCE(26);
      if (lookahead == '}')
        ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(2);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      if (lookahead != '\r')
        ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(2);
      if (lookahead == '*')
        SKIP(3);
      if (lookahead == '/')
        ADVANCE(4);
      if (lookahead == '@')
        ADVANCE(7);
      if (lookahead == '{')
        ADVANCE(26);
      if (lookahead == '}')
        ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(3);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      if (lookahead != '\r')
        ADVANCE(6);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym__end);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(6);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(6);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym__text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == 'a')
        ADVANCE(8);
      if (lookahead == 'p')
        ADVANCE(14);
      if (lookahead == 'r')
        ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l')
        ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i')
        ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a')
        ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's')
        ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_ATalias);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_tag_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r')
        ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a')
        ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'm')
        ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_ATparam);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e')
        ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't')
        ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u')
        ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r')
        ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n')
        ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's')
        ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_ATreturns);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '\n')
        SKIP(30);
      if (lookahead == '/')
        ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(29);
      END_STATE();
    case 30:
      if (lookahead == '\n')
        SKIP(30);
      if (lookahead == '*')
        SKIP(31);
      if (lookahead == '/')
        ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(30);
      END_STATE();
    case 31:
      if (lookahead == '\n')
        SKIP(30);
      if (lookahead == '*')
        SKIP(31);
      if (lookahead == '/')
        ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__begin);
      if (lookahead == '*')
        ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '\n')
        SKIP(34);
      if (lookahead == '/')
        ADVANCE(36);
      if (lookahead == '@')
        ADVANCE(7);
      if (lookahead == '{')
        ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(33);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != '}')
        ADVANCE(6);
      END_STATE();
    case 34:
      if (lookahead == '\n')
        SKIP(34);
      if (lookahead == '*')
        SKIP(35);
      if (lookahead == '/')
        ADVANCE(36);
      if (lookahead == '@')
        ADVANCE(7);
      if (lookahead == '{')
        ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(34);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '}')
        ADVANCE(6);
      END_STATE();
    case 35:
      if (lookahead == '\n')
        SKIP(34);
      if (lookahead == '*')
        SKIP(35);
      if (lookahead == '/')
        ADVANCE(36);
      if (lookahead == '@')
        ADVANCE(7);
      if (lookahead == '{')
        ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(35);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '}')
        ADVANCE(6);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__end);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(6);
      END_STATE();
    case 37:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(38);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(37);
      END_STATE();
    case 38:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(38);
      if (lookahead == '*')
        SKIP(39);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(38);
      END_STATE();
    case 39:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(38);
      if (lookahead == '*')
        SKIP(39);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(39);
      END_STATE();
    case 40:
      if (lookahead == '\n')
        SKIP(41);
      if (lookahead == '/')
        ADVANCE(36);
      if (lookahead == '@')
        ADVANCE(7);
      if (lookahead == '{')
        ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(40);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != '}')
        ADVANCE(6);
      END_STATE();
    case 41:
      if (lookahead == '\n')
        SKIP(41);
      if (lookahead == '*')
        SKIP(42);
      if (lookahead == '/')
        ADVANCE(36);
      if (lookahead == '@')
        ADVANCE(7);
      if (lookahead == '{')
        ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(41);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '}')
        ADVANCE(6);
      END_STATE();
    case 42:
      if (lookahead == '\n')
        SKIP(41);
      if (lookahead == '*')
        SKIP(42);
      if (lookahead == '/')
        ADVANCE(36);
      if (lookahead == '@')
        ADVANCE(7);
      if (lookahead == '{')
        ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(42);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '}')
        ADVANCE(6);
      END_STATE();
    case 43:
      if (lookahead == '\n')
        SKIP(44);
      if (lookahead == '/')
        ADVANCE(46);
      if (lookahead == '@')
        ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(43);
      END_STATE();
    case 44:
      if (lookahead == '\n')
        SKIP(44);
      if (lookahead == '*')
        SKIP(45);
      if (lookahead == '/')
        ADVANCE(46);
      if (lookahead == '@')
        ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(44);
      END_STATE();
    case 45:
      if (lookahead == '\n')
        SKIP(44);
      if (lookahead == '*')
        SKIP(45);
      if (lookahead == '/')
        ADVANCE(46);
      if (lookahead == '@')
        ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__end);
      END_STATE();
    case 47:
      if (lookahead == '\n')
        SKIP(48);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '}')
        ADVANCE(50);
      END_STATE();
    case 48:
      if (lookahead == '\n')
        SKIP(48);
      if (lookahead == '*')
        ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '}')
        ADVANCE(50);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_type);
      if (lookahead == '*')
        ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '}')
        ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_type);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}')
        ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_type);
      if (lookahead == '*')
        ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '}')
        ADVANCE(50);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_type);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '}')
        ADVANCE(50);
      END_STATE();
    case 53:
      if (lookahead == '\n')
        SKIP(54);
      if (lookahead == '@')
        ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(53);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(6);
      END_STATE();
    case 54:
      if (lookahead == '\n')
        SKIP(54);
      if (lookahead == '*')
        SKIP(55);
      if (lookahead == '@')
        ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(54);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(6);
      END_STATE();
    case 55:
      if (lookahead == '\n')
        SKIP(54);
      if (lookahead == '*')
        SKIP(55);
      if (lookahead == '@')
        ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(55);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(6);
      END_STATE();
    case 56:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 57:
      if (lookahead == '\n')
        SKIP(58);
      if (lookahead == '{')
        ADVANCE(26);
      if (lookahead == '}')
        ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(57);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != '@')
        ADVANCE(6);
      END_STATE();
    case 58:
      if (lookahead == '\n')
        SKIP(58);
      if (lookahead == '*')
        SKIP(59);
      if (lookahead == '{')
        ADVANCE(26);
      if (lookahead == '}')
        ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(58);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '@')
        ADVANCE(6);
      END_STATE();
    case 59:
      if (lookahead == '\n')
        SKIP(58);
      if (lookahead == '*')
        SKIP(59);
      if (lookahead == '{')
        ADVANCE(26);
      if (lookahead == '}')
        ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(59);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '@')
        ADVANCE(6);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 29},
  [2] = {.lex_state = 33},
  [3] = {.lex_state = 37},
  [4] = {.lex_state = 40},
  [5] = {.lex_state = 40},
  [6] = {.lex_state = 33},
  [7] = {.lex_state = 33},
  [8] = {.lex_state = 33},
  [9] = {.lex_state = 37},
  [10] = {.lex_state = 43},
  [11] = {.lex_state = 43},
  [12] = {.lex_state = 33},
  [13] = {.lex_state = 43},
  [14] = {.lex_state = 47},
  [15] = {.lex_state = 33},
  [16] = {.lex_state = 43},
  [17] = {.lex_state = 47},
  [18] = {.lex_state = 43},
  [19] = {.lex_state = 47},
  [20] = {.lex_state = 43},
  [21] = {.lex_state = 53},
  [22] = {.lex_state = 33},
  [23] = {.lex_state = 37},
  [24] = {.lex_state = 43},
  [25] = {.lex_state = 43},
  [26] = {.lex_state = 43},
  [27] = {.lex_state = 57},
  [28] = {.lex_state = 43},
  [29] = {.lex_state = 57},
  [30] = {.lex_state = 57},
  [31] = {.lex_state = 53},
  [32] = {.lex_state = 33},
  [33] = {.lex_state = 37},
  [34] = {.lex_state = 40},
  [35] = {.lex_state = 33},
  [36] = {.lex_state = 33},
  [37] = {.lex_state = 57},
  [38] = {.lex_state = 57},
  [39] = {.lex_state = 33},
  [40] = {.lex_state = 43},
  [41] = {.lex_state = 43},
  [42] = {.lex_state = 43},
  [43] = {.lex_state = 53},
  [44] = {.lex_state = 57},
  [45] = {.lex_state = 33},
  [46] = {.lex_state = 43},
  [47] = {.lex_state = 53},
  [48] = {.lex_state = 57},
  [49] = {.lex_state = 57},
  [50] = {.lex_state = 57},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_ATalias] = ACTIONS(3),
    [anon_sym_ATparam] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_ATreturns] = ACTIONS(3),
    [sym_tag_name] = ACTIONS(3),
    [sym_identifier] = ACTIONS(1),
    [sym__text] = ACTIONS(3),
    [sym__begin] = ACTIONS(3),
    [sym__end] = ACTIONS(3),
  },
  [1] = {
    [sym_document] = STATE(3),
    [sym__begin] = ACTIONS(5),
  },
  [2] = {
    [sym_description] = STATE(10),
    [sym_alias_tag] = STATE(11),
    [sym_param_tag] = STATE(11),
    [sym_returns_tag] = STATE(11),
    [sym_block_tag] = STATE(11),
    [aux_sym_document_repeat1] = STATE(11),
    [anon_sym_ATalias] = ACTIONS(7),
    [anon_sym_ATparam] = ACTIONS(9),
    [anon_sym_ATreturns] = ACTIONS(11),
    [sym_tag_name] = ACTIONS(13),
    [sym__text] = ACTIONS(15),
    [sym__end] = ACTIONS(17),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(19),
  },
  [4] = {
    [sym_description] = STATE(13),
    [anon_sym_ATalias] = ACTIONS(21),
    [anon_sym_ATparam] = ACTIONS(21),
    [anon_sym_ATreturns] = ACTIONS(21),
    [sym_tag_name] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
    [sym__text] = ACTIONS(15),
    [sym__end] = ACTIONS(21),
  },
  [5] = {
    [sym_description] = STATE(16),
    [anon_sym_ATalias] = ACTIONS(25),
    [anon_sym_ATparam] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_ATreturns] = ACTIONS(25),
    [sym_tag_name] = ACTIONS(25),
    [sym_identifier] = ACTIONS(29),
    [sym__text] = ACTIONS(15),
    [sym__end] = ACTIONS(25),
  },
  [6] = {
    [sym_description] = STATE(18),
    [anon_sym_ATalias] = ACTIONS(31),
    [anon_sym_ATparam] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_ATreturns] = ACTIONS(31),
    [sym_tag_name] = ACTIONS(31),
    [sym__text] = ACTIONS(15),
    [sym__end] = ACTIONS(31),
  },
  [7] = {
    [sym_description] = STATE(20),
    [anon_sym_ATalias] = ACTIONS(35),
    [anon_sym_ATparam] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_ATreturns] = ACTIONS(35),
    [sym_tag_name] = ACTIONS(35),
    [sym__text] = ACTIONS(15),
    [sym__end] = ACTIONS(35),
  },
  [8] = {
    [sym_inline_tag] = STATE(22),
    [aux_sym_description_repeat1] = STATE(22),
    [anon_sym_ATalias] = ACTIONS(39),
    [anon_sym_ATparam] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_ATreturns] = ACTIONS(39),
    [sym_tag_name] = ACTIONS(39),
    [sym__text] = ACTIONS(43),
    [sym__end] = ACTIONS(39),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(45),
  },
  [10] = {
    [sym_alias_tag] = STATE(24),
    [sym_param_tag] = STATE(24),
    [sym_returns_tag] = STATE(24),
    [sym_block_tag] = STATE(24),
    [aux_sym_document_repeat1] = STATE(24),
    [anon_sym_ATalias] = ACTIONS(7),
    [anon_sym_ATparam] = ACTIONS(9),
    [anon_sym_ATreturns] = ACTIONS(11),
    [sym_tag_name] = ACTIONS(13),
    [sym__end] = ACTIONS(47),
  },
  [11] = {
    [sym_alias_tag] = STATE(25),
    [sym_param_tag] = STATE(25),
    [sym_returns_tag] = STATE(25),
    [sym_block_tag] = STATE(25),
    [aux_sym_document_repeat1] = STATE(25),
    [anon_sym_ATalias] = ACTIONS(7),
    [anon_sym_ATparam] = ACTIONS(9),
    [anon_sym_ATreturns] = ACTIONS(11),
    [sym_tag_name] = ACTIONS(13),
    [sym__end] = ACTIONS(47),
  },
  [12] = {
    [sym_description] = STATE(26),
    [anon_sym_ATalias] = ACTIONS(49),
    [anon_sym_ATparam] = ACTIONS(49),
    [anon_sym_ATreturns] = ACTIONS(49),
    [sym_tag_name] = ACTIONS(49),
    [sym__text] = ACTIONS(15),
    [sym__end] = ACTIONS(49),
  },
  [13] = {
    [anon_sym_ATalias] = ACTIONS(49),
    [anon_sym_ATparam] = ACTIONS(49),
    [anon_sym_ATreturns] = ACTIONS(49),
    [sym_tag_name] = ACTIONS(49),
    [sym__end] = ACTIONS(51),
  },
  [14] = {
    [sym_type] = ACTIONS(53),
  },
  [15] = {
    [sym_description] = STATE(28),
    [anon_sym_ATalias] = ACTIONS(55),
    [anon_sym_ATparam] = ACTIONS(55),
    [anon_sym_ATreturns] = ACTIONS(55),
    [sym_tag_name] = ACTIONS(55),
    [sym__text] = ACTIONS(15),
    [sym__end] = ACTIONS(55),
  },
  [16] = {
    [anon_sym_ATalias] = ACTIONS(55),
    [anon_sym_ATparam] = ACTIONS(55),
    [anon_sym_ATreturns] = ACTIONS(55),
    [sym_tag_name] = ACTIONS(55),
    [sym__end] = ACTIONS(57),
  },
  [17] = {
    [sym_type] = ACTIONS(59),
  },
  [18] = {
    [anon_sym_ATalias] = ACTIONS(61),
    [anon_sym_ATparam] = ACTIONS(61),
    [anon_sym_ATreturns] = ACTIONS(61),
    [sym_tag_name] = ACTIONS(61),
    [sym__end] = ACTIONS(63),
  },
  [19] = {
    [sym_type] = ACTIONS(65),
  },
  [20] = {
    [anon_sym_ATalias] = ACTIONS(67),
    [anon_sym_ATparam] = ACTIONS(67),
    [anon_sym_ATreturns] = ACTIONS(67),
    [sym_tag_name] = ACTIONS(67),
    [sym__end] = ACTIONS(69),
  },
  [21] = {
    [sym_tag_name] = ACTIONS(71),
  },
  [22] = {
    [sym_inline_tag] = STATE(32),
    [aux_sym_description_repeat1] = STATE(32),
    [anon_sym_ATalias] = ACTIONS(73),
    [anon_sym_ATparam] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_ATreturns] = ACTIONS(73),
    [sym_tag_name] = ACTIONS(73),
    [sym__text] = ACTIONS(75),
    [sym__end] = ACTIONS(73),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(77),
  },
  [24] = {
    [sym_alias_tag] = STATE(25),
    [sym_param_tag] = STATE(25),
    [sym_returns_tag] = STATE(25),
    [sym_block_tag] = STATE(25),
    [aux_sym_document_repeat1] = STATE(25),
    [anon_sym_ATalias] = ACTIONS(7),
    [anon_sym_ATparam] = ACTIONS(9),
    [anon_sym_ATreturns] = ACTIONS(11),
    [sym_tag_name] = ACTIONS(13),
    [sym__end] = ACTIONS(79),
  },
  [25] = {
    [sym_alias_tag] = STATE(25),
    [sym_param_tag] = STATE(25),
    [sym_returns_tag] = STATE(25),
    [sym_block_tag] = STATE(25),
    [aux_sym_document_repeat1] = STATE(25),
    [anon_sym_ATalias] = ACTIONS(81),
    [anon_sym_ATparam] = ACTIONS(84),
    [anon_sym_ATreturns] = ACTIONS(87),
    [sym_tag_name] = ACTIONS(90),
    [sym__end] = ACTIONS(93),
  },
  [26] = {
    [anon_sym_ATalias] = ACTIONS(95),
    [anon_sym_ATparam] = ACTIONS(95),
    [anon_sym_ATreturns] = ACTIONS(95),
    [sym_tag_name] = ACTIONS(95),
    [sym__end] = ACTIONS(97),
  },
  [27] = {
    [anon_sym_RBRACE] = ACTIONS(99),
  },
  [28] = {
    [anon_sym_ATalias] = ACTIONS(101),
    [anon_sym_ATparam] = ACTIONS(101),
    [anon_sym_ATreturns] = ACTIONS(101),
    [sym_tag_name] = ACTIONS(101),
    [sym__end] = ACTIONS(103),
  },
  [29] = {
    [anon_sym_RBRACE] = ACTIONS(105),
  },
  [30] = {
    [anon_sym_RBRACE] = ACTIONS(107),
  },
  [31] = {
    [sym_description] = STATE(38),
    [sym__text] = ACTIONS(109),
  },
  [32] = {
    [sym_inline_tag] = STATE(32),
    [aux_sym_description_repeat1] = STATE(32),
    [anon_sym_ATalias] = ACTIONS(111),
    [anon_sym_ATparam] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(113),
    [anon_sym_ATreturns] = ACTIONS(111),
    [sym_tag_name] = ACTIONS(111),
    [sym__text] = ACTIONS(116),
    [sym__end] = ACTIONS(111),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(119),
  },
  [34] = {
    [sym_description] = STATE(40),
    [anon_sym_ATalias] = ACTIONS(121),
    [anon_sym_ATparam] = ACTIONS(121),
    [anon_sym_ATreturns] = ACTIONS(121),
    [sym_tag_name] = ACTIONS(121),
    [sym_identifier] = ACTIONS(123),
    [sym__text] = ACTIONS(15),
    [sym__end] = ACTIONS(121),
  },
  [35] = {
    [sym_description] = STATE(41),
    [anon_sym_ATalias] = ACTIONS(125),
    [anon_sym_ATparam] = ACTIONS(125),
    [anon_sym_ATreturns] = ACTIONS(125),
    [sym_tag_name] = ACTIONS(125),
    [sym__text] = ACTIONS(15),
    [sym__end] = ACTIONS(125),
  },
  [36] = {
    [sym_description] = STATE(42),
    [anon_sym_ATalias] = ACTIONS(127),
    [anon_sym_ATparam] = ACTIONS(127),
    [anon_sym_ATreturns] = ACTIONS(127),
    [sym_tag_name] = ACTIONS(127),
    [sym__text] = ACTIONS(15),
    [sym__end] = ACTIONS(127),
  },
  [37] = {
    [sym_inline_tag] = STATE(44),
    [aux_sym_description_repeat1] = STATE(44),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_RBRACE] = ACTIONS(131),
    [sym__text] = ACTIONS(133),
  },
  [38] = {
    [anon_sym_RBRACE] = ACTIONS(135),
  },
  [39] = {
    [sym_description] = STATE(46),
    [anon_sym_ATalias] = ACTIONS(137),
    [anon_sym_ATparam] = ACTIONS(137),
    [anon_sym_ATreturns] = ACTIONS(137),
    [sym_tag_name] = ACTIONS(137),
    [sym__text] = ACTIONS(15),
    [sym__end] = ACTIONS(137),
  },
  [40] = {
    [anon_sym_ATalias] = ACTIONS(137),
    [anon_sym_ATparam] = ACTIONS(137),
    [anon_sym_ATreturns] = ACTIONS(137),
    [sym_tag_name] = ACTIONS(137),
    [sym__end] = ACTIONS(139),
  },
  [41] = {
    [anon_sym_ATalias] = ACTIONS(141),
    [anon_sym_ATparam] = ACTIONS(141),
    [anon_sym_ATreturns] = ACTIONS(141),
    [sym_tag_name] = ACTIONS(141),
    [sym__end] = ACTIONS(143),
  },
  [42] = {
    [anon_sym_ATalias] = ACTIONS(145),
    [anon_sym_ATparam] = ACTIONS(145),
    [anon_sym_ATreturns] = ACTIONS(145),
    [sym_tag_name] = ACTIONS(145),
    [sym__end] = ACTIONS(147),
  },
  [43] = {
    [sym_tag_name] = ACTIONS(149),
  },
  [44] = {
    [sym_inline_tag] = STATE(48),
    [aux_sym_description_repeat1] = STATE(48),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_RBRACE] = ACTIONS(151),
    [sym__text] = ACTIONS(153),
  },
  [45] = {
    [anon_sym_ATalias] = ACTIONS(155),
    [anon_sym_ATparam] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_ATreturns] = ACTIONS(155),
    [sym_tag_name] = ACTIONS(155),
    [sym__text] = ACTIONS(155),
    [sym__end] = ACTIONS(155),
  },
  [46] = {
    [anon_sym_ATalias] = ACTIONS(159),
    [anon_sym_ATparam] = ACTIONS(159),
    [anon_sym_ATreturns] = ACTIONS(159),
    [sym_tag_name] = ACTIONS(159),
    [sym__end] = ACTIONS(161),
  },
  [47] = {
    [sym_description] = STATE(49),
    [sym__text] = ACTIONS(109),
  },
  [48] = {
    [sym_inline_tag] = STATE(48),
    [aux_sym_description_repeat1] = STATE(48),
    [anon_sym_LBRACE] = ACTIONS(163),
    [anon_sym_RBRACE] = ACTIONS(166),
    [sym__text] = ACTIONS(168),
  },
  [49] = {
    [anon_sym_RBRACE] = ACTIONS(171),
  },
  [50] = {
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_RBRACE] = ACTIONS(157),
    [sym__text] = ACTIONS(157),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = false}, SHIFT(4),
  [9] = {.count = 1, .reusable = false}, SHIFT(5),
  [11] = {.count = 1, .reusable = false}, SHIFT(6),
  [13] = {.count = 1, .reusable = false}, SHIFT(7),
  [15] = {.count = 1, .reusable = false}, SHIFT(8),
  [17] = {.count = 1, .reusable = false}, SHIFT(9),
  [19] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [21] = {.count = 1, .reusable = false}, REDUCE(sym_alias_tag, 1),
  [23] = {.count = 1, .reusable = true}, SHIFT(12),
  [25] = {.count = 1, .reusable = false}, REDUCE(sym_param_tag, 1),
  [27] = {.count = 1, .reusable = true}, SHIFT(14),
  [29] = {.count = 1, .reusable = true}, SHIFT(15),
  [31] = {.count = 1, .reusable = false}, REDUCE(sym_returns_tag, 1),
  [33] = {.count = 1, .reusable = true}, SHIFT(17),
  [35] = {.count = 1, .reusable = false}, REDUCE(sym_block_tag, 1),
  [37] = {.count = 1, .reusable = true}, SHIFT(19),
  [39] = {.count = 1, .reusable = false}, REDUCE(sym_description, 1),
  [41] = {.count = 1, .reusable = true}, SHIFT(21),
  [43] = {.count = 1, .reusable = false}, SHIFT(22),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_document, 2),
  [47] = {.count = 1, .reusable = true}, SHIFT(23),
  [49] = {.count = 1, .reusable = false}, REDUCE(sym_alias_tag, 2),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_alias_tag, 2),
  [53] = {.count = 1, .reusable = true}, SHIFT(27),
  [55] = {.count = 1, .reusable = false}, REDUCE(sym_param_tag, 2),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym_param_tag, 2),
  [59] = {.count = 1, .reusable = true}, SHIFT(29),
  [61] = {.count = 1, .reusable = false}, REDUCE(sym_returns_tag, 2),
  [63] = {.count = 1, .reusable = true}, REDUCE(sym_returns_tag, 2),
  [65] = {.count = 1, .reusable = true}, SHIFT(30),
  [67] = {.count = 1, .reusable = false}, REDUCE(sym_block_tag, 2),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_block_tag, 2),
  [71] = {.count = 1, .reusable = true}, SHIFT(31),
  [73] = {.count = 1, .reusable = false}, REDUCE(sym_description, 2),
  [75] = {.count = 1, .reusable = false}, SHIFT(32),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_document, 3),
  [79] = {.count = 1, .reusable = true}, SHIFT(33),
  [81] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [84] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [87] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(6),
  [90] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(7),
  [93] = {.count = 1, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2),
  [95] = {.count = 1, .reusable = false}, REDUCE(sym_alias_tag, 3),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym_alias_tag, 3),
  [99] = {.count = 1, .reusable = true}, SHIFT(34),
  [101] = {.count = 1, .reusable = false}, REDUCE(sym_param_tag, 3),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym_param_tag, 3),
  [105] = {.count = 1, .reusable = true}, SHIFT(35),
  [107] = {.count = 1, .reusable = true}, SHIFT(36),
  [109] = {.count = 1, .reusable = true}, SHIFT(37),
  [111] = {.count = 1, .reusable = false}, REDUCE(aux_sym_description_repeat1, 2),
  [113] = {.count = 2, .reusable = true}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(21),
  [116] = {.count = 2, .reusable = false}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(32),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_document, 4),
  [121] = {.count = 1, .reusable = false}, REDUCE(sym_param_tag, 4),
  [123] = {.count = 1, .reusable = true}, SHIFT(39),
  [125] = {.count = 1, .reusable = false}, REDUCE(sym_returns_tag, 4),
  [127] = {.count = 1, .reusable = false}, REDUCE(sym_block_tag, 4),
  [129] = {.count = 1, .reusable = true}, SHIFT(43),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym_description, 1),
  [133] = {.count = 1, .reusable = true}, SHIFT(44),
  [135] = {.count = 1, .reusable = true}, SHIFT(45),
  [137] = {.count = 1, .reusable = false}, REDUCE(sym_param_tag, 5),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_param_tag, 5),
  [141] = {.count = 1, .reusable = false}, REDUCE(sym_returns_tag, 5),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_returns_tag, 5),
  [145] = {.count = 1, .reusable = false}, REDUCE(sym_block_tag, 5),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym_block_tag, 5),
  [149] = {.count = 1, .reusable = true}, SHIFT(47),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym_description, 2),
  [153] = {.count = 1, .reusable = true}, SHIFT(48),
  [155] = {.count = 1, .reusable = false}, REDUCE(sym_inline_tag, 4),
  [157] = {.count = 1, .reusable = true}, REDUCE(sym_inline_tag, 4),
  [159] = {.count = 1, .reusable = false}, REDUCE(sym_param_tag, 6),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_param_tag, 6),
  [163] = {.count = 2, .reusable = true}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(43),
  [166] = {.count = 1, .reusable = true}, REDUCE(aux_sym_description_repeat1, 2),
  [168] = {.count = 2, .reusable = true}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(48),
  [171] = {.count = 1, .reusable = true}, SHIFT(50),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_jsdoc() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
