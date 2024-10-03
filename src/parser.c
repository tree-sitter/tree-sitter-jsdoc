#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 66
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  sym__inline_tag_false_positive = 3,
  sym_tag_name_with_argument = 4,
  sym_tag_name_with_type = 5,
  sym_tag_name = 6,
  anon_sym_COLON = 7,
  anon_sym_SLASH = 8,
  anon_sym_DOT = 9,
  anon_sym_POUND = 10,
  anon_sym_TILDE = 11,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 12,
  sym_code_block_language = 13,
  sym_code_block_line = 14,
  anon_sym_LBRACK = 15,
  anon_sym_RBRACK = 16,
  sym_identifier = 17,
  sym__text = 18,
  sym__begin = 19,
  sym__end = 20,
  sym_type = 21,
  sym_document = 22,
  sym_description = 23,
  sym_tag = 24,
  sym_inline_tag = 25,
  sym__expression = 26,
  sym_qualified_expression = 27,
  sym_path_expression = 28,
  sym_member_expression = 29,
  sym_code_block = 30,
  sym_optional_identifier = 31,
  aux_sym_document_repeat1 = 32,
  aux_sym_description_repeat1 = 33,
  aux_sym_code_block_repeat1 = 34,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym__inline_tag_false_positive] = "_inline_tag_false_positive",
  [sym_tag_name_with_argument] = "tag_name",
  [sym_tag_name_with_type] = "tag_name",
  [sym_tag_name] = "tag_name",
  [anon_sym_COLON] = ":",
  [anon_sym_SLASH] = "/",
  [anon_sym_DOT] = ".",
  [anon_sym_POUND] = "#",
  [anon_sym_TILDE] = "~",
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = "```",
  [sym_code_block_language] = "code_block_language",
  [sym_code_block_line] = "code_block_line",
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
  [sym__expression] = "_expression",
  [sym_qualified_expression] = "qualified_expression",
  [sym_path_expression] = "path_expression",
  [sym_member_expression] = "member_expression",
  [sym_code_block] = "code_block",
  [sym_optional_identifier] = "optional_identifier",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_description_repeat1] = "description_repeat1",
  [aux_sym_code_block_repeat1] = "code_block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym__inline_tag_false_positive] = sym__inline_tag_false_positive,
  [sym_tag_name_with_argument] = sym_tag_name,
  [sym_tag_name_with_type] = sym_tag_name,
  [sym_tag_name] = sym_tag_name,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [sym_code_block_language] = sym_code_block_language,
  [sym_code_block_line] = sym_code_block_line,
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
  [sym__expression] = sym__expression,
  [sym_qualified_expression] = sym_qualified_expression,
  [sym_path_expression] = sym_path_expression,
  [sym_member_expression] = sym_member_expression,
  [sym_code_block] = sym_code_block,
  [sym_optional_identifier] = sym_optional_identifier,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_description_repeat1] = aux_sym_description_repeat1,
  [aux_sym_code_block_repeat1] = aux_sym_code_block_repeat1,
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
  [sym__inline_tag_false_positive] = {
    .visible = false,
    .named = true,
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
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_code_block_language] = {
    .visible = true,
    .named = true,
  },
  [sym_code_block_line] = {
    .visible = true,
    .named = true,
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
  [sym_code_block] = {
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
  [aux_sym_code_block_repeat1] = {
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
  [18] = 6,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 7,
  [24] = 5,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 19,
  [32] = 25,
  [33] = 21,
  [34] = 17,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 37,
  [39] = 39,
  [40] = 39,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 43,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 47,
  [49] = 46,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 58,
  [64] = 64,
  [65] = 54,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(45);
      if (lookahead == '\n') SKIP(43);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '.') ADVANCE(154);
      if (lookahead == '/') ADVANCE(153);
      if (lookahead == ':') ADVANCE(151);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == ']') ADVANCE(185);
      if (lookahead == '`') ADVANCE(190);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '~') ADVANCE(156);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(44);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(191);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '*') SKIP(1);
      if (lookahead == '/') ADVANCE(192);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == ']') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(2);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '/') ADVANCE(192);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == ']') ADVANCE(185);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3);
      if (lookahead == '*') SKIP(3);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == '`') ADVANCE(190);
      if (lookahead == '{') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(4);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(191);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(3);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == '`') ADVANCE(190);
      if (lookahead == '{') ADVANCE(46);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '}') ADVANCE(191);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '*') SKIP(5);
      if (lookahead == '.') ADVANCE(154);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '`') ADVANCE(190);
      if (lookahead == '~') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(6);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(191);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '.') ADVANCE(154);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '`') ADVANCE(190);
      if (lookahead == '~') ADVANCE(156);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(191);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(7);
      if (lookahead == '*') SKIP(7);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '`') ADVANCE(190);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(8);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(191);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(7);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '`') ADVANCE(190);
      if (lookahead == '{') ADVANCE(47);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '}') ADVANCE(191);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(9);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '*') SKIP(9);
      if (lookahead == '.') ADVANCE(154);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == ':') ADVANCE(151);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '`') ADVANCE(190);
      if (lookahead == '~') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(10);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(191);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(9);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '.') ADVANCE(154);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == ':') ADVANCE(151);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '`') ADVANCE(190);
      if (lookahead == '~') ADVANCE(156);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(191);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(9);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '.') ADVANCE(154);
      if (lookahead == '/') ADVANCE(152);
      if (lookahead == ':') ADVANCE(151);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '`') ADVANCE(190);
      if (lookahead == '~') ADVANCE(156);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(191);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(12);
      if (lookahead == '*') SKIP(12);
      if (lookahead == '`') ADVANCE(190);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(13);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(191);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(12);
      if (lookahead == '`') ADVANCE(190);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '}') ADVANCE(48);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '@') ADVANCE(191);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(15);
      if (lookahead == '*') ADVANCE(172);
      if (lookahead == '`') ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(172);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(174);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(176);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(15);
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '`') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(15);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '`') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(17);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(19);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(15);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '`') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(21);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(15);
      if (lookahead == '`') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(15);
      if (lookahead == '`') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(15);
      if (lookahead == '`') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(15);
      if (lookahead == '`') ADVANCE(180);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(174);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(176);
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(23);
      if (lookahead == '*') ADVANCE(173);
      if (lookahead == '`') ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(173);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(175);
      if (lookahead != 0) ADVANCE(176);
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(23);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '`') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(24);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(27);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(23);
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '`') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(25);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(28);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(23);
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == '`') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(29);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(23);
      if (lookahead == '`') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(23);
      if (lookahead == '`') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(23);
      if (lookahead == '`') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(23);
      if (lookahead == '`') ADVANCE(180);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(175);
      if (lookahead != 0) ADVANCE(176);
      END_STATE();
    case 30:
      if (lookahead == '\n') SKIP(30);
      if (lookahead == '*') SKIP(30);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '`') ADVANCE(190);
      if (lookahead == '{') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(30);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(31);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(191);
      END_STATE();
    case 31:
      if (lookahead == '\n') SKIP(30);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '`') ADVANCE(190);
      if (lookahead == '{') ADVANCE(46);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '}') ADVANCE(191);
      END_STATE();
    case 32:
      if (lookahead == '*') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '`') ADVANCE(157);
      END_STATE();
    case 34:
      if (lookahead == '`') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 35:
      if (lookahead == '`') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(179);
      END_STATE();
    case 36:
      if (lookahead == '`') ADVANCE(33);
      END_STATE();
    case 37:
      ADVANCE_MAP(
        'a', 67,
        'b', 110,
        'c', 57,
        'e', 145,
        'f', 90,
        'm', 88,
        'n', 58,
        'p', 62,
        'r', 74,
        's', 60,
        't', 87,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 38:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 39:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(42);
      END_STATE();
    case 40:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(39);
      END_STATE();
    case 41:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(34);
      END_STATE();
    case 42:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(181);
      END_STATE();
    case 43:
      if (eof) ADVANCE(45);
      if (lookahead == '\n') SKIP(43);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '*') SKIP(43);
      if (lookahead == '.') ADVANCE(154);
      if (lookahead == '/') ADVANCE(194);
      if (lookahead == ':') ADVANCE(151);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == ']') ADVANCE(185);
      if (lookahead == '`') ADVANCE(190);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '~') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(43);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(44);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0) ADVANCE(191);
      END_STATE();
    case 44:
      if (eof) ADVANCE(45);
      if (lookahead == '\n') SKIP(43);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '.') ADVANCE(154);
      if (lookahead == '/') ADVANCE(194);
      if (lookahead == ':') ADVANCE(151);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == ']') ADVANCE(185);
      if (lookahead == '`') ADVANCE(190);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '~') ADVANCE(156);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(44);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(191);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '}') ADVANCE(50);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__inline_tag_false_positive);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__inline_tag_false_positive);
      if (lookahead == '}') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_tag_name_with_argument);
      if (lookahead == 'e') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_tag_name_with_argument);
      if (lookahead == 's') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_tag_name_with_argument);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_tag_name_with_type);
      if (lookahead == 'd') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_tag_name_with_type);
      if (lookahead == 's') ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_tag_name_with_type);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(98);
      if (lookahead == 'o') ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(130);
      if (lookahead == 'r') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'b') ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(69);
      if (lookahead == 'l') ADVANCE(91);
      if (lookahead == 'p') ADVANCE(89);
      if (lookahead == 'u') ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'd') ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'g') ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'h') ADVANCE(123);
      if (lookahead == 'y') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(125);
      if (lookahead == 'u') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'k') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'm') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'm') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'm') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(73);
      if (lookahead == 'r') ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(114);
      if (lookahead == 't') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'v') ADVANCE(81);
      if (lookahead == 'x') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'w') ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'w') ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'x') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_tag_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(192);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_code_block_language);
      if (lookahead == '`') ADVANCE(181);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_code_block_language);
      if (lookahead == '`') ADVANCE(181);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(178);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_code_block_language);
      if (lookahead == '`') ADVANCE(181);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(182);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_code_block_language);
      if (lookahead == '`') ADVANCE(181);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_code_block_language);
      if (lookahead == '`') ADVANCE(181);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(179);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_code_block_language);
      if (lookahead == '`') ADVANCE(181);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_code_block_language);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_code_block_language);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(40);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_code_block_language);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(35);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_code_block_language);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(42);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_code_block_language);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(41);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_code_block_language);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(39);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_code_block_language);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(181);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_code_block_language);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(34);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_code_block_line);
      if (lookahead == '*') ADVANCE(172);
      if (lookahead == '`') ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(172);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(174);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(176);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_code_block_line);
      if (lookahead == '*') ADVANCE(173);
      if (lookahead == '`') ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(173);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(175);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(176);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_code_block_line);
      if (lookahead == '`') ADVANCE(180);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(174);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(176);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_code_block_line);
      if (lookahead == '`') ADVANCE(180);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(175);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(176);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_code_block_line);
      if (lookahead == '`') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_code_block_line);
      if (lookahead == '`') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_code_block_line);
      if (lookahead == '`') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(182);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_code_block_line);
      if (lookahead == '`') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(178);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_code_block_line);
      if (lookahead == '`') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(40);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_code_block_line);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(40);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_code_block_line);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(35);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_code_block_line);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(41);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*') ADVANCE(189);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == '`') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(188);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*') ADVANCE(189);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(32);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '/') ADVANCE(191);
      if (lookahead == '`') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(188);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '/') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(188);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__begin);
      if (lookahead == '*') ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__end);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__end);
      if (lookahead == '*') ADVANCE(192);
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
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 31},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 13},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 13},
  [24] = {.lex_state = 13},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 13},
  [32] = {.lex_state = 13},
  [33] = {.lex_state = 13},
  [34] = {.lex_state = 13},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 13},
  [38] = {.lex_state = 13},
  [39] = {.lex_state = 20, .external_lex_state = 2},
  [40] = {.lex_state = 20, .external_lex_state = 2},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 26, .external_lex_state = 2},
  [44] = {.lex_state = 26, .external_lex_state = 2},
  [45] = {.lex_state = 26, .external_lex_state = 2},
  [46] = {.lex_state = 26, .external_lex_state = 2},
  [47] = {.lex_state = 26, .external_lex_state = 2},
  [48] = {.lex_state = 26, .external_lex_state = 2},
  [49] = {.lex_state = 26, .external_lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0, .external_lex_state = 1},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 0, .external_lex_state = 1},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym__inline_tag_false_positive] = ACTIONS(1),
    [sym_tag_name_with_argument] = ACTIONS(1),
    [sym_tag_name_with_type] = ACTIONS(1),
    [sym_tag_name] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(1),
    [sym_code_block_language] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym__text] = ACTIONS(1),
    [sym__begin] = ACTIONS(1),
    [sym__end] = ACTIONS(1),
    [sym_type] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(62),
    [sym__begin] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      sym__text,
    ACTIONS(17), 1,
      sym__end,
    STATE(6), 1,
      sym_code_block,
    STATE(41), 1,
      sym_description,
    ACTIONS(7), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
    STATE(4), 5,
      sym__expression,
      sym_qualified_expression,
      sym_path_expression,
      sym_member_expression,
      sym_optional_identifier,
  [37] = 9,
    ACTIONS(9), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      sym__text,
    ACTIONS(21), 1,
      sym__end,
    STATE(6), 1,
      sym_code_block,
    STATE(42), 1,
      sym_description,
    ACTIONS(19), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
    STATE(9), 5,
      sym__expression,
      sym_qualified_expression,
      sym_path_expression,
      sym_member_expression,
      sym_optional_identifier,
  [71] = 7,
    ACTIONS(9), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(15), 1,
      sym__text,
    ACTIONS(27), 1,
      sym__end,
    STATE(6), 1,
      sym_code_block,
    STATE(35), 1,
      sym_description,
    ACTIONS(23), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
    ACTIONS(25), 3,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
  [97] = 7,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(32), 1,
      sym__inline_tag_false_positive,
    ACTIONS(37), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(40), 1,
      sym__text,
    ACTIONS(43), 1,
      sym__end,
    ACTIONS(35), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
    STATE(5), 3,
      sym_inline_tag,
      sym_code_block,
      aux_sym_description_repeat1,
  [123] = 7,
    ACTIONS(9), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      sym__inline_tag_false_positive,
    ACTIONS(51), 1,
      sym__text,
    ACTIONS(53), 1,
      sym__end,
    ACTIONS(49), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
    STATE(7), 3,
      sym_inline_tag,
      sym_code_block,
      aux_sym_description_repeat1,
  [149] = 7,
    ACTIONS(9), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      sym__inline_tag_false_positive,
    ACTIONS(59), 1,
      sym__text,
    ACTIONS(61), 1,
      sym__end,
    ACTIONS(57), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
    STATE(5), 3,
      sym_inline_tag,
      sym_code_block,
      aux_sym_description_repeat1,
  [175] = 4,
    ACTIONS(65), 1,
      anon_sym_COLON,
    ACTIONS(67), 1,
      anon_sym_SLASH,
    ACTIONS(69), 4,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(63), 5,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
      sym__text,
      sym__end,
  [195] = 7,
    ACTIONS(9), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(15), 1,
      sym__text,
    ACTIONS(73), 1,
      sym__end,
    STATE(6), 1,
      sym_code_block,
    STATE(36), 1,
      sym_description,
    ACTIONS(25), 3,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
    ACTIONS(71), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
  [221] = 9,
    ACTIONS(9), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(15), 1,
      sym__text,
    ACTIONS(75), 1,
      sym_tag_name_with_argument,
    ACTIONS(77), 1,
      sym_tag_name_with_type,
    ACTIONS(79), 1,
      sym_tag_name,
    ACTIONS(81), 1,
      sym__end,
    STATE(6), 1,
      sym_code_block,
    STATE(30), 1,
      sym_description,
    STATE(29), 2,
      sym_tag,
      aux_sym_document_repeat1,
  [250] = 3,
    ACTIONS(65), 1,
      anon_sym_COLON,
    ACTIONS(83), 4,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
      sym__text,
    ACTIONS(85), 5,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__end,
  [267] = 7,
    ACTIONS(9), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(15), 1,
      sym__text,
    ACTIONS(17), 1,
      sym__end,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      sym_code_block,
    STATE(41), 1,
      sym_description,
    ACTIONS(7), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
  [291] = 2,
    ACTIONS(89), 4,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
      sym__text,
    ACTIONS(91), 5,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__end,
  [305] = 2,
    ACTIONS(93), 4,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
      sym__text,
    ACTIONS(95), 5,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__end,
  [319] = 2,
    ACTIONS(83), 4,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
      sym__text,
    ACTIONS(85), 5,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__end,
  [333] = 2,
    ACTIONS(97), 4,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
      sym__text,
    ACTIONS(99), 5,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__end,
  [347] = 2,
    ACTIONS(103), 3,
      sym__inline_tag_false_positive,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__end,
    ACTIONS(101), 5,
      anon_sym_LBRACE,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
      sym__text,
  [360] = 6,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(105), 1,
      anon_sym_LBRACE,
    ACTIONS(107), 1,
      sym__inline_tag_false_positive,
    ACTIONS(109), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(111), 1,
      sym__text,
    STATE(23), 3,
      sym_inline_tag,
      sym_code_block,
      aux_sym_description_repeat1,
  [381] = 2,
    ACTIONS(115), 3,
      sym__inline_tag_false_positive,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__end,
    ACTIONS(113), 5,
      anon_sym_LBRACE,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
      sym__text,
  [394] = 6,
    ACTIONS(9), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(15), 1,
      sym__text,
    ACTIONS(17), 1,
      sym__end,
    STATE(6), 1,
      sym_code_block,
    STATE(41), 1,
      sym_description,
    ACTIONS(7), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
  [415] = 2,
    ACTIONS(119), 3,
      sym__inline_tag_false_positive,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__end,
    ACTIONS(117), 5,
      anon_sym_LBRACE,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
      sym__text,
  [428] = 6,
    ACTIONS(9), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(15), 1,
      sym__text,
    ACTIONS(21), 1,
      sym__end,
    STATE(6), 1,
      sym_code_block,
    STATE(42), 1,
      sym_description,
    ACTIONS(19), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
  [449] = 6,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    ACTIONS(105), 1,
      anon_sym_LBRACE,
    ACTIONS(109), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(121), 1,
      sym__inline_tag_false_positive,
    ACTIONS(123), 1,
      sym__text,
    STATE(24), 3,
      sym_inline_tag,
      sym_code_block,
      aux_sym_description_repeat1,
  [470] = 6,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    ACTIONS(125), 1,
      anon_sym_LBRACE,
    ACTIONS(128), 1,
      sym__inline_tag_false_positive,
    ACTIONS(131), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(134), 1,
      sym__text,
    STATE(24), 3,
      sym_inline_tag,
      sym_code_block,
      aux_sym_description_repeat1,
  [491] = 2,
    ACTIONS(139), 3,
      sym__inline_tag_false_positive,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__end,
    ACTIONS(137), 5,
      anon_sym_LBRACE,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
      sym__text,
  [504] = 3,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      sym_identifier,
    STATE(13), 5,
      sym__expression,
      sym_qualified_expression,
      sym_path_expression,
      sym_member_expression,
      sym_optional_identifier,
  [518] = 5,
    ACTIONS(75), 1,
      sym_tag_name_with_argument,
    ACTIONS(77), 1,
      sym_tag_name_with_type,
    ACTIONS(79), 1,
      sym_tag_name,
    ACTIONS(141), 1,
      sym__end,
    STATE(28), 2,
      sym_tag,
      aux_sym_document_repeat1,
  [535] = 5,
    ACTIONS(143), 1,
      sym_tag_name_with_argument,
    ACTIONS(146), 1,
      sym_tag_name_with_type,
    ACTIONS(149), 1,
      sym_tag_name,
    ACTIONS(152), 1,
      sym__end,
    STATE(28), 2,
      sym_tag,
      aux_sym_document_repeat1,
  [552] = 5,
    ACTIONS(75), 1,
      sym_tag_name_with_argument,
    ACTIONS(77), 1,
      sym_tag_name_with_type,
    ACTIONS(79), 1,
      sym_tag_name,
    ACTIONS(154), 1,
      sym__end,
    STATE(28), 2,
      sym_tag,
      aux_sym_document_repeat1,
  [569] = 5,
    ACTIONS(75), 1,
      sym_tag_name_with_argument,
    ACTIONS(77), 1,
      sym_tag_name_with_type,
    ACTIONS(79), 1,
      sym_tag_name,
    ACTIONS(154), 1,
      sym__end,
    STATE(27), 2,
      sym_tag,
      aux_sym_document_repeat1,
  [586] = 2,
    ACTIONS(113), 2,
      anon_sym_LBRACE,
      sym__text,
    ACTIONS(115), 3,
      anon_sym_RBRACE,
      sym__inline_tag_false_positive,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [596] = 2,
    ACTIONS(137), 2,
      anon_sym_LBRACE,
      sym__text,
    ACTIONS(139), 3,
      anon_sym_RBRACE,
      sym__inline_tag_false_positive,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [606] = 2,
    ACTIONS(117), 2,
      anon_sym_LBRACE,
      sym__text,
    ACTIONS(119), 3,
      anon_sym_RBRACE,
      sym__inline_tag_false_positive,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [616] = 2,
    ACTIONS(101), 2,
      anon_sym_LBRACE,
      sym__text,
    ACTIONS(103), 3,
      anon_sym_RBRACE,
      sym__inline_tag_false_positive,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [626] = 2,
    ACTIONS(158), 1,
      sym__end,
    ACTIONS(156), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
  [635] = 2,
    ACTIONS(162), 1,
      sym__end,
    ACTIONS(160), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
  [644] = 4,
    ACTIONS(109), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(164), 1,
      sym__text,
    STATE(18), 1,
      sym_code_block,
    STATE(63), 1,
      sym_description,
  [657] = 4,
    ACTIONS(109), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(164), 1,
      sym__text,
    STATE(18), 1,
      sym_code_block,
    STATE(58), 1,
      sym_description,
  [670] = 4,
    ACTIONS(166), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(168), 1,
      sym_code_block_language,
    ACTIONS(170), 1,
      sym_code_block_line,
    STATE(46), 1,
      aux_sym_code_block_repeat1,
  [683] = 4,
    ACTIONS(172), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(174), 1,
      sym_code_block_language,
    ACTIONS(176), 1,
      sym_code_block_line,
    STATE(49), 1,
      aux_sym_code_block_repeat1,
  [696] = 2,
    ACTIONS(27), 1,
      sym__end,
    ACTIONS(23), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
  [705] = 2,
    ACTIONS(73), 1,
      sym__end,
    ACTIONS(71), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
  [714] = 3,
    ACTIONS(178), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(180), 1,
      sym_code_block_line,
    STATE(45), 1,
      aux_sym_code_block_repeat1,
  [724] = 3,
    ACTIONS(180), 1,
      sym_code_block_line,
    ACTIONS(182), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(45), 1,
      aux_sym_code_block_repeat1,
  [734] = 3,
    ACTIONS(184), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(186), 1,
      sym_code_block_line,
    STATE(45), 1,
      aux_sym_code_block_repeat1,
  [744] = 3,
    ACTIONS(180), 1,
      sym_code_block_line,
    ACTIONS(189), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(45), 1,
      aux_sym_code_block_repeat1,
  [754] = 3,
    ACTIONS(189), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(191), 1,
      sym_code_block_line,
    STATE(43), 1,
      aux_sym_code_block_repeat1,
  [764] = 3,
    ACTIONS(193), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(195), 1,
      sym_code_block_line,
    STATE(44), 1,
      aux_sym_code_block_repeat1,
  [774] = 3,
    ACTIONS(180), 1,
      sym_code_block_line,
    ACTIONS(193), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(45), 1,
      aux_sym_code_block_repeat1,
  [784] = 2,
    ACTIONS(197), 1,
      sym_identifier,
    STATE(15), 1,
      sym_qualified_expression,
  [791] = 1,
    ACTIONS(199), 1,
      sym_identifier,
  [795] = 1,
    ACTIONS(201), 1,
      anon_sym_RBRACE,
  [799] = 1,
    ACTIONS(203), 1,
      sym_type,
  [803] = 1,
    ACTIONS(205), 1,
      sym_tag_name,
  [807] = 1,
    ACTIONS(207), 1,
      sym_identifier,
  [811] = 1,
    ACTIONS(209), 1,
      sym_type,
  [815] = 1,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
  [819] = 1,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
  [823] = 1,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
  [827] = 1,
    ACTIONS(217), 1,
      anon_sym_RBRACE,
  [831] = 1,
    ACTIONS(219), 1,
      anon_sym_RBRACK,
  [835] = 1,
    ACTIONS(221), 1,
      ts_builtin_sym_end,
  [839] = 1,
    ACTIONS(223), 1,
      anon_sym_RBRACE,
  [843] = 1,
    ACTIONS(225), 1,
      ts_builtin_sym_end,
  [847] = 1,
    ACTIONS(227), 1,
      sym_tag_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 37,
  [SMALL_STATE(4)] = 71,
  [SMALL_STATE(5)] = 97,
  [SMALL_STATE(6)] = 123,
  [SMALL_STATE(7)] = 149,
  [SMALL_STATE(8)] = 175,
  [SMALL_STATE(9)] = 195,
  [SMALL_STATE(10)] = 221,
  [SMALL_STATE(11)] = 250,
  [SMALL_STATE(12)] = 267,
  [SMALL_STATE(13)] = 291,
  [SMALL_STATE(14)] = 305,
  [SMALL_STATE(15)] = 319,
  [SMALL_STATE(16)] = 333,
  [SMALL_STATE(17)] = 347,
  [SMALL_STATE(18)] = 360,
  [SMALL_STATE(19)] = 381,
  [SMALL_STATE(20)] = 394,
  [SMALL_STATE(21)] = 415,
  [SMALL_STATE(22)] = 428,
  [SMALL_STATE(23)] = 449,
  [SMALL_STATE(24)] = 470,
  [SMALL_STATE(25)] = 491,
  [SMALL_STATE(26)] = 504,
  [SMALL_STATE(27)] = 518,
  [SMALL_STATE(28)] = 535,
  [SMALL_STATE(29)] = 552,
  [SMALL_STATE(30)] = 569,
  [SMALL_STATE(31)] = 586,
  [SMALL_STATE(32)] = 596,
  [SMALL_STATE(33)] = 606,
  [SMALL_STATE(34)] = 616,
  [SMALL_STATE(35)] = 626,
  [SMALL_STATE(36)] = 635,
  [SMALL_STATE(37)] = 644,
  [SMALL_STATE(38)] = 657,
  [SMALL_STATE(39)] = 670,
  [SMALL_STATE(40)] = 683,
  [SMALL_STATE(41)] = 696,
  [SMALL_STATE(42)] = 705,
  [SMALL_STATE(43)] = 714,
  [SMALL_STATE(44)] = 724,
  [SMALL_STATE(45)] = 734,
  [SMALL_STATE(46)] = 744,
  [SMALL_STATE(47)] = 754,
  [SMALL_STATE(48)] = 764,
  [SMALL_STATE(49)] = 774,
  [SMALL_STATE(50)] = 784,
  [SMALL_STATE(51)] = 791,
  [SMALL_STATE(52)] = 795,
  [SMALL_STATE(53)] = 799,
  [SMALL_STATE(54)] = 803,
  [SMALL_STATE(55)] = 807,
  [SMALL_STATE(56)] = 811,
  [SMALL_STATE(57)] = 815,
  [SMALL_STATE(58)] = 819,
  [SMALL_STATE(59)] = 823,
  [SMALL_STATE(60)] = 827,
  [SMALL_STATE(61)] = 831,
  [SMALL_STATE(62)] = 835,
  [SMALL_STATE(63)] = 839,
  [SMALL_STATE(64)] = 843,
  [SMALL_STATE(65)] = 847,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [7] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2, 0, 0),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 1, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 2, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_expression, 3, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_expression, 3, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_expression, 3, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_expression, 3, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_expression, 3, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_expression, 3, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optional_identifier, 3, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_identifier, 3, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 4, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 4, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 2, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 2, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 4, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 4, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 3, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 3, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 6, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 6, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [221] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 4, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_type = 0,
  ts_external_token_code_block_line = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_type] = sym_type,
  [ts_external_token_code_block_line] = sym_code_block_line,
};

static const bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_type] = true,
  },
  [2] = {
    [ts_external_token_code_block_line] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_jsdoc_external_scanner_create(void);
void tree_sitter_jsdoc_external_scanner_destroy(void *);
bool tree_sitter_jsdoc_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_jsdoc_external_scanner_serialize(void *, char *);
void tree_sitter_jsdoc_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_jsdoc(void) {
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
