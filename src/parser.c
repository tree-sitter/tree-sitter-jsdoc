#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 54
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  aux_sym__inline_tag_false_positive_token1 = 3,
  sym_tag_name_with_argument = 4,
  sym_tag_name_with_type = 5,
  sym_tag_name = 6,
  anon_sym_COLON = 7,
  anon_sym_SLASH = 8,
  anon_sym_DOT = 9,
  anon_sym_POUND = 10,
  anon_sym_TILDE = 11,
  anon_sym_LBRACK = 12,
  anon_sym_RBRACK = 13,
  sym_identifier = 14,
  sym__text = 15,
  sym__begin = 16,
  sym__end = 17,
  sym_type = 18,
  sym_document = 19,
  sym_description = 20,
  sym_tag = 21,
  sym_inline_tag = 22,
  sym__inline_tag_false_positive = 23,
  sym__expression = 24,
  sym_qualified_expression = 25,
  sym_path_expression = 26,
  sym_member_expression = 27,
  sym_optional_identifier = 28,
  aux_sym_document_repeat1 = 29,
  aux_sym_description_repeat1 = 30,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [aux_sym__inline_tag_false_positive_token1] = "_inline_tag_false_positive_token1",
  [sym_tag_name_with_argument] = "tag_name",
  [sym_tag_name_with_type] = "tag_name",
  [sym_tag_name] = "tag_name",
  [anon_sym_COLON] = ":",
  [anon_sym_SLASH] = "/",
  [anon_sym_DOT] = ".",
  [anon_sym_POUND] = "#",
  [anon_sym_TILDE] = "~",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_identifier] = "identifier",
  [sym__text] = "_text",
  [sym__begin] = "_begin",
  [sym__end] = "_end",
  [sym_type] = "type",
  [sym_document] = "document",
  [sym_description] = "description",
  [sym_tag] = "tag",
  [sym_inline_tag] = "inline_tag",
  [sym__inline_tag_false_positive] = "_inline_tag_false_positive",
  [sym__expression] = "_expression",
  [sym_qualified_expression] = "qualified_expression",
  [sym_path_expression] = "path_expression",
  [sym_member_expression] = "member_expression",
  [sym_optional_identifier] = "optional_identifier",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_description_repeat1] = "description_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym__inline_tag_false_positive_token1] = aux_sym__inline_tag_false_positive_token1,
  [sym_tag_name_with_argument] = sym_tag_name,
  [sym_tag_name_with_type] = sym_tag_name,
  [sym_tag_name] = sym_tag_name,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_identifier] = sym_identifier,
  [sym__text] = sym__text,
  [sym__begin] = sym__begin,
  [sym__end] = sym__end,
  [sym_type] = sym_type,
  [sym_document] = sym_document,
  [sym_description] = sym_description,
  [sym_tag] = sym_tag,
  [sym_inline_tag] = sym_inline_tag,
  [sym__inline_tag_false_positive] = sym__inline_tag_false_positive,
  [sym__expression] = sym__expression,
  [sym_qualified_expression] = sym_qualified_expression,
  [sym_path_expression] = sym_path_expression,
  [sym_member_expression] = sym_member_expression,
  [sym_optional_identifier] = sym_optional_identifier,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_description_repeat1] = aux_sym_description_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__inline_tag_false_positive_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_tag_name_with_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_name_with_type] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
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
  [sym_type] = {
    .visible = true,
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
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_tag] = {
    .visible = true,
    .named = true,
  },
  [sym__inline_tag_false_positive] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_qualified_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_path_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_member_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_optional_identifier] = {
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

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 5,
  [25] = 7,
  [26] = 26,
  [27] = 27,
  [28] = 9,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 23,
  [35] = 18,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 36,
  [40] = 37,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 41,
  [53] = 53,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(20);
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '#') ADVANCE(130);
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == '/') ADVANCE(128);
      if (lookahead == ':') ADVANCE(126);
      if (lookahead == '@') ADVANCE(16);
      if (lookahead == '[') ADVANCE(132);
      if (lookahead == ']') ADVANCE(133);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '}') ADVANCE(22);
      if (lookahead == '~') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(137);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == '*') SKIP(1)
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == ']') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == ']') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') SKIP(4)
      if (lookahead == '*') SKIP(3)
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '@') ADVANCE(16);
      if (lookahead == '[') ADVANCE(132);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(137);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '@') ADVANCE(16);
      if (lookahead == '[') ADVANCE(132);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '}') ADVANCE(137);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\r') SKIP(6)
      if (lookahead == '#') ADVANCE(130);
      if (lookahead == '*') SKIP(5)
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == ':') ADVANCE(126);
      if (lookahead == '@') ADVANCE(16);
      if (lookahead == '~') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(137);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '#') ADVANCE(130);
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == ':') ADVANCE(126);
      if (lookahead == '@') ADVANCE(16);
      if (lookahead == '~') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(137);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '#') ADVANCE(130);
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == '/') ADVANCE(127);
      if (lookahead == ':') ADVANCE(126);
      if (lookahead == '@') ADVANCE(16);
      if (lookahead == '~') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(137);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '\r') SKIP(9)
      if (lookahead == '*') SKIP(8)
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '@') ADVANCE(16);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '}') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0) ADVANCE(137);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '@') ADVANCE(16);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '}') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(137);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '\r') SKIP(11)
      if (lookahead == '#') ADVANCE(130);
      if (lookahead == '*') SKIP(10)
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '@') ADVANCE(16);
      if (lookahead == '~') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(137);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '#') ADVANCE(130);
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '@') ADVANCE(16);
      if (lookahead == '~') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(137);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '\r') SKIP(13)
      if (lookahead == '*') SKIP(12)
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '}') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12)
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(137);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '}') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '@') ADVANCE(137);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(25);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == 'b') ADVANCE(85);
      if (lookahead == 'c') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == 'f') ADVANCE(65);
      if (lookahead == 'm') ADVANCE(63);
      if (lookahead == 'n') ADVANCE(33);
      if (lookahead == 'p') ADVANCE(37);
      if (lookahead == 'r') ADVANCE(49);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == 't') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 17:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 18:
      if (eof) ADVANCE(20);
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '\r') SKIP(19)
      if (lookahead == '#') ADVANCE(130);
      if (lookahead == '*') SKIP(18)
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == ':') ADVANCE(126);
      if (lookahead == '@') ADVANCE(16);
      if (lookahead == '[') ADVANCE(132);
      if (lookahead == ']') ADVANCE(133);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '}') ADVANCE(22);
      if (lookahead == '~') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(18)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      if (lookahead != 0) ADVANCE(137);
      END_STATE();
    case 19:
      if (eof) ADVANCE(20);
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '#') ADVANCE(130);
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == ':') ADVANCE(126);
      if (lookahead == '@') ADVANCE(16);
      if (lookahead == '[') ADVANCE(132);
      if (lookahead == ']') ADVANCE(133);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '}') ADVANCE(22);
      if (lookahead == '~') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(137);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym__inline_tag_false_positive_token1);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '\r') ADVANCE(24);
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '}') ADVANCE(25);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym__inline_tag_false_positive_token1);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '}') ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym__inline_tag_false_positive_token1);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '}') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_tag_name_with_argument);
      if (lookahead == 'e') ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_tag_name_with_argument);
      if (lookahead == 's') ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_tag_name_with_argument);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_tag_name_with_type);
      if (lookahead == 'd') ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_tag_name_with_type);
      if (lookahead == 's') ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_tag_name_with_type);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(105);
      if (lookahead == 'r') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'b') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(44);
      if (lookahead == 'l') ADVANCE(66);
      if (lookahead == 'p') ADVANCE(64);
      if (lookahead == 'u') ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'd') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'g') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'h') ADVANCE(98);
      if (lookahead == 'y') ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(100);
      if (lookahead == 'u') ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'k') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'm') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'm') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'm') ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(89);
      if (lookahead == 't') ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'v') ADVANCE(56);
      if (lookahead == 'x') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'w') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'w') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'x') ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_tag_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(138);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*') ADVANCE(136);
      if (lookahead == '/') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(15);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '/') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(135);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__begin);
      if (lookahead == '*') ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__end);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__end);
      if (lookahead == '*') ADVANCE(138);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 2},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 11},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 11},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 11},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 13},
  [25] = {.lex_state = 13},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 13},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 13},
  [35] = {.lex_state = 13},
  [36] = {.lex_state = 13},
  [37] = {.lex_state = 14},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 13},
  [40] = {.lex_state = 14},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0, .external_lex_state = 1},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0, .external_lex_state = 1},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
};

