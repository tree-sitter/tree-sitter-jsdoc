#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 48
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
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
  sym_type = 12,
  sym__text = 13,
  sym__begin = 14,
  sym__end = 15,
  sym_document = 16,
  sym_description = 17,
  sym_tag = 18,
  sym_inline_tag = 19,
  sym__expression = 20,
  sym_qualified_expression = 21,
  sym_path_expression = 22,
  sym_member_expression = 23,
  aux_sym_document_repeat1 = 24,
  aux_sym_description_repeat1 = 25,
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
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_description_repeat1] = "description_repeat1",
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
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '.')
        ADVANCE(4);
      if (lookahead == '/')
        ADVANCE(5);
      if (lookahead == ':')
        ADVANCE(6);
      if (lookahead == '@')
        ADVANCE(7);
      if (lookahead == '{')
        ADVANCE(8);
      if (lookahead == '}')
        ADVANCE(9);
      if (lookahead == '~')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(11);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '*')
        ADVANCE(13);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(2);
      if (lookahead == '\r')
        SKIP(11);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '*')
        SKIP(14);
      if (lookahead == '.')
        ADVANCE(4);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == ':')
        ADVANCE(6);
      if (lookahead == '@')
        ADVANCE(7);
      if (lookahead == '{')
        ADVANCE(8);
      if (lookahead == '}')
        ADVANCE(9);
      if (lookahead == '~')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(2);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(12);
      if (lookahead != 0)
        ADVANCE(13);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 7:
      if (lookahead == 'a')
        ADVANCE(16);
      if (lookahead == 'b')
        ADVANCE(17);
      if (lookahead == 'c')
        ADVANCE(18);
      if (lookahead == 'e')
        ADVANCE(19);
      if (lookahead == 'f')
        ADVANCE(20);
      if (lookahead == 'm')
        ADVANCE(21);
      if (lookahead == 'n')
        ADVANCE(22);
      if (lookahead == 'p')
        ADVANCE(23);
      if (lookahead == 'r')
        ADVANCE(24);
      if (lookahead == 't')
        ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 11:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '.')
        ADVANCE(4);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == ':')
        ADVANCE(6);
      if (lookahead == '@')
        ADVANCE(7);
      if (lookahead == '{')
        ADVANCE(8);
      if (lookahead == '}')
        ADVANCE(9);
      if (lookahead == '~')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(11);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '*')
        ADVANCE(13);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '/')
        ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(28);
      END_STATE();
    case 14:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(2);
      if (lookahead == '\r')
        SKIP(11);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '*')
        SKIP(14);
      if (lookahead == '.')
        ADVANCE(4);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == ':')
        ADVANCE(6);
      if (lookahead == '@')
        ADVANCE(7);
      if (lookahead == '{')
        ADVANCE(8);
      if (lookahead == '}')
        ADVANCE(9);
      if (lookahead == '~')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(14);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(12);
      if (lookahead != 0)
        ADVANCE(13);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c')
        ADVANCE(29);
      if (lookahead == 'l')
        ADVANCE(30);
      if (lookahead == 'p')
        ADVANCE(31);
      if (lookahead == 'u')
        ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o')
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a')
        ADVANCE(34);
      if (lookahead == 'o')
        ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'v')
        ADVANCE(36);
      if (lookahead == 'x')
        ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i')
        ADVANCE(38);
      if (lookahead == 'u')
        ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i')
        ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a')
        ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a')
        ADVANCE(42);
      if (lookahead == 'r')
        ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e')
        ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'h')
        ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_tag_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*')
        ADVANCE(46);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c')
        ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i')
        ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i')
        ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'g')
        ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r')
        ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l')
        ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n')
        ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e')
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p')
        ADVANCE(55);
      if (lookahead == 't')
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r')
        ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n')
        ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'x')
        ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'm')
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r')
        ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o')
        ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't')
        ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r')
        ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*')
        ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(64);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e')
        ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a')
        ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_tag_name_with_argument);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'm')
        ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r')
        ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l')
        ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's')
        ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n')
        ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o')
        ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e')
        ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e')
        ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c')
        ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e')
        ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a')
        ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p')
        ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u')
        ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o')
        ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 64:
      if (lookahead == '*')
        ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's')
        ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's')
        ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e')
        ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o')
        ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'b')
        ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't')
        ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't')
        ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r')
        ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r')
        ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't')
        ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_tag_name_with_argument);
      if (lookahead == 's')
        ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'm')
        ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e')
        ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r')
        ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'w')
        ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n')
        ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'w')
        ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a')
        ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r')
        ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't')
        ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n')
        ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i')
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p')
        ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r')
        ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n')
        ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_tag_name_with_type);
      if (lookahead == 's')
        ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c')
        ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u')
        ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a')
        ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o')
        ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a')
        ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't')
        ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_tag_name_with_type);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'k')
        ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c')
        ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l')
        ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n')
        ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c')
        ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y')
        ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't')
        ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e')
        ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o')
        ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r')
        ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 108:
      if (lookahead == '\n')
        SKIP(109);
      if (lookahead == '/')
        ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(108);
      END_STATE();
    case 109:
      if (lookahead == '\n')
        SKIP(109);
      if (lookahead == '\r')
        SKIP(108);
      if (lookahead == '*')
        SKIP(111);
      if (lookahead == '/')
        ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__begin);
      if (lookahead == '*')
        ADVANCE(110);
      END_STATE();
    case 111:
      if (lookahead == '\n')
        SKIP(109);
      if (lookahead == '\r')
        SKIP(108);
      if (lookahead == '*')
        SKIP(111);
      if (lookahead == '/')
        ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(111);
      END_STATE();
    case 112:
      if (lookahead == '\n')
        SKIP(113);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == '@')
        ADVANCE(7);
      if (lookahead == '{')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(112);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '}')
        ADVANCE(13);
      END_STATE();
    case 113:
      if (lookahead == '\n')
        SKIP(113);
      if (lookahead == '\r')
        SKIP(112);
      if (lookahead == '*')
        SKIP(114);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == '@')
        ADVANCE(7);
      if (lookahead == '{')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(113);
      if (lookahead != 0 &&
          lookahead != '}')
        ADVANCE(13);
      END_STATE();
    case 114:
      if (lookahead == '\n')
        SKIP(113);
      if (lookahead == '\r')
        SKIP(112);
      if (lookahead == '*')
        SKIP(114);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == '@')
        ADVANCE(7);
      if (lookahead == '{')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(114);
      if (lookahead != 0 &&
          lookahead != '}')
        ADVANCE(13);
      END_STATE();
    case 115:
      if (lookahead == '\n')
        SKIP(116);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == '@')
        ADVANCE(7);
      if (lookahead == '{')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(115);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '}')
        ADVANCE(13);
      END_STATE();
    case 116:
      if (lookahead == '\n')
        SKIP(116);
      if (lookahead == '\r')
        SKIP(115);
      if (lookahead == '*')
        SKIP(117);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == '@')
        ADVANCE(7);
      if (lookahead == '{')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(116);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '}')
        ADVANCE(13);
      END_STATE();
    case 117:
      if (lookahead == '\n')
        SKIP(116);
      if (lookahead == '\r')
        SKIP(115);
      if (lookahead == '*')
        SKIP(117);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == '@')
        ADVANCE(7);
      if (lookahead == '{')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(117);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '}')
        ADVANCE(13);
      END_STATE();
    case 118:
      if (lookahead == '\n')
        SKIP(119);
      if (lookahead == '@')
        ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(118);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(13);
      END_STATE();
    case 119:
      if (lookahead == '\n')
        SKIP(119);
      if (lookahead == '\r')
        SKIP(118);
      if (lookahead == '*')
        SKIP(121);
      if (lookahead == '@')
        ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(119);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(13);
      END_STATE();
    case 120:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 121:
      if (lookahead == '\n')
        SKIP(119);
      if (lookahead == '\r')
        SKIP(118);
      if (lookahead == '*')
        SKIP(121);
      if (lookahead == '@')
        ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(121);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(13);
      END_STATE();
    case 122:
      if (lookahead == '\n')
        SKIP(123);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '}')
        ADVANCE(125);
      END_STATE();
    case 123:
      if (lookahead == '\n')
        SKIP(123);
      if (lookahead == '\r')
        ADVANCE(124);
      if (lookahead == '*')
        ADVANCE(126);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '}')
        ADVANCE(125);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_type);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}')
        ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_type);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}')
        ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_type);
      if (lookahead == '\r')
        ADVANCE(124);
      if (lookahead == '*')
        ADVANCE(126);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}')
        ADVANCE(125);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_type);
      if (lookahead == '\r')
        ADVANCE(124);
      if (lookahead == '*')
        ADVANCE(126);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}')
        ADVANCE(125);
      END_STATE();
    case 128:
      if (lookahead == '\n')
        SKIP(129);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '.')
        ADVANCE(4);
      if (lookahead == '/')
        ADVANCE(5);
      if (lookahead == ':')
        ADVANCE(6);
      if (lookahead == '@')
        ADVANCE(7);
      if (lookahead == '~')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(130);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(13);
      END_STATE();
    case 129:
      if (lookahead == '\n')
        SKIP(129);
      if (lookahead == '\r')
        SKIP(130);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '*')
        SKIP(131);
      if (lookahead == '.')
        ADVANCE(4);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == ':')
        ADVANCE(6);
      if (lookahead == '@')
        ADVANCE(7);
      if (lookahead == '~')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(129);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(13);
      END_STATE();
    case 130:
      if (lookahead == '\n')
        SKIP(129);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '.')
        ADVANCE(4);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == ':')
        ADVANCE(6);
      if (lookahead == '@')
        ADVANCE(7);
      if (lookahead == '~')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(130);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(13);
      END_STATE();
    case 131:
      if (lookahead == '\n')
        SKIP(129);
      if (lookahead == '\r')
        SKIP(130);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '*')
        SKIP(131);
      if (lookahead == '.')
        ADVANCE(4);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == ':')
        ADVANCE(6);
      if (lookahead == '@')
        ADVANCE(7);
      if (lookahead == '~')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(131);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(13);
      END_STATE();
    case 132:
      if (lookahead == '\n')
        SKIP(133);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '.')
        ADVANCE(4);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == '@')
        ADVANCE(7);
      if (lookahead == '~')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(132);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(13);
      END_STATE();
    case 133:
      if (lookahead == '\n')
        SKIP(133);
      if (lookahead == '\r')
        SKIP(132);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '*')
        SKIP(134);
      if (lookahead == '.')
        ADVANCE(4);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == '@')
        ADVANCE(7);
      if (lookahead == '~')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(133);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(13);
      END_STATE();
    case 134:
      if (lookahead == '\n')
        SKIP(133);
      if (lookahead == '\r')
        SKIP(132);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '*')
        SKIP(134);
      if (lookahead == '.')
        ADVANCE(4);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == '@')
        ADVANCE(7);
      if (lookahead == '~')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(134);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(13);
      END_STATE();
    case 135:
      if (lookahead == '\n')
        SKIP(136);
      if (lookahead == '{')
        ADVANCE(8);
      if (lookahead == '}')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(135);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '@')
        ADVANCE(13);
      END_STATE();
    case 136:
      if (lookahead == '\n')
        SKIP(136);
      if (lookahead == '\r')
        SKIP(135);
      if (lookahead == '*')
        SKIP(137);
      if (lookahead == '{')
        ADVANCE(8);
      if (lookahead == '}')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(136);
      if (lookahead != 0 &&
          lookahead != '@')
        ADVANCE(13);
      END_STATE();
    case 137:
      if (lookahead == '\n')
        SKIP(136);
      if (lookahead == '\r')
        SKIP(135);
      if (lookahead == '*')
        SKIP(137);
      if (lookahead == '{')
        ADVANCE(8);
      if (lookahead == '}')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(137);
      if (lookahead != 0 &&
          lookahead != '@')
        ADVANCE(13);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 108},
  [2] = {.lex_state = 112},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 112},
  [5] = {.lex_state = 112},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 112},
  [8] = {.lex_state = 115},
  [9] = {.lex_state = 112},
  [10] = {.lex_state = 112},
  [11] = {.lex_state = 118},
  [12] = {.lex_state = 112},
  [13] = {.lex_state = 112},
  [14] = {.lex_state = 122},
  [15] = {.lex_state = 122},
  [16] = {.lex_state = 128},
  [17] = {.lex_state = 132},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 112},
  [20] = {.lex_state = 112},
  [21] = {.lex_state = 118},
  [22] = {.lex_state = 112},
  [23] = {.lex_state = 135},
  [24] = {.lex_state = 135},
  [25] = {.lex_state = 115},
  [26] = {.lex_state = 115},
  [27] = {.lex_state = 115},
  [28] = {.lex_state = 112},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 135},
  [31] = {.lex_state = 112},
  [32] = {.lex_state = 115},
  [33] = {.lex_state = 132},
  [34] = {.lex_state = 132},
  [35] = {.lex_state = 130},
  [36] = {.lex_state = 132},
  [37] = {.lex_state = 112},
  [38] = {.lex_state = 112},
  [39] = {.lex_state = 132},
  [40] = {.lex_state = 112},
  [41] = {.lex_state = 135},
  [42] = {.lex_state = 135},
  [43] = {.lex_state = 135},
  [44] = {.lex_state = 135},
  [45] = {.lex_state = 135},
  [46] = {.lex_state = 118},
  [47] = {.lex_state = 118},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_tag_name] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [sym__end] = ACTIONS(1),
    [sym_tag_name_with_type] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__text] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym_tag_name_with_argument] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(3),
    [sym__begin] = ACTIONS(3),
  },
  [2] = {
    [sym_tag] = STATE(9),
    [aux_sym_document_repeat1] = STATE(9),
    [sym_description] = STATE(10),
    [sym__text] = ACTIONS(5),
    [sym_tag_name] = ACTIONS(7),
    [sym__end] = ACTIONS(9),
    [sym_tag_name_with_type] = ACTIONS(11),
    [sym_tag_name_with_argument] = ACTIONS(13),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(15),
  },
  [4] = {
    [sym_inline_tag] = STATE(12),
    [aux_sym_description_repeat1] = STATE(12),
    [sym_tag_name] = ACTIONS(17),
    [sym__text] = ACTIONS(19),
    [sym__end] = ACTIONS(21),
    [sym_tag_name_with_type] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(23),
    [sym_tag_name_with_argument] = ACTIONS(17),
  },
  [5] = {
    [sym_description] = STATE(13),
    [sym_tag_name] = ACTIONS(25),
    [sym__text] = ACTIONS(5),
    [sym__end] = ACTIONS(27),
    [sym_tag_name_with_type] = ACTIONS(25),
    [sym_tag_name_with_argument] = ACTIONS(25),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(29),
  },
  [7] = {
    [sym_description] = STATE(13),
    [sym_tag_name] = ACTIONS(25),
    [sym__text] = ACTIONS(5),
    [sym__end] = ACTIONS(27),
    [sym_tag_name_with_type] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_tag_name_with_argument] = ACTIONS(25),
  },
  [8] = {
    [sym_path_expression] = STATE(17),
    [sym__expression] = STATE(17),
    [sym_description] = STATE(13),
    [sym_member_expression] = STATE(17),
    [sym_qualified_expression] = STATE(17),
    [sym_tag_name] = ACTIONS(25),
    [sym__text] = ACTIONS(5),
    [sym__end] = ACTIONS(27),
    [sym_tag_name_with_type] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(33),
    [sym_tag_name_with_argument] = ACTIONS(25),
    [sym_identifier] = ACTIONS(35),
  },
  [9] = {
    [sym_tag] = STATE(19),
    [aux_sym_document_repeat1] = STATE(19),
    [sym_tag_name] = ACTIONS(7),
    [sym__end] = ACTIONS(37),
    [sym_tag_name_with_type] = ACTIONS(11),
    [sym_tag_name_with_argument] = ACTIONS(13),
  },
  [10] = {
    [sym_tag] = STATE(20),
    [aux_sym_document_repeat1] = STATE(20),
    [sym_tag_name] = ACTIONS(7),
    [sym__end] = ACTIONS(37),
    [sym_tag_name_with_type] = ACTIONS(11),
    [sym_tag_name_with_argument] = ACTIONS(13),
  },
  [11] = {
    [sym_tag_name] = ACTIONS(39),
  },
  [12] = {
    [sym_inline_tag] = STATE(22),
    [aux_sym_description_repeat1] = STATE(22),
    [sym_tag_name] = ACTIONS(41),
    [sym__text] = ACTIONS(43),
    [sym__end] = ACTIONS(45),
    [sym_tag_name_with_type] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(23),
    [sym_tag_name_with_argument] = ACTIONS(41),
  },
  [13] = {
    [sym_tag_name] = ACTIONS(47),
    [sym__end] = ACTIONS(49),
    [sym_tag_name_with_type] = ACTIONS(47),
    [sym_tag_name_with_argument] = ACTIONS(47),
  },
  [14] = {
    [sym_type] = ACTIONS(51),
  },
  [15] = {
    [sym_type] = ACTIONS(53),
  },
  [16] = {
    [sym_tag_name] = ACTIONS(55),
    [anon_sym_TILDE] = ACTIONS(57),
    [sym__end] = ACTIONS(55),
    [sym_tag_name_with_type] = ACTIONS(55),
    [anon_sym_COLON] = ACTIONS(59),
    [sym__text] = ACTIONS(55),
    [anon_sym_SLASH] = ACTIONS(61),
    [anon_sym_POUND] = ACTIONS(57),
    [sym_tag_name_with_argument] = ACTIONS(55),
    [anon_sym_DOT] = ACTIONS(57),
  },
  [17] = {
    [sym_description] = STATE(28),
    [sym_tag_name] = ACTIONS(47),
    [anon_sym_TILDE] = ACTIONS(63),
    [sym__end] = ACTIONS(49),
    [sym_tag_name_with_type] = ACTIONS(47),
    [sym__text] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(63),
    [sym_tag_name_with_argument] = ACTIONS(47),
    [anon_sym_DOT] = ACTIONS(63),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(65),
  },
  [19] = {
    [sym_tag] = STATE(19),
    [aux_sym_document_repeat1] = STATE(19),
    [sym_tag_name] = ACTIONS(67),
    [sym__end] = ACTIONS(70),
    [sym_tag_name_with_type] = ACTIONS(72),
    [sym_tag_name_with_argument] = ACTIONS(75),
  },
  [20] = {
    [sym_tag] = STATE(19),
    [aux_sym_document_repeat1] = STATE(19),
    [sym_tag_name] = ACTIONS(7),
    [sym__end] = ACTIONS(78),
    [sym_tag_name_with_type] = ACTIONS(11),
    [sym_tag_name_with_argument] = ACTIONS(13),
  },
  [21] = {
    [sym_description] = STATE(30),
    [sym__text] = ACTIONS(80),
  },
  [22] = {
    [sym_inline_tag] = STATE(22),
    [aux_sym_description_repeat1] = STATE(22),
    [sym_tag_name] = ACTIONS(82),
    [sym__text] = ACTIONS(84),
    [sym__end] = ACTIONS(87),
    [sym_tag_name_with_type] = ACTIONS(82),
    [anon_sym_LBRACE] = ACTIONS(89),
    [sym_tag_name_with_argument] = ACTIONS(82),
  },
  [23] = {
    [anon_sym_RBRACE] = ACTIONS(92),
  },
  [24] = {
    [anon_sym_RBRACE] = ACTIONS(94),
  },
  [25] = {
    [sym_path_expression] = STATE(33),
    [sym__expression] = STATE(33),
    [sym_member_expression] = STATE(33),
    [sym_qualified_expression] = STATE(33),
    [sym_identifier] = ACTIONS(35),
  },
  [26] = {
    [sym_identifier] = ACTIONS(96),
  },
  [27] = {
    [sym_qualified_expression] = STATE(36),
    [sym_identifier] = ACTIONS(98),
  },
  [28] = {
    [sym_tag_name] = ACTIONS(100),
    [sym__end] = ACTIONS(102),
    [sym_tag_name_with_type] = ACTIONS(100),
    [sym_tag_name_with_argument] = ACTIONS(100),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(104),
  },
  [30] = {
    [anon_sym_RBRACE] = ACTIONS(106),
  },
  [31] = {
    [sym_description] = STATE(38),
    [sym_tag_name] = ACTIONS(108),
    [sym__text] = ACTIONS(5),
    [sym__end] = ACTIONS(110),
    [sym_tag_name_with_type] = ACTIONS(108),
    [sym_tag_name_with_argument] = ACTIONS(108),
  },
  [32] = {
    [sym_path_expression] = STATE(39),
    [sym__expression] = STATE(39),
    [sym_description] = STATE(38),
    [sym_member_expression] = STATE(39),
    [sym_qualified_expression] = STATE(39),
    [sym_tag_name] = ACTIONS(108),
    [sym__text] = ACTIONS(5),
    [sym__end] = ACTIONS(110),
    [sym_tag_name_with_type] = ACTIONS(108),
    [sym_tag_name_with_argument] = ACTIONS(108),
    [sym_identifier] = ACTIONS(35),
  },
  [33] = {
    [sym_tag_name] = ACTIONS(112),
    [anon_sym_TILDE] = ACTIONS(114),
    [sym__end] = ACTIONS(114),
    [sym_tag_name_with_type] = ACTIONS(112),
    [sym__text] = ACTIONS(112),
    [anon_sym_POUND] = ACTIONS(114),
    [sym_tag_name_with_argument] = ACTIONS(112),
    [anon_sym_DOT] = ACTIONS(114),
  },
  [34] = {
    [sym_tag_name] = ACTIONS(116),
    [anon_sym_TILDE] = ACTIONS(118),
    [sym__end] = ACTIONS(118),
    [sym_tag_name_with_type] = ACTIONS(116),
    [sym__text] = ACTIONS(116),
    [anon_sym_POUND] = ACTIONS(118),
    [sym_tag_name_with_argument] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(118),
  },
  [35] = {
    [sym_tag_name] = ACTIONS(120),
    [anon_sym_TILDE] = ACTIONS(122),
    [sym__end] = ACTIONS(122),
    [sym_tag_name_with_type] = ACTIONS(120),
    [anon_sym_COLON] = ACTIONS(59),
    [sym__text] = ACTIONS(120),
    [anon_sym_POUND] = ACTIONS(122),
    [sym_tag_name_with_argument] = ACTIONS(120),
    [anon_sym_DOT] = ACTIONS(122),
  },
  [36] = {
    [sym_tag_name] = ACTIONS(120),
    [anon_sym_TILDE] = ACTIONS(122),
    [sym__end] = ACTIONS(122),
    [sym_tag_name_with_type] = ACTIONS(120),
    [sym__text] = ACTIONS(120),
    [anon_sym_POUND] = ACTIONS(122),
    [sym_tag_name_with_argument] = ACTIONS(120),
    [anon_sym_DOT] = ACTIONS(122),
  },
  [37] = {
    [sym_tag_name] = ACTIONS(124),
    [sym__text] = ACTIONS(124),
    [sym__end] = ACTIONS(126),
    [sym_tag_name_with_type] = ACTIONS(124),
    [anon_sym_LBRACE] = ACTIONS(126),
    [sym_tag_name_with_argument] = ACTIONS(124),
  },
  [38] = {
    [sym_tag_name] = ACTIONS(128),
    [sym__end] = ACTIONS(130),
    [sym_tag_name_with_type] = ACTIONS(128),
    [sym_tag_name_with_argument] = ACTIONS(128),
  },
  [39] = {
    [sym_description] = STATE(40),
    [sym_tag_name] = ACTIONS(128),
    [anon_sym_TILDE] = ACTIONS(63),
    [sym__end] = ACTIONS(130),
    [sym_tag_name_with_type] = ACTIONS(128),
    [sym__text] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(63),
    [sym_tag_name_with_argument] = ACTIONS(128),
    [anon_sym_DOT] = ACTIONS(63),
  },
  [40] = {
    [sym_tag_name] = ACTIONS(132),
    [sym__end] = ACTIONS(134),
    [sym_tag_name_with_type] = ACTIONS(132),
    [sym_tag_name_with_argument] = ACTIONS(132),
  },
  [41] = {
    [sym_inline_tag] = STATE(42),
    [aux_sym_description_repeat1] = STATE(42),
    [anon_sym_LBRACE] = ACTIONS(136),
    [anon_sym_RBRACE] = ACTIONS(21),
    [sym__text] = ACTIONS(138),
  },
  [42] = {
    [sym_inline_tag] = STATE(43),
    [aux_sym_description_repeat1] = STATE(43),
    [anon_sym_LBRACE] = ACTIONS(136),
    [anon_sym_RBRACE] = ACTIONS(45),
    [sym__text] = ACTIONS(140),
  },
  [43] = {
    [sym_inline_tag] = STATE(43),
    [aux_sym_description_repeat1] = STATE(43),
    [anon_sym_LBRACE] = ACTIONS(142),
    [anon_sym_RBRACE] = ACTIONS(87),
    [sym__text] = ACTIONS(145),
  },
  [44] = {
    [anon_sym_LBRACE] = ACTIONS(126),
    [anon_sym_RBRACE] = ACTIONS(126),
    [sym__text] = ACTIONS(126),
  },
  [45] = {
    [anon_sym_RBRACE] = ACTIONS(148),
  },
  [46] = {
    [sym_description] = STATE(45),
    [sym__text] = ACTIONS(80),
  },
  [47] = {
    [sym_tag_name] = ACTIONS(150),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(2),
  [5] = {.count = 1, .reusable = false}, SHIFT(4),
  [7] = {.count = 1, .reusable = false}, SHIFT(5),
  [9] = {.count = 1, .reusable = true}, SHIFT(6),
  [11] = {.count = 1, .reusable = false}, SHIFT(7),
  [13] = {.count = 1, .reusable = false}, SHIFT(8),
  [15] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [17] = {.count = 1, .reusable = false}, REDUCE(sym_description, 1),
  [19] = {.count = 1, .reusable = false}, SHIFT(12),
  [21] = {.count = 1, .reusable = true}, REDUCE(sym_description, 1),
  [23] = {.count = 1, .reusable = true}, SHIFT(11),
  [25] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 1),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 1),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym_document, 2),
  [31] = {.count = 1, .reusable = true}, SHIFT(14),
  [33] = {.count = 1, .reusable = true}, SHIFT(15),
  [35] = {.count = 1, .reusable = true}, SHIFT(16),
  [37] = {.count = 1, .reusable = true}, SHIFT(18),
  [39] = {.count = 1, .reusable = true}, SHIFT(21),
  [41] = {.count = 1, .reusable = false}, REDUCE(sym_description, 2),
  [43] = {.count = 1, .reusable = false}, SHIFT(22),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_description, 2),
  [47] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 2),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [51] = {.count = 1, .reusable = true}, SHIFT(23),
  [53] = {.count = 1, .reusable = true}, SHIFT(24),
  [55] = {.count = 1, .reusable = false}, REDUCE(sym__expression, 1),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym__expression, 1),
  [59] = {.count = 1, .reusable = true}, SHIFT(25),
  [61] = {.count = 1, .reusable = true}, SHIFT(26),
  [63] = {.count = 1, .reusable = true}, SHIFT(27),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym_document, 3),
  [67] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [70] = {.count = 1, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2),
  [72] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(7),
  [75] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(8),
  [78] = {.count = 1, .reusable = true}, SHIFT(29),
  [80] = {.count = 1, .reusable = true}, SHIFT(41),
  [82] = {.count = 1, .reusable = false}, REDUCE(aux_sym_description_repeat1, 2),
  [84] = {.count = 2, .reusable = false}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(22),
  [87] = {.count = 1, .reusable = true}, REDUCE(aux_sym_description_repeat1, 2),
  [89] = {.count = 2, .reusable = true}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(11),
  [92] = {.count = 1, .reusable = true}, SHIFT(31),
  [94] = {.count = 1, .reusable = true}, SHIFT(32),
  [96] = {.count = 1, .reusable = true}, SHIFT(34),
  [98] = {.count = 1, .reusable = true}, SHIFT(35),
  [100] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 3),
  [102] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 3),
  [104] = {.count = 1, .reusable = true}, REDUCE(sym_document, 4),
  [106] = {.count = 1, .reusable = true}, SHIFT(37),
  [108] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 4),
  [110] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 4),
  [112] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_expression, 3),
  [114] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_expression, 3),
  [116] = {.count = 1, .reusable = false}, REDUCE(sym_path_expression, 3),
  [118] = {.count = 1, .reusable = true}, REDUCE(sym_path_expression, 3),
  [120] = {.count = 1, .reusable = false}, REDUCE(sym_member_expression, 3),
  [122] = {.count = 1, .reusable = true}, REDUCE(sym_member_expression, 3),
  [124] = {.count = 1, .reusable = false}, REDUCE(sym_inline_tag, 4),
  [126] = {.count = 1, .reusable = true}, REDUCE(sym_inline_tag, 4),
  [128] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 5),
  [130] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 5),
  [132] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 6),
  [134] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 6),
  [136] = {.count = 1, .reusable = true}, SHIFT(47),
  [138] = {.count = 1, .reusable = true}, SHIFT(42),
  [140] = {.count = 1, .reusable = true}, SHIFT(43),
  [142] = {.count = 2, .reusable = true}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(47),
  [145] = {.count = 2, .reusable = true}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(43),
  [148] = {.count = 1, .reusable = true}, SHIFT(44),
  [150] = {.count = 1, .reusable = true}, SHIFT(46),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_jsdoc(void) {
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
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
