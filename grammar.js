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
      repeat($.block_tag),
      $._end
    ),

    description: $ => seq(
      $._text,
      repeat(choice($._text, $.inline_tag))
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

    type: $ => /[^}]+/,

    _text: $ => /[^\*@\s{}][^{}\n]*/,

    _begin: $ => token(seq('/', repeat('*'))),

    _end: $ => '/'
  }
});
