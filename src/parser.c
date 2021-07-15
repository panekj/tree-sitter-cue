#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 313
#define LARGE_STATE_COUNT 149
#define SYMBOL_COUNT 141
#define ALIAS_COUNT 2
#define TOKEN_COUNT 83
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 14

enum {
  sym_identifier = 1,
  anon_sym_LF = 2,
  anon_sym_COMMA = 3,
  anon_sym_package = 4,
  anon_sym_import = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  sym_dot = 8,
  anon_sym__ = 9,
  anon_sym_POUND_DQUOTE = 10,
  anon_sym_DQUOTE_POUND = 11,
  anon_sym_DQUOTE = 12,
  anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE = 13,
  anon_sym_DQUOTE_DQUOTE_DQUOTE_POUND = 14,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 15,
  anon_sym_BSLASH_LPAREN = 16,
  anon_sym_len = 17,
  anon_sym_close = 18,
  anon_sym_and = 19,
  anon_sym_or = 20,
  anon_sym_div = 21,
  anon_sym_mod = 22,
  anon_sym_quo = 23,
  anon_sym_rem = 24,
  sym_number_type = 25,
  anon_sym_float = 26,
  anon_sym_float32 = 27,
  anon_sym_float64 = 28,
  anon_sym_uint = 29,
  anon_sym_uint8 = 30,
  anon_sym_uint16 = 31,
  anon_sym_uint32 = 32,
  anon_sym_uint64 = 33,
  anon_sym_uint128 = 34,
  anon_sym_int = 35,
  anon_sym_int8 = 36,
  anon_sym_int16 = 37,
  anon_sym_int32 = 38,
  anon_sym_int64 = 39,
  anon_sym_int128 = 40,
  sym_string_type = 41,
  sym_bytes_type = 42,
  sym_bool_type = 43,
  sym_bottom_lit = 44,
  sym_null_lit = 45,
  sym_bool_lit = 46,
  sym_int_lit = 47,
  sym_float_lit = 48,
  anon_sym_LBRACK = 49,
  anon_sym_RBRACK = 50,
  anon_sym_LBRACE = 51,
  anon_sym_RBRACE = 52,
  anon_sym_DOT_DOT_DOT = 53,
  anon_sym_QMARK = 54,
  anon_sym_EQ = 55,
  anon_sym_COLON = 56,
  anon_sym_for = 57,
  anon_sym_in = 58,
  anon_sym_if = 59,
  anon_sym_let = 60,
  anon_sym_PIPE = 61,
  anon_sym_AMP = 62,
  anon_sym_PIPE_PIPE = 63,
  anon_sym_AMP_AMP = 64,
  anon_sym_EQ_EQ = 65,
  anon_sym_BANG_EQ = 66,
  anon_sym_LT = 67,
  anon_sym_LT_EQ = 68,
  anon_sym_GT = 69,
  anon_sym_GT_EQ = 70,
  anon_sym_EQ_TILDE = 71,
  anon_sym_BANG_TILDE = 72,
  anon_sym_PLUS = 73,
  anon_sym_DASH = 74,
  anon_sym_STAR = 75,
  anon_sym_SLASH = 76,
  anon_sym_BANG = 77,
  anon_sym_LBRACK2 = 78,
  sym_comment = 79,
  sym__str_content = 80,
  sym__multi_str_content = 81,
  sym_escape_sequence = 82,
  sym_source_file = 83,
  sym__package_identifier = 84,
  sym_package_clause = 85,
  sym_import_declaration = 86,
  sym_import_spec = 87,
  sym_import_spec_list = 88,
  sym_blank_identifier = 89,
  sym__string_lit = 90,
  sym_raw_simple_string_lit = 91,
  sym_simple_string_lit = 92,
  aux_sym__string_parts = 93,
  sym_raw_multiline_string_lit = 94,
  sym_multiline_string_lit = 95,
  aux_sym__multi_string_parts = 96,
  sym_interpolation = 97,
  sym_builtin = 98,
  sym_float_type = 99,
  sym_uint_type = 100,
  sym_int_type = 101,
  sym_top_lit = 102,
  sym__declaration = 103,
  sym__list_elem = 104,
  sym_list_lit = 105,
  sym_struct_lit = 106,
  sym_ellipsis = 107,
  sym__embedding = 108,
  sym__label_name = 109,
  sym__label_expr = 110,
  sym_label = 111,
  sym_field = 112,
  sym__value = 113,
  sym_for_clause = 114,
  sym_guard_clause = 115,
  sym_let_clause = 116,
  sym__clause = 117,
  sym_comprehension = 118,
  sym__alias_expr = 119,
  sym__expression = 120,
  sym_binary_expression = 121,
  sym_unary_expression = 122,
  sym__primary_expression = 123,
  sym__operand = 124,
  sym_index_expression = 125,
  sym_selector_expression = 126,
  sym_call_expression = 127,
  sym_selector = 128,
  sym_index = 129,
  sym_arguments = 130,
  sym_argument = 131,
  sym__literal = 132,
  aux_sym_source_file_repeat1 = 133,
  aux_sym_import_spec_list_repeat1 = 134,
  aux_sym__list_elem_repeat1 = 135,
  aux_sym_list_lit_repeat1 = 136,
  aux_sym_struct_lit_repeat1 = 137,
  aux_sym_field_repeat1 = 138,
  aux_sym_comprehension_repeat1 = 139,
  aux_sym_arguments_repeat1 = 140,
  alias_sym_package_identifier = 141,
  alias_sym_value = 142,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_LF] = "\n",
  [anon_sym_COMMA] = ",",
  [anon_sym_package] = "package",
  [anon_sym_import] = "import",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_dot] = "dot",
  [anon_sym__] = "_",
  [anon_sym_POUND_DQUOTE] = "#\"",
  [anon_sym_DQUOTE_POUND] = "\"#",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = "#\"\"\"",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE_POUND] = "\"\"\"#",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [anon_sym_BSLASH_LPAREN] = "\\(",
  [anon_sym_len] = "len",
  [anon_sym_close] = "close",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_div] = "div",
  [anon_sym_mod] = "mod",
  [anon_sym_quo] = "quo",
  [anon_sym_rem] = "rem",
  [sym_number_type] = "number_type",
  [anon_sym_float] = "float",
  [anon_sym_float32] = "float32",
  [anon_sym_float64] = "float64",
  [anon_sym_uint] = "uint",
  [anon_sym_uint8] = "uint8",
  [anon_sym_uint16] = "uint16",
  [anon_sym_uint32] = "uint32",
  [anon_sym_uint64] = "uint64",
  [anon_sym_uint128] = "uint128",
  [anon_sym_int] = "int",
  [anon_sym_int8] = "int8",
  [anon_sym_int16] = "int16",
  [anon_sym_int32] = "int32",
  [anon_sym_int64] = "int64",
  [anon_sym_int128] = "int128",
  [sym_string_type] = "string_type",
  [sym_bytes_type] = "bytes_type",
  [sym_bool_type] = "bool_type",
  [sym_bottom_lit] = "bottom_lit",
  [sym_null_lit] = "null_lit",
  [sym_bool_lit] = "bool_lit",
  [sym_int_lit] = "int_lit",
  [sym_float_lit] = "float_lit",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DOT_DOT_DOT] = "...",
  [anon_sym_QMARK] = "\?",
  [anon_sym_EQ] = "=",
  [anon_sym_COLON] = ":",
  [anon_sym_for] = "for",
  [anon_sym_in] = "in",
  [anon_sym_if] = "if",
  [anon_sym_let] = "let",
  [anon_sym_PIPE] = "|",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_EQ_TILDE] = "=~",
  [anon_sym_BANG_TILDE] = "!~",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_BANG] = "!",
  [anon_sym_LBRACK2] = "[",
  [sym_comment] = "comment",
  [sym__str_content] = "_str_content",
  [sym__multi_str_content] = "_multi_str_content",
  [sym_escape_sequence] = "escape_sequence",
  [sym_source_file] = "source_file",
  [sym__package_identifier] = "_package_identifier",
  [sym_package_clause] = "package_clause",
  [sym_import_declaration] = "import_declaration",
  [sym_import_spec] = "import_spec",
  [sym_import_spec_list] = "import_spec_list",
  [sym_blank_identifier] = "blank_identifier",
  [sym__string_lit] = "_string_lit",
  [sym_raw_simple_string_lit] = "raw_simple_string_lit",
  [sym_simple_string_lit] = "simple_string_lit",
  [aux_sym__string_parts] = "_string_parts",
  [sym_raw_multiline_string_lit] = "raw_multiline_string_lit",
  [sym_multiline_string_lit] = "multiline_string_lit",
  [aux_sym__multi_string_parts] = "_multi_string_parts",
  [sym_interpolation] = "interpolation",
  [sym_builtin] = "builtin",
  [sym_float_type] = "float_type",
  [sym_uint_type] = "uint_type",
  [sym_int_type] = "int_type",
  [sym_top_lit] = "top_lit",
  [sym__declaration] = "_declaration",
  [sym__list_elem] = "_list_elem",
  [sym_list_lit] = "list_lit",
  [sym_struct_lit] = "struct_lit",
  [sym_ellipsis] = "ellipsis",
  [sym__embedding] = "_embedding",
  [sym__label_name] = "_label_name",
  [sym__label_expr] = "_label_expr",
  [sym_label] = "label",
  [sym_field] = "field",
  [sym__value] = "_value",
  [sym_for_clause] = "for_clause",
  [sym_guard_clause] = "guard_clause",
  [sym_let_clause] = "let_clause",
  [sym__clause] = "_clause",
  [sym_comprehension] = "comprehension",
  [sym__alias_expr] = "_alias_expr",
  [sym__expression] = "_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_unary_expression] = "unary_expression",
  [sym__primary_expression] = "_primary_expression",
  [sym__operand] = "_operand",
  [sym_index_expression] = "index_expression",
  [sym_selector_expression] = "selector_expression",
  [sym_call_expression] = "call_expression",
  [sym_selector] = "selector",
  [sym_index] = "index",
  [sym_arguments] = "arguments",
  [sym_argument] = "argument",
  [sym__literal] = "_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_import_spec_list_repeat1] = "import_spec_list_repeat1",
  [aux_sym__list_elem_repeat1] = "_list_elem_repeat1",
  [aux_sym_list_lit_repeat1] = "list_lit_repeat1",
  [aux_sym_struct_lit_repeat1] = "struct_lit_repeat1",
  [aux_sym_field_repeat1] = "field_repeat1",
  [aux_sym_comprehension_repeat1] = "comprehension_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [alias_sym_package_identifier] = "package_identifier",
  [alias_sym_value] = "value",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_package] = anon_sym_package,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_dot] = sym_dot,
  [anon_sym__] = anon_sym__,
  [anon_sym_POUND_DQUOTE] = anon_sym_POUND_DQUOTE,
  [anon_sym_DQUOTE_POUND] = anon_sym_DQUOTE_POUND,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE_POUND] = anon_sym_DQUOTE_DQUOTE_DQUOTE_POUND,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [anon_sym_BSLASH_LPAREN] = anon_sym_BSLASH_LPAREN,
  [anon_sym_len] = anon_sym_len,
  [anon_sym_close] = anon_sym_close,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_div] = anon_sym_div,
  [anon_sym_mod] = anon_sym_mod,
  [anon_sym_quo] = anon_sym_quo,
  [anon_sym_rem] = anon_sym_rem,
  [sym_number_type] = sym_number_type,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_float32] = anon_sym_float32,
  [anon_sym_float64] = anon_sym_float64,
  [anon_sym_uint] = anon_sym_uint,
  [anon_sym_uint8] = anon_sym_uint8,
  [anon_sym_uint16] = anon_sym_uint16,
  [anon_sym_uint32] = anon_sym_uint32,
  [anon_sym_uint64] = anon_sym_uint64,
  [anon_sym_uint128] = anon_sym_uint128,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_int8] = anon_sym_int8,
  [anon_sym_int16] = anon_sym_int16,
  [anon_sym_int32] = anon_sym_int32,
  [anon_sym_int64] = anon_sym_int64,
  [anon_sym_int128] = anon_sym_int128,
  [sym_string_type] = sym_string_type,
  [sym_bytes_type] = sym_bytes_type,
  [sym_bool_type] = sym_bool_type,
  [sym_bottom_lit] = sym_bottom_lit,
  [sym_null_lit] = sym_null_lit,
  [sym_bool_lit] = sym_bool_lit,
  [sym_int_lit] = sym_int_lit,
  [sym_float_lit] = sym_float_lit,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_EQ_TILDE] = anon_sym_EQ_TILDE,
  [anon_sym_BANG_TILDE] = anon_sym_BANG_TILDE,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_LBRACK2] = anon_sym_LBRACK,
  [sym_comment] = sym_comment,
  [sym__str_content] = sym__str_content,
  [sym__multi_str_content] = sym__multi_str_content,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_source_file] = sym_source_file,
  [sym__package_identifier] = sym__package_identifier,
  [sym_package_clause] = sym_package_clause,
  [sym_import_declaration] = sym_import_declaration,
  [sym_import_spec] = sym_import_spec,
  [sym_import_spec_list] = sym_import_spec_list,
  [sym_blank_identifier] = sym_blank_identifier,
  [sym__string_lit] = sym__string_lit,
  [sym_raw_simple_string_lit] = sym_raw_simple_string_lit,
  [sym_simple_string_lit] = sym_simple_string_lit,
  [aux_sym__string_parts] = aux_sym__string_parts,
  [sym_raw_multiline_string_lit] = sym_raw_multiline_string_lit,
  [sym_multiline_string_lit] = sym_multiline_string_lit,
  [aux_sym__multi_string_parts] = aux_sym__multi_string_parts,
  [sym_interpolation] = sym_interpolation,
  [sym_builtin] = sym_builtin,
  [sym_float_type] = sym_float_type,
  [sym_uint_type] = sym_uint_type,
  [sym_int_type] = sym_int_type,
  [sym_top_lit] = sym_top_lit,
  [sym__declaration] = sym__declaration,
  [sym__list_elem] = sym__list_elem,
  [sym_list_lit] = sym_list_lit,
  [sym_struct_lit] = sym_struct_lit,
  [sym_ellipsis] = sym_ellipsis,
  [sym__embedding] = sym__embedding,
  [sym__label_name] = sym__label_name,
  [sym__label_expr] = sym__label_expr,
  [sym_label] = sym_label,
  [sym_field] = sym_field,
  [sym__value] = sym__value,
  [sym_for_clause] = sym_for_clause,
  [sym_guard_clause] = sym_guard_clause,
  [sym_let_clause] = sym_let_clause,
  [sym__clause] = sym__clause,
  [sym_comprehension] = sym_comprehension,
  [sym__alias_expr] = sym__alias_expr,
  [sym__expression] = sym__expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym__primary_expression] = sym__primary_expression,
  [sym__operand] = sym__operand,
  [sym_index_expression] = sym_index_expression,
  [sym_selector_expression] = sym_selector_expression,
  [sym_call_expression] = sym_call_expression,
  [sym_selector] = sym_selector,
  [sym_index] = sym_index,
  [sym_arguments] = sym_arguments,
  [sym_argument] = sym_argument,
  [sym__literal] = sym__literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_import_spec_list_repeat1] = aux_sym_import_spec_list_repeat1,
  [aux_sym__list_elem_repeat1] = aux_sym__list_elem_repeat1,
  [aux_sym_list_lit_repeat1] = aux_sym_list_lit_repeat1,
  [aux_sym_struct_lit_repeat1] = aux_sym_struct_lit_repeat1,
  [aux_sym_field_repeat1] = aux_sym_field_repeat1,
  [aux_sym_comprehension_repeat1] = aux_sym_comprehension_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [alias_sym_package_identifier] = alias_sym_package_identifier,
  [alias_sym_value] = alias_sym_value,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_package] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_dot] = {
    .visible = true,
    .named = true,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_len] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_close] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_div] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_quo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rem] = {
    .visible = true,
    .named = false,
  },
  [sym_number_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int128] = {
    .visible = true,
    .named = false,
  },
  [sym_string_type] = {
    .visible = true,
    .named = true,
  },
  [sym_bytes_type] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_type] = {
    .visible = true,
    .named = true,
  },
  [sym_bottom_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_null_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_int_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_float_lit] = {
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK2] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__str_content] = {
    .visible = false,
    .named = true,
  },
  [sym__multi_str_content] = {
    .visible = false,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__package_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_package_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_import_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_import_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_import_spec_list] = {
    .visible = true,
    .named = true,
  },
  [sym_blank_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__string_lit] = {
    .visible = false,
    .named = true,
  },
  [sym_raw_simple_string_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_string_lit] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__string_parts] = {
    .visible = false,
    .named = false,
  },
  [sym_raw_multiline_string_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_multiline_string_lit] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__multi_string_parts] = {
    .visible = false,
    .named = false,
  },
  [sym_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym_builtin] = {
    .visible = true,
    .named = true,
  },
  [sym_float_type] = {
    .visible = true,
    .named = true,
  },
  [sym_uint_type] = {
    .visible = true,
    .named = true,
  },
  [sym_int_type] = {
    .visible = true,
    .named = true,
  },
  [sym_top_lit] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym__list_elem] = {
    .visible = false,
    .named = true,
  },
  [sym_list_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_ellipsis] = {
    .visible = true,
    .named = true,
  },
  [sym__embedding] = {
    .visible = false,
    .named = true,
  },
  [sym__label_name] = {
    .visible = false,
    .named = true,
  },
  [sym__label_expr] = {
    .visible = false,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_for_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_guard_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_let_clause] = {
    .visible = true,
    .named = true,
  },
  [sym__clause] = {
    .visible = false,
    .named = true,
  },
  [sym_comprehension] = {
    .visible = true,
    .named = true,
  },
  [sym__alias_expr] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__primary_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__operand] = {
    .visible = false,
    .named = true,
  },
  [sym_index_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_selector_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_index] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_import_spec_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__list_elem_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_lit_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_lit_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comprehension_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_package_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_value] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_alias = 1,
  field_condition = 2,
  field_left = 3,
  field_name = 4,
  field_operand = 5,
  field_operator = 6,
  field_path = 7,
  field_right = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_condition] = "condition",
  [field_left] = "left",
  [field_name] = "name",
  [field_operand] = "operand",
  [field_operator] = "operator",
  [field_path] = "path",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 1},
  [5] = {.index = 3, .length = 2},
  [6] = {.index = 5, .length = 2},
  [7] = {.index = 0, .length = 1},
  [8] = {.index = 7, .length = 2},
  [9] = {.index = 9, .length = 1},
  [10] = {.index = 10, .length = 1},
  [11] = {.index = 11, .length = 1},
  [12] = {.index = 12, .length = 3},
  [13] = {.index = 15, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_alias, 0, .inherited = true},
  [1] =
    {field_path, 0},
  [2] =
    {field_condition, 1},
  [3] =
    {field_operand, 1},
    {field_operator, 0},
  [5] =
    {field_alias, 0, .inherited = true},
    {field_alias, 1, .inherited = true},
  [7] =
    {field_name, 0},
    {field_path, 1},
  [9] =
    {field_alias, 2, .inherited = true},
  [10] =
    {field_alias, 0},
  [11] =
    {field_alias, 1, .inherited = true},
  [12] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [15] =
    {field_left, 1},
    {field_right, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [0] = alias_sym_package_identifier,
  },
  [7] = {
    [0] = alias_sym_value,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__alias_expr, 2,
    sym__alias_expr,
    alias_sym_value,
  0,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 6688
    ? (c < 2990
      ? (c < 2384
        ? (c < 1488
          ? (c < 886
            ? (c < 216
              ? (c < 181
                ? (c < 'a'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= 'z' || c == 170))
                : (c <= 181 || (c < 192
                  ? c == 186
                  : c <= 214)))
              : (c <= 246 || (c < 748
                ? (c < 710
                  ? (c >= 248 && c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))
                : (c <= 748 || (c < 880
                  ? c == 750
                  : c <= 884)))))
            : (c <= 887 || (c < 931
              ? (c < 904
                ? (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || c == 902))
                : (c <= 906 || (c < 910
                  ? c == 908
                  : c <= 929)))
              : (c <= 1013 || (c < 1329
                ? (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : c <= 1416)))))))
          : (c <= 1514 || (c < 1994
            ? (c < 1774
              ? (c < 1649
                ? (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))
                : (c <= 1747 || (c < 1765
                  ? c == 1749
                  : c <= 1766)))
              : (c <= 1775 || (c < 1810
                ? (c < 1791
                  ? (c >= 1786 && c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : c <= 1969)))))
            : (c <= 2026 || (c < 2112
              ? (c < 2074
                ? (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : (c <= 2042 || (c >= 2048 && c <= 2069)))
                : (c <= 2074 || (c < 2088
                  ? c == 2084
                  : c <= 2088)))
              : (c <= 2136 || (c < 2230
                ? (c < 2208
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2228)
                : (c <= 2247 || (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : c <= 2365)))))))))
        : (c <= 2384 || (c < 2707
          ? (c < 2556
            ? (c < 2482
              ? (c < 2447
                ? (c < 2417
                  ? (c >= 2392 && c <= 2401)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))
                : (c <= 2448 || (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : c <= 2480)))
              : (c <= 2482 || (c < 2524
                ? (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : (c <= 2493 || c == 2510))
                : (c <= 2525 || (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : c <= 2545)))))
            : (c <= 2556 || (c < 2616
              ? (c < 2602
                ? (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)))
              : (c <= 2617 || (c < 2674
                ? (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)
                : (c <= 2676 || (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : c <= 2705)))))))
          : (c <= 2728 || (c < 2877
            ? (c < 2809
              ? (c < 2749
                ? (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))
                : (c <= 2749 || (c < 2784
                  ? c == 2768
                  : c <= 2785)))
              : (c <= 2809 || (c < 2858
                ? (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : c <= 2873)))))
            : (c <= 2877 || (c < 2962
              ? (c < 2947
                ? (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : (c <= 2913 || c == 2929))
                : (c <= 2947 || (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)))
              : (c <= 2965 || (c < 2974
                ? (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)
                : (c <= 2975 || (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : c <= 2986)))))))))))
      : (c <= 3001 || (c < 4193
        ? (c < 3461
          ? (c < 3253
            ? (c < 3160
              ? (c < 3090
                ? (c < 3077
                  ? c == 3024
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))
                : (c <= 3112 || (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : c <= 3133)))
              : (c <= 3162 || (c < 3214
                ? (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : (c <= 3200 || (c >= 3205 && c <= 3212)))
                : (c <= 3216 || (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : c <= 3251)))))
            : (c <= 3257 || (c < 3346
              ? (c < 3313
                ? (c < 3294
                  ? c == 3261
                  : (c <= 3294 || (c >= 3296 && c <= 3297)))
                : (c <= 3314 || (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)))
              : (c <= 3386 || (c < 3412
                ? (c < 3406
                  ? c == 3389
                  : c <= 3406)
                : (c <= 3414 || (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : c <= 3455)))))))
          : (c <= 3478 || (c < 3762
            ? (c < 3648
              ? (c < 3520
                ? (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : (c <= 3515 || c == 3517))
                : (c <= 3526 || (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : c <= 3635)))
              : (c <= 3654 || (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : c <= 3760)))))
            : (c <= 3763 || (c < 3913
              ? (c < 3804
                ? (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))
                : (c <= 3807 || (c < 3904
                  ? c == 3840
                  : c <= 3911)))
              : (c <= 3948 || (c < 4159
                ? (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)
                : (c <= 4159 || (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : c <= 4189)))))))))
        : (c <= 4193 || (c < 5112
          ? (c < 4704
            ? (c < 4301
              ? (c < 4238
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : c <= 4295)))
              : (c <= 4301 || (c < 4688
                ? (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))
                : (c <= 4694 || (c < 4698
                  ? c == 4696
                  : c <= 4701)))))
            : (c <= 4744 || (c < 4808
              ? (c < 4792
                ? (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))
                : (c <= 4798 || (c < 4802
                  ? c == 4800
                  : c <= 4805)))
              : (c <= 4822 || (c < 4888
                ? (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)
                : (c <= 4954 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))))))
          : (c <= 5117 || (c < 6103
            ? (c < 5902
              ? (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5900)))
              : (c <= 5905 || (c < 5984
                ? (c < 5952
                  ? (c >= 5920 && c <= 5937)
                  : c <= 5969)
                : (c <= 5996 || (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6067)))))
            : (c <= 6103 || (c < 6400
              ? (c < 6279
                ? (c < 6176
                  ? c == 6108
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))
              : (c <= 6430 || (c < 6528
                ? (c < 6512
                  ? (c >= 6480 && c <= 6509)
                  : c <= 6516)
                : (c <= 6571 || (c < 6656
                  ? (c >= 6576 && c <= 6601)
                  : c <= 6678)))))))))))))
    : (c <= 6740 || (c < 43259
      ? (c < 11264
        ? (c < 8064
          ? (c < 7406
            ? (c < 7168
              ? (c < 7043
                ? (c < 6917
                  ? c == 6823
                  : (c <= 6963 || (c >= 6981 && c <= 6987)))
                : (c <= 7072 || (c < 7098
                  ? (c >= 7086 && c <= 7087)
                  : c <= 7141)))
              : (c <= 7203 || (c < 7312
                ? (c < 7258
                  ? (c >= 7245 && c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))
                : (c <= 7354 || (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : c <= 7404)))))
            : (c <= 7411 || (c < 8008
              ? (c < 7680
                ? (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : c <= 8005)))
              : (c <= 8013 || (c < 8027
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : c <= 8025)
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))))))
          : (c <= 8116 || (c < 8455
            ? (c < 8160
              ? (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))
              : (c <= 8172 || (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))))
            : (c <= 8455 || (c < 8490
              ? (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))
              : (c <= 8493 || (c < 8517
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : c <= 8511)
                : (c <= 8521 || (c < 8579
                  ? c == 8526
                  : c <= 8580)))))))))
        : (c <= 11310 || (c < 12549
          ? (c < 11704
            ? (c < 11565
              ? (c < 11506
                ? (c < 11360
                  ? (c >= 11312 && c <= 11358)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))
                : (c <= 11507 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : c <= 11559)))
              : (c <= 11565 || (c < 11680
                ? (c < 11631
                  ? (c >= 11568 && c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))
                : (c <= 11686 || (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : c <= 11702)))))
            : (c <= 11710 || (c < 12337
              ? (c < 11736
                ? (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))
                : (c <= 11742 || (c < 12293
                  ? c == 11823
                  : c <= 12294)))
              : (c <= 12341 || (c < 12445
                ? (c < 12353
                  ? (c >= 12347 && c <= 12348)
                  : c <= 12438)
                : (c <= 12447 || (c < 12540
                  ? (c >= 12449 && c <= 12538)
                  : c <= 12543)))))))
          : (c <= 12591 || (c < 42623
            ? (c < 40956
              ? (c < 13312
                ? (c < 12704
                  ? (c >= 12593 && c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 13312 || (c < 19968
                  ? c == 19903
                  : c <= 19968)))
              : (c <= 40956 || (c < 42512
                ? (c < 42192
                  ? (c >= 40960 && c <= 42124)
                  : (c <= 42237 || (c >= 42240 && c <= 42508)))
                : (c <= 42527 || (c < 42560
                  ? (c >= 42538 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 43011
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42943 || (c < 42997
                  ? (c >= 42946 && c <= 42954)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67828
            ? (c < 67639
              ? (c < 67584
                ? (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))
                : (c <= 67589 || (c < 67594
                  ? c == 67592
                  : c <= 67637)))
              : (c <= 67640 || (c < 67680
                ? (c < 67647
                  ? c == 67644
                  : c <= 67669)
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < '0'
                  ? c == '$'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= 'd' || (c < 170
                  ? (c >= 'f' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : c <= 2247)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3200
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3294
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6016
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5952
                ? (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6987 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < '0'
                  ? c == '$'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= 'k' || (c < 170
                  ? (c >= 'm' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : c <= 2247)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3200
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3294
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6016
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5952
                ? (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6987 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_4(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < '0'
                  ? c == '$'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= 'q' || (c < 170
                  ? (c >= 's' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : c <= 2247)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3200
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3294
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6016
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5952
                ? (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6987 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_5(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < '0'
                  ? c == '$'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= 'r' || (c < 170
                  ? (c >= 't' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : c <= 2247)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3200
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3294
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6016
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5952
                ? (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6987 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_6(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < '0'
                  ? c == '$'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= 't' || (c < 170
                  ? (c >= 'v' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : c <= 2247)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3200
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3294
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6016
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5952
                ? (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6987 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_7(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1369
          ? (c < 750
            ? (c < 186
              ? (c < 'b'
                ? (c < '0'
                  ? c == '$'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= 'z' || (c < 181
                  ? c == 170
                  : c <= 181)))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1015
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : c <= 1013)
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : c <= 2247)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3200
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3294
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6016
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5952
                ? (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6987 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_8(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1369
          ? (c < 750
            ? (c < 186
              ? (c < 'a'
                ? (c < '0'
                  ? c == '$'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= 'z' || (c < 181
                  ? c == 170
                  : c <= 181)))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1015
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : c <= 1013)
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : c <= 2247)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3200
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3294
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6016
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5952
                ? (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6987 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(45);
      if (lookahead == '!') ADVANCE(111);
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '#') ADVANCE(5);
      if (lookahead == '&') ADVANCE(96);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == '+') ADVANCE(107);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '-') ADVANCE(108);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '/') ADVANCE(110);
      if (lookahead == '0') ADVANCE(71);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == '<') ADVANCE(101);
      if (lookahead == '=') ADVANCE(93);
      if (lookahead == '>') ADVANCE(103);
      if (lookahead == '?') ADVANCE(91);
      if (lookahead == '[') ADVANCE(112);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == ']') ADVANCE(87);
      if (lookahead == '_') ADVANCE(52);
      if (lookahead == 'f') ADVANCE(59);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == '{') ADVANCE(88);
      if (lookahead == '|') ADVANCE(95);
      if (lookahead == '}') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(60);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead == '!') ADVANCE(111);
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '#') ADVANCE(5);
      if (lookahead == '&') ADVANCE(96);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == '+') ADVANCE(107);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '-') ADVANCE(108);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '/') ADVANCE(110);
      if (lookahead == '0') ADVANCE(71);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == '<') ADVANCE(101);
      if (lookahead == '=') ADVANCE(93);
      if (lookahead == '>') ADVANCE(103);
      if (lookahead == '?') ADVANCE(91);
      if (lookahead == '[') ADVANCE(112);
      if (lookahead == '_') ADVANCE(52);
      if (lookahead == 'f') ADVANCE(59);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == '{') ADVANCE(88);
      if (lookahead == '|') ADVANCE(95);
      if (lookahead == '}') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(60);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead == '!') ADVANCE(111);
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '#') ADVANCE(5);
      if (lookahead == '&') ADVANCE(96);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == '+') ADVANCE(107);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '-') ADVANCE(108);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '/') ADVANCE(110);
      if (lookahead == '0') ADVANCE(71);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == '<') ADVANCE(101);
      if (lookahead == '=') ADVANCE(93);
      if (lookahead == '>') ADVANCE(103);
      if (lookahead == '?') ADVANCE(91);
      if (lookahead == '[') ADVANCE(86);
      if (lookahead == '_') ADVANCE(52);
      if (lookahead == 'f') ADVANCE(59);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == '{') ADVANCE(88);
      if (lookahead == '|') ADVANCE(95);
      if (lookahead == '}') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(60);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead == '!') ADVANCE(111);
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '#') ADVANCE(5);
      if (lookahead == '&') ADVANCE(96);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == '+') ADVANCE(107);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '-') ADVANCE(108);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(110);
      if (lookahead == '0') ADVANCE(71);
      if (lookahead == '<') ADVANCE(101);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(103);
      if (lookahead == '[') ADVANCE(86);
      if (lookahead == '_') ADVANCE(52);
      if (lookahead == 'f') ADVANCE(59);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == '{') ADVANCE(88);
      if (lookahead == '|') ADVANCE(95);
      if (lookahead == '}') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(60);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '#') ADVANCE(5);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == '=') ADVANCE(92);
      if (lookahead == '?') ADVANCE(91);
      if (lookahead == '_') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(60);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(61);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(60);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(67);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(65);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(63);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '[') ADVANCE(86);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == '_') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(60);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(62);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(42);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(60);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(66);
      END_STATE();
    case 14:
      if (lookahead == '(') ADVANCE(68);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '0') ADVANCE(83);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(90);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == '_') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      if (lookahead == '_') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == 'G' ||
          lookahead == 'K' ||
          lookahead == 'M' ||
          lookahead == 'P' ||
          lookahead == 'T') ADVANCE(77);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == 'G' ||
          lookahead == 'K' ||
          lookahead == 'M' ||
          lookahead == 'P' ||
          lookahead == 'T') ADVANCE(77);
      if (lookahead == '_') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '/') ADVANCE(113);
      END_STATE();
    case 22:
      if (lookahead == '0') ADVANCE(19);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 23:
      if (lookahead == '=') ADVANCE(99);
      if (lookahead == '~') ADVANCE(105);
      END_STATE();
    case 24:
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(75);
      END_STATE();
    case 25:
      if (lookahead == '_') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(76);
      END_STATE();
    case 26:
      if (lookahead == '_') ADVANCE(69);
      END_STATE();
    case 27:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 28:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(27);
      if (lookahead == '_') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      END_STATE();
    case 30:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(75);
      END_STATE();
    case 31:
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(73);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(76);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      END_STATE();
    case 42:
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(60);
      END_STATE();
    case 43:
      if (eof) ADVANCE(45);
      if (lookahead == '!') ADVANCE(111);
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '#') ADVANCE(5);
      if (lookahead == '&') ADVANCE(96);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == '+') ADVANCE(107);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '-') ADVANCE(108);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '/') ADVANCE(110);
      if (lookahead == '0') ADVANCE(71);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == '<') ADVANCE(101);
      if (lookahead == '=') ADVANCE(93);
      if (lookahead == '>') ADVANCE(103);
      if (lookahead == '?') ADVANCE(91);
      if (lookahead == '[') ADVANCE(86);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == ']') ADVANCE(87);
      if (lookahead == '_') ADVANCE(52);
      if (lookahead == 'f') ADVANCE(59);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == '{') ADVANCE(88);
      if (lookahead == '|') ADVANCE(95);
      if (lookahead == '}') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(60);
      END_STATE();
    case 44:
      if (eof) ADVANCE(45);
      if (lookahead == '!') ADVANCE(111);
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '#') ADVANCE(5);
      if (lookahead == '&') ADVANCE(96);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == '+') ADVANCE(107);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '-') ADVANCE(108);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(110);
      if (lookahead == '0') ADVANCE(71);
      if (lookahead == '<') ADVANCE(101);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(103);
      if (lookahead == '[') ADVANCE(86);
      if (lookahead == ']') ADVANCE(87);
      if (lookahead == '_') ADVANCE(52);
      if (lookahead == 'f') ADVANCE(59);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == '{') ADVANCE(88);
      if (lookahead == '|') ADVANCE(95);
      if (lookahead == '}') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(60);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_dot);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '0') ADVANCE(83);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '|') ADVANCE(26);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(60);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '#') ADVANCE(42);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(60);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(60);
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(60);
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(60);
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(60);
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(60);
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(60);
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_POUND_DQUOTE);
      if (lookahead == '"') ADVANCE(7);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_DQUOTE_POUND);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(6);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE_POUND);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_BSLASH_LPAREN);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_bottom_lit);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_int_lit);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_int_lit);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(24);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      if (lookahead == 'G' ||
          lookahead == 'K' ||
          lookahead == 'M' ||
          lookahead == 'P' ||
          lookahead == 'T') ADVANCE(77);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(25);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(17);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(73);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_int_lit);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      if (lookahead == 'G' ||
          lookahead == 'K' ||
          lookahead == 'M' ||
          lookahead == 'P' ||
          lookahead == 'T') ADVANCE(77);
      if (lookahead == '_') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_int_lit);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_int_lit);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(27);
      if (lookahead == '_') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_int_lit);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_int_lit);
      if (lookahead == '_') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_int_lit);
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_float_lit);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      if (lookahead == 'G' ||
          lookahead == 'K' ||
          lookahead == 'M' ||
          lookahead == 'P' ||
          lookahead == 'T') ADVANCE(77);
      if (lookahead == '_') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_float_lit);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      if (lookahead == 'G' ||
          lookahead == 'K' ||
          lookahead == 'M' ||
          lookahead == 'P' ||
          lookahead == 'T') ADVANCE(77);
      if (lookahead == '_') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_float_lit);
      if (lookahead == '0') ADVANCE(78);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_float_lit);
      if (lookahead == '_') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_float_lit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      if (lookahead == '_') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_float_lit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      if (lookahead == 'G' ||
          lookahead == 'K' ||
          lookahead == 'M' ||
          lookahead == 'P' ||
          lookahead == 'T') ADVANCE(77);
      if (lookahead == '_') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_float_lit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      if (lookahead == 'G' ||
          lookahead == 'K' ||
          lookahead == 'M' ||
          lookahead == 'P' ||
          lookahead == 'T') ADVANCE(77);
      if (lookahead == '_') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_float_lit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(99);
      if (lookahead == '~') ADVANCE(105);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(97);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(98);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_EQ_TILDE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_BANG_TILDE);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(113);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(100);
      if (lookahead == '~') ADVANCE(106);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_LBRACK2);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(113);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'b') ADVANCE(2);
      if (lookahead == 'c') ADVANCE(3);
      if (lookahead == 'd') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'l') ADVANCE(7);
      if (lookahead == 'm') ADVANCE(8);
      if (lookahead == 'n') ADVANCE(9);
      if (lookahead == 'o') ADVANCE(10);
      if (lookahead == 'p') ADVANCE(11);
      if (lookahead == 'q') ADVANCE(12);
      if (lookahead == 'r') ADVANCE(13);
      if (lookahead == 's') ADVANCE(14);
      if (lookahead == 'u') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(17);
      if (lookahead == 'y') ADVANCE(18);
      END_STATE();
    case 3:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 4:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 6:
      if (lookahead == 'f') ADVANCE(23);
      if (lookahead == 'm') ADVANCE(24);
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 9:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 10:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 12:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 14:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(35);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 20:
      if (lookahead == 'v') ADVANCE(39);
      END_STATE();
    case 21:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 24:
      if (lookahead == 'p') ADVANCE(42);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(44);
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(46);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(47);
      if (lookahead == 'm') ADVANCE(48);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 32:
      if (lookahead == 'm') ADVANCE(51);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 38:
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_div);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '1') ADVANCE(59);
      if (lookahead == '3') ADVANCE(60);
      if (lookahead == '6') ADVANCE(61);
      if (lookahead == '8') ADVANCE(62);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_len);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 48:
      if (lookahead == 'b') ADVANCE(64);
      END_STATE();
    case 49:
      if (lookahead == 'k') ADVANCE(65);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_quo);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_rem);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_bool_type);
      END_STATE();
    case 55:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 59:
      if (lookahead == '2') ADVANCE(72);
      if (lookahead == '6') ADVANCE(73);
      END_STATE();
    case 60:
      if (lookahead == '2') ADVANCE(74);
      END_STATE();
    case 61:
      if (lookahead == '4') ADVANCE(75);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_int8);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_null_lit);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_uint);
      if (lookahead == '1') ADVANCE(79);
      if (lookahead == '3') ADVANCE(80);
      if (lookahead == '6') ADVANCE(81);
      if (lookahead == '8') ADVANCE(82);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_bytes_type);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_close);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == '3') ADVANCE(83);
      if (lookahead == '6') ADVANCE(84);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 72:
      if (lookahead == '8') ADVANCE(86);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_int16);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 77:
      if (lookahead == 'g') ADVANCE(88);
      END_STATE();
    case 78:
      if (lookahead == 'g') ADVANCE(89);
      END_STATE();
    case 79:
      if (lookahead == '2') ADVANCE(90);
      if (lookahead == '6') ADVANCE(91);
      END_STATE();
    case 80:
      if (lookahead == '2') ADVANCE(92);
      END_STATE();
    case 81:
      if (lookahead == '4') ADVANCE(93);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_uint8);
      END_STATE();
    case 83:
      if (lookahead == '2') ADVANCE(94);
      END_STATE();
    case 84:
      if (lookahead == '4') ADVANCE(95);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_int128);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_number_type);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_string_type);
      END_STATE();
    case 90:
      if (lookahead == '8') ADVANCE(97);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_uint16);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_uint32);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_uint64);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_float32);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_float64);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_uint128);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 44},
  [2] = {.lex_state = 44},
  [3] = {.lex_state = 44},
  [4] = {.lex_state = 44},
  [5] = {.lex_state = 44},
  [6] = {.lex_state = 44},
  [7] = {.lex_state = 44},
  [8] = {.lex_state = 44},
  [9] = {.lex_state = 44},
  [10] = {.lex_state = 44},
  [11] = {.lex_state = 44},
  [12] = {.lex_state = 44},
  [13] = {.lex_state = 44},
  [14] = {.lex_state = 44},
  [15] = {.lex_state = 44},
  [16] = {.lex_state = 44},
  [17] = {.lex_state = 44},
  [18] = {.lex_state = 44},
  [19] = {.lex_state = 44},
  [20] = {.lex_state = 44},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 44},
  [23] = {.lex_state = 44},
  [24] = {.lex_state = 44},
  [25] = {.lex_state = 44},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 44},
  [28] = {.lex_state = 44},
  [29] = {.lex_state = 44},
  [30] = {.lex_state = 44},
  [31] = {.lex_state = 44},
  [32] = {.lex_state = 44},
  [33] = {.lex_state = 44},
  [34] = {.lex_state = 44},
  [35] = {.lex_state = 44},
  [36] = {.lex_state = 44},
  [37] = {.lex_state = 44},
  [38] = {.lex_state = 44},
  [39] = {.lex_state = 44},
  [40] = {.lex_state = 44},
  [41] = {.lex_state = 44},
  [42] = {.lex_state = 44},
  [43] = {.lex_state = 44},
  [44] = {.lex_state = 44},
  [45] = {.lex_state = 44},
  [46] = {.lex_state = 44},
  [47] = {.lex_state = 44},
  [48] = {.lex_state = 44},
  [49] = {.lex_state = 44},
  [50] = {.lex_state = 44},
  [51] = {.lex_state = 44},
  [52] = {.lex_state = 44},
  [53] = {.lex_state = 44},
  [54] = {.lex_state = 44},
  [55] = {.lex_state = 44},
  [56] = {.lex_state = 44},
  [57] = {.lex_state = 44},
  [58] = {.lex_state = 44},
  [59] = {.lex_state = 44},
  [60] = {.lex_state = 44},
  [61] = {.lex_state = 44},
  [62] = {.lex_state = 44},
  [63] = {.lex_state = 44},
  [64] = {.lex_state = 44},
  [65] = {.lex_state = 44},
  [66] = {.lex_state = 44},
  [67] = {.lex_state = 44},
  [68] = {.lex_state = 44},
  [69] = {.lex_state = 44},
  [70] = {.lex_state = 44},
  [71] = {.lex_state = 44},
  [72] = {.lex_state = 44},
  [73] = {.lex_state = 44},
  [74] = {.lex_state = 44},
  [75] = {.lex_state = 44},
  [76] = {.lex_state = 44},
  [77] = {.lex_state = 44},
  [78] = {.lex_state = 44},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 3},
  [138] = {.lex_state = 3},
  [139] = {.lex_state = 3},
  [140] = {.lex_state = 3},
  [141] = {.lex_state = 3},
  [142] = {.lex_state = 44},
  [143] = {.lex_state = 3},
  [144] = {.lex_state = 3},
  [145] = {.lex_state = 3},
  [146] = {.lex_state = 3},
  [147] = {.lex_state = 44},
  [148] = {.lex_state = 3},
  [149] = {.lex_state = 44},
  [150] = {.lex_state = 44},
  [151] = {.lex_state = 44},
  [152] = {.lex_state = 44},
  [153] = {.lex_state = 44},
  [154] = {.lex_state = 44},
  [155] = {.lex_state = 44},
  [156] = {.lex_state = 44},
  [157] = {.lex_state = 44},
  [158] = {.lex_state = 44},
  [159] = {.lex_state = 44},
  [160] = {.lex_state = 3},
  [161] = {.lex_state = 3},
  [162] = {.lex_state = 44},
  [163] = {.lex_state = 44},
  [164] = {.lex_state = 3},
  [165] = {.lex_state = 44},
  [166] = {.lex_state = 3},
  [167] = {.lex_state = 44},
  [168] = {.lex_state = 3},
  [169] = {.lex_state = 44},
  [170] = {.lex_state = 44},
  [171] = {.lex_state = 44},
  [172] = {.lex_state = 44},
  [173] = {.lex_state = 3},
  [174] = {.lex_state = 44},
  [175] = {.lex_state = 44},
  [176] = {.lex_state = 3},
  [177] = {.lex_state = 44},
  [178] = {.lex_state = 44},
  [179] = {.lex_state = 3},
  [180] = {.lex_state = 44},
  [181] = {.lex_state = 44},
  [182] = {.lex_state = 44},
  [183] = {.lex_state = 3},
  [184] = {.lex_state = 44},
  [185] = {.lex_state = 44},
  [186] = {.lex_state = 44},
  [187] = {.lex_state = 44},
  [188] = {.lex_state = 44},
  [189] = {.lex_state = 44},
  [190] = {.lex_state = 44},
  [191] = {.lex_state = 44},
  [192] = {.lex_state = 44},
  [193] = {.lex_state = 44},
  [194] = {.lex_state = 44},
  [195] = {.lex_state = 44},
  [196] = {.lex_state = 44},
  [197] = {.lex_state = 44},
  [198] = {.lex_state = 44},
  [199] = {.lex_state = 44},
  [200] = {.lex_state = 44},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 1},
  [203] = {.lex_state = 1},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 3},
  [216] = {.lex_state = 3},
  [217] = {.lex_state = 3},
  [218] = {.lex_state = 3},
  [219] = {.lex_state = 3},
  [220] = {.lex_state = 3},
  [221] = {.lex_state = 3},
  [222] = {.lex_state = 3},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 3},
  [225] = {.lex_state = 3},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 4},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 4},
  [236] = {.lex_state = 4},
  [237] = {.lex_state = 4},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 4},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 8, .external_lex_state = 2},
  [250] = {.lex_state = 8, .external_lex_state = 2},
  [251] = {.lex_state = 8, .external_lex_state = 2},
  [252] = {.lex_state = 8, .external_lex_state = 2},
  [253] = {.lex_state = 8, .external_lex_state = 2},
  [254] = {.lex_state = 8, .external_lex_state = 2},
  [255] = {.lex_state = 8, .external_lex_state = 2},
  [256] = {.lex_state = 8},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0, .external_lex_state = 3},
  [260] = {.lex_state = 0, .external_lex_state = 3},
  [261] = {.lex_state = 0, .external_lex_state = 3},
  [262] = {.lex_state = 0, .external_lex_state = 3},
  [263] = {.lex_state = 0, .external_lex_state = 3},
  [264] = {.lex_state = 0, .external_lex_state = 3},
  [265] = {.lex_state = 0, .external_lex_state = 3},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 8, .external_lex_state = 2},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 8},
  [270] = {.lex_state = 4},
  [271] = {.lex_state = 4},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0, .external_lex_state = 3},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 8},
  [278] = {.lex_state = 4},
  [279] = {.lex_state = 3},
  [280] = {.lex_state = 3},
  [281] = {.lex_state = 3},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 9, .external_lex_state = 3},
  [286] = {.lex_state = 3},
  [287] = {.lex_state = 9, .external_lex_state = 4},
  [288] = {.lex_state = 9, .external_lex_state = 3},
  [289] = {.lex_state = 9, .external_lex_state = 3},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 9, .external_lex_state = 4},
  [292] = {.lex_state = 9, .external_lex_state = 4},
  [293] = {.lex_state = 9},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 9},
  [296] = {.lex_state = 9},
  [297] = {.lex_state = 9},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 4},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 9},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 4},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 4},
  [311] = {.lex_state = 9},
  [312] = {.lex_state = 0},
};

enum {
  ts_external_token__str_content = 0,
  ts_external_token__multi_str_content = 1,
  ts_external_token_escape_sequence = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__str_content] = sym__str_content,
  [ts_external_token__multi_str_content] = sym__multi_str_content,
  [ts_external_token_escape_sequence] = sym_escape_sequence,
};

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__str_content] = true,
    [ts_external_token__multi_str_content] = true,
    [ts_external_token_escape_sequence] = true,
  },
  [2] = {
    [ts_external_token__str_content] = true,
    [ts_external_token_escape_sequence] = true,
  },
  [3] = {
    [ts_external_token__multi_str_content] = true,
  },
  [4] = {
    [ts_external_token__str_content] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_package] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_dot] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH_LPAREN] = ACTIONS(1),
    [anon_sym_len] = ACTIONS(1),
    [anon_sym_close] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_div] = ACTIONS(1),
    [anon_sym_mod] = ACTIONS(1),
    [anon_sym_quo] = ACTIONS(1),
    [anon_sym_rem] = ACTIONS(1),
    [sym_number_type] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_float32] = ACTIONS(1),
    [anon_sym_float64] = ACTIONS(1),
    [anon_sym_uint] = ACTIONS(1),
    [anon_sym_uint8] = ACTIONS(1),
    [anon_sym_uint16] = ACTIONS(1),
    [anon_sym_uint32] = ACTIONS(1),
    [anon_sym_uint64] = ACTIONS(1),
    [anon_sym_uint128] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_int8] = ACTIONS(1),
    [anon_sym_int16] = ACTIONS(1),
    [anon_sym_int32] = ACTIONS(1),
    [anon_sym_int64] = ACTIONS(1),
    [anon_sym_int128] = ACTIONS(1),
    [sym_string_type] = ACTIONS(1),
    [sym_bytes_type] = ACTIONS(1),
    [sym_bool_type] = ACTIONS(1),
    [sym_bottom_lit] = ACTIONS(1),
    [sym_null_lit] = ACTIONS(1),
    [sym_bool_lit] = ACTIONS(1),
    [sym_int_lit] = ACTIONS(1),
    [sym_float_lit] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_EQ_TILDE] = ACTIONS(1),
    [anon_sym_BANG_TILDE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_LBRACK2] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__str_content] = ACTIONS(1),
    [sym__multi_str_content] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(309),
    [sym_package_clause] = STATE(3),
    [sym_import_declaration] = STATE(3),
    [sym__string_lit] = STATE(203),
    [sym_raw_simple_string_lit] = STATE(203),
    [sym_simple_string_lit] = STATE(82),
    [sym_raw_multiline_string_lit] = STATE(203),
    [sym_multiline_string_lit] = STATE(203),
    [sym_builtin] = STATE(203),
    [sym_float_type] = STATE(203),
    [sym_uint_type] = STATE(203),
    [sym_int_type] = STATE(203),
    [sym_top_lit] = STATE(203),
    [sym__declaration] = STATE(280),
    [sym_list_lit] = STATE(203),
    [sym_struct_lit] = STATE(203),
    [sym_ellipsis] = STATE(280),
    [sym__embedding] = STATE(164),
    [sym__label_name] = STATE(283),
    [sym__label_expr] = STATE(307),
    [sym_label] = STATE(306),
    [sym_field] = STATE(280),
    [sym_for_clause] = STATE(240),
    [sym_guard_clause] = STATE(240),
    [sym_let_clause] = STATE(280),
    [sym_comprehension] = STATE(164),
    [sym__alias_expr] = STATE(183),
    [sym__expression] = STATE(220),
    [sym_binary_expression] = STATE(220),
    [sym_unary_expression] = STATE(220),
    [sym__primary_expression] = STATE(203),
    [sym__operand] = STATE(203),
    [sym_index_expression] = STATE(203),
    [sym_selector_expression] = STATE(203),
    [sym_call_expression] = STATE(203),
    [sym__literal] = STATE(203),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_field_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_package] = ACTIONS(9),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym__] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(23),
    [anon_sym_len] = ACTIONS(25),
    [anon_sym_close] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(25),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_div] = ACTIONS(25),
    [anon_sym_mod] = ACTIONS(25),
    [anon_sym_quo] = ACTIONS(25),
    [anon_sym_rem] = ACTIONS(25),
    [sym_number_type] = ACTIONS(27),
    [anon_sym_float] = ACTIONS(29),
    [anon_sym_float32] = ACTIONS(29),
    [anon_sym_float64] = ACTIONS(29),
    [anon_sym_uint] = ACTIONS(31),
    [anon_sym_uint8] = ACTIONS(31),
    [anon_sym_uint16] = ACTIONS(31),
    [anon_sym_uint32] = ACTIONS(31),
    [anon_sym_uint64] = ACTIONS(31),
    [anon_sym_uint128] = ACTIONS(31),
    [anon_sym_int] = ACTIONS(33),
    [anon_sym_int8] = ACTIONS(33),
    [anon_sym_int16] = ACTIONS(33),
    [anon_sym_int32] = ACTIONS(33),
    [anon_sym_int64] = ACTIONS(33),
    [anon_sym_int128] = ACTIONS(33),
    [sym_string_type] = ACTIONS(27),
    [sym_bool_type] = ACTIONS(27),
    [sym_bottom_lit] = ACTIONS(35),
    [sym_null_lit] = ACTIONS(27),
    [sym_bool_lit] = ACTIONS(27),
    [sym_int_lit] = ACTIONS(27),
    [sym_float_lit] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(41),
    [anon_sym_for] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_EQ_TILDE] = ACTIONS(49),
    [anon_sym_BANG_TILDE] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(49),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_BANG] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_package_clause] = STATE(2),
    [sym_import_declaration] = STATE(2),
    [sym__string_lit] = STATE(203),
    [sym_raw_simple_string_lit] = STATE(203),
    [sym_simple_string_lit] = STATE(82),
    [sym_raw_multiline_string_lit] = STATE(203),
    [sym_multiline_string_lit] = STATE(203),
    [sym_builtin] = STATE(203),
    [sym_float_type] = STATE(203),
    [sym_uint_type] = STATE(203),
    [sym_int_type] = STATE(203),
    [sym_top_lit] = STATE(203),
    [sym__declaration] = STATE(280),
    [sym_list_lit] = STATE(203),
    [sym_struct_lit] = STATE(203),
    [sym_ellipsis] = STATE(280),
    [sym__embedding] = STATE(164),
    [sym__label_name] = STATE(283),
    [sym__label_expr] = STATE(307),
    [sym_label] = STATE(306),
    [sym_field] = STATE(280),
    [sym_for_clause] = STATE(240),
    [sym_guard_clause] = STATE(240),
    [sym_let_clause] = STATE(280),
    [sym_comprehension] = STATE(164),
    [sym__alias_expr] = STATE(183),
    [sym__expression] = STATE(220),
    [sym_binary_expression] = STATE(220),
    [sym_unary_expression] = STATE(220),
    [sym__primary_expression] = STATE(203),
    [sym__operand] = STATE(203),
    [sym_index_expression] = STATE(203),
    [sym_selector_expression] = STATE(203),
    [sym_call_expression] = STATE(203),
    [sym__literal] = STATE(203),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_field_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(53),
    [sym_identifier] = ACTIONS(55),
    [anon_sym_package] = ACTIONS(58),
    [anon_sym_import] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(64),
    [anon_sym__] = ACTIONS(67),
    [anon_sym_POUND_DQUOTE] = ACTIONS(70),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(76),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(79),
    [anon_sym_len] = ACTIONS(82),
    [anon_sym_close] = ACTIONS(82),
    [anon_sym_and] = ACTIONS(82),
    [anon_sym_or] = ACTIONS(82),
    [anon_sym_div] = ACTIONS(82),
    [anon_sym_mod] = ACTIONS(82),
    [anon_sym_quo] = ACTIONS(82),
    [anon_sym_rem] = ACTIONS(82),
    [sym_number_type] = ACTIONS(85),
    [anon_sym_float] = ACTIONS(88),
    [anon_sym_float32] = ACTIONS(88),
    [anon_sym_float64] = ACTIONS(88),
    [anon_sym_uint] = ACTIONS(91),
    [anon_sym_uint8] = ACTIONS(91),
    [anon_sym_uint16] = ACTIONS(91),
    [anon_sym_uint32] = ACTIONS(91),
    [anon_sym_uint64] = ACTIONS(91),
    [anon_sym_uint128] = ACTIONS(91),
    [anon_sym_int] = ACTIONS(94),
    [anon_sym_int8] = ACTIONS(94),
    [anon_sym_int16] = ACTIONS(94),
    [anon_sym_int32] = ACTIONS(94),
    [anon_sym_int64] = ACTIONS(94),
    [anon_sym_int128] = ACTIONS(94),
    [sym_string_type] = ACTIONS(85),
    [sym_bool_type] = ACTIONS(85),
    [sym_bottom_lit] = ACTIONS(97),
    [sym_null_lit] = ACTIONS(85),
    [sym_bool_lit] = ACTIONS(85),
    [sym_int_lit] = ACTIONS(85),
    [sym_float_lit] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(100),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(106),
    [anon_sym_for] = ACTIONS(109),
    [anon_sym_if] = ACTIONS(112),
    [anon_sym_let] = ACTIONS(115),
    [anon_sym_BANG_EQ] = ACTIONS(118),
    [anon_sym_LT] = ACTIONS(121),
    [anon_sym_LT_EQ] = ACTIONS(118),
    [anon_sym_GT] = ACTIONS(121),
    [anon_sym_GT_EQ] = ACTIONS(118),
    [anon_sym_EQ_TILDE] = ACTIONS(118),
    [anon_sym_BANG_TILDE] = ACTIONS(118),
    [anon_sym_PLUS] = ACTIONS(118),
    [anon_sym_DASH] = ACTIONS(118),
    [anon_sym_STAR] = ACTIONS(118),
    [anon_sym_BANG] = ACTIONS(121),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_package_clause] = STATE(2),
    [sym_import_declaration] = STATE(2),
    [sym__string_lit] = STATE(203),
    [sym_raw_simple_string_lit] = STATE(203),
    [sym_simple_string_lit] = STATE(82),
    [sym_raw_multiline_string_lit] = STATE(203),
    [sym_multiline_string_lit] = STATE(203),
    [sym_builtin] = STATE(203),
    [sym_float_type] = STATE(203),
    [sym_uint_type] = STATE(203),
    [sym_int_type] = STATE(203),
    [sym_top_lit] = STATE(203),
    [sym__declaration] = STATE(280),
    [sym_list_lit] = STATE(203),
    [sym_struct_lit] = STATE(203),
    [sym_ellipsis] = STATE(280),
    [sym__embedding] = STATE(164),
    [sym__label_name] = STATE(283),
    [sym__label_expr] = STATE(307),
    [sym_label] = STATE(306),
    [sym_field] = STATE(280),
    [sym_for_clause] = STATE(240),
    [sym_guard_clause] = STATE(240),
    [sym_let_clause] = STATE(280),
    [sym_comprehension] = STATE(164),
    [sym__alias_expr] = STATE(183),
    [sym__expression] = STATE(220),
    [sym_binary_expression] = STATE(220),
    [sym_unary_expression] = STATE(220),
    [sym__primary_expression] = STATE(203),
    [sym__operand] = STATE(203),
    [sym_index_expression] = STATE(203),
    [sym_selector_expression] = STATE(203),
    [sym_call_expression] = STATE(203),
    [sym__literal] = STATE(203),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_field_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(124),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_package] = ACTIONS(9),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym__] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(23),
    [anon_sym_len] = ACTIONS(25),
    [anon_sym_close] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(25),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_div] = ACTIONS(25),
    [anon_sym_mod] = ACTIONS(25),
    [anon_sym_quo] = ACTIONS(25),
    [anon_sym_rem] = ACTIONS(25),
    [sym_number_type] = ACTIONS(27),
    [anon_sym_float] = ACTIONS(29),
    [anon_sym_float32] = ACTIONS(29),
    [anon_sym_float64] = ACTIONS(29),
    [anon_sym_uint] = ACTIONS(31),
    [anon_sym_uint8] = ACTIONS(31),
    [anon_sym_uint16] = ACTIONS(31),
    [anon_sym_uint32] = ACTIONS(31),
    [anon_sym_uint64] = ACTIONS(31),
    [anon_sym_uint128] = ACTIONS(31),
    [anon_sym_int] = ACTIONS(33),
    [anon_sym_int8] = ACTIONS(33),
    [anon_sym_int16] = ACTIONS(33),
    [anon_sym_int32] = ACTIONS(33),
    [anon_sym_int64] = ACTIONS(33),
    [anon_sym_int128] = ACTIONS(33),
    [sym_string_type] = ACTIONS(27),
    [sym_bool_type] = ACTIONS(27),
    [sym_bottom_lit] = ACTIONS(35),
    [sym_null_lit] = ACTIONS(27),
    [sym_bool_lit] = ACTIONS(27),
    [sym_int_lit] = ACTIONS(27),
    [sym_float_lit] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(41),
    [anon_sym_for] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_EQ_TILDE] = ACTIONS(49),
    [anon_sym_BANG_TILDE] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(49),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_BANG] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__string_lit] = STATE(80),
    [sym_raw_simple_string_lit] = STATE(80),
    [sym_simple_string_lit] = STATE(82),
    [sym_raw_multiline_string_lit] = STATE(80),
    [sym_multiline_string_lit] = STATE(80),
    [sym_builtin] = STATE(80),
    [sym_float_type] = STATE(80),
    [sym_uint_type] = STATE(80),
    [sym_int_type] = STATE(80),
    [sym_top_lit] = STATE(80),
    [sym__declaration] = STATE(166),
    [sym_list_lit] = STATE(80),
    [sym_struct_lit] = STATE(80),
    [sym_ellipsis] = STATE(166),
    [sym__embedding] = STATE(164),
    [sym__label_name] = STATE(283),
    [sym__label_expr] = STATE(307),
    [sym_label] = STATE(306),
    [sym_field] = STATE(166),
    [sym_for_clause] = STATE(242),
    [sym_guard_clause] = STATE(242),
    [sym_let_clause] = STATE(166),
    [sym_comprehension] = STATE(164),
    [sym__alias_expr] = STATE(183),
    [sym__expression] = STATE(146),
    [sym_binary_expression] = STATE(146),
    [sym_unary_expression] = STATE(146),
    [sym__primary_expression] = STATE(80),
    [sym__operand] = STATE(80),
    [sym_index_expression] = STATE(80),
    [sym_selector_expression] = STATE(80),
    [sym_call_expression] = STATE(80),
    [sym__literal] = STATE(80),
    [aux_sym_struct_lit_repeat1] = STATE(9),
    [aux_sym_field_repeat1] = STATE(24),
    [sym_identifier] = ACTIONS(126),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym__] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(23),
    [anon_sym_len] = ACTIONS(25),
    [anon_sym_close] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(25),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_div] = ACTIONS(25),
    [anon_sym_mod] = ACTIONS(25),
    [anon_sym_quo] = ACTIONS(25),
    [anon_sym_rem] = ACTIONS(25),
    [sym_number_type] = ACTIONS(128),
    [anon_sym_float] = ACTIONS(29),
    [anon_sym_float32] = ACTIONS(29),
    [anon_sym_float64] = ACTIONS(29),
    [anon_sym_uint] = ACTIONS(31),
    [anon_sym_uint8] = ACTIONS(31),
    [anon_sym_uint16] = ACTIONS(31),
    [anon_sym_uint32] = ACTIONS(31),
    [anon_sym_uint64] = ACTIONS(31),
    [anon_sym_uint128] = ACTIONS(31),
    [anon_sym_int] = ACTIONS(33),
    [anon_sym_int8] = ACTIONS(33),
    [anon_sym_int16] = ACTIONS(33),
    [anon_sym_int32] = ACTIONS(33),
    [anon_sym_int64] = ACTIONS(33),
    [anon_sym_int128] = ACTIONS(33),
    [sym_string_type] = ACTIONS(128),
    [sym_bool_type] = ACTIONS(128),
    [sym_bottom_lit] = ACTIONS(130),
    [sym_null_lit] = ACTIONS(128),
    [sym_bool_lit] = ACTIONS(128),
    [sym_int_lit] = ACTIONS(128),
    [sym_float_lit] = ACTIONS(128),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(132),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(134),
    [anon_sym_for] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [anon_sym_let] = ACTIONS(136),
    [anon_sym_BANG_EQ] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(140),
    [anon_sym_LT_EQ] = ACTIONS(138),
    [anon_sym_GT] = ACTIONS(140),
    [anon_sym_GT_EQ] = ACTIONS(138),
    [anon_sym_EQ_TILDE] = ACTIONS(138),
    [anon_sym_BANG_TILDE] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(138),
    [anon_sym_STAR] = ACTIONS(138),
    [anon_sym_BANG] = ACTIONS(140),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym__string_lit] = STATE(80),
    [sym_raw_simple_string_lit] = STATE(80),
    [sym_simple_string_lit] = STATE(82),
    [sym_raw_multiline_string_lit] = STATE(80),
    [sym_multiline_string_lit] = STATE(80),
    [sym_builtin] = STATE(80),
    [sym_float_type] = STATE(80),
    [sym_uint_type] = STATE(80),
    [sym_int_type] = STATE(80),
    [sym_top_lit] = STATE(80),
    [sym__declaration] = STATE(166),
    [sym_list_lit] = STATE(80),
    [sym_struct_lit] = STATE(80),
    [sym_ellipsis] = STATE(166),
    [sym__embedding] = STATE(164),
    [sym__label_name] = STATE(283),
    [sym__label_expr] = STATE(307),
    [sym_label] = STATE(306),
    [sym_field] = STATE(166),
    [sym_for_clause] = STATE(242),
    [sym_guard_clause] = STATE(242),
    [sym_let_clause] = STATE(166),
    [sym_comprehension] = STATE(164),
    [sym__alias_expr] = STATE(183),
    [sym__expression] = STATE(146),
    [sym_binary_expression] = STATE(146),
    [sym_unary_expression] = STATE(146),
    [sym__primary_expression] = STATE(80),
    [sym__operand] = STATE(80),
    [sym_index_expression] = STATE(80),
    [sym_selector_expression] = STATE(80),
    [sym_call_expression] = STATE(80),
    [sym__literal] = STATE(80),
    [aux_sym_struct_lit_repeat1] = STATE(10),
    [aux_sym_field_repeat1] = STATE(24),
    [sym_identifier] = ACTIONS(126),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym__] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(23),
    [anon_sym_len] = ACTIONS(25),
    [anon_sym_close] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(25),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_div] = ACTIONS(25),
    [anon_sym_mod] = ACTIONS(25),
    [anon_sym_quo] = ACTIONS(25),
    [anon_sym_rem] = ACTIONS(25),
    [sym_number_type] = ACTIONS(128),
    [anon_sym_float] = ACTIONS(29),
    [anon_sym_float32] = ACTIONS(29),
    [anon_sym_float64] = ACTIONS(29),
    [anon_sym_uint] = ACTIONS(31),
    [anon_sym_uint8] = ACTIONS(31),
    [anon_sym_uint16] = ACTIONS(31),
    [anon_sym_uint32] = ACTIONS(31),
    [anon_sym_uint64] = ACTIONS(31),
    [anon_sym_uint128] = ACTIONS(31),
    [anon_sym_int] = ACTIONS(33),
    [anon_sym_int8] = ACTIONS(33),
    [anon_sym_int16] = ACTIONS(33),
    [anon_sym_int32] = ACTIONS(33),
    [anon_sym_int64] = ACTIONS(33),
    [anon_sym_int128] = ACTIONS(33),
    [sym_string_type] = ACTIONS(128),
    [sym_bool_type] = ACTIONS(128),
    [sym_bottom_lit] = ACTIONS(130),
    [sym_null_lit] = ACTIONS(128),
    [sym_bool_lit] = ACTIONS(128),
    [sym_int_lit] = ACTIONS(128),
    [sym_float_lit] = ACTIONS(128),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(142),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(134),
    [anon_sym_for] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [anon_sym_let] = ACTIONS(136),
    [anon_sym_BANG_EQ] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(140),
    [anon_sym_LT_EQ] = ACTIONS(138),
    [anon_sym_GT] = ACTIONS(140),
    [anon_sym_GT_EQ] = ACTIONS(138),
    [anon_sym_EQ_TILDE] = ACTIONS(138),
    [anon_sym_BANG_TILDE] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(138),
    [anon_sym_STAR] = ACTIONS(138),
    [anon_sym_BANG] = ACTIONS(140),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym__string_lit] = STATE(80),
    [sym_raw_simple_string_lit] = STATE(80),
    [sym_simple_string_lit] = STATE(82),
    [sym_raw_multiline_string_lit] = STATE(80),
    [sym_multiline_string_lit] = STATE(80),
    [sym_builtin] = STATE(80),
    [sym_float_type] = STATE(80),
    [sym_uint_type] = STATE(80),
    [sym_int_type] = STATE(80),
    [sym_top_lit] = STATE(80),
    [sym__declaration] = STATE(166),
    [sym_list_lit] = STATE(80),
    [sym_struct_lit] = STATE(80),
    [sym_ellipsis] = STATE(166),
    [sym__embedding] = STATE(164),
    [sym__label_name] = STATE(283),
    [sym__label_expr] = STATE(307),
    [sym_label] = STATE(306),
    [sym_field] = STATE(166),
    [sym_for_clause] = STATE(242),
    [sym_guard_clause] = STATE(242),
    [sym_let_clause] = STATE(166),
    [sym_comprehension] = STATE(164),
    [sym__alias_expr] = STATE(183),
    [sym__expression] = STATE(146),
    [sym_binary_expression] = STATE(146),
    [sym_unary_expression] = STATE(146),
    [sym__primary_expression] = STATE(80),
    [sym__operand] = STATE(80),
    [sym_index_expression] = STATE(80),
    [sym_selector_expression] = STATE(80),
    [sym_call_expression] = STATE(80),
    [sym__literal] = STATE(80),
    [aux_sym_struct_lit_repeat1] = STATE(5),
    [aux_sym_field_repeat1] = STATE(24),
    [sym_identifier] = ACTIONS(126),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym__] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(23),
    [anon_sym_len] = ACTIONS(25),
    [anon_sym_close] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(25),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_div] = ACTIONS(25),
    [anon_sym_mod] = ACTIONS(25),
    [anon_sym_quo] = ACTIONS(25),
    [anon_sym_rem] = ACTIONS(25),
    [sym_number_type] = ACTIONS(128),
    [anon_sym_float] = ACTIONS(29),
    [anon_sym_float32] = ACTIONS(29),
    [anon_sym_float64] = ACTIONS(29),
    [anon_sym_uint] = ACTIONS(31),
    [anon_sym_uint8] = ACTIONS(31),
    [anon_sym_uint16] = ACTIONS(31),
    [anon_sym_uint32] = ACTIONS(31),
    [anon_sym_uint64] = ACTIONS(31),
    [anon_sym_uint128] = ACTIONS(31),
    [anon_sym_int] = ACTIONS(33),
    [anon_sym_int8] = ACTIONS(33),
    [anon_sym_int16] = ACTIONS(33),
    [anon_sym_int32] = ACTIONS(33),
    [anon_sym_int64] = ACTIONS(33),
    [anon_sym_int128] = ACTIONS(33),
    [sym_string_type] = ACTIONS(128),
    [sym_bool_type] = ACTIONS(128),
    [sym_bottom_lit] = ACTIONS(130),
    [sym_null_lit] = ACTIONS(128),
    [sym_bool_lit] = ACTIONS(128),
    [sym_int_lit] = ACTIONS(128),
    [sym_float_lit] = ACTIONS(128),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(144),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(134),
    [anon_sym_for] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [anon_sym_let] = ACTIONS(136),
    [anon_sym_BANG_EQ] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(140),
    [anon_sym_LT_EQ] = ACTIONS(138),
    [anon_sym_GT] = ACTIONS(140),
    [anon_sym_GT_EQ] = ACTIONS(138),
    [anon_sym_EQ_TILDE] = ACTIONS(138),
    [anon_sym_BANG_TILDE] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(138),
    [anon_sym_STAR] = ACTIONS(138),
    [anon_sym_BANG] = ACTIONS(140),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym__string_lit] = STATE(80),
    [sym_raw_simple_string_lit] = STATE(80),
    [sym_simple_string_lit] = STATE(82),
    [sym_raw_multiline_string_lit] = STATE(80),
    [sym_multiline_string_lit] = STATE(80),
    [sym_builtin] = STATE(80),
    [sym_float_type] = STATE(80),
    [sym_uint_type] = STATE(80),
    [sym_int_type] = STATE(80),
    [sym_top_lit] = STATE(80),
    [sym__declaration] = STATE(166),
    [sym_list_lit] = STATE(80),
    [sym_struct_lit] = STATE(80),
    [sym_ellipsis] = STATE(166),
    [sym__embedding] = STATE(164),
    [sym__label_name] = STATE(283),
    [sym__label_expr] = STATE(307),
    [sym_label] = STATE(306),
    [sym_field] = STATE(166),
    [sym_for_clause] = STATE(242),
    [sym_guard_clause] = STATE(242),
    [sym_let_clause] = STATE(166),
    [sym_comprehension] = STATE(164),
    [sym__alias_expr] = STATE(183),
    [sym__expression] = STATE(146),
    [sym_binary_expression] = STATE(146),
    [sym_unary_expression] = STATE(146),
    [sym__primary_expression] = STATE(80),
    [sym__operand] = STATE(80),
    [sym_index_expression] = STATE(80),
    [sym_selector_expression] = STATE(80),
    [sym_call_expression] = STATE(80),
    [sym__literal] = STATE(80),
    [aux_sym_struct_lit_repeat1] = STATE(10),
    [aux_sym_field_repeat1] = STATE(24),
    [sym_identifier] = ACTIONS(126),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym__] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(23),
    [anon_sym_len] = ACTIONS(25),
    [anon_sym_close] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(25),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_div] = ACTIONS(25),
    [anon_sym_mod] = ACTIONS(25),
    [anon_sym_quo] = ACTIONS(25),
    [anon_sym_rem] = ACTIONS(25),
    [sym_number_type] = ACTIONS(128),
    [anon_sym_float] = ACTIONS(29),
    [anon_sym_float32] = ACTIONS(29),
    [anon_sym_float64] = ACTIONS(29),
    [anon_sym_uint] = ACTIONS(31),
    [anon_sym_uint8] = ACTIONS(31),
    [anon_sym_uint16] = ACTIONS(31),
    [anon_sym_uint32] = ACTIONS(31),
    [anon_sym_uint64] = ACTIONS(31),
    [anon_sym_uint128] = ACTIONS(31),
    [anon_sym_int] = ACTIONS(33),
    [anon_sym_int8] = ACTIONS(33),
    [anon_sym_int16] = ACTIONS(33),
    [anon_sym_int32] = ACTIONS(33),
    [anon_sym_int64] = ACTIONS(33),
    [anon_sym_int128] = ACTIONS(33),
    [sym_string_type] = ACTIONS(128),
    [sym_bool_type] = ACTIONS(128),
    [sym_bottom_lit] = ACTIONS(130),
    [sym_null_lit] = ACTIONS(128),
    [sym_bool_lit] = ACTIONS(128),
    [sym_int_lit] = ACTIONS(128),
    [sym_float_lit] = ACTIONS(128),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(146),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(134),
    [anon_sym_for] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [anon_sym_let] = ACTIONS(136),
    [anon_sym_BANG_EQ] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(140),
    [anon_sym_LT_EQ] = ACTIONS(138),
    [anon_sym_GT] = ACTIONS(140),
    [anon_sym_GT_EQ] = ACTIONS(138),
    [anon_sym_EQ_TILDE] = ACTIONS(138),
    [anon_sym_BANG_TILDE] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(138),
    [anon_sym_STAR] = ACTIONS(138),
    [anon_sym_BANG] = ACTIONS(140),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym__string_lit] = STATE(80),
    [sym_raw_simple_string_lit] = STATE(80),
    [sym_simple_string_lit] = STATE(82),
    [sym_raw_multiline_string_lit] = STATE(80),
    [sym_multiline_string_lit] = STATE(80),
    [sym_builtin] = STATE(80),
    [sym_float_type] = STATE(80),
    [sym_uint_type] = STATE(80),
    [sym_int_type] = STATE(80),
    [sym_top_lit] = STATE(80),
    [sym__declaration] = STATE(166),
    [sym_list_lit] = STATE(80),
    [sym_struct_lit] = STATE(80),
    [sym_ellipsis] = STATE(166),
    [sym__embedding] = STATE(164),
    [sym__label_name] = STATE(283),
    [sym__label_expr] = STATE(307),
    [sym_label] = STATE(306),
    [sym_field] = STATE(166),
    [sym_for_clause] = STATE(242),
    [sym_guard_clause] = STATE(242),
    [sym_let_clause] = STATE(166),
    [sym_comprehension] = STATE(164),
    [sym__alias_expr] = STATE(183),
    [sym__expression] = STATE(146),
    [sym_binary_expression] = STATE(146),
    [sym_unary_expression] = STATE(146),
    [sym__primary_expression] = STATE(80),
    [sym__operand] = STATE(80),
    [sym_index_expression] = STATE(80),
    [sym_selector_expression] = STATE(80),
    [sym_call_expression] = STATE(80),
    [sym__literal] = STATE(80),
    [aux_sym_struct_lit_repeat1] = STATE(7),
    [aux_sym_field_repeat1] = STATE(24),
    [sym_identifier] = ACTIONS(126),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym__] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(23),
    [anon_sym_len] = ACTIONS(25),
    [anon_sym_close] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(25),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_div] = ACTIONS(25),
    [anon_sym_mod] = ACTIONS(25),
    [anon_sym_quo] = ACTIONS(25),
    [anon_sym_rem] = ACTIONS(25),
    [sym_number_type] = ACTIONS(128),
    [anon_sym_float] = ACTIONS(29),
    [anon_sym_float32] = ACTIONS(29),
    [anon_sym_float64] = ACTIONS(29),
    [anon_sym_uint] = ACTIONS(31),
    [anon_sym_uint8] = ACTIONS(31),
    [anon_sym_uint16] = ACTIONS(31),
    [anon_sym_uint32] = ACTIONS(31),
    [anon_sym_uint64] = ACTIONS(31),
    [anon_sym_uint128] = ACTIONS(31),
    [anon_sym_int] = ACTIONS(33),
    [anon_sym_int8] = ACTIONS(33),
    [anon_sym_int16] = ACTIONS(33),
    [anon_sym_int32] = ACTIONS(33),
    [anon_sym_int64] = ACTIONS(33),
    [anon_sym_int128] = ACTIONS(33),
    [sym_string_type] = ACTIONS(128),
    [sym_bool_type] = ACTIONS(128),
    [sym_bottom_lit] = ACTIONS(130),
    [sym_null_lit] = ACTIONS(128),
    [sym_bool_lit] = ACTIONS(128),
    [sym_int_lit] = ACTIONS(128),
    [sym_float_lit] = ACTIONS(128),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(148),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(134),
    [anon_sym_for] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [anon_sym_let] = ACTIONS(136),
    [anon_sym_BANG_EQ] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(140),
    [anon_sym_LT_EQ] = ACTIONS(138),
    [anon_sym_GT] = ACTIONS(140),
    [anon_sym_GT_EQ] = ACTIONS(138),
    [anon_sym_EQ_TILDE] = ACTIONS(138),
    [anon_sym_BANG_TILDE] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(138),
    [anon_sym_STAR] = ACTIONS(138),
    [anon_sym_BANG] = ACTIONS(140),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym__string_lit] = STATE(80),
    [sym_raw_simple_string_lit] = STATE(80),
    [sym_simple_string_lit] = STATE(82),
    [sym_raw_multiline_string_lit] = STATE(80),
    [sym_multiline_string_lit] = STATE(80),
    [sym_builtin] = STATE(80),
    [sym_float_type] = STATE(80),
    [sym_uint_type] = STATE(80),
    [sym_int_type] = STATE(80),
    [sym_top_lit] = STATE(80),
    [sym__declaration] = STATE(166),
    [sym_list_lit] = STATE(80),
    [sym_struct_lit] = STATE(80),
    [sym_ellipsis] = STATE(166),
    [sym__embedding] = STATE(164),
    [sym__label_name] = STATE(283),
    [sym__label_expr] = STATE(307),
    [sym_label] = STATE(306),
    [sym_field] = STATE(166),
    [sym_for_clause] = STATE(242),
    [sym_guard_clause] = STATE(242),
    [sym_let_clause] = STATE(166),
    [sym_comprehension] = STATE(164),
    [sym__alias_expr] = STATE(183),
    [sym__expression] = STATE(146),
    [sym_binary_expression] = STATE(146),
    [sym_unary_expression] = STATE(146),
    [sym__primary_expression] = STATE(80),
    [sym__operand] = STATE(80),
    [sym_index_expression] = STATE(80),
    [sym_selector_expression] = STATE(80),
    [sym_call_expression] = STATE(80),
    [sym__literal] = STATE(80),
    [aux_sym_struct_lit_repeat1] = STATE(10),
    [aux_sym_field_repeat1] = STATE(24),
    [sym_identifier] = ACTIONS(126),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym__] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(23),
    [anon_sym_len] = ACTIONS(25),
    [anon_sym_close] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(25),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_div] = ACTIONS(25),
    [anon_sym_mod] = ACTIONS(25),
    [anon_sym_quo] = ACTIONS(25),
    [anon_sym_rem] = ACTIONS(25),
    [sym_number_type] = ACTIONS(128),
    [anon_sym_float] = ACTIONS(29),
    [anon_sym_float32] = ACTIONS(29),
    [anon_sym_float64] = ACTIONS(29),
    [anon_sym_uint] = ACTIONS(31),
    [anon_sym_uint8] = ACTIONS(31),
    [anon_sym_uint16] = ACTIONS(31),
    [anon_sym_uint32] = ACTIONS(31),
    [anon_sym_uint64] = ACTIONS(31),
    [anon_sym_uint128] = ACTIONS(31),
    [anon_sym_int] = ACTIONS(33),
    [anon_sym_int8] = ACTIONS(33),
    [anon_sym_int16] = ACTIONS(33),
    [anon_sym_int32] = ACTIONS(33),
    [anon_sym_int64] = ACTIONS(33),
    [anon_sym_int128] = ACTIONS(33),
    [sym_string_type] = ACTIONS(128),
    [sym_bool_type] = ACTIONS(128),
    [sym_bottom_lit] = ACTIONS(130),
    [sym_null_lit] = ACTIONS(128),
    [sym_bool_lit] = ACTIONS(128),
    [sym_int_lit] = ACTIONS(128),
    [sym_float_lit] = ACTIONS(128),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(150),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(134),
    [anon_sym_for] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [anon_sym_let] = ACTIONS(136),
    [anon_sym_BANG_EQ] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(140),
    [anon_sym_LT_EQ] = ACTIONS(138),
    [anon_sym_GT] = ACTIONS(140),
    [anon_sym_GT_EQ] = ACTIONS(138),
    [anon_sym_EQ_TILDE] = ACTIONS(138),
    [anon_sym_BANG_TILDE] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(138),
    [anon_sym_STAR] = ACTIONS(138),
    [anon_sym_BANG] = ACTIONS(140),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym__string_lit] = STATE(80),
    [sym_raw_simple_string_lit] = STATE(80),
    [sym_simple_string_lit] = STATE(82),
    [sym_raw_multiline_string_lit] = STATE(80),
    [sym_multiline_string_lit] = STATE(80),
    [sym_builtin] = STATE(80),
    [sym_float_type] = STATE(80),
    [sym_uint_type] = STATE(80),
    [sym_int_type] = STATE(80),
    [sym_top_lit] = STATE(80),
    [sym__declaration] = STATE(166),
    [sym_list_lit] = STATE(80),
    [sym_struct_lit] = STATE(80),
    [sym_ellipsis] = STATE(166),
    [sym__embedding] = STATE(164),
    [sym__label_name] = STATE(283),
    [sym__label_expr] = STATE(307),
    [sym_label] = STATE(306),
    [sym_field] = STATE(166),
    [sym_for_clause] = STATE(242),
    [sym_guard_clause] = STATE(242),
    [sym_let_clause] = STATE(166),
    [sym_comprehension] = STATE(164),
    [sym__alias_expr] = STATE(183),
    [sym__expression] = STATE(146),
    [sym_binary_expression] = STATE(146),
    [sym_unary_expression] = STATE(146),
    [sym__primary_expression] = STATE(80),
    [sym__operand] = STATE(80),
    [sym_index_expression] = STATE(80),
    [sym_selector_expression] = STATE(80),
    [sym_call_expression] = STATE(80),
    [sym__literal] = STATE(80),
    [aux_sym_struct_lit_repeat1] = STATE(10),
    [aux_sym_field_repeat1] = STATE(24),
    [sym_identifier] = ACTIONS(152),
    [anon_sym_LPAREN] = ACTIONS(155),
    [anon_sym__] = ACTIONS(158),
    [anon_sym_POUND_DQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(164),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(167),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(170),
    [anon_sym_len] = ACTIONS(173),
    [anon_sym_close] = ACTIONS(173),
    [anon_sym_and] = ACTIONS(173),
    [anon_sym_or] = ACTIONS(173),
    [anon_sym_div] = ACTIONS(173),
    [anon_sym_mod] = ACTIONS(173),
    [anon_sym_quo] = ACTIONS(173),
    [anon_sym_rem] = ACTIONS(173),
    [sym_number_type] = ACTIONS(176),
    [anon_sym_float] = ACTIONS(179),
    [anon_sym_float32] = ACTIONS(179),
    [anon_sym_float64] = ACTIONS(179),
    [anon_sym_uint] = ACTIONS(182),
    [anon_sym_uint8] = ACTIONS(182),
    [anon_sym_uint16] = ACTIONS(182),
    [anon_sym_uint32] = ACTIONS(182),
    [anon_sym_uint64] = ACTIONS(182),
    [anon_sym_uint128] = ACTIONS(182),
    [anon_sym_int] = ACTIONS(185),
    [anon_sym_int8] = ACTIONS(185),
    [anon_sym_int16] = ACTIONS(185),
    [anon_sym_int32] = ACTIONS(185),
    [anon_sym_int64] = ACTIONS(185),
    [anon_sym_int128] = ACTIONS(185),
    [sym_string_type] = ACTIONS(176),
    [sym_bool_type] = ACTIONS(176),
    [sym_bottom_lit] = ACTIONS(188),
    [sym_null_lit] = ACTIONS(176),
    [sym_bool_lit] = ACTIONS(176),
    [sym_int_lit] = ACTIONS(176),
    [sym_float_lit] = ACTIONS(176),
    [anon_sym_LBRACK] = ACTIONS(191),
    [anon_sym_LBRACE] = ACTIONS(194),
    [anon_sym_RBRACE] = ACTIONS(197),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(199),
    [anon_sym_for] = ACTIONS(202),
    [anon_sym_if] = ACTIONS(205),
    [anon_sym_let] = ACTIONS(208),
    [anon_sym_BANG_EQ] = ACTIONS(211),
    [anon_sym_LT] = ACTIONS(214),
    [anon_sym_LT_EQ] = ACTIONS(211),
    [anon_sym_GT] = ACTIONS(214),
    [anon_sym_GT_EQ] = ACTIONS(211),
    [anon_sym_EQ_TILDE] = ACTIONS(211),
    [anon_sym_BANG_TILDE] = ACTIONS(211),
    [anon_sym_PLUS] = ACTIONS(211),
    [anon_sym_DASH] = ACTIONS(211),
    [anon_sym_STAR] = ACTIONS(211),
    [anon_sym_BANG] = ACTIONS(214),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym__string_lit] = STATE(80),
    [sym_raw_simple_string_lit] = STATE(80),
    [sym_simple_string_lit] = STATE(82),
    [sym_raw_multiline_string_lit] = STATE(80),
    [sym_multiline_string_lit] = STATE(80),
    [sym_builtin] = STATE(80),
    [sym_float_type] = STATE(80),
    [sym_uint_type] = STATE(80),
    [sym_int_type] = STATE(80),
    [sym_top_lit] = STATE(80),
    [sym__declaration] = STATE(166),
    [sym_list_lit] = STATE(80),
    [sym_struct_lit] = STATE(80),
    [sym_ellipsis] = STATE(166),
    [sym__embedding] = STATE(164),
    [sym__label_name] = STATE(283),
    [sym__label_expr] = STATE(307),
    [sym_label] = STATE(306),
    [sym_field] = STATE(166),
    [sym_for_clause] = STATE(242),
    [sym_guard_clause] = STATE(242),
    [sym_let_clause] = STATE(166),
    [sym_comprehension] = STATE(164),
    [sym__alias_expr] = STATE(183),
    [sym__expression] = STATE(146),
    [sym_binary_expression] = STATE(146),
    [sym_unary_expression] = STATE(146),
    [sym__primary_expression] = STATE(80),
    [sym__operand] = STATE(80),
    [sym_index_expression] = STATE(80),
    [sym_selector_expression] = STATE(80),
    [sym_call_expression] = STATE(80),
    [sym__literal] = STATE(80),
    [aux_sym_struct_lit_repeat1] = STATE(10),
    [aux_sym_field_repeat1] = STATE(24),
    [sym_identifier] = ACTIONS(126),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym__] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(23),
    [anon_sym_len] = ACTIONS(25),
    [anon_sym_close] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(25),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_div] = ACTIONS(25),
    [anon_sym_mod] = ACTIONS(25),
    [anon_sym_quo] = ACTIONS(25),
    [anon_sym_rem] = ACTIONS(25),
    [sym_number_type] = ACTIONS(128),
    [anon_sym_float] = ACTIONS(29),
    [anon_sym_float32] = ACTIONS(29),
    [anon_sym_float64] = ACTIONS(29),
    [anon_sym_uint] = ACTIONS(31),
    [anon_sym_uint8] = ACTIONS(31),
    [anon_sym_uint16] = ACTIONS(31),
    [anon_sym_uint32] = ACTIONS(31),
    [anon_sym_uint64] = ACTIONS(31),
    [anon_sym_uint128] = ACTIONS(31),
    [anon_sym_int] = ACTIONS(33),
    [anon_sym_int8] = ACTIONS(33),
    [anon_sym_int16] = ACTIONS(33),
    [anon_sym_int32] = ACTIONS(33),
    [anon_sym_int64] = ACTIONS(33),
    [anon_sym_int128] = ACTIONS(33),
    [sym_string_type] = ACTIONS(128),
    [sym_bool_type] = ACTIONS(128),
    [sym_bottom_lit] = ACTIONS(130),
    [sym_null_lit] = ACTIONS(128),
    [sym_bool_lit] = ACTIONS(128),
    [sym_int_lit] = ACTIONS(128),
    [sym_float_lit] = ACTIONS(128),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(217),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(134),
    [anon_sym_for] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [anon_sym_let] = ACTIONS(136),
    [anon_sym_BANG_EQ] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(140),
    [anon_sym_LT_EQ] = ACTIONS(138),
    [anon_sym_GT] = ACTIONS(140),
    [anon_sym_GT_EQ] = ACTIONS(138),
    [anon_sym_EQ_TILDE] = ACTIONS(138),
    [anon_sym_BANG_TILDE] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(138),
    [anon_sym_STAR] = ACTIONS(138),
    [anon_sym_BANG] = ACTIONS(140),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym__string_lit] = STATE(80),
    [sym_raw_simple_string_lit] = STATE(80),
    [sym_simple_string_lit] = STATE(82),
    [sym_raw_multiline_string_lit] = STATE(80),
    [sym_multiline_string_lit] = STATE(80),
    [sym_builtin] = STATE(80),
    [sym_float_type] = STATE(80),
    [sym_uint_type] = STATE(80),
    [sym_int_type] = STATE(80),
    [sym_top_lit] = STATE(80),
    [sym__declaration] = STATE(166),
    [sym_list_lit] = STATE(80),
    [sym_struct_lit] = STATE(80),
    [sym_ellipsis] = STATE(166),
    [sym__embedding] = STATE(164),
    [sym__label_name] = STATE(283),
    [sym__label_expr] = STATE(307),
    [sym_label] = STATE(306),
    [sym_field] = STATE(166),
    [sym_for_clause] = STATE(242),
    [sym_guard_clause] = STATE(242),
    [sym_let_clause] = STATE(166),
    [sym_comprehension] = STATE(164),
    [sym__alias_expr] = STATE(183),
    [sym__expression] = STATE(146),
    [sym_binary_expression] = STATE(146),
    [sym_unary_expression] = STATE(146),
    [sym__primary_expression] = STATE(80),
    [sym__operand] = STATE(80),
    [sym_index_expression] = STATE(80),
    [sym_selector_expression] = STATE(80),
    [sym_call_expression] = STATE(80),
    [sym__literal] = STATE(80),
    [aux_sym_struct_lit_repeat1] = STATE(11),
    [aux_sym_field_repeat1] = STATE(24),
    [sym_identifier] = ACTIONS(126),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym__] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(23),
    [anon_sym_len] = ACTIONS(25),
    [anon_sym_close] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(25),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_div] = ACTIONS(25),
    [anon_sym_mod] = ACTIONS(25),
    [anon_sym_quo] = ACTIONS(25),
    [anon_sym_rem] = ACTIONS(25),
    [sym_number_type] = ACTIONS(128),
    [anon_sym_float] = ACTIONS(29),
    [anon_sym_float32] = ACTIONS(29),
    [anon_sym_float64] = ACTIONS(29),
    [anon_sym_uint] = ACTIONS(31),
    [anon_sym_uint8] = ACTIONS(31),
    [anon_sym_uint16] = ACTIONS(31),
    [anon_sym_uint32] = ACTIONS(31),
    [anon_sym_uint64] = ACTIONS(31),
    [anon_sym_uint128] = ACTIONS(31),
    [anon_sym_int] = ACTIONS(33),
    [anon_sym_int8] = ACTIONS(33),
    [anon_sym_int16] = ACTIONS(33),
    [anon_sym_int32] = ACTIONS(33),
    [anon_sym_int64] = ACTIONS(33),
    [anon_sym_int128] = ACTIONS(33),
    [sym_string_type] = ACTIONS(128),
    [sym_bool_type] = ACTIONS(128),
    [sym_bottom_lit] = ACTIONS(130),
    [sym_null_lit] = ACTIONS(128),
    [sym_bool_lit] = ACTIONS(128),
    [sym_int_lit] = ACTIONS(128),
    [sym_float_lit] = ACTIONS(128),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(219),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(134),
    [anon_sym_for] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [anon_sym_let] = ACTIONS(136),
    [anon_sym_BANG_EQ] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(140),
    [anon_sym_LT_EQ] = ACTIONS(138),
    [anon_sym_GT] = ACTIONS(140),
    [anon_sym_GT_EQ] = ACTIONS(138),
    [anon_sym_EQ_TILDE] = ACTIONS(138),
    [anon_sym_BANG_TILDE] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(138),
    [anon_sym_STAR] = ACTIONS(138),
    [anon_sym_BANG] = ACTIONS(140),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [sym__string_lit] = STATE(87),
    [sym_raw_simple_string_lit] = STATE(87),
    [sym_simple_string_lit] = STATE(87),
    [sym_raw_multiline_string_lit] = STATE(87),
    [sym_multiline_string_lit] = STATE(87),
    [sym_builtin] = STATE(87),
    [sym_float_type] = STATE(87),
    [sym_uint_type] = STATE(87),
    [sym_int_type] = STATE(87),
    [sym_top_lit] = STATE(87),
    [sym__list_elem] = STATE(198),
    [sym_list_lit] = STATE(87),
    [sym_struct_lit] = STATE(87),
    [sym_ellipsis] = STATE(198),
    [sym__embedding] = STATE(184),
    [sym_for_clause] = STATE(238),
    [sym_guard_clause] = STATE(238),
    [sym_comprehension] = STATE(184),
    [sym__alias_expr] = STATE(190),
    [sym__expression] = STATE(156),
    [sym_binary_expression] = STATE(156),
    [sym_unary_expression] = STATE(156),
    [sym__primary_expression] = STATE(87),
    [sym__operand] = STATE(87),
    [sym_index_expression] = STATE(87),
    [sym_selector_expression] = STATE(87),
    [sym_call_expression] = STATE(87),
    [sym__literal] = STATE(87),
    [aux_sym_list_lit_repeat1] = STATE(18),
    [sym_identifier] = ACTIONS(221),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym__] = ACTIONS(225),
    [anon_sym_POUND_DQUOTE] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(231),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(233),
    [anon_sym_len] = ACTIONS(235),
    [anon_sym_close] = ACTIONS(235),
    [anon_sym_and] = ACTIONS(235),
    [anon_sym_or] = ACTIONS(235),
    [anon_sym_div] = ACTIONS(235),
    [anon_sym_mod] = ACTIONS(235),
    [anon_sym_quo] = ACTIONS(235),
    [anon_sym_rem] = ACTIONS(235),
    [sym_number_type] = ACTIONS(237),
    [anon_sym_float] = ACTIONS(239),
    [anon_sym_float32] = ACTIONS(239),
    [anon_sym_float64] = ACTIONS(239),
    [anon_sym_uint] = ACTIONS(241),
    [anon_sym_uint8] = ACTIONS(241),
    [anon_sym_uint16] = ACTIONS(241),
    [anon_sym_uint32] = ACTIONS(241),
    [anon_sym_uint64] = ACTIONS(241),
    [anon_sym_uint128] = ACTIONS(241),
    [anon_sym_int] = ACTIONS(243),
    [anon_sym_int8] = ACTIONS(243),
    [anon_sym_int16] = ACTIONS(243),
    [anon_sym_int32] = ACTIONS(243),
    [anon_sym_int64] = ACTIONS(243),
    [anon_sym_int128] = ACTIONS(243),
    [sym_string_type] = ACTIONS(237),
    [sym_bool_type] = ACTIONS(237),
    [sym_bottom_lit] = ACTIONS(245),
    [sym_null_lit] = ACTIONS(237),
    [sym_bool_lit] = ACTIONS(237),
    [sym_int_lit] = ACTIONS(237),
    [sym_float_lit] = ACTIONS(237),
    [anon_sym_LBRACK] = ACTIONS(247),
    [anon_sym_RBRACK] = ACTIONS(249),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(253),
    [anon_sym_for] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [anon_sym_BANG_EQ] = ACTIONS(255),
    [anon_sym_LT] = ACTIONS(257),
    [anon_sym_LT_EQ] = ACTIONS(255),
    [anon_sym_GT] = ACTIONS(257),
    [anon_sym_GT_EQ] = ACTIONS(255),
    [anon_sym_EQ_TILDE] = ACTIONS(255),
    [anon_sym_BANG_TILDE] = ACTIONS(255),
    [anon_sym_PLUS] = ACTIONS(255),
    [anon_sym_DASH] = ACTIONS(255),
    [anon_sym_STAR] = ACTIONS(255),
    [anon_sym_BANG] = ACTIONS(257),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [sym__string_lit] = STATE(87),
    [sym_raw_simple_string_lit] = STATE(87),
    [sym_simple_string_lit] = STATE(87),
    [sym_raw_multiline_string_lit] = STATE(87),
    [sym_multiline_string_lit] = STATE(87),
    [sym_builtin] = STATE(87),
    [sym_float_type] = STATE(87),
    [sym_uint_type] = STATE(87),
    [sym_int_type] = STATE(87),
    [sym_top_lit] = STATE(87),
    [sym__list_elem] = STATE(198),
    [sym_list_lit] = STATE(87),
    [sym_struct_lit] = STATE(87),
    [sym_ellipsis] = STATE(198),
    [sym__embedding] = STATE(184),
    [sym_for_clause] = STATE(238),
    [sym_guard_clause] = STATE(238),
    [sym_comprehension] = STATE(184),
    [sym__alias_expr] = STATE(187),
    [sym__expression] = STATE(156),
    [sym_binary_expression] = STATE(156),
    [sym_unary_expression] = STATE(156),
    [sym__primary_expression] = STATE(87),
    [sym__operand] = STATE(87),
    [sym_index_expression] = STATE(87),
    [sym_selector_expression] = STATE(87),
    [sym_call_expression] = STATE(87),
    [sym__literal] = STATE(87),
    [aux_sym_list_lit_repeat1] = STATE(15),
    [sym_identifier] = ACTIONS(221),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym__] = ACTIONS(225),
    [anon_sym_POUND_DQUOTE] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(231),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(233),
    [anon_sym_len] = ACTIONS(235),
    [anon_sym_close] = ACTIONS(235),
    [anon_sym_and] = ACTIONS(235),
    [anon_sym_or] = ACTIONS(235),
    [anon_sym_div] = ACTIONS(235),
    [anon_sym_mod] = ACTIONS(235),
    [anon_sym_quo] = ACTIONS(235),
    [anon_sym_rem] = ACTIONS(235),
    [sym_number_type] = ACTIONS(237),
    [anon_sym_float] = ACTIONS(239),
    [anon_sym_float32] = ACTIONS(239),
    [anon_sym_float64] = ACTIONS(239),
    [anon_sym_uint] = ACTIONS(241),
    [anon_sym_uint8] = ACTIONS(241),
    [anon_sym_uint16] = ACTIONS(241),
    [anon_sym_uint32] = ACTIONS(241),
    [anon_sym_uint64] = ACTIONS(241),
    [anon_sym_uint128] = ACTIONS(241),
    [anon_sym_int] = ACTIONS(243),
    [anon_sym_int8] = ACTIONS(243),
    [anon_sym_int16] = ACTIONS(243),
    [anon_sym_int32] = ACTIONS(243),
    [anon_sym_int64] = ACTIONS(243),
    [anon_sym_int128] = ACTIONS(243),
    [sym_string_type] = ACTIONS(237),
    [sym_bool_type] = ACTIONS(237),
    [sym_bottom_lit] = ACTIONS(245),
    [sym_null_lit] = ACTIONS(237),
    [sym_bool_lit] = ACTIONS(237),
    [sym_int_lit] = ACTIONS(237),
    [sym_float_lit] = ACTIONS(237),
    [anon_sym_LBRACK] = ACTIONS(247),
    [anon_sym_RBRACK] = ACTIONS(259),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(253),
    [anon_sym_for] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [anon_sym_BANG_EQ] = ACTIONS(255),
    [anon_sym_LT] = ACTIONS(257),
    [anon_sym_LT_EQ] = ACTIONS(255),
    [anon_sym_GT] = ACTIONS(257),
    [anon_sym_GT_EQ] = ACTIONS(255),
    [anon_sym_EQ_TILDE] = ACTIONS(255),
    [anon_sym_BANG_TILDE] = ACTIONS(255),
    [anon_sym_PLUS] = ACTIONS(255),
    [anon_sym_DASH] = ACTIONS(255),
    [anon_sym_STAR] = ACTIONS(255),
    [anon_sym_BANG] = ACTIONS(257),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [sym__string_lit] = STATE(87),
    [sym_raw_simple_string_lit] = STATE(87),
    [sym_simple_string_lit] = STATE(87),
    [sym_raw_multiline_string_lit] = STATE(87),
    [sym_multiline_string_lit] = STATE(87),
    [sym_builtin] = STATE(87),
    [sym_float_type] = STATE(87),
    [sym_uint_type] = STATE(87),
    [sym_int_type] = STATE(87),
    [sym_top_lit] = STATE(87),
    [sym__list_elem] = STATE(198),
    [sym_list_lit] = STATE(87),
    [sym_struct_lit] = STATE(87),
    [sym_ellipsis] = STATE(198),
    [sym__embedding] = STATE(184),
    [sym_for_clause] = STATE(238),
    [sym_guard_clause] = STATE(238),
    [sym_comprehension] = STATE(184),
    [sym__alias_expr] = STATE(190),
    [sym__expression] = STATE(156),
    [sym_binary_expression] = STATE(156),
    [sym_unary_expression] = STATE(156),
    [sym__primary_expression] = STATE(87),
    [sym__operand] = STATE(87),
    [sym_index_expression] = STATE(87),
    [sym_selector_expression] = STATE(87),
    [sym_call_expression] = STATE(87),
    [sym__literal] = STATE(87),
    [aux_sym_list_lit_repeat1] = STATE(18),
    [sym_identifier] = ACTIONS(221),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym__] = ACTIONS(225),
    [anon_sym_POUND_DQUOTE] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(231),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(233),
    [anon_sym_len] = ACTIONS(235),
    [anon_sym_close] = ACTIONS(235),
    [anon_sym_and] = ACTIONS(235),
    [anon_sym_or] = ACTIONS(235),
    [anon_sym_div] = ACTIONS(235),
    [anon_sym_mod] = ACTIONS(235),
    [anon_sym_quo] = ACTIONS(235),
    [anon_sym_rem] = ACTIONS(235),
    [sym_number_type] = ACTIONS(237),
    [anon_sym_float] = ACTIONS(239),
    [anon_sym_float32] = ACTIONS(239),
    [anon_sym_float64] = ACTIONS(239),
    [anon_sym_uint] = ACTIONS(241),
    [anon_sym_uint8] = ACTIONS(241),
    [anon_sym_uint16] = ACTIONS(241),
    [anon_sym_uint32] = ACTIONS(241),
    [anon_sym_uint64] = ACTIONS(241),
    [anon_sym_uint128] = ACTIONS(241),
    [anon_sym_int] = ACTIONS(243),
    [anon_sym_int8] = ACTIONS(243),
    [anon_sym_int16] = ACTIONS(243),
    [anon_sym_int32] = ACTIONS(243),
    [anon_sym_int64] = ACTIONS(243),
    [anon_sym_int128] = ACTIONS(243),
    [sym_string_type] = ACTIONS(237),
    [sym_bool_type] = ACTIONS(237),
    [sym_bottom_lit] = ACTIONS(245),
    [sym_null_lit] = ACTIONS(237),
    [sym_bool_lit] = ACTIONS(237),
    [sym_int_lit] = ACTIONS(237),
    [sym_float_lit] = ACTIONS(237),
    [anon_sym_LBRACK] = ACTIONS(247),
    [anon_sym_RBRACK] = ACTIONS(261),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(253),
    [anon_sym_for] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [anon_sym_BANG_EQ] = ACTIONS(255),
    [anon_sym_LT] = ACTIONS(257),
    [anon_sym_LT_EQ] = ACTIONS(255),
    [anon_sym_GT] = ACTIONS(257),
    [anon_sym_GT_EQ] = ACTIONS(255),
    [anon_sym_EQ_TILDE] = ACTIONS(255),
    [anon_sym_BANG_TILDE] = ACTIONS(255),
    [anon_sym_PLUS] = ACTIONS(255),
    [anon_sym_DASH] = ACTIONS(255),
    [anon_sym_STAR] = ACTIONS(255),
    [anon_sym_BANG] = ACTIONS(257),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [sym__string_lit] = STATE(87),
    [sym_raw_simple_string_lit] = STATE(87),
    [sym_simple_string_lit] = STATE(87),
    [sym_raw_multiline_string_lit] = STATE(87),
    [sym_multiline_string_lit] = STATE(87),
    [sym_builtin] = STATE(87),
    [sym_float_type] = STATE(87),
    [sym_uint_type] = STATE(87),
    [sym_int_type] = STATE(87),
    [sym_top_lit] = STATE(87),
    [sym__list_elem] = STATE(198),
    [sym_list_lit] = STATE(87),
    [sym_struct_lit] = STATE(87),
    [sym_ellipsis] = STATE(198),
    [sym__embedding] = STATE(184),
    [sym_for_clause] = STATE(238),
    [sym_guard_clause] = STATE(238),
    [sym_comprehension] = STATE(184),
    [sym__alias_expr] = STATE(190),
    [sym__expression] = STATE(156),
    [sym_binary_expression] = STATE(156),
    [sym_unary_expression] = STATE(156),
    [sym__primary_expression] = STATE(87),
    [sym__operand] = STATE(87),
    [sym_index_expression] = STATE(87),
    [sym_selector_expression] = STATE(87),
    [sym_call_expression] = STATE(87),
    [sym__literal] = STATE(87),
    [aux_sym_list_lit_repeat1] = STATE(15),
    [sym_identifier] = ACTIONS(221),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym__] = ACTIONS(225),
    [anon_sym_POUND_DQUOTE] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(231),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(233),
    [anon_sym_len] = ACTIONS(235),
    [anon_sym_close] = ACTIONS(235),
    [anon_sym_and] = ACTIONS(235),
    [anon_sym_or] = ACTIONS(235),
    [anon_sym_div] = ACTIONS(235),
    [anon_sym_mod] = ACTIONS(235),
    [anon_sym_quo] = ACTIONS(235),
    [anon_sym_rem] = ACTIONS(235),
    [sym_number_type] = ACTIONS(237),
    [anon_sym_float] = ACTIONS(239),
    [anon_sym_float32] = ACTIONS(239),
    [anon_sym_float64] = ACTIONS(239),
    [anon_sym_uint] = ACTIONS(241),
    [anon_sym_uint8] = ACTIONS(241),
    [anon_sym_uint16] = ACTIONS(241),
    [anon_sym_uint32] = ACTIONS(241),
    [anon_sym_uint64] = ACTIONS(241),
    [anon_sym_uint128] = ACTIONS(241),
    [anon_sym_int] = ACTIONS(243),
    [anon_sym_int8] = ACTIONS(243),
    [anon_sym_int16] = ACTIONS(243),
    [anon_sym_int32] = ACTIONS(243),
    [anon_sym_int64] = ACTIONS(243),
    [anon_sym_int128] = ACTIONS(243),
    [sym_string_type] = ACTIONS(237),
    [sym_bool_type] = ACTIONS(237),
    [sym_bottom_lit] = ACTIONS(245),
    [sym_null_lit] = ACTIONS(237),
    [sym_bool_lit] = ACTIONS(237),
    [sym_int_lit] = ACTIONS(237),
    [sym_float_lit] = ACTIONS(237),
    [anon_sym_LBRACK] = ACTIONS(247),
    [anon_sym_RBRACK] = ACTIONS(259),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(253),
    [anon_sym_for] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [anon_sym_BANG_EQ] = ACTIONS(255),
    [anon_sym_LT] = ACTIONS(257),
    [anon_sym_LT_EQ] = ACTIONS(255),
    [anon_sym_GT] = ACTIONS(257),
    [anon_sym_GT_EQ] = ACTIONS(255),
    [anon_sym_EQ_TILDE] = ACTIONS(255),
    [anon_sym_BANG_TILDE] = ACTIONS(255),
    [anon_sym_PLUS] = ACTIONS(255),
    [anon_sym_DASH] = ACTIONS(255),
    [anon_sym_STAR] = ACTIONS(255),
    [anon_sym_BANG] = ACTIONS(257),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [sym__string_lit] = STATE(87),
    [sym_raw_simple_string_lit] = STATE(87),
    [sym_simple_string_lit] = STATE(87),
    [sym_raw_multiline_string_lit] = STATE(87),
    [sym_multiline_string_lit] = STATE(87),
    [sym_builtin] = STATE(87),
    [sym_float_type] = STATE(87),
    [sym_uint_type] = STATE(87),
    [sym_int_type] = STATE(87),
    [sym_top_lit] = STATE(87),
    [sym__list_elem] = STATE(198),
    [sym_list_lit] = STATE(87),
    [sym_struct_lit] = STATE(87),
    [sym_ellipsis] = STATE(198),
    [sym__embedding] = STATE(184),
    [sym_for_clause] = STATE(238),
    [sym_guard_clause] = STATE(238),
    [sym_comprehension] = STATE(184),
    [sym__alias_expr] = STATE(190),
    [sym__expression] = STATE(156),
    [sym_binary_expression] = STATE(156),
    [sym_unary_expression] = STATE(156),
    [sym__primary_expression] = STATE(87),
    [sym__operand] = STATE(87),
    [sym_index_expression] = STATE(87),
    [sym_selector_expression] = STATE(87),
    [sym_call_expression] = STATE(87),
    [sym__literal] = STATE(87),
    [aux_sym_list_lit_repeat1] = STATE(13),
    [sym_identifier] = ACTIONS(221),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym__] = ACTIONS(225),
    [anon_sym_POUND_DQUOTE] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(231),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(233),
    [anon_sym_len] = ACTIONS(235),
    [anon_sym_close] = ACTIONS(235),
    [anon_sym_and] = ACTIONS(235),
    [anon_sym_or] = ACTIONS(235),
    [anon_sym_div] = ACTIONS(235),
    [anon_sym_mod] = ACTIONS(235),
    [anon_sym_quo] = ACTIONS(235),
    [anon_sym_rem] = ACTIONS(235),
    [sym_number_type] = ACTIONS(237),
    [anon_sym_float] = ACTIONS(239),
    [anon_sym_float32] = ACTIONS(239),
    [anon_sym_float64] = ACTIONS(239),
    [anon_sym_uint] = ACTIONS(241),
    [anon_sym_uint8] = ACTIONS(241),
    [anon_sym_uint16] = ACTIONS(241),
    [anon_sym_uint32] = ACTIONS(241),
    [anon_sym_uint64] = ACTIONS(241),
    [anon_sym_uint128] = ACTIONS(241),
    [anon_sym_int] = ACTIONS(243),
    [anon_sym_int8] = ACTIONS(243),
    [anon_sym_int16] = ACTIONS(243),
    [anon_sym_int32] = ACTIONS(243),
    [anon_sym_int64] = ACTIONS(243),
    [anon_sym_int128] = ACTIONS(243),
    [sym_string_type] = ACTIONS(237),
    [sym_bool_type] = ACTIONS(237),
    [sym_bottom_lit] = ACTIONS(245),
    [sym_null_lit] = ACTIONS(237),
    [sym_bool_lit] = ACTIONS(237),
    [sym_int_lit] = ACTIONS(237),
    [sym_float_lit] = ACTIONS(237),
    [anon_sym_LBRACK] = ACTIONS(247),
    [anon_sym_RBRACK] = ACTIONS(263),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(253),
    [anon_sym_for] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [anon_sym_BANG_EQ] = ACTIONS(255),
    [anon_sym_LT] = ACTIONS(257),
    [anon_sym_LT_EQ] = ACTIONS(255),
    [anon_sym_GT] = ACTIONS(257),
    [anon_sym_GT_EQ] = ACTIONS(255),
    [anon_sym_EQ_TILDE] = ACTIONS(255),
    [anon_sym_BANG_TILDE] = ACTIONS(255),
    [anon_sym_PLUS] = ACTIONS(255),
    [anon_sym_DASH] = ACTIONS(255),
    [anon_sym_STAR] = ACTIONS(255),
    [anon_sym_BANG] = ACTIONS(257),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [sym__string_lit] = STATE(87),
    [sym_raw_simple_string_lit] = STATE(87),
    [sym_simple_string_lit] = STATE(87),
    [sym_raw_multiline_string_lit] = STATE(87),
    [sym_multiline_string_lit] = STATE(87),
    [sym_builtin] = STATE(87),
    [sym_float_type] = STATE(87),
    [sym_uint_type] = STATE(87),
    [sym_int_type] = STATE(87),
    [sym_top_lit] = STATE(87),
    [sym__list_elem] = STATE(198),
    [sym_list_lit] = STATE(87),
    [sym_struct_lit] = STATE(87),
    [sym_ellipsis] = STATE(198),
    [sym__embedding] = STATE(184),
    [sym_for_clause] = STATE(238),
    [sym_guard_clause] = STATE(238),
    [sym_comprehension] = STATE(184),
    [sym__alias_expr] = STATE(190),
    [sym__expression] = STATE(156),
    [sym_binary_expression] = STATE(156),
    [sym_unary_expression] = STATE(156),
    [sym__primary_expression] = STATE(87),
    [sym__operand] = STATE(87),
    [sym_index_expression] = STATE(87),
    [sym_selector_expression] = STATE(87),
    [sym_call_expression] = STATE(87),
    [sym__literal] = STATE(87),
    [aux_sym_list_lit_repeat1] = STATE(18),
    [sym_identifier] = ACTIONS(265),
    [anon_sym_LPAREN] = ACTIONS(268),
    [anon_sym__] = ACTIONS(271),
    [anon_sym_POUND_DQUOTE] = ACTIONS(274),
    [anon_sym_DQUOTE] = ACTIONS(277),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(280),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(283),
    [anon_sym_len] = ACTIONS(286),
    [anon_sym_close] = ACTIONS(286),
    [anon_sym_and] = ACTIONS(286),
    [anon_sym_or] = ACTIONS(286),
    [anon_sym_div] = ACTIONS(286),
    [anon_sym_mod] = ACTIONS(286),
    [anon_sym_quo] = ACTIONS(286),
    [anon_sym_rem] = ACTIONS(286),
    [sym_number_type] = ACTIONS(289),
    [anon_sym_float] = ACTIONS(292),
    [anon_sym_float32] = ACTIONS(292),
    [anon_sym_float64] = ACTIONS(292),
    [anon_sym_uint] = ACTIONS(295),
    [anon_sym_uint8] = ACTIONS(295),
    [anon_sym_uint16] = ACTIONS(295),
    [anon_sym_uint32] = ACTIONS(295),
    [anon_sym_uint64] = ACTIONS(295),
    [anon_sym_uint128] = ACTIONS(295),
    [anon_sym_int] = ACTIONS(298),
    [anon_sym_int8] = ACTIONS(298),
    [anon_sym_int16] = ACTIONS(298),
    [anon_sym_int32] = ACTIONS(298),
    [anon_sym_int64] = ACTIONS(298),
    [anon_sym_int128] = ACTIONS(298),
    [sym_string_type] = ACTIONS(289),
    [sym_bool_type] = ACTIONS(289),
    [sym_bottom_lit] = ACTIONS(301),
    [sym_null_lit] = ACTIONS(289),
    [sym_bool_lit] = ACTIONS(289),
    [sym_int_lit] = ACTIONS(289),
    [sym_float_lit] = ACTIONS(289),
    [anon_sym_LBRACK] = ACTIONS(304),
    [anon_sym_RBRACK] = ACTIONS(307),
    [anon_sym_LBRACE] = ACTIONS(309),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(312),
    [anon_sym_for] = ACTIONS(315),
    [anon_sym_if] = ACTIONS(318),
    [anon_sym_BANG_EQ] = ACTIONS(321),
    [anon_sym_LT] = ACTIONS(324),
    [anon_sym_LT_EQ] = ACTIONS(321),
    [anon_sym_GT] = ACTIONS(324),
    [anon_sym_GT_EQ] = ACTIONS(321),
    [anon_sym_EQ_TILDE] = ACTIONS(321),
    [anon_sym_BANG_TILDE] = ACTIONS(321),
    [anon_sym_PLUS] = ACTIONS(321),
    [anon_sym_DASH] = ACTIONS(321),
    [anon_sym_STAR] = ACTIONS(321),
    [anon_sym_BANG] = ACTIONS(324),
    [sym_comment] = ACTIONS(3),
  },
  [19] = {
    [sym__string_lit] = STATE(87),
    [sym_raw_simple_string_lit] = STATE(87),
    [sym_simple_string_lit] = STATE(87),
    [sym_raw_multiline_string_lit] = STATE(87),
    [sym_multiline_string_lit] = STATE(87),
    [sym_builtin] = STATE(87),
    [sym_float_type] = STATE(87),
    [sym_uint_type] = STATE(87),
    [sym_int_type] = STATE(87),
    [sym_top_lit] = STATE(87),
    [sym_list_lit] = STATE(87),
    [sym_struct_lit] = STATE(87),
    [sym_ellipsis] = STATE(199),
    [sym__embedding] = STATE(196),
    [sym_for_clause] = STATE(238),
    [sym_guard_clause] = STATE(238),
    [sym_comprehension] = STATE(196),
    [sym__alias_expr] = STATE(190),
    [sym__expression] = STATE(156),
    [sym_binary_expression] = STATE(156),
    [sym_unary_expression] = STATE(156),
    [sym__primary_expression] = STATE(87),
    [sym__operand] = STATE(87),
    [sym_index_expression] = STATE(87),
    [sym_selector_expression] = STATE(87),
    [sym_call_expression] = STATE(87),
    [sym__literal] = STATE(87),
    [sym_identifier] = ACTIONS(221),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym__] = ACTIONS(225),
    [anon_sym_POUND_DQUOTE] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(231),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(233),
    [anon_sym_len] = ACTIONS(235),
    [anon_sym_close] = ACTIONS(235),
    [anon_sym_and] = ACTIONS(235),
    [anon_sym_or] = ACTIONS(235),
    [anon_sym_div] = ACTIONS(235),
    [anon_sym_mod] = ACTIONS(235),
    [anon_sym_quo] = ACTIONS(235),
    [anon_sym_rem] = ACTIONS(235),
    [sym_number_type] = ACTIONS(237),
    [anon_sym_float] = ACTIONS(239),
    [anon_sym_float32] = ACTIONS(239),
    [anon_sym_float64] = ACTIONS(239),
    [anon_sym_uint] = ACTIONS(241),
    [anon_sym_uint8] = ACTIONS(241),
    [anon_sym_uint16] = ACTIONS(241),
    [anon_sym_uint32] = ACTIONS(241),
    [anon_sym_uint64] = ACTIONS(241),
    [anon_sym_uint128] = ACTIONS(241),
    [anon_sym_int] = ACTIONS(243),
    [anon_sym_int8] = ACTIONS(243),
    [anon_sym_int16] = ACTIONS(243),
    [anon_sym_int32] = ACTIONS(243),
    [anon_sym_int64] = ACTIONS(243),
    [anon_sym_int128] = ACTIONS(243),
    [sym_string_type] = ACTIONS(237),
    [sym_bool_type] = ACTIONS(237),
    [sym_bottom_lit] = ACTIONS(245),
    [sym_null_lit] = ACTIONS(237),
    [sym_bool_lit] = ACTIONS(237),
    [sym_int_lit] = ACTIONS(237),
    [sym_float_lit] = ACTIONS(237),
    [anon_sym_LBRACK] = ACTIONS(247),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(253),
    [anon_sym_for] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [anon_sym_BANG_EQ] = ACTIONS(255),
    [anon_sym_LT] = ACTIONS(257),
    [anon_sym_LT_EQ] = ACTIONS(255),
    [anon_sym_GT] = ACTIONS(257),
    [anon_sym_GT_EQ] = ACTIONS(255),
    [anon_sym_EQ_TILDE] = ACTIONS(255),
    [anon_sym_BANG_TILDE] = ACTIONS(255),
    [anon_sym_PLUS] = ACTIONS(255),
    [anon_sym_DASH] = ACTIONS(255),
    [anon_sym_STAR] = ACTIONS(255),
    [anon_sym_BANG] = ACTIONS(257),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [sym__string_lit] = STATE(87),
    [sym_raw_simple_string_lit] = STATE(87),
    [sym_simple_string_lit] = STATE(87),
    [sym_raw_multiline_string_lit] = STATE(87),
    [sym_multiline_string_lit] = STATE(87),
    [sym_builtin] = STATE(87),
    [sym_float_type] = STATE(87),
    [sym_uint_type] = STATE(87),
    [sym_int_type] = STATE(87),
    [sym_top_lit] = STATE(87),
    [sym_list_lit] = STATE(87),
    [sym_struct_lit] = STATE(87),
    [sym_ellipsis] = STATE(197),
    [sym__embedding] = STATE(196),
    [sym_for_clause] = STATE(238),
    [sym_guard_clause] = STATE(238),
    [sym_comprehension] = STATE(196),
    [sym__alias_expr] = STATE(190),
    [sym__expression] = STATE(156),
    [sym_binary_expression] = STATE(156),
    [sym_unary_expression] = STATE(156),
    [sym__primary_expression] = STATE(87),
    [sym__operand] = STATE(87),
    [sym_index_expression] = STATE(87),
    [sym_selector_expression] = STATE(87),
    [sym_call_expression] = STATE(87),
    [sym__literal] = STATE(87),
    [sym_identifier] = ACTIONS(221),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym__] = ACTIONS(225),
    [anon_sym_POUND_DQUOTE] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(231),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(233),
    [anon_sym_len] = ACTIONS(235),
    [anon_sym_close] = ACTIONS(235),
    [anon_sym_and] = ACTIONS(235),
    [anon_sym_or] = ACTIONS(235),
    [anon_sym_div] = ACTIONS(235),
    [anon_sym_mod] = ACTIONS(235),
    [anon_sym_quo] = ACTIONS(235),
    [anon_sym_rem] = ACTIONS(235),
    [sym_number_type] = ACTIONS(237),
    [anon_sym_float] = ACTIONS(239),
    [anon_sym_float32] = ACTIONS(239),
    [anon_sym_float64] = ACTIONS(239),
    [anon_sym_uint] = ACTIONS(241),
    [anon_sym_uint8] = ACTIONS(241),
    [anon_sym_uint16] = ACTIONS(241),
    [anon_sym_uint32] = ACTIONS(241),
    [anon_sym_uint64] = ACTIONS(241),
    [anon_sym_uint128] = ACTIONS(241),
    [anon_sym_int] = ACTIONS(243),
    [anon_sym_int8] = ACTIONS(243),
    [anon_sym_int16] = ACTIONS(243),
    [anon_sym_int32] = ACTIONS(243),
    [anon_sym_int64] = ACTIONS(243),
    [anon_sym_int128] = ACTIONS(243),
    [sym_string_type] = ACTIONS(237),
    [sym_bool_type] = ACTIONS(237),
    [sym_bottom_lit] = ACTIONS(245),
    [sym_null_lit] = ACTIONS(237),
    [sym_bool_lit] = ACTIONS(237),
    [sym_int_lit] = ACTIONS(237),
    [sym_float_lit] = ACTIONS(237),
    [anon_sym_LBRACK] = ACTIONS(247),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(253),
    [anon_sym_for] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [anon_sym_BANG_EQ] = ACTIONS(255),
    [anon_sym_LT] = ACTIONS(257),
    [anon_sym_LT_EQ] = ACTIONS(255),
    [anon_sym_GT] = ACTIONS(257),
    [anon_sym_GT_EQ] = ACTIONS(255),
    [anon_sym_EQ_TILDE] = ACTIONS(255),
    [anon_sym_BANG_TILDE] = ACTIONS(255),
    [anon_sym_PLUS] = ACTIONS(255),
    [anon_sym_DASH] = ACTIONS(255),
    [anon_sym_STAR] = ACTIONS(255),
    [anon_sym_BANG] = ACTIONS(257),
    [sym_comment] = ACTIONS(3),
  },
  [21] = {
    [sym__string_lit] = STATE(80),
    [sym_raw_simple_string_lit] = STATE(80),
    [sym_simple_string_lit] = STATE(80),
    [sym_raw_multiline_string_lit] = STATE(80),
    [sym_multiline_string_lit] = STATE(80),
    [sym_builtin] = STATE(80),
    [sym_float_type] = STATE(80),
    [sym_uint_type] = STATE(80),
    [sym_int_type] = STATE(80),
    [sym_top_lit] = STATE(80),
    [sym_list_lit] = STATE(80),
    [sym_struct_lit] = STATE(80),
    [sym__expression] = STATE(145),
    [sym_binary_expression] = STATE(145),
    [sym_unary_expression] = STATE(145),
    [sym__primary_expression] = STATE(80),
    [sym__operand] = STATE(80),
    [sym_index_expression] = STATE(80),
    [sym_selector_expression] = STATE(80),
    [sym_call_expression] = STATE(80),
    [sym__literal] = STATE(80),
    [sym_identifier] = ACTIONS(327),
    [anon_sym_LF] = ACTIONS(329),
    [anon_sym_COMMA] = ACTIONS(327),
    [anon_sym_LPAREN] = ACTIONS(327),
    [anon_sym__] = ACTIONS(327),
    [anon_sym_POUND_DQUOTE] = ACTIONS(327),
    [anon_sym_DQUOTE] = ACTIONS(327),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(327),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(327),
    [anon_sym_len] = ACTIONS(327),
    [anon_sym_close] = ACTIONS(327),
    [anon_sym_and] = ACTIONS(327),
    [anon_sym_or] = ACTIONS(327),
    [anon_sym_div] = ACTIONS(327),
    [anon_sym_mod] = ACTIONS(327),
    [anon_sym_quo] = ACTIONS(327),
    [anon_sym_rem] = ACTIONS(327),
    [sym_number_type] = ACTIONS(327),
    [anon_sym_float] = ACTIONS(327),
    [anon_sym_float32] = ACTIONS(327),
    [anon_sym_float64] = ACTIONS(327),
    [anon_sym_uint] = ACTIONS(327),
    [anon_sym_uint8] = ACTIONS(327),
    [anon_sym_uint16] = ACTIONS(327),
    [anon_sym_uint32] = ACTIONS(327),
    [anon_sym_uint64] = ACTIONS(327),
    [anon_sym_uint128] = ACTIONS(327),
    [anon_sym_int] = ACTIONS(327),
    [anon_sym_int8] = ACTIONS(327),
    [anon_sym_int16] = ACTIONS(327),
    [anon_sym_int32] = ACTIONS(327),
    [anon_sym_int64] = ACTIONS(327),
    [anon_sym_int128] = ACTIONS(327),
    [sym_string_type] = ACTIONS(327),
    [sym_bool_type] = ACTIONS(327),
    [sym_bottom_lit] = ACTIONS(327),
    [sym_null_lit] = ACTIONS(327),
    [sym_bool_lit] = ACTIONS(327),
    [sym_int_lit] = ACTIONS(327),
    [sym_float_lit] = ACTIONS(327),
    [anon_sym_LBRACK] = ACTIONS(327),
    [anon_sym_LBRACE] = ACTIONS(327),
    [anon_sym_RBRACE] = ACTIONS(327),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(327),
    [anon_sym_for] = ACTIONS(327),
    [anon_sym_if] = ACTIONS(327),
    [anon_sym_let] = ACTIONS(327),
    [anon_sym_BANG_EQ] = ACTIONS(327),
    [anon_sym_LT] = ACTIONS(327),
    [anon_sym_LT_EQ] = ACTIONS(327),
    [anon_sym_GT] = ACTIONS(327),
    [anon_sym_GT_EQ] = ACTIONS(327),
    [anon_sym_EQ_TILDE] = ACTIONS(327),
    [anon_sym_BANG_TILDE] = ACTIONS(327),
    [anon_sym_PLUS] = ACTIONS(327),
    [anon_sym_DASH] = ACTIONS(327),
    [anon_sym_STAR] = ACTIONS(327),
    [anon_sym_BANG] = ACTIONS(327),
    [sym_comment] = ACTIONS(331),
  },
  [22] = {
    [sym__string_lit] = STATE(87),
    [sym_raw_simple_string_lit] = STATE(87),
    [sym_simple_string_lit] = STATE(87),
    [sym_raw_multiline_string_lit] = STATE(87),
    [sym_multiline_string_lit] = STATE(87),
    [sym_builtin] = STATE(87),
    [sym_float_type] = STATE(87),
    [sym_uint_type] = STATE(87),
    [sym_int_type] = STATE(87),
    [sym_top_lit] = STATE(87),
    [sym_list_lit] = STATE(87),
    [sym_struct_lit] = STATE(87),
    [sym__embedding] = STATE(196),
    [sym_for_clause] = STATE(238),
    [sym_guard_clause] = STATE(238),
    [sym_comprehension] = STATE(196),
    [sym__alias_expr] = STATE(190),
    [sym__expression] = STATE(156),
    [sym_binary_expression] = STATE(156),
    [sym_unary_expression] = STATE(156),
    [sym__primary_expression] = STATE(87),
    [sym__operand] = STATE(87),
    [sym_index_expression] = STATE(87),
    [sym_selector_expression] = STATE(87),
    [sym_call_expression] = STATE(87),
    [sym__literal] = STATE(87),
    [sym_identifier] = ACTIONS(221),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym__] = ACTIONS(225),
    [anon_sym_POUND_DQUOTE] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(231),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(233),
    [anon_sym_len] = ACTIONS(235),
    [anon_sym_close] = ACTIONS(235),
    [anon_sym_and] = ACTIONS(235),
    [anon_sym_or] = ACTIONS(235),
    [anon_sym_div] = ACTIONS(235),
    [anon_sym_mod] = ACTIONS(235),
    [anon_sym_quo] = ACTIONS(235),
    [anon_sym_rem] = ACTIONS(235),
    [sym_number_type] = ACTIONS(237),
    [anon_sym_float] = ACTIONS(239),
    [anon_sym_float32] = ACTIONS(239),
    [anon_sym_float64] = ACTIONS(239),
    [anon_sym_uint] = ACTIONS(241),
    [anon_sym_uint8] = ACTIONS(241),
    [anon_sym_uint16] = ACTIONS(241),
    [anon_sym_uint32] = ACTIONS(241),
    [anon_sym_uint64] = ACTIONS(241),
    [anon_sym_uint128] = ACTIONS(241),
    [anon_sym_int] = ACTIONS(243),
    [anon_sym_int8] = ACTIONS(243),
    [anon_sym_int16] = ACTIONS(243),
    [anon_sym_int32] = ACTIONS(243),
    [anon_sym_int64] = ACTIONS(243),
    [anon_sym_int128] = ACTIONS(243),
    [sym_string_type] = ACTIONS(237),
    [sym_bool_type] = ACTIONS(237),
    [sym_bottom_lit] = ACTIONS(245),
    [sym_null_lit] = ACTIONS(237),
    [sym_bool_lit] = ACTIONS(237),
    [sym_int_lit] = ACTIONS(237),
    [sym_float_lit] = ACTIONS(237),
    [anon_sym_LBRACK] = ACTIONS(247),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_for] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [anon_sym_BANG_EQ] = ACTIONS(255),
    [anon_sym_LT] = ACTIONS(257),
    [anon_sym_LT_EQ] = ACTIONS(255),
    [anon_sym_GT] = ACTIONS(257),
    [anon_sym_GT_EQ] = ACTIONS(255),
    [anon_sym_EQ_TILDE] = ACTIONS(255),
    [anon_sym_BANG_TILDE] = ACTIONS(255),
    [anon_sym_PLUS] = ACTIONS(255),
    [anon_sym_DASH] = ACTIONS(255),
    [anon_sym_STAR] = ACTIONS(255),
    [anon_sym_BANG] = ACTIONS(257),
    [sym_comment] = ACTIONS(3),
  },
  [23] = {
    [sym__string_lit] = STATE(203),
    [sym_raw_simple_string_lit] = STATE(203),
    [sym_simple_string_lit] = STATE(82),
    [sym_raw_multiline_string_lit] = STATE(203),
    [sym_multiline_string_lit] = STATE(203),
    [sym_builtin] = STATE(203),
    [sym_float_type] = STATE(203),
    [sym_uint_type] = STATE(203),
    [sym_int_type] = STATE(203),
    [sym_top_lit] = STATE(203),
    [sym_list_lit] = STATE(203),
    [sym_struct_lit] = STATE(203),
    [sym__label_name] = STATE(283),
    [sym__label_expr] = STATE(307),
    [sym_label] = STATE(306),
    [sym__value] = STATE(176),
    [sym__alias_expr] = STATE(179),
    [sym__expression] = STATE(220),
    [sym_binary_expression] = STATE(220),
    [sym_unary_expression] = STATE(220),
    [sym__primary_expression] = STATE(203),
    [sym__operand] = STATE(203),
    [sym_index_expression] = STATE(203),
    [sym_selector_expression] = STATE(203),
    [sym_call_expression] = STATE(203),
    [sym__literal] = STATE(203),
    [aux_sym_field_repeat1] = STATE(189),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym__] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(23),
    [anon_sym_len] = ACTIONS(25),
    [anon_sym_close] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(25),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_div] = ACTIONS(25),
    [anon_sym_mod] = ACTIONS(25),
    [anon_sym_quo] = ACTIONS(25),
    [anon_sym_rem] = ACTIONS(25),
    [sym_number_type] = ACTIONS(27),
    [anon_sym_float] = ACTIONS(29),
    [anon_sym_float32] = ACTIONS(29),
    [anon_sym_float64] = ACTIONS(29),
    [anon_sym_uint] = ACTIONS(31),
    [anon_sym_uint8] = ACTIONS(31),
    [anon_sym_uint16] = ACTIONS(31),
    [anon_sym_uint32] = ACTIONS(31),
    [anon_sym_uint64] = ACTIONS(31),
    [anon_sym_uint128] = ACTIONS(31),
    [anon_sym_int] = ACTIONS(33),
    [anon_sym_int8] = ACTIONS(33),
    [anon_sym_int16] = ACTIONS(33),
    [anon_sym_int32] = ACTIONS(33),
    [anon_sym_int64] = ACTIONS(33),
    [anon_sym_int128] = ACTIONS(33),
    [sym_string_type] = ACTIONS(27),
    [sym_bool_type] = ACTIONS(27),
    [sym_bottom_lit] = ACTIONS(35),
    [sym_null_lit] = ACTIONS(27),
    [sym_bool_lit] = ACTIONS(27),
    [sym_int_lit] = ACTIONS(27),
    [sym_float_lit] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_EQ_TILDE] = ACTIONS(49),
    [anon_sym_BANG_TILDE] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(49),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_BANG] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
  },
  [24] = {
    [sym__string_lit] = STATE(80),
    [sym_raw_simple_string_lit] = STATE(80),
    [sym_simple_string_lit] = STATE(82),
    [sym_raw_multiline_string_lit] = STATE(80),
    [sym_multiline_string_lit] = STATE(80),
    [sym_builtin] = STATE(80),
    [sym_float_type] = STATE(80),
    [sym_uint_type] = STATE(80),
    [sym_int_type] = STATE(80),
    [sym_top_lit] = STATE(80),
    [sym_list_lit] = STATE(80),
    [sym_struct_lit] = STATE(80),
    [sym__label_name] = STATE(283),
    [sym__label_expr] = STATE(307),
    [sym_label] = STATE(306),
    [sym__value] = STATE(176),
    [sym__alias_expr] = STATE(179),
    [sym__expression] = STATE(146),
    [sym_binary_expression] = STATE(146),
    [sym_unary_expression] = STATE(146),
    [sym__primary_expression] = STATE(80),
    [sym__operand] = STATE(80),
    [sym_index_expression] = STATE(80),
    [sym_selector_expression] = STATE(80),
    [sym_call_expression] = STATE(80),
    [sym__literal] = STATE(80),
    [aux_sym_field_repeat1] = STATE(189),
    [sym_identifier] = ACTIONS(126),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym__] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(23),
    [anon_sym_len] = ACTIONS(25),
    [anon_sym_close] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(25),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_div] = ACTIONS(25),
    [anon_sym_mod] = ACTIONS(25),
    [anon_sym_quo] = ACTIONS(25),
    [anon_sym_rem] = ACTIONS(25),
    [sym_number_type] = ACTIONS(128),
    [anon_sym_float] = ACTIONS(29),
    [anon_sym_float32] = ACTIONS(29),
    [anon_sym_float64] = ACTIONS(29),
    [anon_sym_uint] = ACTIONS(31),
    [anon_sym_uint8] = ACTIONS(31),
    [anon_sym_uint16] = ACTIONS(31),
    [anon_sym_uint32] = ACTIONS(31),
    [anon_sym_uint64] = ACTIONS(31),
    [anon_sym_uint128] = ACTIONS(31),
    [anon_sym_int] = ACTIONS(33),
    [anon_sym_int8] = ACTIONS(33),
    [anon_sym_int16] = ACTIONS(33),
    [anon_sym_int32] = ACTIONS(33),
    [anon_sym_int64] = ACTIONS(33),
    [anon_sym_int128] = ACTIONS(33),
    [sym_string_type] = ACTIONS(128),
    [sym_bool_type] = ACTIONS(128),
    [sym_bottom_lit] = ACTIONS(130),
    [sym_null_lit] = ACTIONS(128),
    [sym_bool_lit] = ACTIONS(128),
    [sym_int_lit] = ACTIONS(128),
    [sym_float_lit] = ACTIONS(128),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_BANG_EQ] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(140),
    [anon_sym_LT_EQ] = ACTIONS(138),
    [anon_sym_GT] = ACTIONS(140),
    [anon_sym_GT_EQ] = ACTIONS(138),
    [anon_sym_EQ_TILDE] = ACTIONS(138),
    [anon_sym_BANG_TILDE] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(138),
    [anon_sym_STAR] = ACTIONS(138),
    [anon_sym_BANG] = ACTIONS(140),
    [sym_comment] = ACTIONS(3),
  },
  [25] = {
    [sym__string_lit] = STATE(87),
    [sym_raw_simple_string_lit] = STATE(87),
    [sym_simple_string_lit] = STATE(87),
    [sym_raw_multiline_string_lit] = STATE(87),
    [sym_multiline_string_lit] = STATE(87),
    [sym_builtin] = STATE(87),
    [sym_float_type] = STATE(87),
    [sym_uint_type] = STATE(87),
    [sym_int_type] = STATE(87),
    [sym_top_lit] = STATE(87),
    [sym_list_lit] = STATE(87),
    [sym_struct_lit] = STATE(87),
    [sym__expression] = STATE(157),
    [sym_binary_expression] = STATE(157),
    [sym_unary_expression] = STATE(157),
    [sym__primary_expression] = STATE(87),
    [sym__operand] = STATE(87),
    [sym_index_expression] = STATE(87),
    [sym_selector_expression] = STATE(87),
    [sym_call_expression] = STATE(87),
    [sym__literal] = STATE(87),
    [sym_identifier] = ACTIONS(327),
    [anon_sym_LPAREN] = ACTIONS(329),
    [anon_sym__] = ACTIONS(327),
    [anon_sym_POUND_DQUOTE] = ACTIONS(327),
    [anon_sym_DQUOTE] = ACTIONS(327),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(329),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(329),
    [anon_sym_len] = ACTIONS(327),
    [anon_sym_close] = ACTIONS(327),
    [anon_sym_and] = ACTIONS(327),
    [anon_sym_or] = ACTIONS(327),
    [anon_sym_div] = ACTIONS(327),
    [anon_sym_mod] = ACTIONS(327),
    [anon_sym_quo] = ACTIONS(327),
    [anon_sym_rem] = ACTIONS(327),
    [sym_number_type] = ACTIONS(327),
    [anon_sym_float] = ACTIONS(327),
    [anon_sym_float32] = ACTIONS(327),
    [anon_sym_float64] = ACTIONS(327),
    [anon_sym_uint] = ACTIONS(327),
    [anon_sym_uint8] = ACTIONS(327),
    [anon_sym_uint16] = ACTIONS(327),
    [anon_sym_uint32] = ACTIONS(327),
    [anon_sym_uint64] = ACTIONS(327),
    [anon_sym_uint128] = ACTIONS(327),
    [anon_sym_int] = ACTIONS(327),
    [anon_sym_int8] = ACTIONS(327),
    [anon_sym_int16] = ACTIONS(327),
    [anon_sym_int32] = ACTIONS(327),
    [anon_sym_int64] = ACTIONS(327),
    [anon_sym_int128] = ACTIONS(327),
    [sym_string_type] = ACTIONS(327),
    [sym_bool_type] = ACTIONS(327),
    [sym_bottom_lit] = ACTIONS(329),
    [sym_null_lit] = ACTIONS(327),
    [sym_bool_lit] = ACTIONS(327),
    [sym_int_lit] = ACTIONS(327),
    [sym_float_lit] = ACTIONS(327),
    [anon_sym_LBRACK] = ACTIONS(329),
    [anon_sym_RBRACK] = ACTIONS(329),
    [anon_sym_LBRACE] = ACTIONS(329),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(329),
    [anon_sym_for] = ACTIONS(327),
    [anon_sym_if] = ACTIONS(327),
    [anon_sym_BANG_EQ] = ACTIONS(329),
    [anon_sym_LT] = ACTIONS(327),
    [anon_sym_LT_EQ] = ACTIONS(329),
    [anon_sym_GT] = ACTIONS(327),
    [anon_sym_GT_EQ] = ACTIONS(329),
    [anon_sym_EQ_TILDE] = ACTIONS(329),
    [anon_sym_BANG_TILDE] = ACTIONS(329),
    [anon_sym_PLUS] = ACTIONS(329),
    [anon_sym_DASH] = ACTIONS(329),
    [anon_sym_STAR] = ACTIONS(329),
    [anon_sym_BANG] = ACTIONS(327),
    [sym_comment] = ACTIONS(3),
  },
  [26] = {
    [sym__string_lit] = STATE(203),
    [sym_raw_simple_string_lit] = STATE(203),
    [sym_simple_string_lit] = STATE(203),
    [sym_raw_multiline_string_lit] = STATE(203),
    [sym_multiline_string_lit] = STATE(203),
    [sym_builtin] = STATE(203),
    [sym_float_type] = STATE(203),
    [sym_uint_type] = STATE(203),
    [sym_int_type] = STATE(203),
    [sym_top_lit] = STATE(203),
    [sym_list_lit] = STATE(203),
    [sym_struct_lit] = STATE(203),
    [sym__expression] = STATE(218),
    [sym_binary_expression] = STATE(218),
    [sym_unary_expression] = STATE(218),
    [sym__primary_expression] = STATE(203),
    [sym__operand] = STATE(203),
    [sym_index_expression] = STATE(203),
    [sym_selector_expression] = STATE(203),
    [sym_call_expression] = STATE(203),
    [sym__literal] = STATE(203),
    [sym_identifier] = ACTIONS(27),
    [anon_sym_LF] = ACTIONS(329),
    [anon_sym_COMMA] = ACTIONS(327),
    [anon_sym_LPAREN] = ACTIONS(333),
    [anon_sym__] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(335),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(337),
    [anon_sym_len] = ACTIONS(25),
    [anon_sym_close] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(25),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_div] = ACTIONS(25),
    [anon_sym_mod] = ACTIONS(25),
    [anon_sym_quo] = ACTIONS(25),
    [anon_sym_rem] = ACTIONS(25),
    [sym_number_type] = ACTIONS(27),
    [anon_sym_float] = ACTIONS(29),
    [anon_sym_float32] = ACTIONS(29),
    [anon_sym_float64] = ACTIONS(29),
    [anon_sym_uint] = ACTIONS(31),
    [anon_sym_uint8] = ACTIONS(31),
    [anon_sym_uint16] = ACTIONS(31),
    [anon_sym_uint32] = ACTIONS(31),
    [anon_sym_uint64] = ACTIONS(31),
    [anon_sym_uint128] = ACTIONS(31),
    [anon_sym_int] = ACTIONS(33),
    [anon_sym_int8] = ACTIONS(33),
    [anon_sym_int16] = ACTIONS(33),
    [anon_sym_int32] = ACTIONS(33),
    [anon_sym_int64] = ACTIONS(33),
    [anon_sym_int128] = ACTIONS(33),
    [sym_string_type] = ACTIONS(27),
    [sym_bool_type] = ACTIONS(27),
    [sym_bottom_lit] = ACTIONS(27),
    [sym_null_lit] = ACTIONS(27),
    [sym_bool_lit] = ACTIONS(27),
    [sym_int_lit] = ACTIONS(27),
    [sym_float_lit] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(339),
    [anon_sym_LBRACE] = ACTIONS(341),
    [anon_sym_BANG_EQ] = ACTIONS(51),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_LT_EQ] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_GT_EQ] = ACTIONS(51),
    [anon_sym_EQ_TILDE] = ACTIONS(51),
    [anon_sym_BANG_TILDE] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [sym_comment] = ACTIONS(331),
  },
  [27] = {
    [sym__string_lit] = STATE(203),
    [sym_raw_simple_string_lit] = STATE(203),
    [sym_simple_string_lit] = STATE(82),
    [sym_raw_multiline_string_lit] = STATE(203),
    [sym_multiline_string_lit] = STATE(203),
    [sym_builtin] = STATE(203),
    [sym_float_type] = STATE(203),
    [sym_uint_type] = STATE(203),
    [sym_int_type] = STATE(203),
    [sym_top_lit] = STATE(203),
    [sym_list_lit] = STATE(203),
    [sym_struct_lit] = STATE(203),
    [sym__label_name] = STATE(283),
    [sym__label_expr] = STATE(298),
    [sym__expression] = STATE(215),
    [sym_binary_expression] = STATE(215),
    [sym_unary_expression] = STATE(215),
    [sym__primary_expression] = STATE(203),
    [sym__operand] = STATE(203),
    [sym_index_expression] = STATE(203),
    [sym_selector_expression] = STATE(203),
    [sym_call_expression] = STATE(203),
    [sym__literal] = STATE(203),
    [sym_identifier] = ACTIONS(343),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym__] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(23),
    [anon_sym_len] = ACTIONS(25),
    [anon_sym_close] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(25),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_div] = ACTIONS(25),
    [anon_sym_mod] = ACTIONS(25),
    [anon_sym_quo] = ACTIONS(25),
    [anon_sym_rem] = ACTIONS(25),
    [sym_number_type] = ACTIONS(27),
    [anon_sym_float] = ACTIONS(29),
    [anon_sym_float32] = ACTIONS(29),
    [anon_sym_float64] = ACTIONS(29),
    [anon_sym_uint] = ACTIONS(31),
    [anon_sym_uint8] = ACTIONS(31),
    [anon_sym_uint16] = ACTIONS(31),
    [anon_sym_uint32] = ACTIONS(31),
    [anon_sym_uint64] = ACTIONS(31),
    [anon_sym_uint128] = ACTIONS(31),
    [anon_sym_int] = ACTIONS(33),
    [anon_sym_int8] = ACTIONS(33),
    [anon_sym_int16] = ACTIONS(33),
    [anon_sym_int32] = ACTIONS(33),
    [anon_sym_int64] = ACTIONS(33),
    [anon_sym_int128] = ACTIONS(33),
    [sym_string_type] = ACTIONS(27),
    [sym_bool_type] = ACTIONS(27),
    [sym_bottom_lit] = ACTIONS(35),
    [sym_null_lit] = ACTIONS(27),
    [sym_bool_lit] = ACTIONS(27),
    [sym_int_lit] = ACTIONS(27),
    [sym_float_lit] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_EQ_TILDE] = ACTIONS(49),
    [anon_sym_BANG_TILDE] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(49),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_BANG] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
  },
  [28] = {
    [sym__string_lit] = STATE(80),
    [sym_raw_simple_string_lit] = STATE(80),
    [sym_simple_string_lit] = STATE(82),
    [sym_raw_multiline_string_lit] = STATE(80),
    [sym_multiline_string_lit] = STATE(80),
    [sym_builtin] = STATE(80),
    [sym_float_type] = STATE(80),
    [sym_uint_type] = STATE(80),
    [sym_int_type] = STATE(80),
    [sym_top_lit] = STATE(80),
    [sym_list_lit] = STATE(80),
    [sym_struct_lit] = STATE(80),
    [sym__label_name] = STATE(283),
    [sym__label_expr] = STATE(298),
    [sym__expression] = STATE(136),
    [sym_binary_expression] = STATE(136),
    [sym_unary_expression] = STATE(136),
    [sym__primary_expression] = STATE(80),
    [sym__operand] = STATE(80),
    [sym_index_expression] = STATE(80),
    [sym_selector_expression] = STATE(80),
    [sym_call_expression] = STATE(80),
    [sym__literal] = STATE(80),
    [sym_identifier] = ACTIONS(343),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym__] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(23),
    [anon_sym_len] = ACTIONS(25),
    [anon_sym_close] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(25),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_div] = ACTIONS(25),
    [anon_sym_mod] = ACTIONS(25),
    [anon_sym_quo] = ACTIONS(25),
    [anon_sym_rem] = ACTIONS(25),
    [sym_number_type] = ACTIONS(128),
    [anon_sym_float] = ACTIONS(29),
    [anon_sym_float32] = ACTIONS(29),
    [anon_sym_float64] = ACTIONS(29),
    [anon_sym_uint] = ACTIONS(31),
    [anon_sym_uint8] = ACTIONS(31),
    [anon_sym_uint16] = ACTIONS(31),
    [anon_sym_uint32] = ACTIONS(31),
    [anon_sym_uint64] = ACTIONS(31),
    [anon_sym_uint128] = ACTIONS(31),
    [anon_sym_int] = ACTIONS(33),
    [anon_sym_int8] = ACTIONS(33),
    [anon_sym_int16] = ACTIONS(33),
    [anon_sym_int32] = ACTIONS(33),
    [anon_sym_int64] = ACTIONS(33),
    [anon_sym_int128] = ACTIONS(33),
    [sym_string_type] = ACTIONS(128),
    [sym_bool_type] = ACTIONS(128),
    [sym_bottom_lit] = ACTIONS(130),
    [sym_null_lit] = ACTIONS(128),
    [sym_bool_lit] = ACTIONS(128),
    [sym_int_lit] = ACTIONS(128),
    [sym_float_lit] = ACTIONS(128),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_BANG_EQ] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(140),
    [anon_sym_LT_EQ] = ACTIONS(138),
    [anon_sym_GT] = ACTIONS(140),
    [anon_sym_GT_EQ] = ACTIONS(138),
    [anon_sym_EQ_TILDE] = ACTIONS(138),
    [anon_sym_BANG_TILDE] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(138),
    [anon_sym_STAR] = ACTIONS(138),
    [anon_sym_BANG] = ACTIONS(140),
    [sym_comment] = ACTIONS(3),
  },
  [29] = {
    [sym__string_lit] = STATE(201),
    [sym_raw_simple_string_lit] = STATE(201),
    [sym_simple_string_lit] = STATE(201),
    [sym_raw_multiline_string_lit] = STATE(201),
    [sym_multiline_string_lit] = STATE(201),
    [sym_builtin] = STATE(201),
    [sym_float_type] = STATE(201),
    [sym_uint_type] = STATE(201),
    [sym_int_type] = STATE(201),
    [sym_top_lit] = STATE(201),
    [sym_list_lit] = STATE(201),
    [sym_struct_lit] = STATE(201),
    [sym__expression] = STATE(223),
    [sym_binary_expression] = STATE(223),
    [sym_unary_expression] = STATE(223),
    [sym__primary_expression] = STATE(201),
    [sym__operand] = STATE(201),
    [sym_index_expression] = STATE(201),
    [sym_selector_expression] = STATE(201),
    [sym_call_expression] = STATE(201),
    [sym_argument] = STATE(272),
    [sym__literal] = STATE(201),
    [sym_identifier] = ACTIONS(345),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym__] = ACTIONS(225),
    [anon_sym_POUND_DQUOTE] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(231),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(233),
    [anon_sym_len] = ACTIONS(235),
    [anon_sym_close] = ACTIONS(235),
    [anon_sym_and] = ACTIONS(235),
    [anon_sym_or] = ACTIONS(235),
    [anon_sym_div] = ACTIONS(235),
    [anon_sym_mod] = ACTIONS(235),
    [anon_sym_quo] = ACTIONS(235),
    [anon_sym_rem] = ACTIONS(235),
    [sym_number_type] = ACTIONS(345),
    [anon_sym_float] = ACTIONS(239),
    [anon_sym_float32] = ACTIONS(239),
    [anon_sym_float64] = ACTIONS(239),
    [anon_sym_uint] = ACTIONS(241),
    [anon_sym_uint8] = ACTIONS(241),
    [anon_sym_uint16] = ACTIONS(241),
    [anon_sym_uint32] = ACTIONS(241),
    [anon_sym_uint64] = ACTIONS(241),
    [anon_sym_uint128] = ACTIONS(241),
    [anon_sym_int] = ACTIONS(243),
    [anon_sym_int8] = ACTIONS(243),
    [anon_sym_int16] = ACTIONS(243),
    [anon_sym_int32] = ACTIONS(243),
    [anon_sym_int64] = ACTIONS(243),
    [anon_sym_int128] = ACTIONS(243),
    [sym_string_type] = ACTIONS(345),
    [sym_bool_type] = ACTIONS(345),
    [sym_bottom_lit] = ACTIONS(347),
    [sym_null_lit] = ACTIONS(345),
    [sym_bool_lit] = ACTIONS(345),
    [sym_int_lit] = ACTIONS(345),
    [sym_float_lit] = ACTIONS(345),
    [anon_sym_LBRACK] = ACTIONS(247),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_BANG_EQ] = ACTIONS(349),
    [anon_sym_LT] = ACTIONS(351),
    [anon_sym_LT_EQ] = ACTIONS(349),
    [anon_sym_GT] = ACTIONS(351),
    [anon_sym_GT_EQ] = ACTIONS(349),
    [anon_sym_EQ_TILDE] = ACTIONS(349),
    [anon_sym_BANG_TILDE] = ACTIONS(349),
    [anon_sym_PLUS] = ACTIONS(349),
    [anon_sym_DASH] = ACTIONS(349),
    [anon_sym_STAR] = ACTIONS(349),
    [anon_sym_BANG] = ACTIONS(351),
    [sym_comment] = ACTIONS(3),
  },
  [30] = {
    [sym__string_lit] = STATE(201),
    [sym_raw_simple_string_lit] = STATE(201),
    [sym_simple_string_lit] = STATE(201),
    [sym_raw_multiline_string_lit] = STATE(201),
    [sym_multiline_string_lit] = STATE(201),
    [sym_builtin] = STATE(201),
    [sym_float_type] = STATE(201),
    [sym_uint_type] = STATE(201),
    [sym_int_type] = STATE(201),
    [sym_top_lit] = STATE(201),
    [sym_list_lit] = STATE(201),
    [sym_struct_lit] = STATE(201),
    [sym__expression] = STATE(223),
    [sym_binary_expression] = STATE(223),
    [sym_unary_expression] = STATE(223),
    [sym__primary_expression] = STATE(201),
    [sym__operand] = STATE(201),
    [sym_index_expression] = STATE(201),
    [sym_selector_expression] = STATE(201),
    [sym_call_expression] = STATE(201),
    [sym_argument] = STATE(290),
    [sym__literal] = STATE(201),
    [sym_identifier] = ACTIONS(345),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym__] = ACTIONS(225),
    [anon_sym_POUND_DQUOTE] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(231),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(233),
    [anon_sym_len] = ACTIONS(235),
    [anon_sym_close] = ACTIONS(235),
    [anon_sym_and] = ACTIONS(235),
    [anon_sym_or] = ACTIONS(235),
    [anon_sym_div] = ACTIONS(235),
    [anon_sym_mod] = ACTIONS(235),
    [anon_sym_quo] = ACTIONS(235),
    [anon_sym_rem] = ACTIONS(235),
    [sym_number_type] = ACTIONS(345),
    [anon_sym_float] = ACTIONS(239),
    [anon_sym_float32] = ACTIONS(239),
    [anon_sym_float64] = ACTIONS(239),
    [anon_sym_uint] = ACTIONS(241),
    [anon_sym_uint8] = ACTIONS(241),
    [anon_sym_uint16] = ACTIONS(241),
    [anon_sym_uint32] = ACTIONS(241),
    [anon_sym_uint64] = ACTIONS(241),
    [anon_sym_uint128] = ACTIONS(241),
    [anon_sym_int] = ACTIONS(243),
    [anon_sym_int8] = ACTIONS(243),
    [anon_sym_int16] = ACTIONS(243),
    [anon_sym_int32] = ACTIONS(243),
    [anon_sym_int64] = ACTIONS(243),
    [anon_sym_int128] = ACTIONS(243),
    [sym_string_type] = ACTIONS(345),
    [sym_bool_type] = ACTIONS(345),
    [sym_bottom_lit] = ACTIONS(347),
    [sym_null_lit] = ACTIONS(345),
    [sym_bool_lit] = ACTIONS(345),
    [sym_int_lit] = ACTIONS(345),
    [sym_float_lit] = ACTIONS(345),
    [anon_sym_LBRACK] = ACTIONS(247),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_BANG_EQ] = ACTIONS(349),
    [anon_sym_LT] = ACTIONS(351),
    [anon_sym_LT_EQ] = ACTIONS(349),
    [anon_sym_GT] = ACTIONS(351),
    [anon_sym_GT_EQ] = ACTIONS(349),
    [anon_sym_EQ_TILDE] = ACTIONS(349),
    [anon_sym_BANG_TILDE] = ACTIONS(349),
    [anon_sym_PLUS] = ACTIONS(349),
    [anon_sym_DASH] = ACTIONS(349),
    [anon_sym_STAR] = ACTIONS(349),
    [anon_sym_BANG] = ACTIONS(351),
    [sym_comment] = ACTIONS(3),
  },
  [31] = {
    [sym__string_lit] = STATE(201),
    [sym_raw_simple_string_lit] = STATE(201),
    [sym_simple_string_lit] = STATE(201),
    [sym_raw_multiline_string_lit] = STATE(201),
    [sym_multiline_string_lit] = STATE(201),
    [sym_builtin] = STATE(201),
    [sym_float_type] = STATE(201),
    [sym_uint_type] = STATE(201),
    [sym_int_type] = STATE(201),
    [sym_top_lit] = STATE(201),
    [sym_list_lit] = STATE(201),
    [sym_struct_lit] = STATE(201),
    [sym__alias_expr] = STATE(299),
    [sym__expression] = STATE(227),
    [sym_binary_expression] = STATE(227),
    [sym_unary_expression] = STATE(227),
    [sym__primary_expression] = STATE(201),
    [sym__operand] = STATE(201),
    [sym_index_expression] = STATE(201),
    [sym_selector_expression] = STATE(201),
    [sym_call_expression] = STATE(201),
    [sym__literal] = STATE(201),
    [sym_identifier] = ACTIONS(353),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym__] = ACTIONS(225),
    [anon_sym_POUND_DQUOTE] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(231),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(233),
    [anon_sym_len] = ACTIONS(235),
    [anon_sym_close] = ACTIONS(235),
    [anon_sym_and] = ACTIONS(235),
    [anon_sym_or] = ACTIONS(235),
    [anon_sym_div] = ACTIONS(235),
    [anon_sym_mod] = ACTIONS(235),
    [anon_sym_quo] = ACTIONS(235),
    [anon_sym_rem] = ACTIONS(235),
    [sym_number_type] = ACTIONS(345),
    [anon_sym_float] = ACTIONS(239),
    [anon_sym_float32] = ACTIONS(239),
    [anon_sym_float64] = ACTIONS(239),
    [anon_sym_uint] = ACTIONS(241),
    [anon_sym_uint8] = ACTIONS(241),
    [anon_sym_uint16] = ACTIONS(241),
    [anon_sym_uint32] = ACTIONS(241),
    [anon_sym_uint64] = ACTIONS(241),
    [anon_sym_uint128] = ACTIONS(241),
    [anon_sym_int] = ACTIONS(243),
    [anon_sym_int8] = ACTIONS(243),
    [anon_sym_int16] = ACTIONS(243),
    [anon_sym_int32] = ACTIONS(243),
    [anon_sym_int64] = ACTIONS(243),
    [anon_sym_int128] = ACTIONS(243),
    [sym_string_type] = ACTIONS(345),
    [sym_bool_type] = ACTIONS(345),
    [sym_bottom_lit] = ACTIONS(347),
    [sym_null_lit] = ACTIONS(345),
    [sym_bool_lit] = ACTIONS(345),
    [sym_int_lit] = ACTIONS(345),
    [sym_float_lit] = ACTIONS(345),
    [anon_sym_LBRACK] = ACTIONS(247),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_BANG_EQ] = ACTIONS(349),
    [anon_sym_LT] = ACTIONS(351),
    [anon_sym_LT_EQ] = ACTIONS(349),
    [anon_sym_GT] = ACTIONS(351),
    [anon_sym_GT_EQ] = ACTIONS(349),
    [anon_sym_EQ_TILDE] = ACTIONS(349),
    [anon_sym_BANG_TILDE] = ACTIONS(349),
    [anon_sym_PLUS] = ACTIONS(349),
    [anon_sym_DASH] = ACTIONS(349),
    [anon_sym_STAR] = ACTIONS(349),
    [anon_sym_BANG] = ACTIONS(351),
    [sym_comment] = ACTIONS(3),
  },
  [32] = {
    [sym__string_lit] = STATE(201),
    [sym_raw_simple_string_lit] = STATE(201),
    [sym_simple_string_lit] = STATE(201),
    [sym_raw_multiline_string_lit] = STATE(201),
    [sym_multiline_string_lit] = STATE(201),
    [sym_builtin] = STATE(201),
    [sym_float_type] = STATE(201),
    [sym_uint_type] = STATE(201),
    [sym_int_type] = STATE(201),
    [sym_top_lit] = STATE(201),
    [sym_list_lit] = STATE(201),
    [sym_struct_lit] = STATE(201),
    [sym__expression] = STATE(223),
    [sym_binary_expression] = STATE(223),
    [sym_unary_expression] = STATE(223),
    [sym__primary_expression] = STATE(201),
    [sym__operand] = STATE(201),
    [sym_index_expression] = STATE(201),
    [sym_selector_expression] = STATE(201),
    [sym_call_expression] = STATE(201),
    [sym_argument] = STATE(276),
    [sym__literal] = STATE(201),
    [sym_identifier] = ACTIONS(345),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym__] = ACTIONS(225),
    [anon_sym_POUND_DQUOTE] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(231),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(233),
    [anon_sym_len] = ACTIONS(235),
    [anon_sym_close] = ACTIONS(235),
    [anon_sym_and] = ACTIONS(235),
    [anon_sym_or] = ACTIONS(235),
    [anon_sym_div] = ACTIONS(235),
    [anon_sym_mod] = ACTIONS(235),
    [anon_sym_quo] = ACTIONS(235),
    [anon_sym_rem] = ACTIONS(235),
    [sym_number_type] = ACTIONS(345),
    [anon_sym_float] = ACTIONS(239),
    [anon_sym_float32] = ACTIONS(239),
    [anon_sym_float64] = ACTIONS(239),
    [anon_sym_uint] = ACTIONS(241),
    [anon_sym_uint8] = ACTIONS(241),
    [anon_sym_uint16] = ACTIONS(241),
    [anon_sym_uint32] = ACTIONS(241),
    [anon_sym_uint64] = ACTIONS(241),
    [anon_sym_uint128] = ACTIONS(241),
    [anon_sym_int] = ACTIONS(243),
    [anon_sym_int8] = ACTIONS(243),
    [anon_sym_int16] = ACTIONS(243),
    [anon_sym_int32] = ACTIONS(243),
    [anon_sym_int64] = ACTIONS(243),
    [anon_sym_int128] = ACTIONS(243),
    [sym_string_type] = ACTIONS(345),
    [sym_bool_type] = ACTIONS(345),
    [sym_bottom_lit] = ACTIONS(347),
    [sym_null_lit] = ACTIONS(345),
    [sym_bool_lit] = ACTIONS(345),
    [sym_int_lit] = ACTIONS(345),
    [sym_float_lit] = ACTIONS(345),
    [anon_sym_LBRACK] = ACTIONS(247),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_BANG_EQ] = ACTIONS(349),
    [anon_sym_LT] = ACTIONS(351),
    [anon_sym_LT_EQ] = ACTIONS(349),
    [anon_sym_GT] = ACTIONS(351),
    [anon_sym_GT_EQ] = ACTIONS(349),
    [anon_sym_EQ_TILDE] = ACTIONS(349),
    [anon_sym_BANG_TILDE] = ACTIONS(349),
    [anon_sym_PLUS] = ACTIONS(349),
    [anon_sym_DASH] = ACTIONS(349),
    [anon_sym_STAR] = ACTIONS(349),
    [anon_sym_BANG] = ACTIONS(351),
    [sym_comment] = ACTIONS(3),
  },
  [33] = {
    [sym__string_lit] = STATE(80),
    [sym_raw_simple_string_lit] = STATE(80),
    [sym_simple_string_lit] = STATE(80),
    [sym_raw_multiline_string_lit] = STATE(80),
    [sym_multiline_string_lit] = STATE(80),
    [sym_builtin] = STATE(80),
    [sym_float_type] = STATE(80),
    [sym_uint_type] = STATE(80),
    [sym_int_type] = STATE(80),
    [sym_top_lit] = STATE(80),
    [sym_list_lit] = STATE(80),
    [sym_struct_lit] = STATE(80),
    [sym__expression] = STATE(140),
    [sym_binary_expression] = STATE(140),
    [sym_unary_expression] = STATE(140),
    [sym__primary_expression] = STATE(80),
    [sym__operand] = STATE(80),
    [sym_index_expression] = STATE(80),
    [sym_selector_expression] = STATE(80),
    [sym_call_expression] = STATE(80),
    [sym__literal] = STATE(80),
    [sym_identifier] = ACTIONS(128),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym__] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(23),
    [anon_sym_len] = ACTIONS(25),
    [anon_sym_close] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(25),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_div] = ACTIONS(25),
    [anon_sym_mod] = ACTIONS(25),
    [anon_sym_quo] = ACTIONS(25),
    [anon_sym_rem] = ACTIONS(25),
    [sym_number_type] = ACTIONS(128),
    [anon_sym_float] = ACTIONS(29),
    [anon_sym_float32] = ACTIONS(29),
    [anon_sym_float64] = ACTIONS(29),
    [anon_sym_uint] = ACTIONS(31),
    [anon_sym_uint8] = ACTIONS(31),
    [anon_sym_uint16] = ACTIONS(31),
    [anon_sym_uint32] = ACTIONS(31),
    [anon_sym_uint64] = ACTIONS(31),
    [anon_sym_uint128] = ACTIONS(31),
    [anon_sym_int] = ACTIONS(33),
    [anon_sym_int8] = ACTIONS(33),
    [anon_sym_int16] = ACTIONS(33),
    [anon_sym_int32] = ACTIONS(33),
    [anon_sym_int64] = ACTIONS(33),
    [anon_sym_int128] = ACTIONS(33),
    [sym_string_type] = ACTIONS(128),
    [sym_bool_type] = ACTIONS(128),
    [sym_bottom_lit] = ACTIONS(130),
    [sym_null_lit] = ACTIONS(128),
    [sym_bool_lit] = ACTIONS(128),
    [sym_int_lit] = ACTIONS(128),
    [sym_float_lit] = ACTIONS(128),
    [anon_sym_LBRACK] = ACTIONS(355),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_BANG_EQ] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(140),
    [anon_sym_LT_EQ] = ACTIONS(138),
    [anon_sym_GT] = ACTIONS(140),
    [anon_sym_GT_EQ] = ACTIONS(138),
    [anon_sym_EQ_TILDE] = ACTIONS(138),
    [anon_sym_BANG_TILDE] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(138),
    [anon_sym_STAR] = ACTIONS(138),
    [anon_sym_BANG] = ACTIONS(140),
    [sym_comment] = ACTIONS(3),
  },
  [34] = {
    [sym__string_lit] = STATE(201),
    [sym_raw_simple_string_lit] = STATE(201),
    [sym_simple_string_lit] = STATE(201),
    [sym_raw_multiline_string_lit] = STATE(201),
    [sym_multiline_string_lit] = STATE(201),
    [sym_builtin] = STATE(201),
    [sym_float_type] = STATE(201),
    [sym_uint_type] = STATE(201),
    [sym_int_type] = STATE(201),
    [sym_top_lit] = STATE(201),
    [sym_list_lit] = STATE(201),
    [sym_struct_lit] = STATE(201),
    [sym__expression] = STATE(234),
    [sym_binary_expression] = STATE(234),
    [sym_unary_expression] = STATE(234),
    [sym__primary_expression] = STATE(201),
    [sym__operand] = STATE(201),
    [sym_index_expression] = STATE(201),
    [sym_selector_expression] = STATE(201),
    [sym_call_expression] = STATE(201),
    [sym__literal] = STATE(201),
    [sym_identifier] = ACTIONS(345),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym__] = ACTIONS(225),
    [anon_sym_POUND_DQUOTE] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(231),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(233),
    [anon_sym_len] = ACTIONS(235),
    [anon_sym_close] = ACTIONS(235),
    [anon_sym_and] = ACTIONS(235),
    [anon_sym_or] = ACTIONS(235),
    [anon_sym_div] = ACTIONS(235),
    [anon_sym_mod] = ACTIONS(235),
    [anon_sym_quo] = ACTIONS(235),
    [anon_sym_rem] = ACTIONS(235),
    [sym_number_type] = ACTIONS(345),
    [anon_sym_float] = ACTIONS(239),
    [anon_sym_float32] = ACTIONS(239),
    [anon_sym_float64] = ACTIONS(239),
    [anon_sym_uint] = ACTIONS(241),
    [anon_sym_uint8] = ACTIONS(241),
    [anon_sym_uint16] = ACTIONS(241),
    [anon_sym_uint32] = ACTIONS(241),
    [anon_sym_uint64] = ACTIONS(241),
    [anon_sym_uint128] = ACTIONS(241),
    [anon_sym_int] = ACTIONS(243),
    [anon_sym_int8] = ACTIONS(243),
    [anon_sym_int16] = ACTIONS(243),
    [anon_sym_int32] = ACTIONS(243),
    [anon_sym_int64] = ACTIONS(243),
    [anon_sym_int128] = ACTIONS(243),
    [sym_string_type] = ACTIONS(345),
    [sym_bool_type] = ACTIONS(345),
    [sym_bottom_lit] = ACTIONS(347),
    [sym_null_lit] = ACTIONS(345),
    [sym_bool_lit] = ACTIONS(345),
    [sym_int_lit] = ACTIONS(345),
    [sym_float_lit] = ACTIONS(345),
    [anon_sym_LBRACK] = ACTIONS(247),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_BANG_EQ] = ACTIONS(349),
    [anon_sym_LT] = ACTIONS(351),
    [anon_sym_LT_EQ] = ACTIONS(349),
    [anon_sym_GT] = ACTIONS(351),
    [anon_sym_GT_EQ] = ACTIONS(349),
    [anon_sym_EQ_TILDE] = ACTIONS(349),
    [anon_sym_BANG_TILDE] = ACTIONS(349),
    [anon_sym_PLUS] = ACTIONS(349),
    [anon_sym_DASH] = ACTIONS(349),
    [anon_sym_STAR] = ACTIONS(349),
    [anon_sym_BANG] = ACTIONS(351),
    [sym_comment] = ACTIONS(3),
  },
  [35] = {
    [sym__string_lit] = STATE(201),
    [sym_raw_simple_string_lit] = STATE(201),
    [sym_simple_string_lit] = STATE(201),
    [sym_raw_multiline_string_lit] = STATE(201),
    [sym_multiline_string_lit] = STATE(201),
    [sym_builtin] = STATE(201),
    [sym_float_type] = STATE(201),
    [sym_uint_type] = STATE(201),
    [sym_int_type] = STATE(201),
    [sym_top_lit] = STATE(201),
    [sym_list_lit] = STATE(201),
    [sym_struct_lit] = STATE(201),
    [sym__expression] = STATE(231),
    [sym_binary_expression] = STATE(231),
    [sym_unary_expression] = STATE(231),
    [sym__primary_expression] = STATE(201),
    [sym__operand] = STATE(201),
    [sym_index_expression] = STATE(201),
    [sym_selector_expression] = STATE(201),
    [sym_call_expression] = STATE(201),
    [sym__literal] = STATE(201),
    [sym_identifier] = ACTIONS(345),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym__] = ACTIONS(225),
    [anon_sym_POUND_DQUOTE] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(231),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(233),
    [anon_sym_len] = ACTIONS(235),
    [anon_sym_close] = ACTIONS(235),
    [anon_sym_and] = ACTIONS(235),
    [anon_sym_or] = ACTIONS(235),
    [anon_sym_div] = ACTIONS(235),
    [anon_sym_mod] = ACTIONS(235),
    [anon_sym_quo] = ACTIONS(235),
    [anon_sym_rem] = ACTIONS(235),
    [sym_number_type] = ACTIONS(345),
    [anon_sym_float] = ACTIONS(239),
    [anon_sym_float32] = ACTIONS(239),
    [anon_sym_float64] = ACTIONS(239),
    [anon_sym_uint] = ACTIONS(241),
    [anon_sym_uint8] = ACTIONS(241),
    [anon_sym_uint16] = ACTIONS(241),
    [anon_sym_uint32] = ACTIONS(241),
    [anon_sym_uint64] = ACTIONS(241),
    [anon_sym_uint128] = ACTIONS(241),
    [anon_sym_int] = ACTIONS(243),
    [anon_sym_int8] = ACTIONS(243),
    [anon_sym_int16] = ACTIONS(243),
    [anon_sym_int32] = ACTIONS(243),
    [anon_sym_int64] = ACTIONS(243),
    [anon_sym_int128] = ACTIONS(243),
    [sym_string_type] = ACTIONS(345),
    [sym_bool_type] = ACTIONS(345),
    [sym_bottom_lit] = ACTIONS(347),
    [sym_null_lit] = ACTIONS(345),
    [sym_bool_lit] = ACTIONS(345),
    [sym_int_lit] = ACTIONS(345),
    [sym_float_lit] = ACTIONS(345),
    [anon_sym_LBRACK] = ACTIONS(247),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_BANG_EQ] = ACTIONS(349),
    [anon_sym_LT] = ACTIONS(351),
    [anon_sym_LT_EQ] = ACTIONS(349),
    [anon_sym_GT] = ACTIONS(351),
    [anon_sym_GT_EQ] = ACTIONS(349),
    [anon_sym_EQ_TILDE] = ACTIONS(349),
    [anon_sym_BANG_TILDE] = ACTIONS(349),
    [anon_sym_PLUS] = ACTIONS(349),
    [anon_sym_DASH] = ACTIONS(349),
    [anon_sym_STAR] = ACTIONS(349),
    [anon_sym_BANG] = ACTIONS(351),
    [sym_comment] = ACTIONS(3),
  },
  [36] = {
    [sym__string_lit] = STATE(201),
    [sym_raw_simple_string_lit] = STATE(201),
    [sym_simple_string_lit] = STATE(201),
    [sym_raw_multiline_string_lit] = STATE(201),
    [sym_multiline_string_lit] = STATE(201),
    [sym_builtin] = STATE(201),
    [sym_float_type] = STATE(201),
    [sym_uint_type] = STATE(201),
    [sym_int_type] = STATE(201),
    [sym_top_lit] = STATE(201),
    [sym_list_lit] = STATE(201),
    [sym_struct_lit] = STATE(201),
    [sym__expression] = STATE(210),
    [sym_binary_expression] = STATE(210),
    [sym_unary_expression] = STATE(210),
    [sym__primary_expression] = STATE(201),
    [sym__operand] = STATE(201),
    [sym_index_expression] = STATE(201),
    [sym_selector_expression] = STATE(201),
    [sym_call_expression] = STATE(201),
    [sym__literal] = STATE(201),
    [sym_identifier] = ACTIONS(345),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym__] = ACTIONS(225),
    [anon_sym_POUND_DQUOTE] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(231),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(233),
    [anon_sym_len] = ACTIONS(235),
    [anon_sym_close] = ACTIONS(235),
    [anon_sym_and] = ACTIONS(235),
    [anon_sym_or] = ACTIONS(235),
    [anon_sym_div] = ACTIONS(235),
    [anon_sym_mod] = ACTIONS(235),
    [anon_sym_quo] = ACTIONS(235),
    [anon_sym_rem] = ACTIONS(235),
    [sym_number_type] = ACTIONS(345),
    [anon_sym_float] = ACTIONS(239),
    [anon_sym_float32] = ACTIONS(239),
    [anon_sym_float64] = ACTIONS(239),
    [anon_sym_uint] = ACTIONS(241),
    [anon_sym_uint8] = ACTIONS(241),
    [anon_sym_uint16] = ACTIONS(241),
    [anon_sym_uint32] = ACTIONS(241),
    [anon_sym_uint64] = ACTIONS(241),
    [anon_sym_uint128] = ACTIONS(241),
    [anon_sym_int] = ACTIONS(243),
    [anon_sym_int8] = ACTIONS(243),
    [anon_sym_int16] = ACTIONS(243),
    [anon_sym_int32] = ACTIONS(243),
    [anon_sym_int64] = ACTIONS(243),
    [anon_sym_int128] = ACTIONS(243),
    [sym_string_type] = ACTIONS(345),
    [sym_bool_type] = ACTIONS(345),
    [sym_bottom_lit] = ACTIONS(347),
    [sym_null_lit] = ACTIONS(345),
    [sym_bool_lit] = ACTIONS(345),
    [sym_int_lit] = ACTIONS(345),
    [sym_float_lit] = ACTIONS(345),
    [anon_sym_LBRACK] = ACTIONS(247),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_BANG_EQ] = ACTIONS(349),
    [anon_sym_LT] = ACTIONS(351),
    [anon_sym_LT_EQ] = ACTIONS(349),
    [anon_sym_GT] = ACTIONS(351),
    [anon_sym_GT_EQ] = ACTIONS(349),
    [anon_sym_EQ_TILDE] = ACTIONS(349),
    [anon_sym_BANG_TILDE] = ACTIONS(349),
    [anon_sym_PLUS] = ACTIONS(349),
    [anon_sym_DASH] = ACTIONS(349),
    [anon_sym_STAR] = ACTIONS(349),
    [anon_sym_BANG] = ACTIONS(351),
    [sym_comment] = ACTIONS(3),
  },
  [37] = {
    [sym__string_lit] = STATE(201),
    [sym_raw_simple_string_lit] = STATE(201),
    [sym_simple_string_lit] = STATE(201),
    [sym_raw_multiline_string_lit] = STATE(201),
    [sym_multiline_string_lit] = STATE(201),
    [sym_builtin] = STATE(201),
    [sym_float_type] = STATE(201),
    [sym_uint_type] = STATE(201),
    [sym_int_type] = STATE(201),
    [sym_top_lit] = STATE(201),
    [sym_list_lit] = STATE(201),
    [sym_struct_lit] = STATE(201),
    [sym__expression] = STATE(142),
    [sym_binary_expression] = STATE(142),
    [sym_unary_expression] = STATE(142),
    [sym__primary_expression] = STATE(201),
    [sym__operand] = STATE(201),
    [sym_index_expression] = STATE(201),
    [sym_selector_expression] = STATE(201),
    [sym_call_expression] = STATE(201),
    [sym__literal] = STATE(201),
    [sym_identifier] = ACTIONS(345),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym__] = ACTIONS(225),
    [anon_sym_POUND_DQUOTE] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(231),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(233),
    [anon_sym_len] = ACTIONS(235),
    [anon_sym_close] = ACTIONS(235),
    [anon_sym_and] = ACTIONS(235),
    [anon_sym_or] = ACTIONS(235),
    [anon_sym_div] = ACTIONS(235),
    [anon_sym_mod] = ACTIONS(235),
    [anon_sym_quo] = ACTIONS(235),
    [anon_sym_rem] = ACTIONS(235),
    [sym_number_type] = ACTIONS(345),
    [anon_sym_float] = ACTIONS(239),
    [anon_sym_float32] = ACTIONS(239),
    [anon_sym_float64] = ACTIONS(239),
    [anon_sym_uint] = ACTIONS(241),
    [anon_sym_uint8] = ACTIONS(241),
    [anon_sym_uint16] = ACTIONS(241),
    [anon_sym_uint32] = ACTIONS(241),
    [anon_sym_uint64] = ACTIONS(241),
    [anon_sym_uint128] = ACTIONS(241),
    [anon_sym_int] = ACTIONS(243),
    [anon_sym_int8] = ACTIONS(243),
    [anon_sym_int16] = ACTIONS(243),
    [anon_sym_int32] = ACTIONS(243),
    [anon_sym_int64] = ACTIONS(243),
    [anon_sym_int128] = ACTIONS(243),
    [sym_string_type] = ACTIONS(345),
    [sym_bool_type] = ACTIONS(345),
    [sym_bottom_lit] = ACTIONS(347),
    [sym_null_lit] = ACTIONS(345),
    [sym_bool_lit] = ACTIONS(345),
    [sym_int_lit] = ACTIONS(345),
    [sym_float_lit] = ACTIONS(345),
    [anon_sym_LBRACK] = ACTIONS(247),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_BANG_EQ] = ACTIONS(349),
    [anon_sym_LT] = ACTIONS(351),
    [anon_sym_LT_EQ] = ACTIONS(349),
    [anon_sym_GT] = ACTIONS(351),
    [anon_sym_GT_EQ] = ACTIONS(349),
    [anon_sym_EQ_TILDE] = ACTIONS(349),
    [anon_sym_BANG_TILDE] = ACTIONS(349),
    [anon_sym_PLUS] = ACTIONS(349),
    [anon_sym_DASH] = ACTIONS(349),
    [anon_sym_STAR] = ACTIONS(349),
    [anon_sym_BANG] = ACTIONS(351),
    [sym_comment] = ACTIONS(3),
  },
  [38] = {
    [sym__string_lit] = STATE(201),
    [sym_raw_simple_string_lit] = STATE(201),
    [sym_simple_string_lit] = STATE(201),
    [sym_raw_multiline_string_lit] = STATE(201),
    [sym_multiline_string_lit] = STATE(201),
    [sym_builtin] = STATE(201),
    [sym_float_type] = STATE(201),
    [sym_uint_type] = STATE(201),
    [sym_int_type] = STATE(201),
    [sym_top_lit] = STATE(201),
    [sym_list_lit] = STATE(201),
    [sym_struct_lit] = STATE(201),
    [sym__expression] = STATE(206),
    [sym_binary_expression] = STATE(206),
    [sym_unary_expression] = STATE(206),
    [sym__primary_expression] = STATE(201),
    [sym__operand] = STATE(201),
    [sym_index_expression] = STATE(201),
    [sym_selector_expression] = STATE(201),
    [sym_call_expression] = STATE(201),
    [sym__literal] = STATE(201),
    [sym_identifier] = ACTIONS(345),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym__] = ACTIONS(225),
    [anon_sym_POUND_DQUOTE] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(231),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(233),
    [anon_sym_len] = ACTIONS(235),
    [anon_sym_close] = ACTIONS(235),
    [anon_sym_and] = ACTIONS(235),
    [anon_sym_or] = ACTIONS(235),
    [anon_sym_div] = ACTIONS(235),
    [anon_sym_mod] = ACTIONS(235),
    [anon_sym_quo] = ACTIONS(235),
    [anon_sym_rem] = ACTIONS(235),
    [sym_number_type] = ACTIONS(345),
    [anon_sym_float] = ACTIONS(239),
    [anon_sym_float32] = ACTIONS(239),
    [anon_sym_float64] = ACTIONS(239),
    [anon_sym_uint] = ACTIONS(241),
    [anon_sym_uint8] = ACTIONS(241),
    [anon_sym_uint16] = ACTIONS(241),
    [anon_sym_uint32] = ACTIONS(241),
    [anon_sym_uint64] = ACTIONS(241),
    [anon_sym_uint128] = ACTIONS(241),
    [anon_sym_int] = ACTIONS(243),
    [anon_sym_int8] = ACTIONS(243),
    [anon_sym_int16] = ACTIONS(243),
    [anon_sym_int32] = ACTIONS(243),
    [anon_sym_int64] = ACTIONS(243),
    [anon_sym_int128] = ACTIONS(243),
    [sym_string_type] = ACTIONS(345),
    [sym_bool_type] = ACTIONS(345),
    [sym_bottom_lit] = ACTIONS(347),
    [sym_null_lit] = ACTIONS(345),
    [sym_bool_lit] = ACTIONS(345),
    [sym_int_lit] = ACTIONS(345),
    [sym_float_lit] = ACTIONS(345),
    [anon_sym_LBRACK] = ACTIONS(247),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_BANG_EQ] = ACTIONS(349),
    [anon_sym_LT] = ACTIONS(351),
    [anon_sym_LT_EQ] = ACTIONS(349),
    [anon_sym_GT] = ACTIONS(351),
    [anon_sym_GT_EQ] = ACTIONS(349),
    [anon_sym_EQ_TILDE] = ACTIONS(349),
    [anon_sym_BANG_TILDE] = ACTIONS(349),
    [anon_sym_PLUS] = ACTIONS(349),
    [anon_sym_DASH] = ACTIONS(349),
    [anon_sym_STAR] = ACTIONS(349),
    [anon_sym_BANG] = ACTIONS(351),
    [sym_comment] = ACTIONS(3),
  },
  [39] = {
    [sym__string_lit] = STATE(201),
    [sym_raw_simple_string_lit] = STATE(201),
    [sym_simple_string_lit] = STATE(201),
    [sym_raw_multiline_string_lit] = STATE(201),
    [sym_multiline_string_lit] = STATE(201),
    [sym_builtin] = STATE(201),
    [sym_float_type] = STATE(201),
    [sym_uint_type] = STATE(201),
    [sym_int_type] = STATE(201),
    [sym_top_lit] = STATE(201),
    [sym_list_lit] = STATE(201),
    [sym_struct_lit] = STATE(201),
    [sym__expression] = STATE(230),
    [sym_binary_expression] = STATE(230),
    [sym_unary_expression] = STATE(230),
    [sym__primary_expression] = STATE(201),
    [sym__operand] = STATE(201),
    [sym_index_expression] = STATE(201),
    [sym_selector_expression] = STATE(201),
    [sym_call_expression] = STATE(201),
    [sym__literal] = STATE(201),
    [sym_identifier] = ACTIONS(345),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym__] = ACTIONS(225),
    [anon_sym_POUND_DQUOTE] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(231),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(233),
    [anon_sym_len] = ACTIONS(235),
    [anon_sym_close] = ACTIONS(235),
    [anon_sym_and] = ACTIONS(235),
    [anon_sym_or] = ACTIONS(235),
    [anon_sym_div] = ACTIONS(235),
    [anon_sym_mod] = ACTIONS(235),
    [anon_sym_quo] = ACTIONS(235),
    [anon_sym_rem] = ACTIONS(235),
    [sym_number_type] = ACTIONS(345),
    [anon_sym_float] = ACTIONS(239),
    [anon_sym_float32] = ACTIONS(239),
    [anon_sym_float64] = ACTIONS(239),
    [anon_sym_uint] = ACTIONS(241),
    [anon_sym_uint8] = ACTIONS(241),
    [anon_sym_uint16] = ACTIONS(241),
    [anon_sym_uint32] = ACTIONS(241),
    [anon_sym_uint64] = ACTIONS(241),
    [anon_sym_uint128] = ACTIONS(241),
    [anon_sym_int] = ACTIONS(243),
    [anon_sym_int8] = ACTIONS(243),
    [anon_sym_int16] = ACTIONS(243),
    [anon_sym_int32] = ACTIONS(243),
    [anon_sym_int64] = ACTIONS(243),
    [anon_sym_int128] = ACTIONS(243),
    [sym_string_type] = ACTIONS(345),
    [sym_bool_type] = ACTIONS(345),
    [sym_bottom_lit] = ACTIONS(347),
    [sym_null_lit] = ACTIONS(345),
    [sym_bool_lit] = ACTIONS(345),
    [sym_int_lit] = ACTIONS(345),
    [sym_float_lit] = ACTIONS(345),
    [anon_sym_LBRACK] = ACTIONS(247),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_BANG_EQ] = ACTIONS(349),
    [anon_sym_LT] = ACTIONS(351),
    [anon_sym_LT_EQ] = ACTIONS(349),
    [anon_sym_GT] = ACTIONS(351),
    [anon_sym_GT_EQ] = ACTIONS(349),
    [anon_sym_EQ_TILDE] = ACTIONS(349),
    [anon_sym_BANG_TILDE] = ACTIONS(349),
    [anon_sym_PLUS] = ACTIONS(349),
    [anon_sym_DASH] = ACTIONS(349),
    [anon_sym_STAR] = ACTIONS(349),
    [anon_sym_BANG] = ACTIONS(351),
    [sym_comment] = ACTIONS(3),
  },
  [40] = {
    [sym__string_lit] = STATE(201),
    [sym_raw_simple_string_lit] = STATE(201),
    [sym_simple_string_lit] = STATE(201),
    [sym_raw_multiline_string_lit] = STATE(201),
    [sym_multiline_string_lit] = STATE(201),
    [sym_builtin] = STATE(201),
    [sym_float_type] = STATE(201),
    [sym_uint_type] = STATE(201),
    [sym_int_type] = STATE(201),
    [sym_top_lit] = STATE(201),
    [sym_list_lit] = STATE(201),
    [sym_struct_lit] = STATE(201),
    [sym__expression] = STATE(205),
    [sym_binary_expression] = STATE(205),
    [sym_unary_expression] = STATE(205),
    [sym__primary_expression] = STATE(201),
    [sym__operand] = STATE(201),
    [sym_index_expression] = STATE(201),
    [sym_selector_expression] = STATE(201),
    [sym_call_expression] = STATE(201),
    [sym__literal] = STATE(201),
    [sym_identifier] = ACTIONS(345),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym__] = ACTIONS(225),
    [anon_sym_POUND_DQUOTE] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(231),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(233),
    [anon_sym_len] = ACTIONS(235),
    [anon_sym_close] = ACTIONS(235),
    [anon_sym_and] = ACTIONS(235),
    [anon_sym_or] = ACTIONS(235),
    [anon_sym_div] = ACTIONS(235),
    [anon_sym_mod] = ACTIONS(235),
    [anon_sym_quo] = ACTIONS(235),
    [anon_sym_rem] = ACTIONS(235),
    [sym_number_type] = ACTIONS(345),
    [anon_sym_float] = ACTIONS(239),
    [anon_sym_float32] = ACTIONS(239),
    [anon_sym_float64] = ACTIONS(239),
    [anon_sym_uint] = ACTIONS(241),
    [anon_sym_uint8] = ACTIONS(241),
    [anon_sym_uint16] = ACTIONS(241),
    [anon_sym_uint32] = ACTIONS(241),
    [anon_sym_uint64] = ACTIONS(241),
    [anon_sym_uint128] = ACTIONS(241),
    [anon_sym_int] = ACTIONS(243),
    [anon_sym_int8] = ACTIONS(243),
    [anon_sym_int16] = ACTIONS(243),
    [anon_sym_int32] = ACTIONS(243),
    [anon_sym_int64] = ACTIONS(243),
    [anon_sym_int128] = ACTIONS(243),
    [sym_string_type] = ACTIONS(345),
    [sym_bool_type] = ACTIONS(345),
    [sym_bottom_lit] = ACTIONS(347),
    [sym_null_lit] = ACTIONS(345),
    [sym_bool_lit] = ACTIONS(345),
    [sym_int_lit] = ACTIONS(345),
    [sym_float_lit] = ACTIONS(345),
    [anon_sym_LBRACK] = ACTIONS(247),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_BANG_EQ] = ACTIONS(349),
    [anon_sym_LT] = ACTIONS(351),
    [anon_sym_LT_EQ] = ACTIONS(349),
    [anon_sym_GT] = ACTIONS(351),
    [anon_sym_GT_EQ] = ACTIONS(349),
    [anon_sym_EQ_TILDE] = ACTIONS(349),
    [anon_sym_BANG_TILDE] = ACTIONS(349),
    [anon_sym_PLUS] = ACTIONS(349),
    [anon_sym_DASH] = ACTIONS(349),
    [anon_sym_STAR] = ACTIONS(349),
    [anon_sym_BANG] = ACTIONS(351),
    [sym_comment] = ACTIONS(3),
  },
  [41] = {
    [sym__string_lit] = STATE(201),
    [sym_raw_simple_string_lit] = STATE(201),
    [sym_simple_string_lit] = STATE(201),
    [sym_raw_multiline_string_lit] = STATE(201),
    [sym_multiline_string_lit] = STATE(201),
    [sym_builtin] = STATE(201),
    [sym_float_type] = STATE(201),
    [sym_uint_type] = STATE(201),
    [sym_int_type] = STATE(201),
    [sym_top_lit] = STATE(201),
    [sym_list_lit] = STATE(201),
    [sym_struct_lit] = STATE(201),
    [sym__expression] = STATE(209),
    [sym_binary_expression] = STATE(209),
    [sym_unary_expression] = STATE(209),
    [sym__primary_expression] = STATE(201),
    [sym__operand] = STATE(201),
    [sym_index_expression] = STATE(201),
    [sym_selector_expression] = STATE(201),
    [sym_call_expression] = STATE(201),
    [sym__literal] = STATE(201),
    [sym_identifier] = ACTIONS(345),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym__] = ACTIONS(225),
    [anon_sym_POUND_DQUOTE] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(231),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(233),
    [anon_sym_len] = ACTIONS(235),
    [anon_sym_close] = ACTIONS(235),
    [anon_sym_and] = ACTIONS(235),
    [anon_sym_or] = ACTIONS(235),
    [anon_sym_div] = ACTIONS(235),
    [anon_sym_mod] = ACTIONS(235),
    [anon_sym_quo] = ACTIONS(235),
    [anon_sym_rem] = ACTIONS(235),
    [sym_number_type] = ACTIONS(345),
    [anon_sym_float] = ACTIONS(239),
    [anon_sym_float32] = ACTIONS(239),
    [anon_sym_float64] = ACTIONS(239),
    [anon_sym_uint] = ACTIONS(241),
    [anon_sym_uint8] = ACTIONS(241),
    [anon_sym_uint16] = ACTIONS(241),
    [anon_sym_uint32] = ACTIONS(241),
    [anon_sym_uint64] = ACTIONS(241),
    [anon_sym_uint128] = ACTIONS(241),
    [anon_sym_int] = ACTIONS(243),
    [anon_sym_int8] = ACTIONS(243),
    [anon_sym_int16] = ACTIONS(243),
    [anon_sym_int32] = ACTIONS(243),
    [anon_sym_int64] = ACTIONS(243),
    [anon_sym_int128] = ACTIONS(243),
    [sym_string_type] = ACTIONS(345),
    [sym_bool_type] = ACTIONS(345),
    [sym_bottom_lit] = ACTIONS(347),
    [sym_null_lit] = ACTIONS(345),
    [sym_bool_lit] = ACTIONS(345),
    [sym_int_lit] = ACTIONS(345),
    [sym_float_lit] = ACTIONS(345),
    [anon_sym_LBRACK] = ACTIONS(247),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_BANG_EQ] = ACTIONS(349),
    [anon_sym_LT] = ACTIONS(351),
    [anon_sym_LT_EQ] = ACTIONS(349),
    [anon_sym_GT] = ACTIONS(351),
    [anon_sym_GT_EQ] = ACTIONS(349),
    [anon_sym_EQ_TILDE] = ACTIONS(349),
    [anon_sym_BANG_TILDE] = ACTIONS(349),
    [anon_sym_PLUS] = ACTIONS(349),
    [anon_sym_DASH] = ACTIONS(349),
    [anon_sym_STAR] = ACTIONS(349),
    [anon_sym_BANG] = ACTIONS(351),
    [sym_comment] = ACTIONS(3),
  },
  [42] = {
    [sym__string_lit] = STATE(201),
    [sym_raw_simple_string_lit] = STATE(201),
    [sym_simple_string_lit] = STATE(201),
    [sym_raw_multiline_string_lit] = STATE(201),
    [sym_multiline_string_lit] = STATE(201),
    [sym_builtin] = STATE(201),
    [sym_float_type] = STATE(201),
    [sym_uint_type] = STATE(201),
    [sym_int_type] = STATE(201),
    [sym_top_lit] = STATE(201),
    [sym_list_lit] = STATE(201),
    [sym_struct_lit] = STATE(201),
    [sym__expression] = STATE(208),
    [sym_binary_expression] = STATE(208),
    [sym_unary_expression] = STATE(208),
    [sym__primary_expression] = STATE(201),
    [sym__operand] = STATE(201),
    [sym_index_expression] = STATE(201),
    [sym_selector_expression] = STATE(201),
    [sym_call_expression] = STATE(201),
    [sym__literal] = STATE(201),
    [sym_identifier] = ACTIONS(345),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym__] = ACTIONS(225),
    [anon_sym_POUND_DQUOTE] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(231),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(233),
    [anon_sym_len] = ACTIONS(235),
    [anon_sym_close] = ACTIONS(235),
    [anon_sym_and] = ACTIONS(235),
    [anon_sym_or] = ACTIONS(235),
    [anon_sym_div] = ACTIONS(235),
    [anon_sym_mod] = ACTIONS(235),
    [anon_sym_quo] = ACTIONS(235),
    [anon_sym_rem] = ACTIONS(235),
    [sym_number_type] = ACTIONS(345),
    [anon_sym_float] = ACTIONS(239),
    [anon_sym_float32] = ACTIONS(239),
    [anon_sym_float64] = ACTIONS(239),
    [anon_sym_uint] = ACTIONS(241),
    [anon_sym_uint8] = ACTIONS(241),
    [anon_sym_uint16] = ACTIONS(241),
    [anon_sym_uint32] = ACTIONS(241),
    [anon_sym_uint64] = ACTIONS(241),
    [anon_sym_uint128] = ACTIONS(241),
    [anon_sym_int] = ACTIONS(243),
    [anon_sym_int8] = ACTIONS(243),
    [anon_sym_int16] = ACTIONS(243),
    [anon_sym_int32] = ACTIONS(243),
    [anon_sym_int64] = ACTIONS(243),
    [anon_sym_int128] = ACTIONS(243),
    [sym_string_type] = ACTIONS(345),
    [sym_bool_type] = ACTIONS(345),
    [sym_bottom_lit] = ACTIONS(347),
    [sym_null_lit] = ACTIONS(345),
    [sym_bool_lit] = ACTIONS(345),
    [sym_int_lit] = ACTIONS(345),
    [sym_float_lit] = ACTIONS(345),
    [anon_sym_LBRACK] = ACTIONS(247),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_BANG_EQ] = ACTIONS(349),
    [anon_sym_LT] = ACTIONS(351),
    [anon_sym_LT_EQ] = ACTIONS(349),
    [anon_sym_GT] = ACTIONS(351),
    [anon_sym_GT_EQ] = ACTIONS(349),
    [anon_sym_EQ_TILDE] = ACTIONS(349),
    [anon_sym_BANG_TILDE] = ACTIONS(349),
    [anon_sym_PLUS] = ACTIONS(349),
    [anon_sym_DASH] = ACTIONS(349),
    [anon_sym_STAR] = ACTIONS(349),
    [anon_sym_BANG] = ACTIONS(351),
    [sym_comment] = ACTIONS(3),
  },
  [43] = {
    [sym__string_lit] = STATE(201),
    [sym_raw_simple_string_lit] = STATE(201),
    [sym_simple_string_lit] = STATE(201),
    [sym_raw_multiline_string_lit] = STATE(201),
    [sym_multiline_string_lit] = STATE(201),
    [sym_builtin] = STATE(201),
    [sym_float_type] = STATE(201),
    [sym_uint_type] = STATE(201),
    [sym_int_type] = STATE(201),
    [sym_top_lit] = STATE(201),
    [sym_list_lit] = STATE(201),
    [sym_struct_lit] = STATE(201),
    [sym__expression] = STATE(207),
    [sym_binary_expression] = STATE(207),
    [sym_unary_expression] = STATE(207),
    [sym__primary_expression] = STATE(201),
    [sym__operand] = STATE(201),
    [sym_index_expression] = STATE(201),
    [sym_selector_expression] = STATE(201),
    [sym_call_expression] = STATE(201),
    [sym__literal] = STATE(201),
    [sym_identifier] = ACTIONS(345),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym__] = ACTIONS(225),
    [anon_sym_POUND_DQUOTE] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(231),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(233),
    [anon_sym_len] = ACTIONS(235),
    [anon_sym_close] = ACTIONS(235),
    [anon_sym_and] = ACTIONS(235),
    [anon_sym_or] = ACTIONS(235),
    [anon_sym_div] = ACTIONS(235),
    [anon_sym_mod] = ACTIONS(235),
    [anon_sym_quo] = ACTIONS(235),
    [anon_sym_rem] = ACTIONS(235),
    [sym_number_type] = ACTIONS(345),
    [anon_sym_float] = ACTIONS(239),
    [anon_sym_float32] = ACTIONS(239),
    [anon_sym_float64] = ACTIONS(239),
    [anon_sym_uint] = ACTIONS(241),
    [anon_sym_uint8] = ACTIONS(241),
    [anon_sym_uint16] = ACTIONS(241),
    [anon_sym_uint32] = ACTIONS(241),
    [anon_sym_uint64] = ACTIONS(241),
    [anon_sym_uint128] = ACTIONS(241),
    [anon_sym_int] = ACTIONS(243),
    [anon_sym_int8] = ACTIONS(243),
    [anon_sym_int16] = ACTIONS(243),
    [anon_sym_int32] = ACTIONS(243),
    [anon_sym_int64] = ACTIONS(243),
    [anon_sym_int128] = ACTIONS(243),
    [sym_string_type] = ACTIONS(345),
    [sym_bool_type] = ACTIONS(345),
    [sym_bottom_lit] = ACTIONS(347),
    [sym_null_lit] = ACTIONS(345),
    [sym_bool_lit] = ACTIONS(345),
    [sym_int_lit] = ACTIONS(345),
    [sym_float_lit] = ACTIONS(345),
    [anon_sym_LBRACK] = ACTIONS(247),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_BANG_EQ] = ACTIONS(349),
    [anon_sym_LT] = ACTIONS(351),
    [anon_sym_LT_EQ] = ACTIONS(349),
    [anon_sym_GT] = ACTIONS(351),
    [anon_sym_GT_EQ] = ACTIONS(349),
    [anon_sym_EQ_TILDE] = ACTIONS(349),
    [anon_sym_BANG_TILDE] = ACTIONS(349),
    [anon_sym_PLUS] = ACTIONS(349),
    [anon_sym_DASH] = ACTIONS(349),
    [anon_sym_STAR] = ACTIONS(349),
    [anon_sym_BANG] = ACTIONS(351),
    [sym_comment] = ACTIONS(3),
  },
  [44] = {
    [sym__string_lit] = STATE(201),
    [sym_raw_simple_string_lit] = STATE(201),
    [sym_simple_string_lit] = STATE(201),
    [sym_raw_multiline_string_lit] = STATE(201),
    [sym_multiline_string_lit] = STATE(201),
    [sym_builtin] = STATE(201),
    [sym_float_type] = STATE(201),
    [sym_uint_type] = STATE(201),
    [sym_int_type] = STATE(201),
    [sym_top_lit] = STATE(201),
    [sym_list_lit] = STATE(201),
    [sym_struct_lit] = STATE(201),
    [sym__expression] = STATE(204),
    [sym_binary_expression] = STATE(204),
    [sym_unary_expression] = STATE(204),
    [sym__primary_expression] = STATE(201),
    [sym__operand] = STATE(201),
    [sym_index_expression] = STATE(201),
    [sym_selector_expression] = STATE(201),
    [sym_call_expression] = STATE(201),
    [sym__literal] = STATE(201),
    [sym_identifier] = ACTIONS(345),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym__] = ACTIONS(225),
    [anon_sym_POUND_DQUOTE] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(231),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(233),
    [anon_sym_len] = ACTIONS(235),
    [anon_sym_close] = ACTIONS(235),
    [anon_sym_and] = ACTIONS(235),
    [anon_sym_or] = ACTIONS(235),
    [anon_sym_div] = ACTIONS(235),
    [anon_sym_mod] = ACTIONS(235),
    [anon_sym_quo] = ACTIONS(235),
    [anon_sym_rem] = ACTIONS(235),
    [sym_number_type] = ACTIONS(345),
    [anon_sym_float] = ACTIONS(239),
    [anon_sym_float32] = ACTIONS(239),
    [anon_sym_float64] = ACTIONS(239),
    [anon_sym_uint] = ACTIONS(241),
    [anon_sym_uint8] = ACTIONS(241),
    [anon_sym_uint16] = ACTIONS(241),
    [anon_sym_uint32] = ACTIONS(241),
    [anon_sym_uint64] = ACTIONS(241),
    [anon_sym_uint128] = ACTIONS(241),
    [anon_sym_int] = ACTIONS(243),
    [anon_sym_int8] = ACTIONS(243),
    [anon_sym_int16] = ACTIONS(243),
    [anon_sym_int32] = ACTIONS(243),
    [anon_sym_int64] = ACTIONS(243),
    [anon_sym_int128] = ACTIONS(243),
    [sym_string_type] = ACTIONS(345),
    [sym_bool_type] = ACTIONS(345),
    [sym_bottom_lit] = ACTIONS(347),
    [sym_null_lit] = ACTIONS(345),
    [sym_bool_lit] = ACTIONS(345),
    [sym_int_lit] = ACTIONS(345),
    [sym_float_lit] = ACTIONS(345),
    [anon_sym_LBRACK] = ACTIONS(247),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_BANG_EQ] = ACTIONS(349),
    [anon_sym_LT] = ACTIONS(351),
    [anon_sym_LT_EQ] = ACTIONS(349),
    [anon_sym_GT] = ACTIONS(351),
    [anon_sym_GT_EQ] = ACTIONS(349),
    [anon_sym_EQ_TILDE] = ACTIONS(349),
    [anon_sym_BANG_TILDE] = ACTIONS(349),
    [anon_sym_PLUS] = ACTIONS(349),
    [anon_sym_DASH] = ACTIONS(349),
    [anon_sym_STAR] = ACTIONS(349),
    [anon_sym_BANG] = ACTIONS(351),
    [sym_comment] = ACTIONS(3),
  },
  [45] = {
    [sym__string_lit] = STATE(203),
    [sym_raw_simple_string_lit] = STATE(203),
    [sym_simple_string_lit] = STATE(203),
    [sym_raw_multiline_string_lit] = STATE(203),
    [sym_multiline_string_lit] = STATE(203),
    [sym_builtin] = STATE(203),
    [sym_float_type] = STATE(203),
    [sym_uint_type] = STATE(203),
    [sym_int_type] = STATE(203),
    [sym_top_lit] = STATE(203),
    [sym_list_lit] = STATE(203),
    [sym_struct_lit] = STATE(203),
    [sym__expression] = STATE(225),
    [sym_binary_expression] = STATE(225),
    [sym_unary_expression] = STATE(225),
    [sym__primary_expression] = STATE(203),
    [sym__operand] = STATE(203),
    [sym_index_expression] = STATE(203),
    [sym_selector_expression] = STATE(203),
    [sym_call_expression] = STATE(203),
    [sym__literal] = STATE(203),
    [sym_identifier] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym__] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(23),
    [anon_sym_len] = ACTIONS(25),
    [anon_sym_close] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(25),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_div] = ACTIONS(25),
    [anon_sym_mod] = ACTIONS(25),
    [anon_sym_quo] = ACTIONS(25),
    [anon_sym_rem] = ACTIONS(25),
    [sym_number_type] = ACTIONS(27),
    [anon_sym_float] = ACTIONS(29),
    [anon_sym_float32] = ACTIONS(29),
    [anon_sym_float64] = ACTIONS(29),
    [anon_sym_uint] = ACTIONS(31),
    [anon_sym_uint8] = ACTIONS(31),
    [anon_sym_uint16] = ACTIONS(31),
    [anon_sym_uint32] = ACTIONS(31),
    [anon_sym_uint64] = ACTIONS(31),
    [anon_sym_uint128] = ACTIONS(31),
    [anon_sym_int] = ACTIONS(33),
    [anon_sym_int8] = ACTIONS(33),
    [anon_sym_int16] = ACTIONS(33),
    [anon_sym_int32] = ACTIONS(33),
    [anon_sym_int64] = ACTIONS(33),
    [anon_sym_int128] = ACTIONS(33),
    [sym_string_type] = ACTIONS(27),
    [sym_bool_type] = ACTIONS(27),
    [sym_bottom_lit] = ACTIONS(35),
    [sym_null_lit] = ACTIONS(27),
    [sym_bool_lit] = ACTIONS(27),
    [sym_int_lit] = ACTIONS(27),
    [sym_float_lit] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(355),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_EQ_TILDE] = ACTIONS(49),
    [anon_sym_BANG_TILDE] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(49),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_BANG] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
  },
  [46] = {
    [sym__string_lit] = STATE(201),
    [sym_raw_simple_string_lit] = STATE(201),
    [sym_simple_string_lit] = STATE(201),
    [sym_raw_multiline_string_lit] = STATE(201),
    [sym_multiline_string_lit] = STATE(201),
    [sym_builtin] = STATE(201),
    [sym_float_type] = STATE(201),
    [sym_uint_type] = STATE(201),
    [sym_int_type] = STATE(201),
    [sym_top_lit] = STATE(201),
    [sym_list_lit] = STATE(201),
    [sym_struct_lit] = STATE(201),
    [sym__expression] = STATE(228),
    [sym_binary_expression] = STATE(228),
    [sym_unary_expression] = STATE(228),
    [sym__primary_expression] = STATE(201),
    [sym__operand] = STATE(201),
    [sym_index_expression] = STATE(201),
    [sym_selector_expression] = STATE(201),
    [sym_call_expression] = STATE(201),
    [sym__literal] = STATE(201),
    [sym_identifier] = ACTIONS(345),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym__] = ACTIONS(225),
    [anon_sym_POUND_DQUOTE] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(231),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(233),
    [anon_sym_len] = ACTIONS(235),
    [anon_sym_close] = ACTIONS(235),
    [anon_sym_and] = ACTIONS(235),
    [anon_sym_or] = ACTIONS(235),
    [anon_sym_div] = ACTIONS(235),
    [anon_sym_mod] = ACTIONS(235),
    [anon_sym_quo] = ACTIONS(235),
    [anon_sym_rem] = ACTIONS(235),
    [sym_number_type] = ACTIONS(345),
    [anon_sym_float] = ACTIONS(239),
    [anon_sym_float32] = ACTIONS(239),
    [anon_sym_float64] = ACTIONS(239),
    [anon_sym_uint] = ACTIONS(241),
    [anon_sym_uint8] = ACTIONS(241),
    [anon_sym_uint16] = ACTIONS(241),
    [anon_sym_uint32] = ACTIONS(241),
    [anon_sym_uint64] = ACTIONS(241),
    [anon_sym_uint128] = ACTIONS(241),
    [anon_sym_int] = ACTIONS(243),
    [anon_sym_int8] = ACTIONS(243),
    [anon_sym_int16] = ACTIONS(243),
    [anon_sym_int32] = ACTIONS(243),
    [anon_sym_int64] = ACTIONS(243),
    [anon_sym_int128] = ACTIONS(243),
    [sym_string_type] = ACTIONS(345),
    [sym_bool_type] = ACTIONS(345),
    [sym_bottom_lit] = ACTIONS(347),
    [sym_null_lit] = ACTIONS(345),
    [sym_bool_lit] = ACTIONS(345),
    [sym_int_lit] = ACTIONS(345),
    [sym_float_lit] = ACTIONS(345),
    [anon_sym_LBRACK] = ACTIONS(247),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_BANG_EQ] = ACTIONS(349),
    [anon_sym_LT] = ACTIONS(351),
    [anon_sym_LT_EQ] = ACTIONS(349),
    [anon_sym_GT] = ACTIONS(351),
    [anon_sym_GT_EQ] = ACTIONS(349),
    [anon_sym_EQ_TILDE] = ACTIONS(349),
    [anon_sym_BANG_TILDE] = ACTIONS(349),
    [anon_sym_PLUS] = ACTIONS(349),
    [anon_sym_DASH] = ACTIONS(349),
    [anon_sym_STAR] = ACTIONS(349),
    [anon_sym_BANG] = ACTIONS(351),
    [sym_comment] = ACTIONS(3),
  },
  [47] = {
    [sym__string_lit] = STATE(201),
    [sym_raw_simple_string_lit] = STATE(201),
    [sym_simple_string_lit] = STATE(201),
    [sym_raw_multiline_string_lit] = STATE(201),
    [sym_multiline_string_lit] = STATE(201),
    [sym_builtin] = STATE(201),
    [sym_float_type] = STATE(201),
    [sym_uint_type] = STATE(201),
    [sym_int_type] = STATE(201),
    [sym_top_lit] = STATE(201),
    [sym_list_lit] = STATE(201),
    [sym_struct_lit] = STATE(201),
    [sym__expression] = STATE(229),
    [sym_binary_expression] = STATE(229),
    [sym_unary_expression] = STATE(229),
    [sym__primary_expression] = STATE(201),
    [sym__operand] = STATE(201),
    [sym_index_expression] = STATE(201),
    [sym_selector_expression] = STATE(201),
    [sym_call_expression] = STATE(201),
    [sym__literal] = STATE(201),
    [sym_identifier] = ACTIONS(345),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym__] = ACTIONS(225),
    [anon_sym_POUND_DQUOTE] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(231),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(233),
    [anon_sym_len] = ACTIONS(235),
    [anon_sym_close] = ACTIONS(235),
    [anon_sym_and] = ACTIONS(235),
    [anon_sym_or] = ACTIONS(235),
    [anon_sym_div] = ACTIONS(235),
    [anon_sym_mod] = ACTIONS(235),
    [anon_sym_quo] = ACTIONS(235),
    [anon_sym_rem] = ACTIONS(235),
    [sym_number_type] = ACTIONS(345),
    [anon_sym_float] = ACTIONS(239),
    [anon_sym_float32] = ACTIONS(239),
    [anon_sym_float64] = ACTIONS(239),
    [anon_sym_uint] = ACTIONS(241),
    [anon_sym_uint8] = ACTIONS(241),
    [anon_sym_uint16] = ACTIONS(241),
    [anon_sym_uint32] = ACTIONS(241),
    [anon_sym_uint64] = ACTIONS(241),
    [anon_sym_uint128] = ACTIONS(241),
    [anon_sym_int] = ACTIONS(243),
    [anon_sym_int8] = ACTIONS(243),
    [anon_sym_int16] = ACTIONS(243),
    [anon_sym_int32] = ACTIONS(243),
    [anon_sym_int64] = ACTIONS(243),
    [anon_sym_int128] = ACTIONS(243),
    [sym_string_type] = ACTIONS(345),
    [sym_bool_type] = ACTIONS(345),
    [sym_bottom_lit] = ACTIONS(347),
    [sym_null_lit] = ACTIONS(345),
    [sym_bool_lit] = ACTIONS(345),
    [sym_int_lit] = ACTIONS(345),
    [sym_float_lit] = ACTIONS(345),
    [anon_sym_LBRACK] = ACTIONS(247),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_BANG_EQ] = ACTIONS(349),
    [anon_sym_LT] = ACTIONS(351),
    [anon_sym_LT_EQ] = ACTIONS(349),
    [anon_sym_GT] = ACTIONS(351),
    [anon_sym_GT_EQ] = ACTIONS(349),
    [anon_sym_EQ_TILDE] = ACTIONS(349),
    [anon_sym_BANG_TILDE] = ACTIONS(349),
    [anon_sym_PLUS] = ACTIONS(349),
    [anon_sym_DASH] = ACTIONS(349),
    [anon_sym_STAR] = ACTIONS(349),
    [anon_sym_BANG] = ACTIONS(351),
    [sym_comment] = ACTIONS(3),
  },
  [48] = {
    [sym__string_lit] = STATE(201),
    [sym_raw_simple_string_lit] = STATE(201),
    [sym_simple_string_lit] = STATE(201),
    [sym_raw_multiline_string_lit] = STATE(201),
    [sym_multiline_string_lit] = STATE(201),
    [sym_builtin] = STATE(201),
    [sym_float_type] = STATE(201),
    [sym_uint_type] = STATE(201),
    [sym_int_type] = STATE(201),
    [sym_top_lit] = STATE(201),
    [sym_list_lit] = STATE(201),
    [sym_struct_lit] = STATE(201),
    [sym__expression] = STATE(147),
    [sym_binary_expression] = STATE(147),
    [sym_unary_expression] = STATE(147),
    [sym__primary_expression] = STATE(201),
    [sym__operand] = STATE(201),
    [sym_index_expression] = STATE(201),
    [sym_selector_expression] = STATE(201),
    [sym_call_expression] = STATE(201),
    [sym__literal] = STATE(201),
    [sym_identifier] = ACTIONS(345),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym__] = ACTIONS(225),
    [anon_sym_POUND_DQUOTE] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(231),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(233),
    [anon_sym_len] = ACTIONS(235),
    [anon_sym_close] = ACTIONS(235),
    [anon_sym_and] = ACTIONS(235),
    [anon_sym_or] = ACTIONS(235),
    [anon_sym_div] = ACTIONS(235),
    [anon_sym_mod] = ACTIONS(235),
    [anon_sym_quo] = ACTIONS(235),
    [anon_sym_rem] = ACTIONS(235),
    [sym_number_type] = ACTIONS(345),
    [anon_sym_float] = ACTIONS(239),
    [anon_sym_float32] = ACTIONS(239),
    [anon_sym_float64] = ACTIONS(239),
    [anon_sym_uint] = ACTIONS(241),
    [anon_sym_uint8] = ACTIONS(241),
    [anon_sym_uint16] = ACTIONS(241),
    [anon_sym_uint32] = ACTIONS(241),
    [anon_sym_uint64] = ACTIONS(241),
    [anon_sym_uint128] = ACTIONS(241),
    [anon_sym_int] = ACTIONS(243),
    [anon_sym_int8] = ACTIONS(243),
    [anon_sym_int16] = ACTIONS(243),
    [anon_sym_int32] = ACTIONS(243),
    [anon_sym_int64] = ACTIONS(243),
    [anon_sym_int128] = ACTIONS(243),
    [sym_string_type] = ACTIONS(345),
    [sym_bool_type] = ACTIONS(345),
    [sym_bottom_lit] = ACTIONS(347),
    [sym_null_lit] = ACTIONS(345),
    [sym_bool_lit] = ACTIONS(345),
    [sym_int_lit] = ACTIONS(345),
    [sym_float_lit] = ACTIONS(345),
    [anon_sym_LBRACK] = ACTIONS(247),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_BANG_EQ] = ACTIONS(349),
    [anon_sym_LT] = ACTIONS(351),
    [anon_sym_LT_EQ] = ACTIONS(349),
    [anon_sym_GT] = ACTIONS(351),
    [anon_sym_GT_EQ] = ACTIONS(349),
    [anon_sym_EQ_TILDE] = ACTIONS(349),
    [anon_sym_BANG_TILDE] = ACTIONS(349),
    [anon_sym_PLUS] = ACTIONS(349),
    [anon_sym_DASH] = ACTIONS(349),
    [anon_sym_STAR] = ACTIONS(349),
    [anon_sym_BANG] = ACTIONS(351),
    [sym_comment] = ACTIONS(3),
  },
  [49] = {
    [sym__string_lit] = STATE(201),
    [sym_raw_simple_string_lit] = STATE(201),
    [sym_simple_string_lit] = STATE(201),
    [sym_raw_multiline_string_lit] = STATE(201),
    [sym_multiline_string_lit] = STATE(201),
    [sym_builtin] = STATE(201),
    [sym_float_type] = STATE(201),
    [sym_uint_type] = STATE(201),
    [sym_int_type] = STATE(201),
    [sym_top_lit] = STATE(201),
    [sym_list_lit] = STATE(201),
    [sym_struct_lit] = STATE(201),
    [sym__expression] = STATE(211),
    [sym_binary_expression] = STATE(211),
    [sym_unary_expression] = STATE(211),
    [sym__primary_expression] = STATE(201),
    [sym__operand] = STATE(201),
    [sym_index_expression] = STATE(201),
    [sym_selector_expression] = STATE(201),
    [sym_call_expression] = STATE(201),
    [sym__literal] = STATE(201),
    [sym_identifier] = ACTIONS(345),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym__] = ACTIONS(225),
    [anon_sym_POUND_DQUOTE] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(231),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(233),
    [anon_sym_len] = ACTIONS(235),
    [anon_sym_close] = ACTIONS(235),
    [anon_sym_and] = ACTIONS(235),
    [anon_sym_or] = ACTIONS(235),
    [anon_sym_div] = ACTIONS(235),
    [anon_sym_mod] = ACTIONS(235),
    [anon_sym_quo] = ACTIONS(235),
    [anon_sym_rem] = ACTIONS(235),
    [sym_number_type] = ACTIONS(345),
    [anon_sym_float] = ACTIONS(239),
    [anon_sym_float32] = ACTIONS(239),
    [anon_sym_float64] = ACTIONS(239),
    [anon_sym_uint] = ACTIONS(241),
    [anon_sym_uint8] = ACTIONS(241),
    [anon_sym_uint16] = ACTIONS(241),
    [anon_sym_uint32] = ACTIONS(241),
    [anon_sym_uint64] = ACTIONS(241),
    [anon_sym_uint128] = ACTIONS(241),
    [anon_sym_int] = ACTIONS(243),
    [anon_sym_int8] = ACTIONS(243),
    [anon_sym_int16] = ACTIONS(243),
    [anon_sym_int32] = ACTIONS(243),
    [anon_sym_int64] = ACTIONS(243),
    [anon_sym_int128] = ACTIONS(243),
    [sym_string_type] = ACTIONS(345),
    [sym_bool_type] = ACTIONS(345),
    [sym_bottom_lit] = ACTIONS(347),
    [sym_null_lit] = ACTIONS(345),
    [sym_bool_lit] = ACTIONS(345),
    [sym_int_lit] = ACTIONS(345),
    [sym_float_lit] = ACTIONS(345),
    [anon_sym_LBRACK] = ACTIONS(247),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_BANG_EQ] = ACTIONS(349),
    [anon_sym_LT] = ACTIONS(351),
    [anon_sym_LT_EQ] = ACTIONS(349),
    [anon_sym_GT] = ACTIONS(351),
    [anon_sym_GT_EQ] = ACTIONS(349),
    [anon_sym_EQ_TILDE] = ACTIONS(349),
    [anon_sym_BANG_TILDE] = ACTIONS(349),
    [anon_sym_PLUS] = ACTIONS(349),
    [anon_sym_DASH] = ACTIONS(349),
    [anon_sym_STAR] = ACTIONS(349),
    [anon_sym_BANG] = ACTIONS(351),
    [sym_comment] = ACTIONS(3),
  },
  [50] = {
    [sym__string_lit] = STATE(201),
    [sym_raw_simple_string_lit] = STATE(201),
    [sym_simple_string_lit] = STATE(201),
    [sym_raw_multiline_string_lit] = STATE(201),
    [sym_multiline_string_lit] = STATE(201),
    [sym_builtin] = STATE(201),
    [sym_float_type] = STATE(201),
    [sym_uint_type] = STATE(201),
    [sym_int_type] = STATE(201),
    [sym_top_lit] = STATE(201),
    [sym_list_lit] = STATE(201),
    [sym_struct_lit] = STATE(201),
    [sym__expression] = STATE(212),
    [sym_binary_expression] = STATE(212),
    [sym_unary_expression] = STATE(212),
    [sym__primary_expression] = STATE(201),
    [sym__operand] = STATE(201),
    [sym_index_expression] = STATE(201),
    [sym_selector_expression] = STATE(201),
    [sym_call_expression] = STATE(201),
    [sym__literal] = STATE(201),
    [sym_identifier] = ACTIONS(345),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym__] = ACTIONS(225),
    [anon_sym_POUND_DQUOTE] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(231),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(233),
    [anon_sym_len] = ACTIONS(235),
    [anon_sym_close] = ACTIONS(235),
    [anon_sym_and] = ACTIONS(235),
    [anon_sym_or] = ACTIONS(235),
    [anon_sym_div] = ACTIONS(235),
    [anon_sym_mod] = ACTIONS(235),
    [anon_sym_quo] = ACTIONS(235),
    [anon_sym_rem] = ACTIONS(235),
    [sym_number_type] = ACTIONS(345),
    [anon_sym_float] = ACTIONS(239),
    [anon_sym_float32] = ACTIONS(239),
    [anon_sym_float64] = ACTIONS(239),
    [anon_sym_uint] = ACTIONS(241),
    [anon_sym_uint8] = ACTIONS(241),
    [anon_sym_uint16] = ACTIONS(241),
    [anon_sym_uint32] = ACTIONS(241),
    [anon_sym_uint64] = ACTIONS(241),
    [anon_sym_uint128] = ACTIONS(241),
    [anon_sym_int] = ACTIONS(243),
    [anon_sym_int8] = ACTIONS(243),
    [anon_sym_int16] = ACTIONS(243),
    [anon_sym_int32] = ACTIONS(243),
    [anon_sym_int64] = ACTIONS(243),
    [anon_sym_int128] = ACTIONS(243),
    [sym_string_type] = ACTIONS(345),
    [sym_bool_type] = ACTIONS(345),
    [sym_bottom_lit] = ACTIONS(347),
    [sym_null_lit] = ACTIONS(345),
    [sym_bool_lit] = ACTIONS(345),
    [sym_int_lit] = ACTIONS(345),
    [sym_float_lit] = ACTIONS(345),
    [anon_sym_LBRACK] = ACTIONS(247),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_BANG_EQ] = ACTIONS(349),
    [anon_sym_LT] = ACTIONS(351),
    [anon_sym_LT_EQ] = ACTIONS(349),
    [anon_sym_GT] = ACTIONS(351),
    [anon_sym_GT_EQ] = ACTIONS(349),
    [anon_sym_EQ_TILDE] = ACTIONS(349),
    [anon_sym_BANG_TILDE] = ACTIONS(349),
    [anon_sym_PLUS] = ACTIONS(349),
    [anon_sym_DASH] = ACTIONS(349),
    [anon_sym_STAR] = ACTIONS(349),
    [anon_sym_BANG] = ACTIONS(351),
    [sym_comment] = ACTIONS(3),
  },
  [51] = {
    [sym__string_lit] = STATE(203),
    [sym_raw_simple_string_lit] = STATE(203),
    [sym_simple_string_lit] = STATE(203),
    [sym_raw_multiline_string_lit] = STATE(203),
    [sym_multiline_string_lit] = STATE(203),
    [sym_builtin] = STATE(203),
    [sym_float_type] = STATE(203),
    [sym_uint_type] = STATE(203),
    [sym_int_type] = STATE(203),
    [sym_top_lit] = STATE(203),
    [sym_list_lit] = STATE(203),
    [sym_struct_lit] = STATE(203),
    [sym__expression] = STATE(140),
    [sym_binary_expression] = STATE(140),
    [sym_unary_expression] = STATE(140),
    [sym__primary_expression] = STATE(203),
    [sym__operand] = STATE(203),
    [sym_index_expression] = STATE(203),
    [sym_selector_expression] = STATE(203),
    [sym_call_expression] = STATE(203),
    [sym__literal] = STATE(203),
    [sym_identifier] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym__] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(23),
    [anon_sym_len] = ACTIONS(25),
    [anon_sym_close] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(25),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_div] = ACTIONS(25),
    [anon_sym_mod] = ACTIONS(25),
    [anon_sym_quo] = ACTIONS(25),
    [anon_sym_rem] = ACTIONS(25),
    [sym_number_type] = ACTIONS(27),
    [anon_sym_float] = ACTIONS(29),
    [anon_sym_float32] = ACTIONS(29),
    [anon_sym_float64] = ACTIONS(29),
    [anon_sym_uint] = ACTIONS(31),
    [anon_sym_uint8] = ACTIONS(31),
    [anon_sym_uint16] = ACTIONS(31),
    [anon_sym_uint32] = ACTIONS(31),
    [anon_sym_uint64] = ACTIONS(31),
    [anon_sym_uint128] = ACTIONS(31),
    [anon_sym_int] = ACTIONS(33),
    [anon_sym_int8] = ACTIONS(33),
    [anon_sym_int16] = ACTIONS(33),
    [anon_sym_int32] = ACTIONS(33),
    [anon_sym_int64] = ACTIONS(33),
    [anon_sym_int128] = ACTIONS(33),
    [sym_string_type] = ACTIONS(27),
    [sym_bool_type] = ACTIONS(27),
    [sym_bottom_lit] = ACTIONS(35),
    [sym_null_lit] = ACTIONS(27),
    [sym_bool_lit] = ACTIONS(27),
    [sym_int_lit] = ACTIONS(27),
    [sym_float_lit] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(355),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_EQ_TILDE] = ACTIONS(49),
    [anon_sym_BANG_TILDE] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(49),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_BANG] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
  },
  [52] = {
    [sym__string_lit] = STATE(80),
    [sym_raw_simple_string_lit] = STATE(80),
    [sym_simple_string_lit] = STATE(80),
    [sym_raw_multiline_string_lit] = STATE(80),
    [sym_multiline_string_lit] = STATE(80),
    [sym_builtin] = STATE(80),
    [sym_float_type] = STATE(80),
    [sym_uint_type] = STATE(80),
    [sym_int_type] = STATE(80),
    [sym_top_lit] = STATE(80),
    [sym_list_lit] = STATE(80),
    [sym_struct_lit] = STATE(80),
    [sym__expression] = STATE(144),
    [sym_binary_expression] = STATE(144),
    [sym_unary_expression] = STATE(144),
    [sym__primary_expression] = STATE(80),
    [sym__operand] = STATE(80),
    [sym_index_expression] = STATE(80),
    [sym_selector_expression] = STATE(80),
    [sym_call_expression] = STATE(80),
    [sym__literal] = STATE(80),
    [sym_identifier] = ACTIONS(128),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym__] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(23),
    [anon_sym_len] = ACTIONS(25),
    [anon_sym_close] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(25),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_div] = ACTIONS(25),
    [anon_sym_mod] = ACTIONS(25),
    [anon_sym_quo] = ACTIONS(25),
    [anon_sym_rem] = ACTIONS(25),
    [sym_number_type] = ACTIONS(128),
    [anon_sym_float] = ACTIONS(29),
    [anon_sym_float32] = ACTIONS(29),
    [anon_sym_float64] = ACTIONS(29),
    [anon_sym_uint] = ACTIONS(31),
    [anon_sym_uint8] = ACTIONS(31),
    [anon_sym_uint16] = ACTIONS(31),
    [anon_sym_uint32] = ACTIONS(31),
    [anon_sym_uint64] = ACTIONS(31),
    [anon_sym_uint128] = ACTIONS(31),
    [anon_sym_int] = ACTIONS(33),
    [anon_sym_int8] = ACTIONS(33),
    [anon_sym_int16] = ACTIONS(33),
    [anon_sym_int32] = ACTIONS(33),
    [anon_sym_int64] = ACTIONS(33),
    [anon_sym_int128] = ACTIONS(33),
    [sym_string_type] = ACTIONS(128),
    [sym_bool_type] = ACTIONS(128),
    [sym_bottom_lit] = ACTIONS(130),
    [sym_null_lit] = ACTIONS(128),
    [sym_bool_lit] = ACTIONS(128),
    [sym_int_lit] = ACTIONS(128),
    [sym_float_lit] = ACTIONS(128),
    [anon_sym_LBRACK] = ACTIONS(355),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_BANG_EQ] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(140),
    [anon_sym_LT_EQ] = ACTIONS(138),
    [anon_sym_GT] = ACTIONS(140),
    [anon_sym_GT_EQ] = ACTIONS(138),
    [anon_sym_EQ_TILDE] = ACTIONS(138),
    [anon_sym_BANG_TILDE] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(138),
    [anon_sym_STAR] = ACTIONS(138),
    [anon_sym_BANG] = ACTIONS(140),
    [sym_comment] = ACTIONS(3),
  },
  [53] = {
    [sym__string_lit] = STATE(80),
    [sym_raw_simple_string_lit] = STATE(80),
    [sym_simple_string_lit] = STATE(80),
    [sym_raw_multiline_string_lit] = STATE(80),
    [sym_multiline_string_lit] = STATE(80),
    [sym_builtin] = STATE(80),
    [sym_float_type] = STATE(80),
    [sym_uint_type] = STATE(80),
    [sym_int_type] = STATE(80),
    [sym_top_lit] = STATE(80),
    [sym_list_lit] = STATE(80),
    [sym_struct_lit] = STATE(80),
    [sym__expression] = STATE(138),
    [sym_binary_expression] = STATE(138),
    [sym_unary_expression] = STATE(138),
    [sym__primary_expression] = STATE(80),
    [sym__operand] = STATE(80),
    [sym_index_expression] = STATE(80),
    [sym_selector_expression] = STATE(80),
    [sym_call_expression] = STATE(80),
    [sym__literal] = STATE(80),
    [sym_identifier] = ACTIONS(128),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym__] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(23),
    [anon_sym_len] = ACTIONS(25),
    [anon_sym_close] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(25),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_div] = ACTIONS(25),
    [anon_sym_mod] = ACTIONS(25),
    [anon_sym_quo] = ACTIONS(25),
    [anon_sym_rem] = ACTIONS(25),
    [sym_number_type] = ACTIONS(128),
    [anon_sym_float] = ACTIONS(29),
    [anon_sym_float32] = ACTIONS(29),
    [anon_sym_float64] = ACTIONS(29),
    [anon_sym_uint] = ACTIONS(31),
    [anon_sym_uint8] = ACTIONS(31),
    [anon_sym_uint16] = ACTIONS(31),
    [anon_sym_uint32] = ACTIONS(31),
    [anon_sym_uint64] = ACTIONS(31),
    [anon_sym_uint128] = ACTIONS(31),
    [anon_sym_int] = ACTIONS(33),
    [anon_sym_int8] = ACTIONS(33),
    [anon_sym_int16] = ACTIONS(33),
    [anon_sym_int32] = ACTIONS(33),
    [anon_sym_int64] = ACTIONS(33),
    [anon_sym_int128] = ACTIONS(33),
    [sym_string_type] = ACTIONS(128),
    [sym_bool_type] = ACTIONS(128),
    [sym_bottom_lit] = ACTIONS(130),
    [sym_null_lit] = ACTIONS(128),
    [sym_bool_lit] = ACTIONS(128),
    [sym_int_lit] = ACTIONS(128),
    [sym_float_lit] = ACTIONS(128),
    [anon_sym_LBRACK] = ACTIONS(355),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_BANG_EQ] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(140),
    [anon_sym_LT_EQ] = ACTIONS(138),
    [anon_sym_GT] = ACTIONS(140),
    [anon_sym_GT_EQ] = ACTIONS(138),
    [anon_sym_EQ_TILDE] = ACTIONS(138),
    [anon_sym_BANG_TILDE] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(138),
    [anon_sym_STAR] = ACTIONS(138),
    [anon_sym_BANG] = ACTIONS(140),
    [sym_comment] = ACTIONS(3),
  },
  [54] = {
    [sym__string_lit] = STATE(80),
    [sym_raw_simple_string_lit] = STATE(80),
    [sym_simple_string_lit] = STATE(80),
    [sym_raw_multiline_string_lit] = STATE(80),
    [sym_multiline_string_lit] = STATE(80),
    [sym_builtin] = STATE(80),
    [sym_float_type] = STATE(80),
    [sym_uint_type] = STATE(80),
    [sym_int_type] = STATE(80),
    [sym_top_lit] = STATE(80),
    [sym_list_lit] = STATE(80),
    [sym_struct_lit] = STATE(80),
    [sym__expression] = STATE(143),
    [sym_binary_expression] = STATE(143),
    [sym_unary_expression] = STATE(143),
    [sym__primary_expression] = STATE(80),
    [sym__operand] = STATE(80),
    [sym_index_expression] = STATE(80),
    [sym_selector_expression] = STATE(80),
    [sym_call_expression] = STATE(80),
    [sym__literal] = STATE(80),
    [sym_identifier] = ACTIONS(128),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym__] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(23),
    [anon_sym_len] = ACTIONS(25),
    [anon_sym_close] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(25),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_div] = ACTIONS(25),
    [anon_sym_mod] = ACTIONS(25),
    [anon_sym_quo] = ACTIONS(25),
    [anon_sym_rem] = ACTIONS(25),
    [sym_number_type] = ACTIONS(128),
    [anon_sym_float] = ACTIONS(29),
    [anon_sym_float32] = ACTIONS(29),
    [anon_sym_float64] = ACTIONS(29),
    [anon_sym_uint] = ACTIONS(31),
    [anon_sym_uint8] = ACTIONS(31),
    [anon_sym_uint16] = ACTIONS(31),
    [anon_sym_uint32] = ACTIONS(31),
    [anon_sym_uint64] = ACTIONS(31),
    [anon_sym_uint128] = ACTIONS(31),
    [anon_sym_int] = ACTIONS(33),
    [anon_sym_int8] = ACTIONS(33),
    [anon_sym_int16] = ACTIONS(33),
    [anon_sym_int32] = ACTIONS(33),
    [anon_sym_int64] = ACTIONS(33),
    [anon_sym_int128] = ACTIONS(33),
    [sym_string_type] = ACTIONS(128),
    [sym_bool_type] = ACTIONS(128),
    [sym_bottom_lit] = ACTIONS(130),
    [sym_null_lit] = ACTIONS(128),
    [sym_bool_lit] = ACTIONS(128),
    [sym_int_lit] = ACTIONS(128),
    [sym_float_lit] = ACTIONS(128),
    [anon_sym_LBRACK] = ACTIONS(355),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_BANG_EQ] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(140),
    [anon_sym_LT_EQ] = ACTIONS(138),
    [anon_sym_GT] = ACTIONS(140),
    [anon_sym_GT_EQ] = ACTIONS(138),
    [anon_sym_EQ_TILDE] = ACTIONS(138),
    [anon_sym_BANG_TILDE] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(138),
    [anon_sym_STAR] = ACTIONS(138),
    [anon_sym_BANG] = ACTIONS(140),
    [sym_comment] = ACTIONS(3),
  },
  [55] = {
    [sym__string_lit] = STATE(201),
    [sym_raw_simple_string_lit] = STATE(201),
    [sym_simple_string_lit] = STATE(201),
    [sym_raw_multiline_string_lit] = STATE(201),
    [sym_multiline_string_lit] = STATE(201),
    [sym_builtin] = STATE(201),
    [sym_float_type] = STATE(201),
    [sym_uint_type] = STATE(201),
    [sym_int_type] = STATE(201),
    [sym_top_lit] = STATE(201),
    [sym_list_lit] = STATE(201),
    [sym_struct_lit] = STATE(201),
    [sym__expression] = STATE(232),
    [sym_binary_expression] = STATE(232),
    [sym_unary_expression] = STATE(232),
    [sym__primary_expression] = STATE(201),
    [sym__operand] = STATE(201),
    [sym_index_expression] = STATE(201),
    [sym_selector_expression] = STATE(201),
    [sym_call_expression] = STATE(201),
    [sym__literal] = STATE(201),
    [sym_identifier] = ACTIONS(345),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym__] = ACTIONS(225),
    [anon_sym_POUND_DQUOTE] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(231),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(233),
    [anon_sym_len] = ACTIONS(235),
    [anon_sym_close] = ACTIONS(235),
    [anon_sym_and] = ACTIONS(235),
    [anon_sym_or] = ACTIONS(235),
    [anon_sym_div] = ACTIONS(235),
    [anon_sym_mod] = ACTIONS(235),
    [anon_sym_quo] = ACTIONS(235),
    [anon_sym_rem] = ACTIONS(235),
    [sym_number_type] = ACTIONS(345),
    [anon_sym_float] = ACTIONS(239),
    [anon_sym_float32] = ACTIONS(239),
    [anon_sym_float64] = ACTIONS(239),
    [anon_sym_uint] = ACTIONS(241),
    [anon_sym_uint8] = ACTIONS(241),
    [anon_sym_uint16] = ACTIONS(241),
    [anon_sym_uint32] = ACTIONS(241),
    [anon_sym_uint64] = ACTIONS(241),
    [anon_sym_uint128] = ACTIONS(241),
    [anon_sym_int] = ACTIONS(243),
    [anon_sym_int8] = ACTIONS(243),
    [anon_sym_int16] = ACTIONS(243),
    [anon_sym_int32] = ACTIONS(243),
    [anon_sym_int64] = ACTIONS(243),
    [anon_sym_int128] = ACTIONS(243),
    [sym_string_type] = ACTIONS(345),
    [sym_bool_type] = ACTIONS(345),
    [sym_bottom_lit] = ACTIONS(347),
    [sym_null_lit] = ACTIONS(345),
    [sym_bool_lit] = ACTIONS(345),
    [sym_int_lit] = ACTIONS(345),
    [sym_float_lit] = ACTIONS(345),
    [anon_sym_LBRACK] = ACTIONS(247),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_BANG_EQ] = ACTIONS(349),
    [anon_sym_LT] = ACTIONS(351),
    [anon_sym_LT_EQ] = ACTIONS(349),
    [anon_sym_GT] = ACTIONS(351),
    [anon_sym_GT_EQ] = ACTIONS(349),
    [anon_sym_EQ_TILDE] = ACTIONS(349),
    [anon_sym_BANG_TILDE] = ACTIONS(349),
    [anon_sym_PLUS] = ACTIONS(349),
    [anon_sym_DASH] = ACTIONS(349),
    [anon_sym_STAR] = ACTIONS(349),
    [anon_sym_BANG] = ACTIONS(351),
    [sym_comment] = ACTIONS(3),
  },
  [56] = {
    [sym__string_lit] = STATE(80),
    [sym_raw_simple_string_lit] = STATE(80),
    [sym_simple_string_lit] = STATE(80),
    [sym_raw_multiline_string_lit] = STATE(80),
    [sym_multiline_string_lit] = STATE(80),
    [sym_builtin] = STATE(80),
    [sym_float_type] = STATE(80),
    [sym_uint_type] = STATE(80),
    [sym_int_type] = STATE(80),
    [sym_top_lit] = STATE(80),
    [sym_list_lit] = STATE(80),
    [sym_struct_lit] = STATE(80),
    [sym__expression] = STATE(135),
    [sym_binary_expression] = STATE(135),
    [sym_unary_expression] = STATE(135),
    [sym__primary_expression] = STATE(80),
    [sym__operand] = STATE(80),
    [sym_index_expression] = STATE(80),
    [sym_selector_expression] = STATE(80),
    [sym_call_expression] = STATE(80),
    [sym__literal] = STATE(80),
    [sym_identifier] = ACTIONS(128),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym__] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(23),
    [anon_sym_len] = ACTIONS(25),
    [anon_sym_close] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(25),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_div] = ACTIONS(25),
    [anon_sym_mod] = ACTIONS(25),
    [anon_sym_quo] = ACTIONS(25),
    [anon_sym_rem] = ACTIONS(25),
    [sym_number_type] = ACTIONS(128),
    [anon_sym_float] = ACTIONS(29),
    [anon_sym_float32] = ACTIONS(29),
    [anon_sym_float64] = ACTIONS(29),
    [anon_sym_uint] = ACTIONS(31),
    [anon_sym_uint8] = ACTIONS(31),
    [anon_sym_uint16] = ACTIONS(31),
    [anon_sym_uint32] = ACTIONS(31),
    [anon_sym_uint64] = ACTIONS(31),
    [anon_sym_uint128] = ACTIONS(31),
    [anon_sym_int] = ACTIONS(33),
    [anon_sym_int8] = ACTIONS(33),
    [anon_sym_int16] = ACTIONS(33),
    [anon_sym_int32] = ACTIONS(33),
    [anon_sym_int64] = ACTIONS(33),
    [anon_sym_int128] = ACTIONS(33),
    [sym_string_type] = ACTIONS(128),
    [sym_bool_type] = ACTIONS(128),
    [sym_bottom_lit] = ACTIONS(130),
    [sym_null_lit] = ACTIONS(128),
    [sym_bool_lit] = ACTIONS(128),
    [sym_int_lit] = ACTIONS(128),
    [sym_float_lit] = ACTIONS(128),
    [anon_sym_LBRACK] = ACTIONS(355),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_BANG_EQ] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(140),
    [anon_sym_LT_EQ] = ACTIONS(138),
    [anon_sym_GT] = ACTIONS(140),
    [anon_sym_GT_EQ] = ACTIONS(138),
    [anon_sym_EQ_TILDE] = ACTIONS(138),
    [anon_sym_BANG_TILDE] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(138),
    [anon_sym_STAR] = ACTIONS(138),
    [anon_sym_BANG] = ACTIONS(140),
    [sym_comment] = ACTIONS(3),
  },
  [57] = {
    [sym__string_lit] = STATE(80),
    [sym_raw_simple_string_lit] = STATE(80),
    [sym_simple_string_lit] = STATE(80),
    [sym_raw_multiline_string_lit] = STATE(80),
    [sym_multiline_string_lit] = STATE(80),
    [sym_builtin] = STATE(80),
    [sym_float_type] = STATE(80),
    [sym_uint_type] = STATE(80),
    [sym_int_type] = STATE(80),
    [sym_top_lit] = STATE(80),
    [sym_list_lit] = STATE(80),
    [sym_struct_lit] = STATE(80),
    [sym__expression] = STATE(148),
    [sym_binary_expression] = STATE(148),
    [sym_unary_expression] = STATE(148),
    [sym__primary_expression] = STATE(80),
    [sym__operand] = STATE(80),
    [sym_index_expression] = STATE(80),
    [sym_selector_expression] = STATE(80),
    [sym_call_expression] = STATE(80),
    [sym__literal] = STATE(80),
    [sym_identifier] = ACTIONS(128),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym__] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(23),
    [anon_sym_len] = ACTIONS(25),
    [anon_sym_close] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(25),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_div] = ACTIONS(25),
    [anon_sym_mod] = ACTIONS(25),
    [anon_sym_quo] = ACTIONS(25),
    [anon_sym_rem] = ACTIONS(25),
    [sym_number_type] = ACTIONS(128),
    [anon_sym_float] = ACTIONS(29),
    [anon_sym_float32] = ACTIONS(29),
    [anon_sym_float64] = ACTIONS(29),
    [anon_sym_uint] = ACTIONS(31),
    [anon_sym_uint8] = ACTIONS(31),
    [anon_sym_uint16] = ACTIONS(31),
    [anon_sym_uint32] = ACTIONS(31),
    [anon_sym_uint64] = ACTIONS(31),
    [anon_sym_uint128] = ACTIONS(31),
    [anon_sym_int] = ACTIONS(33),
    [anon_sym_int8] = ACTIONS(33),
    [anon_sym_int16] = ACTIONS(33),
    [anon_sym_int32] = ACTIONS(33),
    [anon_sym_int64] = ACTIONS(33),
    [anon_sym_int128] = ACTIONS(33),
    [sym_string_type] = ACTIONS(128),
    [sym_bool_type] = ACTIONS(128),
    [sym_bottom_lit] = ACTIONS(130),
    [sym_null_lit] = ACTIONS(128),
    [sym_bool_lit] = ACTIONS(128),
    [sym_int_lit] = ACTIONS(128),
    [sym_float_lit] = ACTIONS(128),
    [anon_sym_LBRACK] = ACTIONS(355),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_BANG_EQ] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(140),
    [anon_sym_LT_EQ] = ACTIONS(138),
    [anon_sym_GT] = ACTIONS(140),
    [anon_sym_GT_EQ] = ACTIONS(138),
    [anon_sym_EQ_TILDE] = ACTIONS(138),
    [anon_sym_BANG_TILDE] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(138),
    [anon_sym_STAR] = ACTIONS(138),
    [anon_sym_BANG] = ACTIONS(140),
    [sym_comment] = ACTIONS(3),
  },
  [58] = {
    [sym__string_lit] = STATE(80),
    [sym_raw_simple_string_lit] = STATE(80),
    [sym_simple_string_lit] = STATE(80),
    [sym_raw_multiline_string_lit] = STATE(80),
    [sym_multiline_string_lit] = STATE(80),
    [sym_builtin] = STATE(80),
    [sym_float_type] = STATE(80),
    [sym_uint_type] = STATE(80),
    [sym_int_type] = STATE(80),
    [sym_top_lit] = STATE(80),
    [sym_list_lit] = STATE(80),
    [sym_struct_lit] = STATE(80),
    [sym__expression] = STATE(139),
    [sym_binary_expression] = STATE(139),
    [sym_unary_expression] = STATE(139),
    [sym__primary_expression] = STATE(80),
    [sym__operand] = STATE(80),
    [sym_index_expression] = STATE(80),
    [sym_selector_expression] = STATE(80),
    [sym_call_expression] = STATE(80),
    [sym__literal] = STATE(80),
    [sym_identifier] = ACTIONS(128),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym__] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(23),
    [anon_sym_len] = ACTIONS(25),
    [anon_sym_close] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(25),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_div] = ACTIONS(25),
    [anon_sym_mod] = ACTIONS(25),
    [anon_sym_quo] = ACTIONS(25),
    [anon_sym_rem] = ACTIONS(25),
    [sym_number_type] = ACTIONS(128),
    [anon_sym_float] = ACTIONS(29),
    [anon_sym_float32] = ACTIONS(29),
    [anon_sym_float64] = ACTIONS(29),
    [anon_sym_uint] = ACTIONS(31),
    [anon_sym_uint8] = ACTIONS(31),
    [anon_sym_uint16] = ACTIONS(31),
    [anon_sym_uint32] = ACTIONS(31),
    [anon_sym_uint64] = ACTIONS(31),
    [anon_sym_uint128] = ACTIONS(31),
    [anon_sym_int] = ACTIONS(33),
    [anon_sym_int8] = ACTIONS(33),
    [anon_sym_int16] = ACTIONS(33),
    [anon_sym_int32] = ACTIONS(33),
    [anon_sym_int64] = ACTIONS(33),
    [anon_sym_int128] = ACTIONS(33),
    [sym_string_type] = ACTIONS(128),
    [sym_bool_type] = ACTIONS(128),
    [sym_bottom_lit] = ACTIONS(130),
    [sym_null_lit] = ACTIONS(128),
    [sym_bool_lit] = ACTIONS(128),
    [sym_int_lit] = ACTIONS(128),
    [sym_float_lit] = ACTIONS(128),
    [anon_sym_LBRACK] = ACTIONS(355),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_BANG_EQ] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(140),
    [anon_sym_LT_EQ] = ACTIONS(138),
    [anon_sym_GT] = ACTIONS(140),
    [anon_sym_GT_EQ] = ACTIONS(138),
    [anon_sym_EQ_TILDE] = ACTIONS(138),
    [anon_sym_BANG_TILDE] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(138),
    [anon_sym_STAR] = ACTIONS(138),
    [anon_sym_BANG] = ACTIONS(140),
    [sym_comment] = ACTIONS(3),
  },
  [59] = {
    [sym__string_lit] = STATE(80),
    [sym_raw_simple_string_lit] = STATE(80),
    [sym_simple_string_lit] = STATE(80),
    [sym_raw_multiline_string_lit] = STATE(80),
    [sym_multiline_string_lit] = STATE(80),
    [sym_builtin] = STATE(80),
    [sym_float_type] = STATE(80),
    [sym_uint_type] = STATE(80),
    [sym_int_type] = STATE(80),
    [sym_top_lit] = STATE(80),
    [sym_list_lit] = STATE(80),
    [sym_struct_lit] = STATE(80),
    [sym__expression] = STATE(137),
    [sym_binary_expression] = STATE(137),
    [sym_unary_expression] = STATE(137),
    [sym__primary_expression] = STATE(80),
    [sym__operand] = STATE(80),
    [sym_index_expression] = STATE(80),
    [sym_selector_expression] = STATE(80),
    [sym_call_expression] = STATE(80),
    [sym__literal] = STATE(80),
    [sym_identifier] = ACTIONS(128),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym__] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(23),
    [anon_sym_len] = ACTIONS(25),
    [anon_sym_close] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(25),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_div] = ACTIONS(25),
    [anon_sym_mod] = ACTIONS(25),
    [anon_sym_quo] = ACTIONS(25),
    [anon_sym_rem] = ACTIONS(25),
    [sym_number_type] = ACTIONS(128),
    [anon_sym_float] = ACTIONS(29),
    [anon_sym_float32] = ACTIONS(29),
    [anon_sym_float64] = ACTIONS(29),
    [anon_sym_uint] = ACTIONS(31),
    [anon_sym_uint8] = ACTIONS(31),
    [anon_sym_uint16] = ACTIONS(31),
    [anon_sym_uint32] = ACTIONS(31),
    [anon_sym_uint64] = ACTIONS(31),
    [anon_sym_uint128] = ACTIONS(31),
    [anon_sym_int] = ACTIONS(33),
    [anon_sym_int8] = ACTIONS(33),
    [anon_sym_int16] = ACTIONS(33),
    [anon_sym_int32] = ACTIONS(33),
    [anon_sym_int64] = ACTIONS(33),
    [anon_sym_int128] = ACTIONS(33),
    [sym_string_type] = ACTIONS(128),
    [sym_bool_type] = ACTIONS(128),
    [sym_bottom_lit] = ACTIONS(130),
    [sym_null_lit] = ACTIONS(128),
    [sym_bool_lit] = ACTIONS(128),
    [sym_int_lit] = ACTIONS(128),
    [sym_float_lit] = ACTIONS(128),
    [anon_sym_LBRACK] = ACTIONS(355),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_BANG_EQ] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(140),
    [anon_sym_LT_EQ] = ACTIONS(138),
    [anon_sym_GT] = ACTIONS(140),
    [anon_sym_GT_EQ] = ACTIONS(138),
    [anon_sym_EQ_TILDE] = ACTIONS(138),
    [anon_sym_BANG_TILDE] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(138),
    [anon_sym_STAR] = ACTIONS(138),
    [anon_sym_BANG] = ACTIONS(140),
    [sym_comment] = ACTIONS(3),
  },
  [60] = {
    [sym__string_lit] = STATE(80),
    [sym_raw_simple_string_lit] = STATE(80),
    [sym_simple_string_lit] = STATE(80),
    [sym_raw_multiline_string_lit] = STATE(80),
    [sym_multiline_string_lit] = STATE(80),
    [sym_builtin] = STATE(80),
    [sym_float_type] = STATE(80),
    [sym_uint_type] = STATE(80),
    [sym_int_type] = STATE(80),
    [sym_top_lit] = STATE(80),
    [sym_list_lit] = STATE(80),
    [sym_struct_lit] = STATE(80),
    [sym__expression] = STATE(141),
    [sym_binary_expression] = STATE(141),
    [sym_unary_expression] = STATE(141),
    [sym__primary_expression] = STATE(80),
    [sym__operand] = STATE(80),
    [sym_index_expression] = STATE(80),
    [sym_selector_expression] = STATE(80),
    [sym_call_expression] = STATE(80),
    [sym__literal] = STATE(80),
    [sym_identifier] = ACTIONS(128),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym__] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(23),
    [anon_sym_len] = ACTIONS(25),
    [anon_sym_close] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(25),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_div] = ACTIONS(25),
    [anon_sym_mod] = ACTIONS(25),
    [anon_sym_quo] = ACTIONS(25),
    [anon_sym_rem] = ACTIONS(25),
    [sym_number_type] = ACTIONS(128),
    [anon_sym_float] = ACTIONS(29),
    [anon_sym_float32] = ACTIONS(29),
    [anon_sym_float64] = ACTIONS(29),
    [anon_sym_uint] = ACTIONS(31),
    [anon_sym_uint8] = ACTIONS(31),
    [anon_sym_uint16] = ACTIONS(31),
    [anon_sym_uint32] = ACTIONS(31),
    [anon_sym_uint64] = ACTIONS(31),
    [anon_sym_uint128] = ACTIONS(31),
    [anon_sym_int] = ACTIONS(33),
    [anon_sym_int8] = ACTIONS(33),
    [anon_sym_int16] = ACTIONS(33),
    [anon_sym_int32] = ACTIONS(33),
    [anon_sym_int64] = ACTIONS(33),
    [anon_sym_int128] = ACTIONS(33),
    [sym_string_type] = ACTIONS(128),
    [sym_bool_type] = ACTIONS(128),
    [sym_bottom_lit] = ACTIONS(130),
    [sym_null_lit] = ACTIONS(128),
    [sym_bool_lit] = ACTIONS(128),
    [sym_int_lit] = ACTIONS(128),
    [sym_float_lit] = ACTIONS(128),
    [anon_sym_LBRACK] = ACTIONS(355),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_BANG_EQ] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(140),
    [anon_sym_LT_EQ] = ACTIONS(138),
    [anon_sym_GT] = ACTIONS(140),
    [anon_sym_GT_EQ] = ACTIONS(138),
    [anon_sym_EQ_TILDE] = ACTIONS(138),
    [anon_sym_BANG_TILDE] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(138),
    [anon_sym_STAR] = ACTIONS(138),
    [anon_sym_BANG] = ACTIONS(140),
    [sym_comment] = ACTIONS(3),
  },
  [61] = {
    [sym__string_lit] = STATE(203),
    [sym_raw_simple_string_lit] = STATE(203),
    [sym_simple_string_lit] = STATE(203),
    [sym_raw_multiline_string_lit] = STATE(203),
    [sym_multiline_string_lit] = STATE(203),
    [sym_builtin] = STATE(203),
    [sym_float_type] = STATE(203),
    [sym_uint_type] = STATE(203),
    [sym_int_type] = STATE(203),
    [sym_top_lit] = STATE(203),
    [sym_list_lit] = STATE(203),
    [sym_struct_lit] = STATE(203),
    [sym__expression] = STATE(224),
    [sym_binary_expression] = STATE(224),
    [sym_unary_expression] = STATE(224),
    [sym__primary_expression] = STATE(203),
    [sym__operand] = STATE(203),
    [sym_index_expression] = STATE(203),
    [sym_selector_expression] = STATE(203),
    [sym_call_expression] = STATE(203),
    [sym__literal] = STATE(203),
    [sym_identifier] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym__] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(23),
    [anon_sym_len] = ACTIONS(25),
    [anon_sym_close] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(25),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_div] = ACTIONS(25),
    [anon_sym_mod] = ACTIONS(25),
    [anon_sym_quo] = ACTIONS(25),
    [anon_sym_rem] = ACTIONS(25),
    [sym_number_type] = ACTIONS(27),
    [anon_sym_float] = ACTIONS(29),
    [anon_sym_float32] = ACTIONS(29),
    [anon_sym_float64] = ACTIONS(29),
    [anon_sym_uint] = ACTIONS(31),
    [anon_sym_uint8] = ACTIONS(31),
    [anon_sym_uint16] = ACTIONS(31),
    [anon_sym_uint32] = ACTIONS(31),
    [anon_sym_uint64] = ACTIONS(31),
    [anon_sym_uint128] = ACTIONS(31),
    [anon_sym_int] = ACTIONS(33),
    [anon_sym_int8] = ACTIONS(33),
    [anon_sym_int16] = ACTIONS(33),
    [anon_sym_int32] = ACTIONS(33),
    [anon_sym_int64] = ACTIONS(33),
    [anon_sym_int128] = ACTIONS(33),
    [sym_string_type] = ACTIONS(27),
    [sym_bool_type] = ACTIONS(27),
    [sym_bottom_lit] = ACTIONS(35),
    [sym_null_lit] = ACTIONS(27),
    [sym_bool_lit] = ACTIONS(27),
    [sym_int_lit] = ACTIONS(27),
    [sym_float_lit] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(355),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_EQ_TILDE] = ACTIONS(49),
    [anon_sym_BANG_TILDE] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(49),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_BANG] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
  },
  [62] = {
    [sym__string_lit] = STATE(201),
    [sym_raw_simple_string_lit] = STATE(201),
    [sym_simple_string_lit] = STATE(201),
    [sym_raw_multiline_string_lit] = STATE(201),
    [sym_multiline_string_lit] = STATE(201),
    [sym_builtin] = STATE(201),
    [sym_float_type] = STATE(201),
    [sym_uint_type] = STATE(201),
    [sym_int_type] = STATE(201),
    [sym_top_lit] = STATE(201),
    [sym_list_lit] = STATE(201),
    [sym_struct_lit] = STATE(201),
    [sym__expression] = STATE(213),
    [sym_binary_expression] = STATE(213),
    [sym_unary_expression] = STATE(213),
    [sym__primary_expression] = STATE(201),
    [sym__operand] = STATE(201),
    [sym_index_expression] = STATE(201),
    [sym_selector_expression] = STATE(201),
    [sym_call_expression] = STATE(201),
    [sym__literal] = STATE(201),
    [sym_identifier] = ACTIONS(345),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym__] = ACTIONS(225),
    [anon_sym_POUND_DQUOTE] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(231),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(233),
    [anon_sym_len] = ACTIONS(235),
    [anon_sym_close] = ACTIONS(235),
    [anon_sym_and] = ACTIONS(235),
    [anon_sym_or] = ACTIONS(235),
    [anon_sym_div] = ACTIONS(235),
    [anon_sym_mod] = ACTIONS(235),
    [anon_sym_quo] = ACTIONS(235),
    [anon_sym_rem] = ACTIONS(235),
    [sym_number_type] = ACTIONS(345),
    [anon_sym_float] = ACTIONS(239),
    [anon_sym_float32] = ACTIONS(239),
    [anon_sym_float64] = ACTIONS(239),
    [anon_sym_uint] = ACTIONS(241),
    [anon_sym_uint8] = ACTIONS(241),
    [anon_sym_uint16] = ACTIONS(241),
    [anon_sym_uint32] = ACTIONS(241),
    [anon_sym_uint64] = ACTIONS(241),
    [anon_sym_uint128] = ACTIONS(241),
    [anon_sym_int] = ACTIONS(243),
    [anon_sym_int8] = ACTIONS(243),
    [anon_sym_int16] = ACTIONS(243),
    [anon_sym_int32] = ACTIONS(243),
    [anon_sym_int64] = ACTIONS(243),
    [anon_sym_int128] = ACTIONS(243),
    [sym_string_type] = ACTIONS(345),
    [sym_bool_type] = ACTIONS(345),
    [sym_bottom_lit] = ACTIONS(347),
    [sym_null_lit] = ACTIONS(345),
    [sym_bool_lit] = ACTIONS(345),
    [sym_int_lit] = ACTIONS(345),
    [sym_float_lit] = ACTIONS(345),
    [anon_sym_LBRACK] = ACTIONS(247),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_BANG_EQ] = ACTIONS(349),
    [anon_sym_LT] = ACTIONS(351),
    [anon_sym_LT_EQ] = ACTIONS(349),
    [anon_sym_GT] = ACTIONS(351),
    [anon_sym_GT_EQ] = ACTIONS(349),
    [anon_sym_EQ_TILDE] = ACTIONS(349),
    [anon_sym_BANG_TILDE] = ACTIONS(349),
    [anon_sym_PLUS] = ACTIONS(349),
    [anon_sym_DASH] = ACTIONS(349),
    [anon_sym_STAR] = ACTIONS(349),
    [anon_sym_BANG] = ACTIONS(351),
    [sym_comment] = ACTIONS(3),
  },
  [63] = {
    [sym__string_lit] = STATE(87),
    [sym_raw_simple_string_lit] = STATE(87),
    [sym_simple_string_lit] = STATE(87),
    [sym_raw_multiline_string_lit] = STATE(87),
    [sym_multiline_string_lit] = STATE(87),
    [sym_builtin] = STATE(87),
    [sym_float_type] = STATE(87),
    [sym_uint_type] = STATE(87),
    [sym_int_type] = STATE(87),
    [sym_top_lit] = STATE(87),
    [sym_list_lit] = STATE(87),
    [sym_struct_lit] = STATE(87),
    [sym__expression] = STATE(152),
    [sym_binary_expression] = STATE(152),
    [sym_unary_expression] = STATE(152),
    [sym__primary_expression] = STATE(87),
    [sym__operand] = STATE(87),
    [sym_index_expression] = STATE(87),
    [sym_selector_expression] = STATE(87),
    [sym_call_expression] = STATE(87),
    [sym__literal] = STATE(87),
    [sym_identifier] = ACTIONS(237),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym__] = ACTIONS(225),
    [anon_sym_POUND_DQUOTE] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(231),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(233),
    [anon_sym_len] = ACTIONS(235),
    [anon_sym_close] = ACTIONS(235),
    [anon_sym_and] = ACTIONS(235),
    [anon_sym_or] = ACTIONS(235),
    [anon_sym_div] = ACTIONS(235),
    [anon_sym_mod] = ACTIONS(235),
    [anon_sym_quo] = ACTIONS(235),
    [anon_sym_rem] = ACTIONS(235),
    [sym_number_type] = ACTIONS(237),
    [anon_sym_float] = ACTIONS(239),
    [anon_sym_float32] = ACTIONS(239),
    [anon_sym_float64] = ACTIONS(239),
    [anon_sym_uint] = ACTIONS(241),
    [anon_sym_uint8] = ACTIONS(241),
    [anon_sym_uint16] = ACTIONS(241),
    [anon_sym_uint32] = ACTIONS(241),
    [anon_sym_uint64] = ACTIONS(241),
    [anon_sym_uint128] = ACTIONS(241),
    [anon_sym_int] = ACTIONS(243),
    [anon_sym_int8] = ACTIONS(243),
    [anon_sym_int16] = ACTIONS(243),
    [anon_sym_int32] = ACTIONS(243),
    [anon_sym_int64] = ACTIONS(243),
    [anon_sym_int128] = ACTIONS(243),
    [sym_string_type] = ACTIONS(237),
    [sym_bool_type] = ACTIONS(237),
    [sym_bottom_lit] = ACTIONS(245),
    [sym_null_lit] = ACTIONS(237),
    [sym_bool_lit] = ACTIONS(237),
    [sym_int_lit] = ACTIONS(237),
    [sym_float_lit] = ACTIONS(237),
    [anon_sym_LBRACK] = ACTIONS(247),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_BANG_EQ] = ACTIONS(255),
    [anon_sym_LT] = ACTIONS(257),
    [anon_sym_LT_EQ] = ACTIONS(255),
    [anon_sym_GT] = ACTIONS(257),
    [anon_sym_GT_EQ] = ACTIONS(255),
    [anon_sym_EQ_TILDE] = ACTIONS(255),
    [anon_sym_BANG_TILDE] = ACTIONS(255),
    [anon_sym_PLUS] = ACTIONS(255),
    [anon_sym_DASH] = ACTIONS(255),
    [anon_sym_STAR] = ACTIONS(255),
    [anon_sym_BANG] = ACTIONS(257),
    [sym_comment] = ACTIONS(3),
  },
  [64] = {
    [sym__string_lit] = STATE(87),
    [sym_raw_simple_string_lit] = STATE(87),
    [sym_simple_string_lit] = STATE(87),
    [sym_raw_multiline_string_lit] = STATE(87),
    [sym_multiline_string_lit] = STATE(87),
    [sym_builtin] = STATE(87),
    [sym_float_type] = STATE(87),
    [sym_uint_type] = STATE(87),
    [sym_int_type] = STATE(87),
    [sym_top_lit] = STATE(87),
    [sym_list_lit] = STATE(87),
    [sym_struct_lit] = STATE(87),
    [sym__expression] = STATE(147),
    [sym_binary_expression] = STATE(147),
    [sym_unary_expression] = STATE(147),
    [sym__primary_expression] = STATE(87),
    [sym__operand] = STATE(87),
    [sym_index_expression] = STATE(87),
    [sym_selector_expression] = STATE(87),
    [sym_call_expression] = STATE(87),
    [sym__literal] = STATE(87),
    [sym_identifier] = ACTIONS(237),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym__] = ACTIONS(225),
    [anon_sym_POUND_DQUOTE] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(231),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(233),
    [anon_sym_len] = ACTIONS(235),
    [anon_sym_close] = ACTIONS(235),
    [anon_sym_and] = ACTIONS(235),
    [anon_sym_or] = ACTIONS(235),
    [anon_sym_div] = ACTIONS(235),
    [anon_sym_mod] = ACTIONS(235),
    [anon_sym_quo] = ACTIONS(235),
    [anon_sym_rem] = ACTIONS(235),
    [sym_number_type] = ACTIONS(237),
    [anon_sym_float] = ACTIONS(239),
    [anon_sym_float32] = ACTIONS(239),
    [anon_sym_float64] = ACTIONS(239),
    [anon_sym_uint] = ACTIONS(241),
    [anon_sym_uint8] = ACTIONS(241),
    [anon_sym_uint16] = ACTIONS(241),
    [anon_sym_uint32] = ACTIONS(241),
    [anon_sym_uint64] = ACTIONS(241),
    [anon_sym_uint128] = ACTIONS(241),
    [anon_sym_int] = ACTIONS(243),
    [anon_sym_int8] = ACTIONS(243),
    [anon_sym_int16] = ACTIONS(243),
    [anon_sym_int32] = ACTIONS(243),
    [anon_sym_int64] = ACTIONS(243),
    [anon_sym_int128] = ACTIONS(243),
    [sym_string_type] = ACTIONS(237),
    [sym_bool_type] = ACTIONS(237),
    [sym_bottom_lit] = ACTIONS(245),
    [sym_null_lit] = ACTIONS(237),
    [sym_bool_lit] = ACTIONS(237),
    [sym_int_lit] = ACTIONS(237),
    [sym_float_lit] = ACTIONS(237),
    [anon_sym_LBRACK] = ACTIONS(247),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_BANG_EQ] = ACTIONS(255),
    [anon_sym_LT] = ACTIONS(257),
    [anon_sym_LT_EQ] = ACTIONS(255),
    [anon_sym_GT] = ACTIONS(257),
    [anon_sym_GT_EQ] = ACTIONS(255),
    [anon_sym_EQ_TILDE] = ACTIONS(255),
    [anon_sym_BANG_TILDE] = ACTIONS(255),
    [anon_sym_PLUS] = ACTIONS(255),
    [anon_sym_DASH] = ACTIONS(255),
    [anon_sym_STAR] = ACTIONS(255),
    [anon_sym_BANG] = ACTIONS(257),
    [sym_comment] = ACTIONS(3),
  },
  [65] = {
    [sym__string_lit] = STATE(87),
    [sym_raw_simple_string_lit] = STATE(87),
    [sym_simple_string_lit] = STATE(87),
    [sym_raw_multiline_string_lit] = STATE(87),
    [sym_multiline_string_lit] = STATE(87),
    [sym_builtin] = STATE(87),
    [sym_float_type] = STATE(87),
    [sym_uint_type] = STATE(87),
    [sym_int_type] = STATE(87),
    [sym_top_lit] = STATE(87),
    [sym_list_lit] = STATE(87),
    [sym_struct_lit] = STATE(87),
    [sym__expression] = STATE(149),
    [sym_binary_expression] = STATE(149),
    [sym_unary_expression] = STATE(149),
    [sym__primary_expression] = STATE(87),
    [sym__operand] = STATE(87),
    [sym_index_expression] = STATE(87),
    [sym_selector_expression] = STATE(87),
    [sym_call_expression] = STATE(87),
    [sym__literal] = STATE(87),
    [sym_identifier] = ACTIONS(237),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym__] = ACTIONS(225),
    [anon_sym_POUND_DQUOTE] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(231),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(233),
    [anon_sym_len] = ACTIONS(235),
    [anon_sym_close] = ACTIONS(235),
    [anon_sym_and] = ACTIONS(235),
    [anon_sym_or] = ACTIONS(235),
    [anon_sym_div] = ACTIONS(235),
    [anon_sym_mod] = ACTIONS(235),
    [anon_sym_quo] = ACTIONS(235),
    [anon_sym_rem] = ACTIONS(235),
    [sym_number_type] = ACTIONS(237),
    [anon_sym_float] = ACTIONS(239),
    [anon_sym_float32] = ACTIONS(239),
    [anon_sym_float64] = ACTIONS(239),
    [anon_sym_uint] = ACTIONS(241),
    [anon_sym_uint8] = ACTIONS(241),
    [anon_sym_uint16] = ACTIONS(241),
    [anon_sym_uint32] = ACTIONS(241),
    [anon_sym_uint64] = ACTIONS(241),
    [anon_sym_uint128] = ACTIONS(241),
    [anon_sym_int] = ACTIONS(243),
    [anon_sym_int8] = ACTIONS(243),
    [anon_sym_int16] = ACTIONS(243),
    [anon_sym_int32] = ACTIONS(243),
    [anon_sym_int64] = ACTIONS(243),
    [anon_sym_int128] = ACTIONS(243),
    [sym_string_type] = ACTIONS(237),
    [sym_bool_type] = ACTIONS(237),
    [sym_bottom_lit] = ACTIONS(245),
    [sym_null_lit] = ACTIONS(237),
    [sym_bool_lit] = ACTIONS(237),
    [sym_int_lit] = ACTIONS(237),
    [sym_float_lit] = ACTIONS(237),
    [anon_sym_LBRACK] = ACTIONS(247),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_BANG_EQ] = ACTIONS(255),
    [anon_sym_LT] = ACTIONS(257),
    [anon_sym_LT_EQ] = ACTIONS(255),
    [anon_sym_GT] = ACTIONS(257),
    [anon_sym_GT_EQ] = ACTIONS(255),
    [anon_sym_EQ_TILDE] = ACTIONS(255),
    [anon_sym_BANG_TILDE] = ACTIONS(255),
    [anon_sym_PLUS] = ACTIONS(255),
    [anon_sym_DASH] = ACTIONS(255),
    [anon_sym_STAR] = ACTIONS(255),
    [anon_sym_BANG] = ACTIONS(257),
    [sym_comment] = ACTIONS(3),
  },
  [66] = {
    [sym__string_lit] = STATE(87),
    [sym_raw_simple_string_lit] = STATE(87),
    [sym_simple_string_lit] = STATE(87),
    [sym_raw_multiline_string_lit] = STATE(87),
    [sym_multiline_string_lit] = STATE(87),
    [sym_builtin] = STATE(87),
    [sym_float_type] = STATE(87),
    [sym_uint_type] = STATE(87),
    [sym_int_type] = STATE(87),
    [sym_top_lit] = STATE(87),
    [sym_list_lit] = STATE(87),
    [sym_struct_lit] = STATE(87),
    [sym__expression] = STATE(154),
    [sym_binary_expression] = STATE(154),
    [sym_unary_expression] = STATE(154),
    [sym__primary_expression] = STATE(87),
    [sym__operand] = STATE(87),
    [sym_index_expression] = STATE(87),
    [sym_selector_expression] = STATE(87),
    [sym_call_expression] = STATE(87),
    [sym__literal] = STATE(87),
    [sym_identifier] = ACTIONS(237),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym__] = ACTIONS(225),
    [anon_sym_POUND_DQUOTE] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(231),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(233),
    [anon_sym_len] = ACTIONS(235),
    [anon_sym_close] = ACTIONS(235),
    [anon_sym_and] = ACTIONS(235),
    [anon_sym_or] = ACTIONS(235),
    [anon_sym_div] = ACTIONS(235),
    [anon_sym_mod] = ACTIONS(235),
    [anon_sym_quo] = ACTIONS(235),
    [anon_sym_rem] = ACTIONS(235),
    [sym_number_type] = ACTIONS(237),
    [anon_sym_float] = ACTIONS(239),
    [anon_sym_float32] = ACTIONS(239),
    [anon_sym_float64] = ACTIONS(239),
    [anon_sym_uint] = ACTIONS(241),
    [anon_sym_uint8] = ACTIONS(241),
    [anon_sym_uint16] = ACTIONS(241),
    [anon_sym_uint32] = ACTIONS(241),
    [anon_sym_uint64] = ACTIONS(241),
    [anon_sym_uint128] = ACTIONS(241),
    [anon_sym_int] = ACTIONS(243),
    [anon_sym_int8] = ACTIONS(243),
    [anon_sym_int16] = ACTIONS(243),
    [anon_sym_int32] = ACTIONS(243),
    [anon_sym_int64] = ACTIONS(243),
    [anon_sym_int128] = ACTIONS(243),
    [sym_string_type] = ACTIONS(237),
    [sym_bool_type] = ACTIONS(237),
    [sym_bottom_lit] = ACTIONS(245),
    [sym_null_lit] = ACTIONS(237),
    [sym_bool_lit] = ACTIONS(237),
    [sym_int_lit] = ACTIONS(237),
    [sym_float_lit] = ACTIONS(237),
    [anon_sym_LBRACK] = ACTIONS(247),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_BANG_EQ] = ACTIONS(255),
    [anon_sym_LT] = ACTIONS(257),
    [anon_sym_LT_EQ] = ACTIONS(255),
    [anon_sym_GT] = ACTIONS(257),
    [anon_sym_GT_EQ] = ACTIONS(255),
    [anon_sym_EQ_TILDE] = ACTIONS(255),
    [anon_sym_BANG_TILDE] = ACTIONS(255),
    [anon_sym_PLUS] = ACTIONS(255),
    [anon_sym_DASH] = ACTIONS(255),
    [anon_sym_STAR] = ACTIONS(255),
    [anon_sym_BANG] = ACTIONS(257),
    [sym_comment] = ACTIONS(3),
  },
  [67] = {
    [sym__string_lit] = STATE(201),
    [sym_raw_simple_string_lit] = STATE(201),
    [sym_simple_string_lit] = STATE(201),
    [sym_raw_multiline_string_lit] = STATE(201),
    [sym_multiline_string_lit] = STATE(201),
    [sym_builtin] = STATE(201),
    [sym_float_type] = STATE(201),
    [sym_uint_type] = STATE(201),
    [sym_int_type] = STATE(201),
    [sym_top_lit] = STATE(201),
    [sym_list_lit] = STATE(201),
    [sym_struct_lit] = STATE(201),
    [sym__expression] = STATE(226),
    [sym_binary_expression] = STATE(226),
    [sym_unary_expression] = STATE(226),
    [sym__primary_expression] = STATE(201),
    [sym__operand] = STATE(201),
    [sym_index_expression] = STATE(201),
    [sym_selector_expression] = STATE(201),
    [sym_call_expression] = STATE(201),
    [sym__literal] = STATE(201),
    [sym_identifier] = ACTIONS(345),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym__] = ACTIONS(225),
    [anon_sym_POUND_DQUOTE] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(231),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(233),
    [anon_sym_len] = ACTIONS(235),
    [anon_sym_close] = ACTIONS(235),
    [anon_sym_and] = ACTIONS(235),
    [anon_sym_or] = ACTIONS(235),
    [anon_sym_div] = ACTIONS(235),
    [anon_sym_mod] = ACTIONS(235),
    [anon_sym_quo] = ACTIONS(235),
    [anon_sym_rem] = ACTIONS(235),
    [sym_number_type] = ACTIONS(345),
    [anon_sym_float] = ACTIONS(239),
    [anon_sym_float32] = ACTIONS(239),
    [anon_sym_float64] = ACTIONS(239),
    [anon_sym_uint] = ACTIONS(241),
    [anon_sym_uint8] = ACTIONS(241),
    [anon_sym_uint16] = ACTIONS(241),
    [anon_sym_uint32] = ACTIONS(241),
    [anon_sym_uint64] = ACTIONS(241),
    [anon_sym_uint128] = ACTIONS(241),
    [anon_sym_int] = ACTIONS(243),
    [anon_sym_int8] = ACTIONS(243),
    [anon_sym_int16] = ACTIONS(243),
    [anon_sym_int32] = ACTIONS(243),
    [anon_sym_int64] = ACTIONS(243),
    [anon_sym_int128] = ACTIONS(243),
    [sym_string_type] = ACTIONS(345),
    [sym_bool_type] = ACTIONS(345),
    [sym_bottom_lit] = ACTIONS(347),
    [sym_null_lit] = ACTIONS(345),
    [sym_bool_lit] = ACTIONS(345),
    [sym_int_lit] = ACTIONS(345),
    [sym_float_lit] = ACTIONS(345),
    [anon_sym_LBRACK] = ACTIONS(247),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_BANG_EQ] = ACTIONS(349),
    [anon_sym_LT] = ACTIONS(351),
    [anon_sym_LT_EQ] = ACTIONS(349),
    [anon_sym_GT] = ACTIONS(351),
    [anon_sym_GT_EQ] = ACTIONS(349),
    [anon_sym_EQ_TILDE] = ACTIONS(349),
    [anon_sym_BANG_TILDE] = ACTIONS(349),
    [anon_sym_PLUS] = ACTIONS(349),
    [anon_sym_DASH] = ACTIONS(349),
    [anon_sym_STAR] = ACTIONS(349),
    [anon_sym_BANG] = ACTIONS(351),
    [sym_comment] = ACTIONS(3),
  },
  [68] = {
    [sym__string_lit] = STATE(87),
    [sym_raw_simple_string_lit] = STATE(87),
    [sym_simple_string_lit] = STATE(87),
    [sym_raw_multiline_string_lit] = STATE(87),
    [sym_multiline_string_lit] = STATE(87),
    [sym_builtin] = STATE(87),
    [sym_float_type] = STATE(87),
    [sym_uint_type] = STATE(87),
    [sym_int_type] = STATE(87),
    [sym_top_lit] = STATE(87),
    [sym_list_lit] = STATE(87),
    [sym_struct_lit] = STATE(87),
    [sym__expression] = STATE(150),
    [sym_binary_expression] = STATE(150),
    [sym_unary_expression] = STATE(150),
    [sym__primary_expression] = STATE(87),
    [sym__operand] = STATE(87),
    [sym_index_expression] = STATE(87),
    [sym_selector_expression] = STATE(87),
    [sym_call_expression] = STATE(87),
    [sym__literal] = STATE(87),
    [sym_identifier] = ACTIONS(237),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym__] = ACTIONS(225),
    [anon_sym_POUND_DQUOTE] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(231),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(233),
    [anon_sym_len] = ACTIONS(235),
    [anon_sym_close] = ACTIONS(235),
    [anon_sym_and] = ACTIONS(235),
    [anon_sym_or] = ACTIONS(235),
    [anon_sym_div] = ACTIONS(235),
    [anon_sym_mod] = ACTIONS(235),
    [anon_sym_quo] = ACTIONS(235),
    [anon_sym_rem] = ACTIONS(235),
    [sym_number_type] = ACTIONS(237),
    [anon_sym_float] = ACTIONS(239),
    [anon_sym_float32] = ACTIONS(239),
    [anon_sym_float64] = ACTIONS(239),
    [anon_sym_uint] = ACTIONS(241),
    [anon_sym_uint8] = ACTIONS(241),
    [anon_sym_uint16] = ACTIONS(241),
    [anon_sym_uint32] = ACTIONS(241),
    [anon_sym_uint64] = ACTIONS(241),
    [anon_sym_uint128] = ACTIONS(241),
    [anon_sym_int] = ACTIONS(243),
    [anon_sym_int8] = ACTIONS(243),
    [anon_sym_int16] = ACTIONS(243),
    [anon_sym_int32] = ACTIONS(243),
    [anon_sym_int64] = ACTIONS(243),
    [anon_sym_int128] = ACTIONS(243),
    [sym_string_type] = ACTIONS(237),
    [sym_bool_type] = ACTIONS(237),
    [sym_bottom_lit] = ACTIONS(245),
    [sym_null_lit] = ACTIONS(237),
    [sym_bool_lit] = ACTIONS(237),
    [sym_int_lit] = ACTIONS(237),
    [sym_float_lit] = ACTIONS(237),
    [anon_sym_LBRACK] = ACTIONS(247),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_BANG_EQ] = ACTIONS(255),
    [anon_sym_LT] = ACTIONS(257),
    [anon_sym_LT_EQ] = ACTIONS(255),
    [anon_sym_GT] = ACTIONS(257),
    [anon_sym_GT_EQ] = ACTIONS(255),
    [anon_sym_EQ_TILDE] = ACTIONS(255),
    [anon_sym_BANG_TILDE] = ACTIONS(255),
    [anon_sym_PLUS] = ACTIONS(255),
    [anon_sym_DASH] = ACTIONS(255),
    [anon_sym_STAR] = ACTIONS(255),
    [anon_sym_BANG] = ACTIONS(257),
    [sym_comment] = ACTIONS(3),
  },
  [69] = {
    [sym__string_lit] = STATE(203),
    [sym_raw_simple_string_lit] = STATE(203),
    [sym_simple_string_lit] = STATE(203),
    [sym_raw_multiline_string_lit] = STATE(203),
    [sym_multiline_string_lit] = STATE(203),
    [sym_builtin] = STATE(203),
    [sym_float_type] = STATE(203),
    [sym_uint_type] = STATE(203),
    [sym_int_type] = STATE(203),
    [sym_top_lit] = STATE(203),
    [sym_list_lit] = STATE(203),
    [sym_struct_lit] = STATE(203),
    [sym__expression] = STATE(137),
    [sym_binary_expression] = STATE(137),
    [sym_unary_expression] = STATE(137),
    [sym__primary_expression] = STATE(203),
    [sym__operand] = STATE(203),
    [sym_index_expression] = STATE(203),
    [sym_selector_expression] = STATE(203),
    [sym_call_expression] = STATE(203),
    [sym__literal] = STATE(203),
    [sym_identifier] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym__] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(23),
    [anon_sym_len] = ACTIONS(25),
    [anon_sym_close] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(25),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_div] = ACTIONS(25),
    [anon_sym_mod] = ACTIONS(25),
    [anon_sym_quo] = ACTIONS(25),
    [anon_sym_rem] = ACTIONS(25),
    [sym_number_type] = ACTIONS(27),
    [anon_sym_float] = ACTIONS(29),
    [anon_sym_float32] = ACTIONS(29),
    [anon_sym_float64] = ACTIONS(29),
    [anon_sym_uint] = ACTIONS(31),
    [anon_sym_uint8] = ACTIONS(31),
    [anon_sym_uint16] = ACTIONS(31),
    [anon_sym_uint32] = ACTIONS(31),
    [anon_sym_uint64] = ACTIONS(31),
    [anon_sym_uint128] = ACTIONS(31),
    [anon_sym_int] = ACTIONS(33),
    [anon_sym_int8] = ACTIONS(33),
    [anon_sym_int16] = ACTIONS(33),
    [anon_sym_int32] = ACTIONS(33),
    [anon_sym_int64] = ACTIONS(33),
    [anon_sym_int128] = ACTIONS(33),
    [sym_string_type] = ACTIONS(27),
    [sym_bool_type] = ACTIONS(27),
    [sym_bottom_lit] = ACTIONS(35),
    [sym_null_lit] = ACTIONS(27),
    [sym_bool_lit] = ACTIONS(27),
    [sym_int_lit] = ACTIONS(27),
    [sym_float_lit] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(355),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_EQ_TILDE] = ACTIONS(49),
    [anon_sym_BANG_TILDE] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(49),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_BANG] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
  },
  [70] = {
    [sym__string_lit] = STATE(203),
    [sym_raw_simple_string_lit] = STATE(203),
    [sym_simple_string_lit] = STATE(203),
    [sym_raw_multiline_string_lit] = STATE(203),
    [sym_multiline_string_lit] = STATE(203),
    [sym_builtin] = STATE(203),
    [sym_float_type] = STATE(203),
    [sym_uint_type] = STATE(203),
    [sym_int_type] = STATE(203),
    [sym_top_lit] = STATE(203),
    [sym_list_lit] = STATE(203),
    [sym_struct_lit] = STATE(203),
    [sym__expression] = STATE(222),
    [sym_binary_expression] = STATE(222),
    [sym_unary_expression] = STATE(222),
    [sym__primary_expression] = STATE(203),
    [sym__operand] = STATE(203),
    [sym_index_expression] = STATE(203),
    [sym_selector_expression] = STATE(203),
    [sym_call_expression] = STATE(203),
    [sym__literal] = STATE(203),
    [sym_identifier] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym__] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(23),
    [anon_sym_len] = ACTIONS(25),
    [anon_sym_close] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(25),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_div] = ACTIONS(25),
    [anon_sym_mod] = ACTIONS(25),
    [anon_sym_quo] = ACTIONS(25),
    [anon_sym_rem] = ACTIONS(25),
    [sym_number_type] = ACTIONS(27),
    [anon_sym_float] = ACTIONS(29),
    [anon_sym_float32] = ACTIONS(29),
    [anon_sym_float64] = ACTIONS(29),
    [anon_sym_uint] = ACTIONS(31),
    [anon_sym_uint8] = ACTIONS(31),
    [anon_sym_uint16] = ACTIONS(31),
    [anon_sym_uint32] = ACTIONS(31),
    [anon_sym_uint64] = ACTIONS(31),
    [anon_sym_uint128] = ACTIONS(31),
    [anon_sym_int] = ACTIONS(33),
    [anon_sym_int8] = ACTIONS(33),
    [anon_sym_int16] = ACTIONS(33),
    [anon_sym_int32] = ACTIONS(33),
    [anon_sym_int64] = ACTIONS(33),
    [anon_sym_int128] = ACTIONS(33),
    [sym_string_type] = ACTIONS(27),
    [sym_bool_type] = ACTIONS(27),
    [sym_bottom_lit] = ACTIONS(35),
    [sym_null_lit] = ACTIONS(27),
    [sym_bool_lit] = ACTIONS(27),
    [sym_int_lit] = ACTIONS(27),
    [sym_float_lit] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(355),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_EQ_TILDE] = ACTIONS(49),
    [anon_sym_BANG_TILDE] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(49),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_BANG] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
  },
  [71] = {
    [sym__string_lit] = STATE(87),
    [sym_raw_simple_string_lit] = STATE(87),
    [sym_simple_string_lit] = STATE(87),
    [sym_raw_multiline_string_lit] = STATE(87),
    [sym_multiline_string_lit] = STATE(87),
    [sym_builtin] = STATE(87),
    [sym_float_type] = STATE(87),
    [sym_uint_type] = STATE(87),
    [sym_int_type] = STATE(87),
    [sym_top_lit] = STATE(87),
    [sym_list_lit] = STATE(87),
    [sym_struct_lit] = STATE(87),
    [sym__expression] = STATE(142),
    [sym_binary_expression] = STATE(142),
    [sym_unary_expression] = STATE(142),
    [sym__primary_expression] = STATE(87),
    [sym__operand] = STATE(87),
    [sym_index_expression] = STATE(87),
    [sym_selector_expression] = STATE(87),
    [sym_call_expression] = STATE(87),
    [sym__literal] = STATE(87),
    [sym_identifier] = ACTIONS(237),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym__] = ACTIONS(225),
    [anon_sym_POUND_DQUOTE] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(231),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(233),
    [anon_sym_len] = ACTIONS(235),
    [anon_sym_close] = ACTIONS(235),
    [anon_sym_and] = ACTIONS(235),
    [anon_sym_or] = ACTIONS(235),
    [anon_sym_div] = ACTIONS(235),
    [anon_sym_mod] = ACTIONS(235),
    [anon_sym_quo] = ACTIONS(235),
    [anon_sym_rem] = ACTIONS(235),
    [sym_number_type] = ACTIONS(237),
    [anon_sym_float] = ACTIONS(239),
    [anon_sym_float32] = ACTIONS(239),
    [anon_sym_float64] = ACTIONS(239),
    [anon_sym_uint] = ACTIONS(241),
    [anon_sym_uint8] = ACTIONS(241),
    [anon_sym_uint16] = ACTIONS(241),
    [anon_sym_uint32] = ACTIONS(241),
    [anon_sym_uint64] = ACTIONS(241),
    [anon_sym_uint128] = ACTIONS(241),
    [anon_sym_int] = ACTIONS(243),
    [anon_sym_int8] = ACTIONS(243),
    [anon_sym_int16] = ACTIONS(243),
    [anon_sym_int32] = ACTIONS(243),
    [anon_sym_int64] = ACTIONS(243),
    [anon_sym_int128] = ACTIONS(243),
    [sym_string_type] = ACTIONS(237),
    [sym_bool_type] = ACTIONS(237),
    [sym_bottom_lit] = ACTIONS(245),
    [sym_null_lit] = ACTIONS(237),
    [sym_bool_lit] = ACTIONS(237),
    [sym_int_lit] = ACTIONS(237),
    [sym_float_lit] = ACTIONS(237),
    [anon_sym_LBRACK] = ACTIONS(247),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_BANG_EQ] = ACTIONS(255),
    [anon_sym_LT] = ACTIONS(257),
    [anon_sym_LT_EQ] = ACTIONS(255),
    [anon_sym_GT] = ACTIONS(257),
    [anon_sym_GT_EQ] = ACTIONS(255),
    [anon_sym_EQ_TILDE] = ACTIONS(255),
    [anon_sym_BANG_TILDE] = ACTIONS(255),
    [anon_sym_PLUS] = ACTIONS(255),
    [anon_sym_DASH] = ACTIONS(255),
    [anon_sym_STAR] = ACTIONS(255),
    [anon_sym_BANG] = ACTIONS(257),
    [sym_comment] = ACTIONS(3),
  },
  [72] = {
    [sym__string_lit] = STATE(203),
    [sym_raw_simple_string_lit] = STATE(203),
    [sym_simple_string_lit] = STATE(203),
    [sym_raw_multiline_string_lit] = STATE(203),
    [sym_multiline_string_lit] = STATE(203),
    [sym_builtin] = STATE(203),
    [sym_float_type] = STATE(203),
    [sym_uint_type] = STATE(203),
    [sym_int_type] = STATE(203),
    [sym_top_lit] = STATE(203),
    [sym_list_lit] = STATE(203),
    [sym_struct_lit] = STATE(203),
    [sym__expression] = STATE(219),
    [sym_binary_expression] = STATE(219),
    [sym_unary_expression] = STATE(219),
    [sym__primary_expression] = STATE(203),
    [sym__operand] = STATE(203),
    [sym_index_expression] = STATE(203),
    [sym_selector_expression] = STATE(203),
    [sym_call_expression] = STATE(203),
    [sym__literal] = STATE(203),
    [sym_identifier] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym__] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(23),
    [anon_sym_len] = ACTIONS(25),
    [anon_sym_close] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(25),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_div] = ACTIONS(25),
    [anon_sym_mod] = ACTIONS(25),
    [anon_sym_quo] = ACTIONS(25),
    [anon_sym_rem] = ACTIONS(25),
    [sym_number_type] = ACTIONS(27),
    [anon_sym_float] = ACTIONS(29),
    [anon_sym_float32] = ACTIONS(29),
    [anon_sym_float64] = ACTIONS(29),
    [anon_sym_uint] = ACTIONS(31),
    [anon_sym_uint8] = ACTIONS(31),
    [anon_sym_uint16] = ACTIONS(31),
    [anon_sym_uint32] = ACTIONS(31),
    [anon_sym_uint64] = ACTIONS(31),
    [anon_sym_uint128] = ACTIONS(31),
    [anon_sym_int] = ACTIONS(33),
    [anon_sym_int8] = ACTIONS(33),
    [anon_sym_int16] = ACTIONS(33),
    [anon_sym_int32] = ACTIONS(33),
    [anon_sym_int64] = ACTIONS(33),
    [anon_sym_int128] = ACTIONS(33),
    [sym_string_type] = ACTIONS(27),
    [sym_bool_type] = ACTIONS(27),
    [sym_bottom_lit] = ACTIONS(35),
    [sym_null_lit] = ACTIONS(27),
    [sym_bool_lit] = ACTIONS(27),
    [sym_int_lit] = ACTIONS(27),
    [sym_float_lit] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(355),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_EQ_TILDE] = ACTIONS(49),
    [anon_sym_BANG_TILDE] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(49),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_BANG] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
  },
  [73] = {
    [sym__string_lit] = STATE(203),
    [sym_raw_simple_string_lit] = STATE(203),
    [sym_simple_string_lit] = STATE(203),
    [sym_raw_multiline_string_lit] = STATE(203),
    [sym_multiline_string_lit] = STATE(203),
    [sym_builtin] = STATE(203),
    [sym_float_type] = STATE(203),
    [sym_uint_type] = STATE(203),
    [sym_int_type] = STATE(203),
    [sym_top_lit] = STATE(203),
    [sym_list_lit] = STATE(203),
    [sym_struct_lit] = STATE(203),
    [sym__expression] = STATE(217),
    [sym_binary_expression] = STATE(217),
    [sym_unary_expression] = STATE(217),
    [sym__primary_expression] = STATE(203),
    [sym__operand] = STATE(203),
    [sym_index_expression] = STATE(203),
    [sym_selector_expression] = STATE(203),
    [sym_call_expression] = STATE(203),
    [sym__literal] = STATE(203),
    [sym_identifier] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym__] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(23),
    [anon_sym_len] = ACTIONS(25),
    [anon_sym_close] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(25),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_div] = ACTIONS(25),
    [anon_sym_mod] = ACTIONS(25),
    [anon_sym_quo] = ACTIONS(25),
    [anon_sym_rem] = ACTIONS(25),
    [sym_number_type] = ACTIONS(27),
    [anon_sym_float] = ACTIONS(29),
    [anon_sym_float32] = ACTIONS(29),
    [anon_sym_float64] = ACTIONS(29),
    [anon_sym_uint] = ACTIONS(31),
    [anon_sym_uint8] = ACTIONS(31),
    [anon_sym_uint16] = ACTIONS(31),
    [anon_sym_uint32] = ACTIONS(31),
    [anon_sym_uint64] = ACTIONS(31),
    [anon_sym_uint128] = ACTIONS(31),
    [anon_sym_int] = ACTIONS(33),
    [anon_sym_int8] = ACTIONS(33),
    [anon_sym_int16] = ACTIONS(33),
    [anon_sym_int32] = ACTIONS(33),
    [anon_sym_int64] = ACTIONS(33),
    [anon_sym_int128] = ACTIONS(33),
    [sym_string_type] = ACTIONS(27),
    [sym_bool_type] = ACTIONS(27),
    [sym_bottom_lit] = ACTIONS(35),
    [sym_null_lit] = ACTIONS(27),
    [sym_bool_lit] = ACTIONS(27),
    [sym_int_lit] = ACTIONS(27),
    [sym_float_lit] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(355),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_EQ_TILDE] = ACTIONS(49),
    [anon_sym_BANG_TILDE] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(49),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_BANG] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
  },
  [74] = {
    [sym__string_lit] = STATE(203),
    [sym_raw_simple_string_lit] = STATE(203),
    [sym_simple_string_lit] = STATE(203),
    [sym_raw_multiline_string_lit] = STATE(203),
    [sym_multiline_string_lit] = STATE(203),
    [sym_builtin] = STATE(203),
    [sym_float_type] = STATE(203),
    [sym_uint_type] = STATE(203),
    [sym_int_type] = STATE(203),
    [sym_top_lit] = STATE(203),
    [sym_list_lit] = STATE(203),
    [sym_struct_lit] = STATE(203),
    [sym__expression] = STATE(221),
    [sym_binary_expression] = STATE(221),
    [sym_unary_expression] = STATE(221),
    [sym__primary_expression] = STATE(203),
    [sym__operand] = STATE(203),
    [sym_index_expression] = STATE(203),
    [sym_selector_expression] = STATE(203),
    [sym_call_expression] = STATE(203),
    [sym__literal] = STATE(203),
    [sym_identifier] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym__] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(23),
    [anon_sym_len] = ACTIONS(25),
    [anon_sym_close] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(25),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_div] = ACTIONS(25),
    [anon_sym_mod] = ACTIONS(25),
    [anon_sym_quo] = ACTIONS(25),
    [anon_sym_rem] = ACTIONS(25),
    [sym_number_type] = ACTIONS(27),
    [anon_sym_float] = ACTIONS(29),
    [anon_sym_float32] = ACTIONS(29),
    [anon_sym_float64] = ACTIONS(29),
    [anon_sym_uint] = ACTIONS(31),
    [anon_sym_uint8] = ACTIONS(31),
    [anon_sym_uint16] = ACTIONS(31),
    [anon_sym_uint32] = ACTIONS(31),
    [anon_sym_uint64] = ACTIONS(31),
    [anon_sym_uint128] = ACTIONS(31),
    [anon_sym_int] = ACTIONS(33),
    [anon_sym_int8] = ACTIONS(33),
    [anon_sym_int16] = ACTIONS(33),
    [anon_sym_int32] = ACTIONS(33),
    [anon_sym_int64] = ACTIONS(33),
    [anon_sym_int128] = ACTIONS(33),
    [sym_string_type] = ACTIONS(27),
    [sym_bool_type] = ACTIONS(27),
    [sym_bottom_lit] = ACTIONS(35),
    [sym_null_lit] = ACTIONS(27),
    [sym_bool_lit] = ACTIONS(27),
    [sym_int_lit] = ACTIONS(27),
    [sym_float_lit] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(355),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_EQ_TILDE] = ACTIONS(49),
    [anon_sym_BANG_TILDE] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(49),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_BANG] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
  },
  [75] = {
    [sym__string_lit] = STATE(203),
    [sym_raw_simple_string_lit] = STATE(203),
    [sym_simple_string_lit] = STATE(203),
    [sym_raw_multiline_string_lit] = STATE(203),
    [sym_multiline_string_lit] = STATE(203),
    [sym_builtin] = STATE(203),
    [sym_float_type] = STATE(203),
    [sym_uint_type] = STATE(203),
    [sym_int_type] = STATE(203),
    [sym_top_lit] = STATE(203),
    [sym_list_lit] = STATE(203),
    [sym_struct_lit] = STATE(203),
    [sym__expression] = STATE(216),
    [sym_binary_expression] = STATE(216),
    [sym_unary_expression] = STATE(216),
    [sym__primary_expression] = STATE(203),
    [sym__operand] = STATE(203),
    [sym_index_expression] = STATE(203),
    [sym_selector_expression] = STATE(203),
    [sym_call_expression] = STATE(203),
    [sym__literal] = STATE(203),
    [sym_identifier] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym__] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(23),
    [anon_sym_len] = ACTIONS(25),
    [anon_sym_close] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(25),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_div] = ACTIONS(25),
    [anon_sym_mod] = ACTIONS(25),
    [anon_sym_quo] = ACTIONS(25),
    [anon_sym_rem] = ACTIONS(25),
    [sym_number_type] = ACTIONS(27),
    [anon_sym_float] = ACTIONS(29),
    [anon_sym_float32] = ACTIONS(29),
    [anon_sym_float64] = ACTIONS(29),
    [anon_sym_uint] = ACTIONS(31),
    [anon_sym_uint8] = ACTIONS(31),
    [anon_sym_uint16] = ACTIONS(31),
    [anon_sym_uint32] = ACTIONS(31),
    [anon_sym_uint64] = ACTIONS(31),
    [anon_sym_uint128] = ACTIONS(31),
    [anon_sym_int] = ACTIONS(33),
    [anon_sym_int8] = ACTIONS(33),
    [anon_sym_int16] = ACTIONS(33),
    [anon_sym_int32] = ACTIONS(33),
    [anon_sym_int64] = ACTIONS(33),
    [anon_sym_int128] = ACTIONS(33),
    [sym_string_type] = ACTIONS(27),
    [sym_bool_type] = ACTIONS(27),
    [sym_bottom_lit] = ACTIONS(35),
    [sym_null_lit] = ACTIONS(27),
    [sym_bool_lit] = ACTIONS(27),
    [sym_int_lit] = ACTIONS(27),
    [sym_float_lit] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(355),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_EQ_TILDE] = ACTIONS(49),
    [anon_sym_BANG_TILDE] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(49),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_BANG] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
  },
  [76] = {
    [sym__string_lit] = STATE(87),
    [sym_raw_simple_string_lit] = STATE(87),
    [sym_simple_string_lit] = STATE(87),
    [sym_raw_multiline_string_lit] = STATE(87),
    [sym_multiline_string_lit] = STATE(87),
    [sym_builtin] = STATE(87),
    [sym_float_type] = STATE(87),
    [sym_uint_type] = STATE(87),
    [sym_int_type] = STATE(87),
    [sym_top_lit] = STATE(87),
    [sym_list_lit] = STATE(87),
    [sym_struct_lit] = STATE(87),
    [sym__expression] = STATE(153),
    [sym_binary_expression] = STATE(153),
    [sym_unary_expression] = STATE(153),
    [sym__primary_expression] = STATE(87),
    [sym__operand] = STATE(87),
    [sym_index_expression] = STATE(87),
    [sym_selector_expression] = STATE(87),
    [sym_call_expression] = STATE(87),
    [sym__literal] = STATE(87),
    [sym_identifier] = ACTIONS(237),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym__] = ACTIONS(225),
    [anon_sym_POUND_DQUOTE] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(231),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(233),
    [anon_sym_len] = ACTIONS(235),
    [anon_sym_close] = ACTIONS(235),
    [anon_sym_and] = ACTIONS(235),
    [anon_sym_or] = ACTIONS(235),
    [anon_sym_div] = ACTIONS(235),
    [anon_sym_mod] = ACTIONS(235),
    [anon_sym_quo] = ACTIONS(235),
    [anon_sym_rem] = ACTIONS(235),
    [sym_number_type] = ACTIONS(237),
    [anon_sym_float] = ACTIONS(239),
    [anon_sym_float32] = ACTIONS(239),
    [anon_sym_float64] = ACTIONS(239),
    [anon_sym_uint] = ACTIONS(241),
    [anon_sym_uint8] = ACTIONS(241),
    [anon_sym_uint16] = ACTIONS(241),
    [anon_sym_uint32] = ACTIONS(241),
    [anon_sym_uint64] = ACTIONS(241),
    [anon_sym_uint128] = ACTIONS(241),
    [anon_sym_int] = ACTIONS(243),
    [anon_sym_int8] = ACTIONS(243),
    [anon_sym_int16] = ACTIONS(243),
    [anon_sym_int32] = ACTIONS(243),
    [anon_sym_int64] = ACTIONS(243),
    [anon_sym_int128] = ACTIONS(243),
    [sym_string_type] = ACTIONS(237),
    [sym_bool_type] = ACTIONS(237),
    [sym_bottom_lit] = ACTIONS(245),
    [sym_null_lit] = ACTIONS(237),
    [sym_bool_lit] = ACTIONS(237),
    [sym_int_lit] = ACTIONS(237),
    [sym_float_lit] = ACTIONS(237),
    [anon_sym_LBRACK] = ACTIONS(247),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_BANG_EQ] = ACTIONS(255),
    [anon_sym_LT] = ACTIONS(257),
    [anon_sym_LT_EQ] = ACTIONS(255),
    [anon_sym_GT] = ACTIONS(257),
    [anon_sym_GT_EQ] = ACTIONS(255),
    [anon_sym_EQ_TILDE] = ACTIONS(255),
    [anon_sym_BANG_TILDE] = ACTIONS(255),
    [anon_sym_PLUS] = ACTIONS(255),
    [anon_sym_DASH] = ACTIONS(255),
    [anon_sym_STAR] = ACTIONS(255),
    [anon_sym_BANG] = ACTIONS(257),
    [sym_comment] = ACTIONS(3),
  },
  [77] = {
    [sym__string_lit] = STATE(87),
    [sym_raw_simple_string_lit] = STATE(87),
    [sym_simple_string_lit] = STATE(87),
    [sym_raw_multiline_string_lit] = STATE(87),
    [sym_multiline_string_lit] = STATE(87),
    [sym_builtin] = STATE(87),
    [sym_float_type] = STATE(87),
    [sym_uint_type] = STATE(87),
    [sym_int_type] = STATE(87),
    [sym_top_lit] = STATE(87),
    [sym_list_lit] = STATE(87),
    [sym_struct_lit] = STATE(87),
    [sym__expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym__primary_expression] = STATE(87),
    [sym__operand] = STATE(87),
    [sym_index_expression] = STATE(87),
    [sym_selector_expression] = STATE(87),
    [sym_call_expression] = STATE(87),
    [sym__literal] = STATE(87),
    [sym_identifier] = ACTIONS(237),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym__] = ACTIONS(225),
    [anon_sym_POUND_DQUOTE] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(231),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(233),
    [anon_sym_len] = ACTIONS(235),
    [anon_sym_close] = ACTIONS(235),
    [anon_sym_and] = ACTIONS(235),
    [anon_sym_or] = ACTIONS(235),
    [anon_sym_div] = ACTIONS(235),
    [anon_sym_mod] = ACTIONS(235),
    [anon_sym_quo] = ACTIONS(235),
    [anon_sym_rem] = ACTIONS(235),
    [sym_number_type] = ACTIONS(237),
    [anon_sym_float] = ACTIONS(239),
    [anon_sym_float32] = ACTIONS(239),
    [anon_sym_float64] = ACTIONS(239),
    [anon_sym_uint] = ACTIONS(241),
    [anon_sym_uint8] = ACTIONS(241),
    [anon_sym_uint16] = ACTIONS(241),
    [anon_sym_uint32] = ACTIONS(241),
    [anon_sym_uint64] = ACTIONS(241),
    [anon_sym_uint128] = ACTIONS(241),
    [anon_sym_int] = ACTIONS(243),
    [anon_sym_int8] = ACTIONS(243),
    [anon_sym_int16] = ACTIONS(243),
    [anon_sym_int32] = ACTIONS(243),
    [anon_sym_int64] = ACTIONS(243),
    [anon_sym_int128] = ACTIONS(243),
    [sym_string_type] = ACTIONS(237),
    [sym_bool_type] = ACTIONS(237),
    [sym_bottom_lit] = ACTIONS(245),
    [sym_null_lit] = ACTIONS(237),
    [sym_bool_lit] = ACTIONS(237),
    [sym_int_lit] = ACTIONS(237),
    [sym_float_lit] = ACTIONS(237),
    [anon_sym_LBRACK] = ACTIONS(247),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_BANG_EQ] = ACTIONS(255),
    [anon_sym_LT] = ACTIONS(257),
    [anon_sym_LT_EQ] = ACTIONS(255),
    [anon_sym_GT] = ACTIONS(257),
    [anon_sym_GT_EQ] = ACTIONS(255),
    [anon_sym_EQ_TILDE] = ACTIONS(255),
    [anon_sym_BANG_TILDE] = ACTIONS(255),
    [anon_sym_PLUS] = ACTIONS(255),
    [anon_sym_DASH] = ACTIONS(255),
    [anon_sym_STAR] = ACTIONS(255),
    [anon_sym_BANG] = ACTIONS(257),
    [sym_comment] = ACTIONS(3),
  },
  [78] = {
    [sym__string_lit] = STATE(87),
    [sym_raw_simple_string_lit] = STATE(87),
    [sym_simple_string_lit] = STATE(87),
    [sym_raw_multiline_string_lit] = STATE(87),
    [sym_multiline_string_lit] = STATE(87),
    [sym_builtin] = STATE(87),
    [sym_float_type] = STATE(87),
    [sym_uint_type] = STATE(87),
    [sym_int_type] = STATE(87),
    [sym_top_lit] = STATE(87),
    [sym_list_lit] = STATE(87),
    [sym_struct_lit] = STATE(87),
    [sym__expression] = STATE(151),
    [sym_binary_expression] = STATE(151),
    [sym_unary_expression] = STATE(151),
    [sym__primary_expression] = STATE(87),
    [sym__operand] = STATE(87),
    [sym_index_expression] = STATE(87),
    [sym_selector_expression] = STATE(87),
    [sym_call_expression] = STATE(87),
    [sym__literal] = STATE(87),
    [sym_identifier] = ACTIONS(237),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym__] = ACTIONS(225),
    [anon_sym_POUND_DQUOTE] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(231),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(233),
    [anon_sym_len] = ACTIONS(235),
    [anon_sym_close] = ACTIONS(235),
    [anon_sym_and] = ACTIONS(235),
    [anon_sym_or] = ACTIONS(235),
    [anon_sym_div] = ACTIONS(235),
    [anon_sym_mod] = ACTIONS(235),
    [anon_sym_quo] = ACTIONS(235),
    [anon_sym_rem] = ACTIONS(235),
    [sym_number_type] = ACTIONS(237),
    [anon_sym_float] = ACTIONS(239),
    [anon_sym_float32] = ACTIONS(239),
    [anon_sym_float64] = ACTIONS(239),
    [anon_sym_uint] = ACTIONS(241),
    [anon_sym_uint8] = ACTIONS(241),
    [anon_sym_uint16] = ACTIONS(241),
    [anon_sym_uint32] = ACTIONS(241),
    [anon_sym_uint64] = ACTIONS(241),
    [anon_sym_uint128] = ACTIONS(241),
    [anon_sym_int] = ACTIONS(243),
    [anon_sym_int8] = ACTIONS(243),
    [anon_sym_int16] = ACTIONS(243),
    [anon_sym_int32] = ACTIONS(243),
    [anon_sym_int64] = ACTIONS(243),
    [anon_sym_int128] = ACTIONS(243),
    [sym_string_type] = ACTIONS(237),
    [sym_bool_type] = ACTIONS(237),
    [sym_bottom_lit] = ACTIONS(245),
    [sym_null_lit] = ACTIONS(237),
    [sym_bool_lit] = ACTIONS(237),
    [sym_int_lit] = ACTIONS(237),
    [sym_float_lit] = ACTIONS(237),
    [anon_sym_LBRACK] = ACTIONS(247),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_BANG_EQ] = ACTIONS(255),
    [anon_sym_LT] = ACTIONS(257),
    [anon_sym_LT_EQ] = ACTIONS(255),
    [anon_sym_GT] = ACTIONS(257),
    [anon_sym_GT_EQ] = ACTIONS(255),
    [anon_sym_EQ_TILDE] = ACTIONS(255),
    [anon_sym_BANG_TILDE] = ACTIONS(255),
    [anon_sym_PLUS] = ACTIONS(255),
    [anon_sym_DASH] = ACTIONS(255),
    [anon_sym_STAR] = ACTIONS(255),
    [anon_sym_BANG] = ACTIONS(257),
    [sym_comment] = ACTIONS(3),
  },
  [79] = {
    [sym_identifier] = ACTIONS(357),
    [anon_sym_LF] = ACTIONS(359),
    [anon_sym_COMMA] = ACTIONS(357),
    [anon_sym_LPAREN] = ACTIONS(357),
    [sym_dot] = ACTIONS(357),
    [anon_sym__] = ACTIONS(357),
    [anon_sym_POUND_DQUOTE] = ACTIONS(357),
    [anon_sym_DQUOTE] = ACTIONS(357),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(357),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(357),
    [anon_sym_len] = ACTIONS(357),
    [anon_sym_close] = ACTIONS(357),
    [anon_sym_and] = ACTIONS(357),
    [anon_sym_or] = ACTIONS(357),
    [anon_sym_div] = ACTIONS(357),
    [anon_sym_mod] = ACTIONS(357),
    [anon_sym_quo] = ACTIONS(357),
    [anon_sym_rem] = ACTIONS(357),
    [sym_number_type] = ACTIONS(357),
    [anon_sym_float] = ACTIONS(357),
    [anon_sym_float32] = ACTIONS(357),
    [anon_sym_float64] = ACTIONS(357),
    [anon_sym_uint] = ACTIONS(357),
    [anon_sym_uint8] = ACTIONS(357),
    [anon_sym_uint16] = ACTIONS(357),
    [anon_sym_uint32] = ACTIONS(357),
    [anon_sym_uint64] = ACTIONS(357),
    [anon_sym_uint128] = ACTIONS(357),
    [anon_sym_int] = ACTIONS(357),
    [anon_sym_int8] = ACTIONS(357),
    [anon_sym_int16] = ACTIONS(357),
    [anon_sym_int32] = ACTIONS(357),
    [anon_sym_int64] = ACTIONS(357),
    [anon_sym_int128] = ACTIONS(357),
    [sym_string_type] = ACTIONS(357),
    [sym_bool_type] = ACTIONS(357),
    [sym_bottom_lit] = ACTIONS(357),
    [sym_null_lit] = ACTIONS(357),
    [sym_bool_lit] = ACTIONS(357),
    [sym_int_lit] = ACTIONS(357),
    [sym_float_lit] = ACTIONS(357),
    [anon_sym_LBRACK] = ACTIONS(357),
    [anon_sym_LBRACE] = ACTIONS(357),
    [anon_sym_RBRACE] = ACTIONS(357),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(357),
    [anon_sym_QMARK] = ACTIONS(361),
    [anon_sym_EQ] = ACTIONS(363),
    [anon_sym_COLON] = ACTIONS(361),
    [anon_sym_for] = ACTIONS(357),
    [anon_sym_if] = ACTIONS(357),
    [anon_sym_let] = ACTIONS(357),
    [anon_sym_PIPE] = ACTIONS(357),
    [anon_sym_AMP] = ACTIONS(357),
    [anon_sym_PIPE_PIPE] = ACTIONS(357),
    [anon_sym_AMP_AMP] = ACTIONS(357),
    [anon_sym_EQ_EQ] = ACTIONS(357),
    [anon_sym_BANG_EQ] = ACTIONS(357),
    [anon_sym_LT] = ACTIONS(357),
    [anon_sym_LT_EQ] = ACTIONS(357),
    [anon_sym_GT] = ACTIONS(357),
    [anon_sym_GT_EQ] = ACTIONS(357),
    [anon_sym_EQ_TILDE] = ACTIONS(357),
    [anon_sym_BANG_TILDE] = ACTIONS(357),
    [anon_sym_PLUS] = ACTIONS(357),
    [anon_sym_DASH] = ACTIONS(357),
    [anon_sym_STAR] = ACTIONS(357),
    [anon_sym_SLASH] = ACTIONS(357),
    [anon_sym_BANG] = ACTIONS(357),
    [anon_sym_LBRACK2] = ACTIONS(359),
    [sym_comment] = ACTIONS(331),
  },
  [80] = {
    [sym_selector] = STATE(94),
    [sym_index] = STATE(95),
    [sym_arguments] = STATE(96),
    [sym_identifier] = ACTIONS(365),
    [anon_sym_LF] = ACTIONS(367),
    [anon_sym_COMMA] = ACTIONS(365),
    [anon_sym_LPAREN] = ACTIONS(365),
    [sym_dot] = ACTIONS(369),
    [anon_sym__] = ACTIONS(365),
    [anon_sym_POUND_DQUOTE] = ACTIONS(365),
    [anon_sym_DQUOTE] = ACTIONS(365),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(365),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(365),
    [anon_sym_len] = ACTIONS(365),
    [anon_sym_close] = ACTIONS(365),
    [anon_sym_and] = ACTIONS(365),
    [anon_sym_or] = ACTIONS(365),
    [anon_sym_div] = ACTIONS(365),
    [anon_sym_mod] = ACTIONS(365),
    [anon_sym_quo] = ACTIONS(365),
    [anon_sym_rem] = ACTIONS(365),
    [sym_number_type] = ACTIONS(365),
    [anon_sym_float] = ACTIONS(365),
    [anon_sym_float32] = ACTIONS(365),
    [anon_sym_float64] = ACTIONS(365),
    [anon_sym_uint] = ACTIONS(365),
    [anon_sym_uint8] = ACTIONS(365),
    [anon_sym_uint16] = ACTIONS(365),
    [anon_sym_uint32] = ACTIONS(365),
    [anon_sym_uint64] = ACTIONS(365),
    [anon_sym_uint128] = ACTIONS(365),
    [anon_sym_int] = ACTIONS(365),
    [anon_sym_int8] = ACTIONS(365),
    [anon_sym_int16] = ACTIONS(365),
    [anon_sym_int32] = ACTIONS(365),
    [anon_sym_int64] = ACTIONS(365),
    [anon_sym_int128] = ACTIONS(365),
    [sym_string_type] = ACTIONS(365),
    [sym_bool_type] = ACTIONS(365),
    [sym_bottom_lit] = ACTIONS(365),
    [sym_null_lit] = ACTIONS(365),
    [sym_bool_lit] = ACTIONS(365),
    [sym_int_lit] = ACTIONS(365),
    [sym_float_lit] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(365),
    [anon_sym_LBRACE] = ACTIONS(365),
    [anon_sym_RBRACE] = ACTIONS(365),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(365),
    [anon_sym_for] = ACTIONS(365),
    [anon_sym_if] = ACTIONS(365),
    [anon_sym_let] = ACTIONS(365),
    [anon_sym_PIPE] = ACTIONS(365),
    [anon_sym_AMP] = ACTIONS(365),
    [anon_sym_PIPE_PIPE] = ACTIONS(365),
    [anon_sym_AMP_AMP] = ACTIONS(365),
    [anon_sym_EQ_EQ] = ACTIONS(365),
    [anon_sym_BANG_EQ] = ACTIONS(365),
    [anon_sym_LT] = ACTIONS(365),
    [anon_sym_LT_EQ] = ACTIONS(365),
    [anon_sym_GT] = ACTIONS(365),
    [anon_sym_GT_EQ] = ACTIONS(365),
    [anon_sym_EQ_TILDE] = ACTIONS(365),
    [anon_sym_BANG_TILDE] = ACTIONS(365),
    [anon_sym_PLUS] = ACTIONS(365),
    [anon_sym_DASH] = ACTIONS(365),
    [anon_sym_STAR] = ACTIONS(365),
    [anon_sym_SLASH] = ACTIONS(365),
    [anon_sym_BANG] = ACTIONS(365),
    [anon_sym_LBRACK2] = ACTIONS(371),
    [sym_comment] = ACTIONS(331),
  },
  [81] = {
    [sym_identifier] = ACTIONS(357),
    [anon_sym_LF] = ACTIONS(359),
    [anon_sym_COMMA] = ACTIONS(357),
    [anon_sym_LPAREN] = ACTIONS(357),
    [sym_dot] = ACTIONS(357),
    [anon_sym__] = ACTIONS(357),
    [anon_sym_POUND_DQUOTE] = ACTIONS(357),
    [anon_sym_DQUOTE] = ACTIONS(357),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(357),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(357),
    [anon_sym_len] = ACTIONS(357),
    [anon_sym_close] = ACTIONS(357),
    [anon_sym_and] = ACTIONS(357),
    [anon_sym_or] = ACTIONS(357),
    [anon_sym_div] = ACTIONS(357),
    [anon_sym_mod] = ACTIONS(357),
    [anon_sym_quo] = ACTIONS(357),
    [anon_sym_rem] = ACTIONS(357),
    [sym_number_type] = ACTIONS(357),
    [anon_sym_float] = ACTIONS(357),
    [anon_sym_float32] = ACTIONS(357),
    [anon_sym_float64] = ACTIONS(357),
    [anon_sym_uint] = ACTIONS(357),
    [anon_sym_uint8] = ACTIONS(357),
    [anon_sym_uint16] = ACTIONS(357),
    [anon_sym_uint32] = ACTIONS(357),
    [anon_sym_uint64] = ACTIONS(357),
    [anon_sym_uint128] = ACTIONS(357),
    [anon_sym_int] = ACTIONS(357),
    [anon_sym_int8] = ACTIONS(357),
    [anon_sym_int16] = ACTIONS(357),
    [anon_sym_int32] = ACTIONS(357),
    [anon_sym_int64] = ACTIONS(357),
    [anon_sym_int128] = ACTIONS(357),
    [sym_string_type] = ACTIONS(357),
    [sym_bool_type] = ACTIONS(357),
    [sym_bottom_lit] = ACTIONS(357),
    [sym_null_lit] = ACTIONS(357),
    [sym_bool_lit] = ACTIONS(357),
    [sym_int_lit] = ACTIONS(357),
    [sym_float_lit] = ACTIONS(357),
    [anon_sym_LBRACK] = ACTIONS(357),
    [anon_sym_LBRACE] = ACTIONS(357),
    [anon_sym_RBRACE] = ACTIONS(357),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(357),
    [anon_sym_QMARK] = ACTIONS(361),
    [anon_sym_COLON] = ACTIONS(361),
    [anon_sym_for] = ACTIONS(357),
    [anon_sym_if] = ACTIONS(357),
    [anon_sym_let] = ACTIONS(357),
    [anon_sym_PIPE] = ACTIONS(357),
    [anon_sym_AMP] = ACTIONS(357),
    [anon_sym_PIPE_PIPE] = ACTIONS(357),
    [anon_sym_AMP_AMP] = ACTIONS(357),
    [anon_sym_EQ_EQ] = ACTIONS(357),
    [anon_sym_BANG_EQ] = ACTIONS(357),
    [anon_sym_LT] = ACTIONS(357),
    [anon_sym_LT_EQ] = ACTIONS(357),
    [anon_sym_GT] = ACTIONS(357),
    [anon_sym_GT_EQ] = ACTIONS(357),
    [anon_sym_EQ_TILDE] = ACTIONS(357),
    [anon_sym_BANG_TILDE] = ACTIONS(357),
    [anon_sym_PLUS] = ACTIONS(357),
    [anon_sym_DASH] = ACTIONS(357),
    [anon_sym_STAR] = ACTIONS(357),
    [anon_sym_SLASH] = ACTIONS(357),
    [anon_sym_BANG] = ACTIONS(357),
    [anon_sym_LBRACK2] = ACTIONS(359),
    [sym_comment] = ACTIONS(331),
  },
  [82] = {
    [sym_identifier] = ACTIONS(373),
    [anon_sym_LF] = ACTIONS(375),
    [anon_sym_COMMA] = ACTIONS(373),
    [anon_sym_LPAREN] = ACTIONS(373),
    [sym_dot] = ACTIONS(373),
    [anon_sym__] = ACTIONS(373),
    [anon_sym_POUND_DQUOTE] = ACTIONS(373),
    [anon_sym_DQUOTE] = ACTIONS(373),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(373),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(373),
    [anon_sym_len] = ACTIONS(373),
    [anon_sym_close] = ACTIONS(373),
    [anon_sym_and] = ACTIONS(373),
    [anon_sym_or] = ACTIONS(373),
    [anon_sym_div] = ACTIONS(373),
    [anon_sym_mod] = ACTIONS(373),
    [anon_sym_quo] = ACTIONS(373),
    [anon_sym_rem] = ACTIONS(373),
    [sym_number_type] = ACTIONS(373),
    [anon_sym_float] = ACTIONS(373),
    [anon_sym_float32] = ACTIONS(373),
    [anon_sym_float64] = ACTIONS(373),
    [anon_sym_uint] = ACTIONS(373),
    [anon_sym_uint8] = ACTIONS(373),
    [anon_sym_uint16] = ACTIONS(373),
    [anon_sym_uint32] = ACTIONS(373),
    [anon_sym_uint64] = ACTIONS(373),
    [anon_sym_uint128] = ACTIONS(373),
    [anon_sym_int] = ACTIONS(373),
    [anon_sym_int8] = ACTIONS(373),
    [anon_sym_int16] = ACTIONS(373),
    [anon_sym_int32] = ACTIONS(373),
    [anon_sym_int64] = ACTIONS(373),
    [anon_sym_int128] = ACTIONS(373),
    [sym_string_type] = ACTIONS(373),
    [sym_bool_type] = ACTIONS(373),
    [sym_bottom_lit] = ACTIONS(373),
    [sym_null_lit] = ACTIONS(373),
    [sym_bool_lit] = ACTIONS(373),
    [sym_int_lit] = ACTIONS(373),
    [sym_float_lit] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(373),
    [anon_sym_LBRACE] = ACTIONS(373),
    [anon_sym_RBRACE] = ACTIONS(373),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(373),
    [anon_sym_QMARK] = ACTIONS(361),
    [anon_sym_COLON] = ACTIONS(361),
    [anon_sym_for] = ACTIONS(373),
    [anon_sym_if] = ACTIONS(373),
    [anon_sym_let] = ACTIONS(373),
    [anon_sym_PIPE] = ACTIONS(373),
    [anon_sym_AMP] = ACTIONS(373),
    [anon_sym_PIPE_PIPE] = ACTIONS(373),
    [anon_sym_AMP_AMP] = ACTIONS(373),
    [anon_sym_EQ_EQ] = ACTIONS(373),
    [anon_sym_BANG_EQ] = ACTIONS(373),
    [anon_sym_LT] = ACTIONS(373),
    [anon_sym_LT_EQ] = ACTIONS(373),
    [anon_sym_GT] = ACTIONS(373),
    [anon_sym_GT_EQ] = ACTIONS(373),
    [anon_sym_EQ_TILDE] = ACTIONS(373),
    [anon_sym_BANG_TILDE] = ACTIONS(373),
    [anon_sym_PLUS] = ACTIONS(373),
    [anon_sym_DASH] = ACTIONS(373),
    [anon_sym_STAR] = ACTIONS(373),
    [anon_sym_SLASH] = ACTIONS(373),
    [anon_sym_BANG] = ACTIONS(373),
    [anon_sym_LBRACK2] = ACTIONS(375),
    [sym_comment] = ACTIONS(331),
  },
  [83] = {
    [sym_identifier] = ACTIONS(377),
    [anon_sym_LF] = ACTIONS(379),
    [anon_sym_COMMA] = ACTIONS(377),
    [anon_sym_LPAREN] = ACTIONS(377),
    [sym_dot] = ACTIONS(377),
    [anon_sym__] = ACTIONS(377),
    [anon_sym_POUND_DQUOTE] = ACTIONS(377),
    [anon_sym_DQUOTE] = ACTIONS(377),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(377),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(377),
    [anon_sym_len] = ACTIONS(377),
    [anon_sym_close] = ACTIONS(377),
    [anon_sym_and] = ACTIONS(377),
    [anon_sym_or] = ACTIONS(377),
    [anon_sym_div] = ACTIONS(377),
    [anon_sym_mod] = ACTIONS(377),
    [anon_sym_quo] = ACTIONS(377),
    [anon_sym_rem] = ACTIONS(377),
    [sym_number_type] = ACTIONS(377),
    [anon_sym_float] = ACTIONS(377),
    [anon_sym_float32] = ACTIONS(377),
    [anon_sym_float64] = ACTIONS(377),
    [anon_sym_uint] = ACTIONS(377),
    [anon_sym_uint8] = ACTIONS(377),
    [anon_sym_uint16] = ACTIONS(377),
    [anon_sym_uint32] = ACTIONS(377),
    [anon_sym_uint64] = ACTIONS(377),
    [anon_sym_uint128] = ACTIONS(377),
    [anon_sym_int] = ACTIONS(377),
    [anon_sym_int8] = ACTIONS(377),
    [anon_sym_int16] = ACTIONS(377),
    [anon_sym_int32] = ACTIONS(377),
    [anon_sym_int64] = ACTIONS(377),
    [anon_sym_int128] = ACTIONS(377),
    [sym_string_type] = ACTIONS(377),
    [sym_bool_type] = ACTIONS(377),
    [sym_bottom_lit] = ACTIONS(377),
    [sym_null_lit] = ACTIONS(377),
    [sym_bool_lit] = ACTIONS(377),
    [sym_int_lit] = ACTIONS(377),
    [sym_float_lit] = ACTIONS(377),
    [anon_sym_LBRACK] = ACTIONS(377),
    [anon_sym_LBRACE] = ACTIONS(377),
    [anon_sym_RBRACE] = ACTIONS(377),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(377),
    [anon_sym_QMARK] = ACTIONS(377),
    [anon_sym_COLON] = ACTIONS(377),
    [anon_sym_for] = ACTIONS(377),
    [anon_sym_if] = ACTIONS(377),
    [anon_sym_let] = ACTIONS(377),
    [anon_sym_PIPE] = ACTIONS(377),
    [anon_sym_AMP] = ACTIONS(377),
    [anon_sym_PIPE_PIPE] = ACTIONS(377),
    [anon_sym_AMP_AMP] = ACTIONS(377),
    [anon_sym_EQ_EQ] = ACTIONS(377),
    [anon_sym_BANG_EQ] = ACTIONS(377),
    [anon_sym_LT] = ACTIONS(377),
    [anon_sym_LT_EQ] = ACTIONS(377),
    [anon_sym_GT] = ACTIONS(377),
    [anon_sym_GT_EQ] = ACTIONS(377),
    [anon_sym_EQ_TILDE] = ACTIONS(377),
    [anon_sym_BANG_TILDE] = ACTIONS(377),
    [anon_sym_PLUS] = ACTIONS(377),
    [anon_sym_DASH] = ACTIONS(377),
    [anon_sym_STAR] = ACTIONS(377),
    [anon_sym_SLASH] = ACTIONS(377),
    [anon_sym_BANG] = ACTIONS(377),
    [anon_sym_LBRACK2] = ACTIONS(379),
    [sym_comment] = ACTIONS(331),
  },
  [84] = {
    [sym_identifier] = ACTIONS(381),
    [anon_sym_LF] = ACTIONS(383),
    [anon_sym_COMMA] = ACTIONS(381),
    [anon_sym_LPAREN] = ACTIONS(381),
    [sym_dot] = ACTIONS(381),
    [anon_sym__] = ACTIONS(381),
    [anon_sym_POUND_DQUOTE] = ACTIONS(381),
    [anon_sym_DQUOTE] = ACTIONS(381),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(381),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(381),
    [anon_sym_len] = ACTIONS(381),
    [anon_sym_close] = ACTIONS(381),
    [anon_sym_and] = ACTIONS(381),
    [anon_sym_or] = ACTIONS(381),
    [anon_sym_div] = ACTIONS(381),
    [anon_sym_mod] = ACTIONS(381),
    [anon_sym_quo] = ACTIONS(381),
    [anon_sym_rem] = ACTIONS(381),
    [sym_number_type] = ACTIONS(381),
    [anon_sym_float] = ACTIONS(381),
    [anon_sym_float32] = ACTIONS(381),
    [anon_sym_float64] = ACTIONS(381),
    [anon_sym_uint] = ACTIONS(381),
    [anon_sym_uint8] = ACTIONS(381),
    [anon_sym_uint16] = ACTIONS(381),
    [anon_sym_uint32] = ACTIONS(381),
    [anon_sym_uint64] = ACTIONS(381),
    [anon_sym_uint128] = ACTIONS(381),
    [anon_sym_int] = ACTIONS(381),
    [anon_sym_int8] = ACTIONS(381),
    [anon_sym_int16] = ACTIONS(381),
    [anon_sym_int32] = ACTIONS(381),
    [anon_sym_int64] = ACTIONS(381),
    [anon_sym_int128] = ACTIONS(381),
    [sym_string_type] = ACTIONS(381),
    [sym_bool_type] = ACTIONS(381),
    [sym_bottom_lit] = ACTIONS(381),
    [sym_null_lit] = ACTIONS(381),
    [sym_bool_lit] = ACTIONS(381),
    [sym_int_lit] = ACTIONS(381),
    [sym_float_lit] = ACTIONS(381),
    [anon_sym_LBRACK] = ACTIONS(381),
    [anon_sym_LBRACE] = ACTIONS(381),
    [anon_sym_RBRACE] = ACTIONS(381),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(381),
    [anon_sym_QMARK] = ACTIONS(381),
    [anon_sym_COLON] = ACTIONS(381),
    [anon_sym_for] = ACTIONS(381),
    [anon_sym_if] = ACTIONS(381),
    [anon_sym_let] = ACTIONS(381),
    [anon_sym_PIPE] = ACTIONS(381),
    [anon_sym_AMP] = ACTIONS(381),
    [anon_sym_PIPE_PIPE] = ACTIONS(381),
    [anon_sym_AMP_AMP] = ACTIONS(381),
    [anon_sym_EQ_EQ] = ACTIONS(381),
    [anon_sym_BANG_EQ] = ACTIONS(381),
    [anon_sym_LT] = ACTIONS(381),
    [anon_sym_LT_EQ] = ACTIONS(381),
    [anon_sym_GT] = ACTIONS(381),
    [anon_sym_GT_EQ] = ACTIONS(381),
    [anon_sym_EQ_TILDE] = ACTIONS(381),
    [anon_sym_BANG_TILDE] = ACTIONS(381),
    [anon_sym_PLUS] = ACTIONS(381),
    [anon_sym_DASH] = ACTIONS(381),
    [anon_sym_STAR] = ACTIONS(381),
    [anon_sym_SLASH] = ACTIONS(381),
    [anon_sym_BANG] = ACTIONS(381),
    [anon_sym_LBRACK2] = ACTIONS(383),
    [sym_comment] = ACTIONS(331),
  },
  [85] = {
    [sym_identifier] = ACTIONS(381),
    [anon_sym_COMMA] = ACTIONS(383),
    [anon_sym_LPAREN] = ACTIONS(383),
    [anon_sym_RPAREN] = ACTIONS(383),
    [sym_dot] = ACTIONS(381),
    [anon_sym__] = ACTIONS(381),
    [anon_sym_POUND_DQUOTE] = ACTIONS(381),
    [anon_sym_DQUOTE] = ACTIONS(381),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(383),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(383),
    [anon_sym_len] = ACTIONS(381),
    [anon_sym_close] = ACTIONS(381),
    [anon_sym_and] = ACTIONS(381),
    [anon_sym_or] = ACTIONS(381),
    [anon_sym_div] = ACTIONS(381),
    [anon_sym_mod] = ACTIONS(381),
    [anon_sym_quo] = ACTIONS(381),
    [anon_sym_rem] = ACTIONS(381),
    [sym_number_type] = ACTIONS(381),
    [anon_sym_float] = ACTIONS(381),
    [anon_sym_float32] = ACTIONS(381),
    [anon_sym_float64] = ACTIONS(381),
    [anon_sym_uint] = ACTIONS(381),
    [anon_sym_uint8] = ACTIONS(381),
    [anon_sym_uint16] = ACTIONS(381),
    [anon_sym_uint32] = ACTIONS(381),
    [anon_sym_uint64] = ACTIONS(381),
    [anon_sym_uint128] = ACTIONS(381),
    [anon_sym_int] = ACTIONS(381),
    [anon_sym_int8] = ACTIONS(381),
    [anon_sym_int16] = ACTIONS(381),
    [anon_sym_int32] = ACTIONS(381),
    [anon_sym_int64] = ACTIONS(381),
    [anon_sym_int128] = ACTIONS(381),
    [sym_string_type] = ACTIONS(381),
    [sym_bool_type] = ACTIONS(381),
    [sym_bottom_lit] = ACTIONS(383),
    [sym_null_lit] = ACTIONS(381),
    [sym_bool_lit] = ACTIONS(381),
    [sym_int_lit] = ACTIONS(381),
    [sym_float_lit] = ACTIONS(381),
    [anon_sym_LBRACK] = ACTIONS(381),
    [anon_sym_RBRACK] = ACTIONS(383),
    [anon_sym_LBRACE] = ACTIONS(383),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(383),
    [anon_sym_QMARK] = ACTIONS(383),
    [anon_sym_COLON] = ACTIONS(383),
    [anon_sym_for] = ACTIONS(381),
    [anon_sym_if] = ACTIONS(381),
    [anon_sym_let] = ACTIONS(381),
    [anon_sym_PIPE] = ACTIONS(381),
    [anon_sym_AMP] = ACTIONS(381),
    [anon_sym_PIPE_PIPE] = ACTIONS(383),
    [anon_sym_AMP_AMP] = ACTIONS(383),
    [anon_sym_EQ_EQ] = ACTIONS(383),
    [anon_sym_BANG_EQ] = ACTIONS(383),
    [anon_sym_LT] = ACTIONS(381),
    [anon_sym_LT_EQ] = ACTIONS(383),
    [anon_sym_GT] = ACTIONS(381),
    [anon_sym_GT_EQ] = ACTIONS(383),
    [anon_sym_EQ_TILDE] = ACTIONS(383),
    [anon_sym_BANG_TILDE] = ACTIONS(383),
    [anon_sym_PLUS] = ACTIONS(383),
    [anon_sym_DASH] = ACTIONS(383),
    [anon_sym_STAR] = ACTIONS(383),
    [anon_sym_SLASH] = ACTIONS(381),
    [anon_sym_BANG] = ACTIONS(381),
    [anon_sym_LBRACK2] = ACTIONS(383),
    [sym_comment] = ACTIONS(3),
  },
  [86] = {
    [sym_identifier] = ACTIONS(377),
    [anon_sym_COMMA] = ACTIONS(379),
    [anon_sym_LPAREN] = ACTIONS(379),
    [anon_sym_RPAREN] = ACTIONS(379),
    [sym_dot] = ACTIONS(377),
    [anon_sym__] = ACTIONS(377),
    [anon_sym_POUND_DQUOTE] = ACTIONS(377),
    [anon_sym_DQUOTE] = ACTIONS(377),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(379),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(379),
    [anon_sym_len] = ACTIONS(377),
    [anon_sym_close] = ACTIONS(377),
    [anon_sym_and] = ACTIONS(377),
    [anon_sym_or] = ACTIONS(377),
    [anon_sym_div] = ACTIONS(377),
    [anon_sym_mod] = ACTIONS(377),
    [anon_sym_quo] = ACTIONS(377),
    [anon_sym_rem] = ACTIONS(377),
    [sym_number_type] = ACTIONS(377),
    [anon_sym_float] = ACTIONS(377),
    [anon_sym_float32] = ACTIONS(377),
    [anon_sym_float64] = ACTIONS(377),
    [anon_sym_uint] = ACTIONS(377),
    [anon_sym_uint8] = ACTIONS(377),
    [anon_sym_uint16] = ACTIONS(377),
    [anon_sym_uint32] = ACTIONS(377),
    [anon_sym_uint64] = ACTIONS(377),
    [anon_sym_uint128] = ACTIONS(377),
    [anon_sym_int] = ACTIONS(377),
    [anon_sym_int8] = ACTIONS(377),
    [anon_sym_int16] = ACTIONS(377),
    [anon_sym_int32] = ACTIONS(377),
    [anon_sym_int64] = ACTIONS(377),
    [anon_sym_int128] = ACTIONS(377),
    [sym_string_type] = ACTIONS(377),
    [sym_bool_type] = ACTIONS(377),
    [sym_bottom_lit] = ACTIONS(379),
    [sym_null_lit] = ACTIONS(377),
    [sym_bool_lit] = ACTIONS(377),
    [sym_int_lit] = ACTIONS(377),
    [sym_float_lit] = ACTIONS(377),
    [anon_sym_LBRACK] = ACTIONS(377),
    [anon_sym_RBRACK] = ACTIONS(379),
    [anon_sym_LBRACE] = ACTIONS(379),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(379),
    [anon_sym_QMARK] = ACTIONS(379),
    [anon_sym_COLON] = ACTIONS(379),
    [anon_sym_for] = ACTIONS(377),
    [anon_sym_if] = ACTIONS(377),
    [anon_sym_let] = ACTIONS(377),
    [anon_sym_PIPE] = ACTIONS(377),
    [anon_sym_AMP] = ACTIONS(377),
    [anon_sym_PIPE_PIPE] = ACTIONS(379),
    [anon_sym_AMP_AMP] = ACTIONS(379),
    [anon_sym_EQ_EQ] = ACTIONS(379),
    [anon_sym_BANG_EQ] = ACTIONS(379),
    [anon_sym_LT] = ACTIONS(377),
    [anon_sym_LT_EQ] = ACTIONS(379),
    [anon_sym_GT] = ACTIONS(377),
    [anon_sym_GT_EQ] = ACTIONS(379),
    [anon_sym_EQ_TILDE] = ACTIONS(379),
    [anon_sym_BANG_TILDE] = ACTIONS(379),
    [anon_sym_PLUS] = ACTIONS(379),
    [anon_sym_DASH] = ACTIONS(379),
    [anon_sym_STAR] = ACTIONS(379),
    [anon_sym_SLASH] = ACTIONS(377),
    [anon_sym_BANG] = ACTIONS(377),
    [anon_sym_LBRACK2] = ACTIONS(379),
    [sym_comment] = ACTIONS(3),
  },
  [87] = {
    [sym_selector] = STATE(99),
    [sym_index] = STATE(98),
    [sym_arguments] = STATE(97),
    [sym_identifier] = ACTIONS(365),
    [anon_sym_COMMA] = ACTIONS(367),
    [anon_sym_LPAREN] = ACTIONS(367),
    [sym_dot] = ACTIONS(385),
    [anon_sym__] = ACTIONS(365),
    [anon_sym_POUND_DQUOTE] = ACTIONS(365),
    [anon_sym_DQUOTE] = ACTIONS(365),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(367),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(367),
    [anon_sym_len] = ACTIONS(365),
    [anon_sym_close] = ACTIONS(365),
    [anon_sym_and] = ACTIONS(365),
    [anon_sym_or] = ACTIONS(365),
    [anon_sym_div] = ACTIONS(365),
    [anon_sym_mod] = ACTIONS(365),
    [anon_sym_quo] = ACTIONS(365),
    [anon_sym_rem] = ACTIONS(365),
    [sym_number_type] = ACTIONS(365),
    [anon_sym_float] = ACTIONS(365),
    [anon_sym_float32] = ACTIONS(365),
    [anon_sym_float64] = ACTIONS(365),
    [anon_sym_uint] = ACTIONS(365),
    [anon_sym_uint8] = ACTIONS(365),
    [anon_sym_uint16] = ACTIONS(365),
    [anon_sym_uint32] = ACTIONS(365),
    [anon_sym_uint64] = ACTIONS(365),
    [anon_sym_uint128] = ACTIONS(365),
    [anon_sym_int] = ACTIONS(365),
    [anon_sym_int8] = ACTIONS(365),
    [anon_sym_int16] = ACTIONS(365),
    [anon_sym_int32] = ACTIONS(365),
    [anon_sym_int64] = ACTIONS(365),
    [anon_sym_int128] = ACTIONS(365),
    [sym_string_type] = ACTIONS(365),
    [sym_bool_type] = ACTIONS(365),
    [sym_bottom_lit] = ACTIONS(367),
    [sym_null_lit] = ACTIONS(365),
    [sym_bool_lit] = ACTIONS(365),
    [sym_int_lit] = ACTIONS(365),
    [sym_float_lit] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(365),
    [anon_sym_RBRACK] = ACTIONS(367),
    [anon_sym_LBRACE] = ACTIONS(367),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(367),
    [anon_sym_for] = ACTIONS(365),
    [anon_sym_if] = ACTIONS(365),
    [anon_sym_PIPE] = ACTIONS(365),
    [anon_sym_AMP] = ACTIONS(365),
    [anon_sym_PIPE_PIPE] = ACTIONS(367),
    [anon_sym_AMP_AMP] = ACTIONS(367),
    [anon_sym_EQ_EQ] = ACTIONS(367),
    [anon_sym_BANG_EQ] = ACTIONS(367),
    [anon_sym_LT] = ACTIONS(365),
    [anon_sym_LT_EQ] = ACTIONS(367),
    [anon_sym_GT] = ACTIONS(365),
    [anon_sym_GT_EQ] = ACTIONS(367),
    [anon_sym_EQ_TILDE] = ACTIONS(367),
    [anon_sym_BANG_TILDE] = ACTIONS(367),
    [anon_sym_PLUS] = ACTIONS(367),
    [anon_sym_DASH] = ACTIONS(367),
    [anon_sym_STAR] = ACTIONS(367),
    [anon_sym_SLASH] = ACTIONS(365),
    [anon_sym_BANG] = ACTIONS(365),
    [anon_sym_LBRACK2] = ACTIONS(387),
    [sym_comment] = ACTIONS(3),
  },
  [88] = {
    [sym_identifier] = ACTIONS(389),
    [anon_sym_LF] = ACTIONS(391),
    [anon_sym_COMMA] = ACTIONS(389),
    [anon_sym_LPAREN] = ACTIONS(389),
    [sym_dot] = ACTIONS(389),
    [anon_sym__] = ACTIONS(389),
    [anon_sym_POUND_DQUOTE] = ACTIONS(389),
    [anon_sym_DQUOTE] = ACTIONS(389),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(389),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(389),
    [anon_sym_len] = ACTIONS(389),
    [anon_sym_close] = ACTIONS(389),
    [anon_sym_and] = ACTIONS(389),
    [anon_sym_or] = ACTIONS(389),
    [anon_sym_div] = ACTIONS(389),
    [anon_sym_mod] = ACTIONS(389),
    [anon_sym_quo] = ACTIONS(389),
    [anon_sym_rem] = ACTIONS(389),
    [sym_number_type] = ACTIONS(389),
    [anon_sym_float] = ACTIONS(389),
    [anon_sym_float32] = ACTIONS(389),
    [anon_sym_float64] = ACTIONS(389),
    [anon_sym_uint] = ACTIONS(389),
    [anon_sym_uint8] = ACTIONS(389),
    [anon_sym_uint16] = ACTIONS(389),
    [anon_sym_uint32] = ACTIONS(389),
    [anon_sym_uint64] = ACTIONS(389),
    [anon_sym_uint128] = ACTIONS(389),
    [anon_sym_int] = ACTIONS(389),
    [anon_sym_int8] = ACTIONS(389),
    [anon_sym_int16] = ACTIONS(389),
    [anon_sym_int32] = ACTIONS(389),
    [anon_sym_int64] = ACTIONS(389),
    [anon_sym_int128] = ACTIONS(389),
    [sym_string_type] = ACTIONS(389),
    [sym_bool_type] = ACTIONS(389),
    [sym_bottom_lit] = ACTIONS(389),
    [sym_null_lit] = ACTIONS(389),
    [sym_bool_lit] = ACTIONS(389),
    [sym_int_lit] = ACTIONS(389),
    [sym_float_lit] = ACTIONS(389),
    [anon_sym_LBRACK] = ACTIONS(389),
    [anon_sym_LBRACE] = ACTIONS(389),
    [anon_sym_RBRACE] = ACTIONS(389),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(389),
    [anon_sym_for] = ACTIONS(389),
    [anon_sym_if] = ACTIONS(389),
    [anon_sym_let] = ACTIONS(389),
    [anon_sym_PIPE] = ACTIONS(389),
    [anon_sym_AMP] = ACTIONS(389),
    [anon_sym_PIPE_PIPE] = ACTIONS(389),
    [anon_sym_AMP_AMP] = ACTIONS(389),
    [anon_sym_EQ_EQ] = ACTIONS(389),
    [anon_sym_BANG_EQ] = ACTIONS(389),
    [anon_sym_LT] = ACTIONS(389),
    [anon_sym_LT_EQ] = ACTIONS(389),
    [anon_sym_GT] = ACTIONS(389),
    [anon_sym_GT_EQ] = ACTIONS(389),
    [anon_sym_EQ_TILDE] = ACTIONS(389),
    [anon_sym_BANG_TILDE] = ACTIONS(389),
    [anon_sym_PLUS] = ACTIONS(389),
    [anon_sym_DASH] = ACTIONS(389),
    [anon_sym_STAR] = ACTIONS(389),
    [anon_sym_SLASH] = ACTIONS(389),
    [anon_sym_BANG] = ACTIONS(389),
    [anon_sym_LBRACK2] = ACTIONS(391),
    [sym_comment] = ACTIONS(331),
  },
  [89] = {
    [sym_identifier] = ACTIONS(393),
    [anon_sym_COMMA] = ACTIONS(395),
    [anon_sym_LPAREN] = ACTIONS(395),
    [anon_sym_RPAREN] = ACTIONS(395),
    [sym_dot] = ACTIONS(393),
    [anon_sym__] = ACTIONS(393),
    [anon_sym_POUND_DQUOTE] = ACTIONS(393),
    [anon_sym_DQUOTE] = ACTIONS(393),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(395),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(395),
    [anon_sym_len] = ACTIONS(393),
    [anon_sym_close] = ACTIONS(393),
    [anon_sym_and] = ACTIONS(393),
    [anon_sym_or] = ACTIONS(393),
    [anon_sym_div] = ACTIONS(393),
    [anon_sym_mod] = ACTIONS(393),
    [anon_sym_quo] = ACTIONS(393),
    [anon_sym_rem] = ACTIONS(393),
    [sym_number_type] = ACTIONS(393),
    [anon_sym_float] = ACTIONS(393),
    [anon_sym_float32] = ACTIONS(393),
    [anon_sym_float64] = ACTIONS(393),
    [anon_sym_uint] = ACTIONS(393),
    [anon_sym_uint8] = ACTIONS(393),
    [anon_sym_uint16] = ACTIONS(393),
    [anon_sym_uint32] = ACTIONS(393),
    [anon_sym_uint64] = ACTIONS(393),
    [anon_sym_uint128] = ACTIONS(393),
    [anon_sym_int] = ACTIONS(393),
    [anon_sym_int8] = ACTIONS(393),
    [anon_sym_int16] = ACTIONS(393),
    [anon_sym_int32] = ACTIONS(393),
    [anon_sym_int64] = ACTIONS(393),
    [anon_sym_int128] = ACTIONS(393),
    [sym_string_type] = ACTIONS(393),
    [sym_bool_type] = ACTIONS(393),
    [sym_bottom_lit] = ACTIONS(395),
    [sym_null_lit] = ACTIONS(393),
    [sym_bool_lit] = ACTIONS(393),
    [sym_int_lit] = ACTIONS(393),
    [sym_float_lit] = ACTIONS(393),
    [anon_sym_LBRACK] = ACTIONS(393),
    [anon_sym_RBRACK] = ACTIONS(395),
    [anon_sym_LBRACE] = ACTIONS(395),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(395),
    [anon_sym_for] = ACTIONS(393),
    [anon_sym_if] = ACTIONS(393),
    [anon_sym_let] = ACTIONS(393),
    [anon_sym_PIPE] = ACTIONS(393),
    [anon_sym_AMP] = ACTIONS(393),
    [anon_sym_PIPE_PIPE] = ACTIONS(395),
    [anon_sym_AMP_AMP] = ACTIONS(395),
    [anon_sym_EQ_EQ] = ACTIONS(395),
    [anon_sym_BANG_EQ] = ACTIONS(395),
    [anon_sym_LT] = ACTIONS(393),
    [anon_sym_LT_EQ] = ACTIONS(395),
    [anon_sym_GT] = ACTIONS(393),
    [anon_sym_GT_EQ] = ACTIONS(395),
    [anon_sym_EQ_TILDE] = ACTIONS(395),
    [anon_sym_BANG_TILDE] = ACTIONS(395),
    [anon_sym_PLUS] = ACTIONS(395),
    [anon_sym_DASH] = ACTIONS(395),
    [anon_sym_STAR] = ACTIONS(395),
    [anon_sym_SLASH] = ACTIONS(393),
    [anon_sym_BANG] = ACTIONS(393),
    [anon_sym_LBRACK2] = ACTIONS(395),
    [sym_comment] = ACTIONS(3),
  },
  [90] = {
    [sym_identifier] = ACTIONS(397),
    [anon_sym_COMMA] = ACTIONS(399),
    [anon_sym_LPAREN] = ACTIONS(399),
    [anon_sym_RPAREN] = ACTIONS(399),
    [sym_dot] = ACTIONS(397),
    [anon_sym__] = ACTIONS(397),
    [anon_sym_POUND_DQUOTE] = ACTIONS(397),
    [anon_sym_DQUOTE] = ACTIONS(397),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(399),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(399),
    [anon_sym_len] = ACTIONS(397),
    [anon_sym_close] = ACTIONS(397),
    [anon_sym_and] = ACTIONS(397),
    [anon_sym_or] = ACTIONS(397),
    [anon_sym_div] = ACTIONS(397),
    [anon_sym_mod] = ACTIONS(397),
    [anon_sym_quo] = ACTIONS(397),
    [anon_sym_rem] = ACTIONS(397),
    [sym_number_type] = ACTIONS(397),
    [anon_sym_float] = ACTIONS(397),
    [anon_sym_float32] = ACTIONS(397),
    [anon_sym_float64] = ACTIONS(397),
    [anon_sym_uint] = ACTIONS(397),
    [anon_sym_uint8] = ACTIONS(397),
    [anon_sym_uint16] = ACTIONS(397),
    [anon_sym_uint32] = ACTIONS(397),
    [anon_sym_uint64] = ACTIONS(397),
    [anon_sym_uint128] = ACTIONS(397),
    [anon_sym_int] = ACTIONS(397),
    [anon_sym_int8] = ACTIONS(397),
    [anon_sym_int16] = ACTIONS(397),
    [anon_sym_int32] = ACTIONS(397),
    [anon_sym_int64] = ACTIONS(397),
    [anon_sym_int128] = ACTIONS(397),
    [sym_string_type] = ACTIONS(397),
    [sym_bool_type] = ACTIONS(397),
    [sym_bottom_lit] = ACTIONS(399),
    [sym_null_lit] = ACTIONS(397),
    [sym_bool_lit] = ACTIONS(397),
    [sym_int_lit] = ACTIONS(397),
    [sym_float_lit] = ACTIONS(397),
    [anon_sym_LBRACK] = ACTIONS(397),
    [anon_sym_RBRACK] = ACTIONS(399),
    [anon_sym_LBRACE] = ACTIONS(399),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(399),
    [anon_sym_for] = ACTIONS(397),
    [anon_sym_if] = ACTIONS(397),
    [anon_sym_let] = ACTIONS(397),
    [anon_sym_PIPE] = ACTIONS(397),
    [anon_sym_AMP] = ACTIONS(397),
    [anon_sym_PIPE_PIPE] = ACTIONS(399),
    [anon_sym_AMP_AMP] = ACTIONS(399),
    [anon_sym_EQ_EQ] = ACTIONS(399),
    [anon_sym_BANG_EQ] = ACTIONS(399),
    [anon_sym_LT] = ACTIONS(397),
    [anon_sym_LT_EQ] = ACTIONS(399),
    [anon_sym_GT] = ACTIONS(397),
    [anon_sym_GT_EQ] = ACTIONS(399),
    [anon_sym_EQ_TILDE] = ACTIONS(399),
    [anon_sym_BANG_TILDE] = ACTIONS(399),
    [anon_sym_PLUS] = ACTIONS(399),
    [anon_sym_DASH] = ACTIONS(399),
    [anon_sym_STAR] = ACTIONS(399),
    [anon_sym_SLASH] = ACTIONS(397),
    [anon_sym_BANG] = ACTIONS(397),
    [anon_sym_LBRACK2] = ACTIONS(399),
    [sym_comment] = ACTIONS(3),
  },
  [91] = {
    [sym_identifier] = ACTIONS(401),
    [anon_sym_COMMA] = ACTIONS(403),
    [anon_sym_LPAREN] = ACTIONS(403),
    [anon_sym_RPAREN] = ACTIONS(403),
    [sym_dot] = ACTIONS(401),
    [anon_sym__] = ACTIONS(401),
    [anon_sym_POUND_DQUOTE] = ACTIONS(401),
    [anon_sym_DQUOTE] = ACTIONS(401),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(403),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(403),
    [anon_sym_len] = ACTIONS(401),
    [anon_sym_close] = ACTIONS(401),
    [anon_sym_and] = ACTIONS(401),
    [anon_sym_or] = ACTIONS(401),
    [anon_sym_div] = ACTIONS(401),
    [anon_sym_mod] = ACTIONS(401),
    [anon_sym_quo] = ACTIONS(401),
    [anon_sym_rem] = ACTIONS(401),
    [sym_number_type] = ACTIONS(401),
    [anon_sym_float] = ACTIONS(401),
    [anon_sym_float32] = ACTIONS(401),
    [anon_sym_float64] = ACTIONS(401),
    [anon_sym_uint] = ACTIONS(401),
    [anon_sym_uint8] = ACTIONS(401),
    [anon_sym_uint16] = ACTIONS(401),
    [anon_sym_uint32] = ACTIONS(401),
    [anon_sym_uint64] = ACTIONS(401),
    [anon_sym_uint128] = ACTIONS(401),
    [anon_sym_int] = ACTIONS(401),
    [anon_sym_int8] = ACTIONS(401),
    [anon_sym_int16] = ACTIONS(401),
    [anon_sym_int32] = ACTIONS(401),
    [anon_sym_int64] = ACTIONS(401),
    [anon_sym_int128] = ACTIONS(401),
    [sym_string_type] = ACTIONS(401),
    [sym_bool_type] = ACTIONS(401),
    [sym_bottom_lit] = ACTIONS(403),
    [sym_null_lit] = ACTIONS(401),
    [sym_bool_lit] = ACTIONS(401),
    [sym_int_lit] = ACTIONS(401),
    [sym_float_lit] = ACTIONS(401),
    [anon_sym_LBRACK] = ACTIONS(401),
    [anon_sym_RBRACK] = ACTIONS(403),
    [anon_sym_LBRACE] = ACTIONS(403),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(403),
    [anon_sym_for] = ACTIONS(401),
    [anon_sym_if] = ACTIONS(401),
    [anon_sym_let] = ACTIONS(401),
    [anon_sym_PIPE] = ACTIONS(401),
    [anon_sym_AMP] = ACTIONS(401),
    [anon_sym_PIPE_PIPE] = ACTIONS(403),
    [anon_sym_AMP_AMP] = ACTIONS(403),
    [anon_sym_EQ_EQ] = ACTIONS(403),
    [anon_sym_BANG_EQ] = ACTIONS(403),
    [anon_sym_LT] = ACTIONS(401),
    [anon_sym_LT_EQ] = ACTIONS(403),
    [anon_sym_GT] = ACTIONS(401),
    [anon_sym_GT_EQ] = ACTIONS(403),
    [anon_sym_EQ_TILDE] = ACTIONS(403),
    [anon_sym_BANG_TILDE] = ACTIONS(403),
    [anon_sym_PLUS] = ACTIONS(403),
    [anon_sym_DASH] = ACTIONS(403),
    [anon_sym_STAR] = ACTIONS(403),
    [anon_sym_SLASH] = ACTIONS(401),
    [anon_sym_BANG] = ACTIONS(401),
    [anon_sym_LBRACK2] = ACTIONS(403),
    [sym_comment] = ACTIONS(3),
  },
  [92] = {
    [sym_identifier] = ACTIONS(405),
    [anon_sym_COMMA] = ACTIONS(407),
    [anon_sym_LPAREN] = ACTIONS(407),
    [anon_sym_RPAREN] = ACTIONS(407),
    [sym_dot] = ACTIONS(405),
    [anon_sym__] = ACTIONS(405),
    [anon_sym_POUND_DQUOTE] = ACTIONS(405),
    [anon_sym_DQUOTE] = ACTIONS(405),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(407),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(407),
    [anon_sym_len] = ACTIONS(405),
    [anon_sym_close] = ACTIONS(405),
    [anon_sym_and] = ACTIONS(405),
    [anon_sym_or] = ACTIONS(405),
    [anon_sym_div] = ACTIONS(405),
    [anon_sym_mod] = ACTIONS(405),
    [anon_sym_quo] = ACTIONS(405),
    [anon_sym_rem] = ACTIONS(405),
    [sym_number_type] = ACTIONS(405),
    [anon_sym_float] = ACTIONS(405),
    [anon_sym_float32] = ACTIONS(405),
    [anon_sym_float64] = ACTIONS(405),
    [anon_sym_uint] = ACTIONS(405),
    [anon_sym_uint8] = ACTIONS(405),
    [anon_sym_uint16] = ACTIONS(405),
    [anon_sym_uint32] = ACTIONS(405),
    [anon_sym_uint64] = ACTIONS(405),
    [anon_sym_uint128] = ACTIONS(405),
    [anon_sym_int] = ACTIONS(405),
    [anon_sym_int8] = ACTIONS(405),
    [anon_sym_int16] = ACTIONS(405),
    [anon_sym_int32] = ACTIONS(405),
    [anon_sym_int64] = ACTIONS(405),
    [anon_sym_int128] = ACTIONS(405),
    [sym_string_type] = ACTIONS(405),
    [sym_bool_type] = ACTIONS(405),
    [sym_bottom_lit] = ACTIONS(407),
    [sym_null_lit] = ACTIONS(405),
    [sym_bool_lit] = ACTIONS(405),
    [sym_int_lit] = ACTIONS(405),
    [sym_float_lit] = ACTIONS(405),
    [anon_sym_LBRACK] = ACTIONS(405),
    [anon_sym_RBRACK] = ACTIONS(407),
    [anon_sym_LBRACE] = ACTIONS(407),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(407),
    [anon_sym_for] = ACTIONS(405),
    [anon_sym_if] = ACTIONS(405),
    [anon_sym_let] = ACTIONS(405),
    [anon_sym_PIPE] = ACTIONS(405),
    [anon_sym_AMP] = ACTIONS(405),
    [anon_sym_PIPE_PIPE] = ACTIONS(407),
    [anon_sym_AMP_AMP] = ACTIONS(407),
    [anon_sym_EQ_EQ] = ACTIONS(407),
    [anon_sym_BANG_EQ] = ACTIONS(407),
    [anon_sym_LT] = ACTIONS(405),
    [anon_sym_LT_EQ] = ACTIONS(407),
    [anon_sym_GT] = ACTIONS(405),
    [anon_sym_GT_EQ] = ACTIONS(407),
    [anon_sym_EQ_TILDE] = ACTIONS(407),
    [anon_sym_BANG_TILDE] = ACTIONS(407),
    [anon_sym_PLUS] = ACTIONS(407),
    [anon_sym_DASH] = ACTIONS(407),
    [anon_sym_STAR] = ACTIONS(407),
    [anon_sym_SLASH] = ACTIONS(405),
    [anon_sym_BANG] = ACTIONS(405),
    [anon_sym_LBRACK2] = ACTIONS(407),
    [sym_comment] = ACTIONS(3),
  },
  [93] = {
    [sym_identifier] = ACTIONS(409),
    [anon_sym_COMMA] = ACTIONS(411),
    [anon_sym_LPAREN] = ACTIONS(411),
    [anon_sym_RPAREN] = ACTIONS(411),
    [sym_dot] = ACTIONS(409),
    [anon_sym__] = ACTIONS(409),
    [anon_sym_POUND_DQUOTE] = ACTIONS(409),
    [anon_sym_DQUOTE] = ACTIONS(409),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(411),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(411),
    [anon_sym_len] = ACTIONS(409),
    [anon_sym_close] = ACTIONS(409),
    [anon_sym_and] = ACTIONS(409),
    [anon_sym_or] = ACTIONS(409),
    [anon_sym_div] = ACTIONS(409),
    [anon_sym_mod] = ACTIONS(409),
    [anon_sym_quo] = ACTIONS(409),
    [anon_sym_rem] = ACTIONS(409),
    [sym_number_type] = ACTIONS(409),
    [anon_sym_float] = ACTIONS(409),
    [anon_sym_float32] = ACTIONS(409),
    [anon_sym_float64] = ACTIONS(409),
    [anon_sym_uint] = ACTIONS(409),
    [anon_sym_uint8] = ACTIONS(409),
    [anon_sym_uint16] = ACTIONS(409),
    [anon_sym_uint32] = ACTIONS(409),
    [anon_sym_uint64] = ACTIONS(409),
    [anon_sym_uint128] = ACTIONS(409),
    [anon_sym_int] = ACTIONS(409),
    [anon_sym_int8] = ACTIONS(409),
    [anon_sym_int16] = ACTIONS(409),
    [anon_sym_int32] = ACTIONS(409),
    [anon_sym_int64] = ACTIONS(409),
    [anon_sym_int128] = ACTIONS(409),
    [sym_string_type] = ACTIONS(409),
    [sym_bool_type] = ACTIONS(409),
    [sym_bottom_lit] = ACTIONS(411),
    [sym_null_lit] = ACTIONS(409),
    [sym_bool_lit] = ACTIONS(409),
    [sym_int_lit] = ACTIONS(409),
    [sym_float_lit] = ACTIONS(409),
    [anon_sym_LBRACK] = ACTIONS(409),
    [anon_sym_RBRACK] = ACTIONS(411),
    [anon_sym_LBRACE] = ACTIONS(411),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(411),
    [anon_sym_for] = ACTIONS(409),
    [anon_sym_if] = ACTIONS(409),
    [anon_sym_let] = ACTIONS(409),
    [anon_sym_PIPE] = ACTIONS(409),
    [anon_sym_AMP] = ACTIONS(409),
    [anon_sym_PIPE_PIPE] = ACTIONS(411),
    [anon_sym_AMP_AMP] = ACTIONS(411),
    [anon_sym_EQ_EQ] = ACTIONS(411),
    [anon_sym_BANG_EQ] = ACTIONS(411),
    [anon_sym_LT] = ACTIONS(409),
    [anon_sym_LT_EQ] = ACTIONS(411),
    [anon_sym_GT] = ACTIONS(409),
    [anon_sym_GT_EQ] = ACTIONS(411),
    [anon_sym_EQ_TILDE] = ACTIONS(411),
    [anon_sym_BANG_TILDE] = ACTIONS(411),
    [anon_sym_PLUS] = ACTIONS(411),
    [anon_sym_DASH] = ACTIONS(411),
    [anon_sym_STAR] = ACTIONS(411),
    [anon_sym_SLASH] = ACTIONS(409),
    [anon_sym_BANG] = ACTIONS(409),
    [anon_sym_LBRACK2] = ACTIONS(411),
    [sym_comment] = ACTIONS(3),
  },
  [94] = {
    [sym_identifier] = ACTIONS(413),
    [anon_sym_LF] = ACTIONS(415),
    [anon_sym_COMMA] = ACTIONS(413),
    [anon_sym_LPAREN] = ACTIONS(413),
    [sym_dot] = ACTIONS(413),
    [anon_sym__] = ACTIONS(413),
    [anon_sym_POUND_DQUOTE] = ACTIONS(413),
    [anon_sym_DQUOTE] = ACTIONS(413),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(413),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(413),
    [anon_sym_len] = ACTIONS(413),
    [anon_sym_close] = ACTIONS(413),
    [anon_sym_and] = ACTIONS(413),
    [anon_sym_or] = ACTIONS(413),
    [anon_sym_div] = ACTIONS(413),
    [anon_sym_mod] = ACTIONS(413),
    [anon_sym_quo] = ACTIONS(413),
    [anon_sym_rem] = ACTIONS(413),
    [sym_number_type] = ACTIONS(413),
    [anon_sym_float] = ACTIONS(413),
    [anon_sym_float32] = ACTIONS(413),
    [anon_sym_float64] = ACTIONS(413),
    [anon_sym_uint] = ACTIONS(413),
    [anon_sym_uint8] = ACTIONS(413),
    [anon_sym_uint16] = ACTIONS(413),
    [anon_sym_uint32] = ACTIONS(413),
    [anon_sym_uint64] = ACTIONS(413),
    [anon_sym_uint128] = ACTIONS(413),
    [anon_sym_int] = ACTIONS(413),
    [anon_sym_int8] = ACTIONS(413),
    [anon_sym_int16] = ACTIONS(413),
    [anon_sym_int32] = ACTIONS(413),
    [anon_sym_int64] = ACTIONS(413),
    [anon_sym_int128] = ACTIONS(413),
    [sym_string_type] = ACTIONS(413),
    [sym_bool_type] = ACTIONS(413),
    [sym_bottom_lit] = ACTIONS(413),
    [sym_null_lit] = ACTIONS(413),
    [sym_bool_lit] = ACTIONS(413),
    [sym_int_lit] = ACTIONS(413),
    [sym_float_lit] = ACTIONS(413),
    [anon_sym_LBRACK] = ACTIONS(413),
    [anon_sym_LBRACE] = ACTIONS(413),
    [anon_sym_RBRACE] = ACTIONS(413),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(413),
    [anon_sym_for] = ACTIONS(413),
    [anon_sym_if] = ACTIONS(413),
    [anon_sym_let] = ACTIONS(413),
    [anon_sym_PIPE] = ACTIONS(413),
    [anon_sym_AMP] = ACTIONS(413),
    [anon_sym_PIPE_PIPE] = ACTIONS(413),
    [anon_sym_AMP_AMP] = ACTIONS(413),
    [anon_sym_EQ_EQ] = ACTIONS(413),
    [anon_sym_BANG_EQ] = ACTIONS(413),
    [anon_sym_LT] = ACTIONS(413),
    [anon_sym_LT_EQ] = ACTIONS(413),
    [anon_sym_GT] = ACTIONS(413),
    [anon_sym_GT_EQ] = ACTIONS(413),
    [anon_sym_EQ_TILDE] = ACTIONS(413),
    [anon_sym_BANG_TILDE] = ACTIONS(413),
    [anon_sym_PLUS] = ACTIONS(413),
    [anon_sym_DASH] = ACTIONS(413),
    [anon_sym_STAR] = ACTIONS(413),
    [anon_sym_SLASH] = ACTIONS(413),
    [anon_sym_BANG] = ACTIONS(413),
    [anon_sym_LBRACK2] = ACTIONS(415),
    [sym_comment] = ACTIONS(331),
  },
  [95] = {
    [sym_identifier] = ACTIONS(417),
    [anon_sym_LF] = ACTIONS(419),
    [anon_sym_COMMA] = ACTIONS(417),
    [anon_sym_LPAREN] = ACTIONS(417),
    [sym_dot] = ACTIONS(417),
    [anon_sym__] = ACTIONS(417),
    [anon_sym_POUND_DQUOTE] = ACTIONS(417),
    [anon_sym_DQUOTE] = ACTIONS(417),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(417),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(417),
    [anon_sym_len] = ACTIONS(417),
    [anon_sym_close] = ACTIONS(417),
    [anon_sym_and] = ACTIONS(417),
    [anon_sym_or] = ACTIONS(417),
    [anon_sym_div] = ACTIONS(417),
    [anon_sym_mod] = ACTIONS(417),
    [anon_sym_quo] = ACTIONS(417),
    [anon_sym_rem] = ACTIONS(417),
    [sym_number_type] = ACTIONS(417),
    [anon_sym_float] = ACTIONS(417),
    [anon_sym_float32] = ACTIONS(417),
    [anon_sym_float64] = ACTIONS(417),
    [anon_sym_uint] = ACTIONS(417),
    [anon_sym_uint8] = ACTIONS(417),
    [anon_sym_uint16] = ACTIONS(417),
    [anon_sym_uint32] = ACTIONS(417),
    [anon_sym_uint64] = ACTIONS(417),
    [anon_sym_uint128] = ACTIONS(417),
    [anon_sym_int] = ACTIONS(417),
    [anon_sym_int8] = ACTIONS(417),
    [anon_sym_int16] = ACTIONS(417),
    [anon_sym_int32] = ACTIONS(417),
    [anon_sym_int64] = ACTIONS(417),
    [anon_sym_int128] = ACTIONS(417),
    [sym_string_type] = ACTIONS(417),
    [sym_bool_type] = ACTIONS(417),
    [sym_bottom_lit] = ACTIONS(417),
    [sym_null_lit] = ACTIONS(417),
    [sym_bool_lit] = ACTIONS(417),
    [sym_int_lit] = ACTIONS(417),
    [sym_float_lit] = ACTIONS(417),
    [anon_sym_LBRACK] = ACTIONS(417),
    [anon_sym_LBRACE] = ACTIONS(417),
    [anon_sym_RBRACE] = ACTIONS(417),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(417),
    [anon_sym_for] = ACTIONS(417),
    [anon_sym_if] = ACTIONS(417),
    [anon_sym_let] = ACTIONS(417),
    [anon_sym_PIPE] = ACTIONS(417),
    [anon_sym_AMP] = ACTIONS(417),
    [anon_sym_PIPE_PIPE] = ACTIONS(417),
    [anon_sym_AMP_AMP] = ACTIONS(417),
    [anon_sym_EQ_EQ] = ACTIONS(417),
    [anon_sym_BANG_EQ] = ACTIONS(417),
    [anon_sym_LT] = ACTIONS(417),
    [anon_sym_LT_EQ] = ACTIONS(417),
    [anon_sym_GT] = ACTIONS(417),
    [anon_sym_GT_EQ] = ACTIONS(417),
    [anon_sym_EQ_TILDE] = ACTIONS(417),
    [anon_sym_BANG_TILDE] = ACTIONS(417),
    [anon_sym_PLUS] = ACTIONS(417),
    [anon_sym_DASH] = ACTIONS(417),
    [anon_sym_STAR] = ACTIONS(417),
    [anon_sym_SLASH] = ACTIONS(417),
    [anon_sym_BANG] = ACTIONS(417),
    [anon_sym_LBRACK2] = ACTIONS(419),
    [sym_comment] = ACTIONS(331),
  },
  [96] = {
    [sym_identifier] = ACTIONS(421),
    [anon_sym_LF] = ACTIONS(423),
    [anon_sym_COMMA] = ACTIONS(421),
    [anon_sym_LPAREN] = ACTIONS(421),
    [sym_dot] = ACTIONS(421),
    [anon_sym__] = ACTIONS(421),
    [anon_sym_POUND_DQUOTE] = ACTIONS(421),
    [anon_sym_DQUOTE] = ACTIONS(421),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(421),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(421),
    [anon_sym_len] = ACTIONS(421),
    [anon_sym_close] = ACTIONS(421),
    [anon_sym_and] = ACTIONS(421),
    [anon_sym_or] = ACTIONS(421),
    [anon_sym_div] = ACTIONS(421),
    [anon_sym_mod] = ACTIONS(421),
    [anon_sym_quo] = ACTIONS(421),
    [anon_sym_rem] = ACTIONS(421),
    [sym_number_type] = ACTIONS(421),
    [anon_sym_float] = ACTIONS(421),
    [anon_sym_float32] = ACTIONS(421),
    [anon_sym_float64] = ACTIONS(421),
    [anon_sym_uint] = ACTIONS(421),
    [anon_sym_uint8] = ACTIONS(421),
    [anon_sym_uint16] = ACTIONS(421),
    [anon_sym_uint32] = ACTIONS(421),
    [anon_sym_uint64] = ACTIONS(421),
    [anon_sym_uint128] = ACTIONS(421),
    [anon_sym_int] = ACTIONS(421),
    [anon_sym_int8] = ACTIONS(421),
    [anon_sym_int16] = ACTIONS(421),
    [anon_sym_int32] = ACTIONS(421),
    [anon_sym_int64] = ACTIONS(421),
    [anon_sym_int128] = ACTIONS(421),
    [sym_string_type] = ACTIONS(421),
    [sym_bool_type] = ACTIONS(421),
    [sym_bottom_lit] = ACTIONS(421),
    [sym_null_lit] = ACTIONS(421),
    [sym_bool_lit] = ACTIONS(421),
    [sym_int_lit] = ACTIONS(421),
    [sym_float_lit] = ACTIONS(421),
    [anon_sym_LBRACK] = ACTIONS(421),
    [anon_sym_LBRACE] = ACTIONS(421),
    [anon_sym_RBRACE] = ACTIONS(421),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(421),
    [anon_sym_for] = ACTIONS(421),
    [anon_sym_if] = ACTIONS(421),
    [anon_sym_let] = ACTIONS(421),
    [anon_sym_PIPE] = ACTIONS(421),
    [anon_sym_AMP] = ACTIONS(421),
    [anon_sym_PIPE_PIPE] = ACTIONS(421),
    [anon_sym_AMP_AMP] = ACTIONS(421),
    [anon_sym_EQ_EQ] = ACTIONS(421),
    [anon_sym_BANG_EQ] = ACTIONS(421),
    [anon_sym_LT] = ACTIONS(421),
    [anon_sym_LT_EQ] = ACTIONS(421),
    [anon_sym_GT] = ACTIONS(421),
    [anon_sym_GT_EQ] = ACTIONS(421),
    [anon_sym_EQ_TILDE] = ACTIONS(421),
    [anon_sym_BANG_TILDE] = ACTIONS(421),
    [anon_sym_PLUS] = ACTIONS(421),
    [anon_sym_DASH] = ACTIONS(421),
    [anon_sym_STAR] = ACTIONS(421),
    [anon_sym_SLASH] = ACTIONS(421),
    [anon_sym_BANG] = ACTIONS(421),
    [anon_sym_LBRACK2] = ACTIONS(423),
    [sym_comment] = ACTIONS(331),
  },
  [97] = {
    [sym_identifier] = ACTIONS(421),
    [anon_sym_COMMA] = ACTIONS(423),
    [anon_sym_LPAREN] = ACTIONS(423),
    [anon_sym_RPAREN] = ACTIONS(423),
    [sym_dot] = ACTIONS(421),
    [anon_sym__] = ACTIONS(421),
    [anon_sym_POUND_DQUOTE] = ACTIONS(421),
    [anon_sym_DQUOTE] = ACTIONS(421),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(423),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(423),
    [anon_sym_len] = ACTIONS(421),
    [anon_sym_close] = ACTIONS(421),
    [anon_sym_and] = ACTIONS(421),
    [anon_sym_or] = ACTIONS(421),
    [anon_sym_div] = ACTIONS(421),
    [anon_sym_mod] = ACTIONS(421),
    [anon_sym_quo] = ACTIONS(421),
    [anon_sym_rem] = ACTIONS(421),
    [sym_number_type] = ACTIONS(421),
    [anon_sym_float] = ACTIONS(421),
    [anon_sym_float32] = ACTIONS(421),
    [anon_sym_float64] = ACTIONS(421),
    [anon_sym_uint] = ACTIONS(421),
    [anon_sym_uint8] = ACTIONS(421),
    [anon_sym_uint16] = ACTIONS(421),
    [anon_sym_uint32] = ACTIONS(421),
    [anon_sym_uint64] = ACTIONS(421),
    [anon_sym_uint128] = ACTIONS(421),
    [anon_sym_int] = ACTIONS(421),
    [anon_sym_int8] = ACTIONS(421),
    [anon_sym_int16] = ACTIONS(421),
    [anon_sym_int32] = ACTIONS(421),
    [anon_sym_int64] = ACTIONS(421),
    [anon_sym_int128] = ACTIONS(421),
    [sym_string_type] = ACTIONS(421),
    [sym_bool_type] = ACTIONS(421),
    [sym_bottom_lit] = ACTIONS(423),
    [sym_null_lit] = ACTIONS(421),
    [sym_bool_lit] = ACTIONS(421),
    [sym_int_lit] = ACTIONS(421),
    [sym_float_lit] = ACTIONS(421),
    [anon_sym_LBRACK] = ACTIONS(421),
    [anon_sym_RBRACK] = ACTIONS(423),
    [anon_sym_LBRACE] = ACTIONS(423),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(423),
    [anon_sym_for] = ACTIONS(421),
    [anon_sym_if] = ACTIONS(421),
    [anon_sym_let] = ACTIONS(421),
    [anon_sym_PIPE] = ACTIONS(421),
    [anon_sym_AMP] = ACTIONS(421),
    [anon_sym_PIPE_PIPE] = ACTIONS(423),
    [anon_sym_AMP_AMP] = ACTIONS(423),
    [anon_sym_EQ_EQ] = ACTIONS(423),
    [anon_sym_BANG_EQ] = ACTIONS(423),
    [anon_sym_LT] = ACTIONS(421),
    [anon_sym_LT_EQ] = ACTIONS(423),
    [anon_sym_GT] = ACTIONS(421),
    [anon_sym_GT_EQ] = ACTIONS(423),
    [anon_sym_EQ_TILDE] = ACTIONS(423),
    [anon_sym_BANG_TILDE] = ACTIONS(423),
    [anon_sym_PLUS] = ACTIONS(423),
    [anon_sym_DASH] = ACTIONS(423),
    [anon_sym_STAR] = ACTIONS(423),
    [anon_sym_SLASH] = ACTIONS(421),
    [anon_sym_BANG] = ACTIONS(421),
    [anon_sym_LBRACK2] = ACTIONS(423),
    [sym_comment] = ACTIONS(3),
  },
  [98] = {
    [sym_identifier] = ACTIONS(417),
    [anon_sym_COMMA] = ACTIONS(419),
    [anon_sym_LPAREN] = ACTIONS(419),
    [anon_sym_RPAREN] = ACTIONS(419),
    [sym_dot] = ACTIONS(417),
    [anon_sym__] = ACTIONS(417),
    [anon_sym_POUND_DQUOTE] = ACTIONS(417),
    [anon_sym_DQUOTE] = ACTIONS(417),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(419),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(419),
    [anon_sym_len] = ACTIONS(417),
    [anon_sym_close] = ACTIONS(417),
    [anon_sym_and] = ACTIONS(417),
    [anon_sym_or] = ACTIONS(417),
    [anon_sym_div] = ACTIONS(417),
    [anon_sym_mod] = ACTIONS(417),
    [anon_sym_quo] = ACTIONS(417),
    [anon_sym_rem] = ACTIONS(417),
    [sym_number_type] = ACTIONS(417),
    [anon_sym_float] = ACTIONS(417),
    [anon_sym_float32] = ACTIONS(417),
    [anon_sym_float64] = ACTIONS(417),
    [anon_sym_uint] = ACTIONS(417),
    [anon_sym_uint8] = ACTIONS(417),
    [anon_sym_uint16] = ACTIONS(417),
    [anon_sym_uint32] = ACTIONS(417),
    [anon_sym_uint64] = ACTIONS(417),
    [anon_sym_uint128] = ACTIONS(417),
    [anon_sym_int] = ACTIONS(417),
    [anon_sym_int8] = ACTIONS(417),
    [anon_sym_int16] = ACTIONS(417),
    [anon_sym_int32] = ACTIONS(417),
    [anon_sym_int64] = ACTIONS(417),
    [anon_sym_int128] = ACTIONS(417),
    [sym_string_type] = ACTIONS(417),
    [sym_bool_type] = ACTIONS(417),
    [sym_bottom_lit] = ACTIONS(419),
    [sym_null_lit] = ACTIONS(417),
    [sym_bool_lit] = ACTIONS(417),
    [sym_int_lit] = ACTIONS(417),
    [sym_float_lit] = ACTIONS(417),
    [anon_sym_LBRACK] = ACTIONS(417),
    [anon_sym_RBRACK] = ACTIONS(419),
    [anon_sym_LBRACE] = ACTIONS(419),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(419),
    [anon_sym_for] = ACTIONS(417),
    [anon_sym_if] = ACTIONS(417),
    [anon_sym_let] = ACTIONS(417),
    [anon_sym_PIPE] = ACTIONS(417),
    [anon_sym_AMP] = ACTIONS(417),
    [anon_sym_PIPE_PIPE] = ACTIONS(419),
    [anon_sym_AMP_AMP] = ACTIONS(419),
    [anon_sym_EQ_EQ] = ACTIONS(419),
    [anon_sym_BANG_EQ] = ACTIONS(419),
    [anon_sym_LT] = ACTIONS(417),
    [anon_sym_LT_EQ] = ACTIONS(419),
    [anon_sym_GT] = ACTIONS(417),
    [anon_sym_GT_EQ] = ACTIONS(419),
    [anon_sym_EQ_TILDE] = ACTIONS(419),
    [anon_sym_BANG_TILDE] = ACTIONS(419),
    [anon_sym_PLUS] = ACTIONS(419),
    [anon_sym_DASH] = ACTIONS(419),
    [anon_sym_STAR] = ACTIONS(419),
    [anon_sym_SLASH] = ACTIONS(417),
    [anon_sym_BANG] = ACTIONS(417),
    [anon_sym_LBRACK2] = ACTIONS(419),
    [sym_comment] = ACTIONS(3),
  },
  [99] = {
    [sym_identifier] = ACTIONS(413),
    [anon_sym_COMMA] = ACTIONS(415),
    [anon_sym_LPAREN] = ACTIONS(415),
    [anon_sym_RPAREN] = ACTIONS(415),
    [sym_dot] = ACTIONS(413),
    [anon_sym__] = ACTIONS(413),
    [anon_sym_POUND_DQUOTE] = ACTIONS(413),
    [anon_sym_DQUOTE] = ACTIONS(413),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(415),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(415),
    [anon_sym_len] = ACTIONS(413),
    [anon_sym_close] = ACTIONS(413),
    [anon_sym_and] = ACTIONS(413),
    [anon_sym_or] = ACTIONS(413),
    [anon_sym_div] = ACTIONS(413),
    [anon_sym_mod] = ACTIONS(413),
    [anon_sym_quo] = ACTIONS(413),
    [anon_sym_rem] = ACTIONS(413),
    [sym_number_type] = ACTIONS(413),
    [anon_sym_float] = ACTIONS(413),
    [anon_sym_float32] = ACTIONS(413),
    [anon_sym_float64] = ACTIONS(413),
    [anon_sym_uint] = ACTIONS(413),
    [anon_sym_uint8] = ACTIONS(413),
    [anon_sym_uint16] = ACTIONS(413),
    [anon_sym_uint32] = ACTIONS(413),
    [anon_sym_uint64] = ACTIONS(413),
    [anon_sym_uint128] = ACTIONS(413),
    [anon_sym_int] = ACTIONS(413),
    [anon_sym_int8] = ACTIONS(413),
    [anon_sym_int16] = ACTIONS(413),
    [anon_sym_int32] = ACTIONS(413),
    [anon_sym_int64] = ACTIONS(413),
    [anon_sym_int128] = ACTIONS(413),
    [sym_string_type] = ACTIONS(413),
    [sym_bool_type] = ACTIONS(413),
    [sym_bottom_lit] = ACTIONS(415),
    [sym_null_lit] = ACTIONS(413),
    [sym_bool_lit] = ACTIONS(413),
    [sym_int_lit] = ACTIONS(413),
    [sym_float_lit] = ACTIONS(413),
    [anon_sym_LBRACK] = ACTIONS(413),
    [anon_sym_RBRACK] = ACTIONS(415),
    [anon_sym_LBRACE] = ACTIONS(415),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(415),
    [anon_sym_for] = ACTIONS(413),
    [anon_sym_if] = ACTIONS(413),
    [anon_sym_let] = ACTIONS(413),
    [anon_sym_PIPE] = ACTIONS(413),
    [anon_sym_AMP] = ACTIONS(413),
    [anon_sym_PIPE_PIPE] = ACTIONS(415),
    [anon_sym_AMP_AMP] = ACTIONS(415),
    [anon_sym_EQ_EQ] = ACTIONS(415),
    [anon_sym_BANG_EQ] = ACTIONS(415),
    [anon_sym_LT] = ACTIONS(413),
    [anon_sym_LT_EQ] = ACTIONS(415),
    [anon_sym_GT] = ACTIONS(413),
    [anon_sym_GT_EQ] = ACTIONS(415),
    [anon_sym_EQ_TILDE] = ACTIONS(415),
    [anon_sym_BANG_TILDE] = ACTIONS(415),
    [anon_sym_PLUS] = ACTIONS(415),
    [anon_sym_DASH] = ACTIONS(415),
    [anon_sym_STAR] = ACTIONS(415),
    [anon_sym_SLASH] = ACTIONS(413),
    [anon_sym_BANG] = ACTIONS(413),
    [anon_sym_LBRACK2] = ACTIONS(415),
    [sym_comment] = ACTIONS(3),
  },
  [100] = {
    [sym_identifier] = ACTIONS(425),
    [anon_sym_LF] = ACTIONS(427),
    [anon_sym_COMMA] = ACTIONS(425),
    [anon_sym_LPAREN] = ACTIONS(425),
    [sym_dot] = ACTIONS(425),
    [anon_sym__] = ACTIONS(425),
    [anon_sym_POUND_DQUOTE] = ACTIONS(425),
    [anon_sym_DQUOTE] = ACTIONS(425),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(425),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(425),
    [anon_sym_len] = ACTIONS(425),
    [anon_sym_close] = ACTIONS(425),
    [anon_sym_and] = ACTIONS(425),
    [anon_sym_or] = ACTIONS(425),
    [anon_sym_div] = ACTIONS(425),
    [anon_sym_mod] = ACTIONS(425),
    [anon_sym_quo] = ACTIONS(425),
    [anon_sym_rem] = ACTIONS(425),
    [sym_number_type] = ACTIONS(425),
    [anon_sym_float] = ACTIONS(425),
    [anon_sym_float32] = ACTIONS(425),
    [anon_sym_float64] = ACTIONS(425),
    [anon_sym_uint] = ACTIONS(425),
    [anon_sym_uint8] = ACTIONS(425),
    [anon_sym_uint16] = ACTIONS(425),
    [anon_sym_uint32] = ACTIONS(425),
    [anon_sym_uint64] = ACTIONS(425),
    [anon_sym_uint128] = ACTIONS(425),
    [anon_sym_int] = ACTIONS(425),
    [anon_sym_int8] = ACTIONS(425),
    [anon_sym_int16] = ACTIONS(425),
    [anon_sym_int32] = ACTIONS(425),
    [anon_sym_int64] = ACTIONS(425),
    [anon_sym_int128] = ACTIONS(425),
    [sym_string_type] = ACTIONS(425),
    [sym_bool_type] = ACTIONS(425),
    [sym_bottom_lit] = ACTIONS(425),
    [sym_null_lit] = ACTIONS(425),
    [sym_bool_lit] = ACTIONS(425),
    [sym_int_lit] = ACTIONS(425),
    [sym_float_lit] = ACTIONS(425),
    [anon_sym_LBRACK] = ACTIONS(425),
    [anon_sym_LBRACE] = ACTIONS(425),
    [anon_sym_RBRACE] = ACTIONS(425),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(425),
    [anon_sym_for] = ACTIONS(425),
    [anon_sym_if] = ACTIONS(425),
    [anon_sym_let] = ACTIONS(425),
    [anon_sym_PIPE] = ACTIONS(425),
    [anon_sym_AMP] = ACTIONS(425),
    [anon_sym_PIPE_PIPE] = ACTIONS(425),
    [anon_sym_AMP_AMP] = ACTIONS(425),
    [anon_sym_EQ_EQ] = ACTIONS(425),
    [anon_sym_BANG_EQ] = ACTIONS(425),
    [anon_sym_LT] = ACTIONS(425),
    [anon_sym_LT_EQ] = ACTIONS(425),
    [anon_sym_GT] = ACTIONS(425),
    [anon_sym_GT_EQ] = ACTIONS(425),
    [anon_sym_EQ_TILDE] = ACTIONS(425),
    [anon_sym_BANG_TILDE] = ACTIONS(425),
    [anon_sym_PLUS] = ACTIONS(425),
    [anon_sym_DASH] = ACTIONS(425),
    [anon_sym_STAR] = ACTIONS(425),
    [anon_sym_SLASH] = ACTIONS(425),
    [anon_sym_BANG] = ACTIONS(425),
    [anon_sym_LBRACK2] = ACTIONS(427),
    [sym_comment] = ACTIONS(331),
  },
  [101] = {
    [sym_identifier] = ACTIONS(425),
    [anon_sym_COMMA] = ACTIONS(427),
    [anon_sym_LPAREN] = ACTIONS(427),
    [anon_sym_RPAREN] = ACTIONS(427),
    [sym_dot] = ACTIONS(425),
    [anon_sym__] = ACTIONS(425),
    [anon_sym_POUND_DQUOTE] = ACTIONS(425),
    [anon_sym_DQUOTE] = ACTIONS(425),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(427),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(427),
    [anon_sym_len] = ACTIONS(425),
    [anon_sym_close] = ACTIONS(425),
    [anon_sym_and] = ACTIONS(425),
    [anon_sym_or] = ACTIONS(425),
    [anon_sym_div] = ACTIONS(425),
    [anon_sym_mod] = ACTIONS(425),
    [anon_sym_quo] = ACTIONS(425),
    [anon_sym_rem] = ACTIONS(425),
    [sym_number_type] = ACTIONS(425),
    [anon_sym_float] = ACTIONS(425),
    [anon_sym_float32] = ACTIONS(425),
    [anon_sym_float64] = ACTIONS(425),
    [anon_sym_uint] = ACTIONS(425),
    [anon_sym_uint8] = ACTIONS(425),
    [anon_sym_uint16] = ACTIONS(425),
    [anon_sym_uint32] = ACTIONS(425),
    [anon_sym_uint64] = ACTIONS(425),
    [anon_sym_uint128] = ACTIONS(425),
    [anon_sym_int] = ACTIONS(425),
    [anon_sym_int8] = ACTIONS(425),
    [anon_sym_int16] = ACTIONS(425),
    [anon_sym_int32] = ACTIONS(425),
    [anon_sym_int64] = ACTIONS(425),
    [anon_sym_int128] = ACTIONS(425),
    [sym_string_type] = ACTIONS(425),
    [sym_bool_type] = ACTIONS(425),
    [sym_bottom_lit] = ACTIONS(427),
    [sym_null_lit] = ACTIONS(425),
    [sym_bool_lit] = ACTIONS(425),
    [sym_int_lit] = ACTIONS(425),
    [sym_float_lit] = ACTIONS(425),
    [anon_sym_LBRACK] = ACTIONS(425),
    [anon_sym_RBRACK] = ACTIONS(427),
    [anon_sym_LBRACE] = ACTIONS(427),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(427),
    [anon_sym_for] = ACTIONS(425),
    [anon_sym_if] = ACTIONS(425),
    [anon_sym_let] = ACTIONS(425),
    [anon_sym_PIPE] = ACTIONS(425),
    [anon_sym_AMP] = ACTIONS(425),
    [anon_sym_PIPE_PIPE] = ACTIONS(427),
    [anon_sym_AMP_AMP] = ACTIONS(427),
    [anon_sym_EQ_EQ] = ACTIONS(427),
    [anon_sym_BANG_EQ] = ACTIONS(427),
    [anon_sym_LT] = ACTIONS(425),
    [anon_sym_LT_EQ] = ACTIONS(427),
    [anon_sym_GT] = ACTIONS(425),
    [anon_sym_GT_EQ] = ACTIONS(427),
    [anon_sym_EQ_TILDE] = ACTIONS(427),
    [anon_sym_BANG_TILDE] = ACTIONS(427),
    [anon_sym_PLUS] = ACTIONS(427),
    [anon_sym_DASH] = ACTIONS(427),
    [anon_sym_STAR] = ACTIONS(427),
    [anon_sym_SLASH] = ACTIONS(425),
    [anon_sym_BANG] = ACTIONS(425),
    [anon_sym_LBRACK2] = ACTIONS(427),
    [sym_comment] = ACTIONS(3),
  },
  [102] = {
    [sym_identifier] = ACTIONS(429),
    [anon_sym_COMMA] = ACTIONS(431),
    [anon_sym_LPAREN] = ACTIONS(431),
    [anon_sym_RPAREN] = ACTIONS(431),
    [sym_dot] = ACTIONS(429),
    [anon_sym__] = ACTIONS(429),
    [anon_sym_POUND_DQUOTE] = ACTIONS(429),
    [anon_sym_DQUOTE] = ACTIONS(429),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(431),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(431),
    [anon_sym_len] = ACTIONS(429),
    [anon_sym_close] = ACTIONS(429),
    [anon_sym_and] = ACTIONS(429),
    [anon_sym_or] = ACTIONS(429),
    [anon_sym_div] = ACTIONS(429),
    [anon_sym_mod] = ACTIONS(429),
    [anon_sym_quo] = ACTIONS(429),
    [anon_sym_rem] = ACTIONS(429),
    [sym_number_type] = ACTIONS(429),
    [anon_sym_float] = ACTIONS(429),
    [anon_sym_float32] = ACTIONS(429),
    [anon_sym_float64] = ACTIONS(429),
    [anon_sym_uint] = ACTIONS(429),
    [anon_sym_uint8] = ACTIONS(429),
    [anon_sym_uint16] = ACTIONS(429),
    [anon_sym_uint32] = ACTIONS(429),
    [anon_sym_uint64] = ACTIONS(429),
    [anon_sym_uint128] = ACTIONS(429),
    [anon_sym_int] = ACTIONS(429),
    [anon_sym_int8] = ACTIONS(429),
    [anon_sym_int16] = ACTIONS(429),
    [anon_sym_int32] = ACTIONS(429),
    [anon_sym_int64] = ACTIONS(429),
    [anon_sym_int128] = ACTIONS(429),
    [sym_string_type] = ACTIONS(429),
    [sym_bool_type] = ACTIONS(429),
    [sym_bottom_lit] = ACTIONS(431),
    [sym_null_lit] = ACTIONS(429),
    [sym_bool_lit] = ACTIONS(429),
    [sym_int_lit] = ACTIONS(429),
    [sym_float_lit] = ACTIONS(429),
    [anon_sym_LBRACK] = ACTIONS(429),
    [anon_sym_RBRACK] = ACTIONS(431),
    [anon_sym_LBRACE] = ACTIONS(431),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(431),
    [anon_sym_for] = ACTIONS(429),
    [anon_sym_if] = ACTIONS(429),
    [anon_sym_let] = ACTIONS(429),
    [anon_sym_PIPE] = ACTIONS(429),
    [anon_sym_AMP] = ACTIONS(429),
    [anon_sym_PIPE_PIPE] = ACTIONS(431),
    [anon_sym_AMP_AMP] = ACTIONS(431),
    [anon_sym_EQ_EQ] = ACTIONS(431),
    [anon_sym_BANG_EQ] = ACTIONS(431),
    [anon_sym_LT] = ACTIONS(429),
    [anon_sym_LT_EQ] = ACTIONS(431),
    [anon_sym_GT] = ACTIONS(429),
    [anon_sym_GT_EQ] = ACTIONS(431),
    [anon_sym_EQ_TILDE] = ACTIONS(431),
    [anon_sym_BANG_TILDE] = ACTIONS(431),
    [anon_sym_PLUS] = ACTIONS(431),
    [anon_sym_DASH] = ACTIONS(431),
    [anon_sym_STAR] = ACTIONS(431),
    [anon_sym_SLASH] = ACTIONS(429),
    [anon_sym_BANG] = ACTIONS(429),
    [anon_sym_LBRACK2] = ACTIONS(431),
    [sym_comment] = ACTIONS(3),
  },
  [103] = {
    [sym_identifier] = ACTIONS(409),
    [anon_sym_LF] = ACTIONS(411),
    [anon_sym_COMMA] = ACTIONS(409),
    [anon_sym_LPAREN] = ACTIONS(409),
    [sym_dot] = ACTIONS(409),
    [anon_sym__] = ACTIONS(409),
    [anon_sym_POUND_DQUOTE] = ACTIONS(409),
    [anon_sym_DQUOTE] = ACTIONS(409),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(409),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(409),
    [anon_sym_len] = ACTIONS(409),
    [anon_sym_close] = ACTIONS(409),
    [anon_sym_and] = ACTIONS(409),
    [anon_sym_or] = ACTIONS(409),
    [anon_sym_div] = ACTIONS(409),
    [anon_sym_mod] = ACTIONS(409),
    [anon_sym_quo] = ACTIONS(409),
    [anon_sym_rem] = ACTIONS(409),
    [sym_number_type] = ACTIONS(409),
    [anon_sym_float] = ACTIONS(409),
    [anon_sym_float32] = ACTIONS(409),
    [anon_sym_float64] = ACTIONS(409),
    [anon_sym_uint] = ACTIONS(409),
    [anon_sym_uint8] = ACTIONS(409),
    [anon_sym_uint16] = ACTIONS(409),
    [anon_sym_uint32] = ACTIONS(409),
    [anon_sym_uint64] = ACTIONS(409),
    [anon_sym_uint128] = ACTIONS(409),
    [anon_sym_int] = ACTIONS(409),
    [anon_sym_int8] = ACTIONS(409),
    [anon_sym_int16] = ACTIONS(409),
    [anon_sym_int32] = ACTIONS(409),
    [anon_sym_int64] = ACTIONS(409),
    [anon_sym_int128] = ACTIONS(409),
    [sym_string_type] = ACTIONS(409),
    [sym_bool_type] = ACTIONS(409),
    [sym_bottom_lit] = ACTIONS(409),
    [sym_null_lit] = ACTIONS(409),
    [sym_bool_lit] = ACTIONS(409),
    [sym_int_lit] = ACTIONS(409),
    [sym_float_lit] = ACTIONS(409),
    [anon_sym_LBRACK] = ACTIONS(409),
    [anon_sym_LBRACE] = ACTIONS(409),
    [anon_sym_RBRACE] = ACTIONS(409),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(409),
    [anon_sym_for] = ACTIONS(409),
    [anon_sym_if] = ACTIONS(409),
    [anon_sym_let] = ACTIONS(409),
    [anon_sym_PIPE] = ACTIONS(409),
    [anon_sym_AMP] = ACTIONS(409),
    [anon_sym_PIPE_PIPE] = ACTIONS(409),
    [anon_sym_AMP_AMP] = ACTIONS(409),
    [anon_sym_EQ_EQ] = ACTIONS(409),
    [anon_sym_BANG_EQ] = ACTIONS(409),
    [anon_sym_LT] = ACTIONS(409),
    [anon_sym_LT_EQ] = ACTIONS(409),
    [anon_sym_GT] = ACTIONS(409),
    [anon_sym_GT_EQ] = ACTIONS(409),
    [anon_sym_EQ_TILDE] = ACTIONS(409),
    [anon_sym_BANG_TILDE] = ACTIONS(409),
    [anon_sym_PLUS] = ACTIONS(409),
    [anon_sym_DASH] = ACTIONS(409),
    [anon_sym_STAR] = ACTIONS(409),
    [anon_sym_SLASH] = ACTIONS(409),
    [anon_sym_BANG] = ACTIONS(409),
    [anon_sym_LBRACK2] = ACTIONS(411),
    [sym_comment] = ACTIONS(331),
  },
  [104] = {
    [sym_identifier] = ACTIONS(433),
    [anon_sym_COMMA] = ACTIONS(435),
    [anon_sym_LPAREN] = ACTIONS(435),
    [anon_sym_RPAREN] = ACTIONS(435),
    [sym_dot] = ACTIONS(433),
    [anon_sym__] = ACTIONS(433),
    [anon_sym_POUND_DQUOTE] = ACTIONS(433),
    [anon_sym_DQUOTE] = ACTIONS(433),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(435),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(435),
    [anon_sym_len] = ACTIONS(433),
    [anon_sym_close] = ACTIONS(433),
    [anon_sym_and] = ACTIONS(433),
    [anon_sym_or] = ACTIONS(433),
    [anon_sym_div] = ACTIONS(433),
    [anon_sym_mod] = ACTIONS(433),
    [anon_sym_quo] = ACTIONS(433),
    [anon_sym_rem] = ACTIONS(433),
    [sym_number_type] = ACTIONS(433),
    [anon_sym_float] = ACTIONS(433),
    [anon_sym_float32] = ACTIONS(433),
    [anon_sym_float64] = ACTIONS(433),
    [anon_sym_uint] = ACTIONS(433),
    [anon_sym_uint8] = ACTIONS(433),
    [anon_sym_uint16] = ACTIONS(433),
    [anon_sym_uint32] = ACTIONS(433),
    [anon_sym_uint64] = ACTIONS(433),
    [anon_sym_uint128] = ACTIONS(433),
    [anon_sym_int] = ACTIONS(433),
    [anon_sym_int8] = ACTIONS(433),
    [anon_sym_int16] = ACTIONS(433),
    [anon_sym_int32] = ACTIONS(433),
    [anon_sym_int64] = ACTIONS(433),
    [anon_sym_int128] = ACTIONS(433),
    [sym_string_type] = ACTIONS(433),
    [sym_bool_type] = ACTIONS(433),
    [sym_bottom_lit] = ACTIONS(435),
    [sym_null_lit] = ACTIONS(433),
    [sym_bool_lit] = ACTIONS(433),
    [sym_int_lit] = ACTIONS(433),
    [sym_float_lit] = ACTIONS(433),
    [anon_sym_LBRACK] = ACTIONS(433),
    [anon_sym_RBRACK] = ACTIONS(435),
    [anon_sym_LBRACE] = ACTIONS(435),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(435),
    [anon_sym_for] = ACTIONS(433),
    [anon_sym_if] = ACTIONS(433),
    [anon_sym_let] = ACTIONS(433),
    [anon_sym_PIPE] = ACTIONS(433),
    [anon_sym_AMP] = ACTIONS(433),
    [anon_sym_PIPE_PIPE] = ACTIONS(435),
    [anon_sym_AMP_AMP] = ACTIONS(435),
    [anon_sym_EQ_EQ] = ACTIONS(435),
    [anon_sym_BANG_EQ] = ACTIONS(435),
    [anon_sym_LT] = ACTIONS(433),
    [anon_sym_LT_EQ] = ACTIONS(435),
    [anon_sym_GT] = ACTIONS(433),
    [anon_sym_GT_EQ] = ACTIONS(435),
    [anon_sym_EQ_TILDE] = ACTIONS(435),
    [anon_sym_BANG_TILDE] = ACTIONS(435),
    [anon_sym_PLUS] = ACTIONS(435),
    [anon_sym_DASH] = ACTIONS(435),
    [anon_sym_STAR] = ACTIONS(435),
    [anon_sym_SLASH] = ACTIONS(433),
    [anon_sym_BANG] = ACTIONS(433),
    [anon_sym_LBRACK2] = ACTIONS(435),
    [sym_comment] = ACTIONS(3),
  },
  [105] = {
    [sym_identifier] = ACTIONS(437),
    [anon_sym_LF] = ACTIONS(439),
    [anon_sym_COMMA] = ACTIONS(437),
    [anon_sym_LPAREN] = ACTIONS(437),
    [sym_dot] = ACTIONS(437),
    [anon_sym__] = ACTIONS(437),
    [anon_sym_POUND_DQUOTE] = ACTIONS(437),
    [anon_sym_DQUOTE] = ACTIONS(437),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(437),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(437),
    [anon_sym_len] = ACTIONS(437),
    [anon_sym_close] = ACTIONS(437),
    [anon_sym_and] = ACTIONS(437),
    [anon_sym_or] = ACTIONS(437),
    [anon_sym_div] = ACTIONS(437),
    [anon_sym_mod] = ACTIONS(437),
    [anon_sym_quo] = ACTIONS(437),
    [anon_sym_rem] = ACTIONS(437),
    [sym_number_type] = ACTIONS(437),
    [anon_sym_float] = ACTIONS(437),
    [anon_sym_float32] = ACTIONS(437),
    [anon_sym_float64] = ACTIONS(437),
    [anon_sym_uint] = ACTIONS(437),
    [anon_sym_uint8] = ACTIONS(437),
    [anon_sym_uint16] = ACTIONS(437),
    [anon_sym_uint32] = ACTIONS(437),
    [anon_sym_uint64] = ACTIONS(437),
    [anon_sym_uint128] = ACTIONS(437),
    [anon_sym_int] = ACTIONS(437),
    [anon_sym_int8] = ACTIONS(437),
    [anon_sym_int16] = ACTIONS(437),
    [anon_sym_int32] = ACTIONS(437),
    [anon_sym_int64] = ACTIONS(437),
    [anon_sym_int128] = ACTIONS(437),
    [sym_string_type] = ACTIONS(437),
    [sym_bool_type] = ACTIONS(437),
    [sym_bottom_lit] = ACTIONS(437),
    [sym_null_lit] = ACTIONS(437),
    [sym_bool_lit] = ACTIONS(437),
    [sym_int_lit] = ACTIONS(437),
    [sym_float_lit] = ACTIONS(437),
    [anon_sym_LBRACK] = ACTIONS(437),
    [anon_sym_LBRACE] = ACTIONS(437),
    [anon_sym_RBRACE] = ACTIONS(437),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(437),
    [anon_sym_for] = ACTIONS(437),
    [anon_sym_if] = ACTIONS(437),
    [anon_sym_let] = ACTIONS(437),
    [anon_sym_PIPE] = ACTIONS(437),
    [anon_sym_AMP] = ACTIONS(437),
    [anon_sym_PIPE_PIPE] = ACTIONS(437),
    [anon_sym_AMP_AMP] = ACTIONS(437),
    [anon_sym_EQ_EQ] = ACTIONS(437),
    [anon_sym_BANG_EQ] = ACTIONS(437),
    [anon_sym_LT] = ACTIONS(437),
    [anon_sym_LT_EQ] = ACTIONS(437),
    [anon_sym_GT] = ACTIONS(437),
    [anon_sym_GT_EQ] = ACTIONS(437),
    [anon_sym_EQ_TILDE] = ACTIONS(437),
    [anon_sym_BANG_TILDE] = ACTIONS(437),
    [anon_sym_PLUS] = ACTIONS(437),
    [anon_sym_DASH] = ACTIONS(437),
    [anon_sym_STAR] = ACTIONS(437),
    [anon_sym_SLASH] = ACTIONS(437),
    [anon_sym_BANG] = ACTIONS(437),
    [anon_sym_LBRACK2] = ACTIONS(439),
    [sym_comment] = ACTIONS(331),
  },
  [106] = {
    [sym_identifier] = ACTIONS(429),
    [anon_sym_LF] = ACTIONS(431),
    [anon_sym_COMMA] = ACTIONS(429),
    [anon_sym_LPAREN] = ACTIONS(429),
    [sym_dot] = ACTIONS(429),
    [anon_sym__] = ACTIONS(429),
    [anon_sym_POUND_DQUOTE] = ACTIONS(429),
    [anon_sym_DQUOTE] = ACTIONS(429),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(429),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(429),
    [anon_sym_len] = ACTIONS(429),
    [anon_sym_close] = ACTIONS(429),
    [anon_sym_and] = ACTIONS(429),
    [anon_sym_or] = ACTIONS(429),
    [anon_sym_div] = ACTIONS(429),
    [anon_sym_mod] = ACTIONS(429),
    [anon_sym_quo] = ACTIONS(429),
    [anon_sym_rem] = ACTIONS(429),
    [sym_number_type] = ACTIONS(429),
    [anon_sym_float] = ACTIONS(429),
    [anon_sym_float32] = ACTIONS(429),
    [anon_sym_float64] = ACTIONS(429),
    [anon_sym_uint] = ACTIONS(429),
    [anon_sym_uint8] = ACTIONS(429),
    [anon_sym_uint16] = ACTIONS(429),
    [anon_sym_uint32] = ACTIONS(429),
    [anon_sym_uint64] = ACTIONS(429),
    [anon_sym_uint128] = ACTIONS(429),
    [anon_sym_int] = ACTIONS(429),
    [anon_sym_int8] = ACTIONS(429),
    [anon_sym_int16] = ACTIONS(429),
    [anon_sym_int32] = ACTIONS(429),
    [anon_sym_int64] = ACTIONS(429),
    [anon_sym_int128] = ACTIONS(429),
    [sym_string_type] = ACTIONS(429),
    [sym_bool_type] = ACTIONS(429),
    [sym_bottom_lit] = ACTIONS(429),
    [sym_null_lit] = ACTIONS(429),
    [sym_bool_lit] = ACTIONS(429),
    [sym_int_lit] = ACTIONS(429),
    [sym_float_lit] = ACTIONS(429),
    [anon_sym_LBRACK] = ACTIONS(429),
    [anon_sym_LBRACE] = ACTIONS(429),
    [anon_sym_RBRACE] = ACTIONS(429),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(429),
    [anon_sym_for] = ACTIONS(429),
    [anon_sym_if] = ACTIONS(429),
    [anon_sym_let] = ACTIONS(429),
    [anon_sym_PIPE] = ACTIONS(429),
    [anon_sym_AMP] = ACTIONS(429),
    [anon_sym_PIPE_PIPE] = ACTIONS(429),
    [anon_sym_AMP_AMP] = ACTIONS(429),
    [anon_sym_EQ_EQ] = ACTIONS(429),
    [anon_sym_BANG_EQ] = ACTIONS(429),
    [anon_sym_LT] = ACTIONS(429),
    [anon_sym_LT_EQ] = ACTIONS(429),
    [anon_sym_GT] = ACTIONS(429),
    [anon_sym_GT_EQ] = ACTIONS(429),
    [anon_sym_EQ_TILDE] = ACTIONS(429),
    [anon_sym_BANG_TILDE] = ACTIONS(429),
    [anon_sym_PLUS] = ACTIONS(429),
    [anon_sym_DASH] = ACTIONS(429),
    [anon_sym_STAR] = ACTIONS(429),
    [anon_sym_SLASH] = ACTIONS(429),
    [anon_sym_BANG] = ACTIONS(429),
    [anon_sym_LBRACK2] = ACTIONS(431),
    [sym_comment] = ACTIONS(331),
  },
  [107] = {
    [sym_identifier] = ACTIONS(441),
    [anon_sym_COMMA] = ACTIONS(443),
    [anon_sym_LPAREN] = ACTIONS(443),
    [anon_sym_RPAREN] = ACTIONS(443),
    [sym_dot] = ACTIONS(441),
    [anon_sym__] = ACTIONS(441),
    [anon_sym_POUND_DQUOTE] = ACTIONS(441),
    [anon_sym_DQUOTE] = ACTIONS(441),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(443),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(443),
    [anon_sym_len] = ACTIONS(441),
    [anon_sym_close] = ACTIONS(441),
    [anon_sym_and] = ACTIONS(441),
    [anon_sym_or] = ACTIONS(441),
    [anon_sym_div] = ACTIONS(441),
    [anon_sym_mod] = ACTIONS(441),
    [anon_sym_quo] = ACTIONS(441),
    [anon_sym_rem] = ACTIONS(441),
    [sym_number_type] = ACTIONS(441),
    [anon_sym_float] = ACTIONS(441),
    [anon_sym_float32] = ACTIONS(441),
    [anon_sym_float64] = ACTIONS(441),
    [anon_sym_uint] = ACTIONS(441),
    [anon_sym_uint8] = ACTIONS(441),
    [anon_sym_uint16] = ACTIONS(441),
    [anon_sym_uint32] = ACTIONS(441),
    [anon_sym_uint64] = ACTIONS(441),
    [anon_sym_uint128] = ACTIONS(441),
    [anon_sym_int] = ACTIONS(441),
    [anon_sym_int8] = ACTIONS(441),
    [anon_sym_int16] = ACTIONS(441),
    [anon_sym_int32] = ACTIONS(441),
    [anon_sym_int64] = ACTIONS(441),
    [anon_sym_int128] = ACTIONS(441),
    [sym_string_type] = ACTIONS(441),
    [sym_bool_type] = ACTIONS(441),
    [sym_bottom_lit] = ACTIONS(443),
    [sym_null_lit] = ACTIONS(441),
    [sym_bool_lit] = ACTIONS(441),
    [sym_int_lit] = ACTIONS(441),
    [sym_float_lit] = ACTIONS(441),
    [anon_sym_LBRACK] = ACTIONS(441),
    [anon_sym_RBRACK] = ACTIONS(443),
    [anon_sym_LBRACE] = ACTIONS(443),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(443),
    [anon_sym_for] = ACTIONS(441),
    [anon_sym_if] = ACTIONS(441),
    [anon_sym_let] = ACTIONS(441),
    [anon_sym_PIPE] = ACTIONS(441),
    [anon_sym_AMP] = ACTIONS(441),
    [anon_sym_PIPE_PIPE] = ACTIONS(443),
    [anon_sym_AMP_AMP] = ACTIONS(443),
    [anon_sym_EQ_EQ] = ACTIONS(443),
    [anon_sym_BANG_EQ] = ACTIONS(443),
    [anon_sym_LT] = ACTIONS(441),
    [anon_sym_LT_EQ] = ACTIONS(443),
    [anon_sym_GT] = ACTIONS(441),
    [anon_sym_GT_EQ] = ACTIONS(443),
    [anon_sym_EQ_TILDE] = ACTIONS(443),
    [anon_sym_BANG_TILDE] = ACTIONS(443),
    [anon_sym_PLUS] = ACTIONS(443),
    [anon_sym_DASH] = ACTIONS(443),
    [anon_sym_STAR] = ACTIONS(443),
    [anon_sym_SLASH] = ACTIONS(441),
    [anon_sym_BANG] = ACTIONS(441),
    [anon_sym_LBRACK2] = ACTIONS(443),
    [sym_comment] = ACTIONS(3),
  },
  [108] = {
    [sym_identifier] = ACTIONS(445),
    [anon_sym_LF] = ACTIONS(447),
    [anon_sym_COMMA] = ACTIONS(445),
    [anon_sym_LPAREN] = ACTIONS(445),
    [sym_dot] = ACTIONS(445),
    [anon_sym__] = ACTIONS(445),
    [anon_sym_POUND_DQUOTE] = ACTIONS(445),
    [anon_sym_DQUOTE] = ACTIONS(445),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(445),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(445),
    [anon_sym_len] = ACTIONS(445),
    [anon_sym_close] = ACTIONS(445),
    [anon_sym_and] = ACTIONS(445),
    [anon_sym_or] = ACTIONS(445),
    [anon_sym_div] = ACTIONS(445),
    [anon_sym_mod] = ACTIONS(445),
    [anon_sym_quo] = ACTIONS(445),
    [anon_sym_rem] = ACTIONS(445),
    [sym_number_type] = ACTIONS(445),
    [anon_sym_float] = ACTIONS(445),
    [anon_sym_float32] = ACTIONS(445),
    [anon_sym_float64] = ACTIONS(445),
    [anon_sym_uint] = ACTIONS(445),
    [anon_sym_uint8] = ACTIONS(445),
    [anon_sym_uint16] = ACTIONS(445),
    [anon_sym_uint32] = ACTIONS(445),
    [anon_sym_uint64] = ACTIONS(445),
    [anon_sym_uint128] = ACTIONS(445),
    [anon_sym_int] = ACTIONS(445),
    [anon_sym_int8] = ACTIONS(445),
    [anon_sym_int16] = ACTIONS(445),
    [anon_sym_int32] = ACTIONS(445),
    [anon_sym_int64] = ACTIONS(445),
    [anon_sym_int128] = ACTIONS(445),
    [sym_string_type] = ACTIONS(445),
    [sym_bool_type] = ACTIONS(445),
    [sym_bottom_lit] = ACTIONS(445),
    [sym_null_lit] = ACTIONS(445),
    [sym_bool_lit] = ACTIONS(445),
    [sym_int_lit] = ACTIONS(445),
    [sym_float_lit] = ACTIONS(445),
    [anon_sym_LBRACK] = ACTIONS(445),
    [anon_sym_LBRACE] = ACTIONS(445),
    [anon_sym_RBRACE] = ACTIONS(445),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(445),
    [anon_sym_for] = ACTIONS(445),
    [anon_sym_if] = ACTIONS(445),
    [anon_sym_let] = ACTIONS(445),
    [anon_sym_PIPE] = ACTIONS(445),
    [anon_sym_AMP] = ACTIONS(445),
    [anon_sym_PIPE_PIPE] = ACTIONS(445),
    [anon_sym_AMP_AMP] = ACTIONS(445),
    [anon_sym_EQ_EQ] = ACTIONS(445),
    [anon_sym_BANG_EQ] = ACTIONS(445),
    [anon_sym_LT] = ACTIONS(445),
    [anon_sym_LT_EQ] = ACTIONS(445),
    [anon_sym_GT] = ACTIONS(445),
    [anon_sym_GT_EQ] = ACTIONS(445),
    [anon_sym_EQ_TILDE] = ACTIONS(445),
    [anon_sym_BANG_TILDE] = ACTIONS(445),
    [anon_sym_PLUS] = ACTIONS(445),
    [anon_sym_DASH] = ACTIONS(445),
    [anon_sym_STAR] = ACTIONS(445),
    [anon_sym_SLASH] = ACTIONS(445),
    [anon_sym_BANG] = ACTIONS(445),
    [anon_sym_LBRACK2] = ACTIONS(447),
    [sym_comment] = ACTIONS(331),
  },
  [109] = {
    [sym_identifier] = ACTIONS(449),
    [anon_sym_LF] = ACTIONS(451),
    [anon_sym_COMMA] = ACTIONS(449),
    [anon_sym_LPAREN] = ACTIONS(449),
    [sym_dot] = ACTIONS(449),
    [anon_sym__] = ACTIONS(449),
    [anon_sym_POUND_DQUOTE] = ACTIONS(449),
    [anon_sym_DQUOTE] = ACTIONS(449),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(449),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(449),
    [anon_sym_len] = ACTIONS(449),
    [anon_sym_close] = ACTIONS(449),
    [anon_sym_and] = ACTIONS(449),
    [anon_sym_or] = ACTIONS(449),
    [anon_sym_div] = ACTIONS(449),
    [anon_sym_mod] = ACTIONS(449),
    [anon_sym_quo] = ACTIONS(449),
    [anon_sym_rem] = ACTIONS(449),
    [sym_number_type] = ACTIONS(449),
    [anon_sym_float] = ACTIONS(449),
    [anon_sym_float32] = ACTIONS(449),
    [anon_sym_float64] = ACTIONS(449),
    [anon_sym_uint] = ACTIONS(449),
    [anon_sym_uint8] = ACTIONS(449),
    [anon_sym_uint16] = ACTIONS(449),
    [anon_sym_uint32] = ACTIONS(449),
    [anon_sym_uint64] = ACTIONS(449),
    [anon_sym_uint128] = ACTIONS(449),
    [anon_sym_int] = ACTIONS(449),
    [anon_sym_int8] = ACTIONS(449),
    [anon_sym_int16] = ACTIONS(449),
    [anon_sym_int32] = ACTIONS(449),
    [anon_sym_int64] = ACTIONS(449),
    [anon_sym_int128] = ACTIONS(449),
    [sym_string_type] = ACTIONS(449),
    [sym_bool_type] = ACTIONS(449),
    [sym_bottom_lit] = ACTIONS(449),
    [sym_null_lit] = ACTIONS(449),
    [sym_bool_lit] = ACTIONS(449),
    [sym_int_lit] = ACTIONS(449),
    [sym_float_lit] = ACTIONS(449),
    [anon_sym_LBRACK] = ACTIONS(449),
    [anon_sym_LBRACE] = ACTIONS(449),
    [anon_sym_RBRACE] = ACTIONS(449),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(449),
    [anon_sym_for] = ACTIONS(449),
    [anon_sym_if] = ACTIONS(449),
    [anon_sym_let] = ACTIONS(449),
    [anon_sym_PIPE] = ACTIONS(449),
    [anon_sym_AMP] = ACTIONS(449),
    [anon_sym_PIPE_PIPE] = ACTIONS(449),
    [anon_sym_AMP_AMP] = ACTIONS(449),
    [anon_sym_EQ_EQ] = ACTIONS(449),
    [anon_sym_BANG_EQ] = ACTIONS(449),
    [anon_sym_LT] = ACTIONS(449),
    [anon_sym_LT_EQ] = ACTIONS(449),
    [anon_sym_GT] = ACTIONS(449),
    [anon_sym_GT_EQ] = ACTIONS(449),
    [anon_sym_EQ_TILDE] = ACTIONS(449),
    [anon_sym_BANG_TILDE] = ACTIONS(449),
    [anon_sym_PLUS] = ACTIONS(449),
    [anon_sym_DASH] = ACTIONS(449),
    [anon_sym_STAR] = ACTIONS(449),
    [anon_sym_SLASH] = ACTIONS(449),
    [anon_sym_BANG] = ACTIONS(449),
    [anon_sym_LBRACK2] = ACTIONS(451),
    [sym_comment] = ACTIONS(331),
  },
  [110] = {
    [sym_identifier] = ACTIONS(453),
    [anon_sym_COMMA] = ACTIONS(455),
    [anon_sym_LPAREN] = ACTIONS(455),
    [anon_sym_RPAREN] = ACTIONS(455),
    [sym_dot] = ACTIONS(453),
    [anon_sym__] = ACTIONS(453),
    [anon_sym_POUND_DQUOTE] = ACTIONS(453),
    [anon_sym_DQUOTE] = ACTIONS(453),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(455),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(455),
    [anon_sym_len] = ACTIONS(453),
    [anon_sym_close] = ACTIONS(453),
    [anon_sym_and] = ACTIONS(453),
    [anon_sym_or] = ACTIONS(453),
    [anon_sym_div] = ACTIONS(453),
    [anon_sym_mod] = ACTIONS(453),
    [anon_sym_quo] = ACTIONS(453),
    [anon_sym_rem] = ACTIONS(453),
    [sym_number_type] = ACTIONS(453),
    [anon_sym_float] = ACTIONS(453),
    [anon_sym_float32] = ACTIONS(453),
    [anon_sym_float64] = ACTIONS(453),
    [anon_sym_uint] = ACTIONS(453),
    [anon_sym_uint8] = ACTIONS(453),
    [anon_sym_uint16] = ACTIONS(453),
    [anon_sym_uint32] = ACTIONS(453),
    [anon_sym_uint64] = ACTIONS(453),
    [anon_sym_uint128] = ACTIONS(453),
    [anon_sym_int] = ACTIONS(453),
    [anon_sym_int8] = ACTIONS(453),
    [anon_sym_int16] = ACTIONS(453),
    [anon_sym_int32] = ACTIONS(453),
    [anon_sym_int64] = ACTIONS(453),
    [anon_sym_int128] = ACTIONS(453),
    [sym_string_type] = ACTIONS(453),
    [sym_bool_type] = ACTIONS(453),
    [sym_bottom_lit] = ACTIONS(455),
    [sym_null_lit] = ACTIONS(453),
    [sym_bool_lit] = ACTIONS(453),
    [sym_int_lit] = ACTIONS(453),
    [sym_float_lit] = ACTIONS(453),
    [anon_sym_LBRACK] = ACTIONS(453),
    [anon_sym_RBRACK] = ACTIONS(455),
    [anon_sym_LBRACE] = ACTIONS(455),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(455),
    [anon_sym_for] = ACTIONS(453),
    [anon_sym_if] = ACTIONS(453),
    [anon_sym_let] = ACTIONS(453),
    [anon_sym_PIPE] = ACTIONS(453),
    [anon_sym_AMP] = ACTIONS(453),
    [anon_sym_PIPE_PIPE] = ACTIONS(455),
    [anon_sym_AMP_AMP] = ACTIONS(455),
    [anon_sym_EQ_EQ] = ACTIONS(455),
    [anon_sym_BANG_EQ] = ACTIONS(455),
    [anon_sym_LT] = ACTIONS(453),
    [anon_sym_LT_EQ] = ACTIONS(455),
    [anon_sym_GT] = ACTIONS(453),
    [anon_sym_GT_EQ] = ACTIONS(455),
    [anon_sym_EQ_TILDE] = ACTIONS(455),
    [anon_sym_BANG_TILDE] = ACTIONS(455),
    [anon_sym_PLUS] = ACTIONS(455),
    [anon_sym_DASH] = ACTIONS(455),
    [anon_sym_STAR] = ACTIONS(455),
    [anon_sym_SLASH] = ACTIONS(453),
    [anon_sym_BANG] = ACTIONS(453),
    [anon_sym_LBRACK2] = ACTIONS(455),
    [sym_comment] = ACTIONS(3),
  },
  [111] = {
    [sym_identifier] = ACTIONS(457),
    [anon_sym_COMMA] = ACTIONS(459),
    [anon_sym_LPAREN] = ACTIONS(459),
    [anon_sym_RPAREN] = ACTIONS(459),
    [sym_dot] = ACTIONS(457),
    [anon_sym__] = ACTIONS(457),
    [anon_sym_POUND_DQUOTE] = ACTIONS(457),
    [anon_sym_DQUOTE] = ACTIONS(457),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(459),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(459),
    [anon_sym_len] = ACTIONS(457),
    [anon_sym_close] = ACTIONS(457),
    [anon_sym_and] = ACTIONS(457),
    [anon_sym_or] = ACTIONS(457),
    [anon_sym_div] = ACTIONS(457),
    [anon_sym_mod] = ACTIONS(457),
    [anon_sym_quo] = ACTIONS(457),
    [anon_sym_rem] = ACTIONS(457),
    [sym_number_type] = ACTIONS(457),
    [anon_sym_float] = ACTIONS(457),
    [anon_sym_float32] = ACTIONS(457),
    [anon_sym_float64] = ACTIONS(457),
    [anon_sym_uint] = ACTIONS(457),
    [anon_sym_uint8] = ACTIONS(457),
    [anon_sym_uint16] = ACTIONS(457),
    [anon_sym_uint32] = ACTIONS(457),
    [anon_sym_uint64] = ACTIONS(457),
    [anon_sym_uint128] = ACTIONS(457),
    [anon_sym_int] = ACTIONS(457),
    [anon_sym_int8] = ACTIONS(457),
    [anon_sym_int16] = ACTIONS(457),
    [anon_sym_int32] = ACTIONS(457),
    [anon_sym_int64] = ACTIONS(457),
    [anon_sym_int128] = ACTIONS(457),
    [sym_string_type] = ACTIONS(457),
    [sym_bool_type] = ACTIONS(457),
    [sym_bottom_lit] = ACTIONS(459),
    [sym_null_lit] = ACTIONS(457),
    [sym_bool_lit] = ACTIONS(457),
    [sym_int_lit] = ACTIONS(457),
    [sym_float_lit] = ACTIONS(457),
    [anon_sym_LBRACK] = ACTIONS(457),
    [anon_sym_RBRACK] = ACTIONS(459),
    [anon_sym_LBRACE] = ACTIONS(459),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(459),
    [anon_sym_for] = ACTIONS(457),
    [anon_sym_if] = ACTIONS(457),
    [anon_sym_let] = ACTIONS(457),
    [anon_sym_PIPE] = ACTIONS(457),
    [anon_sym_AMP] = ACTIONS(457),
    [anon_sym_PIPE_PIPE] = ACTIONS(459),
    [anon_sym_AMP_AMP] = ACTIONS(459),
    [anon_sym_EQ_EQ] = ACTIONS(459),
    [anon_sym_BANG_EQ] = ACTIONS(459),
    [anon_sym_LT] = ACTIONS(457),
    [anon_sym_LT_EQ] = ACTIONS(459),
    [anon_sym_GT] = ACTIONS(457),
    [anon_sym_GT_EQ] = ACTIONS(459),
    [anon_sym_EQ_TILDE] = ACTIONS(459),
    [anon_sym_BANG_TILDE] = ACTIONS(459),
    [anon_sym_PLUS] = ACTIONS(459),
    [anon_sym_DASH] = ACTIONS(459),
    [anon_sym_STAR] = ACTIONS(459),
    [anon_sym_SLASH] = ACTIONS(457),
    [anon_sym_BANG] = ACTIONS(457),
    [anon_sym_LBRACK2] = ACTIONS(459),
    [sym_comment] = ACTIONS(3),
  },
  [112] = {
    [sym_identifier] = ACTIONS(461),
    [anon_sym_COMMA] = ACTIONS(463),
    [anon_sym_LPAREN] = ACTIONS(463),
    [anon_sym_RPAREN] = ACTIONS(463),
    [sym_dot] = ACTIONS(461),
    [anon_sym__] = ACTIONS(461),
    [anon_sym_POUND_DQUOTE] = ACTIONS(461),
    [anon_sym_DQUOTE] = ACTIONS(461),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(463),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(463),
    [anon_sym_len] = ACTIONS(461),
    [anon_sym_close] = ACTIONS(461),
    [anon_sym_and] = ACTIONS(461),
    [anon_sym_or] = ACTIONS(461),
    [anon_sym_div] = ACTIONS(461),
    [anon_sym_mod] = ACTIONS(461),
    [anon_sym_quo] = ACTIONS(461),
    [anon_sym_rem] = ACTIONS(461),
    [sym_number_type] = ACTIONS(461),
    [anon_sym_float] = ACTIONS(461),
    [anon_sym_float32] = ACTIONS(461),
    [anon_sym_float64] = ACTIONS(461),
    [anon_sym_uint] = ACTIONS(461),
    [anon_sym_uint8] = ACTIONS(461),
    [anon_sym_uint16] = ACTIONS(461),
    [anon_sym_uint32] = ACTIONS(461),
    [anon_sym_uint64] = ACTIONS(461),
    [anon_sym_uint128] = ACTIONS(461),
    [anon_sym_int] = ACTIONS(461),
    [anon_sym_int8] = ACTIONS(461),
    [anon_sym_int16] = ACTIONS(461),
    [anon_sym_int32] = ACTIONS(461),
    [anon_sym_int64] = ACTIONS(461),
    [anon_sym_int128] = ACTIONS(461),
    [sym_string_type] = ACTIONS(461),
    [sym_bool_type] = ACTIONS(461),
    [sym_bottom_lit] = ACTIONS(463),
    [sym_null_lit] = ACTIONS(461),
    [sym_bool_lit] = ACTIONS(461),
    [sym_int_lit] = ACTIONS(461),
    [sym_float_lit] = ACTIONS(461),
    [anon_sym_LBRACK] = ACTIONS(461),
    [anon_sym_RBRACK] = ACTIONS(463),
    [anon_sym_LBRACE] = ACTIONS(463),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(463),
    [anon_sym_for] = ACTIONS(461),
    [anon_sym_if] = ACTIONS(461),
    [anon_sym_let] = ACTIONS(461),
    [anon_sym_PIPE] = ACTIONS(461),
    [anon_sym_AMP] = ACTIONS(461),
    [anon_sym_PIPE_PIPE] = ACTIONS(463),
    [anon_sym_AMP_AMP] = ACTIONS(463),
    [anon_sym_EQ_EQ] = ACTIONS(463),
    [anon_sym_BANG_EQ] = ACTIONS(463),
    [anon_sym_LT] = ACTIONS(461),
    [anon_sym_LT_EQ] = ACTIONS(463),
    [anon_sym_GT] = ACTIONS(461),
    [anon_sym_GT_EQ] = ACTIONS(463),
    [anon_sym_EQ_TILDE] = ACTIONS(463),
    [anon_sym_BANG_TILDE] = ACTIONS(463),
    [anon_sym_PLUS] = ACTIONS(463),
    [anon_sym_DASH] = ACTIONS(463),
    [anon_sym_STAR] = ACTIONS(463),
    [anon_sym_SLASH] = ACTIONS(461),
    [anon_sym_BANG] = ACTIONS(461),
    [anon_sym_LBRACK2] = ACTIONS(463),
    [sym_comment] = ACTIONS(3),
  },
  [113] = {
    [sym_identifier] = ACTIONS(405),
    [anon_sym_LF] = ACTIONS(407),
    [anon_sym_COMMA] = ACTIONS(405),
    [anon_sym_LPAREN] = ACTIONS(405),
    [sym_dot] = ACTIONS(405),
    [anon_sym__] = ACTIONS(405),
    [anon_sym_POUND_DQUOTE] = ACTIONS(405),
    [anon_sym_DQUOTE] = ACTIONS(405),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(405),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(405),
    [anon_sym_len] = ACTIONS(405),
    [anon_sym_close] = ACTIONS(405),
    [anon_sym_and] = ACTIONS(405),
    [anon_sym_or] = ACTIONS(405),
    [anon_sym_div] = ACTIONS(405),
    [anon_sym_mod] = ACTIONS(405),
    [anon_sym_quo] = ACTIONS(405),
    [anon_sym_rem] = ACTIONS(405),
    [sym_number_type] = ACTIONS(405),
    [anon_sym_float] = ACTIONS(405),
    [anon_sym_float32] = ACTIONS(405),
    [anon_sym_float64] = ACTIONS(405),
    [anon_sym_uint] = ACTIONS(405),
    [anon_sym_uint8] = ACTIONS(405),
    [anon_sym_uint16] = ACTIONS(405),
    [anon_sym_uint32] = ACTIONS(405),
    [anon_sym_uint64] = ACTIONS(405),
    [anon_sym_uint128] = ACTIONS(405),
    [anon_sym_int] = ACTIONS(405),
    [anon_sym_int8] = ACTIONS(405),
    [anon_sym_int16] = ACTIONS(405),
    [anon_sym_int32] = ACTIONS(405),
    [anon_sym_int64] = ACTIONS(405),
    [anon_sym_int128] = ACTIONS(405),
    [sym_string_type] = ACTIONS(405),
    [sym_bool_type] = ACTIONS(405),
    [sym_bottom_lit] = ACTIONS(405),
    [sym_null_lit] = ACTIONS(405),
    [sym_bool_lit] = ACTIONS(405),
    [sym_int_lit] = ACTIONS(405),
    [sym_float_lit] = ACTIONS(405),
    [anon_sym_LBRACK] = ACTIONS(405),
    [anon_sym_LBRACE] = ACTIONS(405),
    [anon_sym_RBRACE] = ACTIONS(405),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(405),
    [anon_sym_for] = ACTIONS(405),
    [anon_sym_if] = ACTIONS(405),
    [anon_sym_let] = ACTIONS(405),
    [anon_sym_PIPE] = ACTIONS(405),
    [anon_sym_AMP] = ACTIONS(405),
    [anon_sym_PIPE_PIPE] = ACTIONS(405),
    [anon_sym_AMP_AMP] = ACTIONS(405),
    [anon_sym_EQ_EQ] = ACTIONS(405),
    [anon_sym_BANG_EQ] = ACTIONS(405),
    [anon_sym_LT] = ACTIONS(405),
    [anon_sym_LT_EQ] = ACTIONS(405),
    [anon_sym_GT] = ACTIONS(405),
    [anon_sym_GT_EQ] = ACTIONS(405),
    [anon_sym_EQ_TILDE] = ACTIONS(405),
    [anon_sym_BANG_TILDE] = ACTIONS(405),
    [anon_sym_PLUS] = ACTIONS(405),
    [anon_sym_DASH] = ACTIONS(405),
    [anon_sym_STAR] = ACTIONS(405),
    [anon_sym_SLASH] = ACTIONS(405),
    [anon_sym_BANG] = ACTIONS(405),
    [anon_sym_LBRACK2] = ACTIONS(407),
    [sym_comment] = ACTIONS(331),
  },
  [114] = {
    [sym_identifier] = ACTIONS(465),
    [anon_sym_COMMA] = ACTIONS(467),
    [anon_sym_LPAREN] = ACTIONS(467),
    [anon_sym_RPAREN] = ACTIONS(467),
    [sym_dot] = ACTIONS(465),
    [anon_sym__] = ACTIONS(465),
    [anon_sym_POUND_DQUOTE] = ACTIONS(465),
    [anon_sym_DQUOTE] = ACTIONS(465),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(467),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(467),
    [anon_sym_len] = ACTIONS(465),
    [anon_sym_close] = ACTIONS(465),
    [anon_sym_and] = ACTIONS(465),
    [anon_sym_or] = ACTIONS(465),
    [anon_sym_div] = ACTIONS(465),
    [anon_sym_mod] = ACTIONS(465),
    [anon_sym_quo] = ACTIONS(465),
    [anon_sym_rem] = ACTIONS(465),
    [sym_number_type] = ACTIONS(465),
    [anon_sym_float] = ACTIONS(465),
    [anon_sym_float32] = ACTIONS(465),
    [anon_sym_float64] = ACTIONS(465),
    [anon_sym_uint] = ACTIONS(465),
    [anon_sym_uint8] = ACTIONS(465),
    [anon_sym_uint16] = ACTIONS(465),
    [anon_sym_uint32] = ACTIONS(465),
    [anon_sym_uint64] = ACTIONS(465),
    [anon_sym_uint128] = ACTIONS(465),
    [anon_sym_int] = ACTIONS(465),
    [anon_sym_int8] = ACTIONS(465),
    [anon_sym_int16] = ACTIONS(465),
    [anon_sym_int32] = ACTIONS(465),
    [anon_sym_int64] = ACTIONS(465),
    [anon_sym_int128] = ACTIONS(465),
    [sym_string_type] = ACTIONS(465),
    [sym_bool_type] = ACTIONS(465),
    [sym_bottom_lit] = ACTIONS(467),
    [sym_null_lit] = ACTIONS(465),
    [sym_bool_lit] = ACTIONS(465),
    [sym_int_lit] = ACTIONS(465),
    [sym_float_lit] = ACTIONS(465),
    [anon_sym_LBRACK] = ACTIONS(465),
    [anon_sym_RBRACK] = ACTIONS(467),
    [anon_sym_LBRACE] = ACTIONS(467),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(467),
    [anon_sym_for] = ACTIONS(465),
    [anon_sym_if] = ACTIONS(465),
    [anon_sym_let] = ACTIONS(465),
    [anon_sym_PIPE] = ACTIONS(465),
    [anon_sym_AMP] = ACTIONS(465),
    [anon_sym_PIPE_PIPE] = ACTIONS(467),
    [anon_sym_AMP_AMP] = ACTIONS(467),
    [anon_sym_EQ_EQ] = ACTIONS(467),
    [anon_sym_BANG_EQ] = ACTIONS(467),
    [anon_sym_LT] = ACTIONS(465),
    [anon_sym_LT_EQ] = ACTIONS(467),
    [anon_sym_GT] = ACTIONS(465),
    [anon_sym_GT_EQ] = ACTIONS(467),
    [anon_sym_EQ_TILDE] = ACTIONS(467),
    [anon_sym_BANG_TILDE] = ACTIONS(467),
    [anon_sym_PLUS] = ACTIONS(467),
    [anon_sym_DASH] = ACTIONS(467),
    [anon_sym_STAR] = ACTIONS(467),
    [anon_sym_SLASH] = ACTIONS(465),
    [anon_sym_BANG] = ACTIONS(465),
    [anon_sym_LBRACK2] = ACTIONS(467),
    [sym_comment] = ACTIONS(3),
  },
  [115] = {
    [sym_identifier] = ACTIONS(449),
    [anon_sym_COMMA] = ACTIONS(451),
    [anon_sym_LPAREN] = ACTIONS(451),
    [anon_sym_RPAREN] = ACTIONS(451),
    [sym_dot] = ACTIONS(449),
    [anon_sym__] = ACTIONS(449),
    [anon_sym_POUND_DQUOTE] = ACTIONS(449),
    [anon_sym_DQUOTE] = ACTIONS(449),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(451),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(451),
    [anon_sym_len] = ACTIONS(449),
    [anon_sym_close] = ACTIONS(449),
    [anon_sym_and] = ACTIONS(449),
    [anon_sym_or] = ACTIONS(449),
    [anon_sym_div] = ACTIONS(449),
    [anon_sym_mod] = ACTIONS(449),
    [anon_sym_quo] = ACTIONS(449),
    [anon_sym_rem] = ACTIONS(449),
    [sym_number_type] = ACTIONS(449),
    [anon_sym_float] = ACTIONS(449),
    [anon_sym_float32] = ACTIONS(449),
    [anon_sym_float64] = ACTIONS(449),
    [anon_sym_uint] = ACTIONS(449),
    [anon_sym_uint8] = ACTIONS(449),
    [anon_sym_uint16] = ACTIONS(449),
    [anon_sym_uint32] = ACTIONS(449),
    [anon_sym_uint64] = ACTIONS(449),
    [anon_sym_uint128] = ACTIONS(449),
    [anon_sym_int] = ACTIONS(449),
    [anon_sym_int8] = ACTIONS(449),
    [anon_sym_int16] = ACTIONS(449),
    [anon_sym_int32] = ACTIONS(449),
    [anon_sym_int64] = ACTIONS(449),
    [anon_sym_int128] = ACTIONS(449),
    [sym_string_type] = ACTIONS(449),
    [sym_bool_type] = ACTIONS(449),
    [sym_bottom_lit] = ACTIONS(451),
    [sym_null_lit] = ACTIONS(449),
    [sym_bool_lit] = ACTIONS(449),
    [sym_int_lit] = ACTIONS(449),
    [sym_float_lit] = ACTIONS(449),
    [anon_sym_LBRACK] = ACTIONS(449),
    [anon_sym_RBRACK] = ACTIONS(451),
    [anon_sym_LBRACE] = ACTIONS(451),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(451),
    [anon_sym_for] = ACTIONS(449),
    [anon_sym_if] = ACTIONS(449),
    [anon_sym_let] = ACTIONS(449),
    [anon_sym_PIPE] = ACTIONS(449),
    [anon_sym_AMP] = ACTIONS(449),
    [anon_sym_PIPE_PIPE] = ACTIONS(451),
    [anon_sym_AMP_AMP] = ACTIONS(451),
    [anon_sym_EQ_EQ] = ACTIONS(451),
    [anon_sym_BANG_EQ] = ACTIONS(451),
    [anon_sym_LT] = ACTIONS(449),
    [anon_sym_LT_EQ] = ACTIONS(451),
    [anon_sym_GT] = ACTIONS(449),
    [anon_sym_GT_EQ] = ACTIONS(451),
    [anon_sym_EQ_TILDE] = ACTIONS(451),
    [anon_sym_BANG_TILDE] = ACTIONS(451),
    [anon_sym_PLUS] = ACTIONS(451),
    [anon_sym_DASH] = ACTIONS(451),
    [anon_sym_STAR] = ACTIONS(451),
    [anon_sym_SLASH] = ACTIONS(449),
    [anon_sym_BANG] = ACTIONS(449),
    [anon_sym_LBRACK2] = ACTIONS(451),
    [sym_comment] = ACTIONS(3),
  },
  [116] = {
    [sym_identifier] = ACTIONS(401),
    [anon_sym_LF] = ACTIONS(403),
    [anon_sym_COMMA] = ACTIONS(401),
    [anon_sym_LPAREN] = ACTIONS(401),
    [sym_dot] = ACTIONS(401),
    [anon_sym__] = ACTIONS(401),
    [anon_sym_POUND_DQUOTE] = ACTIONS(401),
    [anon_sym_DQUOTE] = ACTIONS(401),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(401),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(401),
    [anon_sym_len] = ACTIONS(401),
    [anon_sym_close] = ACTIONS(401),
    [anon_sym_and] = ACTIONS(401),
    [anon_sym_or] = ACTIONS(401),
    [anon_sym_div] = ACTIONS(401),
    [anon_sym_mod] = ACTIONS(401),
    [anon_sym_quo] = ACTIONS(401),
    [anon_sym_rem] = ACTIONS(401),
    [sym_number_type] = ACTIONS(401),
    [anon_sym_float] = ACTIONS(401),
    [anon_sym_float32] = ACTIONS(401),
    [anon_sym_float64] = ACTIONS(401),
    [anon_sym_uint] = ACTIONS(401),
    [anon_sym_uint8] = ACTIONS(401),
    [anon_sym_uint16] = ACTIONS(401),
    [anon_sym_uint32] = ACTIONS(401),
    [anon_sym_uint64] = ACTIONS(401),
    [anon_sym_uint128] = ACTIONS(401),
    [anon_sym_int] = ACTIONS(401),
    [anon_sym_int8] = ACTIONS(401),
    [anon_sym_int16] = ACTIONS(401),
    [anon_sym_int32] = ACTIONS(401),
    [anon_sym_int64] = ACTIONS(401),
    [anon_sym_int128] = ACTIONS(401),
    [sym_string_type] = ACTIONS(401),
    [sym_bool_type] = ACTIONS(401),
    [sym_bottom_lit] = ACTIONS(401),
    [sym_null_lit] = ACTIONS(401),
    [sym_bool_lit] = ACTIONS(401),
    [sym_int_lit] = ACTIONS(401),
    [sym_float_lit] = ACTIONS(401),
    [anon_sym_LBRACK] = ACTIONS(401),
    [anon_sym_LBRACE] = ACTIONS(401),
    [anon_sym_RBRACE] = ACTIONS(401),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(401),
    [anon_sym_for] = ACTIONS(401),
    [anon_sym_if] = ACTIONS(401),
    [anon_sym_let] = ACTIONS(401),
    [anon_sym_PIPE] = ACTIONS(401),
    [anon_sym_AMP] = ACTIONS(401),
    [anon_sym_PIPE_PIPE] = ACTIONS(401),
    [anon_sym_AMP_AMP] = ACTIONS(401),
    [anon_sym_EQ_EQ] = ACTIONS(401),
    [anon_sym_BANG_EQ] = ACTIONS(401),
    [anon_sym_LT] = ACTIONS(401),
    [anon_sym_LT_EQ] = ACTIONS(401),
    [anon_sym_GT] = ACTIONS(401),
    [anon_sym_GT_EQ] = ACTIONS(401),
    [anon_sym_EQ_TILDE] = ACTIONS(401),
    [anon_sym_BANG_TILDE] = ACTIONS(401),
    [anon_sym_PLUS] = ACTIONS(401),
    [anon_sym_DASH] = ACTIONS(401),
    [anon_sym_STAR] = ACTIONS(401),
    [anon_sym_SLASH] = ACTIONS(401),
    [anon_sym_BANG] = ACTIONS(401),
    [anon_sym_LBRACK2] = ACTIONS(403),
    [sym_comment] = ACTIONS(331),
  },
  [117] = {
    [sym_identifier] = ACTIONS(469),
    [anon_sym_LF] = ACTIONS(471),
    [anon_sym_COMMA] = ACTIONS(469),
    [anon_sym_LPAREN] = ACTIONS(469),
    [sym_dot] = ACTIONS(469),
    [anon_sym__] = ACTIONS(469),
    [anon_sym_POUND_DQUOTE] = ACTIONS(469),
    [anon_sym_DQUOTE] = ACTIONS(469),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(469),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(469),
    [anon_sym_len] = ACTIONS(469),
    [anon_sym_close] = ACTIONS(469),
    [anon_sym_and] = ACTIONS(469),
    [anon_sym_or] = ACTIONS(469),
    [anon_sym_div] = ACTIONS(469),
    [anon_sym_mod] = ACTIONS(469),
    [anon_sym_quo] = ACTIONS(469),
    [anon_sym_rem] = ACTIONS(469),
    [sym_number_type] = ACTIONS(469),
    [anon_sym_float] = ACTIONS(469),
    [anon_sym_float32] = ACTIONS(469),
    [anon_sym_float64] = ACTIONS(469),
    [anon_sym_uint] = ACTIONS(469),
    [anon_sym_uint8] = ACTIONS(469),
    [anon_sym_uint16] = ACTIONS(469),
    [anon_sym_uint32] = ACTIONS(469),
    [anon_sym_uint64] = ACTIONS(469),
    [anon_sym_uint128] = ACTIONS(469),
    [anon_sym_int] = ACTIONS(469),
    [anon_sym_int8] = ACTIONS(469),
    [anon_sym_int16] = ACTIONS(469),
    [anon_sym_int32] = ACTIONS(469),
    [anon_sym_int64] = ACTIONS(469),
    [anon_sym_int128] = ACTIONS(469),
    [sym_string_type] = ACTIONS(469),
    [sym_bool_type] = ACTIONS(469),
    [sym_bottom_lit] = ACTIONS(469),
    [sym_null_lit] = ACTIONS(469),
    [sym_bool_lit] = ACTIONS(469),
    [sym_int_lit] = ACTIONS(469),
    [sym_float_lit] = ACTIONS(469),
    [anon_sym_LBRACK] = ACTIONS(469),
    [anon_sym_LBRACE] = ACTIONS(469),
    [anon_sym_RBRACE] = ACTIONS(469),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(469),
    [anon_sym_for] = ACTIONS(469),
    [anon_sym_if] = ACTIONS(469),
    [anon_sym_let] = ACTIONS(469),
    [anon_sym_PIPE] = ACTIONS(469),
    [anon_sym_AMP] = ACTIONS(469),
    [anon_sym_PIPE_PIPE] = ACTIONS(469),
    [anon_sym_AMP_AMP] = ACTIONS(469),
    [anon_sym_EQ_EQ] = ACTIONS(469),
    [anon_sym_BANG_EQ] = ACTIONS(469),
    [anon_sym_LT] = ACTIONS(469),
    [anon_sym_LT_EQ] = ACTIONS(469),
    [anon_sym_GT] = ACTIONS(469),
    [anon_sym_GT_EQ] = ACTIONS(469),
    [anon_sym_EQ_TILDE] = ACTIONS(469),
    [anon_sym_BANG_TILDE] = ACTIONS(469),
    [anon_sym_PLUS] = ACTIONS(469),
    [anon_sym_DASH] = ACTIONS(469),
    [anon_sym_STAR] = ACTIONS(469),
    [anon_sym_SLASH] = ACTIONS(469),
    [anon_sym_BANG] = ACTIONS(469),
    [anon_sym_LBRACK2] = ACTIONS(471),
    [sym_comment] = ACTIONS(331),
  },
  [118] = {
    [sym_identifier] = ACTIONS(437),
    [anon_sym_COMMA] = ACTIONS(439),
    [anon_sym_LPAREN] = ACTIONS(439),
    [anon_sym_RPAREN] = ACTIONS(439),
    [sym_dot] = ACTIONS(437),
    [anon_sym__] = ACTIONS(437),
    [anon_sym_POUND_DQUOTE] = ACTIONS(437),
    [anon_sym_DQUOTE] = ACTIONS(437),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(439),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(439),
    [anon_sym_len] = ACTIONS(437),
    [anon_sym_close] = ACTIONS(437),
    [anon_sym_and] = ACTIONS(437),
    [anon_sym_or] = ACTIONS(437),
    [anon_sym_div] = ACTIONS(437),
    [anon_sym_mod] = ACTIONS(437),
    [anon_sym_quo] = ACTIONS(437),
    [anon_sym_rem] = ACTIONS(437),
    [sym_number_type] = ACTIONS(437),
    [anon_sym_float] = ACTIONS(437),
    [anon_sym_float32] = ACTIONS(437),
    [anon_sym_float64] = ACTIONS(437),
    [anon_sym_uint] = ACTIONS(437),
    [anon_sym_uint8] = ACTIONS(437),
    [anon_sym_uint16] = ACTIONS(437),
    [anon_sym_uint32] = ACTIONS(437),
    [anon_sym_uint64] = ACTIONS(437),
    [anon_sym_uint128] = ACTIONS(437),
    [anon_sym_int] = ACTIONS(437),
    [anon_sym_int8] = ACTIONS(437),
    [anon_sym_int16] = ACTIONS(437),
    [anon_sym_int32] = ACTIONS(437),
    [anon_sym_int64] = ACTIONS(437),
    [anon_sym_int128] = ACTIONS(437),
    [sym_string_type] = ACTIONS(437),
    [sym_bool_type] = ACTIONS(437),
    [sym_bottom_lit] = ACTIONS(439),
    [sym_null_lit] = ACTIONS(437),
    [sym_bool_lit] = ACTIONS(437),
    [sym_int_lit] = ACTIONS(437),
    [sym_float_lit] = ACTIONS(437),
    [anon_sym_LBRACK] = ACTIONS(437),
    [anon_sym_RBRACK] = ACTIONS(439),
    [anon_sym_LBRACE] = ACTIONS(439),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(439),
    [anon_sym_for] = ACTIONS(437),
    [anon_sym_if] = ACTIONS(437),
    [anon_sym_let] = ACTIONS(437),
    [anon_sym_PIPE] = ACTIONS(437),
    [anon_sym_AMP] = ACTIONS(437),
    [anon_sym_PIPE_PIPE] = ACTIONS(439),
    [anon_sym_AMP_AMP] = ACTIONS(439),
    [anon_sym_EQ_EQ] = ACTIONS(439),
    [anon_sym_BANG_EQ] = ACTIONS(439),
    [anon_sym_LT] = ACTIONS(437),
    [anon_sym_LT_EQ] = ACTIONS(439),
    [anon_sym_GT] = ACTIONS(437),
    [anon_sym_GT_EQ] = ACTIONS(439),
    [anon_sym_EQ_TILDE] = ACTIONS(439),
    [anon_sym_BANG_TILDE] = ACTIONS(439),
    [anon_sym_PLUS] = ACTIONS(439),
    [anon_sym_DASH] = ACTIONS(439),
    [anon_sym_STAR] = ACTIONS(439),
    [anon_sym_SLASH] = ACTIONS(437),
    [anon_sym_BANG] = ACTIONS(437),
    [anon_sym_LBRACK2] = ACTIONS(439),
    [sym_comment] = ACTIONS(3),
  },
  [119] = {
    [sym_identifier] = ACTIONS(453),
    [anon_sym_LF] = ACTIONS(455),
    [anon_sym_COMMA] = ACTIONS(453),
    [anon_sym_LPAREN] = ACTIONS(453),
    [sym_dot] = ACTIONS(453),
    [anon_sym__] = ACTIONS(453),
    [anon_sym_POUND_DQUOTE] = ACTIONS(453),
    [anon_sym_DQUOTE] = ACTIONS(453),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(453),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(453),
    [anon_sym_len] = ACTIONS(453),
    [anon_sym_close] = ACTIONS(453),
    [anon_sym_and] = ACTIONS(453),
    [anon_sym_or] = ACTIONS(453),
    [anon_sym_div] = ACTIONS(453),
    [anon_sym_mod] = ACTIONS(453),
    [anon_sym_quo] = ACTIONS(453),
    [anon_sym_rem] = ACTIONS(453),
    [sym_number_type] = ACTIONS(453),
    [anon_sym_float] = ACTIONS(453),
    [anon_sym_float32] = ACTIONS(453),
    [anon_sym_float64] = ACTIONS(453),
    [anon_sym_uint] = ACTIONS(453),
    [anon_sym_uint8] = ACTIONS(453),
    [anon_sym_uint16] = ACTIONS(453),
    [anon_sym_uint32] = ACTIONS(453),
    [anon_sym_uint64] = ACTIONS(453),
    [anon_sym_uint128] = ACTIONS(453),
    [anon_sym_int] = ACTIONS(453),
    [anon_sym_int8] = ACTIONS(453),
    [anon_sym_int16] = ACTIONS(453),
    [anon_sym_int32] = ACTIONS(453),
    [anon_sym_int64] = ACTIONS(453),
    [anon_sym_int128] = ACTIONS(453),
    [sym_string_type] = ACTIONS(453),
    [sym_bool_type] = ACTIONS(453),
    [sym_bottom_lit] = ACTIONS(453),
    [sym_null_lit] = ACTIONS(453),
    [sym_bool_lit] = ACTIONS(453),
    [sym_int_lit] = ACTIONS(453),
    [sym_float_lit] = ACTIONS(453),
    [anon_sym_LBRACK] = ACTIONS(453),
    [anon_sym_LBRACE] = ACTIONS(453),
    [anon_sym_RBRACE] = ACTIONS(453),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(453),
    [anon_sym_for] = ACTIONS(453),
    [anon_sym_if] = ACTIONS(453),
    [anon_sym_let] = ACTIONS(453),
    [anon_sym_PIPE] = ACTIONS(453),
    [anon_sym_AMP] = ACTIONS(453),
    [anon_sym_PIPE_PIPE] = ACTIONS(453),
    [anon_sym_AMP_AMP] = ACTIONS(453),
    [anon_sym_EQ_EQ] = ACTIONS(453),
    [anon_sym_BANG_EQ] = ACTIONS(453),
    [anon_sym_LT] = ACTIONS(453),
    [anon_sym_LT_EQ] = ACTIONS(453),
    [anon_sym_GT] = ACTIONS(453),
    [anon_sym_GT_EQ] = ACTIONS(453),
    [anon_sym_EQ_TILDE] = ACTIONS(453),
    [anon_sym_BANG_TILDE] = ACTIONS(453),
    [anon_sym_PLUS] = ACTIONS(453),
    [anon_sym_DASH] = ACTIONS(453),
    [anon_sym_STAR] = ACTIONS(453),
    [anon_sym_SLASH] = ACTIONS(453),
    [anon_sym_BANG] = ACTIONS(453),
    [anon_sym_LBRACK2] = ACTIONS(455),
    [sym_comment] = ACTIONS(331),
  },
  [120] = {
    [sym_identifier] = ACTIONS(465),
    [anon_sym_LF] = ACTIONS(467),
    [anon_sym_COMMA] = ACTIONS(465),
    [anon_sym_LPAREN] = ACTIONS(465),
    [sym_dot] = ACTIONS(465),
    [anon_sym__] = ACTIONS(465),
    [anon_sym_POUND_DQUOTE] = ACTIONS(465),
    [anon_sym_DQUOTE] = ACTIONS(465),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(465),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(465),
    [anon_sym_len] = ACTIONS(465),
    [anon_sym_close] = ACTIONS(465),
    [anon_sym_and] = ACTIONS(465),
    [anon_sym_or] = ACTIONS(465),
    [anon_sym_div] = ACTIONS(465),
    [anon_sym_mod] = ACTIONS(465),
    [anon_sym_quo] = ACTIONS(465),
    [anon_sym_rem] = ACTIONS(465),
    [sym_number_type] = ACTIONS(465),
    [anon_sym_float] = ACTIONS(465),
    [anon_sym_float32] = ACTIONS(465),
    [anon_sym_float64] = ACTIONS(465),
    [anon_sym_uint] = ACTIONS(465),
    [anon_sym_uint8] = ACTIONS(465),
    [anon_sym_uint16] = ACTIONS(465),
    [anon_sym_uint32] = ACTIONS(465),
    [anon_sym_uint64] = ACTIONS(465),
    [anon_sym_uint128] = ACTIONS(465),
    [anon_sym_int] = ACTIONS(465),
    [anon_sym_int8] = ACTIONS(465),
    [anon_sym_int16] = ACTIONS(465),
    [anon_sym_int32] = ACTIONS(465),
    [anon_sym_int64] = ACTIONS(465),
    [anon_sym_int128] = ACTIONS(465),
    [sym_string_type] = ACTIONS(465),
    [sym_bool_type] = ACTIONS(465),
    [sym_bottom_lit] = ACTIONS(465),
    [sym_null_lit] = ACTIONS(465),
    [sym_bool_lit] = ACTIONS(465),
    [sym_int_lit] = ACTIONS(465),
    [sym_float_lit] = ACTIONS(465),
    [anon_sym_LBRACK] = ACTIONS(465),
    [anon_sym_LBRACE] = ACTIONS(465),
    [anon_sym_RBRACE] = ACTIONS(465),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(465),
    [anon_sym_for] = ACTIONS(465),
    [anon_sym_if] = ACTIONS(465),
    [anon_sym_let] = ACTIONS(465),
    [anon_sym_PIPE] = ACTIONS(465),
    [anon_sym_AMP] = ACTIONS(465),
    [anon_sym_PIPE_PIPE] = ACTIONS(465),
    [anon_sym_AMP_AMP] = ACTIONS(465),
    [anon_sym_EQ_EQ] = ACTIONS(465),
    [anon_sym_BANG_EQ] = ACTIONS(465),
    [anon_sym_LT] = ACTIONS(465),
    [anon_sym_LT_EQ] = ACTIONS(465),
    [anon_sym_GT] = ACTIONS(465),
    [anon_sym_GT_EQ] = ACTIONS(465),
    [anon_sym_EQ_TILDE] = ACTIONS(465),
    [anon_sym_BANG_TILDE] = ACTIONS(465),
    [anon_sym_PLUS] = ACTIONS(465),
    [anon_sym_DASH] = ACTIONS(465),
    [anon_sym_STAR] = ACTIONS(465),
    [anon_sym_SLASH] = ACTIONS(465),
    [anon_sym_BANG] = ACTIONS(465),
    [anon_sym_LBRACK2] = ACTIONS(467),
    [sym_comment] = ACTIONS(331),
  },
  [121] = {
    [sym_identifier] = ACTIONS(389),
    [anon_sym_COMMA] = ACTIONS(391),
    [anon_sym_LPAREN] = ACTIONS(391),
    [anon_sym_RPAREN] = ACTIONS(391),
    [sym_dot] = ACTIONS(389),
    [anon_sym__] = ACTIONS(389),
    [anon_sym_POUND_DQUOTE] = ACTIONS(389),
    [anon_sym_DQUOTE] = ACTIONS(389),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(391),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(391),
    [anon_sym_len] = ACTIONS(389),
    [anon_sym_close] = ACTIONS(389),
    [anon_sym_and] = ACTIONS(389),
    [anon_sym_or] = ACTIONS(389),
    [anon_sym_div] = ACTIONS(389),
    [anon_sym_mod] = ACTIONS(389),
    [anon_sym_quo] = ACTIONS(389),
    [anon_sym_rem] = ACTIONS(389),
    [sym_number_type] = ACTIONS(389),
    [anon_sym_float] = ACTIONS(389),
    [anon_sym_float32] = ACTIONS(389),
    [anon_sym_float64] = ACTIONS(389),
    [anon_sym_uint] = ACTIONS(389),
    [anon_sym_uint8] = ACTIONS(389),
    [anon_sym_uint16] = ACTIONS(389),
    [anon_sym_uint32] = ACTIONS(389),
    [anon_sym_uint64] = ACTIONS(389),
    [anon_sym_uint128] = ACTIONS(389),
    [anon_sym_int] = ACTIONS(389),
    [anon_sym_int8] = ACTIONS(389),
    [anon_sym_int16] = ACTIONS(389),
    [anon_sym_int32] = ACTIONS(389),
    [anon_sym_int64] = ACTIONS(389),
    [anon_sym_int128] = ACTIONS(389),
    [sym_string_type] = ACTIONS(389),
    [sym_bool_type] = ACTIONS(389),
    [sym_bottom_lit] = ACTIONS(391),
    [sym_null_lit] = ACTIONS(389),
    [sym_bool_lit] = ACTIONS(389),
    [sym_int_lit] = ACTIONS(389),
    [sym_float_lit] = ACTIONS(389),
    [anon_sym_LBRACK] = ACTIONS(389),
    [anon_sym_RBRACK] = ACTIONS(391),
    [anon_sym_LBRACE] = ACTIONS(391),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(391),
    [anon_sym_for] = ACTIONS(389),
    [anon_sym_if] = ACTIONS(389),
    [anon_sym_let] = ACTIONS(389),
    [anon_sym_PIPE] = ACTIONS(389),
    [anon_sym_AMP] = ACTIONS(389),
    [anon_sym_PIPE_PIPE] = ACTIONS(391),
    [anon_sym_AMP_AMP] = ACTIONS(391),
    [anon_sym_EQ_EQ] = ACTIONS(391),
    [anon_sym_BANG_EQ] = ACTIONS(391),
    [anon_sym_LT] = ACTIONS(389),
    [anon_sym_LT_EQ] = ACTIONS(391),
    [anon_sym_GT] = ACTIONS(389),
    [anon_sym_GT_EQ] = ACTIONS(391),
    [anon_sym_EQ_TILDE] = ACTIONS(391),
    [anon_sym_BANG_TILDE] = ACTIONS(391),
    [anon_sym_PLUS] = ACTIONS(391),
    [anon_sym_DASH] = ACTIONS(391),
    [anon_sym_STAR] = ACTIONS(391),
    [anon_sym_SLASH] = ACTIONS(389),
    [anon_sym_BANG] = ACTIONS(389),
    [anon_sym_LBRACK2] = ACTIONS(391),
    [sym_comment] = ACTIONS(3),
  },
  [122] = {
    [sym_identifier] = ACTIONS(445),
    [anon_sym_COMMA] = ACTIONS(447),
    [anon_sym_LPAREN] = ACTIONS(447),
    [anon_sym_RPAREN] = ACTIONS(447),
    [sym_dot] = ACTIONS(445),
    [anon_sym__] = ACTIONS(445),
    [anon_sym_POUND_DQUOTE] = ACTIONS(445),
    [anon_sym_DQUOTE] = ACTIONS(445),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(447),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(447),
    [anon_sym_len] = ACTIONS(445),
    [anon_sym_close] = ACTIONS(445),
    [anon_sym_and] = ACTIONS(445),
    [anon_sym_or] = ACTIONS(445),
    [anon_sym_div] = ACTIONS(445),
    [anon_sym_mod] = ACTIONS(445),
    [anon_sym_quo] = ACTIONS(445),
    [anon_sym_rem] = ACTIONS(445),
    [sym_number_type] = ACTIONS(445),
    [anon_sym_float] = ACTIONS(445),
    [anon_sym_float32] = ACTIONS(445),
    [anon_sym_float64] = ACTIONS(445),
    [anon_sym_uint] = ACTIONS(445),
    [anon_sym_uint8] = ACTIONS(445),
    [anon_sym_uint16] = ACTIONS(445),
    [anon_sym_uint32] = ACTIONS(445),
    [anon_sym_uint64] = ACTIONS(445),
    [anon_sym_uint128] = ACTIONS(445),
    [anon_sym_int] = ACTIONS(445),
    [anon_sym_int8] = ACTIONS(445),
    [anon_sym_int16] = ACTIONS(445),
    [anon_sym_int32] = ACTIONS(445),
    [anon_sym_int64] = ACTIONS(445),
    [anon_sym_int128] = ACTIONS(445),
    [sym_string_type] = ACTIONS(445),
    [sym_bool_type] = ACTIONS(445),
    [sym_bottom_lit] = ACTIONS(447),
    [sym_null_lit] = ACTIONS(445),
    [sym_bool_lit] = ACTIONS(445),
    [sym_int_lit] = ACTIONS(445),
    [sym_float_lit] = ACTIONS(445),
    [anon_sym_LBRACK] = ACTIONS(445),
    [anon_sym_RBRACK] = ACTIONS(447),
    [anon_sym_LBRACE] = ACTIONS(447),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(447),
    [anon_sym_for] = ACTIONS(445),
    [anon_sym_if] = ACTIONS(445),
    [anon_sym_let] = ACTIONS(445),
    [anon_sym_PIPE] = ACTIONS(445),
    [anon_sym_AMP] = ACTIONS(445),
    [anon_sym_PIPE_PIPE] = ACTIONS(447),
    [anon_sym_AMP_AMP] = ACTIONS(447),
    [anon_sym_EQ_EQ] = ACTIONS(447),
    [anon_sym_BANG_EQ] = ACTIONS(447),
    [anon_sym_LT] = ACTIONS(445),
    [anon_sym_LT_EQ] = ACTIONS(447),
    [anon_sym_GT] = ACTIONS(445),
    [anon_sym_GT_EQ] = ACTIONS(447),
    [anon_sym_EQ_TILDE] = ACTIONS(447),
    [anon_sym_BANG_TILDE] = ACTIONS(447),
    [anon_sym_PLUS] = ACTIONS(447),
    [anon_sym_DASH] = ACTIONS(447),
    [anon_sym_STAR] = ACTIONS(447),
    [anon_sym_SLASH] = ACTIONS(445),
    [anon_sym_BANG] = ACTIONS(445),
    [anon_sym_LBRACK2] = ACTIONS(447),
    [sym_comment] = ACTIONS(3),
  },
  [123] = {
    [sym_identifier] = ACTIONS(473),
    [anon_sym_LF] = ACTIONS(475),
    [anon_sym_COMMA] = ACTIONS(473),
    [anon_sym_LPAREN] = ACTIONS(473),
    [sym_dot] = ACTIONS(473),
    [anon_sym__] = ACTIONS(473),
    [anon_sym_POUND_DQUOTE] = ACTIONS(473),
    [anon_sym_DQUOTE] = ACTIONS(473),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(473),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(473),
    [anon_sym_len] = ACTIONS(473),
    [anon_sym_close] = ACTIONS(473),
    [anon_sym_and] = ACTIONS(473),
    [anon_sym_or] = ACTIONS(473),
    [anon_sym_div] = ACTIONS(473),
    [anon_sym_mod] = ACTIONS(473),
    [anon_sym_quo] = ACTIONS(473),
    [anon_sym_rem] = ACTIONS(473),
    [sym_number_type] = ACTIONS(473),
    [anon_sym_float] = ACTIONS(473),
    [anon_sym_float32] = ACTIONS(473),
    [anon_sym_float64] = ACTIONS(473),
    [anon_sym_uint] = ACTIONS(473),
    [anon_sym_uint8] = ACTIONS(473),
    [anon_sym_uint16] = ACTIONS(473),
    [anon_sym_uint32] = ACTIONS(473),
    [anon_sym_uint64] = ACTIONS(473),
    [anon_sym_uint128] = ACTIONS(473),
    [anon_sym_int] = ACTIONS(473),
    [anon_sym_int8] = ACTIONS(473),
    [anon_sym_int16] = ACTIONS(473),
    [anon_sym_int32] = ACTIONS(473),
    [anon_sym_int64] = ACTIONS(473),
    [anon_sym_int128] = ACTIONS(473),
    [sym_string_type] = ACTIONS(473),
    [sym_bool_type] = ACTIONS(473),
    [sym_bottom_lit] = ACTIONS(473),
    [sym_null_lit] = ACTIONS(473),
    [sym_bool_lit] = ACTIONS(473),
    [sym_int_lit] = ACTIONS(473),
    [sym_float_lit] = ACTIONS(473),
    [anon_sym_LBRACK] = ACTIONS(473),
    [anon_sym_LBRACE] = ACTIONS(473),
    [anon_sym_RBRACE] = ACTIONS(473),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(473),
    [anon_sym_for] = ACTIONS(473),
    [anon_sym_if] = ACTIONS(473),
    [anon_sym_let] = ACTIONS(473),
    [anon_sym_PIPE] = ACTIONS(473),
    [anon_sym_AMP] = ACTIONS(473),
    [anon_sym_PIPE_PIPE] = ACTIONS(473),
    [anon_sym_AMP_AMP] = ACTIONS(473),
    [anon_sym_EQ_EQ] = ACTIONS(473),
    [anon_sym_BANG_EQ] = ACTIONS(473),
    [anon_sym_LT] = ACTIONS(473),
    [anon_sym_LT_EQ] = ACTIONS(473),
    [anon_sym_GT] = ACTIONS(473),
    [anon_sym_GT_EQ] = ACTIONS(473),
    [anon_sym_EQ_TILDE] = ACTIONS(473),
    [anon_sym_BANG_TILDE] = ACTIONS(473),
    [anon_sym_PLUS] = ACTIONS(473),
    [anon_sym_DASH] = ACTIONS(473),
    [anon_sym_STAR] = ACTIONS(473),
    [anon_sym_SLASH] = ACTIONS(473),
    [anon_sym_BANG] = ACTIONS(473),
    [anon_sym_LBRACK2] = ACTIONS(475),
    [sym_comment] = ACTIONS(331),
  },
  [124] = {
    [sym_identifier] = ACTIONS(473),
    [anon_sym_COMMA] = ACTIONS(475),
    [anon_sym_LPAREN] = ACTIONS(475),
    [anon_sym_RPAREN] = ACTIONS(475),
    [sym_dot] = ACTIONS(473),
    [anon_sym__] = ACTIONS(473),
    [anon_sym_POUND_DQUOTE] = ACTIONS(473),
    [anon_sym_DQUOTE] = ACTIONS(473),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(475),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(475),
    [anon_sym_len] = ACTIONS(473),
    [anon_sym_close] = ACTIONS(473),
    [anon_sym_and] = ACTIONS(473),
    [anon_sym_or] = ACTIONS(473),
    [anon_sym_div] = ACTIONS(473),
    [anon_sym_mod] = ACTIONS(473),
    [anon_sym_quo] = ACTIONS(473),
    [anon_sym_rem] = ACTIONS(473),
    [sym_number_type] = ACTIONS(473),
    [anon_sym_float] = ACTIONS(473),
    [anon_sym_float32] = ACTIONS(473),
    [anon_sym_float64] = ACTIONS(473),
    [anon_sym_uint] = ACTIONS(473),
    [anon_sym_uint8] = ACTIONS(473),
    [anon_sym_uint16] = ACTIONS(473),
    [anon_sym_uint32] = ACTIONS(473),
    [anon_sym_uint64] = ACTIONS(473),
    [anon_sym_uint128] = ACTIONS(473),
    [anon_sym_int] = ACTIONS(473),
    [anon_sym_int8] = ACTIONS(473),
    [anon_sym_int16] = ACTIONS(473),
    [anon_sym_int32] = ACTIONS(473),
    [anon_sym_int64] = ACTIONS(473),
    [anon_sym_int128] = ACTIONS(473),
    [sym_string_type] = ACTIONS(473),
    [sym_bool_type] = ACTIONS(473),
    [sym_bottom_lit] = ACTIONS(475),
    [sym_null_lit] = ACTIONS(473),
    [sym_bool_lit] = ACTIONS(473),
    [sym_int_lit] = ACTIONS(473),
    [sym_float_lit] = ACTIONS(473),
    [anon_sym_LBRACK] = ACTIONS(473),
    [anon_sym_RBRACK] = ACTIONS(475),
    [anon_sym_LBRACE] = ACTIONS(475),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(475),
    [anon_sym_for] = ACTIONS(473),
    [anon_sym_if] = ACTIONS(473),
    [anon_sym_let] = ACTIONS(473),
    [anon_sym_PIPE] = ACTIONS(473),
    [anon_sym_AMP] = ACTIONS(473),
    [anon_sym_PIPE_PIPE] = ACTIONS(475),
    [anon_sym_AMP_AMP] = ACTIONS(475),
    [anon_sym_EQ_EQ] = ACTIONS(475),
    [anon_sym_BANG_EQ] = ACTIONS(475),
    [anon_sym_LT] = ACTIONS(473),
    [anon_sym_LT_EQ] = ACTIONS(475),
    [anon_sym_GT] = ACTIONS(473),
    [anon_sym_GT_EQ] = ACTIONS(475),
    [anon_sym_EQ_TILDE] = ACTIONS(475),
    [anon_sym_BANG_TILDE] = ACTIONS(475),
    [anon_sym_PLUS] = ACTIONS(475),
    [anon_sym_DASH] = ACTIONS(475),
    [anon_sym_STAR] = ACTIONS(475),
    [anon_sym_SLASH] = ACTIONS(473),
    [anon_sym_BANG] = ACTIONS(473),
    [anon_sym_LBRACK2] = ACTIONS(475),
    [sym_comment] = ACTIONS(3),
  },
  [125] = {
    [sym_identifier] = ACTIONS(457),
    [anon_sym_LF] = ACTIONS(459),
    [anon_sym_COMMA] = ACTIONS(457),
    [anon_sym_LPAREN] = ACTIONS(457),
    [sym_dot] = ACTIONS(457),
    [anon_sym__] = ACTIONS(457),
    [anon_sym_POUND_DQUOTE] = ACTIONS(457),
    [anon_sym_DQUOTE] = ACTIONS(457),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(457),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(457),
    [anon_sym_len] = ACTIONS(457),
    [anon_sym_close] = ACTIONS(457),
    [anon_sym_and] = ACTIONS(457),
    [anon_sym_or] = ACTIONS(457),
    [anon_sym_div] = ACTIONS(457),
    [anon_sym_mod] = ACTIONS(457),
    [anon_sym_quo] = ACTIONS(457),
    [anon_sym_rem] = ACTIONS(457),
    [sym_number_type] = ACTIONS(457),
    [anon_sym_float] = ACTIONS(457),
    [anon_sym_float32] = ACTIONS(457),
    [anon_sym_float64] = ACTIONS(457),
    [anon_sym_uint] = ACTIONS(457),
    [anon_sym_uint8] = ACTIONS(457),
    [anon_sym_uint16] = ACTIONS(457),
    [anon_sym_uint32] = ACTIONS(457),
    [anon_sym_uint64] = ACTIONS(457),
    [anon_sym_uint128] = ACTIONS(457),
    [anon_sym_int] = ACTIONS(457),
    [anon_sym_int8] = ACTIONS(457),
    [anon_sym_int16] = ACTIONS(457),
    [anon_sym_int32] = ACTIONS(457),
    [anon_sym_int64] = ACTIONS(457),
    [anon_sym_int128] = ACTIONS(457),
    [sym_string_type] = ACTIONS(457),
    [sym_bool_type] = ACTIONS(457),
    [sym_bottom_lit] = ACTIONS(457),
    [sym_null_lit] = ACTIONS(457),
    [sym_bool_lit] = ACTIONS(457),
    [sym_int_lit] = ACTIONS(457),
    [sym_float_lit] = ACTIONS(457),
    [anon_sym_LBRACK] = ACTIONS(457),
    [anon_sym_LBRACE] = ACTIONS(457),
    [anon_sym_RBRACE] = ACTIONS(457),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(457),
    [anon_sym_for] = ACTIONS(457),
    [anon_sym_if] = ACTIONS(457),
    [anon_sym_let] = ACTIONS(457),
    [anon_sym_PIPE] = ACTIONS(457),
    [anon_sym_AMP] = ACTIONS(457),
    [anon_sym_PIPE_PIPE] = ACTIONS(457),
    [anon_sym_AMP_AMP] = ACTIONS(457),
    [anon_sym_EQ_EQ] = ACTIONS(457),
    [anon_sym_BANG_EQ] = ACTIONS(457),
    [anon_sym_LT] = ACTIONS(457),
    [anon_sym_LT_EQ] = ACTIONS(457),
    [anon_sym_GT] = ACTIONS(457),
    [anon_sym_GT_EQ] = ACTIONS(457),
    [anon_sym_EQ_TILDE] = ACTIONS(457),
    [anon_sym_BANG_TILDE] = ACTIONS(457),
    [anon_sym_PLUS] = ACTIONS(457),
    [anon_sym_DASH] = ACTIONS(457),
    [anon_sym_STAR] = ACTIONS(457),
    [anon_sym_SLASH] = ACTIONS(457),
    [anon_sym_BANG] = ACTIONS(457),
    [anon_sym_LBRACK2] = ACTIONS(459),
    [sym_comment] = ACTIONS(331),
  },
  [126] = {
    [sym_identifier] = ACTIONS(441),
    [anon_sym_LF] = ACTIONS(443),
    [anon_sym_COMMA] = ACTIONS(441),
    [anon_sym_LPAREN] = ACTIONS(441),
    [sym_dot] = ACTIONS(441),
    [anon_sym__] = ACTIONS(441),
    [anon_sym_POUND_DQUOTE] = ACTIONS(441),
    [anon_sym_DQUOTE] = ACTIONS(441),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(441),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(441),
    [anon_sym_len] = ACTIONS(441),
    [anon_sym_close] = ACTIONS(441),
    [anon_sym_and] = ACTIONS(441),
    [anon_sym_or] = ACTIONS(441),
    [anon_sym_div] = ACTIONS(441),
    [anon_sym_mod] = ACTIONS(441),
    [anon_sym_quo] = ACTIONS(441),
    [anon_sym_rem] = ACTIONS(441),
    [sym_number_type] = ACTIONS(441),
    [anon_sym_float] = ACTIONS(441),
    [anon_sym_float32] = ACTIONS(441),
    [anon_sym_float64] = ACTIONS(441),
    [anon_sym_uint] = ACTIONS(441),
    [anon_sym_uint8] = ACTIONS(441),
    [anon_sym_uint16] = ACTIONS(441),
    [anon_sym_uint32] = ACTIONS(441),
    [anon_sym_uint64] = ACTIONS(441),
    [anon_sym_uint128] = ACTIONS(441),
    [anon_sym_int] = ACTIONS(441),
    [anon_sym_int8] = ACTIONS(441),
    [anon_sym_int16] = ACTIONS(441),
    [anon_sym_int32] = ACTIONS(441),
    [anon_sym_int64] = ACTIONS(441),
    [anon_sym_int128] = ACTIONS(441),
    [sym_string_type] = ACTIONS(441),
    [sym_bool_type] = ACTIONS(441),
    [sym_bottom_lit] = ACTIONS(441),
    [sym_null_lit] = ACTIONS(441),
    [sym_bool_lit] = ACTIONS(441),
    [sym_int_lit] = ACTIONS(441),
    [sym_float_lit] = ACTIONS(441),
    [anon_sym_LBRACK] = ACTIONS(441),
    [anon_sym_LBRACE] = ACTIONS(441),
    [anon_sym_RBRACE] = ACTIONS(441),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(441),
    [anon_sym_for] = ACTIONS(441),
    [anon_sym_if] = ACTIONS(441),
    [anon_sym_let] = ACTIONS(441),
    [anon_sym_PIPE] = ACTIONS(441),
    [anon_sym_AMP] = ACTIONS(441),
    [anon_sym_PIPE_PIPE] = ACTIONS(441),
    [anon_sym_AMP_AMP] = ACTIONS(441),
    [anon_sym_EQ_EQ] = ACTIONS(441),
    [anon_sym_BANG_EQ] = ACTIONS(441),
    [anon_sym_LT] = ACTIONS(441),
    [anon_sym_LT_EQ] = ACTIONS(441),
    [anon_sym_GT] = ACTIONS(441),
    [anon_sym_GT_EQ] = ACTIONS(441),
    [anon_sym_EQ_TILDE] = ACTIONS(441),
    [anon_sym_BANG_TILDE] = ACTIONS(441),
    [anon_sym_PLUS] = ACTIONS(441),
    [anon_sym_DASH] = ACTIONS(441),
    [anon_sym_STAR] = ACTIONS(441),
    [anon_sym_SLASH] = ACTIONS(441),
    [anon_sym_BANG] = ACTIONS(441),
    [anon_sym_LBRACK2] = ACTIONS(443),
    [sym_comment] = ACTIONS(331),
  },
  [127] = {
    [sym_identifier] = ACTIONS(433),
    [anon_sym_LF] = ACTIONS(435),
    [anon_sym_COMMA] = ACTIONS(433),
    [anon_sym_LPAREN] = ACTIONS(433),
    [sym_dot] = ACTIONS(433),
    [anon_sym__] = ACTIONS(433),
    [anon_sym_POUND_DQUOTE] = ACTIONS(433),
    [anon_sym_DQUOTE] = ACTIONS(433),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(433),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(433),
    [anon_sym_len] = ACTIONS(433),
    [anon_sym_close] = ACTIONS(433),
    [anon_sym_and] = ACTIONS(433),
    [anon_sym_or] = ACTIONS(433),
    [anon_sym_div] = ACTIONS(433),
    [anon_sym_mod] = ACTIONS(433),
    [anon_sym_quo] = ACTIONS(433),
    [anon_sym_rem] = ACTIONS(433),
    [sym_number_type] = ACTIONS(433),
    [anon_sym_float] = ACTIONS(433),
    [anon_sym_float32] = ACTIONS(433),
    [anon_sym_float64] = ACTIONS(433),
    [anon_sym_uint] = ACTIONS(433),
    [anon_sym_uint8] = ACTIONS(433),
    [anon_sym_uint16] = ACTIONS(433),
    [anon_sym_uint32] = ACTIONS(433),
    [anon_sym_uint64] = ACTIONS(433),
    [anon_sym_uint128] = ACTIONS(433),
    [anon_sym_int] = ACTIONS(433),
    [anon_sym_int8] = ACTIONS(433),
    [anon_sym_int16] = ACTIONS(433),
    [anon_sym_int32] = ACTIONS(433),
    [anon_sym_int64] = ACTIONS(433),
    [anon_sym_int128] = ACTIONS(433),
    [sym_string_type] = ACTIONS(433),
    [sym_bool_type] = ACTIONS(433),
    [sym_bottom_lit] = ACTIONS(433),
    [sym_null_lit] = ACTIONS(433),
    [sym_bool_lit] = ACTIONS(433),
    [sym_int_lit] = ACTIONS(433),
    [sym_float_lit] = ACTIONS(433),
    [anon_sym_LBRACK] = ACTIONS(433),
    [anon_sym_LBRACE] = ACTIONS(433),
    [anon_sym_RBRACE] = ACTIONS(433),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(433),
    [anon_sym_for] = ACTIONS(433),
    [anon_sym_if] = ACTIONS(433),
    [anon_sym_let] = ACTIONS(433),
    [anon_sym_PIPE] = ACTIONS(433),
    [anon_sym_AMP] = ACTIONS(433),
    [anon_sym_PIPE_PIPE] = ACTIONS(433),
    [anon_sym_AMP_AMP] = ACTIONS(433),
    [anon_sym_EQ_EQ] = ACTIONS(433),
    [anon_sym_BANG_EQ] = ACTIONS(433),
    [anon_sym_LT] = ACTIONS(433),
    [anon_sym_LT_EQ] = ACTIONS(433),
    [anon_sym_GT] = ACTIONS(433),
    [anon_sym_GT_EQ] = ACTIONS(433),
    [anon_sym_EQ_TILDE] = ACTIONS(433),
    [anon_sym_BANG_TILDE] = ACTIONS(433),
    [anon_sym_PLUS] = ACTIONS(433),
    [anon_sym_DASH] = ACTIONS(433),
    [anon_sym_STAR] = ACTIONS(433),
    [anon_sym_SLASH] = ACTIONS(433),
    [anon_sym_BANG] = ACTIONS(433),
    [anon_sym_LBRACK2] = ACTIONS(435),
    [sym_comment] = ACTIONS(331),
  },
  [128] = {
    [sym_identifier] = ACTIONS(461),
    [anon_sym_LF] = ACTIONS(463),
    [anon_sym_COMMA] = ACTIONS(461),
    [anon_sym_LPAREN] = ACTIONS(461),
    [sym_dot] = ACTIONS(461),
    [anon_sym__] = ACTIONS(461),
    [anon_sym_POUND_DQUOTE] = ACTIONS(461),
    [anon_sym_DQUOTE] = ACTIONS(461),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(461),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(461),
    [anon_sym_len] = ACTIONS(461),
    [anon_sym_close] = ACTIONS(461),
    [anon_sym_and] = ACTIONS(461),
    [anon_sym_or] = ACTIONS(461),
    [anon_sym_div] = ACTIONS(461),
    [anon_sym_mod] = ACTIONS(461),
    [anon_sym_quo] = ACTIONS(461),
    [anon_sym_rem] = ACTIONS(461),
    [sym_number_type] = ACTIONS(461),
    [anon_sym_float] = ACTIONS(461),
    [anon_sym_float32] = ACTIONS(461),
    [anon_sym_float64] = ACTIONS(461),
    [anon_sym_uint] = ACTIONS(461),
    [anon_sym_uint8] = ACTIONS(461),
    [anon_sym_uint16] = ACTIONS(461),
    [anon_sym_uint32] = ACTIONS(461),
    [anon_sym_uint64] = ACTIONS(461),
    [anon_sym_uint128] = ACTIONS(461),
    [anon_sym_int] = ACTIONS(461),
    [anon_sym_int8] = ACTIONS(461),
    [anon_sym_int16] = ACTIONS(461),
    [anon_sym_int32] = ACTIONS(461),
    [anon_sym_int64] = ACTIONS(461),
    [anon_sym_int128] = ACTIONS(461),
    [sym_string_type] = ACTIONS(461),
    [sym_bool_type] = ACTIONS(461),
    [sym_bottom_lit] = ACTIONS(461),
    [sym_null_lit] = ACTIONS(461),
    [sym_bool_lit] = ACTIONS(461),
    [sym_int_lit] = ACTIONS(461),
    [sym_float_lit] = ACTIONS(461),
    [anon_sym_LBRACK] = ACTIONS(461),
    [anon_sym_LBRACE] = ACTIONS(461),
    [anon_sym_RBRACE] = ACTIONS(461),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(461),
    [anon_sym_for] = ACTIONS(461),
    [anon_sym_if] = ACTIONS(461),
    [anon_sym_let] = ACTIONS(461),
    [anon_sym_PIPE] = ACTIONS(461),
    [anon_sym_AMP] = ACTIONS(461),
    [anon_sym_PIPE_PIPE] = ACTIONS(461),
    [anon_sym_AMP_AMP] = ACTIONS(461),
    [anon_sym_EQ_EQ] = ACTIONS(461),
    [anon_sym_BANG_EQ] = ACTIONS(461),
    [anon_sym_LT] = ACTIONS(461),
    [anon_sym_LT_EQ] = ACTIONS(461),
    [anon_sym_GT] = ACTIONS(461),
    [anon_sym_GT_EQ] = ACTIONS(461),
    [anon_sym_EQ_TILDE] = ACTIONS(461),
    [anon_sym_BANG_TILDE] = ACTIONS(461),
    [anon_sym_PLUS] = ACTIONS(461),
    [anon_sym_DASH] = ACTIONS(461),
    [anon_sym_STAR] = ACTIONS(461),
    [anon_sym_SLASH] = ACTIONS(461),
    [anon_sym_BANG] = ACTIONS(461),
    [anon_sym_LBRACK2] = ACTIONS(463),
    [sym_comment] = ACTIONS(331),
  },
  [129] = {
    [sym_identifier] = ACTIONS(469),
    [anon_sym_COMMA] = ACTIONS(471),
    [anon_sym_LPAREN] = ACTIONS(471),
    [anon_sym_RPAREN] = ACTIONS(471),
    [sym_dot] = ACTIONS(469),
    [anon_sym__] = ACTIONS(469),
    [anon_sym_POUND_DQUOTE] = ACTIONS(469),
    [anon_sym_DQUOTE] = ACTIONS(469),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(471),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(471),
    [anon_sym_len] = ACTIONS(469),
    [anon_sym_close] = ACTIONS(469),
    [anon_sym_and] = ACTIONS(469),
    [anon_sym_or] = ACTIONS(469),
    [anon_sym_div] = ACTIONS(469),
    [anon_sym_mod] = ACTIONS(469),
    [anon_sym_quo] = ACTIONS(469),
    [anon_sym_rem] = ACTIONS(469),
    [sym_number_type] = ACTIONS(469),
    [anon_sym_float] = ACTIONS(469),
    [anon_sym_float32] = ACTIONS(469),
    [anon_sym_float64] = ACTIONS(469),
    [anon_sym_uint] = ACTIONS(469),
    [anon_sym_uint8] = ACTIONS(469),
    [anon_sym_uint16] = ACTIONS(469),
    [anon_sym_uint32] = ACTIONS(469),
    [anon_sym_uint64] = ACTIONS(469),
    [anon_sym_uint128] = ACTIONS(469),
    [anon_sym_int] = ACTIONS(469),
    [anon_sym_int8] = ACTIONS(469),
    [anon_sym_int16] = ACTIONS(469),
    [anon_sym_int32] = ACTIONS(469),
    [anon_sym_int64] = ACTIONS(469),
    [anon_sym_int128] = ACTIONS(469),
    [sym_string_type] = ACTIONS(469),
    [sym_bool_type] = ACTIONS(469),
    [sym_bottom_lit] = ACTIONS(471),
    [sym_null_lit] = ACTIONS(469),
    [sym_bool_lit] = ACTIONS(469),
    [sym_int_lit] = ACTIONS(469),
    [sym_float_lit] = ACTIONS(469),
    [anon_sym_LBRACK] = ACTIONS(469),
    [anon_sym_RBRACK] = ACTIONS(471),
    [anon_sym_LBRACE] = ACTIONS(471),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(471),
    [anon_sym_for] = ACTIONS(469),
    [anon_sym_if] = ACTIONS(469),
    [anon_sym_let] = ACTIONS(469),
    [anon_sym_PIPE] = ACTIONS(469),
    [anon_sym_AMP] = ACTIONS(469),
    [anon_sym_PIPE_PIPE] = ACTIONS(471),
    [anon_sym_AMP_AMP] = ACTIONS(471),
    [anon_sym_EQ_EQ] = ACTIONS(471),
    [anon_sym_BANG_EQ] = ACTIONS(471),
    [anon_sym_LT] = ACTIONS(469),
    [anon_sym_LT_EQ] = ACTIONS(471),
    [anon_sym_GT] = ACTIONS(469),
    [anon_sym_GT_EQ] = ACTIONS(471),
    [anon_sym_EQ_TILDE] = ACTIONS(471),
    [anon_sym_BANG_TILDE] = ACTIONS(471),
    [anon_sym_PLUS] = ACTIONS(471),
    [anon_sym_DASH] = ACTIONS(471),
    [anon_sym_STAR] = ACTIONS(471),
    [anon_sym_SLASH] = ACTIONS(469),
    [anon_sym_BANG] = ACTIONS(469),
    [anon_sym_LBRACK2] = ACTIONS(471),
    [sym_comment] = ACTIONS(3),
  },
  [130] = {
    [sym_identifier] = ACTIONS(393),
    [anon_sym_LF] = ACTIONS(395),
    [anon_sym_COMMA] = ACTIONS(393),
    [anon_sym_LPAREN] = ACTIONS(393),
    [sym_dot] = ACTIONS(393),
    [anon_sym__] = ACTIONS(393),
    [anon_sym_POUND_DQUOTE] = ACTIONS(393),
    [anon_sym_DQUOTE] = ACTIONS(393),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(393),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(393),
    [anon_sym_len] = ACTIONS(393),
    [anon_sym_close] = ACTIONS(393),
    [anon_sym_and] = ACTIONS(393),
    [anon_sym_or] = ACTIONS(393),
    [anon_sym_div] = ACTIONS(393),
    [anon_sym_mod] = ACTIONS(393),
    [anon_sym_quo] = ACTIONS(393),
    [anon_sym_rem] = ACTIONS(393),
    [sym_number_type] = ACTIONS(393),
    [anon_sym_float] = ACTIONS(393),
    [anon_sym_float32] = ACTIONS(393),
    [anon_sym_float64] = ACTIONS(393),
    [anon_sym_uint] = ACTIONS(393),
    [anon_sym_uint8] = ACTIONS(393),
    [anon_sym_uint16] = ACTIONS(393),
    [anon_sym_uint32] = ACTIONS(393),
    [anon_sym_uint64] = ACTIONS(393),
    [anon_sym_uint128] = ACTIONS(393),
    [anon_sym_int] = ACTIONS(393),
    [anon_sym_int8] = ACTIONS(393),
    [anon_sym_int16] = ACTIONS(393),
    [anon_sym_int32] = ACTIONS(393),
    [anon_sym_int64] = ACTIONS(393),
    [anon_sym_int128] = ACTIONS(393),
    [sym_string_type] = ACTIONS(393),
    [sym_bool_type] = ACTIONS(393),
    [sym_bottom_lit] = ACTIONS(393),
    [sym_null_lit] = ACTIONS(393),
    [sym_bool_lit] = ACTIONS(393),
    [sym_int_lit] = ACTIONS(393),
    [sym_float_lit] = ACTIONS(393),
    [anon_sym_LBRACK] = ACTIONS(393),
    [anon_sym_LBRACE] = ACTIONS(393),
    [anon_sym_RBRACE] = ACTIONS(393),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(393),
    [anon_sym_for] = ACTIONS(393),
    [anon_sym_if] = ACTIONS(393),
    [anon_sym_let] = ACTIONS(393),
    [anon_sym_PIPE] = ACTIONS(393),
    [anon_sym_AMP] = ACTIONS(393),
    [anon_sym_PIPE_PIPE] = ACTIONS(393),
    [anon_sym_AMP_AMP] = ACTIONS(393),
    [anon_sym_EQ_EQ] = ACTIONS(393),
    [anon_sym_BANG_EQ] = ACTIONS(393),
    [anon_sym_LT] = ACTIONS(393),
    [anon_sym_LT_EQ] = ACTIONS(393),
    [anon_sym_GT] = ACTIONS(393),
    [anon_sym_GT_EQ] = ACTIONS(393),
    [anon_sym_EQ_TILDE] = ACTIONS(393),
    [anon_sym_BANG_TILDE] = ACTIONS(393),
    [anon_sym_PLUS] = ACTIONS(393),
    [anon_sym_DASH] = ACTIONS(393),
    [anon_sym_STAR] = ACTIONS(393),
    [anon_sym_SLASH] = ACTIONS(393),
    [anon_sym_BANG] = ACTIONS(393),
    [anon_sym_LBRACK2] = ACTIONS(395),
    [sym_comment] = ACTIONS(331),
  },
  [131] = {
    [sym_identifier] = ACTIONS(477),
    [anon_sym_COMMA] = ACTIONS(479),
    [anon_sym_LPAREN] = ACTIONS(479),
    [anon_sym_RPAREN] = ACTIONS(479),
    [sym_dot] = ACTIONS(477),
    [anon_sym__] = ACTIONS(477),
    [anon_sym_POUND_DQUOTE] = ACTIONS(477),
    [anon_sym_DQUOTE] = ACTIONS(477),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(479),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(479),
    [anon_sym_len] = ACTIONS(477),
    [anon_sym_close] = ACTIONS(477),
    [anon_sym_and] = ACTIONS(477),
    [anon_sym_or] = ACTIONS(477),
    [anon_sym_div] = ACTIONS(477),
    [anon_sym_mod] = ACTIONS(477),
    [anon_sym_quo] = ACTIONS(477),
    [anon_sym_rem] = ACTIONS(477),
    [sym_number_type] = ACTIONS(477),
    [anon_sym_float] = ACTIONS(477),
    [anon_sym_float32] = ACTIONS(477),
    [anon_sym_float64] = ACTIONS(477),
    [anon_sym_uint] = ACTIONS(477),
    [anon_sym_uint8] = ACTIONS(477),
    [anon_sym_uint16] = ACTIONS(477),
    [anon_sym_uint32] = ACTIONS(477),
    [anon_sym_uint64] = ACTIONS(477),
    [anon_sym_uint128] = ACTIONS(477),
    [anon_sym_int] = ACTIONS(477),
    [anon_sym_int8] = ACTIONS(477),
    [anon_sym_int16] = ACTIONS(477),
    [anon_sym_int32] = ACTIONS(477),
    [anon_sym_int64] = ACTIONS(477),
    [anon_sym_int128] = ACTIONS(477),
    [sym_string_type] = ACTIONS(477),
    [sym_bool_type] = ACTIONS(477),
    [sym_bottom_lit] = ACTIONS(479),
    [sym_null_lit] = ACTIONS(477),
    [sym_bool_lit] = ACTIONS(477),
    [sym_int_lit] = ACTIONS(477),
    [sym_float_lit] = ACTIONS(477),
    [anon_sym_LBRACK] = ACTIONS(477),
    [anon_sym_RBRACK] = ACTIONS(479),
    [anon_sym_LBRACE] = ACTIONS(479),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(479),
    [anon_sym_for] = ACTIONS(477),
    [anon_sym_if] = ACTIONS(477),
    [anon_sym_let] = ACTIONS(477),
    [anon_sym_PIPE] = ACTIONS(477),
    [anon_sym_AMP] = ACTIONS(477),
    [anon_sym_PIPE_PIPE] = ACTIONS(479),
    [anon_sym_AMP_AMP] = ACTIONS(479),
    [anon_sym_EQ_EQ] = ACTIONS(479),
    [anon_sym_BANG_EQ] = ACTIONS(479),
    [anon_sym_LT] = ACTIONS(477),
    [anon_sym_LT_EQ] = ACTIONS(479),
    [anon_sym_GT] = ACTIONS(477),
    [anon_sym_GT_EQ] = ACTIONS(479),
    [anon_sym_EQ_TILDE] = ACTIONS(479),
    [anon_sym_BANG_TILDE] = ACTIONS(479),
    [anon_sym_PLUS] = ACTIONS(479),
    [anon_sym_DASH] = ACTIONS(479),
    [anon_sym_STAR] = ACTIONS(479),
    [anon_sym_SLASH] = ACTIONS(477),
    [anon_sym_BANG] = ACTIONS(477),
    [anon_sym_LBRACK2] = ACTIONS(479),
    [sym_comment] = ACTIONS(3),
  },
  [132] = {
    [sym_identifier] = ACTIONS(397),
    [anon_sym_LF] = ACTIONS(399),
    [anon_sym_COMMA] = ACTIONS(397),
    [anon_sym_LPAREN] = ACTIONS(397),
    [sym_dot] = ACTIONS(397),
    [anon_sym__] = ACTIONS(397),
    [anon_sym_POUND_DQUOTE] = ACTIONS(397),
    [anon_sym_DQUOTE] = ACTIONS(397),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(397),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(397),
    [anon_sym_len] = ACTIONS(397),
    [anon_sym_close] = ACTIONS(397),
    [anon_sym_and] = ACTIONS(397),
    [anon_sym_or] = ACTIONS(397),
    [anon_sym_div] = ACTIONS(397),
    [anon_sym_mod] = ACTIONS(397),
    [anon_sym_quo] = ACTIONS(397),
    [anon_sym_rem] = ACTIONS(397),
    [sym_number_type] = ACTIONS(397),
    [anon_sym_float] = ACTIONS(397),
    [anon_sym_float32] = ACTIONS(397),
    [anon_sym_float64] = ACTIONS(397),
    [anon_sym_uint] = ACTIONS(397),
    [anon_sym_uint8] = ACTIONS(397),
    [anon_sym_uint16] = ACTIONS(397),
    [anon_sym_uint32] = ACTIONS(397),
    [anon_sym_uint64] = ACTIONS(397),
    [anon_sym_uint128] = ACTIONS(397),
    [anon_sym_int] = ACTIONS(397),
    [anon_sym_int8] = ACTIONS(397),
    [anon_sym_int16] = ACTIONS(397),
    [anon_sym_int32] = ACTIONS(397),
    [anon_sym_int64] = ACTIONS(397),
    [anon_sym_int128] = ACTIONS(397),
    [sym_string_type] = ACTIONS(397),
    [sym_bool_type] = ACTIONS(397),
    [sym_bottom_lit] = ACTIONS(397),
    [sym_null_lit] = ACTIONS(397),
    [sym_bool_lit] = ACTIONS(397),
    [sym_int_lit] = ACTIONS(397),
    [sym_float_lit] = ACTIONS(397),
    [anon_sym_LBRACK] = ACTIONS(397),
    [anon_sym_LBRACE] = ACTIONS(397),
    [anon_sym_RBRACE] = ACTIONS(397),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(397),
    [anon_sym_for] = ACTIONS(397),
    [anon_sym_if] = ACTIONS(397),
    [anon_sym_let] = ACTIONS(397),
    [anon_sym_PIPE] = ACTIONS(397),
    [anon_sym_AMP] = ACTIONS(397),
    [anon_sym_PIPE_PIPE] = ACTIONS(397),
    [anon_sym_AMP_AMP] = ACTIONS(397),
    [anon_sym_EQ_EQ] = ACTIONS(397),
    [anon_sym_BANG_EQ] = ACTIONS(397),
    [anon_sym_LT] = ACTIONS(397),
    [anon_sym_LT_EQ] = ACTIONS(397),
    [anon_sym_GT] = ACTIONS(397),
    [anon_sym_GT_EQ] = ACTIONS(397),
    [anon_sym_EQ_TILDE] = ACTIONS(397),
    [anon_sym_BANG_TILDE] = ACTIONS(397),
    [anon_sym_PLUS] = ACTIONS(397),
    [anon_sym_DASH] = ACTIONS(397),
    [anon_sym_STAR] = ACTIONS(397),
    [anon_sym_SLASH] = ACTIONS(397),
    [anon_sym_BANG] = ACTIONS(397),
    [anon_sym_LBRACK2] = ACTIONS(399),
    [sym_comment] = ACTIONS(331),
  },
  [133] = {
    [sym_identifier] = ACTIONS(477),
    [anon_sym_LF] = ACTIONS(479),
    [anon_sym_COMMA] = ACTIONS(477),
    [anon_sym_LPAREN] = ACTIONS(477),
    [sym_dot] = ACTIONS(477),
    [anon_sym__] = ACTIONS(477),
    [anon_sym_POUND_DQUOTE] = ACTIONS(477),
    [anon_sym_DQUOTE] = ACTIONS(477),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(477),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(477),
    [anon_sym_len] = ACTIONS(477),
    [anon_sym_close] = ACTIONS(477),
    [anon_sym_and] = ACTIONS(477),
    [anon_sym_or] = ACTIONS(477),
    [anon_sym_div] = ACTIONS(477),
    [anon_sym_mod] = ACTIONS(477),
    [anon_sym_quo] = ACTIONS(477),
    [anon_sym_rem] = ACTIONS(477),
    [sym_number_type] = ACTIONS(477),
    [anon_sym_float] = ACTIONS(477),
    [anon_sym_float32] = ACTIONS(477),
    [anon_sym_float64] = ACTIONS(477),
    [anon_sym_uint] = ACTIONS(477),
    [anon_sym_uint8] = ACTIONS(477),
    [anon_sym_uint16] = ACTIONS(477),
    [anon_sym_uint32] = ACTIONS(477),
    [anon_sym_uint64] = ACTIONS(477),
    [anon_sym_uint128] = ACTIONS(477),
    [anon_sym_int] = ACTIONS(477),
    [anon_sym_int8] = ACTIONS(477),
    [anon_sym_int16] = ACTIONS(477),
    [anon_sym_int32] = ACTIONS(477),
    [anon_sym_int64] = ACTIONS(477),
    [anon_sym_int128] = ACTIONS(477),
    [sym_string_type] = ACTIONS(477),
    [sym_bool_type] = ACTIONS(477),
    [sym_bottom_lit] = ACTIONS(477),
    [sym_null_lit] = ACTIONS(477),
    [sym_bool_lit] = ACTIONS(477),
    [sym_int_lit] = ACTIONS(477),
    [sym_float_lit] = ACTIONS(477),
    [anon_sym_LBRACK] = ACTIONS(477),
    [anon_sym_LBRACE] = ACTIONS(477),
    [anon_sym_RBRACE] = ACTIONS(477),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(477),
    [anon_sym_for] = ACTIONS(477),
    [anon_sym_if] = ACTIONS(477),
    [anon_sym_let] = ACTIONS(477),
    [anon_sym_PIPE] = ACTIONS(477),
    [anon_sym_AMP] = ACTIONS(477),
    [anon_sym_PIPE_PIPE] = ACTIONS(477),
    [anon_sym_AMP_AMP] = ACTIONS(477),
    [anon_sym_EQ_EQ] = ACTIONS(477),
    [anon_sym_BANG_EQ] = ACTIONS(477),
    [anon_sym_LT] = ACTIONS(477),
    [anon_sym_LT_EQ] = ACTIONS(477),
    [anon_sym_GT] = ACTIONS(477),
    [anon_sym_GT_EQ] = ACTIONS(477),
    [anon_sym_EQ_TILDE] = ACTIONS(477),
    [anon_sym_BANG_TILDE] = ACTIONS(477),
    [anon_sym_PLUS] = ACTIONS(477),
    [anon_sym_DASH] = ACTIONS(477),
    [anon_sym_STAR] = ACTIONS(477),
    [anon_sym_SLASH] = ACTIONS(477),
    [anon_sym_BANG] = ACTIONS(477),
    [anon_sym_LBRACK2] = ACTIONS(479),
    [sym_comment] = ACTIONS(331),
  },
  [134] = {
    [sym_identifier] = ACTIONS(357),
    [anon_sym_COMMA] = ACTIONS(359),
    [anon_sym_LPAREN] = ACTIONS(359),
    [sym_dot] = ACTIONS(357),
    [anon_sym__] = ACTIONS(357),
    [anon_sym_POUND_DQUOTE] = ACTIONS(357),
    [anon_sym_DQUOTE] = ACTIONS(357),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(359),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(359),
    [anon_sym_len] = ACTIONS(357),
    [anon_sym_close] = ACTIONS(357),
    [anon_sym_and] = ACTIONS(357),
    [anon_sym_or] = ACTIONS(357),
    [anon_sym_div] = ACTIONS(357),
    [anon_sym_mod] = ACTIONS(357),
    [anon_sym_quo] = ACTIONS(357),
    [anon_sym_rem] = ACTIONS(357),
    [sym_number_type] = ACTIONS(357),
    [anon_sym_float] = ACTIONS(357),
    [anon_sym_float32] = ACTIONS(357),
    [anon_sym_float64] = ACTIONS(357),
    [anon_sym_uint] = ACTIONS(357),
    [anon_sym_uint8] = ACTIONS(357),
    [anon_sym_uint16] = ACTIONS(357),
    [anon_sym_uint32] = ACTIONS(357),
    [anon_sym_uint64] = ACTIONS(357),
    [anon_sym_uint128] = ACTIONS(357),
    [anon_sym_int] = ACTIONS(357),
    [anon_sym_int8] = ACTIONS(357),
    [anon_sym_int16] = ACTIONS(357),
    [anon_sym_int32] = ACTIONS(357),
    [anon_sym_int64] = ACTIONS(357),
    [anon_sym_int128] = ACTIONS(357),
    [sym_string_type] = ACTIONS(357),
    [sym_bool_type] = ACTIONS(357),
    [sym_bottom_lit] = ACTIONS(359),
    [sym_null_lit] = ACTIONS(357),
    [sym_bool_lit] = ACTIONS(357),
    [sym_int_lit] = ACTIONS(357),
    [sym_float_lit] = ACTIONS(357),
    [anon_sym_LBRACK] = ACTIONS(357),
    [anon_sym_RBRACK] = ACTIONS(359),
    [anon_sym_LBRACE] = ACTIONS(359),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(359),
    [anon_sym_EQ] = ACTIONS(481),
    [anon_sym_for] = ACTIONS(357),
    [anon_sym_if] = ACTIONS(357),
    [anon_sym_PIPE] = ACTIONS(357),
    [anon_sym_AMP] = ACTIONS(357),
    [anon_sym_PIPE_PIPE] = ACTIONS(359),
    [anon_sym_AMP_AMP] = ACTIONS(359),
    [anon_sym_EQ_EQ] = ACTIONS(359),
    [anon_sym_BANG_EQ] = ACTIONS(359),
    [anon_sym_LT] = ACTIONS(357),
    [anon_sym_LT_EQ] = ACTIONS(359),
    [anon_sym_GT] = ACTIONS(357),
    [anon_sym_GT_EQ] = ACTIONS(359),
    [anon_sym_EQ_TILDE] = ACTIONS(359),
    [anon_sym_BANG_TILDE] = ACTIONS(359),
    [anon_sym_PLUS] = ACTIONS(359),
    [anon_sym_DASH] = ACTIONS(359),
    [anon_sym_STAR] = ACTIONS(359),
    [anon_sym_SLASH] = ACTIONS(357),
    [anon_sym_BANG] = ACTIONS(357),
    [anon_sym_LBRACK2] = ACTIONS(359),
    [sym_comment] = ACTIONS(3),
  },
  [135] = {
    [sym_identifier] = ACTIONS(483),
    [anon_sym_LF] = ACTIONS(485),
    [anon_sym_COMMA] = ACTIONS(483),
    [anon_sym_LPAREN] = ACTIONS(483),
    [anon_sym__] = ACTIONS(483),
    [anon_sym_POUND_DQUOTE] = ACTIONS(483),
    [anon_sym_DQUOTE] = ACTIONS(483),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(483),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(483),
    [anon_sym_len] = ACTIONS(483),
    [anon_sym_close] = ACTIONS(483),
    [anon_sym_and] = ACTIONS(483),
    [anon_sym_or] = ACTIONS(483),
    [anon_sym_div] = ACTIONS(483),
    [anon_sym_mod] = ACTIONS(483),
    [anon_sym_quo] = ACTIONS(483),
    [anon_sym_rem] = ACTIONS(483),
    [sym_number_type] = ACTIONS(483),
    [anon_sym_float] = ACTIONS(483),
    [anon_sym_float32] = ACTIONS(483),
    [anon_sym_float64] = ACTIONS(483),
    [anon_sym_uint] = ACTIONS(483),
    [anon_sym_uint8] = ACTIONS(483),
    [anon_sym_uint16] = ACTIONS(483),
    [anon_sym_uint32] = ACTIONS(483),
    [anon_sym_uint64] = ACTIONS(483),
    [anon_sym_uint128] = ACTIONS(483),
    [anon_sym_int] = ACTIONS(483),
    [anon_sym_int8] = ACTIONS(483),
    [anon_sym_int16] = ACTIONS(483),
    [anon_sym_int32] = ACTIONS(483),
    [anon_sym_int64] = ACTIONS(483),
    [anon_sym_int128] = ACTIONS(483),
    [sym_string_type] = ACTIONS(483),
    [sym_bool_type] = ACTIONS(483),
    [sym_bottom_lit] = ACTIONS(483),
    [sym_null_lit] = ACTIONS(483),
    [sym_bool_lit] = ACTIONS(483),
    [sym_int_lit] = ACTIONS(483),
    [sym_float_lit] = ACTIONS(483),
    [anon_sym_LBRACK] = ACTIONS(483),
    [anon_sym_LBRACE] = ACTIONS(483),
    [anon_sym_RBRACE] = ACTIONS(483),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(483),
    [anon_sym_for] = ACTIONS(483),
    [anon_sym_if] = ACTIONS(483),
    [anon_sym_let] = ACTIONS(483),
    [anon_sym_PIPE] = ACTIONS(483),
    [anon_sym_AMP] = ACTIONS(483),
    [anon_sym_PIPE_PIPE] = ACTIONS(483),
    [anon_sym_AMP_AMP] = ACTIONS(483),
    [anon_sym_EQ_EQ] = ACTIONS(487),
    [anon_sym_BANG_EQ] = ACTIONS(487),
    [anon_sym_LT] = ACTIONS(487),
    [anon_sym_LT_EQ] = ACTIONS(487),
    [anon_sym_GT] = ACTIONS(487),
    [anon_sym_GT_EQ] = ACTIONS(487),
    [anon_sym_EQ_TILDE] = ACTIONS(487),
    [anon_sym_BANG_TILDE] = ACTIONS(487),
    [anon_sym_PLUS] = ACTIONS(489),
    [anon_sym_DASH] = ACTIONS(489),
    [anon_sym_STAR] = ACTIONS(491),
    [anon_sym_SLASH] = ACTIONS(491),
    [anon_sym_BANG] = ACTIONS(483),
    [sym_comment] = ACTIONS(331),
  },
  [136] = {
    [sym_identifier] = ACTIONS(493),
    [anon_sym_LF] = ACTIONS(495),
    [anon_sym_COMMA] = ACTIONS(493),
    [anon_sym_LPAREN] = ACTIONS(493),
    [anon_sym__] = ACTIONS(493),
    [anon_sym_POUND_DQUOTE] = ACTIONS(493),
    [anon_sym_DQUOTE] = ACTIONS(493),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(493),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(493),
    [anon_sym_len] = ACTIONS(493),
    [anon_sym_close] = ACTIONS(493),
    [anon_sym_and] = ACTIONS(493),
    [anon_sym_or] = ACTIONS(493),
    [anon_sym_div] = ACTIONS(493),
    [anon_sym_mod] = ACTIONS(493),
    [anon_sym_quo] = ACTIONS(493),
    [anon_sym_rem] = ACTIONS(493),
    [sym_number_type] = ACTIONS(493),
    [anon_sym_float] = ACTIONS(493),
    [anon_sym_float32] = ACTIONS(493),
    [anon_sym_float64] = ACTIONS(493),
    [anon_sym_uint] = ACTIONS(493),
    [anon_sym_uint8] = ACTIONS(493),
    [anon_sym_uint16] = ACTIONS(493),
    [anon_sym_uint32] = ACTIONS(493),
    [anon_sym_uint64] = ACTIONS(493),
    [anon_sym_uint128] = ACTIONS(493),
    [anon_sym_int] = ACTIONS(493),
    [anon_sym_int8] = ACTIONS(493),
    [anon_sym_int16] = ACTIONS(493),
    [anon_sym_int32] = ACTIONS(493),
    [anon_sym_int64] = ACTIONS(493),
    [anon_sym_int128] = ACTIONS(493),
    [sym_string_type] = ACTIONS(493),
    [sym_bool_type] = ACTIONS(493),
    [sym_bottom_lit] = ACTIONS(493),
    [sym_null_lit] = ACTIONS(493),
    [sym_bool_lit] = ACTIONS(493),
    [sym_int_lit] = ACTIONS(493),
    [sym_float_lit] = ACTIONS(493),
    [anon_sym_LBRACK] = ACTIONS(493),
    [anon_sym_LBRACE] = ACTIONS(493),
    [anon_sym_RBRACE] = ACTIONS(493),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(493),
    [anon_sym_for] = ACTIONS(493),
    [anon_sym_if] = ACTIONS(493),
    [anon_sym_let] = ACTIONS(493),
    [anon_sym_PIPE] = ACTIONS(497),
    [anon_sym_AMP] = ACTIONS(499),
    [anon_sym_PIPE_PIPE] = ACTIONS(501),
    [anon_sym_AMP_AMP] = ACTIONS(503),
    [anon_sym_EQ_EQ] = ACTIONS(487),
    [anon_sym_BANG_EQ] = ACTIONS(487),
    [anon_sym_LT] = ACTIONS(487),
    [anon_sym_LT_EQ] = ACTIONS(487),
    [anon_sym_GT] = ACTIONS(487),
    [anon_sym_GT_EQ] = ACTIONS(487),
    [anon_sym_EQ_TILDE] = ACTIONS(487),
    [anon_sym_BANG_TILDE] = ACTIONS(487),
    [anon_sym_PLUS] = ACTIONS(489),
    [anon_sym_DASH] = ACTIONS(489),
    [anon_sym_STAR] = ACTIONS(491),
    [anon_sym_SLASH] = ACTIONS(491),
    [anon_sym_BANG] = ACTIONS(493),
    [sym_comment] = ACTIONS(331),
  },
  [137] = {
    [sym_identifier] = ACTIONS(483),
    [anon_sym_LF] = ACTIONS(485),
    [anon_sym_COMMA] = ACTIONS(483),
    [anon_sym_LPAREN] = ACTIONS(483),
    [anon_sym__] = ACTIONS(483),
    [anon_sym_POUND_DQUOTE] = ACTIONS(483),
    [anon_sym_DQUOTE] = ACTIONS(483),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(483),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(483),
    [anon_sym_len] = ACTIONS(483),
    [anon_sym_close] = ACTIONS(483),
    [anon_sym_and] = ACTIONS(483),
    [anon_sym_or] = ACTIONS(483),
    [anon_sym_div] = ACTIONS(483),
    [anon_sym_mod] = ACTIONS(483),
    [anon_sym_quo] = ACTIONS(483),
    [anon_sym_rem] = ACTIONS(483),
    [sym_number_type] = ACTIONS(483),
    [anon_sym_float] = ACTIONS(483),
    [anon_sym_float32] = ACTIONS(483),
    [anon_sym_float64] = ACTIONS(483),
    [anon_sym_uint] = ACTIONS(483),
    [anon_sym_uint8] = ACTIONS(483),
    [anon_sym_uint16] = ACTIONS(483),
    [anon_sym_uint32] = ACTIONS(483),
    [anon_sym_uint64] = ACTIONS(483),
    [anon_sym_uint128] = ACTIONS(483),
    [anon_sym_int] = ACTIONS(483),
    [anon_sym_int8] = ACTIONS(483),
    [anon_sym_int16] = ACTIONS(483),
    [anon_sym_int32] = ACTIONS(483),
    [anon_sym_int64] = ACTIONS(483),
    [anon_sym_int128] = ACTIONS(483),
    [sym_string_type] = ACTIONS(483),
    [sym_bool_type] = ACTIONS(483),
    [sym_bottom_lit] = ACTIONS(483),
    [sym_null_lit] = ACTIONS(483),
    [sym_bool_lit] = ACTIONS(483),
    [sym_int_lit] = ACTIONS(483),
    [sym_float_lit] = ACTIONS(483),
    [anon_sym_LBRACK] = ACTIONS(483),
    [anon_sym_LBRACE] = ACTIONS(483),
    [anon_sym_RBRACE] = ACTIONS(483),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(483),
    [anon_sym_for] = ACTIONS(483),
    [anon_sym_if] = ACTIONS(483),
    [anon_sym_let] = ACTIONS(483),
    [anon_sym_PIPE] = ACTIONS(483),
    [anon_sym_AMP] = ACTIONS(483),
    [anon_sym_PIPE_PIPE] = ACTIONS(483),
    [anon_sym_AMP_AMP] = ACTIONS(483),
    [anon_sym_EQ_EQ] = ACTIONS(483),
    [anon_sym_BANG_EQ] = ACTIONS(483),
    [anon_sym_LT] = ACTIONS(483),
    [anon_sym_LT_EQ] = ACTIONS(483),
    [anon_sym_GT] = ACTIONS(483),
    [anon_sym_GT_EQ] = ACTIONS(483),
    [anon_sym_EQ_TILDE] = ACTIONS(483),
    [anon_sym_BANG_TILDE] = ACTIONS(483),
    [anon_sym_PLUS] = ACTIONS(483),
    [anon_sym_DASH] = ACTIONS(483),
    [anon_sym_STAR] = ACTIONS(483),
    [anon_sym_SLASH] = ACTIONS(483),
    [anon_sym_BANG] = ACTIONS(483),
    [sym_comment] = ACTIONS(331),
  },
  [138] = {
    [sym_identifier] = ACTIONS(483),
    [anon_sym_LF] = ACTIONS(485),
    [anon_sym_COMMA] = ACTIONS(483),
    [anon_sym_LPAREN] = ACTIONS(483),
    [anon_sym__] = ACTIONS(483),
    [anon_sym_POUND_DQUOTE] = ACTIONS(483),
    [anon_sym_DQUOTE] = ACTIONS(483),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(483),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(483),
    [anon_sym_len] = ACTIONS(483),
    [anon_sym_close] = ACTIONS(483),
    [anon_sym_and] = ACTIONS(483),
    [anon_sym_or] = ACTIONS(483),
    [anon_sym_div] = ACTIONS(483),
    [anon_sym_mod] = ACTIONS(483),
    [anon_sym_quo] = ACTIONS(483),
    [anon_sym_rem] = ACTIONS(483),
    [sym_number_type] = ACTIONS(483),
    [anon_sym_float] = ACTIONS(483),
    [anon_sym_float32] = ACTIONS(483),
    [anon_sym_float64] = ACTIONS(483),
    [anon_sym_uint] = ACTIONS(483),
    [anon_sym_uint8] = ACTIONS(483),
    [anon_sym_uint16] = ACTIONS(483),
    [anon_sym_uint32] = ACTIONS(483),
    [anon_sym_uint64] = ACTIONS(483),
    [anon_sym_uint128] = ACTIONS(483),
    [anon_sym_int] = ACTIONS(483),
    [anon_sym_int8] = ACTIONS(483),
    [anon_sym_int16] = ACTIONS(483),
    [anon_sym_int32] = ACTIONS(483),
    [anon_sym_int64] = ACTIONS(483),
    [anon_sym_int128] = ACTIONS(483),
    [sym_string_type] = ACTIONS(483),
    [sym_bool_type] = ACTIONS(483),
    [sym_bottom_lit] = ACTIONS(483),
    [sym_null_lit] = ACTIONS(483),
    [sym_bool_lit] = ACTIONS(483),
    [sym_int_lit] = ACTIONS(483),
    [sym_float_lit] = ACTIONS(483),
    [anon_sym_LBRACK] = ACTIONS(483),
    [anon_sym_LBRACE] = ACTIONS(483),
    [anon_sym_RBRACE] = ACTIONS(483),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(483),
    [anon_sym_for] = ACTIONS(483),
    [anon_sym_if] = ACTIONS(483),
    [anon_sym_let] = ACTIONS(483),
    [anon_sym_PIPE] = ACTIONS(483),
    [anon_sym_AMP] = ACTIONS(483),
    [anon_sym_PIPE_PIPE] = ACTIONS(501),
    [anon_sym_AMP_AMP] = ACTIONS(503),
    [anon_sym_EQ_EQ] = ACTIONS(487),
    [anon_sym_BANG_EQ] = ACTIONS(487),
    [anon_sym_LT] = ACTIONS(487),
    [anon_sym_LT_EQ] = ACTIONS(487),
    [anon_sym_GT] = ACTIONS(487),
    [anon_sym_GT_EQ] = ACTIONS(487),
    [anon_sym_EQ_TILDE] = ACTIONS(487),
    [anon_sym_BANG_TILDE] = ACTIONS(487),
    [anon_sym_PLUS] = ACTIONS(489),
    [anon_sym_DASH] = ACTIONS(489),
    [anon_sym_STAR] = ACTIONS(491),
    [anon_sym_SLASH] = ACTIONS(491),
    [anon_sym_BANG] = ACTIONS(483),
    [sym_comment] = ACTIONS(331),
  },
  [139] = {
    [sym_identifier] = ACTIONS(483),
    [anon_sym_LF] = ACTIONS(485),
    [anon_sym_COMMA] = ACTIONS(483),
    [anon_sym_LPAREN] = ACTIONS(483),
    [anon_sym__] = ACTIONS(483),
    [anon_sym_POUND_DQUOTE] = ACTIONS(483),
    [anon_sym_DQUOTE] = ACTIONS(483),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(483),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(483),
    [anon_sym_len] = ACTIONS(483),
    [anon_sym_close] = ACTIONS(483),
    [anon_sym_and] = ACTIONS(483),
    [anon_sym_or] = ACTIONS(483),
    [anon_sym_div] = ACTIONS(483),
    [anon_sym_mod] = ACTIONS(483),
    [anon_sym_quo] = ACTIONS(483),
    [anon_sym_rem] = ACTIONS(483),
    [sym_number_type] = ACTIONS(483),
    [anon_sym_float] = ACTIONS(483),
    [anon_sym_float32] = ACTIONS(483),
    [anon_sym_float64] = ACTIONS(483),
    [anon_sym_uint] = ACTIONS(483),
    [anon_sym_uint8] = ACTIONS(483),
    [anon_sym_uint16] = ACTIONS(483),
    [anon_sym_uint32] = ACTIONS(483),
    [anon_sym_uint64] = ACTIONS(483),
    [anon_sym_uint128] = ACTIONS(483),
    [anon_sym_int] = ACTIONS(483),
    [anon_sym_int8] = ACTIONS(483),
    [anon_sym_int16] = ACTIONS(483),
    [anon_sym_int32] = ACTIONS(483),
    [anon_sym_int64] = ACTIONS(483),
    [anon_sym_int128] = ACTIONS(483),
    [sym_string_type] = ACTIONS(483),
    [sym_bool_type] = ACTIONS(483),
    [sym_bottom_lit] = ACTIONS(483),
    [sym_null_lit] = ACTIONS(483),
    [sym_bool_lit] = ACTIONS(483),
    [sym_int_lit] = ACTIONS(483),
    [sym_float_lit] = ACTIONS(483),
    [anon_sym_LBRACK] = ACTIONS(483),
    [anon_sym_LBRACE] = ACTIONS(483),
    [anon_sym_RBRACE] = ACTIONS(483),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(483),
    [anon_sym_for] = ACTIONS(483),
    [anon_sym_if] = ACTIONS(483),
    [anon_sym_let] = ACTIONS(483),
    [anon_sym_PIPE] = ACTIONS(483),
    [anon_sym_AMP] = ACTIONS(483),
    [anon_sym_PIPE_PIPE] = ACTIONS(483),
    [anon_sym_AMP_AMP] = ACTIONS(483),
    [anon_sym_EQ_EQ] = ACTIONS(483),
    [anon_sym_BANG_EQ] = ACTIONS(483),
    [anon_sym_LT] = ACTIONS(483),
    [anon_sym_LT_EQ] = ACTIONS(483),
    [anon_sym_GT] = ACTIONS(483),
    [anon_sym_GT_EQ] = ACTIONS(483),
    [anon_sym_EQ_TILDE] = ACTIONS(483),
    [anon_sym_BANG_TILDE] = ACTIONS(483),
    [anon_sym_PLUS] = ACTIONS(483),
    [anon_sym_DASH] = ACTIONS(483),
    [anon_sym_STAR] = ACTIONS(491),
    [anon_sym_SLASH] = ACTIONS(491),
    [anon_sym_BANG] = ACTIONS(483),
    [sym_comment] = ACTIONS(331),
  },
  [140] = {
    [sym_identifier] = ACTIONS(505),
    [anon_sym_LF] = ACTIONS(507),
    [anon_sym_COMMA] = ACTIONS(505),
    [anon_sym_LPAREN] = ACTIONS(505),
    [anon_sym__] = ACTIONS(505),
    [anon_sym_POUND_DQUOTE] = ACTIONS(505),
    [anon_sym_DQUOTE] = ACTIONS(505),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(505),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(505),
    [anon_sym_len] = ACTIONS(505),
    [anon_sym_close] = ACTIONS(505),
    [anon_sym_and] = ACTIONS(505),
    [anon_sym_or] = ACTIONS(505),
    [anon_sym_div] = ACTIONS(505),
    [anon_sym_mod] = ACTIONS(505),
    [anon_sym_quo] = ACTIONS(505),
    [anon_sym_rem] = ACTIONS(505),
    [sym_number_type] = ACTIONS(505),
    [anon_sym_float] = ACTIONS(505),
    [anon_sym_float32] = ACTIONS(505),
    [anon_sym_float64] = ACTIONS(505),
    [anon_sym_uint] = ACTIONS(505),
    [anon_sym_uint8] = ACTIONS(505),
    [anon_sym_uint16] = ACTIONS(505),
    [anon_sym_uint32] = ACTIONS(505),
    [anon_sym_uint64] = ACTIONS(505),
    [anon_sym_uint128] = ACTIONS(505),
    [anon_sym_int] = ACTIONS(505),
    [anon_sym_int8] = ACTIONS(505),
    [anon_sym_int16] = ACTIONS(505),
    [anon_sym_int32] = ACTIONS(505),
    [anon_sym_int64] = ACTIONS(505),
    [anon_sym_int128] = ACTIONS(505),
    [sym_string_type] = ACTIONS(505),
    [sym_bool_type] = ACTIONS(505),
    [sym_bottom_lit] = ACTIONS(505),
    [sym_null_lit] = ACTIONS(505),
    [sym_bool_lit] = ACTIONS(505),
    [sym_int_lit] = ACTIONS(505),
    [sym_float_lit] = ACTIONS(505),
    [anon_sym_LBRACK] = ACTIONS(505),
    [anon_sym_LBRACE] = ACTIONS(505),
    [anon_sym_RBRACE] = ACTIONS(505),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(505),
    [anon_sym_for] = ACTIONS(505),
    [anon_sym_if] = ACTIONS(505),
    [anon_sym_let] = ACTIONS(505),
    [anon_sym_PIPE] = ACTIONS(505),
    [anon_sym_AMP] = ACTIONS(505),
    [anon_sym_PIPE_PIPE] = ACTIONS(505),
    [anon_sym_AMP_AMP] = ACTIONS(505),
    [anon_sym_EQ_EQ] = ACTIONS(505),
    [anon_sym_BANG_EQ] = ACTIONS(505),
    [anon_sym_LT] = ACTIONS(505),
    [anon_sym_LT_EQ] = ACTIONS(505),
    [anon_sym_GT] = ACTIONS(505),
    [anon_sym_GT_EQ] = ACTIONS(505),
    [anon_sym_EQ_TILDE] = ACTIONS(505),
    [anon_sym_BANG_TILDE] = ACTIONS(505),
    [anon_sym_PLUS] = ACTIONS(505),
    [anon_sym_DASH] = ACTIONS(505),
    [anon_sym_STAR] = ACTIONS(505),
    [anon_sym_SLASH] = ACTIONS(505),
    [anon_sym_BANG] = ACTIONS(505),
    [sym_comment] = ACTIONS(331),
  },
  [141] = {
    [sym_identifier] = ACTIONS(509),
    [anon_sym_LF] = ACTIONS(511),
    [anon_sym_COMMA] = ACTIONS(509),
    [anon_sym_LPAREN] = ACTIONS(509),
    [anon_sym__] = ACTIONS(509),
    [anon_sym_POUND_DQUOTE] = ACTIONS(509),
    [anon_sym_DQUOTE] = ACTIONS(509),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(509),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(509),
    [anon_sym_len] = ACTIONS(509),
    [anon_sym_close] = ACTIONS(509),
    [anon_sym_and] = ACTIONS(509),
    [anon_sym_or] = ACTIONS(509),
    [anon_sym_div] = ACTIONS(509),
    [anon_sym_mod] = ACTIONS(509),
    [anon_sym_quo] = ACTIONS(509),
    [anon_sym_rem] = ACTIONS(509),
    [sym_number_type] = ACTIONS(509),
    [anon_sym_float] = ACTIONS(509),
    [anon_sym_float32] = ACTIONS(509),
    [anon_sym_float64] = ACTIONS(509),
    [anon_sym_uint] = ACTIONS(509),
    [anon_sym_uint8] = ACTIONS(509),
    [anon_sym_uint16] = ACTIONS(509),
    [anon_sym_uint32] = ACTIONS(509),
    [anon_sym_uint64] = ACTIONS(509),
    [anon_sym_uint128] = ACTIONS(509),
    [anon_sym_int] = ACTIONS(509),
    [anon_sym_int8] = ACTIONS(509),
    [anon_sym_int16] = ACTIONS(509),
    [anon_sym_int32] = ACTIONS(509),
    [anon_sym_int64] = ACTIONS(509),
    [anon_sym_int128] = ACTIONS(509),
    [sym_string_type] = ACTIONS(509),
    [sym_bool_type] = ACTIONS(509),
    [sym_bottom_lit] = ACTIONS(509),
    [sym_null_lit] = ACTIONS(509),
    [sym_bool_lit] = ACTIONS(509),
    [sym_int_lit] = ACTIONS(509),
    [sym_float_lit] = ACTIONS(509),
    [anon_sym_LBRACK] = ACTIONS(509),
    [anon_sym_LBRACE] = ACTIONS(509),
    [anon_sym_RBRACE] = ACTIONS(509),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(509),
    [anon_sym_for] = ACTIONS(509),
    [anon_sym_if] = ACTIONS(509),
    [anon_sym_let] = ACTIONS(509),
    [anon_sym_PIPE] = ACTIONS(497),
    [anon_sym_AMP] = ACTIONS(499),
    [anon_sym_PIPE_PIPE] = ACTIONS(501),
    [anon_sym_AMP_AMP] = ACTIONS(503),
    [anon_sym_EQ_EQ] = ACTIONS(487),
    [anon_sym_BANG_EQ] = ACTIONS(487),
    [anon_sym_LT] = ACTIONS(487),
    [anon_sym_LT_EQ] = ACTIONS(487),
    [anon_sym_GT] = ACTIONS(487),
    [anon_sym_GT_EQ] = ACTIONS(487),
    [anon_sym_EQ_TILDE] = ACTIONS(487),
    [anon_sym_BANG_TILDE] = ACTIONS(487),
    [anon_sym_PLUS] = ACTIONS(489),
    [anon_sym_DASH] = ACTIONS(489),
    [anon_sym_STAR] = ACTIONS(491),
    [anon_sym_SLASH] = ACTIONS(491),
    [anon_sym_BANG] = ACTIONS(509),
    [sym_comment] = ACTIONS(331),
  },
  [142] = {
    [sym_identifier] = ACTIONS(483),
    [anon_sym_COMMA] = ACTIONS(485),
    [anon_sym_LPAREN] = ACTIONS(485),
    [anon_sym_RPAREN] = ACTIONS(485),
    [anon_sym__] = ACTIONS(483),
    [anon_sym_POUND_DQUOTE] = ACTIONS(483),
    [anon_sym_DQUOTE] = ACTIONS(483),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(485),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(485),
    [anon_sym_len] = ACTIONS(483),
    [anon_sym_close] = ACTIONS(483),
    [anon_sym_and] = ACTIONS(483),
    [anon_sym_or] = ACTIONS(483),
    [anon_sym_div] = ACTIONS(483),
    [anon_sym_mod] = ACTIONS(483),
    [anon_sym_quo] = ACTIONS(483),
    [anon_sym_rem] = ACTIONS(483),
    [sym_number_type] = ACTIONS(483),
    [anon_sym_float] = ACTIONS(483),
    [anon_sym_float32] = ACTIONS(483),
    [anon_sym_float64] = ACTIONS(483),
    [anon_sym_uint] = ACTIONS(483),
    [anon_sym_uint8] = ACTIONS(483),
    [anon_sym_uint16] = ACTIONS(483),
    [anon_sym_uint32] = ACTIONS(483),
    [anon_sym_uint64] = ACTIONS(483),
    [anon_sym_uint128] = ACTIONS(483),
    [anon_sym_int] = ACTIONS(483),
    [anon_sym_int8] = ACTIONS(483),
    [anon_sym_int16] = ACTIONS(483),
    [anon_sym_int32] = ACTIONS(483),
    [anon_sym_int64] = ACTIONS(483),
    [anon_sym_int128] = ACTIONS(483),
    [sym_string_type] = ACTIONS(483),
    [sym_bool_type] = ACTIONS(483),
    [sym_bottom_lit] = ACTIONS(485),
    [sym_null_lit] = ACTIONS(483),
    [sym_bool_lit] = ACTIONS(483),
    [sym_int_lit] = ACTIONS(483),
    [sym_float_lit] = ACTIONS(483),
    [anon_sym_LBRACK] = ACTIONS(485),
    [anon_sym_RBRACK] = ACTIONS(485),
    [anon_sym_LBRACE] = ACTIONS(485),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(485),
    [anon_sym_for] = ACTIONS(483),
    [anon_sym_if] = ACTIONS(483),
    [anon_sym_let] = ACTIONS(483),
    [anon_sym_PIPE] = ACTIONS(483),
    [anon_sym_AMP] = ACTIONS(483),
    [anon_sym_PIPE_PIPE] = ACTIONS(485),
    [anon_sym_AMP_AMP] = ACTIONS(485),
    [anon_sym_EQ_EQ] = ACTIONS(485),
    [anon_sym_BANG_EQ] = ACTIONS(485),
    [anon_sym_LT] = ACTIONS(483),
    [anon_sym_LT_EQ] = ACTIONS(485),
    [anon_sym_GT] = ACTIONS(483),
    [anon_sym_GT_EQ] = ACTIONS(485),
    [anon_sym_EQ_TILDE] = ACTIONS(485),
    [anon_sym_BANG_TILDE] = ACTIONS(485),
    [anon_sym_PLUS] = ACTIONS(485),
    [anon_sym_DASH] = ACTIONS(485),
    [anon_sym_STAR] = ACTIONS(485),
    [anon_sym_SLASH] = ACTIONS(483),
    [anon_sym_BANG] = ACTIONS(483),
    [sym_comment] = ACTIONS(3),
  },
  [143] = {
    [sym_identifier] = ACTIONS(483),
    [anon_sym_LF] = ACTIONS(485),
    [anon_sym_COMMA] = ACTIONS(483),
    [anon_sym_LPAREN] = ACTIONS(483),
    [anon_sym__] = ACTIONS(483),
    [anon_sym_POUND_DQUOTE] = ACTIONS(483),
    [anon_sym_DQUOTE] = ACTIONS(483),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(483),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(483),
    [anon_sym_len] = ACTIONS(483),
    [anon_sym_close] = ACTIONS(483),
    [anon_sym_and] = ACTIONS(483),
    [anon_sym_or] = ACTIONS(483),
    [anon_sym_div] = ACTIONS(483),
    [anon_sym_mod] = ACTIONS(483),
    [anon_sym_quo] = ACTIONS(483),
    [anon_sym_rem] = ACTIONS(483),
    [sym_number_type] = ACTIONS(483),
    [anon_sym_float] = ACTIONS(483),
    [anon_sym_float32] = ACTIONS(483),
    [anon_sym_float64] = ACTIONS(483),
    [anon_sym_uint] = ACTIONS(483),
    [anon_sym_uint8] = ACTIONS(483),
    [anon_sym_uint16] = ACTIONS(483),
    [anon_sym_uint32] = ACTIONS(483),
    [anon_sym_uint64] = ACTIONS(483),
    [anon_sym_uint128] = ACTIONS(483),
    [anon_sym_int] = ACTIONS(483),
    [anon_sym_int8] = ACTIONS(483),
    [anon_sym_int16] = ACTIONS(483),
    [anon_sym_int32] = ACTIONS(483),
    [anon_sym_int64] = ACTIONS(483),
    [anon_sym_int128] = ACTIONS(483),
    [sym_string_type] = ACTIONS(483),
    [sym_bool_type] = ACTIONS(483),
    [sym_bottom_lit] = ACTIONS(483),
    [sym_null_lit] = ACTIONS(483),
    [sym_bool_lit] = ACTIONS(483),
    [sym_int_lit] = ACTIONS(483),
    [sym_float_lit] = ACTIONS(483),
    [anon_sym_LBRACK] = ACTIONS(483),
    [anon_sym_LBRACE] = ACTIONS(483),
    [anon_sym_RBRACE] = ACTIONS(483),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(483),
    [anon_sym_for] = ACTIONS(483),
    [anon_sym_if] = ACTIONS(483),
    [anon_sym_let] = ACTIONS(483),
    [anon_sym_PIPE] = ACTIONS(483),
    [anon_sym_AMP] = ACTIONS(483),
    [anon_sym_PIPE_PIPE] = ACTIONS(483),
    [anon_sym_AMP_AMP] = ACTIONS(503),
    [anon_sym_EQ_EQ] = ACTIONS(487),
    [anon_sym_BANG_EQ] = ACTIONS(487),
    [anon_sym_LT] = ACTIONS(487),
    [anon_sym_LT_EQ] = ACTIONS(487),
    [anon_sym_GT] = ACTIONS(487),
    [anon_sym_GT_EQ] = ACTIONS(487),
    [anon_sym_EQ_TILDE] = ACTIONS(487),
    [anon_sym_BANG_TILDE] = ACTIONS(487),
    [anon_sym_PLUS] = ACTIONS(489),
    [anon_sym_DASH] = ACTIONS(489),
    [anon_sym_STAR] = ACTIONS(491),
    [anon_sym_SLASH] = ACTIONS(491),
    [anon_sym_BANG] = ACTIONS(483),
    [sym_comment] = ACTIONS(331),
  },
  [144] = {
    [sym_identifier] = ACTIONS(483),
    [anon_sym_LF] = ACTIONS(485),
    [anon_sym_COMMA] = ACTIONS(483),
    [anon_sym_LPAREN] = ACTIONS(483),
    [anon_sym__] = ACTIONS(483),
    [anon_sym_POUND_DQUOTE] = ACTIONS(483),
    [anon_sym_DQUOTE] = ACTIONS(483),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(483),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(483),
    [anon_sym_len] = ACTIONS(483),
    [anon_sym_close] = ACTIONS(483),
    [anon_sym_and] = ACTIONS(483),
    [anon_sym_or] = ACTIONS(483),
    [anon_sym_div] = ACTIONS(483),
    [anon_sym_mod] = ACTIONS(483),
    [anon_sym_quo] = ACTIONS(483),
    [anon_sym_rem] = ACTIONS(483),
    [sym_number_type] = ACTIONS(483),
    [anon_sym_float] = ACTIONS(483),
    [anon_sym_float32] = ACTIONS(483),
    [anon_sym_float64] = ACTIONS(483),
    [anon_sym_uint] = ACTIONS(483),
    [anon_sym_uint8] = ACTIONS(483),
    [anon_sym_uint16] = ACTIONS(483),
    [anon_sym_uint32] = ACTIONS(483),
    [anon_sym_uint64] = ACTIONS(483),
    [anon_sym_uint128] = ACTIONS(483),
    [anon_sym_int] = ACTIONS(483),
    [anon_sym_int8] = ACTIONS(483),
    [anon_sym_int16] = ACTIONS(483),
    [anon_sym_int32] = ACTIONS(483),
    [anon_sym_int64] = ACTIONS(483),
    [anon_sym_int128] = ACTIONS(483),
    [sym_string_type] = ACTIONS(483),
    [sym_bool_type] = ACTIONS(483),
    [sym_bottom_lit] = ACTIONS(483),
    [sym_null_lit] = ACTIONS(483),
    [sym_bool_lit] = ACTIONS(483),
    [sym_int_lit] = ACTIONS(483),
    [sym_float_lit] = ACTIONS(483),
    [anon_sym_LBRACK] = ACTIONS(483),
    [anon_sym_LBRACE] = ACTIONS(483),
    [anon_sym_RBRACE] = ACTIONS(483),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(483),
    [anon_sym_for] = ACTIONS(483),
    [anon_sym_if] = ACTIONS(483),
    [anon_sym_let] = ACTIONS(483),
    [anon_sym_PIPE] = ACTIONS(483),
    [anon_sym_AMP] = ACTIONS(499),
    [anon_sym_PIPE_PIPE] = ACTIONS(501),
    [anon_sym_AMP_AMP] = ACTIONS(503),
    [anon_sym_EQ_EQ] = ACTIONS(487),
    [anon_sym_BANG_EQ] = ACTIONS(487),
    [anon_sym_LT] = ACTIONS(487),
    [anon_sym_LT_EQ] = ACTIONS(487),
    [anon_sym_GT] = ACTIONS(487),
    [anon_sym_GT_EQ] = ACTIONS(487),
    [anon_sym_EQ_TILDE] = ACTIONS(487),
    [anon_sym_BANG_TILDE] = ACTIONS(487),
    [anon_sym_PLUS] = ACTIONS(489),
    [anon_sym_DASH] = ACTIONS(489),
    [anon_sym_STAR] = ACTIONS(491),
    [anon_sym_SLASH] = ACTIONS(491),
    [anon_sym_BANG] = ACTIONS(483),
    [sym_comment] = ACTIONS(331),
  },
  [145] = {
    [sym_identifier] = ACTIONS(513),
    [anon_sym_LF] = ACTIONS(515),
    [anon_sym_COMMA] = ACTIONS(513),
    [anon_sym_LPAREN] = ACTIONS(513),
    [anon_sym__] = ACTIONS(513),
    [anon_sym_POUND_DQUOTE] = ACTIONS(513),
    [anon_sym_DQUOTE] = ACTIONS(513),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(513),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(513),
    [anon_sym_len] = ACTIONS(513),
    [anon_sym_close] = ACTIONS(513),
    [anon_sym_and] = ACTIONS(513),
    [anon_sym_or] = ACTIONS(513),
    [anon_sym_div] = ACTIONS(513),
    [anon_sym_mod] = ACTIONS(513),
    [anon_sym_quo] = ACTIONS(513),
    [anon_sym_rem] = ACTIONS(513),
    [sym_number_type] = ACTIONS(513),
    [anon_sym_float] = ACTIONS(513),
    [anon_sym_float32] = ACTIONS(513),
    [anon_sym_float64] = ACTIONS(513),
    [anon_sym_uint] = ACTIONS(513),
    [anon_sym_uint8] = ACTIONS(513),
    [anon_sym_uint16] = ACTIONS(513),
    [anon_sym_uint32] = ACTIONS(513),
    [anon_sym_uint64] = ACTIONS(513),
    [anon_sym_uint128] = ACTIONS(513),
    [anon_sym_int] = ACTIONS(513),
    [anon_sym_int8] = ACTIONS(513),
    [anon_sym_int16] = ACTIONS(513),
    [anon_sym_int32] = ACTIONS(513),
    [anon_sym_int64] = ACTIONS(513),
    [anon_sym_int128] = ACTIONS(513),
    [sym_string_type] = ACTIONS(513),
    [sym_bool_type] = ACTIONS(513),
    [sym_bottom_lit] = ACTIONS(513),
    [sym_null_lit] = ACTIONS(513),
    [sym_bool_lit] = ACTIONS(513),
    [sym_int_lit] = ACTIONS(513),
    [sym_float_lit] = ACTIONS(513),
    [anon_sym_LBRACK] = ACTIONS(513),
    [anon_sym_LBRACE] = ACTIONS(513),
    [anon_sym_RBRACE] = ACTIONS(513),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(513),
    [anon_sym_for] = ACTIONS(513),
    [anon_sym_if] = ACTIONS(513),
    [anon_sym_let] = ACTIONS(513),
    [anon_sym_PIPE] = ACTIONS(497),
    [anon_sym_AMP] = ACTIONS(499),
    [anon_sym_PIPE_PIPE] = ACTIONS(501),
    [anon_sym_AMP_AMP] = ACTIONS(503),
    [anon_sym_EQ_EQ] = ACTIONS(487),
    [anon_sym_BANG_EQ] = ACTIONS(487),
    [anon_sym_LT] = ACTIONS(487),
    [anon_sym_LT_EQ] = ACTIONS(487),
    [anon_sym_GT] = ACTIONS(487),
    [anon_sym_GT_EQ] = ACTIONS(487),
    [anon_sym_EQ_TILDE] = ACTIONS(487),
    [anon_sym_BANG_TILDE] = ACTIONS(487),
    [anon_sym_PLUS] = ACTIONS(489),
    [anon_sym_DASH] = ACTIONS(489),
    [anon_sym_STAR] = ACTIONS(491),
    [anon_sym_SLASH] = ACTIONS(491),
    [anon_sym_BANG] = ACTIONS(513),
    [sym_comment] = ACTIONS(331),
  },
  [146] = {
    [sym_identifier] = ACTIONS(517),
    [anon_sym_LF] = ACTIONS(519),
    [anon_sym_COMMA] = ACTIONS(517),
    [anon_sym_LPAREN] = ACTIONS(517),
    [anon_sym__] = ACTIONS(517),
    [anon_sym_POUND_DQUOTE] = ACTIONS(517),
    [anon_sym_DQUOTE] = ACTIONS(517),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(517),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(517),
    [anon_sym_len] = ACTIONS(517),
    [anon_sym_close] = ACTIONS(517),
    [anon_sym_and] = ACTIONS(517),
    [anon_sym_or] = ACTIONS(517),
    [anon_sym_div] = ACTIONS(517),
    [anon_sym_mod] = ACTIONS(517),
    [anon_sym_quo] = ACTIONS(517),
    [anon_sym_rem] = ACTIONS(517),
    [sym_number_type] = ACTIONS(517),
    [anon_sym_float] = ACTIONS(517),
    [anon_sym_float32] = ACTIONS(517),
    [anon_sym_float64] = ACTIONS(517),
    [anon_sym_uint] = ACTIONS(517),
    [anon_sym_uint8] = ACTIONS(517),
    [anon_sym_uint16] = ACTIONS(517),
    [anon_sym_uint32] = ACTIONS(517),
    [anon_sym_uint64] = ACTIONS(517),
    [anon_sym_uint128] = ACTIONS(517),
    [anon_sym_int] = ACTIONS(517),
    [anon_sym_int8] = ACTIONS(517),
    [anon_sym_int16] = ACTIONS(517),
    [anon_sym_int32] = ACTIONS(517),
    [anon_sym_int64] = ACTIONS(517),
    [anon_sym_int128] = ACTIONS(517),
    [sym_string_type] = ACTIONS(517),
    [sym_bool_type] = ACTIONS(517),
    [sym_bottom_lit] = ACTIONS(517),
    [sym_null_lit] = ACTIONS(517),
    [sym_bool_lit] = ACTIONS(517),
    [sym_int_lit] = ACTIONS(517),
    [sym_float_lit] = ACTIONS(517),
    [anon_sym_LBRACK] = ACTIONS(517),
    [anon_sym_LBRACE] = ACTIONS(517),
    [anon_sym_RBRACE] = ACTIONS(517),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(517),
    [anon_sym_for] = ACTIONS(517),
    [anon_sym_if] = ACTIONS(517),
    [anon_sym_let] = ACTIONS(517),
    [anon_sym_PIPE] = ACTIONS(497),
    [anon_sym_AMP] = ACTIONS(499),
    [anon_sym_PIPE_PIPE] = ACTIONS(501),
    [anon_sym_AMP_AMP] = ACTIONS(503),
    [anon_sym_EQ_EQ] = ACTIONS(487),
    [anon_sym_BANG_EQ] = ACTIONS(487),
    [anon_sym_LT] = ACTIONS(487),
    [anon_sym_LT_EQ] = ACTIONS(487),
    [anon_sym_GT] = ACTIONS(487),
    [anon_sym_GT_EQ] = ACTIONS(487),
    [anon_sym_EQ_TILDE] = ACTIONS(487),
    [anon_sym_BANG_TILDE] = ACTIONS(487),
    [anon_sym_PLUS] = ACTIONS(489),
    [anon_sym_DASH] = ACTIONS(489),
    [anon_sym_STAR] = ACTIONS(491),
    [anon_sym_SLASH] = ACTIONS(491),
    [anon_sym_BANG] = ACTIONS(517),
    [sym_comment] = ACTIONS(331),
  },
  [147] = {
    [sym_identifier] = ACTIONS(505),
    [anon_sym_COMMA] = ACTIONS(507),
    [anon_sym_LPAREN] = ACTIONS(507),
    [anon_sym_RPAREN] = ACTIONS(507),
    [anon_sym__] = ACTIONS(505),
    [anon_sym_POUND_DQUOTE] = ACTIONS(505),
    [anon_sym_DQUOTE] = ACTIONS(505),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(507),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(507),
    [anon_sym_len] = ACTIONS(505),
    [anon_sym_close] = ACTIONS(505),
    [anon_sym_and] = ACTIONS(505),
    [anon_sym_or] = ACTIONS(505),
    [anon_sym_div] = ACTIONS(505),
    [anon_sym_mod] = ACTIONS(505),
    [anon_sym_quo] = ACTIONS(505),
    [anon_sym_rem] = ACTIONS(505),
    [sym_number_type] = ACTIONS(505),
    [anon_sym_float] = ACTIONS(505),
    [anon_sym_float32] = ACTIONS(505),
    [anon_sym_float64] = ACTIONS(505),
    [anon_sym_uint] = ACTIONS(505),
    [anon_sym_uint8] = ACTIONS(505),
    [anon_sym_uint16] = ACTIONS(505),
    [anon_sym_uint32] = ACTIONS(505),
    [anon_sym_uint64] = ACTIONS(505),
    [anon_sym_uint128] = ACTIONS(505),
    [anon_sym_int] = ACTIONS(505),
    [anon_sym_int8] = ACTIONS(505),
    [anon_sym_int16] = ACTIONS(505),
    [anon_sym_int32] = ACTIONS(505),
    [anon_sym_int64] = ACTIONS(505),
    [anon_sym_int128] = ACTIONS(505),
    [sym_string_type] = ACTIONS(505),
    [sym_bool_type] = ACTIONS(505),
    [sym_bottom_lit] = ACTIONS(507),
    [sym_null_lit] = ACTIONS(505),
    [sym_bool_lit] = ACTIONS(505),
    [sym_int_lit] = ACTIONS(505),
    [sym_float_lit] = ACTIONS(505),
    [anon_sym_LBRACK] = ACTIONS(507),
    [anon_sym_RBRACK] = ACTIONS(507),
    [anon_sym_LBRACE] = ACTIONS(507),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(507),
    [anon_sym_for] = ACTIONS(505),
    [anon_sym_if] = ACTIONS(505),
    [anon_sym_let] = ACTIONS(505),
    [anon_sym_PIPE] = ACTIONS(505),
    [anon_sym_AMP] = ACTIONS(505),
    [anon_sym_PIPE_PIPE] = ACTIONS(507),
    [anon_sym_AMP_AMP] = ACTIONS(507),
    [anon_sym_EQ_EQ] = ACTIONS(507),
    [anon_sym_BANG_EQ] = ACTIONS(507),
    [anon_sym_LT] = ACTIONS(505),
    [anon_sym_LT_EQ] = ACTIONS(507),
    [anon_sym_GT] = ACTIONS(505),
    [anon_sym_GT_EQ] = ACTIONS(507),
    [anon_sym_EQ_TILDE] = ACTIONS(507),
    [anon_sym_BANG_TILDE] = ACTIONS(507),
    [anon_sym_PLUS] = ACTIONS(507),
    [anon_sym_DASH] = ACTIONS(507),
    [anon_sym_STAR] = ACTIONS(507),
    [anon_sym_SLASH] = ACTIONS(505),
    [anon_sym_BANG] = ACTIONS(505),
    [sym_comment] = ACTIONS(3),
  },
  [148] = {
    [sym_identifier] = ACTIONS(483),
    [anon_sym_LF] = ACTIONS(485),
    [anon_sym_COMMA] = ACTIONS(483),
    [anon_sym_LPAREN] = ACTIONS(483),
    [anon_sym__] = ACTIONS(483),
    [anon_sym_POUND_DQUOTE] = ACTIONS(483),
    [anon_sym_DQUOTE] = ACTIONS(483),
    [anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(483),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(483),
    [anon_sym_len] = ACTIONS(483),
    [anon_sym_close] = ACTIONS(483),
    [anon_sym_and] = ACTIONS(483),
    [anon_sym_or] = ACTIONS(483),
    [anon_sym_div] = ACTIONS(483),
    [anon_sym_mod] = ACTIONS(483),
    [anon_sym_quo] = ACTIONS(483),
    [anon_sym_rem] = ACTIONS(483),
    [sym_number_type] = ACTIONS(483),
    [anon_sym_float] = ACTIONS(483),
    [anon_sym_float32] = ACTIONS(483),
    [anon_sym_float64] = ACTIONS(483),
    [anon_sym_uint] = ACTIONS(483),
    [anon_sym_uint8] = ACTIONS(483),
    [anon_sym_uint16] = ACTIONS(483),
    [anon_sym_uint32] = ACTIONS(483),
    [anon_sym_uint64] = ACTIONS(483),
    [anon_sym_uint128] = ACTIONS(483),
    [anon_sym_int] = ACTIONS(483),
    [anon_sym_int8] = ACTIONS(483),
    [anon_sym_int16] = ACTIONS(483),
    [anon_sym_int32] = ACTIONS(483),
    [anon_sym_int64] = ACTIONS(483),
    [anon_sym_int128] = ACTIONS(483),
    [sym_string_type] = ACTIONS(483),
    [sym_bool_type] = ACTIONS(483),
    [sym_bottom_lit] = ACTIONS(483),
    [sym_null_lit] = ACTIONS(483),
    [sym_bool_lit] = ACTIONS(483),
    [sym_int_lit] = ACTIONS(483),
    [sym_float_lit] = ACTIONS(483),
    [anon_sym_LBRACK] = ACTIONS(483),
    [anon_sym_LBRACE] = ACTIONS(483),
    [anon_sym_RBRACE] = ACTIONS(483),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(483),
    [anon_sym_for] = ACTIONS(483),
    [anon_sym_if] = ACTIONS(483),
    [anon_sym_let] = ACTIONS(483),
    [anon_sym_PIPE] = ACTIONS(483),
    [anon_sym_AMP] = ACTIONS(483),
    [anon_sym_PIPE_PIPE] = ACTIONS(483),
    [anon_sym_AMP_AMP] = ACTIONS(483),
    [anon_sym_EQ_EQ] = ACTIONS(483),
    [anon_sym_BANG_EQ] = ACTIONS(483),
    [anon_sym_LT] = ACTIONS(483),
    [anon_sym_LT_EQ] = ACTIONS(483),
    [anon_sym_GT] = ACTIONS(483),
    [anon_sym_GT_EQ] = ACTIONS(483),
    [anon_sym_EQ_TILDE] = ACTIONS(483),
    [anon_sym_BANG_TILDE] = ACTIONS(483),
    [anon_sym_PLUS] = ACTIONS(489),
    [anon_sym_DASH] = ACTIONS(489),
    [anon_sym_STAR] = ACTIONS(491),
    [anon_sym_SLASH] = ACTIONS(491),
    [anon_sym_BANG] = ACTIONS(483),
    [sym_comment] = ACTIONS(331),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_AMP,
    ACTIONS(523), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(525), 1,
      anon_sym_AMP_AMP,
    ACTIONS(533), 1,
      anon_sym_STAR,
    ACTIONS(535), 1,
      anon_sym_SLASH,
    ACTIONS(529), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(531), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(527), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(485), 9,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_bottom_lit,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(483), 38,
      anon_sym__,
      sym_identifier,
      anon_sym_POUND_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_len,
      anon_sym_close,
      anon_sym_and,
      anon_sym_or,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_quo,
      anon_sym_rem,
      sym_number_type,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint128,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int128,
      sym_string_type,
      sym_bool_type,
      sym_null_lit,
      sym_bool_lit,
      sym_int_lit,
      sym_float_lit,
      anon_sym_for,
      anon_sym_if,
      anon_sym_PIPE,
      anon_sym_BANG,
  [86] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_AMP_AMP,
    ACTIONS(533), 1,
      anon_sym_STAR,
    ACTIONS(535), 1,
      anon_sym_SLASH,
    ACTIONS(529), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(531), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(527), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(485), 10,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_bottom_lit,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_PIPE,
    ACTIONS(483), 39,
      anon_sym__,
      sym_identifier,
      anon_sym_POUND_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_len,
      anon_sym_close,
      anon_sym_and,
      anon_sym_or,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_quo,
      anon_sym_rem,
      sym_number_type,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint128,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int128,
      sym_string_type,
      sym_bool_type,
      sym_null_lit,
      sym_bool_lit,
      sym_int_lit,
      sym_float_lit,
      anon_sym_for,
      anon_sym_if,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_BANG,
  [168] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_STAR,
    ACTIONS(535), 1,
      anon_sym_SLASH,
    ACTIONS(531), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(485), 17,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_bottom_lit,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(483), 41,
      anon_sym__,
      sym_identifier,
      anon_sym_POUND_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_len,
      anon_sym_close,
      anon_sym_and,
      anon_sym_or,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_quo,
      anon_sym_rem,
      sym_number_type,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint128,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int128,
      sym_string_type,
      sym_bool_type,
      sym_null_lit,
      sym_bool_lit,
      sym_int_lit,
      sym_float_lit,
      anon_sym_for,
      anon_sym_if,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
  [244] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_AMP,
    ACTIONS(523), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(525), 1,
      anon_sym_AMP_AMP,
    ACTIONS(533), 1,
      anon_sym_STAR,
    ACTIONS(535), 1,
      anon_sym_SLASH,
    ACTIONS(537), 1,
      anon_sym_PIPE,
    ACTIONS(529), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(531), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(527), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(495), 9,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_bottom_lit,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(493), 37,
      anon_sym__,
      sym_identifier,
      anon_sym_POUND_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_len,
      anon_sym_close,
      anon_sym_and,
      anon_sym_or,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_quo,
      anon_sym_rem,
      sym_number_type,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint128,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int128,
      sym_string_type,
      sym_bool_type,
      sym_null_lit,
      sym_bool_lit,
      sym_int_lit,
      sym_float_lit,
      anon_sym_for,
      anon_sym_if,
      anon_sym_BANG,
  [332] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_STAR,
    ACTIONS(535), 1,
      anon_sym_SLASH,
    ACTIONS(529), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(531), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(527), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(485), 11,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_bottom_lit,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(483), 39,
      anon_sym__,
      sym_identifier,
      anon_sym_POUND_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_len,
      anon_sym_close,
      anon_sym_and,
      anon_sym_or,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_quo,
      anon_sym_rem,
      sym_number_type,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint128,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int128,
      sym_string_type,
      sym_bool_type,
      sym_null_lit,
      sym_bool_lit,
      sym_int_lit,
      sym_float_lit,
      anon_sym_for,
      anon_sym_if,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_BANG,
  [412] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(525), 1,
      anon_sym_AMP_AMP,
    ACTIONS(533), 1,
      anon_sym_STAR,
    ACTIONS(535), 1,
      anon_sym_SLASH,
    ACTIONS(529), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(531), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(527), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(485), 9,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_bottom_lit,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(483), 39,
      anon_sym__,
      sym_identifier,
      anon_sym_POUND_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_len,
      anon_sym_close,
      anon_sym_and,
      anon_sym_or,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_quo,
      anon_sym_rem,
      sym_number_type,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint128,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int128,
      sym_string_type,
      sym_bool_type,
      sym_null_lit,
      sym_bool_lit,
      sym_int_lit,
      sym_float_lit,
      anon_sym_for,
      anon_sym_if,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_BANG,
  [496] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_STAR,
    ACTIONS(535), 1,
      anon_sym_SLASH,
    ACTIONS(485), 19,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_bottom_lit,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(483), 41,
      anon_sym__,
      sym_identifier,
      anon_sym_POUND_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_len,
      anon_sym_close,
      anon_sym_and,
      anon_sym_or,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_quo,
      anon_sym_rem,
      sym_number_type,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint128,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int128,
      sym_string_type,
      sym_bool_type,
      sym_null_lit,
      sym_bool_lit,
      sym_int_lit,
      sym_float_lit,
      anon_sym_for,
      anon_sym_if,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
  [570] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_AMP,
    ACTIONS(523), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(525), 1,
      anon_sym_AMP_AMP,
    ACTIONS(533), 1,
      anon_sym_STAR,
    ACTIONS(535), 1,
      anon_sym_SLASH,
    ACTIONS(537), 1,
      anon_sym_PIPE,
    ACTIONS(529), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(531), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(527), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(519), 9,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_bottom_lit,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(517), 37,
      anon_sym__,
      sym_identifier,
      anon_sym_POUND_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_len,
      anon_sym_close,
      anon_sym_and,
      anon_sym_or,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_quo,
      anon_sym_rem,
      sym_number_type,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint128,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int128,
      sym_string_type,
      sym_bool_type,
      sym_null_lit,
      sym_bool_lit,
      sym_int_lit,
      sym_float_lit,
      anon_sym_for,
      anon_sym_if,
      anon_sym_BANG,
  [658] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_AMP,
    ACTIONS(523), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(525), 1,
      anon_sym_AMP_AMP,
    ACTIONS(533), 1,
      anon_sym_STAR,
    ACTIONS(535), 1,
      anon_sym_SLASH,
    ACTIONS(537), 1,
      anon_sym_PIPE,
    ACTIONS(529), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(531), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(527), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(515), 8,
      anon_sym_LPAREN,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_bottom_lit,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(513), 37,
      anon_sym__,
      sym_identifier,
      anon_sym_POUND_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_len,
      anon_sym_close,
      anon_sym_and,
      anon_sym_or,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_quo,
      anon_sym_rem,
      sym_number_type,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint128,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int128,
      sym_string_type,
      sym_bool_type,
      sym_null_lit,
      sym_bool_lit,
      sym_int_lit,
      sym_float_lit,
      anon_sym_for,
      anon_sym_if,
      anon_sym_BANG,
  [745] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 16,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_bottom_lit,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(433), 42,
      anon_sym_package,
      anon_sym_import,
      anon_sym__,
      sym_identifier,
      anon_sym_POUND_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_len,
      anon_sym_close,
      anon_sym_and,
      anon_sym_or,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_quo,
      anon_sym_rem,
      sym_number_type,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint128,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int128,
      sym_string_type,
      sym_bool_type,
      sym_null_lit,
      sym_bool_lit,
      sym_int_lit,
      sym_float_lit,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
  [811] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 16,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_bottom_lit,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(541), 42,
      anon_sym_package,
      anon_sym_import,
      anon_sym__,
      sym_identifier,
      anon_sym_POUND_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_len,
      anon_sym_close,
      anon_sym_and,
      anon_sym_or,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_quo,
      anon_sym_rem,
      sym_number_type,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint128,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int128,
      sym_string_type,
      sym_bool_type,
      sym_null_lit,
      sym_bool_lit,
      sym_int_lit,
      sym_float_lit,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
  [877] = 3,
    ACTIONS(331), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_LF,
    ACTIONS(401), 57,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym__,
      sym_identifier,
      anon_sym_POUND_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_len,
      anon_sym_close,
      anon_sym_and,
      anon_sym_or,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_quo,
      anon_sym_rem,
      sym_number_type,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint128,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int128,
      sym_string_type,
      sym_bool_type,
      sym_bottom_lit,
      sym_null_lit,
      sym_bool_lit,
      sym_int_lit,
      sym_float_lit,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
  [943] = 3,
    ACTIONS(331), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_LF,
    ACTIONS(543), 57,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym__,
      sym_identifier,
      anon_sym_POUND_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_len,
      anon_sym_close,
      anon_sym_and,
      anon_sym_or,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_quo,
      anon_sym_rem,
      sym_number_type,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint128,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int128,
      sym_string_type,
      sym_bool_type,
      sym_bottom_lit,
      sym_null_lit,
      sym_bool_lit,
      sym_int_lit,
      sym_float_lit,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
  [1009] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 16,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_bottom_lit,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(549), 42,
      anon_sym_package,
      anon_sym_import,
      anon_sym__,
      sym_identifier,
      anon_sym_POUND_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_len,
      anon_sym_close,
      anon_sym_and,
      anon_sym_or,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_quo,
      anon_sym_rem,
      sym_number_type,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint128,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int128,
      sym_string_type,
      sym_bool_type,
      sym_null_lit,
      sym_bool_lit,
      sym_int_lit,
      sym_float_lit,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
  [1075] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 16,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_bottom_lit,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(477), 42,
      anon_sym_package,
      anon_sym_import,
      anon_sym__,
      sym_identifier,
      anon_sym_POUND_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_len,
      anon_sym_close,
      anon_sym_and,
      anon_sym_or,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_quo,
      anon_sym_rem,
      sym_number_type,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint128,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int128,
      sym_string_type,
      sym_bool_type,
      sym_null_lit,
      sym_bool_lit,
      sym_int_lit,
      sym_float_lit,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
  [1141] = 3,
    ACTIONS(331), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_LF,
    ACTIONS(551), 57,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym__,
      sym_identifier,
      anon_sym_POUND_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_len,
      anon_sym_close,
      anon_sym_and,
      anon_sym_or,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_quo,
      anon_sym_rem,
      sym_number_type,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint128,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int128,
      sym_string_type,
      sym_bool_type,
      sym_bottom_lit,
      sym_null_lit,
      sym_bool_lit,
      sym_int_lit,
      sym_float_lit,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
  [1207] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 16,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_bottom_lit,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(381), 42,
      anon_sym_package,
      anon_sym_import,
      anon_sym__,
      sym_identifier,
      anon_sym_POUND_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_len,
      anon_sym_close,
      anon_sym_and,
      anon_sym_or,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_quo,
      anon_sym_rem,
      sym_number_type,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint128,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int128,
      sym_string_type,
      sym_bool_type,
      sym_null_lit,
      sym_bool_lit,
      sym_int_lit,
      sym_float_lit,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
  [1273] = 4,
    ACTIONS(331), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_LF,
    ACTIONS(559), 1,
      anon_sym_COMMA,
    ACTIONS(555), 56,
      anon_sym_LPAREN,
      anon_sym__,
      sym_identifier,
      anon_sym_POUND_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_len,
      anon_sym_close,
      anon_sym_and,
      anon_sym_or,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_quo,
      anon_sym_rem,
      sym_number_type,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint128,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int128,
      sym_string_type,
      sym_bool_type,
      sym_bottom_lit,
      sym_null_lit,
      sym_bool_lit,
      sym_int_lit,
      sym_float_lit,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
  [1341] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 16,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_bottom_lit,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(445), 42,
      anon_sym_package,
      anon_sym_import,
      anon_sym__,
      sym_identifier,
      anon_sym_POUND_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_len,
      anon_sym_close,
      anon_sym_and,
      anon_sym_or,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_quo,
      anon_sym_rem,
      sym_number_type,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint128,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int128,
      sym_string_type,
      sym_bool_type,
      sym_null_lit,
      sym_bool_lit,
      sym_int_lit,
      sym_float_lit,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
  [1407] = 3,
    ACTIONS(331), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_LF,
    ACTIONS(561), 57,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym__,
      sym_identifier,
      anon_sym_POUND_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_len,
      anon_sym_close,
      anon_sym_and,
      anon_sym_or,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_quo,
      anon_sym_rem,
      sym_number_type,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint128,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int128,
      sym_string_type,
      sym_bool_type,
      sym_bottom_lit,
      sym_null_lit,
      sym_bool_lit,
      sym_int_lit,
      sym_float_lit,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
  [1473] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 16,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_bottom_lit,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(389), 42,
      anon_sym_package,
      anon_sym_import,
      anon_sym__,
      sym_identifier,
      anon_sym_POUND_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_len,
      anon_sym_close,
      anon_sym_and,
      anon_sym_or,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_quo,
      anon_sym_rem,
      sym_number_type,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint128,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int128,
      sym_string_type,
      sym_bool_type,
      sym_null_lit,
      sym_bool_lit,
      sym_int_lit,
      sym_float_lit,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
  [1539] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 16,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_bottom_lit,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(567), 42,
      anon_sym_package,
      anon_sym_import,
      anon_sym__,
      sym_identifier,
      anon_sym_POUND_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_len,
      anon_sym_close,
      anon_sym_and,
      anon_sym_or,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_quo,
      anon_sym_rem,
      sym_number_type,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint128,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int128,
      sym_string_type,
      sym_bool_type,
      sym_null_lit,
      sym_bool_lit,
      sym_int_lit,
      sym_float_lit,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
  [1605] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 16,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_bottom_lit,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(377), 42,
      anon_sym_package,
      anon_sym_import,
      anon_sym__,
      sym_identifier,
      anon_sym_POUND_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_len,
      anon_sym_close,
      anon_sym_and,
      anon_sym_or,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_quo,
      anon_sym_rem,
      sym_number_type,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint128,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int128,
      sym_string_type,
      sym_bool_type,
      sym_null_lit,
      sym_bool_lit,
      sym_int_lit,
      sym_float_lit,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
  [1671] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 16,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_bottom_lit,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(437), 42,
      anon_sym_package,
      anon_sym_import,
      anon_sym__,
      sym_identifier,
      anon_sym_POUND_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_len,
      anon_sym_close,
      anon_sym_and,
      anon_sym_or,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_quo,
      anon_sym_rem,
      sym_number_type,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint128,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int128,
      sym_string_type,
      sym_bool_type,
      sym_null_lit,
      sym_bool_lit,
      sym_int_lit,
      sym_float_lit,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
  [1737] = 3,
    ACTIONS(331), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_LF,
    ACTIONS(425), 57,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym__,
      sym_identifier,
      anon_sym_POUND_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_len,
      anon_sym_close,
      anon_sym_and,
      anon_sym_or,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_quo,
      anon_sym_rem,
      sym_number_type,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint128,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int128,
      sym_string_type,
      sym_bool_type,
      sym_bottom_lit,
      sym_null_lit,
      sym_bool_lit,
      sym_int_lit,
      sym_float_lit,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
  [1803] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 16,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_bottom_lit,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(571), 42,
      anon_sym_package,
      anon_sym_import,
      anon_sym__,
      sym_identifier,
      anon_sym_POUND_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_len,
      anon_sym_close,
      anon_sym_and,
      anon_sym_or,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_quo,
      anon_sym_rem,
      sym_number_type,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint128,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int128,
      sym_string_type,
      sym_bool_type,
      sym_null_lit,
      sym_bool_lit,
      sym_int_lit,
      sym_float_lit,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
  [1869] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 16,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_bottom_lit,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(441), 42,
      anon_sym_package,
      anon_sym_import,
      anon_sym__,
      sym_identifier,
      anon_sym_POUND_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_len,
      anon_sym_close,
      anon_sym_and,
      anon_sym_or,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_quo,
      anon_sym_rem,
      sym_number_type,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint128,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int128,
      sym_string_type,
      sym_bool_type,
      sym_null_lit,
      sym_bool_lit,
      sym_int_lit,
      sym_float_lit,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
  [1935] = 3,
    ACTIONS(331), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_LF,
    ACTIONS(573), 57,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym__,
      sym_identifier,
      anon_sym_POUND_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_len,
      anon_sym_close,
      anon_sym_and,
      anon_sym_or,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_quo,
      anon_sym_rem,
      sym_number_type,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint128,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int128,
      sym_string_type,
      sym_bool_type,
      sym_bottom_lit,
      sym_null_lit,
      sym_bool_lit,
      sym_int_lit,
      sym_float_lit,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
  [2001] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 16,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_bottom_lit,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(579), 42,
      anon_sym_package,
      anon_sym_import,
      anon_sym__,
      sym_identifier,
      anon_sym_POUND_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_len,
      anon_sym_close,
      anon_sym_and,
      anon_sym_or,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_quo,
      anon_sym_rem,
      sym_number_type,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint128,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int128,
      sym_string_type,
      sym_bool_type,
      sym_null_lit,
      sym_bool_lit,
      sym_int_lit,
      sym_float_lit,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
  [2067] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 16,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_bottom_lit,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(583), 42,
      anon_sym_package,
      anon_sym_import,
      anon_sym__,
      sym_identifier,
      anon_sym_POUND_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_len,
      anon_sym_close,
      anon_sym_and,
      anon_sym_or,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_quo,
      anon_sym_rem,
      sym_number_type,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint128,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int128,
      sym_string_type,
      sym_bool_type,
      sym_null_lit,
      sym_bool_lit,
      sym_int_lit,
      sym_float_lit,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
  [2133] = 3,
    ACTIONS(331), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_LF,
    ACTIONS(585), 57,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym__,
      sym_identifier,
      anon_sym_POUND_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_len,
      anon_sym_close,
      anon_sym_and,
      anon_sym_or,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_quo,
      anon_sym_rem,
      sym_number_type,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint128,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int128,
      sym_string_type,
      sym_bool_type,
      sym_bottom_lit,
      sym_null_lit,
      sym_bool_lit,
      sym_int_lit,
      sym_float_lit,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
  [2199] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 16,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_bottom_lit,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(591), 42,
      anon_sym_package,
      anon_sym_import,
      anon_sym__,
      sym_identifier,
      anon_sym_POUND_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_len,
      anon_sym_close,
      anon_sym_and,
      anon_sym_or,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_quo,
      anon_sym_rem,
      sym_number_type,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint128,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int128,
      sym_string_type,
      sym_bool_type,
      sym_null_lit,
      sym_bool_lit,
      sym_int_lit,
      sym_float_lit,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
  [2265] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 16,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_bottom_lit,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(595), 42,
      anon_sym_package,
      anon_sym_import,
      anon_sym__,
      sym_identifier,
      anon_sym_POUND_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_len,
      anon_sym_close,
      anon_sym_and,
      anon_sym_or,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_quo,
      anon_sym_rem,
      sym_number_type,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint128,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int128,
      sym_string_type,
      sym_bool_type,
      sym_null_lit,
      sym_bool_lit,
      sym_int_lit,
      sym_float_lit,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
  [2331] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 16,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_bottom_lit,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(595), 42,
      anon_sym_package,
      anon_sym_import,
      anon_sym__,
      sym_identifier,
      anon_sym_POUND_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_len,
      anon_sym_close,
      anon_sym_and,
      anon_sym_or,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_quo,
      anon_sym_rem,
      sym_number_type,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint128,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int128,
      sym_string_type,
      sym_bool_type,
      sym_null_lit,
      sym_bool_lit,
      sym_int_lit,
      sym_float_lit,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
  [2397] = 3,
    ACTIONS(331), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_LF,
    ACTIONS(597), 57,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym__,
      sym_identifier,
      anon_sym_POUND_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_len,
      anon_sym_close,
      anon_sym_and,
      anon_sym_or,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_quo,
      anon_sym_rem,
      sym_number_type,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint128,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int128,
      sym_string_type,
      sym_bool_type,
      sym_bottom_lit,
      sym_null_lit,
      sym_bool_lit,
      sym_int_lit,
      sym_float_lit,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
  [2463] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_COMMA,
    STATE(185), 1,
      aux_sym__list_elem_repeat1,
    ACTIONS(605), 16,
      anon_sym_LPAREN,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_bottom_lit,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(601), 39,
      anon_sym__,
      sym_identifier,
      anon_sym_POUND_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_len,
      anon_sym_close,
      anon_sym_and,
      anon_sym_or,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_quo,
      anon_sym_rem,
      sym_number_type,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint128,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int128,
      sym_string_type,
      sym_bool_type,
      sym_null_lit,
      sym_bool_lit,
      sym_int_lit,
      sym_float_lit,
      anon_sym_for,
      anon_sym_if,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
  [2532] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_COMMA,
    STATE(186), 1,
      aux_sym__list_elem_repeat1,
    ACTIONS(611), 16,
      anon_sym_LPAREN,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_bottom_lit,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(607), 39,
      anon_sym__,
      sym_identifier,
      anon_sym_POUND_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_len,
      anon_sym_close,
      anon_sym_and,
      anon_sym_or,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_quo,
      anon_sym_rem,
      sym_number_type,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint128,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int128,
      sym_string_type,
      sym_bool_type,
      sym_null_lit,
      sym_bool_lit,
      sym_int_lit,
      sym_float_lit,
      anon_sym_for,
      anon_sym_if,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
  [2601] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_COMMA,
    STATE(186), 1,
      aux_sym__list_elem_repeat1,
    ACTIONS(618), 16,
      anon_sym_LPAREN,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_bottom_lit,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(613), 39,
      anon_sym__,
      sym_identifier,
      anon_sym_POUND_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_len,
      anon_sym_close,
      anon_sym_and,
      anon_sym_or,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_quo,
      anon_sym_rem,
      sym_number_type,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint128,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int128,
      sym_string_type,
      sym_bool_type,
      sym_null_lit,
      sym_bool_lit,
      sym_int_lit,
      sym_float_lit,
      anon_sym_for,
      anon_sym_if,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
  [2670] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_RBRACK,
    ACTIONS(599), 16,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_bottom_lit,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(597), 39,
      anon_sym__,
      sym_identifier,
      anon_sym_POUND_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_len,
      anon_sym_close,
      anon_sym_and,
      anon_sym_or,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_quo,
      anon_sym_rem,
      sym_number_type,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint128,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int128,
      sym_string_type,
      sym_bool_type,
      sym_null_lit,
      sym_bool_lit,
      sym_int_lit,
      sym_float_lit,
      anon_sym_for,
      anon_sym_if,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
  [2736] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 17,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_bottom_lit,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(561), 39,
      anon_sym__,
      sym_identifier,
      anon_sym_POUND_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_len,
      anon_sym_close,
      anon_sym_and,
      anon_sym_or,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_quo,
      anon_sym_rem,
      sym_number_type,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint128,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int128,
      sym_string_type,
      sym_bool_type,
      sym_null_lit,
      sym_bool_lit,
      sym_int_lit,
      sym_float_lit,
      anon_sym_for,
      anon_sym_if,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
  [2800] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      sym_identifier,
    ACTIONS(629), 1,
      anon_sym_DQUOTE,
    ACTIONS(632), 1,
      anon_sym_LBRACK,
    STATE(189), 1,
      aux_sym_field_repeat1,
    STATE(306), 1,
      sym_label,
    STATE(307), 1,
      sym__label_expr,
    STATE(283), 2,
      sym_simple_string_lit,
      sym__label_name,
    ACTIONS(625), 13,
      anon_sym_LPAREN,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_bottom_lit,
      anon_sym_LBRACE,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(627), 35,
      anon_sym__,
      anon_sym_POUND_DQUOTE,
      anon_sym_len,
      anon_sym_close,
      anon_sym_and,
      anon_sym_or,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_quo,
      anon_sym_rem,
      sym_number_type,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint128,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int128,
      sym_string_type,
      sym_bool_type,
      sym_null_lit,
      sym_bool_lit,
      sym_int_lit,
      sym_float_lit,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
  [2878] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 17,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_bottom_lit,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(597), 39,
      anon_sym__,
      sym_identifier,
      anon_sym_POUND_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_len,
      anon_sym_close,
      anon_sym_and,
      anon_sym_or,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_quo,
      anon_sym_rem,
      sym_number_type,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint128,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int128,
      sym_string_type,
      sym_bool_type,
      sym_null_lit,
      sym_bool_lit,
      sym_int_lit,
      sym_float_lit,
      anon_sym_for,
      anon_sym_if,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
  [2942] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 16,
      anon_sym_LPAREN,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_bottom_lit,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(635), 40,
      anon_sym__,
      sym_identifier,
      anon_sym_POUND_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_len,
      anon_sym_close,
      anon_sym_and,
      anon_sym_or,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_quo,
      anon_sym_rem,
      sym_number_type,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint128,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int128,
      sym_string_type,
      sym_bool_type,
      sym_null_lit,
      sym_bool_lit,
      sym_int_lit,
      sym_float_lit,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
  [3006] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 16,
      anon_sym_LPAREN,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_bottom_lit,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(635), 40,
      anon_sym__,
      sym_identifier,
      anon_sym_POUND_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_len,
      anon_sym_close,
      anon_sym_and,
      anon_sym_or,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_quo,
      anon_sym_rem,
      sym_number_type,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint128,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int128,
      sym_string_type,
      sym_bool_type,
      sym_null_lit,
      sym_bool_lit,
      sym_int_lit,
      sym_float_lit,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
  [3070] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 17,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_bottom_lit,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(425), 39,
      anon_sym__,
      sym_identifier,
      anon_sym_POUND_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_len,
      anon_sym_close,
      anon_sym_and,
      anon_sym_or,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_quo,
      anon_sym_rem,
      sym_number_type,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint128,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int128,
      sym_string_type,
      sym_bool_type,
      sym_null_lit,
      sym_bool_lit,
      sym_int_lit,
      sym_float_lit,
      anon_sym_for,
      anon_sym_if,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
  [3134] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 17,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_bottom_lit,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(543), 39,
      anon_sym__,
      sym_identifier,
      anon_sym_POUND_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_len,
      anon_sym_close,
      anon_sym_and,
      anon_sym_or,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_quo,
      anon_sym_rem,
      sym_number_type,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint128,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int128,
      sym_string_type,
      sym_bool_type,
      sym_null_lit,
      sym_bool_lit,
      sym_int_lit,
      sym_float_lit,
      anon_sym_for,
      anon_sym_if,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
  [3198] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 17,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_bottom_lit,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(401), 39,
      anon_sym__,
      sym_identifier,
      anon_sym_POUND_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_len,
      anon_sym_close,
      anon_sym_and,
      anon_sym_or,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_quo,
      anon_sym_rem,
      sym_number_type,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint128,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int128,
      sym_string_type,
      sym_bool_type,
      sym_null_lit,
      sym_bool_lit,
      sym_int_lit,
      sym_float_lit,
      anon_sym_for,
      anon_sym_if,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
  [3262] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 17,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_bottom_lit,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(639), 39,
      anon_sym__,
      sym_identifier,
      anon_sym_POUND_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_len,
      anon_sym_close,
      anon_sym_and,
      anon_sym_or,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_quo,
      anon_sym_rem,
      sym_number_type,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint128,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int128,
      sym_string_type,
      sym_bool_type,
      sym_null_lit,
      sym_bool_lit,
      sym_int_lit,
      sym_float_lit,
      anon_sym_for,
      anon_sym_if,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
  [3326] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 16,
      anon_sym_LPAREN,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_bottom_lit,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(643), 39,
      anon_sym__,
      sym_identifier,
      anon_sym_POUND_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_len,
      anon_sym_close,
      anon_sym_and,
      anon_sym_or,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_quo,
      anon_sym_rem,
      sym_number_type,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint128,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int128,
      sym_string_type,
      sym_bool_type,
      sym_null_lit,
      sym_bool_lit,
      sym_int_lit,
      sym_float_lit,
      anon_sym_for,
      anon_sym_if,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
  [3389] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 16,
      anon_sym_LPAREN,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_bottom_lit,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(647), 39,
      anon_sym__,
      sym_identifier,
      anon_sym_POUND_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_len,
      anon_sym_close,
      anon_sym_and,
      anon_sym_or,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_quo,
      anon_sym_rem,
      sym_number_type,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint128,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int128,
      sym_string_type,
      sym_bool_type,
      sym_null_lit,
      sym_bool_lit,
      sym_int_lit,
      sym_float_lit,
      anon_sym_for,
      anon_sym_if,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
  [3452] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 16,
      anon_sym_LPAREN,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_bottom_lit,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(651), 39,
      anon_sym__,
      sym_identifier,
      anon_sym_POUND_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_len,
      anon_sym_close,
      anon_sym_and,
      anon_sym_or,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_quo,
      anon_sym_rem,
      sym_number_type,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint128,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int128,
      sym_string_type,
      sym_bool_type,
      sym_null_lit,
      sym_bool_lit,
      sym_int_lit,
      sym_float_lit,
      anon_sym_for,
      anon_sym_if,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
  [3515] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 14,
      anon_sym_LPAREN,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_bottom_lit,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(627), 37,
      anon_sym__,
      sym_identifier,
      anon_sym_POUND_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_len,
      anon_sym_close,
      anon_sym_and,
      anon_sym_or,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_quo,
      anon_sym_rem,
      sym_number_type,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint128,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int128,
      sym_string_type,
      sym_bool_type,
      sym_null_lit,
      sym_bool_lit,
      sym_int_lit,
      sym_float_lit,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
  [3574] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_LBRACK2,
    ACTIONS(655), 1,
      anon_sym_LPAREN,
    ACTIONS(657), 1,
      sym_dot,
    STATE(97), 1,
      sym_arguments,
    STATE(98), 1,
      sym_index,
    STATE(99), 1,
      sym_selector,
    ACTIONS(365), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(367), 18,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
  [3623] = 5,
    ACTIONS(331), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_EQ,
    ACTIONS(359), 2,
      anon_sym_LF,
      anon_sym_LBRACK2,
    ACTIONS(361), 2,
      anon_sym_QMARK,
      anon_sym_COLON,
    ACTIONS(357), 19,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      sym_dot,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [3659] = 9,
    ACTIONS(331), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_LF,
    ACTIONS(369), 1,
      sym_dot,
    ACTIONS(371), 1,
      anon_sym_LBRACK2,
    ACTIONS(661), 1,
      anon_sym_LPAREN,
    STATE(94), 1,
      sym_selector,
    STATE(95), 1,
      sym_index,
    STATE(96), 1,
      sym_arguments,
    ACTIONS(365), 17,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [3703] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_PIPE,
    ACTIONS(663), 1,
      anon_sym_AMP,
    ACTIONS(665), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(667), 1,
      anon_sym_AMP_AMP,
    ACTIONS(675), 1,
      anon_sym_STAR,
    ACTIONS(677), 1,
      anon_sym_SLASH,
    ACTIONS(671), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(673), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(669), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(485), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [3750] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      anon_sym_STAR,
    ACTIONS(677), 1,
      anon_sym_SLASH,
    ACTIONS(673), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(483), 4,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(485), 15,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
  [3787] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      anon_sym_STAR,
    ACTIONS(677), 1,
      anon_sym_SLASH,
    ACTIONS(483), 4,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(485), 17,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
  [3822] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(667), 1,
      anon_sym_AMP_AMP,
    ACTIONS(675), 1,
      anon_sym_STAR,
    ACTIONS(677), 1,
      anon_sym_SLASH,
    ACTIONS(483), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(671), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(673), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(669), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(485), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [3867] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      anon_sym_AMP_AMP,
    ACTIONS(675), 1,
      anon_sym_STAR,
    ACTIONS(677), 1,
      anon_sym_SLASH,
    ACTIONS(483), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(671), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(673), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(669), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(485), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
      anon_sym_PIPE_PIPE,
  [3910] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      anon_sym_STAR,
    ACTIONS(677), 1,
      anon_sym_SLASH,
    ACTIONS(483), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(671), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(673), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(669), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(485), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [3951] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_AMP,
    ACTIONS(665), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(667), 1,
      anon_sym_AMP_AMP,
    ACTIONS(675), 1,
      anon_sym_STAR,
    ACTIONS(677), 1,
      anon_sym_SLASH,
    ACTIONS(679), 1,
      anon_sym_PIPE,
    ACTIONS(671), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(673), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(511), 5,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
    ACTIONS(669), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
  [3996] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_AMP,
    ACTIONS(665), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(667), 1,
      anon_sym_AMP_AMP,
    ACTIONS(675), 1,
      anon_sym_STAR,
    ACTIONS(677), 1,
      anon_sym_SLASH,
    ACTIONS(679), 1,
      anon_sym_PIPE,
    ACTIONS(671), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(673), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(681), 5,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
    ACTIONS(669), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
  [4041] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_AMP,
    ACTIONS(665), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(667), 1,
      anon_sym_AMP_AMP,
    ACTIONS(675), 1,
      anon_sym_STAR,
    ACTIONS(677), 1,
      anon_sym_SLASH,
    ACTIONS(679), 1,
      anon_sym_PIPE,
    ACTIONS(671), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(673), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(683), 5,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
    ACTIONS(669), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
  [4086] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_AMP,
    ACTIONS(665), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(667), 1,
      anon_sym_AMP_AMP,
    ACTIONS(675), 1,
      anon_sym_STAR,
    ACTIONS(677), 1,
      anon_sym_SLASH,
    ACTIONS(679), 1,
      anon_sym_PIPE,
    ACTIONS(671), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(673), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(685), 5,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
    ACTIONS(669), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
  [4131] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      anon_sym_EQ,
    ACTIONS(357), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(359), 15,
      anon_sym_LPAREN,
      sym_dot,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LBRACK2,
  [4162] = 10,
    ACTIONS(331), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_COMMA,
    ACTIONS(495), 1,
      anon_sym_LF,
    ACTIONS(689), 1,
      anon_sym_PIPE,
    ACTIONS(691), 1,
      anon_sym_AMP,
    ACTIONS(693), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(695), 1,
      anon_sym_AMP_AMP,
    ACTIONS(699), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(701), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(697), 8,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
  [4202] = 8,
    ACTIONS(331), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_LF,
    ACTIONS(693), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(695), 1,
      anon_sym_AMP_AMP,
    ACTIONS(699), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(701), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(483), 3,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(697), 8,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
  [4238] = 6,
    ACTIONS(331), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_LF,
    ACTIONS(699), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(701), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(483), 5,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(697), 8,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
  [4270] = 10,
    ACTIONS(331), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_COMMA,
    ACTIONS(515), 1,
      anon_sym_LF,
    ACTIONS(689), 1,
      anon_sym_PIPE,
    ACTIONS(691), 1,
      anon_sym_AMP,
    ACTIONS(693), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(695), 1,
      anon_sym_AMP_AMP,
    ACTIONS(699), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(701), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(697), 8,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
  [4310] = 5,
    ACTIONS(331), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_LF,
    ACTIONS(699), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(701), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(483), 13,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
  [4340] = 10,
    ACTIONS(331), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_COMMA,
    ACTIONS(519), 1,
      anon_sym_LF,
    ACTIONS(689), 1,
      anon_sym_PIPE,
    ACTIONS(691), 1,
      anon_sym_AMP,
    ACTIONS(693), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(695), 1,
      anon_sym_AMP_AMP,
    ACTIONS(699), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(701), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(697), 8,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
  [4380] = 7,
    ACTIONS(331), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_LF,
    ACTIONS(695), 1,
      anon_sym_AMP_AMP,
    ACTIONS(699), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(701), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(483), 4,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(697), 8,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
  [4414] = 4,
    ACTIONS(331), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_LF,
    ACTIONS(701), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(483), 15,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4442] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_AMP,
    ACTIONS(665), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(667), 1,
      anon_sym_AMP_AMP,
    ACTIONS(675), 1,
      anon_sym_STAR,
    ACTIONS(677), 1,
      anon_sym_SLASH,
    ACTIONS(679), 1,
      anon_sym_PIPE,
    ACTIONS(671), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(673), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(703), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(669), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
  [4484] = 10,
    ACTIONS(331), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_COMMA,
    ACTIONS(511), 1,
      anon_sym_LF,
    ACTIONS(689), 1,
      anon_sym_PIPE,
    ACTIONS(691), 1,
      anon_sym_AMP,
    ACTIONS(693), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(695), 1,
      anon_sym_AMP_AMP,
    ACTIONS(699), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(701), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(697), 8,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
  [4524] = 9,
    ACTIONS(331), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_LF,
    ACTIONS(691), 1,
      anon_sym_AMP,
    ACTIONS(693), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(695), 1,
      anon_sym_AMP_AMP,
    ACTIONS(483), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
    ACTIONS(699), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(701), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(697), 8,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
  [4562] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_AMP,
    ACTIONS(665), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(667), 1,
      anon_sym_AMP_AMP,
    ACTIONS(675), 1,
      anon_sym_STAR,
    ACTIONS(677), 1,
      anon_sym_SLASH,
    ACTIONS(679), 1,
      anon_sym_PIPE,
    ACTIONS(705), 1,
      anon_sym_RBRACK,
    ACTIONS(671), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(673), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(669), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
  [4603] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_RBRACK,
    ACTIONS(663), 1,
      anon_sym_AMP,
    ACTIONS(665), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(667), 1,
      anon_sym_AMP_AMP,
    ACTIONS(675), 1,
      anon_sym_STAR,
    ACTIONS(677), 1,
      anon_sym_SLASH,
    ACTIONS(679), 1,
      anon_sym_PIPE,
    ACTIONS(671), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(673), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(669), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
  [4644] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_AMP,
    ACTIONS(665), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(667), 1,
      anon_sym_AMP_AMP,
    ACTIONS(675), 1,
      anon_sym_STAR,
    ACTIONS(677), 1,
      anon_sym_SLASH,
    ACTIONS(679), 1,
      anon_sym_PIPE,
    ACTIONS(707), 1,
      anon_sym_RPAREN,
    ACTIONS(671), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(673), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(669), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
  [4685] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_AMP,
    ACTIONS(665), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(667), 1,
      anon_sym_AMP_AMP,
    ACTIONS(675), 1,
      anon_sym_STAR,
    ACTIONS(677), 1,
      anon_sym_SLASH,
    ACTIONS(679), 1,
      anon_sym_PIPE,
    ACTIONS(709), 1,
      anon_sym_RPAREN,
    ACTIONS(671), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(673), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(669), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
  [4726] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_AMP,
    ACTIONS(665), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(667), 1,
      anon_sym_AMP_AMP,
    ACTIONS(675), 1,
      anon_sym_STAR,
    ACTIONS(677), 1,
      anon_sym_SLASH,
    ACTIONS(679), 1,
      anon_sym_PIPE,
    ACTIONS(711), 1,
      anon_sym_RPAREN,
    ACTIONS(671), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(673), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(669), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
  [4767] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_AMP,
    ACTIONS(665), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(667), 1,
      anon_sym_AMP_AMP,
    ACTIONS(675), 1,
      anon_sym_STAR,
    ACTIONS(677), 1,
      anon_sym_SLASH,
    ACTIONS(679), 1,
      anon_sym_PIPE,
    ACTIONS(713), 1,
      anon_sym_RBRACK,
    ACTIONS(671), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(673), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(669), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
  [4808] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_AMP,
    ACTIONS(665), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(667), 1,
      anon_sym_AMP_AMP,
    ACTIONS(675), 1,
      anon_sym_STAR,
    ACTIONS(677), 1,
      anon_sym_SLASH,
    ACTIONS(679), 1,
      anon_sym_PIPE,
    ACTIONS(715), 1,
      anon_sym_RPAREN,
    ACTIONS(671), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(673), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(669), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
  [4849] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(717), 1,
      sym_identifier,
    ACTIONS(719), 1,
      anon_sym_RPAREN,
    ACTIONS(721), 1,
      sym_dot,
    ACTIONS(723), 1,
      anon_sym__,
    STATE(235), 1,
      aux_sym_import_spec_list_repeat1,
    STATE(286), 1,
      sym_import_spec,
    STATE(245), 2,
      sym__package_identifier,
      sym_blank_identifier,
    STATE(279), 5,
      sym__string_lit,
      sym_raw_simple_string_lit,
      sym_simple_string_lit,
      sym_raw_multiline_string_lit,
      sym_multiline_string_lit,
  [4894] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_RBRACK,
    ACTIONS(663), 1,
      anon_sym_AMP,
    ACTIONS(665), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(667), 1,
      anon_sym_AMP_AMP,
    ACTIONS(675), 1,
      anon_sym_STAR,
    ACTIONS(677), 1,
      anon_sym_SLASH,
    ACTIONS(679), 1,
      anon_sym_PIPE,
    ACTIONS(671), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(673), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(669), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
  [4935] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(717), 1,
      sym_identifier,
    ACTIONS(721), 1,
      sym_dot,
    ACTIONS(723), 1,
      anon_sym__,
    ACTIONS(725), 1,
      anon_sym_RPAREN,
    STATE(237), 1,
      aux_sym_import_spec_list_repeat1,
    STATE(286), 1,
      sym_import_spec,
    STATE(245), 2,
      sym__package_identifier,
      sym_blank_identifier,
    STATE(279), 5,
      sym__string_lit,
      sym_raw_simple_string_lit,
      sym_simple_string_lit,
      sym_raw_multiline_string_lit,
      sym_multiline_string_lit,
  [4980] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      sym_identifier,
    ACTIONS(723), 1,
      anon_sym__,
    ACTIONS(727), 1,
      anon_sym_LPAREN,
    ACTIONS(729), 1,
      sym_dot,
    ACTIONS(731), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(733), 1,
      anon_sym_DQUOTE,
    ACTIONS(735), 1,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(737), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(170), 2,
      sym_import_spec,
      sym_import_spec_list,
    STATE(246), 2,
      sym__package_identifier,
      sym_blank_identifier,
    STATE(162), 5,
      sym__string_lit,
      sym_raw_simple_string_lit,
      sym_simple_string_lit,
      sym_raw_multiline_string_lit,
      sym_multiline_string_lit,
  [5023] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      sym_identifier,
    ACTIONS(742), 1,
      anon_sym_RPAREN,
    ACTIONS(744), 1,
      sym_dot,
    ACTIONS(747), 1,
      anon_sym__,
    ACTIONS(750), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(753), 1,
      anon_sym_DQUOTE,
    ACTIONS(756), 1,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(759), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(237), 1,
      aux_sym_import_spec_list_repeat1,
    STATE(286), 1,
      sym_import_spec,
    STATE(245), 2,
      sym__package_identifier,
      sym_blank_identifier,
    STATE(279), 5,
      sym__string_lit,
      sym_raw_simple_string_lit,
      sym_simple_string_lit,
      sym_raw_multiline_string_lit,
      sym_multiline_string_lit,
  [5068] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_COMMA,
    ACTIONS(764), 1,
      anon_sym_LBRACE,
    ACTIONS(766), 1,
      anon_sym_for,
    ACTIONS(768), 1,
      anon_sym_if,
    ACTIONS(770), 1,
      anon_sym_let,
    STATE(188), 1,
      sym_struct_lit,
    STATE(241), 5,
      sym_for_clause,
      sym_guard_clause,
      sym_let_clause,
      sym__clause,
      aux_sym_comprehension_repeat1,
  [5097] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(762), 1,
      anon_sym_COMMA,
    ACTIONS(766), 1,
      anon_sym_for,
    ACTIONS(768), 1,
      anon_sym_if,
    ACTIONS(770), 1,
      anon_sym_let,
    STATE(161), 1,
      sym_struct_lit,
    STATE(244), 5,
      sym_for_clause,
      sym_guard_clause,
      sym_let_clause,
      sym__clause,
      aux_sym_comprehension_repeat1,
  [5126] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(762), 1,
      anon_sym_COMMA,
    ACTIONS(766), 1,
      anon_sym_for,
    ACTIONS(768), 1,
      anon_sym_if,
    ACTIONS(770), 1,
      anon_sym_let,
    STATE(168), 1,
      sym_struct_lit,
    STATE(239), 5,
      sym_for_clause,
      sym_guard_clause,
      sym_let_clause,
      sym__clause,
      aux_sym_comprehension_repeat1,
  [5155] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_COMMA,
    ACTIONS(764), 1,
      anon_sym_LBRACE,
    ACTIONS(766), 1,
      anon_sym_for,
    ACTIONS(768), 1,
      anon_sym_if,
    ACTIONS(770), 1,
      anon_sym_let,
    STATE(194), 1,
      sym_struct_lit,
    STATE(244), 5,
      sym_for_clause,
      sym_guard_clause,
      sym_let_clause,
      sym__clause,
      aux_sym_comprehension_repeat1,
  [5184] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_COMMA,
    ACTIONS(766), 1,
      anon_sym_for,
    ACTIONS(768), 1,
      anon_sym_if,
    ACTIONS(770), 1,
      anon_sym_let,
    ACTIONS(772), 1,
      anon_sym_LBRACE,
    STATE(168), 1,
      sym_struct_lit,
    STATE(243), 5,
      sym_for_clause,
      sym_guard_clause,
      sym_let_clause,
      sym__clause,
      aux_sym_comprehension_repeat1,
  [5213] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_COMMA,
    ACTIONS(766), 1,
      anon_sym_for,
    ACTIONS(768), 1,
      anon_sym_if,
    ACTIONS(770), 1,
      anon_sym_let,
    ACTIONS(772), 1,
      anon_sym_LBRACE,
    STATE(161), 1,
      sym_struct_lit,
    STATE(244), 5,
      sym_for_clause,
      sym_guard_clause,
      sym_let_clause,
      sym__clause,
      aux_sym_comprehension_repeat1,
  [5242] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_COMMA,
    ACTIONS(777), 1,
      anon_sym_LBRACE,
    ACTIONS(779), 1,
      anon_sym_for,
    ACTIONS(782), 1,
      anon_sym_if,
    ACTIONS(785), 1,
      anon_sym_let,
    STATE(244), 5,
      sym_for_clause,
      sym_guard_clause,
      sym_let_clause,
      sym__clause,
      aux_sym_comprehension_repeat1,
  [5268] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(281), 5,
      sym__string_lit,
      sym_raw_simple_string_lit,
      sym_simple_string_lit,
      sym_raw_multiline_string_lit,
      sym_multiline_string_lit,
  [5291] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(733), 1,
      anon_sym_DQUOTE,
    ACTIONS(735), 1,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(737), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(177), 5,
      sym__string_lit,
      sym_raw_simple_string_lit,
      sym_simple_string_lit,
      sym_raw_multiline_string_lit,
      sym_multiline_string_lit,
  [5314] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 3,
      anon_sym__,
      anon_sym_POUND_DQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(742), 5,
      anon_sym_RPAREN,
      sym_dot,
      sym_identifier,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [5330] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      anon_sym_for,
    ACTIONS(768), 1,
      anon_sym_if,
    ACTIONS(770), 1,
      anon_sym_let,
    STATE(258), 4,
      sym_for_clause,
      sym_guard_clause,
      sym_let_clause,
      sym__clause,
  [5349] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_DQUOTE,
    ACTIONS(792), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(794), 2,
      sym__str_content,
      sym_escape_sequence,
    STATE(250), 2,
      aux_sym__string_parts,
      sym_interpolation,
  [5367] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      anon_sym_DQUOTE,
    ACTIONS(798), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(801), 2,
      sym__str_content,
      sym_escape_sequence,
    STATE(250), 2,
      aux_sym__string_parts,
      sym_interpolation,
  [5385] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(804), 1,
      anon_sym_DQUOTE,
    ACTIONS(794), 2,
      sym__str_content,
      sym_escape_sequence,
    STATE(250), 2,
      aux_sym__string_parts,
      sym_interpolation,
  [5403] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(806), 1,
      anon_sym_DQUOTE,
    ACTIONS(808), 2,
      sym__str_content,
      sym_escape_sequence,
    STATE(251), 2,
      aux_sym__string_parts,
      sym_interpolation,
  [5421] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(810), 1,
      anon_sym_DQUOTE,
    ACTIONS(812), 2,
      sym__str_content,
      sym_escape_sequence,
    STATE(249), 2,
      aux_sym__string_parts,
      sym_interpolation,
  [5439] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(814), 1,
      anon_sym_DQUOTE,
    ACTIONS(816), 2,
      sym__str_content,
      sym_escape_sequence,
    STATE(255), 2,
      aux_sym__string_parts,
      sym_interpolation,
  [5457] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(818), 1,
      anon_sym_DQUOTE,
    ACTIONS(794), 2,
      sym__str_content,
      sym_escape_sequence,
    STATE(250), 2,
      aux_sym__string_parts,
      sym_interpolation,
  [5475] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      sym_identifier,
    ACTIONS(822), 1,
      anon_sym_DQUOTE,
    ACTIONS(824), 1,
      anon_sym_LBRACK,
    STATE(298), 1,
      sym__label_expr,
    STATE(283), 2,
      sym_simple_string_lit,
      sym__label_name,
  [5495] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 2,
      anon_sym_POUND_DQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(826), 4,
      anon_sym_COMMA,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_in,
  [5509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 5,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [5520] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(832), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(834), 1,
      sym__multi_str_content,
    STATE(265), 2,
      aux_sym__multi_string_parts,
      sym_interpolation,
  [5537] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(834), 1,
      sym__multi_str_content,
    ACTIONS(836), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(265), 2,
      aux_sym__multi_string_parts,
      sym_interpolation,
  [5554] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(838), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(840), 1,
      sym__multi_str_content,
    STATE(260), 2,
      aux_sym__multi_string_parts,
      sym_interpolation,
  [5571] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(842), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(844), 1,
      sym__multi_str_content,
    STATE(259), 2,
      aux_sym__multi_string_parts,
      sym_interpolation,
  [5588] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(846), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(848), 1,
      sym__multi_str_content,
    STATE(264), 2,
      aux_sym__multi_string_parts,
      sym_interpolation,
  [5605] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(834), 1,
      sym__multi_str_content,
    ACTIONS(850), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(265), 2,
      aux_sym__multi_string_parts,
      sym_interpolation,
  [5622] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(854), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(857), 1,
      sym__multi_str_content,
    STATE(265), 2,
      aux_sym__multi_string_parts,
      sym_interpolation,
  [5639] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 2,
      anon_sym_POUND_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(541), 2,
      anon_sym_POUND_DQUOTE,
      anon_sym_DQUOTE,
  [5651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 4,
      sym__str_content,
      sym_escape_sequence,
      anon_sym_DQUOTE,
      anon_sym_BSLASH_LPAREN,
  [5661] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_COMMA,
    ACTIONS(864), 1,
      anon_sym_RPAREN,
    STATE(274), 1,
      aux_sym_arguments_repeat1,
  [5674] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      sym_identifier,
    ACTIONS(868), 1,
      anon_sym_DQUOTE,
    STATE(132), 1,
      sym_simple_string_lit,
  [5687] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 1,
      anon_sym__,
    ACTIONS(870), 1,
      sym_identifier,
    STATE(294), 1,
      sym_blank_identifier,
  [5700] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      anon_sym_EQ,
    ACTIONS(872), 2,
      anon_sym_QMARK,
      anon_sym_COLON,
  [5711] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_COMMA,
    ACTIONS(876), 1,
      anon_sym_RPAREN,
    STATE(268), 1,
      aux_sym_arguments_repeat1,
  [5724] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 3,
      sym__multi_str_content,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_BSLASH_LPAREN,
  [5733] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(878), 1,
      anon_sym_COMMA,
    ACTIONS(881), 1,
      anon_sym_RPAREN,
    STATE(274), 1,
      aux_sym_arguments_repeat1,
  [5746] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_COMMA,
    ACTIONS(883), 1,
      anon_sym_RPAREN,
    STATE(274), 1,
      aux_sym_arguments_repeat1,
  [5759] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_COMMA,
    ACTIONS(885), 1,
      anon_sym_RPAREN,
    STATE(275), 1,
      aux_sym_arguments_repeat1,
  [5772] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      anon_sym_DQUOTE,
    ACTIONS(887), 1,
      sym_identifier,
    STATE(90), 1,
      sym_simple_string_lit,
  [5785] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 1,
      anon_sym__,
    ACTIONS(889), 1,
      sym_identifier,
    STATE(284), 1,
      sym_blank_identifier,
  [5798] = 3,
    ACTIONS(331), 1,
      sym_comment,
    ACTIONS(547), 1,
      anon_sym_LF,
    ACTIONS(549), 1,
      anon_sym_COMMA,
  [5808] = 3,
    ACTIONS(331), 1,
      sym_comment,
    ACTIONS(891), 1,
      anon_sym_LF,
    ACTIONS(893), 1,
      anon_sym_COMMA,
  [5818] = 3,
    ACTIONS(331), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_LF,
    ACTIONS(579), 1,
      anon_sym_COMMA,
  [5828] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 1,
      sym_identifier,
    STATE(174), 1,
      sym__package_identifier,
  [5838] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_QMARK,
    ACTIONS(899), 1,
      anon_sym_COLON,
  [5848] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(901), 1,
      anon_sym_COMMA,
    ACTIONS(903), 1,
      anon_sym_in,
  [5858] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_POUND,
    ACTIONS(907), 1,
      sym__multi_str_content,
  [5868] = 3,
    ACTIONS(331), 1,
      sym_comment,
    ACTIONS(909), 1,
      anon_sym_LF,
    ACTIONS(911), 1,
      anon_sym_COMMA,
  [5878] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 1,
      anon_sym_DQUOTE_POUND,
    ACTIONS(915), 1,
      sym__str_content,
  [5888] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_POUND,
    ACTIONS(919), 1,
      sym__multi_str_content,
  [5898] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_POUND,
    ACTIONS(923), 1,
      sym__multi_str_content,
  [5908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5916] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(925), 1,
      anon_sym_DQUOTE_POUND,
    ACTIONS(927), 1,
      sym__str_content,
  [5926] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(929), 1,
      anon_sym_DQUOTE_POUND,
    ACTIONS(931), 1,
      sym__str_content,
  [5936] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(933), 1,
      anon_sym_DQUOTE_POUND,
  [5943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 1,
      anon_sym_in,
  [5950] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_POUND,
  [5957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_POUND,
  [5964] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(941), 1,
      anon_sym_DQUOTE_POUND,
  [5971] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 1,
      anon_sym_COLON,
  [5978] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_RBRACK,
  [5985] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(945), 1,
      sym_identifier,
  [5992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 1,
      anon_sym_COLON,
  [5999] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(949), 1,
      anon_sym_EQ,
  [6006] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(951), 1,
      sym_identifier,
  [6013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(953), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_POUND,
  [6020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(955), 1,
      anon_sym_COLON,
  [6027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 1,
      anon_sym_COLON,
  [6034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(959), 1,
      anon_sym_COLON,
  [6041] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 1,
      anon_sym_EQ,
  [6048] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(963), 1,
      ts_builtin_sym_end,
  [6055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(965), 1,
      anon_sym_EQ,
  [6062] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      anon_sym_DQUOTE_POUND,
  [6069] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(969), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(149)] = 0,
  [SMALL_STATE(150)] = 86,
  [SMALL_STATE(151)] = 168,
  [SMALL_STATE(152)] = 244,
  [SMALL_STATE(153)] = 332,
  [SMALL_STATE(154)] = 412,
  [SMALL_STATE(155)] = 496,
  [SMALL_STATE(156)] = 570,
  [SMALL_STATE(157)] = 658,
  [SMALL_STATE(158)] = 745,
  [SMALL_STATE(159)] = 811,
  [SMALL_STATE(160)] = 877,
  [SMALL_STATE(161)] = 943,
  [SMALL_STATE(162)] = 1009,
  [SMALL_STATE(163)] = 1075,
  [SMALL_STATE(164)] = 1141,
  [SMALL_STATE(165)] = 1207,
  [SMALL_STATE(166)] = 1273,
  [SMALL_STATE(167)] = 1341,
  [SMALL_STATE(168)] = 1407,
  [SMALL_STATE(169)] = 1473,
  [SMALL_STATE(170)] = 1539,
  [SMALL_STATE(171)] = 1605,
  [SMALL_STATE(172)] = 1671,
  [SMALL_STATE(173)] = 1737,
  [SMALL_STATE(174)] = 1803,
  [SMALL_STATE(175)] = 1869,
  [SMALL_STATE(176)] = 1935,
  [SMALL_STATE(177)] = 2001,
  [SMALL_STATE(178)] = 2067,
  [SMALL_STATE(179)] = 2133,
  [SMALL_STATE(180)] = 2199,
  [SMALL_STATE(181)] = 2265,
  [SMALL_STATE(182)] = 2331,
  [SMALL_STATE(183)] = 2397,
  [SMALL_STATE(184)] = 2463,
  [SMALL_STATE(185)] = 2532,
  [SMALL_STATE(186)] = 2601,
  [SMALL_STATE(187)] = 2670,
  [SMALL_STATE(188)] = 2736,
  [SMALL_STATE(189)] = 2800,
  [SMALL_STATE(190)] = 2878,
  [SMALL_STATE(191)] = 2942,
  [SMALL_STATE(192)] = 3006,
  [SMALL_STATE(193)] = 3070,
  [SMALL_STATE(194)] = 3134,
  [SMALL_STATE(195)] = 3198,
  [SMALL_STATE(196)] = 3262,
  [SMALL_STATE(197)] = 3326,
  [SMALL_STATE(198)] = 3389,
  [SMALL_STATE(199)] = 3452,
  [SMALL_STATE(200)] = 3515,
  [SMALL_STATE(201)] = 3574,
  [SMALL_STATE(202)] = 3623,
  [SMALL_STATE(203)] = 3659,
  [SMALL_STATE(204)] = 3703,
  [SMALL_STATE(205)] = 3750,
  [SMALL_STATE(206)] = 3787,
  [SMALL_STATE(207)] = 3822,
  [SMALL_STATE(208)] = 3867,
  [SMALL_STATE(209)] = 3910,
  [SMALL_STATE(210)] = 3951,
  [SMALL_STATE(211)] = 3996,
  [SMALL_STATE(212)] = 4041,
  [SMALL_STATE(213)] = 4086,
  [SMALL_STATE(214)] = 4131,
  [SMALL_STATE(215)] = 4162,
  [SMALL_STATE(216)] = 4202,
  [SMALL_STATE(217)] = 4238,
  [SMALL_STATE(218)] = 4270,
  [SMALL_STATE(219)] = 4310,
  [SMALL_STATE(220)] = 4340,
  [SMALL_STATE(221)] = 4380,
  [SMALL_STATE(222)] = 4414,
  [SMALL_STATE(223)] = 4442,
  [SMALL_STATE(224)] = 4484,
  [SMALL_STATE(225)] = 4524,
  [SMALL_STATE(226)] = 4562,
  [SMALL_STATE(227)] = 4603,
  [SMALL_STATE(228)] = 4644,
  [SMALL_STATE(229)] = 4685,
  [SMALL_STATE(230)] = 4726,
  [SMALL_STATE(231)] = 4767,
  [SMALL_STATE(232)] = 4808,
  [SMALL_STATE(233)] = 4849,
  [SMALL_STATE(234)] = 4894,
  [SMALL_STATE(235)] = 4935,
  [SMALL_STATE(236)] = 4980,
  [SMALL_STATE(237)] = 5023,
  [SMALL_STATE(238)] = 5068,
  [SMALL_STATE(239)] = 5097,
  [SMALL_STATE(240)] = 5126,
  [SMALL_STATE(241)] = 5155,
  [SMALL_STATE(242)] = 5184,
  [SMALL_STATE(243)] = 5213,
  [SMALL_STATE(244)] = 5242,
  [SMALL_STATE(245)] = 5268,
  [SMALL_STATE(246)] = 5291,
  [SMALL_STATE(247)] = 5314,
  [SMALL_STATE(248)] = 5330,
  [SMALL_STATE(249)] = 5349,
  [SMALL_STATE(250)] = 5367,
  [SMALL_STATE(251)] = 5385,
  [SMALL_STATE(252)] = 5403,
  [SMALL_STATE(253)] = 5421,
  [SMALL_STATE(254)] = 5439,
  [SMALL_STATE(255)] = 5457,
  [SMALL_STATE(256)] = 5475,
  [SMALL_STATE(257)] = 5495,
  [SMALL_STATE(258)] = 5509,
  [SMALL_STATE(259)] = 5520,
  [SMALL_STATE(260)] = 5537,
  [SMALL_STATE(261)] = 5554,
  [SMALL_STATE(262)] = 5571,
  [SMALL_STATE(263)] = 5588,
  [SMALL_STATE(264)] = 5605,
  [SMALL_STATE(265)] = 5622,
  [SMALL_STATE(266)] = 5639,
  [SMALL_STATE(267)] = 5651,
  [SMALL_STATE(268)] = 5661,
  [SMALL_STATE(269)] = 5674,
  [SMALL_STATE(270)] = 5687,
  [SMALL_STATE(271)] = 5700,
  [SMALL_STATE(272)] = 5711,
  [SMALL_STATE(273)] = 5724,
  [SMALL_STATE(274)] = 5733,
  [SMALL_STATE(275)] = 5746,
  [SMALL_STATE(276)] = 5759,
  [SMALL_STATE(277)] = 5772,
  [SMALL_STATE(278)] = 5785,
  [SMALL_STATE(279)] = 5798,
  [SMALL_STATE(280)] = 5808,
  [SMALL_STATE(281)] = 5818,
  [SMALL_STATE(282)] = 5828,
  [SMALL_STATE(283)] = 5838,
  [SMALL_STATE(284)] = 5848,
  [SMALL_STATE(285)] = 5858,
  [SMALL_STATE(286)] = 5868,
  [SMALL_STATE(287)] = 5878,
  [SMALL_STATE(288)] = 5888,
  [SMALL_STATE(289)] = 5898,
  [SMALL_STATE(290)] = 5908,
  [SMALL_STATE(291)] = 5916,
  [SMALL_STATE(292)] = 5926,
  [SMALL_STATE(293)] = 5936,
  [SMALL_STATE(294)] = 5943,
  [SMALL_STATE(295)] = 5950,
  [SMALL_STATE(296)] = 5957,
  [SMALL_STATE(297)] = 5964,
  [SMALL_STATE(298)] = 5971,
  [SMALL_STATE(299)] = 5978,
  [SMALL_STATE(300)] = 5985,
  [SMALL_STATE(301)] = 5992,
  [SMALL_STATE(302)] = 5999,
  [SMALL_STATE(303)] = 6006,
  [SMALL_STATE(304)] = 6013,
  [SMALL_STATE(305)] = 6020,
  [SMALL_STATE(306)] = 6027,
  [SMALL_STATE(307)] = 6034,
  [SMALL_STATE(308)] = 6041,
  [SMALL_STATE(309)] = 6048,
  [SMALL_STATE(310)] = 6055,
  [SMALL_STATE(311)] = 6062,
  [SMALL_STATE(312)] = 6069,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 6),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 6), SHIFT_REPEAT(202),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 6), SHIFT_REPEAT(282),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 6), SHIFT_REPEAT(236),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 6), SHIFT_REPEAT(47),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 6), SHIFT_REPEAT(109),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 6), SHIFT_REPEAT(291),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 6), SHIFT_REPEAT(252),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 6), SHIFT_REPEAT(285),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 6), SHIFT_REPEAT(263),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 6), SHIFT_REPEAT(120),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 6), SHIFT_REPEAT(203),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 6), SHIFT_REPEAT(128),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 6), SHIFT_REPEAT(130),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 6), SHIFT_REPEAT(119),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 6), SHIFT_REPEAT(203),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 6), SHIFT_REPEAT(14),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 6), SHIFT_REPEAT(12),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 6), SHIFT_REPEAT(26),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 6), SHIFT_REPEAT(278),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 6), SHIFT_REPEAT(49),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 6), SHIFT_REPEAT(300),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 6), SHIFT_REPEAT(51),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 6), SHIFT_REPEAT(51),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 1),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_lit_repeat1, 2, .production_id = 6), SHIFT_REPEAT(79),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_lit_repeat1, 2, .production_id = 6), SHIFT_REPEAT(47),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_lit_repeat1, 2, .production_id = 6), SHIFT_REPEAT(109),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_lit_repeat1, 2, .production_id = 6), SHIFT_REPEAT(291),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_lit_repeat1, 2, .production_id = 6), SHIFT_REPEAT(252),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_lit_repeat1, 2, .production_id = 6), SHIFT_REPEAT(285),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_lit_repeat1, 2, .production_id = 6), SHIFT_REPEAT(263),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_lit_repeat1, 2, .production_id = 6), SHIFT_REPEAT(120),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_lit_repeat1, 2, .production_id = 6), SHIFT_REPEAT(80),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_lit_repeat1, 2, .production_id = 6), SHIFT_REPEAT(128),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_lit_repeat1, 2, .production_id = 6), SHIFT_REPEAT(130),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_lit_repeat1, 2, .production_id = 6), SHIFT_REPEAT(119),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_lit_repeat1, 2, .production_id = 6), SHIFT_REPEAT(80),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_lit_repeat1, 2, .production_id = 6), SHIFT_REPEAT(14),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_lit_repeat1, 2, .production_id = 6), SHIFT_REPEAT(12),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_lit_repeat1, 2, .production_id = 6),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_lit_repeat1, 2, .production_id = 6), SHIFT_REPEAT(21),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_lit_repeat1, 2, .production_id = 6), SHIFT_REPEAT(278),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_lit_repeat1, 2, .production_id = 6), SHIFT_REPEAT(49),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_lit_repeat1, 2, .production_id = 6), SHIFT_REPEAT(312),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_lit_repeat1, 2, .production_id = 6), SHIFT_REPEAT(33),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_lit_repeat1, 2, .production_id = 6), SHIFT_REPEAT(33),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_lit_repeat1, 2, .production_id = 6), SHIFT_REPEAT(134),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_lit_repeat1, 2, .production_id = 6), SHIFT_REPEAT(46),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_lit_repeat1, 2, .production_id = 6), SHIFT_REPEAT(115),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_lit_repeat1, 2, .production_id = 6), SHIFT_REPEAT(287),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_lit_repeat1, 2, .production_id = 6), SHIFT_REPEAT(254),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_lit_repeat1, 2, .production_id = 6), SHIFT_REPEAT(289),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_lit_repeat1, 2, .production_id = 6), SHIFT_REPEAT(261),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_lit_repeat1, 2, .production_id = 6), SHIFT_REPEAT(114),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_lit_repeat1, 2, .production_id = 6), SHIFT_REPEAT(87),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_lit_repeat1, 2, .production_id = 6), SHIFT_REPEAT(112),
  [295] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_lit_repeat1, 2, .production_id = 6), SHIFT_REPEAT(89),
  [298] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_lit_repeat1, 2, .production_id = 6), SHIFT_REPEAT(110),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_lit_repeat1, 2, .production_id = 6), SHIFT_REPEAT(87),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_lit_repeat1, 2, .production_id = 6), SHIFT_REPEAT(17),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_lit_repeat1, 2, .production_id = 6),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_lit_repeat1, 2, .production_id = 6), SHIFT_REPEAT(4),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_lit_repeat1, 2, .production_id = 6), SHIFT_REPEAT(25),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_lit_repeat1, 2, .production_id = 6), SHIFT_REPEAT(278),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_lit_repeat1, 2, .production_id = 6), SHIFT_REPEAT(49),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_lit_repeat1, 2, .production_id = 6), SHIFT_REPEAT(64),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_lit_repeat1, 2, .production_id = 6), SHIFT_REPEAT(64),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ellipsis, 1),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ellipsis, 1),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__operand, 1),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operand, 1),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_name, 1),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_lit, 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_lit, 1),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_string_lit, 3),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_string_lit, 3),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_string_lit, 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_string_lit, 2),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_multiline_string_lit, 3),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_multiline_string_lit, 3),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_uint_type, 1),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uint_type, 1),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 2),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 2),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_lit, 3, .production_id = 11),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_lit, 3, .production_id = 11),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_lit, 3, .production_id = 11),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_lit, 3, .production_id = 11),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__operand, 3),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operand, 3),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_expression, 2),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_expression, 2),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_expression, 2),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_expression, 2),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_lit, 2),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_lit, 2),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_lit, 2),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_lit, 2),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_multiline_string_lit, 2),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_multiline_string_lit, 2),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_simple_string_lit, 3),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_simple_string_lit, 3),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_lit, 2),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_lit, 2),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_lit, 3),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_lit, 3),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_top_lit, 1),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top_lit, 1),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_type, 1),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_type, 1),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_type, 1),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_type, 1),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin, 1),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin, 1),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 3),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 3),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_simple_string_lit, 2),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_simple_string_lit, 2),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 12),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 12),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alias_expr, 3, .production_id = 10),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_expr, 3, .production_id = 10),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 5),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 5),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_clause, 4, .production_id = 13),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_clause, 4, .production_id = 13),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ellipsis, 2),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ellipsis, 2),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alias_expr, 1),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_expr, 1),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__package_identifier, 1, .production_id = 2),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__package_identifier, 1, .production_id = 2),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comprehension, 3),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension, 3),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_spec, 1, .production_id = 3),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_spec, 1, .production_id = 3),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__declaration, 1, .production_id = 1),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declaration, 1, .production_id = 1),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_lit_repeat1, 1, .production_id = 1),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comprehension, 2),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension, 2),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_declaration, 2),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_declaration, 2),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_clause, 2),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_package_clause, 2),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 2),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_spec, 2, .production_id = 8),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_spec, 2, .production_id = 8),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_spec_list, 3),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_spec_list, 3),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, .production_id = 7),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, .production_id = 7),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_spec_list, 2),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_spec_list, 2),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 1),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 1),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__embedding, 1, .production_id = 1),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__embedding, 1, .production_id = 1),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_elem, 1, .production_id = 1),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_elem, 1, .production_id = 1),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_elem, 2, .production_id = 6),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_elem, 2, .production_id = 6),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__list_elem_repeat1, 2, .production_id = 6),
  [615] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_elem_repeat1, 2, .production_id = 6), SHIFT_REPEAT(22),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_elem_repeat1, 2, .production_id = 6),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [622] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_repeat1, 2), SHIFT_REPEAT(271),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_repeat1, 2),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_field_repeat1, 2),
  [629] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_repeat1, 2), SHIFT_REPEAT(254),
  [632] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_repeat1, 2), SHIFT_REPEAT(31),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_lit_repeat1, 2, .production_id = 1),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_lit_repeat1, 2, .production_id = 1),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__list_elem_repeat1, 2, .production_id = 11),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_elem_repeat1, 2, .production_id = 11),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_elem, 3, .production_id = 1),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_elem, 3, .production_id = 1),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_lit_repeat1, 1, .production_id = 1),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_lit_repeat1, 1, .production_id = 1),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_elem, 4, .production_id = 6),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_elem, 4, .production_id = 6),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guard_clause, 2, .production_id = 4),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 6),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 4),
  [687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [739] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_spec_list_repeat1, 2), SHIFT_REPEAT(266),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_spec_list_repeat1, 2),
  [744] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_spec_list_repeat1, 2), SHIFT_REPEAT(245),
  [747] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_import_spec_list_repeat1, 2), SHIFT_REPEAT(257),
  [750] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_import_spec_list_repeat1, 2), SHIFT_REPEAT(291),
  [753] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_import_spec_list_repeat1, 2), SHIFT_REPEAT(252),
  [756] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_spec_list_repeat1, 2), SHIFT_REPEAT(285),
  [759] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_spec_list_repeat1, 2), SHIFT_REPEAT(263),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [774] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comprehension_repeat1, 2), SHIFT_REPEAT(248),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comprehension_repeat1, 2),
  [779] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comprehension_repeat1, 2), SHIFT_REPEAT(278),
  [782] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comprehension_repeat1, 2), SHIFT_REPEAT(49),
  [785] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comprehension_repeat1, 2), SHIFT_REPEAT(303),
  [788] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_import_spec_list_repeat1, 2),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_parts, 2),
  [798] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_parts, 2), SHIFT_REPEAT(55),
  [801] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_parts, 2), SHIFT_REPEAT(250),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank_identifier, 1),
  [828] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank_identifier, 1),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__multi_string_parts, 2),
  [854] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__multi_string_parts, 2), SHIFT_REPEAT(39),
  [857] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__multi_string_parts, 2), SHIFT_REPEAT(265),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_name, 1),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [878] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(30),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [893] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_expr, 1),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [911] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3, .production_id = 9),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_expr, 3, .production_id = 11),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_expr, 2),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1, .production_id = 1),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [963] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_cue_external_scanner_create(void);
void tree_sitter_cue_external_scanner_destroy(void *);
bool tree_sitter_cue_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_cue_external_scanner_serialize(void *, char *);
void tree_sitter_cue_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_cue(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_cue_external_scanner_create,
      tree_sitter_cue_external_scanner_destroy,
      tree_sitter_cue_external_scanner_scan,
      tree_sitter_cue_external_scanner_serialize,
      tree_sitter_cue_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
