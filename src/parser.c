#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 48
#define SYMBOL_COUNT 41
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_ATaccess = 1,
  anon_sym_ATalias = 2,
  anon_sym_ATaugments = 3,
  anon_sym_ATborrows = 4,
  anon_sym_ATcallback = 5,
  anon_sym_ATconstructor = 6,
  anon_sym_ATevent = 7,
  anon_sym_ATexports = 8,
  anon_sym_ATexternal = 9,
  anon_sym_ATfires = 10,
  anon_sym_ATfunction = 11,
  anon_sym_ATmixes = 12,
  anon_sym_ATname = 13,
  anon_sym_ATnamespace = 14,
  anon_sym_ATparam = 15,
  anon_sym_ATproperty = 16,
  anon_sym_LBRACE = 17,
  anon_sym_RBRACE = 18,
  anon_sym_ATreturns = 19,
  sym_tag_name = 20,
  anon_sym_COLON = 21,
  anon_sym_SLASH = 22,
  anon_sym_DOT = 23,
  anon_sym_POUND = 24,
  anon_sym_TILDE = 25,
  sym_identifier = 26,
  sym_type = 27,
  sym__text = 28,
  sym__begin = 29,
  sym__end = 30,
  sym_document = 31,
  sym_description = 32,
  sym_tag = 33,
  sym_inline_tag = 34,
  sym__expression = 35,
  sym_qualified_expression = 36,
  sym_path_expression = 37,
  sym_member_expression = 38,
  aux_sym_document_repeat1 = 39,
  aux_sym_description_repeat1 = 40,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_ATaccess] = "@access",
  [anon_sym_ATalias] = "@alias",
  [anon_sym_ATaugments] = "@augments",
  [anon_sym_ATborrows] = "@borrows",
  [anon_sym_ATcallback] = "@callback",
  [anon_sym_ATconstructor] = "@constructor",
  [anon_sym_ATevent] = "@event",
  [anon_sym_ATexports] = "@exports",
  [anon_sym_ATexternal] = "@external",
  [anon_sym_ATfires] = "@fires",
  [anon_sym_ATfunction] = "@function",
  [anon_sym_ATmixes] = "@mixes",
  [anon_sym_ATname] = "@name",
  [anon_sym_ATnamespace] = "@namespace",
  [anon_sym_ATparam] = "@param",
  [anon_sym_ATproperty] = "@property",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_ATreturns] = "@returns",
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
  [anon_sym_ATaccess] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATalias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATaugments] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATborrows] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATcallback] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATconstructor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATevent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATexports] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATexternal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATfires] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATfunction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATmixes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATname] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATnamespace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATparam] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATproperty] = {
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
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(123);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '@')
        ADVANCE(9);
      if (lookahead == '{')
        ADVANCE(115);
      if (lookahead == '}')
        ADVANCE(116);
      if (lookahead == '~')
        ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(124);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      if (lookahead != '\r' &&
          lookahead != '*')
        ADVANCE(119);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '*')
        SKIP(4);
      if (lookahead == '.')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(6);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '@')
        ADVANCE(9);
      if (lookahead == '{')
        ADVANCE(115);
      if (lookahead == '}')
        ADVANCE(116);
      if (lookahead == '~')
        ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(2);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      if (lookahead != '\r')
        ADVANCE(119);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 4:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '*')
        SKIP(4);
      if (lookahead == '.')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(6);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '@')
        ADVANCE(9);
      if (lookahead == '{')
        ADVANCE(115);
      if (lookahead == '}')
        ADVANCE(116);
      if (lookahead == '~')
        ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(4);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      if (lookahead != '\r')
        ADVANCE(119);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym__end);
      if (lookahead == '*')
        ADVANCE(7);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym__begin);
      if (lookahead == '*')
        ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 9:
      if (lookahead == 'a')
        ADVANCE(10);
      if (lookahead == 'b')
        ADVANCE(28);
      if (lookahead == 'c')
        ADVANCE(35);
      if (lookahead == 'e')
        ADVANCE(53);
      if (lookahead == 'f')
        ADVANCE(70);
      if (lookahead == 'm')
        ADVANCE(82);
      if (lookahead == 'n')
        ADVANCE(87);
      if (lookahead == 'p')
        ADVANCE(96);
      if (lookahead == 'r')
        ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c')
        ADVANCE(11);
      if (lookahead == 'l')
        ADVANCE(17);
      if (lookahead == 'u')
        ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c')
        ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e')
        ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's')
        ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_ATaccess);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_tag_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i')
        ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a')
        ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's')
        ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_ATalias);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'g')
        ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'm')
        ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e')
        ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n')
        ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't')
        ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's')
        ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_ATaugments);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o')
        ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r')
        ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r')
        ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o')
        ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'w')
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's')
        ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_ATborrows);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a')
        ADVANCE(36);
      if (lookahead == 'o')
        ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l')
        ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l')
        ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'b')
        ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a')
        ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c')
        ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'k')
        ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_ATcallback);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n')
        ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's')
        ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't')
        ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r')
        ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u')
        ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c')
        ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't')
        ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o')
        ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r')
        ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_ATconstructor);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'v')
        ADVANCE(54);
      if (lookahead == 'x')
        ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e')
        ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n')
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't')
        ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_ATevent);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p')
        ADVANCE(59);
      if (lookahead == 't')
        ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o')
        ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r')
        ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't')
        ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's')
        ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_ATexports);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e')
        ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r')
        ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n')
        ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a')
        ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l')
        ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_ATexternal);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i')
        ADVANCE(71);
      if (lookahead == 'u')
        ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r')
        ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e')
        ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's')
        ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_ATfires);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n')
        ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c')
        ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't')
        ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i')
        ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o')
        ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n')
        ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_ATfunction);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i')
        ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'x')
        ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e')
        ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's')
        ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_ATmixes);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a')
        ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'm')
        ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e')
        ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_ATname);
      if (lookahead == 's')
        ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p')
        ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a')
        ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c')
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e')
        ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_ATnamespace);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a')
        ADVANCE(97);
      if (lookahead == 'r')
        ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r')
        ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a')
        ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'm')
        ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_ATparam);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o')
        ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p')
        ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e')
        ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r')
        ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't')
        ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y')
        ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_ATproperty);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e')
        ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't')
        ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u')
        ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r')
        ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n')
        ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's')
        ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_ATreturns);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '/')
        ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(120);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*')
        ADVANCE(121);
      if (lookahead == '/')
        ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*')
        ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(122);
      END_STATE();
    case 122:
      if (lookahead == '*')
        ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*')
        ADVANCE(7);
      END_STATE();
    case 124:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '.')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(6);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '@')
        ADVANCE(9);
      if (lookahead == '{')
        ADVANCE(115);
      if (lookahead == '}')
        ADVANCE(116);
      if (lookahead == '~')
        ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(124);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      if (lookahead != '\r' &&
          lookahead != '*')
        ADVANCE(119);
      END_STATE();
    case 125:
      if (lookahead == '\n')
        SKIP(126);
      if (lookahead == '/')
        ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(125);
      END_STATE();
    case 126:
      if (lookahead == '\n')
        SKIP(126);
      if (lookahead == '*')
        SKIP(127);
      if (lookahead == '/')
        ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(126);
      END_STATE();
    case 127:
      if (lookahead == '\n')
        SKIP(126);
      if (lookahead == '*')
        SKIP(127);
      if (lookahead == '/')
        ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(127);
      END_STATE();
    case 128:
      if (lookahead == '\n')
        SKIP(129);
      if (lookahead == '/')
        ADVANCE(131);
      if (lookahead == '@')
        ADVANCE(9);
      if (lookahead == '{')
        ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(128);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != '}')
        ADVANCE(119);
      END_STATE();
    case 129:
      if (lookahead == '\n')
        SKIP(129);
      if (lookahead == '*')
        SKIP(130);
      if (lookahead == '/')
        ADVANCE(131);
      if (lookahead == '@')
        ADVANCE(9);
      if (lookahead == '{')
        ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(129);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '}')
        ADVANCE(119);
      END_STATE();
    case 130:
      if (lookahead == '\n')
        SKIP(129);
      if (lookahead == '*')
        SKIP(130);
      if (lookahead == '/')
        ADVANCE(131);
      if (lookahead == '@')
        ADVANCE(9);
      if (lookahead == '{')
        ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(130);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '}')
        ADVANCE(119);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__end);
      END_STATE();
    case 132:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(133);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(132);
      END_STATE();
    case 133:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(133);
      if (lookahead == '*')
        SKIP(134);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(133);
      END_STATE();
    case 134:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(133);
      if (lookahead == '*')
        SKIP(134);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(134);
      END_STATE();
    case 135:
      if (lookahead == '\n')
        SKIP(136);
      if (lookahead == '/')
        ADVANCE(131);
      if (lookahead == '@')
        ADVANCE(9);
      if (lookahead == '{')
        ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(135);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != '}')
        ADVANCE(119);
      END_STATE();
    case 136:
      if (lookahead == '\n')
        SKIP(136);
      if (lookahead == '*')
        SKIP(137);
      if (lookahead == '/')
        ADVANCE(131);
      if (lookahead == '@')
        ADVANCE(9);
      if (lookahead == '{')
        ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(136);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '}')
        ADVANCE(119);
      END_STATE();
    case 137:
      if (lookahead == '\n')
        SKIP(136);
      if (lookahead == '*')
        SKIP(137);
      if (lookahead == '/')
        ADVANCE(131);
      if (lookahead == '@')
        ADVANCE(9);
      if (lookahead == '{')
        ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(137);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '}')
        ADVANCE(119);
      END_STATE();
    case 138:
      if (lookahead == '\n')
        SKIP(139);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '}')
        ADVANCE(141);
      END_STATE();
    case 139:
      if (lookahead == '\n')
        SKIP(139);
      if (lookahead == '*')
        ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '}')
        ADVANCE(141);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_type);
      if (lookahead == '*')
        ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '}')
        ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_type);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}')
        ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_type);
      if (lookahead == '*')
        ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '}')
        ADVANCE(141);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_type);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '}')
        ADVANCE(141);
      END_STATE();
    case 144:
      if (lookahead == '\n')
        SKIP(145);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '.')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(147);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '@')
        ADVANCE(9);
      if (lookahead == '~')
        ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(148);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(119);
      END_STATE();
    case 145:
      if (lookahead == '\n')
        SKIP(145);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '*')
        SKIP(146);
      if (lookahead == '.')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(131);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '@')
        ADVANCE(9);
      if (lookahead == '~')
        ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(145);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(119);
      END_STATE();
    case 146:
      if (lookahead == '\n')
        SKIP(145);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '*')
        SKIP(146);
      if (lookahead == '.')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(131);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '@')
        ADVANCE(9);
      if (lookahead == '~')
        ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(146);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(119);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 148:
      if (lookahead == '\n')
        SKIP(145);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '.')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(131);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '@')
        ADVANCE(9);
      if (lookahead == '~')
        ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(148);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(119);
      END_STATE();
    case 149:
      if (lookahead == '\n')
        SKIP(150);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '.')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(131);
      if (lookahead == '@')
        ADVANCE(9);
      if (lookahead == '~')
        ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(149);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(119);
      END_STATE();
    case 150:
      if (lookahead == '\n')
        SKIP(150);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '*')
        SKIP(151);
      if (lookahead == '.')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(131);
      if (lookahead == '@')
        ADVANCE(9);
      if (lookahead == '~')
        ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(150);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(119);
      END_STATE();
    case 151:
      if (lookahead == '\n')
        SKIP(150);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '*')
        SKIP(151);
      if (lookahead == '.')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(131);
      if (lookahead == '@')
        ADVANCE(9);
      if (lookahead == '~')
        ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(151);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(119);
      END_STATE();
    case 152:
      if (lookahead == '\n')
        SKIP(153);
      if (lookahead == '@')
        ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(152);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(119);
      END_STATE();
    case 153:
      if (lookahead == '\n')
        SKIP(153);
      if (lookahead == '*')
        SKIP(154);
      if (lookahead == '@')
        ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(153);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(119);
      END_STATE();
    case 154:
      if (lookahead == '\n')
        SKIP(153);
      if (lookahead == '*')
        SKIP(154);
      if (lookahead == '@')
        ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(154);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(119);
      END_STATE();
    case 155:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 156:
      if (lookahead == '\n')
        SKIP(157);
      if (lookahead == '{')
        ADVANCE(115);
      if (lookahead == '}')
        ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(156);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != '@')
        ADVANCE(119);
      END_STATE();
    case 157:
      if (lookahead == '\n')
        SKIP(157);
      if (lookahead == '*')
        SKIP(158);
      if (lookahead == '{')
        ADVANCE(115);
      if (lookahead == '}')
        ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(157);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '@')
        ADVANCE(119);
      END_STATE();
    case 158:
      if (lookahead == '\n')
        SKIP(157);
      if (lookahead == '*')
        SKIP(158);
      if (lookahead == '{')
        ADVANCE(115);
      if (lookahead == '}')
        ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(158);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '@')
        ADVANCE(119);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 125},
  [2] = {.lex_state = 128},
  [3] = {.lex_state = 132},
  [4] = {.lex_state = 135},
  [5] = {.lex_state = 128},
  [6] = {.lex_state = 128},
  [7] = {.lex_state = 128},
  [8] = {.lex_state = 132},
  [9] = {.lex_state = 128},
  [10] = {.lex_state = 128},
  [11] = {.lex_state = 138},
  [12] = {.lex_state = 144},
  [13] = {.lex_state = 128},
  [14] = {.lex_state = 149},
  [15] = {.lex_state = 138},
  [16] = {.lex_state = 152},
  [17] = {.lex_state = 128},
  [18] = {.lex_state = 132},
  [19] = {.lex_state = 128},
  [20] = {.lex_state = 128},
  [21] = {.lex_state = 156},
  [22] = {.lex_state = 135},
  [23] = {.lex_state = 135},
  [24] = {.lex_state = 135},
  [25] = {.lex_state = 128},
  [26] = {.lex_state = 156},
  [27] = {.lex_state = 152},
  [28] = {.lex_state = 128},
  [29] = {.lex_state = 132},
  [30] = {.lex_state = 135},
  [31] = {.lex_state = 149},
  [32] = {.lex_state = 149},
  [33] = {.lex_state = 148},
  [34] = {.lex_state = 149},
  [35] = {.lex_state = 128},
  [36] = {.lex_state = 156},
  [37] = {.lex_state = 156},
  [38] = {.lex_state = 128},
  [39] = {.lex_state = 149},
  [40] = {.lex_state = 152},
  [41] = {.lex_state = 156},
  [42] = {.lex_state = 128},
  [43] = {.lex_state = 128},
  [44] = {.lex_state = 152},
  [45] = {.lex_state = 156},
  [46] = {.lex_state = 156},
  [47] = {.lex_state = 156},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_ATaccess] = ACTIONS(3),
    [anon_sym_ATalias] = ACTIONS(3),
    [anon_sym_ATaugments] = ACTIONS(3),
    [anon_sym_ATborrows] = ACTIONS(3),
    [anon_sym_ATcallback] = ACTIONS(3),
    [anon_sym_ATconstructor] = ACTIONS(3),
    [anon_sym_ATevent] = ACTIONS(3),
    [anon_sym_ATexports] = ACTIONS(3),
    [anon_sym_ATexternal] = ACTIONS(3),
    [anon_sym_ATfires] = ACTIONS(3),
    [anon_sym_ATfunction] = ACTIONS(3),
    [anon_sym_ATmixes] = ACTIONS(3),
    [anon_sym_ATname] = ACTIONS(3),
    [anon_sym_ATnamespace] = ACTIONS(3),
    [anon_sym_ATparam] = ACTIONS(3),
    [anon_sym_ATproperty] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_ATreturns] = ACTIONS(3),
    [sym_tag_name] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
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
    [sym_description] = STATE(9),
    [sym_tag] = STATE(10),
    [aux_sym_document_repeat1] = STATE(10),
    [anon_sym_ATaccess] = ACTIONS(7),
    [anon_sym_ATalias] = ACTIONS(7),
    [anon_sym_ATaugments] = ACTIONS(7),
    [anon_sym_ATborrows] = ACTIONS(7),
    [anon_sym_ATcallback] = ACTIONS(7),
    [anon_sym_ATconstructor] = ACTIONS(7),
    [anon_sym_ATevent] = ACTIONS(7),
    [anon_sym_ATexports] = ACTIONS(7),
    [anon_sym_ATexternal] = ACTIONS(7),
    [anon_sym_ATfires] = ACTIONS(7),
    [anon_sym_ATfunction] = ACTIONS(7),
    [anon_sym_ATmixes] = ACTIONS(7),
    [anon_sym_ATname] = ACTIONS(7),
    [anon_sym_ATnamespace] = ACTIONS(7),
    [anon_sym_ATparam] = ACTIONS(7),
    [anon_sym_ATproperty] = ACTIONS(7),
    [anon_sym_ATreturns] = ACTIONS(9),
    [sym_tag_name] = ACTIONS(11),
    [sym__text] = ACTIONS(13),
    [sym__end] = ACTIONS(15),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(17),
  },
  [4] = {
    [sym_description] = STATE(13),
    [sym__expression] = STATE(14),
    [sym_qualified_expression] = STATE(14),
    [sym_path_expression] = STATE(14),
    [sym_member_expression] = STATE(14),
    [anon_sym_ATaccess] = ACTIONS(19),
    [anon_sym_ATalias] = ACTIONS(19),
    [anon_sym_ATaugments] = ACTIONS(19),
    [anon_sym_ATborrows] = ACTIONS(19),
    [anon_sym_ATcallback] = ACTIONS(19),
    [anon_sym_ATconstructor] = ACTIONS(19),
    [anon_sym_ATevent] = ACTIONS(19),
    [anon_sym_ATexports] = ACTIONS(19),
    [anon_sym_ATexternal] = ACTIONS(19),
    [anon_sym_ATfires] = ACTIONS(19),
    [anon_sym_ATfunction] = ACTIONS(19),
    [anon_sym_ATmixes] = ACTIONS(19),
    [anon_sym_ATname] = ACTIONS(19),
    [anon_sym_ATnamespace] = ACTIONS(19),
    [anon_sym_ATparam] = ACTIONS(19),
    [anon_sym_ATproperty] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_ATreturns] = ACTIONS(19),
    [sym_tag_name] = ACTIONS(19),
    [sym_identifier] = ACTIONS(23),
    [sym__text] = ACTIONS(13),
    [sym__end] = ACTIONS(25),
  },
  [5] = {
    [sym_description] = STATE(13),
    [anon_sym_ATaccess] = ACTIONS(19),
    [anon_sym_ATalias] = ACTIONS(19),
    [anon_sym_ATaugments] = ACTIONS(19),
    [anon_sym_ATborrows] = ACTIONS(19),
    [anon_sym_ATcallback] = ACTIONS(19),
    [anon_sym_ATconstructor] = ACTIONS(19),
    [anon_sym_ATevent] = ACTIONS(19),
    [anon_sym_ATexports] = ACTIONS(19),
    [anon_sym_ATexternal] = ACTIONS(19),
    [anon_sym_ATfires] = ACTIONS(19),
    [anon_sym_ATfunction] = ACTIONS(19),
    [anon_sym_ATmixes] = ACTIONS(19),
    [anon_sym_ATname] = ACTIONS(19),
    [anon_sym_ATnamespace] = ACTIONS(19),
    [anon_sym_ATparam] = ACTIONS(19),
    [anon_sym_ATproperty] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_ATreturns] = ACTIONS(19),
    [sym_tag_name] = ACTIONS(19),
    [sym__text] = ACTIONS(13),
    [sym__end] = ACTIONS(25),
  },
  [6] = {
    [sym_description] = STATE(13),
    [anon_sym_ATaccess] = ACTIONS(19),
    [anon_sym_ATalias] = ACTIONS(19),
    [anon_sym_ATaugments] = ACTIONS(19),
    [anon_sym_ATborrows] = ACTIONS(19),
    [anon_sym_ATcallback] = ACTIONS(19),
    [anon_sym_ATconstructor] = ACTIONS(19),
    [anon_sym_ATevent] = ACTIONS(19),
    [anon_sym_ATexports] = ACTIONS(19),
    [anon_sym_ATexternal] = ACTIONS(19),
    [anon_sym_ATfires] = ACTIONS(19),
    [anon_sym_ATfunction] = ACTIONS(19),
    [anon_sym_ATmixes] = ACTIONS(19),
    [anon_sym_ATname] = ACTIONS(19),
    [anon_sym_ATnamespace] = ACTIONS(19),
    [anon_sym_ATparam] = ACTIONS(19),
    [anon_sym_ATproperty] = ACTIONS(19),
    [anon_sym_ATreturns] = ACTIONS(19),
    [sym_tag_name] = ACTIONS(19),
    [sym__text] = ACTIONS(13),
    [sym__end] = ACTIONS(25),
  },
  [7] = {
    [sym_inline_tag] = STATE(17),
    [aux_sym_description_repeat1] = STATE(17),
    [anon_sym_ATaccess] = ACTIONS(29),
    [anon_sym_ATalias] = ACTIONS(29),
    [anon_sym_ATaugments] = ACTIONS(29),
    [anon_sym_ATborrows] = ACTIONS(29),
    [anon_sym_ATcallback] = ACTIONS(29),
    [anon_sym_ATconstructor] = ACTIONS(29),
    [anon_sym_ATevent] = ACTIONS(29),
    [anon_sym_ATexports] = ACTIONS(29),
    [anon_sym_ATexternal] = ACTIONS(29),
    [anon_sym_ATfires] = ACTIONS(29),
    [anon_sym_ATfunction] = ACTIONS(29),
    [anon_sym_ATmixes] = ACTIONS(29),
    [anon_sym_ATname] = ACTIONS(29),
    [anon_sym_ATnamespace] = ACTIONS(29),
    [anon_sym_ATparam] = ACTIONS(29),
    [anon_sym_ATproperty] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_ATreturns] = ACTIONS(29),
    [sym_tag_name] = ACTIONS(29),
    [sym__text] = ACTIONS(33),
    [sym__end] = ACTIONS(35),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(37),
  },
  [9] = {
    [sym_tag] = STATE(19),
    [aux_sym_document_repeat1] = STATE(19),
    [anon_sym_ATaccess] = ACTIONS(7),
    [anon_sym_ATalias] = ACTIONS(7),
    [anon_sym_ATaugments] = ACTIONS(7),
    [anon_sym_ATborrows] = ACTIONS(7),
    [anon_sym_ATcallback] = ACTIONS(7),
    [anon_sym_ATconstructor] = ACTIONS(7),
    [anon_sym_ATevent] = ACTIONS(7),
    [anon_sym_ATexports] = ACTIONS(7),
    [anon_sym_ATexternal] = ACTIONS(7),
    [anon_sym_ATfires] = ACTIONS(7),
    [anon_sym_ATfunction] = ACTIONS(7),
    [anon_sym_ATmixes] = ACTIONS(7),
    [anon_sym_ATname] = ACTIONS(7),
    [anon_sym_ATnamespace] = ACTIONS(7),
    [anon_sym_ATparam] = ACTIONS(7),
    [anon_sym_ATproperty] = ACTIONS(7),
    [anon_sym_ATreturns] = ACTIONS(9),
    [sym_tag_name] = ACTIONS(11),
    [sym__end] = ACTIONS(39),
  },
  [10] = {
    [sym_tag] = STATE(20),
    [aux_sym_document_repeat1] = STATE(20),
    [anon_sym_ATaccess] = ACTIONS(7),
    [anon_sym_ATalias] = ACTIONS(7),
    [anon_sym_ATaugments] = ACTIONS(7),
    [anon_sym_ATborrows] = ACTIONS(7),
    [anon_sym_ATcallback] = ACTIONS(7),
    [anon_sym_ATconstructor] = ACTIONS(7),
    [anon_sym_ATevent] = ACTIONS(7),
    [anon_sym_ATexports] = ACTIONS(7),
    [anon_sym_ATexternal] = ACTIONS(7),
    [anon_sym_ATfires] = ACTIONS(7),
    [anon_sym_ATfunction] = ACTIONS(7),
    [anon_sym_ATmixes] = ACTIONS(7),
    [anon_sym_ATname] = ACTIONS(7),
    [anon_sym_ATnamespace] = ACTIONS(7),
    [anon_sym_ATparam] = ACTIONS(7),
    [anon_sym_ATproperty] = ACTIONS(7),
    [anon_sym_ATreturns] = ACTIONS(9),
    [sym_tag_name] = ACTIONS(11),
    [sym__end] = ACTIONS(39),
  },
  [11] = {
    [sym_type] = ACTIONS(41),
  },
  [12] = {
    [anon_sym_ATaccess] = ACTIONS(43),
    [anon_sym_ATalias] = ACTIONS(43),
    [anon_sym_ATaugments] = ACTIONS(43),
    [anon_sym_ATborrows] = ACTIONS(43),
    [anon_sym_ATcallback] = ACTIONS(43),
    [anon_sym_ATconstructor] = ACTIONS(43),
    [anon_sym_ATevent] = ACTIONS(43),
    [anon_sym_ATexports] = ACTIONS(43),
    [anon_sym_ATexternal] = ACTIONS(43),
    [anon_sym_ATfires] = ACTIONS(43),
    [anon_sym_ATfunction] = ACTIONS(43),
    [anon_sym_ATmixes] = ACTIONS(43),
    [anon_sym_ATname] = ACTIONS(43),
    [anon_sym_ATnamespace] = ACTIONS(43),
    [anon_sym_ATparam] = ACTIONS(43),
    [anon_sym_ATproperty] = ACTIONS(43),
    [anon_sym_ATreturns] = ACTIONS(43),
    [sym_tag_name] = ACTIONS(43),
    [anon_sym_COLON] = ACTIONS(45),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_DOT] = ACTIONS(49),
    [anon_sym_POUND] = ACTIONS(49),
    [anon_sym_TILDE] = ACTIONS(49),
    [sym__text] = ACTIONS(43),
    [sym__end] = ACTIONS(43),
  },
  [13] = {
    [anon_sym_ATaccess] = ACTIONS(51),
    [anon_sym_ATalias] = ACTIONS(51),
    [anon_sym_ATaugments] = ACTIONS(51),
    [anon_sym_ATborrows] = ACTIONS(51),
    [anon_sym_ATcallback] = ACTIONS(51),
    [anon_sym_ATconstructor] = ACTIONS(51),
    [anon_sym_ATevent] = ACTIONS(51),
    [anon_sym_ATexports] = ACTIONS(51),
    [anon_sym_ATexternal] = ACTIONS(51),
    [anon_sym_ATfires] = ACTIONS(51),
    [anon_sym_ATfunction] = ACTIONS(51),
    [anon_sym_ATmixes] = ACTIONS(51),
    [anon_sym_ATname] = ACTIONS(51),
    [anon_sym_ATnamespace] = ACTIONS(51),
    [anon_sym_ATparam] = ACTIONS(51),
    [anon_sym_ATproperty] = ACTIONS(51),
    [anon_sym_ATreturns] = ACTIONS(51),
    [sym_tag_name] = ACTIONS(51),
    [sym__end] = ACTIONS(53),
  },
  [14] = {
    [sym_description] = STATE(25),
    [anon_sym_ATaccess] = ACTIONS(51),
    [anon_sym_ATalias] = ACTIONS(51),
    [anon_sym_ATaugments] = ACTIONS(51),
    [anon_sym_ATborrows] = ACTIONS(51),
    [anon_sym_ATcallback] = ACTIONS(51),
    [anon_sym_ATconstructor] = ACTIONS(51),
    [anon_sym_ATevent] = ACTIONS(51),
    [anon_sym_ATexports] = ACTIONS(51),
    [anon_sym_ATexternal] = ACTIONS(51),
    [anon_sym_ATfires] = ACTIONS(51),
    [anon_sym_ATfunction] = ACTIONS(51),
    [anon_sym_ATmixes] = ACTIONS(51),
    [anon_sym_ATname] = ACTIONS(51),
    [anon_sym_ATnamespace] = ACTIONS(51),
    [anon_sym_ATparam] = ACTIONS(51),
    [anon_sym_ATproperty] = ACTIONS(51),
    [anon_sym_ATreturns] = ACTIONS(51),
    [sym_tag_name] = ACTIONS(51),
    [anon_sym_DOT] = ACTIONS(55),
    [anon_sym_POUND] = ACTIONS(55),
    [anon_sym_TILDE] = ACTIONS(55),
    [sym__text] = ACTIONS(13),
    [sym__end] = ACTIONS(53),
  },
  [15] = {
    [sym_type] = ACTIONS(57),
  },
  [16] = {
    [sym_tag_name] = ACTIONS(59),
  },
  [17] = {
    [sym_inline_tag] = STATE(28),
    [aux_sym_description_repeat1] = STATE(28),
    [anon_sym_ATaccess] = ACTIONS(61),
    [anon_sym_ATalias] = ACTIONS(61),
    [anon_sym_ATaugments] = ACTIONS(61),
    [anon_sym_ATborrows] = ACTIONS(61),
    [anon_sym_ATcallback] = ACTIONS(61),
    [anon_sym_ATconstructor] = ACTIONS(61),
    [anon_sym_ATevent] = ACTIONS(61),
    [anon_sym_ATexports] = ACTIONS(61),
    [anon_sym_ATexternal] = ACTIONS(61),
    [anon_sym_ATfires] = ACTIONS(61),
    [anon_sym_ATfunction] = ACTIONS(61),
    [anon_sym_ATmixes] = ACTIONS(61),
    [anon_sym_ATname] = ACTIONS(61),
    [anon_sym_ATnamespace] = ACTIONS(61),
    [anon_sym_ATparam] = ACTIONS(61),
    [anon_sym_ATproperty] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_ATreturns] = ACTIONS(61),
    [sym_tag_name] = ACTIONS(61),
    [sym__text] = ACTIONS(63),
    [sym__end] = ACTIONS(65),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(67),
  },
  [19] = {
    [sym_tag] = STATE(20),
    [aux_sym_document_repeat1] = STATE(20),
    [anon_sym_ATaccess] = ACTIONS(7),
    [anon_sym_ATalias] = ACTIONS(7),
    [anon_sym_ATaugments] = ACTIONS(7),
    [anon_sym_ATborrows] = ACTIONS(7),
    [anon_sym_ATcallback] = ACTIONS(7),
    [anon_sym_ATconstructor] = ACTIONS(7),
    [anon_sym_ATevent] = ACTIONS(7),
    [anon_sym_ATexports] = ACTIONS(7),
    [anon_sym_ATexternal] = ACTIONS(7),
    [anon_sym_ATfires] = ACTIONS(7),
    [anon_sym_ATfunction] = ACTIONS(7),
    [anon_sym_ATmixes] = ACTIONS(7),
    [anon_sym_ATname] = ACTIONS(7),
    [anon_sym_ATnamespace] = ACTIONS(7),
    [anon_sym_ATparam] = ACTIONS(7),
    [anon_sym_ATproperty] = ACTIONS(7),
    [anon_sym_ATreturns] = ACTIONS(9),
    [sym_tag_name] = ACTIONS(11),
    [sym__end] = ACTIONS(69),
  },
  [20] = {
    [sym_tag] = STATE(20),
    [aux_sym_document_repeat1] = STATE(20),
    [anon_sym_ATaccess] = ACTIONS(71),
    [anon_sym_ATalias] = ACTIONS(71),
    [anon_sym_ATaugments] = ACTIONS(71),
    [anon_sym_ATborrows] = ACTIONS(71),
    [anon_sym_ATcallback] = ACTIONS(71),
    [anon_sym_ATconstructor] = ACTIONS(71),
    [anon_sym_ATevent] = ACTIONS(71),
    [anon_sym_ATexports] = ACTIONS(71),
    [anon_sym_ATexternal] = ACTIONS(71),
    [anon_sym_ATfires] = ACTIONS(71),
    [anon_sym_ATfunction] = ACTIONS(71),
    [anon_sym_ATmixes] = ACTIONS(71),
    [anon_sym_ATname] = ACTIONS(71),
    [anon_sym_ATnamespace] = ACTIONS(71),
    [anon_sym_ATparam] = ACTIONS(71),
    [anon_sym_ATproperty] = ACTIONS(71),
    [anon_sym_ATreturns] = ACTIONS(74),
    [sym_tag_name] = ACTIONS(77),
    [sym__end] = ACTIONS(80),
  },
  [21] = {
    [anon_sym_RBRACE] = ACTIONS(82),
  },
  [22] = {
    [sym__expression] = STATE(31),
    [sym_qualified_expression] = STATE(31),
    [sym_path_expression] = STATE(31),
    [sym_member_expression] = STATE(31),
    [sym_identifier] = ACTIONS(23),
  },
  [23] = {
    [sym_identifier] = ACTIONS(84),
  },
  [24] = {
    [sym_qualified_expression] = STATE(34),
    [sym_identifier] = ACTIONS(86),
  },
  [25] = {
    [anon_sym_ATaccess] = ACTIONS(88),
    [anon_sym_ATalias] = ACTIONS(88),
    [anon_sym_ATaugments] = ACTIONS(88),
    [anon_sym_ATborrows] = ACTIONS(88),
    [anon_sym_ATcallback] = ACTIONS(88),
    [anon_sym_ATconstructor] = ACTIONS(88),
    [anon_sym_ATevent] = ACTIONS(88),
    [anon_sym_ATexports] = ACTIONS(88),
    [anon_sym_ATexternal] = ACTIONS(88),
    [anon_sym_ATfires] = ACTIONS(88),
    [anon_sym_ATfunction] = ACTIONS(88),
    [anon_sym_ATmixes] = ACTIONS(88),
    [anon_sym_ATname] = ACTIONS(88),
    [anon_sym_ATnamespace] = ACTIONS(88),
    [anon_sym_ATparam] = ACTIONS(88),
    [anon_sym_ATproperty] = ACTIONS(88),
    [anon_sym_ATreturns] = ACTIONS(88),
    [sym_tag_name] = ACTIONS(88),
    [sym__end] = ACTIONS(90),
  },
  [26] = {
    [anon_sym_RBRACE] = ACTIONS(92),
  },
  [27] = {
    [sym_description] = STATE(37),
    [sym__text] = ACTIONS(94),
  },
  [28] = {
    [sym_inline_tag] = STATE(28),
    [aux_sym_description_repeat1] = STATE(28),
    [anon_sym_ATaccess] = ACTIONS(96),
    [anon_sym_ATalias] = ACTIONS(96),
    [anon_sym_ATaugments] = ACTIONS(96),
    [anon_sym_ATborrows] = ACTIONS(96),
    [anon_sym_ATcallback] = ACTIONS(96),
    [anon_sym_ATconstructor] = ACTIONS(96),
    [anon_sym_ATevent] = ACTIONS(96),
    [anon_sym_ATexports] = ACTIONS(96),
    [anon_sym_ATexternal] = ACTIONS(96),
    [anon_sym_ATfires] = ACTIONS(96),
    [anon_sym_ATfunction] = ACTIONS(96),
    [anon_sym_ATmixes] = ACTIONS(96),
    [anon_sym_ATname] = ACTIONS(96),
    [anon_sym_ATnamespace] = ACTIONS(96),
    [anon_sym_ATparam] = ACTIONS(96),
    [anon_sym_ATproperty] = ACTIONS(96),
    [anon_sym_LBRACE] = ACTIONS(98),
    [anon_sym_ATreturns] = ACTIONS(96),
    [sym_tag_name] = ACTIONS(96),
    [sym__text] = ACTIONS(101),
    [sym__end] = ACTIONS(104),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(106),
  },
  [30] = {
    [sym_description] = STATE(38),
    [sym__expression] = STATE(39),
    [sym_qualified_expression] = STATE(39),
    [sym_path_expression] = STATE(39),
    [sym_member_expression] = STATE(39),
    [anon_sym_ATaccess] = ACTIONS(108),
    [anon_sym_ATalias] = ACTIONS(108),
    [anon_sym_ATaugments] = ACTIONS(108),
    [anon_sym_ATborrows] = ACTIONS(108),
    [anon_sym_ATcallback] = ACTIONS(108),
    [anon_sym_ATconstructor] = ACTIONS(108),
    [anon_sym_ATevent] = ACTIONS(108),
    [anon_sym_ATexports] = ACTIONS(108),
    [anon_sym_ATexternal] = ACTIONS(108),
    [anon_sym_ATfires] = ACTIONS(108),
    [anon_sym_ATfunction] = ACTIONS(108),
    [anon_sym_ATmixes] = ACTIONS(108),
    [anon_sym_ATname] = ACTIONS(108),
    [anon_sym_ATnamespace] = ACTIONS(108),
    [anon_sym_ATparam] = ACTIONS(108),
    [anon_sym_ATproperty] = ACTIONS(108),
    [anon_sym_ATreturns] = ACTIONS(108),
    [sym_tag_name] = ACTIONS(108),
    [sym_identifier] = ACTIONS(23),
    [sym__text] = ACTIONS(13),
    [sym__end] = ACTIONS(110),
  },
  [31] = {
    [anon_sym_ATaccess] = ACTIONS(112),
    [anon_sym_ATalias] = ACTIONS(112),
    [anon_sym_ATaugments] = ACTIONS(112),
    [anon_sym_ATborrows] = ACTIONS(112),
    [anon_sym_ATcallback] = ACTIONS(112),
    [anon_sym_ATconstructor] = ACTIONS(112),
    [anon_sym_ATevent] = ACTIONS(112),
    [anon_sym_ATexports] = ACTIONS(112),
    [anon_sym_ATexternal] = ACTIONS(112),
    [anon_sym_ATfires] = ACTIONS(112),
    [anon_sym_ATfunction] = ACTIONS(112),
    [anon_sym_ATmixes] = ACTIONS(112),
    [anon_sym_ATname] = ACTIONS(112),
    [anon_sym_ATnamespace] = ACTIONS(112),
    [anon_sym_ATparam] = ACTIONS(112),
    [anon_sym_ATproperty] = ACTIONS(112),
    [anon_sym_ATreturns] = ACTIONS(112),
    [sym_tag_name] = ACTIONS(112),
    [anon_sym_DOT] = ACTIONS(114),
    [anon_sym_POUND] = ACTIONS(114),
    [anon_sym_TILDE] = ACTIONS(114),
    [sym__text] = ACTIONS(112),
    [sym__end] = ACTIONS(114),
  },
  [32] = {
    [anon_sym_ATaccess] = ACTIONS(116),
    [anon_sym_ATalias] = ACTIONS(116),
    [anon_sym_ATaugments] = ACTIONS(116),
    [anon_sym_ATborrows] = ACTIONS(116),
    [anon_sym_ATcallback] = ACTIONS(116),
    [anon_sym_ATconstructor] = ACTIONS(116),
    [anon_sym_ATevent] = ACTIONS(116),
    [anon_sym_ATexports] = ACTIONS(116),
    [anon_sym_ATexternal] = ACTIONS(116),
    [anon_sym_ATfires] = ACTIONS(116),
    [anon_sym_ATfunction] = ACTIONS(116),
    [anon_sym_ATmixes] = ACTIONS(116),
    [anon_sym_ATname] = ACTIONS(116),
    [anon_sym_ATnamespace] = ACTIONS(116),
    [anon_sym_ATparam] = ACTIONS(116),
    [anon_sym_ATproperty] = ACTIONS(116),
    [anon_sym_ATreturns] = ACTIONS(116),
    [sym_tag_name] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(118),
    [anon_sym_POUND] = ACTIONS(118),
    [anon_sym_TILDE] = ACTIONS(118),
    [sym__text] = ACTIONS(116),
    [sym__end] = ACTIONS(118),
  },
  [33] = {
    [anon_sym_ATaccess] = ACTIONS(120),
    [anon_sym_ATalias] = ACTIONS(120),
    [anon_sym_ATaugments] = ACTIONS(120),
    [anon_sym_ATborrows] = ACTIONS(120),
    [anon_sym_ATcallback] = ACTIONS(120),
    [anon_sym_ATconstructor] = ACTIONS(120),
    [anon_sym_ATevent] = ACTIONS(120),
    [anon_sym_ATexports] = ACTIONS(120),
    [anon_sym_ATexternal] = ACTIONS(120),
    [anon_sym_ATfires] = ACTIONS(120),
    [anon_sym_ATfunction] = ACTIONS(120),
    [anon_sym_ATmixes] = ACTIONS(120),
    [anon_sym_ATname] = ACTIONS(120),
    [anon_sym_ATnamespace] = ACTIONS(120),
    [anon_sym_ATparam] = ACTIONS(120),
    [anon_sym_ATproperty] = ACTIONS(120),
    [anon_sym_ATreturns] = ACTIONS(120),
    [sym_tag_name] = ACTIONS(120),
    [anon_sym_COLON] = ACTIONS(45),
    [anon_sym_DOT] = ACTIONS(122),
    [anon_sym_POUND] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(122),
    [sym__text] = ACTIONS(120),
    [sym__end] = ACTIONS(122),
  },
  [34] = {
    [anon_sym_ATaccess] = ACTIONS(120),
    [anon_sym_ATalias] = ACTIONS(120),
    [anon_sym_ATaugments] = ACTIONS(120),
    [anon_sym_ATborrows] = ACTIONS(120),
    [anon_sym_ATcallback] = ACTIONS(120),
    [anon_sym_ATconstructor] = ACTIONS(120),
    [anon_sym_ATevent] = ACTIONS(120),
    [anon_sym_ATexports] = ACTIONS(120),
    [anon_sym_ATexternal] = ACTIONS(120),
    [anon_sym_ATfires] = ACTIONS(120),
    [anon_sym_ATfunction] = ACTIONS(120),
    [anon_sym_ATmixes] = ACTIONS(120),
    [anon_sym_ATname] = ACTIONS(120),
    [anon_sym_ATnamespace] = ACTIONS(120),
    [anon_sym_ATparam] = ACTIONS(120),
    [anon_sym_ATproperty] = ACTIONS(120),
    [anon_sym_ATreturns] = ACTIONS(120),
    [sym_tag_name] = ACTIONS(120),
    [anon_sym_DOT] = ACTIONS(122),
    [anon_sym_POUND] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(122),
    [sym__text] = ACTIONS(120),
    [sym__end] = ACTIONS(122),
  },
  [35] = {
    [sym_description] = STATE(38),
    [anon_sym_ATaccess] = ACTIONS(108),
    [anon_sym_ATalias] = ACTIONS(108),
    [anon_sym_ATaugments] = ACTIONS(108),
    [anon_sym_ATborrows] = ACTIONS(108),
    [anon_sym_ATcallback] = ACTIONS(108),
    [anon_sym_ATconstructor] = ACTIONS(108),
    [anon_sym_ATevent] = ACTIONS(108),
    [anon_sym_ATexports] = ACTIONS(108),
    [anon_sym_ATexternal] = ACTIONS(108),
    [anon_sym_ATfires] = ACTIONS(108),
    [anon_sym_ATfunction] = ACTIONS(108),
    [anon_sym_ATmixes] = ACTIONS(108),
    [anon_sym_ATname] = ACTIONS(108),
    [anon_sym_ATnamespace] = ACTIONS(108),
    [anon_sym_ATparam] = ACTIONS(108),
    [anon_sym_ATproperty] = ACTIONS(108),
    [anon_sym_ATreturns] = ACTIONS(108),
    [sym_tag_name] = ACTIONS(108),
    [sym__text] = ACTIONS(13),
    [sym__end] = ACTIONS(110),
  },
  [36] = {
    [sym_inline_tag] = STATE(41),
    [aux_sym_description_repeat1] = STATE(41),
    [anon_sym_LBRACE] = ACTIONS(124),
    [anon_sym_RBRACE] = ACTIONS(35),
    [sym__text] = ACTIONS(126),
  },
  [37] = {
    [anon_sym_RBRACE] = ACTIONS(128),
  },
  [38] = {
    [anon_sym_ATaccess] = ACTIONS(130),
    [anon_sym_ATalias] = ACTIONS(130),
    [anon_sym_ATaugments] = ACTIONS(130),
    [anon_sym_ATborrows] = ACTIONS(130),
    [anon_sym_ATcallback] = ACTIONS(130),
    [anon_sym_ATconstructor] = ACTIONS(130),
    [anon_sym_ATevent] = ACTIONS(130),
    [anon_sym_ATexports] = ACTIONS(130),
    [anon_sym_ATexternal] = ACTIONS(130),
    [anon_sym_ATfires] = ACTIONS(130),
    [anon_sym_ATfunction] = ACTIONS(130),
    [anon_sym_ATmixes] = ACTIONS(130),
    [anon_sym_ATname] = ACTIONS(130),
    [anon_sym_ATnamespace] = ACTIONS(130),
    [anon_sym_ATparam] = ACTIONS(130),
    [anon_sym_ATproperty] = ACTIONS(130),
    [anon_sym_ATreturns] = ACTIONS(130),
    [sym_tag_name] = ACTIONS(130),
    [sym__end] = ACTIONS(132),
  },
  [39] = {
    [sym_description] = STATE(43),
    [anon_sym_ATaccess] = ACTIONS(130),
    [anon_sym_ATalias] = ACTIONS(130),
    [anon_sym_ATaugments] = ACTIONS(130),
    [anon_sym_ATborrows] = ACTIONS(130),
    [anon_sym_ATcallback] = ACTIONS(130),
    [anon_sym_ATconstructor] = ACTIONS(130),
    [anon_sym_ATevent] = ACTIONS(130),
    [anon_sym_ATexports] = ACTIONS(130),
    [anon_sym_ATexternal] = ACTIONS(130),
    [anon_sym_ATfires] = ACTIONS(130),
    [anon_sym_ATfunction] = ACTIONS(130),
    [anon_sym_ATmixes] = ACTIONS(130),
    [anon_sym_ATname] = ACTIONS(130),
    [anon_sym_ATnamespace] = ACTIONS(130),
    [anon_sym_ATparam] = ACTIONS(130),
    [anon_sym_ATproperty] = ACTIONS(130),
    [anon_sym_ATreturns] = ACTIONS(130),
    [sym_tag_name] = ACTIONS(130),
    [anon_sym_DOT] = ACTIONS(55),
    [anon_sym_POUND] = ACTIONS(55),
    [anon_sym_TILDE] = ACTIONS(55),
    [sym__text] = ACTIONS(13),
    [sym__end] = ACTIONS(132),
  },
  [40] = {
    [sym_tag_name] = ACTIONS(134),
  },
  [41] = {
    [sym_inline_tag] = STATE(45),
    [aux_sym_description_repeat1] = STATE(45),
    [anon_sym_LBRACE] = ACTIONS(124),
    [anon_sym_RBRACE] = ACTIONS(65),
    [sym__text] = ACTIONS(136),
  },
  [42] = {
    [anon_sym_ATaccess] = ACTIONS(138),
    [anon_sym_ATalias] = ACTIONS(138),
    [anon_sym_ATaugments] = ACTIONS(138),
    [anon_sym_ATborrows] = ACTIONS(138),
    [anon_sym_ATcallback] = ACTIONS(138),
    [anon_sym_ATconstructor] = ACTIONS(138),
    [anon_sym_ATevent] = ACTIONS(138),
    [anon_sym_ATexports] = ACTIONS(138),
    [anon_sym_ATexternal] = ACTIONS(138),
    [anon_sym_ATfires] = ACTIONS(138),
    [anon_sym_ATfunction] = ACTIONS(138),
    [anon_sym_ATmixes] = ACTIONS(138),
    [anon_sym_ATname] = ACTIONS(138),
    [anon_sym_ATnamespace] = ACTIONS(138),
    [anon_sym_ATparam] = ACTIONS(138),
    [anon_sym_ATproperty] = ACTIONS(138),
    [anon_sym_LBRACE] = ACTIONS(140),
    [anon_sym_ATreturns] = ACTIONS(138),
    [sym_tag_name] = ACTIONS(138),
    [sym__text] = ACTIONS(138),
    [sym__end] = ACTIONS(140),
  },
  [43] = {
    [anon_sym_ATaccess] = ACTIONS(142),
    [anon_sym_ATalias] = ACTIONS(142),
    [anon_sym_ATaugments] = ACTIONS(142),
    [anon_sym_ATborrows] = ACTIONS(142),
    [anon_sym_ATcallback] = ACTIONS(142),
    [anon_sym_ATconstructor] = ACTIONS(142),
    [anon_sym_ATevent] = ACTIONS(142),
    [anon_sym_ATexports] = ACTIONS(142),
    [anon_sym_ATexternal] = ACTIONS(142),
    [anon_sym_ATfires] = ACTIONS(142),
    [anon_sym_ATfunction] = ACTIONS(142),
    [anon_sym_ATmixes] = ACTIONS(142),
    [anon_sym_ATname] = ACTIONS(142),
    [anon_sym_ATnamespace] = ACTIONS(142),
    [anon_sym_ATparam] = ACTIONS(142),
    [anon_sym_ATproperty] = ACTIONS(142),
    [anon_sym_ATreturns] = ACTIONS(142),
    [sym_tag_name] = ACTIONS(142),
    [sym__end] = ACTIONS(144),
  },
  [44] = {
    [sym_description] = STATE(46),
    [sym__text] = ACTIONS(94),
  },
  [45] = {
    [sym_inline_tag] = STATE(45),
    [aux_sym_description_repeat1] = STATE(45),
    [anon_sym_LBRACE] = ACTIONS(146),
    [anon_sym_RBRACE] = ACTIONS(104),
    [sym__text] = ACTIONS(149),
  },
  [46] = {
    [anon_sym_RBRACE] = ACTIONS(152),
  },
  [47] = {
    [anon_sym_LBRACE] = ACTIONS(140),
    [anon_sym_RBRACE] = ACTIONS(140),
    [sym__text] = ACTIONS(140),
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
  [15] = {.count = 1, .reusable = true}, SHIFT(8),
  [17] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [19] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 1),
  [21] = {.count = 1, .reusable = true}, SHIFT(11),
  [23] = {.count = 1, .reusable = true}, SHIFT(12),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 1),
  [27] = {.count = 1, .reusable = true}, SHIFT(15),
  [29] = {.count = 1, .reusable = false}, REDUCE(sym_description, 1),
  [31] = {.count = 1, .reusable = true}, SHIFT(16),
  [33] = {.count = 1, .reusable = false}, SHIFT(17),
  [35] = {.count = 1, .reusable = true}, REDUCE(sym_description, 1),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym_document, 2),
  [39] = {.count = 1, .reusable = true}, SHIFT(18),
  [41] = {.count = 1, .reusable = true}, SHIFT(21),
  [43] = {.count = 1, .reusable = false}, REDUCE(sym__expression, 1),
  [45] = {.count = 1, .reusable = true}, SHIFT(22),
  [47] = {.count = 1, .reusable = true}, SHIFT(23),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym__expression, 1),
  [51] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 2),
  [53] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [55] = {.count = 1, .reusable = true}, SHIFT(24),
  [57] = {.count = 1, .reusable = true}, SHIFT(26),
  [59] = {.count = 1, .reusable = true}, SHIFT(27),
  [61] = {.count = 1, .reusable = false}, REDUCE(sym_description, 2),
  [63] = {.count = 1, .reusable = false}, SHIFT(28),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym_description, 2),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym_document, 3),
  [69] = {.count = 1, .reusable = true}, SHIFT(29),
  [71] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [74] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [77] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(6),
  [80] = {.count = 1, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2),
  [82] = {.count = 1, .reusable = true}, SHIFT(30),
  [84] = {.count = 1, .reusable = true}, SHIFT(32),
  [86] = {.count = 1, .reusable = true}, SHIFT(33),
  [88] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 3),
  [90] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 3),
  [92] = {.count = 1, .reusable = true}, SHIFT(35),
  [94] = {.count = 1, .reusable = true}, SHIFT(36),
  [96] = {.count = 1, .reusable = false}, REDUCE(aux_sym_description_repeat1, 2),
  [98] = {.count = 2, .reusable = true}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(16),
  [101] = {.count = 2, .reusable = false}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(28),
  [104] = {.count = 1, .reusable = true}, REDUCE(aux_sym_description_repeat1, 2),
  [106] = {.count = 1, .reusable = true}, REDUCE(sym_document, 4),
  [108] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 4),
  [110] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 4),
  [112] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_expression, 3),
  [114] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_expression, 3),
  [116] = {.count = 1, .reusable = false}, REDUCE(sym_path_expression, 3),
  [118] = {.count = 1, .reusable = true}, REDUCE(sym_path_expression, 3),
  [120] = {.count = 1, .reusable = false}, REDUCE(sym_member_expression, 3),
  [122] = {.count = 1, .reusable = true}, REDUCE(sym_member_expression, 3),
  [124] = {.count = 1, .reusable = true}, SHIFT(40),
  [126] = {.count = 1, .reusable = true}, SHIFT(41),
  [128] = {.count = 1, .reusable = true}, SHIFT(42),
  [130] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 5),
  [132] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 5),
  [134] = {.count = 1, .reusable = true}, SHIFT(44),
  [136] = {.count = 1, .reusable = true}, SHIFT(45),
  [138] = {.count = 1, .reusable = false}, REDUCE(sym_inline_tag, 4),
  [140] = {.count = 1, .reusable = true}, REDUCE(sym_inline_tag, 4),
  [142] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 6),
  [144] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 6),
  [146] = {.count = 2, .reusable = true}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(40),
  [149] = {.count = 2, .reusable = true}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(45),
  [152] = {.count = 1, .reusable = true}, SHIFT(47),
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
