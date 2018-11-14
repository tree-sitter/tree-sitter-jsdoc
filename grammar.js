module.exports = grammar({
  name: 'jsdoc',

  extras: $ => [
    token(choice(
      // Skip over stars at the beginnings of lines
      seq(/\n/, /[ \t]*/, repeat(seq('*', /[ \t]*/))),
      /[ \t]/
    ))
  ],

  rules: {
    document: $ => seq(
      $._begin,
      optional($.description),
      repeat(choice(
        $.block_tag,
        $.alias_tag,
        $.param_tag,
        $.returns_tag
      )),
      $._end
    ),

    description: $ => seq(
      $._text,
      repeat(choice($._text, $.inline_tag))
    ),

    alias_tag: $ => seq(
      '@alias',
      optional($.identifier),
      optional($.description)
    ),

    param_tag: $ => seq(
      '@param',
      optional(seq('{', $.type, '}')),
      optional($.identifier),
      optional($.description)
    ),

    returns_tag: $ => seq(
      '@returns',
      optional(seq('{', $.type, '}')),
      optional($.description)
    ),

    block_tag: $ => seq(
      $.tag_name,
      optional(seq('{', $.type, '}')),
      optional($.description)
    ),

    inline_tag: $ => seq(
      '{',
      $.tag_name,
      $.description,
      '}'
    ),

    tag_name: $ => /@[a-z_]+/,

    identifier: $ => token(prec(1, /[a-zA-Z_$][a-zA-Z_$0-9]*/)),

    type: $ => /[^}\n]+/,

    _text: $ => /[^\*@\s{}][^{}\n]*/,

    _begin: $ => token(seq('/', repeat('*'))),

    _end: $ => '/'
  }
});
