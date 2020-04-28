module.exports = grammar({
  name: 'jsdoc',

  extras: $ => [
    token(choice(
      // Skip over stars at the beginnings of lines
      seq(/\n/, /[ \t]*/, repeat(seq('*', /[ \t]*/))),
      /[ \t\r]/
    ))
  ],

  rules: {
    document: $ => seq(
      $._begin,
      optional($.description),
      repeat($.tag),
      $._end
    ),

    description: $ => seq(
      $._text,
      repeat(choice($._text, $.inline_tag))
    ),

    tag: $ => choice(
      // type, name, and description
      seq(
        alias($.tag_name_with_argument, $.tag_name),
        optional(seq('{', $.type, '}')),
        optional($._expression),
        optional($.description)
      ),

      // type and description
      seq(
        alias($.tag_name_with_type, $.tag_name),
        optional(seq('{', $.type, '}')),
        optional($.description)
      ),

      // description only
      seq(
        $.tag_name,
        optional($.description)
      )
    ),

    inline_tag: $ => seq(
      '{',
      $.tag_name,
      $.description,
      '}'
    ),

    tag_name_with_argument: $ => token(choice(
      '@access',
      '@alias',
      '@api',
      '@augments',
      '@borrows',
      '@callback',
      '@constructor',
      '@event',
      '@exports',
      '@external',
      '@fires',
      '@function',
      '@member',
      '@mixes',
      '@name',
      '@namespace',
      '@param',
      '@property',
      '@typedef',
      '@type'
    )),

    tag_name_with_type: $ => token(choice(
      '@return',
      '@returns',
      '@throw',
      '@throws'
    )),

    tag_name: $ => /@[a-zA-Z_]+/,

    _expression: $ => choice(
      $._identifier_of_optional_type,
      $.identifier,
      $.member_expression,
      $.path_expression,
      $.qualified_expression
    ),

    qualified_expression: $ => prec(1, seq(
      $.identifier,
      ':',
      $._expression
    )),

    path_expression: $ => prec(2, seq(
      $.identifier,
      token.immediate('/'),
      $.identifier
    )),

    member_expression: $ => seq(
      $._expression,
      choice(
        '.',
        '#',
        '~',
      ),
      choice(
        $.identifier,
        $.qualified_expression
      )
    ),

    identifier: $ => /[a-zA-Z_$][a-zA-Z_$0-9]*/,

    _identifier_of_optional_type: $ => 
        seq(
          "[",
          $.identifier,
          optional(
            seq(
              "=",
              $._value
            )
          ),
          "]"
        ),

    _list_of_values: $ => 
      seq(
        "[",
        commaSep1($._value),
        "]"
      ),

    _value: $ => choice(
      $.atomic_value,
      $._list_of_values
    ),

    atomic_value: $ => prec.left(/[^,\[\]\n]+/),        

    type: $ => /[^}\n]+/,

    _text: $ => token(prec(-1, /[^*{}@\s][^*{}\n]*([^*/{}\n][^*{}\n]*\*+)*/)),

    _begin: $ => token(seq('/', repeat('*'))),

    _end: $ => '/'
  }
});

function commaSep1 (rule) {
  return sep1(rule, ',')
}

function sep1 (rule, separator) {
  return seq(rule, repeat(seq(separator, rule)))
}
