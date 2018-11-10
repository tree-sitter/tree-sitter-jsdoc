#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 31
#define SYMBOL_COUNT 14
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  sym_tag_name = 3,
  sym_type = 4,
  sym__text = 5,
  sym__begin = 6,
  sym__end = 7,
  sym_document = 8,
  sym_description = 9,
  sym_block_tag = 10,
  sym_inline_tag = 11,
  aux_sym_document_repeat1 = 12,
  aux_sym_description_repeat1 = 13,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_tag_name] = "tag_name",
  [sym_type] = "type",
  [sym__text] = "_text",
  [sym__begin] = "_begin",
  [sym__end] = "_end",
  [sym_document] = "document",
  [sym_description] = "description",
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_tag_name] = {
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
        ADVANCE(9);
      if (lookahead == '}')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(0);
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
        ADVANCE(9);
      if (lookahead == '}')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(2);
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
        ADVANCE(9);
      if (lookahead == '}')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(3);
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
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 11:
      if (lookahead == '\n')
        SKIP(12);
      if (lookahead == '/')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(11);
      END_STATE();
    case 12:
      if (lookahead == '\n')
        SKIP(12);
      if (lookahead == '*')
        SKIP(13);
      if (lookahead == '/')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(12);
      END_STATE();
    case 13:
      if (lookahead == '\n')
        SKIP(12);
      if (lookahead == '*')
        SKIP(13);
      if (lookahead == '/')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__begin);
      if (lookahead == '*')
        ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '\n')
        SKIP(16);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == '@')
        ADVANCE(7);
      if (lookahead == '{')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(15);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != '}')
        ADVANCE(6);
      END_STATE();
    case 16:
      if (lookahead == '\n')
        SKIP(16);
      if (lookahead == '*')
        SKIP(17);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == '@')
        ADVANCE(7);
      if (lookahead == '{')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(16);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '}')
        ADVANCE(6);
      END_STATE();
    case 17:
      if (lookahead == '\n')
        SKIP(16);
      if (lookahead == '*')
        SKIP(17);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == '@')
        ADVANCE(7);
      if (lookahead == '{')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(17);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '}')
        ADVANCE(6);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__end);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(6);
      END_STATE();
    case 19:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(20);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(19);
      END_STATE();
    case 20:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(20);
      if (lookahead == '*')
        SKIP(21);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(20);
      END_STATE();
    case 21:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(20);
      if (lookahead == '*')
        SKIP(21);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(21);
      END_STATE();
    case 22:
      if (lookahead == '\n')
        SKIP(23);
      if (lookahead == '/')
        ADVANCE(25);
      if (lookahead == '@')
        ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(22);
      END_STATE();
    case 23:
      if (lookahead == '\n')
        SKIP(23);
      if (lookahead == '*')
        SKIP(24);
      if (lookahead == '/')
        ADVANCE(25);
      if (lookahead == '@')
        ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(23);
      END_STATE();
    case 24:
      if (lookahead == '\n')
        SKIP(23);
      if (lookahead == '*')
        SKIP(24);
      if (lookahead == '/')
        ADVANCE(25);
      if (lookahead == '@')
        ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__end);
      END_STATE();
    case 26:
      if (lookahead == '\n')
        ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '}')
        ADVANCE(29);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_type);
      if (lookahead == '\n')
        ADVANCE(27);
      if (lookahead == '*')
        ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '}')
        ADVANCE(29);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_type);
      if (lookahead == '\n')
        ADVANCE(27);
      if (lookahead == '*')
        ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '}')
        ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_type);
      if (lookahead != 0 &&
          lookahead != '}')
        ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_type);
      if (lookahead == '\n')
        ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '}')
        ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == '\n')
        SKIP(32);
      if (lookahead == '{')
        ADVANCE(9);
      if (lookahead == '}')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(31);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != '@')
        ADVANCE(6);
      END_STATE();
    case 32:
      if (lookahead == '\n')
        SKIP(32);
      if (lookahead == '*')
        SKIP(33);
      if (lookahead == '{')
        ADVANCE(9);
      if (lookahead == '}')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(32);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '@')
        ADVANCE(6);
      END_STATE();
    case 33:
      if (lookahead == '\n')
        SKIP(32);
      if (lookahead == '*')
        SKIP(33);
      if (lookahead == '{')
        ADVANCE(9);
      if (lookahead == '}')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(33);
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
  [1] = {.lex_state = 11},
  [2] = {.lex_state = 15},
  [3] = {.lex_state = 19},
  [4] = {.lex_state = 15},
  [5] = {.lex_state = 15},
  [6] = {.lex_state = 19},
  [7] = {.lex_state = 22},
  [8] = {.lex_state = 22},
  [9] = {.lex_state = 26},
  [10] = {.lex_state = 22},
  [11] = {.lex_state = 15},
  [12] = {.lex_state = 15},
  [13] = {.lex_state = 19},
  [14] = {.lex_state = 22},
  [15] = {.lex_state = 22},
  [16] = {.lex_state = 31},
  [17] = {.lex_state = 31},
  [18] = {.lex_state = 15},
  [19] = {.lex_state = 19},
  [20] = {.lex_state = 15},
  [21] = {.lex_state = 31},
  [22] = {.lex_state = 31},
  [23] = {.lex_state = 22},
  [24] = {.lex_state = 15},
  [25] = {.lex_state = 31},
  [26] = {.lex_state = 15},
  [27] = {.lex_state = 31},
  [28] = {.lex_state = 31},
  [29] = {.lex_state = 31},
  [30] = {.lex_state = 31},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_tag_name] = ACTIONS(1),
    [sym__text] = ACTIONS(3),
    [sym__begin] = ACTIONS(3),
    [sym__end] = ACTIONS(3),
  },
  [1] = {
    [sym_document] = STATE(3),
    [sym__begin] = ACTIONS(5),
  },
  [2] = {
    [sym_description] = STATE(7),
    [sym_block_tag] = STATE(8),
    [aux_sym_document_repeat1] = STATE(8),
    [sym_tag_name] = ACTIONS(7),
    [sym__text] = ACTIONS(9),
    [sym__end] = ACTIONS(11),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(13),
  },
  [4] = {
    [sym_description] = STATE(10),
    [anon_sym_LBRACE] = ACTIONS(15),
    [sym_tag_name] = ACTIONS(17),
    [sym__text] = ACTIONS(9),
    [sym__end] = ACTIONS(19),
  },
  [5] = {
    [sym_inline_tag] = STATE(12),
    [aux_sym_description_repeat1] = STATE(12),
    [anon_sym_LBRACE] = ACTIONS(21),
    [sym_tag_name] = ACTIONS(23),
    [sym__text] = ACTIONS(25),
    [sym__end] = ACTIONS(27),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(29),
  },
  [7] = {
    [sym_block_tag] = STATE(14),
    [aux_sym_document_repeat1] = STATE(14),
    [sym_tag_name] = ACTIONS(7),
    [sym__end] = ACTIONS(31),
  },
  [8] = {
    [sym_block_tag] = STATE(15),
    [aux_sym_document_repeat1] = STATE(15),
    [sym_tag_name] = ACTIONS(7),
    [sym__end] = ACTIONS(31),
  },
  [9] = {
    [sym_type] = ACTIONS(33),
  },
  [10] = {
    [sym_tag_name] = ACTIONS(35),
    [sym__end] = ACTIONS(35),
  },
  [11] = {
    [sym_tag_name] = ACTIONS(37),
  },
  [12] = {
    [sym_inline_tag] = STATE(18),
    [aux_sym_description_repeat1] = STATE(18),
    [anon_sym_LBRACE] = ACTIONS(21),
    [sym_tag_name] = ACTIONS(39),
    [sym__text] = ACTIONS(41),
    [sym__end] = ACTIONS(43),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(45),
  },
  [14] = {
    [sym_block_tag] = STATE(15),
    [aux_sym_document_repeat1] = STATE(15),
    [sym_tag_name] = ACTIONS(7),
    [sym__end] = ACTIONS(47),
  },
  [15] = {
    [sym_block_tag] = STATE(15),
    [aux_sym_document_repeat1] = STATE(15),
    [sym_tag_name] = ACTIONS(49),
    [sym__end] = ACTIONS(52),
  },
  [16] = {
    [anon_sym_RBRACE] = ACTIONS(54),
  },
  [17] = {
    [sym_description] = STATE(22),
    [sym__text] = ACTIONS(56),
  },
  [18] = {
    [sym_inline_tag] = STATE(18),
    [aux_sym_description_repeat1] = STATE(18),
    [anon_sym_LBRACE] = ACTIONS(58),
    [sym_tag_name] = ACTIONS(61),
    [sym__text] = ACTIONS(63),
    [sym__end] = ACTIONS(66),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(68),
  },
  [20] = {
    [sym_description] = STATE(23),
    [sym_tag_name] = ACTIONS(70),
    [sym__text] = ACTIONS(9),
    [sym__end] = ACTIONS(72),
  },
  [21] = {
    [sym_inline_tag] = STATE(25),
    [aux_sym_description_repeat1] = STATE(25),
    [anon_sym_LBRACE] = ACTIONS(74),
    [anon_sym_RBRACE] = ACTIONS(23),
    [sym__text] = ACTIONS(76),
  },
  [22] = {
    [anon_sym_RBRACE] = ACTIONS(78),
  },
  [23] = {
    [sym_tag_name] = ACTIONS(80),
    [sym__end] = ACTIONS(80),
  },
  [24] = {
    [sym_tag_name] = ACTIONS(82),
  },
  [25] = {
    [sym_inline_tag] = STATE(28),
    [aux_sym_description_repeat1] = STATE(28),
    [anon_sym_LBRACE] = ACTIONS(74),
    [anon_sym_RBRACE] = ACTIONS(39),
    [sym__text] = ACTIONS(84),
  },
  [26] = {
    [anon_sym_LBRACE] = ACTIONS(86),
    [sym_tag_name] = ACTIONS(86),
    [sym__text] = ACTIONS(88),
    [sym__end] = ACTIONS(88),
  },
  [27] = {
    [sym_description] = STATE(29),
    [sym__text] = ACTIONS(56),
  },
  [28] = {
    [sym_inline_tag] = STATE(28),
    [aux_sym_description_repeat1] = STATE(28),
    [anon_sym_LBRACE] = ACTIONS(90),
    [anon_sym_RBRACE] = ACTIONS(61),
    [sym__text] = ACTIONS(93),
  },
  [29] = {
    [anon_sym_RBRACE] = ACTIONS(96),
  },
  [30] = {
    [anon_sym_LBRACE] = ACTIONS(86),
    [anon_sym_RBRACE] = ACTIONS(86),
    [sym__text] = ACTIONS(86),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, SHIFT(4),
  [9] = {.count = 1, .reusable = false}, SHIFT(5),
  [11] = {.count = 1, .reusable = false}, SHIFT(6),
  [13] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [15] = {.count = 1, .reusable = true}, SHIFT(9),
  [17] = {.count = 1, .reusable = true}, REDUCE(sym_block_tag, 1),
  [19] = {.count = 1, .reusable = false}, REDUCE(sym_block_tag, 1),
  [21] = {.count = 1, .reusable = true}, SHIFT(11),
  [23] = {.count = 1, .reusable = true}, REDUCE(sym_description, 1),
  [25] = {.count = 1, .reusable = false}, SHIFT(12),
  [27] = {.count = 1, .reusable = false}, REDUCE(sym_description, 1),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym_document, 2),
  [31] = {.count = 1, .reusable = true}, SHIFT(13),
  [33] = {.count = 1, .reusable = true}, SHIFT(16),
  [35] = {.count = 1, .reusable = true}, REDUCE(sym_block_tag, 2),
  [37] = {.count = 1, .reusable = true}, SHIFT(17),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym_description, 2),
  [41] = {.count = 1, .reusable = false}, SHIFT(18),
  [43] = {.count = 1, .reusable = false}, REDUCE(sym_description, 2),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_document, 3),
  [47] = {.count = 1, .reusable = true}, SHIFT(19),
  [49] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [52] = {.count = 1, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2),
  [54] = {.count = 1, .reusable = true}, SHIFT(20),
  [56] = {.count = 1, .reusable = true}, SHIFT(21),
  [58] = {.count = 2, .reusable = true}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(11),
  [61] = {.count = 1, .reusable = true}, REDUCE(aux_sym_description_repeat1, 2),
  [63] = {.count = 2, .reusable = false}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(18),
  [66] = {.count = 1, .reusable = false}, REDUCE(aux_sym_description_repeat1, 2),
  [68] = {.count = 1, .reusable = true}, REDUCE(sym_document, 4),
  [70] = {.count = 1, .reusable = true}, REDUCE(sym_block_tag, 4),
  [72] = {.count = 1, .reusable = false}, REDUCE(sym_block_tag, 4),
  [74] = {.count = 1, .reusable = true}, SHIFT(24),
  [76] = {.count = 1, .reusable = true}, SHIFT(25),
  [78] = {.count = 1, .reusable = true}, SHIFT(26),
  [80] = {.count = 1, .reusable = true}, REDUCE(sym_block_tag, 5),
  [82] = {.count = 1, .reusable = true}, SHIFT(27),
  [84] = {.count = 1, .reusable = true}, SHIFT(28),
  [86] = {.count = 1, .reusable = true}, REDUCE(sym_inline_tag, 4),
  [88] = {.count = 1, .reusable = false}, REDUCE(sym_inline_tag, 4),
  [90] = {.count = 2, .reusable = true}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(24),
  [93] = {.count = 2, .reusable = true}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(28),
  [96] = {.count = 1, .reusable = true}, SHIFT(30),
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
