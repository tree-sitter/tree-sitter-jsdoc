#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 63
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 36
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  sym_tag_name_with_argument = 3,
  sym_tag_name_with_type = 4,
  sym_tag_name = 5,
  anon_sym_COLON = 6,
  anon_sym_SLASH = 7,
  anon_sym_DOT = 8,
  anon_sym_POUND = 9,
  anon_sym_TILDE = 10,
  sym_identifier = 11,
  anon_sym_LBRACK = 12,
  anon_sym_EQ = 13,
  anon_sym_RBRACK = 14,
  anon_sym_COMMA = 15,
  aux_sym_atomic_value_token1 = 16,
  sym_type = 17,
  sym__text = 18,
  sym__begin = 19,
  sym__end = 20,
  sym_document = 21,
  sym_description = 22,
  sym_tag = 23,
  sym_inline_tag = 24,
  sym__expression = 25,
  sym_qualified_expression = 26,
  sym_path_expression = 27,
  sym_member_expression = 28,
  sym__identifier_of_optional_type = 29,
  sym__list_of_values = 30,
  sym__value = 31,
  sym_atomic_value = 32,
  aux_sym_document_repeat1 = 33,
  aux_sym_description_repeat1 = 34,
  aux_sym__list_of_values_repeat1 = 35,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_tag_name_with_argument] = "tag_name",
  [sym_tag_name_with_type] = "tag_name",
  [sym_tag_name] = "tag_name",
  [anon_sym_COLON] = ":",
  [anon_sym_SLASH] = "/",
  [anon_sym_DOT] = ".",
  [anon_sym_POUND] = "#",
  [anon_sym_TILDE] = "~",
  [sym_identifier] = "identifier",
  [anon_sym_LBRACK] = "[",
  [anon_sym_EQ] = "=",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COMMA] = ",",
  [aux_sym_atomic_value_token1] = "atomic_value_token1",
  [sym_type] = "type",
  [sym__text] = "_text",
  [sym__begin] = "_begin",
  [sym__end] = "_end",
  [sym_document] = "document",
  [sym_description] = "description",
  [sym_tag] = "tag",
  [sym_inline_tag] = "inline_tag",
  [sym__expression] = "_expression",
  [sym_qualified_expression] = "qualified_expression",
  [sym_path_expression] = "path_expression",
  [sym_member_expression] = "member_expression",
  [sym__identifier_of_optional_type] = "_identifier_of_optional_type",
  [sym__list_of_values] = "_list_of_values",
  [sym__value] = "_value",
  [sym_atomic_value] = "atomic_value",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_description_repeat1] = "description_repeat1",
  [aux_sym__list_of_values_repeat1] = "_list_of_values_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_tag_name_with_argument] = sym_tag_name,
  [sym_tag_name_with_type] = sym_tag_name,
  [sym_tag_name] = sym_tag_name,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [sym_identifier] = sym_identifier,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_atomic_value_token1] = aux_sym_atomic_value_token1,
  [sym_type] = sym_type,
  [sym__text] = sym__text,
  [sym__begin] = sym__begin,
  [sym__end] = sym__end,
  [sym_document] = sym_document,
  [sym_description] = sym_description,
  [sym_tag] = sym_tag,
  [sym_inline_tag] = sym_inline_tag,
  [sym__expression] = sym__expression,
  [sym_qualified_expression] = sym_qualified_expression,
  [sym_path_expression] = sym_path_expression,
  [sym_member_expression] = sym_member_expression,
  [sym__identifier_of_optional_type] = sym__identifier_of_optional_type,
  [sym__list_of_values] = sym__list_of_values,
  [sym__value] = sym__value,
  [sym_atomic_value] = sym_atomic_value,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_description_repeat1] = aux_sym_description_repeat1,
  [aux_sym__list_of_values_repeat1] = aux_sym__list_of_values_repeat1,
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_atomic_value_token1] = {
    .visible = false,
    .named = false,
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
  [sym__identifier_of_optional_type] = {
    .visible = false,
    .named = true,
  },
  [sym__list_of_values] = {
    .visible = false,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_atomic_value] = {
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
  [aux_sym__list_of_values_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(23);
      if (lookahead == '\n') SKIP(21)
      if (lookahead == '#') ADVANCE(126);
      if (lookahead == ',') ADVANCE(132);
      if (lookahead == '.') ADVANCE(125);
      if (lookahead == '/') ADVANCE(124);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == '=') ADVANCE(130);
      if (lookahead == '@') ADVANCE(19);
      if (lookahead == '[') ADVANCE(129);
      if (lookahead == ']') ADVANCE(131);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '}') ADVANCE(25);
      if (lookahead == '~') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(141);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == '*') SKIP(1)
      if (lookahead == ',') ADVANCE(132);
      if (lookahead == '/') ADVANCE(142);
      if (lookahead == '=') ADVANCE(130);
      if (lookahead == '@') ADVANCE(20);
      if (lookahead == ']') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == ',') ADVANCE(132);
      if (lookahead == '/') ADVANCE(142);
      if (lookahead == '=') ADVANCE(130);
      if (lookahead == '@') ADVANCE(20);
      if (lookahead == ']') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') SKIP(4)
      if (lookahead == '*') SKIP(3)
      if (lookahead == '/') ADVANCE(143);
      if (lookahead == '@') ADVANCE(19);
      if (lookahead == '[') ADVANCE(129);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(141);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '/') ADVANCE(143);
      if (lookahead == '@') ADVANCE(19);
      if (lookahead == '[') ADVANCE(129);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '}') ADVANCE(141);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\r') SKIP(6)
      if (lookahead == '#') ADVANCE(126);
      if (lookahead == '*') SKIP(5)
      if (lookahead == '.') ADVANCE(125);
      if (lookahead == '/') ADVANCE(143);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == '@') ADVANCE(19);
      if (lookahead == '~') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(141);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '#') ADVANCE(126);
      if (lookahead == '.') ADVANCE(125);
      if (lookahead == '/') ADVANCE(143);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == '@') ADVANCE(19);
      if (lookahead == '~') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(141);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '#') ADVANCE(126);
      if (lookahead == '.') ADVANCE(125);
      if (lookahead == '/') ADVANCE(123);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == '@') ADVANCE(19);
      if (lookahead == '~') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(141);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '\r') SKIP(9)
      if (lookahead == '#') ADVANCE(126);
      if (lookahead == '*') SKIP(8)
      if (lookahead == '.') ADVANCE(125);
      if (lookahead == '/') ADVANCE(143);
      if (lookahead == '@') ADVANCE(19);
      if (lookahead == '~') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(141);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '#') ADVANCE(126);
      if (lookahead == '.') ADVANCE(125);
      if (lookahead == '/') ADVANCE(143);
      if (lookahead == '@') ADVANCE(19);
      if (lookahead == '~') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(141);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '\r') SKIP(11)
      if (lookahead == '*') SKIP(10)
      if (lookahead == '/') ADVANCE(143);
      if (lookahead == '@') ADVANCE(19);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(141);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '/') ADVANCE(143);
      if (lookahead == '@') ADVANCE(19);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '}') ADVANCE(141);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '\r') ADVANCE(134);
      if (lookahead == '*') ADVANCE(133);
      if (lookahead == '[') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != ']') ADVANCE(135);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '[') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != ']') ADVANCE(135);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '\r') SKIP(15)
      if (lookahead == '*') SKIP(14)
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '}') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(14)
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '}') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '@') ADVANCE(141);
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '\r') ADVANCE(137);
      if (lookahead == '*') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(138);
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(138);
      END_STATE();
    case 18:
      if (lookahead == '*') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(41);
      if (lookahead == 'b') ADVANCE(82);
      if (lookahead == 'c') ADVANCE(31);
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == 'f') ADVANCE(65);
      if (lookahead == 'm') ADVANCE(47);
      if (lookahead == 'n') ADVANCE(32);
      if (lookahead == 'p') ADVANCE(34);
      if (lookahead == 'r') ADVANCE(48);
      if (lookahead == 't') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 20:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 21:
      if (eof) ADVANCE(23);
      if (lookahead == '\n') SKIP(21)
      if (lookahead == '\r') SKIP(22)
      if (lookahead == '#') ADVANCE(126);
      if (lookahead == '*') SKIP(21)
      if (lookahead == ',') ADVANCE(132);
      if (lookahead == '.') ADVANCE(125);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == '=') ADVANCE(130);
      if (lookahead == '@') ADVANCE(19);
      if (lookahead == '[') ADVANCE(129);
      if (lookahead == ']') ADVANCE(131);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '}') ADVANCE(25);
      if (lookahead == '~') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(21)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 22:
      if (eof) ADVANCE(23);
      if (lookahead == '\n') SKIP(21)
      if (lookahead == '#') ADVANCE(126);
      if (lookahead == ',') ADVANCE(132);
      if (lookahead == '.') ADVANCE(125);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == '=') ADVANCE(130);
      if (lookahead == '@') ADVANCE(19);
      if (lookahead == '[') ADVANCE(129);
      if (lookahead == ']') ADVANCE(131);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '}') ADVANCE(25);
      if (lookahead == '~') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(141);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_tag_name_with_argument);
      if (lookahead == 'd') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_tag_name_with_argument);
      if (lookahead == 's') ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_tag_name_with_argument);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_tag_name_with_type);
      if (lookahead == 's') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_tag_name_with_type);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(69);
      if (lookahead == 'o') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(103);
      if (lookahead == 'r') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'b') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'b') ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(43);
      if (lookahead == 'l') ADVANCE(64);
      if (lookahead == 'p') ADVANCE(63);
      if (lookahead == 'u') ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(72);
      if (lookahead == 'i') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'g') ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'h') ADVANCE(95);
      if (lookahead == 'y') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(98);
      if (lookahead == 'u') ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'k') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'm') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'm') ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'm') ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'm') ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(85);
      if (lookahead == 't') ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'v') ADVANCE(54);
      if (lookahead == 'x') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'w') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'w') ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'x') ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_tag_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(142);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_atomic_value_token1);
      if (lookahead == '\r') ADVANCE(134);
      if (lookahead == '*') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(135);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_atomic_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(135);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_atomic_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_type);
      if (lookahead == '\r') ADVANCE(137);
      if (lookahead == '*') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(138);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_type);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(138);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_type);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*') ADVANCE(140);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(18);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(139);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__begin);
      if (lookahead == '*') ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__end);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__end);
      if (lookahead == '*') ADVANCE(142);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 2},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 11},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 11},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 11},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 11},
  [25] = {.lex_state = 11},
  [26] = {.lex_state = 13},
  [27] = {.lex_state = 13},
  [28] = {.lex_state = 15},
  [29] = {.lex_state = 15},
  [30] = {.lex_state = 13},
  [31] = {.lex_state = 15},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 15},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 15},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 15},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 17},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 17},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 2},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
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
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym__text] = ACTIONS(1),
    [sym__begin] = ACTIONS(1),
    [sym__end] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(61),
    [sym__begin] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      sym__text,
    ACTIONS(15), 1,
      sym__end,
    STATE(34), 1,
      sym_description,
    ACTIONS(7), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
    STATE(7), 5,
      sym__expression,
      sym_qualified_expression,
      sym_path_expression,
      sym_member_expression,
      sym__identifier_of_optional_type,
  [31] = 7,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      sym__text,
    ACTIONS(19), 1,
      sym__end,
    STATE(35), 1,
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
      sym__identifier_of_optional_type,
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
  [78] = 3,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(29), 4,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
      sym__text,
    ACTIONS(31), 4,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__end,
  [94] = 5,
    ACTIONS(13), 1,
      sym__text,
    ACTIONS(37), 1,
      sym__end,
    STATE(32), 1,
      sym_description,
    ACTIONS(33), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
    ACTIONS(35), 3,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
  [114] = 5,
    ACTIONS(13), 1,
      sym__text,
    ACTIONS(41), 1,
      sym__end,
    STATE(33), 1,
      sym_description,
    ACTIONS(35), 3,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
    ACTIONS(39), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
  [134] = 2,
    ACTIONS(43), 4,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
      sym__text,
    ACTIONS(45), 4,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__end,
  [147] = 7,
    ACTIONS(13), 1,
      sym__text,
    ACTIONS(47), 1,
      sym_tag_name_with_argument,
    ACTIONS(49), 1,
      sym_tag_name_with_type,
    ACTIONS(51), 1,
      sym_tag_name,
    ACTIONS(53), 1,
      sym__end,
    STATE(23), 1,
      sym_description,
    STATE(19), 2,
      sym_tag,
      aux_sym_document_repeat1,
  [170] = 2,
    ACTIONS(29), 4,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
      sym__text,
    ACTIONS(31), 4,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__end,
  [183] = 5,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      sym__text,
    ACTIONS(61), 1,
      sym__end,
    STATE(16), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
    ACTIONS(57), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
  [202] = 2,
    ACTIONS(63), 4,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
      sym__text,
    ACTIONS(65), 4,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__end,
  [215] = 2,
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
  [228] = 2,
    ACTIONS(71), 4,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
      sym__text,
    ACTIONS(73), 4,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__end,
  [241] = 5,
    ACTIONS(75), 1,
      anon_sym_LBRACE,
    ACTIONS(80), 1,
      sym__text,
    ACTIONS(83), 1,
      sym__end,
    STATE(15), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
    ACTIONS(78), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
  [260] = 5,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(87), 1,
      sym__text,
    ACTIONS(89), 1,
      sym__end,
    STATE(15), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
    ACTIONS(85), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
  [279] = 5,
    ACTIONS(13), 1,
      sym__text,
    ACTIONS(15), 1,
      sym__end,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      sym_description,
    ACTIONS(7), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
  [297] = 3,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    STATE(14), 5,
      sym__expression,
      sym_qualified_expression,
      sym_path_expression,
      sym_member_expression,
      sym__identifier_of_optional_type,
  [311] = 5,
    ACTIONS(47), 1,
      sym_tag_name_with_argument,
    ACTIONS(49), 1,
      sym_tag_name_with_type,
    ACTIONS(51), 1,
      sym_tag_name,
    ACTIONS(93), 1,
      sym__end,
    STATE(21), 2,
      sym_tag,
      aux_sym_document_repeat1,
  [328] = 5,
    ACTIONS(47), 1,
      sym_tag_name_with_argument,
    ACTIONS(49), 1,
      sym_tag_name_with_type,
    ACTIONS(51), 1,
      sym_tag_name,
    ACTIONS(95), 1,
      sym__end,
    STATE(21), 2,
      sym_tag,
      aux_sym_document_repeat1,
  [345] = 5,
    ACTIONS(97), 1,
      sym_tag_name_with_argument,
    ACTIONS(100), 1,
      sym_tag_name_with_type,
    ACTIONS(103), 1,
      sym_tag_name,
    ACTIONS(106), 1,
      sym__end,
    STATE(21), 2,
      sym_tag,
      aux_sym_document_repeat1,
  [362] = 2,
    ACTIONS(108), 2,
      anon_sym_LBRACE,
      sym__end,
    ACTIONS(110), 4,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
      sym__text,
  [373] = 5,
    ACTIONS(47), 1,
      sym_tag_name_with_argument,
    ACTIONS(49), 1,
      sym_tag_name_with_type,
    ACTIONS(51), 1,
      sym_tag_name,
    ACTIONS(93), 1,
      sym__end,
    STATE(20), 2,
      sym_tag,
      aux_sym_document_repeat1,
  [390] = 4,
    ACTIONS(13), 1,
      sym__text,
    ACTIONS(15), 1,
      sym__end,
    STATE(34), 1,
      sym_description,
    ACTIONS(7), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
  [405] = 4,
    ACTIONS(13), 1,
      sym__text,
    ACTIONS(19), 1,
      sym__end,
    STATE(35), 1,
      sym_description,
    ACTIONS(17), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
  [420] = 3,
    ACTIONS(112), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      aux_sym_atomic_value_token1,
    STATE(45), 3,
      sym__list_of_values,
      sym__value,
      sym_atomic_value,
  [432] = 3,
    ACTIONS(112), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      aux_sym_atomic_value_token1,
    STATE(37), 3,
      sym__list_of_values,
      sym__value,
      sym_atomic_value,
  [444] = 4,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    ACTIONS(118), 1,
      sym__text,
    STATE(29), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
  [458] = 4,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    ACTIONS(120), 1,
      sym__text,
    STATE(31), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
  [472] = 3,
    ACTIONS(112), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      aux_sym_atomic_value_token1,
    STATE(54), 3,
      sym__list_of_values,
      sym__value,
      sym_atomic_value,
  [484] = 4,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    ACTIONS(122), 1,
      anon_sym_LBRACE,
    ACTIONS(125), 1,
      sym__text,
    STATE(31), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
  [498] = 2,
    ACTIONS(130), 1,
      sym__end,
    ACTIONS(128), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
  [507] = 2,
    ACTIONS(134), 1,
      sym__end,
    ACTIONS(132), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
  [516] = 2,
    ACTIONS(41), 1,
      sym__end,
    ACTIONS(39), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
  [525] = 2,
    ACTIONS(37), 1,
      sym__end,
    ACTIONS(33), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
  [534] = 1,
    ACTIONS(108), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__text,
  [540] = 3,
    ACTIONS(136), 1,
      anon_sym_RBRACK,
    ACTIONS(138), 1,
      anon_sym_COMMA,
    STATE(38), 1,
      aux_sym__list_of_values_repeat1,
  [550] = 3,
    ACTIONS(138), 1,
      anon_sym_COMMA,
    ACTIONS(140), 1,
      anon_sym_RBRACK,
    STATE(39), 1,
      aux_sym__list_of_values_repeat1,
  [560] = 3,
    ACTIONS(142), 1,
      anon_sym_RBRACK,
    ACTIONS(144), 1,
      anon_sym_COMMA,
    STATE(39), 1,
      aux_sym__list_of_values_repeat1,
  [570] = 2,
    ACTIONS(147), 1,
      sym__text,
    STATE(53), 1,
      sym_description,
  [577] = 2,
    ACTIONS(149), 1,
      anon_sym_EQ,
    ACTIONS(151), 1,
      anon_sym_RBRACK,
  [584] = 2,
    ACTIONS(147), 1,
      sym__text,
    STATE(60), 1,
      sym_description,
  [591] = 1,
    ACTIONS(153), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [596] = 1,
    ACTIONS(155), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [601] = 1,
    ACTIONS(142), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [606] = 1,
    ACTIONS(157), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [611] = 2,
    ACTIONS(159), 1,
      sym_identifier,
    STATE(10), 1,
      sym_qualified_expression,
  [618] = 1,
    ACTIONS(161), 1,
      anon_sym_RBRACE,
  [622] = 1,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
  [626] = 1,
    ACTIONS(165), 1,
      sym_identifier,
  [630] = 1,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
  [634] = 1,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
  [638] = 1,
    ACTIONS(171), 1,
      anon_sym_RBRACE,
  [642] = 1,
    ACTIONS(173), 1,
      anon_sym_RBRACK,
  [646] = 1,
    ACTIONS(175), 1,
      sym_tag_name,
  [650] = 1,
    ACTIONS(177), 1,
      sym_type,
  [654] = 1,
    ACTIONS(179), 1,
      sym_identifier,
  [658] = 1,
    ACTIONS(181), 1,
      sym_type,
  [662] = 1,
    ACTIONS(183), 1,
      ts_builtin_sym_end,
  [666] = 1,
    ACTIONS(185), 1,
      anon_sym_RBRACE,
  [670] = 1,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
  [674] = 1,
    ACTIONS(189), 1,
      sym_tag_name,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 59,
  [SMALL_STATE(5)] = 78,
  [SMALL_STATE(6)] = 94,
  [SMALL_STATE(7)] = 114,
  [SMALL_STATE(8)] = 134,
  [SMALL_STATE(9)] = 147,
  [SMALL_STATE(10)] = 170,
  [SMALL_STATE(11)] = 183,
  [SMALL_STATE(12)] = 202,
  [SMALL_STATE(13)] = 215,
  [SMALL_STATE(14)] = 228,
  [SMALL_STATE(15)] = 241,
  [SMALL_STATE(16)] = 260,
  [SMALL_STATE(17)] = 279,
  [SMALL_STATE(18)] = 297,
  [SMALL_STATE(19)] = 311,
  [SMALL_STATE(20)] = 328,
  [SMALL_STATE(21)] = 345,
  [SMALL_STATE(22)] = 362,
  [SMALL_STATE(23)] = 373,
  [SMALL_STATE(24)] = 390,
  [SMALL_STATE(25)] = 405,
  [SMALL_STATE(26)] = 420,
  [SMALL_STATE(27)] = 432,
  [SMALL_STATE(28)] = 444,
  [SMALL_STATE(29)] = 458,
  [SMALL_STATE(30)] = 472,
  [SMALL_STATE(31)] = 484,
  [SMALL_STATE(32)] = 498,
  [SMALL_STATE(33)] = 507,
  [SMALL_STATE(34)] = 516,
  [SMALL_STATE(35)] = 525,
  [SMALL_STATE(36)] = 534,
  [SMALL_STATE(37)] = 540,
  [SMALL_STATE(38)] = 550,
  [SMALL_STATE(39)] = 560,
  [SMALL_STATE(40)] = 570,
  [SMALL_STATE(41)] = 577,
  [SMALL_STATE(42)] = 584,
  [SMALL_STATE(43)] = 591,
  [SMALL_STATE(44)] = 596,
  [SMALL_STATE(45)] = 601,
  [SMALL_STATE(46)] = 606,
  [SMALL_STATE(47)] = 611,
  [SMALL_STATE(48)] = 618,
  [SMALL_STATE(49)] = 622,
  [SMALL_STATE(50)] = 626,
  [SMALL_STATE(51)] = 630,
  [SMALL_STATE(52)] = 634,
  [SMALL_STATE(53)] = 638,
  [SMALL_STATE(54)] = 642,
  [SMALL_STATE(55)] = 646,
  [SMALL_STATE(56)] = 650,
  [SMALL_STATE(57)] = 654,
  [SMALL_STATE(58)] = 658,
  [SMALL_STATE(59)] = 662,
  [SMALL_STATE(60)] = 666,
  [SMALL_STATE(61)] = 670,
  [SMALL_STATE(62)] = 674,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(9),
  [5] = {.count = 1, .reusable = true}, SHIFT(58),
  [7] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 1),
  [9] = {.count = 1, .reusable = true}, SHIFT(4),
  [11] = {.count = 1, .reusable = true}, SHIFT(57),
  [13] = {.count = 1, .reusable = false}, SHIFT(11),
  [15] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 1),
  [17] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 4),
  [19] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 4),
  [21] = {.count = 1, .reusable = false}, REDUCE(sym__expression, 1),
  [23] = {.count = 1, .reusable = true}, SHIFT(18),
  [25] = {.count = 1, .reusable = true}, SHIFT(50),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym__expression, 1),
  [29] = {.count = 1, .reusable = false}, REDUCE(sym_member_expression, 3),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym_member_expression, 3),
  [33] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 5),
  [35] = {.count = 1, .reusable = true}, SHIFT(47),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 5),
  [39] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 2),
  [41] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [43] = {.count = 1, .reusable = false}, REDUCE(sym__identifier_of_optional_type, 5),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym__identifier_of_optional_type, 5),
  [47] = {.count = 1, .reusable = false}, SHIFT(2),
  [49] = {.count = 1, .reusable = false}, SHIFT(17),
  [51] = {.count = 1, .reusable = false}, SHIFT(24),
  [53] = {.count = 1, .reusable = true}, SHIFT(59),
  [55] = {.count = 1, .reusable = true}, SHIFT(55),
  [57] = {.count = 1, .reusable = false}, REDUCE(sym_description, 1),
  [59] = {.count = 1, .reusable = false}, SHIFT(16),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym_description, 1),
  [63] = {.count = 1, .reusable = false}, REDUCE(sym__identifier_of_optional_type, 3),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym__identifier_of_optional_type, 3),
  [67] = {.count = 1, .reusable = false}, REDUCE(sym_path_expression, 3),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_path_expression, 3),
  [71] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_expression, 3),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_expression, 3),
  [75] = {.count = 2, .reusable = true}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(55),
  [78] = {.count = 1, .reusable = false}, REDUCE(aux_sym_description_repeat1, 2),
  [80] = {.count = 2, .reusable = false}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(15),
  [83] = {.count = 1, .reusable = true}, REDUCE(aux_sym_description_repeat1, 2),
  [85] = {.count = 1, .reusable = false}, REDUCE(sym_description, 2),
  [87] = {.count = 1, .reusable = false}, SHIFT(15),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym_description, 2),
  [91] = {.count = 1, .reusable = true}, SHIFT(56),
  [93] = {.count = 1, .reusable = true}, SHIFT(52),
  [95] = {.count = 1, .reusable = true}, SHIFT(51),
  [97] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [100] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(17),
  [103] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(24),
  [106] = {.count = 1, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2),
  [108] = {.count = 1, .reusable = true}, REDUCE(sym_inline_tag, 4),
  [110] = {.count = 1, .reusable = false}, REDUCE(sym_inline_tag, 4),
  [112] = {.count = 1, .reusable = false}, SHIFT(27),
  [114] = {.count = 1, .reusable = true}, SHIFT(44),
  [116] = {.count = 1, .reusable = true}, SHIFT(62),
  [118] = {.count = 1, .reusable = true}, SHIFT(29),
  [120] = {.count = 1, .reusable = true}, SHIFT(31),
  [122] = {.count = 2, .reusable = true}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(62),
  [125] = {.count = 2, .reusable = true}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(31),
  [128] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 6),
  [130] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 6),
  [132] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 3),
  [134] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 3),
  [136] = {.count = 1, .reusable = true}, SHIFT(46),
  [138] = {.count = 1, .reusable = true}, SHIFT(26),
  [140] = {.count = 1, .reusable = true}, SHIFT(43),
  [142] = {.count = 1, .reusable = true}, REDUCE(aux_sym__list_of_values_repeat1, 2),
  [144] = {.count = 2, .reusable = true}, REDUCE(aux_sym__list_of_values_repeat1, 2), SHIFT_REPEAT(26),
  [147] = {.count = 1, .reusable = true}, SHIFT(28),
  [149] = {.count = 1, .reusable = true}, SHIFT(30),
  [151] = {.count = 1, .reusable = true}, SHIFT(12),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym__list_of_values, 4),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym_atomic_value, 1),
  [157] = {.count = 1, .reusable = true}, REDUCE(sym__list_of_values, 3),
  [159] = {.count = 1, .reusable = true}, SHIFT(5),
  [161] = {.count = 1, .reusable = true}, SHIFT(3),
  [163] = {.count = 1, .reusable = true}, SHIFT(25),
  [165] = {.count = 1, .reusable = true}, SHIFT(13),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym_document, 4),
  [169] = {.count = 1, .reusable = true}, REDUCE(sym_document, 3),
  [171] = {.count = 1, .reusable = true}, SHIFT(22),
  [173] = {.count = 1, .reusable = true}, SHIFT(8),
  [175] = {.count = 1, .reusable = true}, SHIFT(40),
  [177] = {.count = 1, .reusable = true}, SHIFT(49),
  [179] = {.count = 1, .reusable = true}, SHIFT(41),
  [181] = {.count = 1, .reusable = true}, SHIFT(48),
  [183] = {.count = 1, .reusable = true}, REDUCE(sym_document, 2),
  [185] = {.count = 1, .reusable = true}, SHIFT(36),
  [187] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [189] = {.count = 1, .reusable = true}, SHIFT(42),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_jsdoc(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