enum {
  ts_external_token_type = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_type] = sym_type,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_type] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_tag_name_with_argument] = ACTIONS(1),
    [sym_tag_name_with_type] = ACTIONS(1),
    [sym_tag_name] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym__text] = ACTIONS(1),
    [sym__begin] = ACTIONS(1),
    [sym__end] = ACTIONS(1),
    [sym_type] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(51),
    [sym__begin] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym__text,
    ACTIONS(15), 1,
      sym__end,
    STATE(30), 1,
      sym_description,
    ACTIONS(7), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
    STATE(10), 5,
      sym__expression,
      sym_qualified_expression,
      sym_path_expression,
      sym_member_expression,
      sym_optional_identifier,
  [31] = 7,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym__text,
    ACTIONS(19), 1,
      sym__end,
    STATE(33), 1,
      sym_description,
    ACTIONS(17), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
    STATE(6), 5,
      sym__expression,
      sym_qualified_expression,
      sym_path_expression,
      sym_member_expression,
      sym_optional_identifier,
  [59] = 4,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(25), 1,
      anon_sym_SLASH,
    ACTIONS(27), 3,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
    ACTIONS(21), 5,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
      sym__text,
      sym__end,
  [78] = 5,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym__text,
    ACTIONS(35), 1,
      sym__end,
    ACTIONS(31), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
    STATE(9), 3,
      sym_inline_tag,
      sym__inline_tag_false_positive,
      aux_sym_description_repeat1,
  [98] = 5,
    ACTIONS(13), 1,
      sym__text,
    ACTIONS(41), 1,
      sym__end,
    STATE(32), 1,
      sym_description,
    ACTIONS(37), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
    ACTIONS(39), 3,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
  [118] = 5,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(48), 1,
      sym__text,
    ACTIONS(51), 1,
      sym__end,
    ACTIONS(46), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
    STATE(7), 3,
      sym_inline_tag,
      sym__inline_tag_false_positive,
      aux_sym_description_repeat1,
  [138] = 3,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(53), 4,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
      sym__text,
    ACTIONS(55), 4,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__end,
  [154] = 5,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      sym__text,
    ACTIONS(61), 1,
      sym__end,
    ACTIONS(57), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
    STATE(7), 3,
      sym_inline_tag,
      sym__inline_tag_false_positive,
      aux_sym_description_repeat1,
  [174] = 5,
    ACTIONS(13), 1,
      sym__text,
    ACTIONS(65), 1,
      sym__end,
    STATE(31), 1,
      sym_description,
    ACTIONS(39), 3,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
    ACTIONS(63), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
  [194] = 2,
    ACTIONS(67), 4,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
      sym__text,
    ACTIONS(69), 4,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__end,
  [207] = 7,
    ACTIONS(13), 1,
      sym__text,
    ACTIONS(71), 1,
      sym_tag_name_with_argument,
    ACTIONS(73), 1,
      sym_tag_name_with_type,
    ACTIONS(75), 1,
      sym_tag_name,
    ACTIONS(77), 1,
      sym__end,
    STATE(27), 1,
      sym_description,
    STATE(26), 2,
      sym_tag,
      aux_sym_document_repeat1,
  [230] = 2,
    ACTIONS(79), 4,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
      sym__text,
    ACTIONS(81), 4,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__end,
  [243] = 2,
    ACTIONS(83), 4,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
      sym__text,
    ACTIONS(85), 4,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__end,
  [256] = 2,
    ACTIONS(53), 4,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
      sym__text,
    ACTIONS(55), 4,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__end,
  [269] = 3,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      sym_identifier,
    STATE(13), 5,
      sym__expression,
      sym_qualified_expression,
      sym_path_expression,
      sym_member_expression,
      sym_optional_identifier,
  [283] = 5,
    ACTIONS(13), 1,
      sym__text,
    ACTIONS(15), 1,
      sym__end,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    STATE(30), 1,
      sym_description,
    ACTIONS(7), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
  [301] = 3,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    ACTIONS(89), 2,
      anon_sym_LBRACE,
      sym__end,
    ACTIONS(93), 4,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
      sym__text,
  [315] = 2,
    ACTIONS(95), 2,
      anon_sym_LBRACE,
      sym__end,
    ACTIONS(97), 4,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
      sym__text,
  [326] = 4,
    ACTIONS(13), 1,
      sym__text,
    ACTIONS(19), 1,
      sym__end,
    STATE(33), 1,
      sym_description,
    ACTIONS(17), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
  [341] = 5,
    ACTIONS(71), 1,
      sym_tag_name_with_argument,
    ACTIONS(73), 1,
      sym_tag_name_with_type,
    ACTIONS(75), 1,
      sym_tag_name,
    ACTIONS(99), 1,
      sym__end,
    STATE(22), 2,
      sym_tag,
      aux_sym_document_repeat1,
  [358] = 5,
    ACTIONS(101), 1,
      sym_tag_name_with_argument,
    ACTIONS(104), 1,
      sym_tag_name_with_type,
    ACTIONS(107), 1,
      sym_tag_name,
    ACTIONS(110), 1,
      sym__end,
    STATE(22), 2,
      sym_tag,
      aux_sym_document_repeat1,
  [375] = 2,
    ACTIONS(112), 2,
      anon_sym_LBRACE,
      sym__end,
    ACTIONS(114), 4,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
      sym__text,
  [386] = 4,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    ACTIONS(118), 1,
      sym__text,
    STATE(28), 3,
      sym_inline_tag,
      sym__inline_tag_false_positive,
      aux_sym_description_repeat1,
  [401] = 4,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(123), 1,
      sym__text,
    STATE(25), 3,
      sym_inline_tag,
      sym__inline_tag_false_positive,
      aux_sym_description_repeat1,
  [416] = 5,
    ACTIONS(71), 1,
      sym_tag_name_with_argument,
    ACTIONS(73), 1,
      sym_tag_name_with_type,
    ACTIONS(75), 1,
      sym_tag_name,
    ACTIONS(126), 1,
      sym__end,
    STATE(22), 2,
      sym_tag,
      aux_sym_document_repeat1,
  [433] = 5,
    ACTIONS(71), 1,
      sym_tag_name_with_argument,
    ACTIONS(73), 1,
      sym_tag_name_with_type,
    ACTIONS(75), 1,
      sym_tag_name,
    ACTIONS(126), 1,
      sym__end,
    STATE(21), 2,
      sym_tag,
      aux_sym_document_repeat1,
  [450] = 4,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    ACTIONS(128), 1,
      sym__text,
    STATE(25), 3,
      sym_inline_tag,
      sym__inline_tag_false_positive,
      aux_sym_description_repeat1,
  [465] = 4,
    ACTIONS(13), 1,
      sym__text,
    ACTIONS(15), 1,
      sym__end,
    STATE(30), 1,
      sym_description,
    ACTIONS(7), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
  [480] = 2,
    ACTIONS(65), 1,
      sym__end,
    ACTIONS(63), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
  [489] = 2,
    ACTIONS(132), 1,
      sym__end,
    ACTIONS(130), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
  [498] = 2,
    ACTIONS(136), 1,
      sym__end,
    ACTIONS(134), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
  [507] = 2,
    ACTIONS(41), 1,
      sym__end,
    ACTIONS(37), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
  [516] = 1,
    ACTIONS(112), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__text,
  [522] = 1,
    ACTIONS(89), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__text,
  [528] = 2,
    ACTIONS(138), 1,
      sym__text,
    STATE(52), 1,
      sym_description,
  [535] = 2,
    ACTIONS(140), 1,
      aux_sym__inline_tag_false_positive_token1,
    ACTIONS(142), 1,
      sym_tag_name,
  [542] = 2,
    ACTIONS(144), 1,
      sym_identifier,
    STATE(15), 1,
      sym_qualified_expression,
  [549] = 2,
    ACTIONS(138), 1,
      sym__text,
    STATE(41), 1,
      sym_description,
  [556] = 2,
    ACTIONS(146), 1,
      aux_sym__inline_tag_false_positive_token1,
    ACTIONS(148), 1,
      sym_tag_name,
  [563] = 1,
    ACTIONS(150), 1,
      anon_sym_RBRACE,
  [567] = 1,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
  [571] = 1,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
  [575] = 1,
    ACTIONS(156), 1,
      sym_type,
  [579] = 1,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
  [583] = 1,
    ACTIONS(160), 1,
      sym_identifier,
  [587] = 1,
    ACTIONS(162), 1,
      sym_type,
  [591] = 1,
    ACTIONS(164), 1,
      anon_sym_RBRACK,
  [595] = 1,
    ACTIONS(166), 1,
      ts_builtin_sym_end,
  [599] = 1,
    ACTIONS(168), 1,
      sym_identifier,
  [603] = 1,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
  [607] = 1,
    ACTIONS(172), 1,
      anon_sym_RBRACE,
  [611] = 1,
    ACTIONS(174), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 59,
  [SMALL_STATE(5)] = 78,
  [SMALL_STATE(6)] = 98,
  [SMALL_STATE(7)] = 118,
  [SMALL_STATE(8)] = 138,
  [SMALL_STATE(9)] = 154,
  [SMALL_STATE(10)] = 174,
  [SMALL_STATE(11)] = 194,
  [SMALL_STATE(12)] = 207,
  [SMALL_STATE(13)] = 230,
  [SMALL_STATE(14)] = 243,
  [SMALL_STATE(15)] = 256,
  [SMALL_STATE(16)] = 269,
  [SMALL_STATE(17)] = 283,
  [SMALL_STATE(18)] = 301,
  [SMALL_STATE(19)] = 315,
  [SMALL_STATE(20)] = 326,
  [SMALL_STATE(21)] = 341,
  [SMALL_STATE(22)] = 358,
  [SMALL_STATE(23)] = 375,
  [SMALL_STATE(24)] = 386,
  [SMALL_STATE(25)] = 401,
  [SMALL_STATE(26)] = 416,
  [SMALL_STATE(27)] = 433,
  [SMALL_STATE(28)] = 450,
  [SMALL_STATE(29)] = 465,
  [SMALL_STATE(30)] = 480,
  [SMALL_STATE(31)] = 489,
  [SMALL_STATE(32)] = 498,
  [SMALL_STATE(33)] = 507,
  [SMALL_STATE(34)] = 516,
  [SMALL_STATE(35)] = 522,
  [SMALL_STATE(36)] = 528,
  [SMALL_STATE(37)] = 535,
  [SMALL_STATE(38)] = 542,
  [SMALL_STATE(39)] = 549,
  [SMALL_STATE(40)] = 556,
  [SMALL_STATE(41)] = 563,
  [SMALL_STATE(42)] = 567,
  [SMALL_STATE(43)] = 571,
  [SMALL_STATE(44)] = 575,
  [SMALL_STATE(45)] = 579,
  [SMALL_STATE(46)] = 583,
  [SMALL_STATE(47)] = 587,
  [SMALL_STATE(48)] = 591,
  [SMALL_STATE(49)] = 595,
  [SMALL_STATE(50)] = 599,
  [SMALL_STATE(51)] = 603,
  [SMALL_STATE(52)] = 607,
  [SMALL_STATE(53)] = 611,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [7] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(40),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(7),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_expression, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_expression, 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optional_identifier, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_identifier, 3),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_expression, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_expression, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_expression, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_expression, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_tag_false_positive, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_tag_false_positive, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_tag_false_positive, 3),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_tag_false_positive, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(17),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(29),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 4),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 4),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(37),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(25),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 6),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 6),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 4),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [170] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_jsdoc_external_scanner_create(void);
void tree_sitter_jsdoc_external_scanner_destroy(void *);
bool tree_sitter_jsdoc_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_jsdoc_external_scanner_serialize(void *, char *);
void tree_sitter_jsdoc_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_jsdoc(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_jsdoc_external_scanner_create,
      tree_sitter_jsdoc_external_scanner_destroy,
      tree_sitter_jsdoc_external_scanner_scan,
      tree_sitter_jsdoc_external_scanner_serialize,
      tree_sitter_jsdoc_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
