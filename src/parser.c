#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 360
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 167
#define ALIAS_COUNT 0
#define TOKEN_COUNT 68
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  anon_sym_boot = 3,
  anon_sym_initially = 4,
  anon_sym_next = 5,
  anon_sym_property = 6,
  anon_sym_EQ = 7,
  anon_sym_DOT = 8,
  anon_sym_machine = 9,
  anon_sym_of = 10,
  anon_sym_LPAREN = 11,
  anon_sym_RPAREN = 12,
  anon_sym_ensures = 13,
  anon_sym_requires = 14,
  aux_sym_model_contract_token1 = 15,
  anon_sym_COMMA = 16,
  anon_sym_is = 17,
  anon_sym_some = 18,
  anon_sym_atmost = 19,
  anon_sym_atleast = 20,
  anon_sym_includes = 21,
  anon_sym_extends = 22,
  anon_sym_model = 23,
  anon_sym_partial = 24,
  anon_sym_transform = 25,
  anon_sym_system = 26,
  anon_sym_returns = 27,
  anon_sym_conforms = 28,
  anon_sym_domain = 29,
  anon_sym_LBRACK = 30,
  anon_sym_RBRACK = 31,
  anon_sym_COLON = 32,
  anon_sym_SEMI = 33,
  anon_sym_at = 34,
  anon_sym_COLON_COLON = 35,
  anon_sym_AT = 36,
  anon_sym_COLON_COLON_EQ = 37,
  anon_sym_DASH = 38,
  anon_sym_new = 39,
  anon_sym_inj = 40,
  anon_sym_bij = 41,
  anon_sym_sur = 42,
  anon_sym_fun = 43,
  anon_sym_any = 44,
  anon_sym_DASH_GT = 45,
  anon_sym_EQ_GT = 46,
  anon_sym_PLUS = 47,
  anon_sym_DOT_DOT = 48,
  sym_digits = 49,
  sym_real = 50,
  sym_frac = 51,
  anon_sym_DQUOTE = 52,
  aux_sym_string_token1 = 53,
  anon_sym_COLON_DASH = 54,
  anon_sym_PIPE = 55,
  anon_sym_no = 56,
  anon_sym_STAR = 57,
  anon_sym_SLASH = 58,
  anon_sym_PERCENT = 59,
  anon_sym_BANG_EQ = 60,
  anon_sym_LT = 61,
  anon_sym_LT_EQ = 62,
  anon_sym_GT = 63,
  anon_sym_GT_EQ = 64,
  sym_bareid = 65,
  sym_qualid = 66,
  sym_comment = 67,
  sym_program = 68,
  sym_module = 69,
  sym_machine = 70,
  sym_machine_body = 71,
  sym_machine_sentence_conf = 72,
  sym_machine_sentence = 73,
  sym_machine_prop = 74,
  sym_machine_sig_config = 75,
  sym_machine_sig = 76,
  sym_machine_sig_in = 77,
  sym_model = 78,
  sym_model_body = 79,
  sym_model_sentence = 80,
  sym_model_contract_conf = 81,
  sym_model_contract = 82,
  sym_model_fact_list = 83,
  sym_model_fact = 84,
  sym_card_spec = 85,
  sym_model_sig_config = 86,
  sym_model_sig = 87,
  sym_model_intro = 88,
  sym_tsystem = 89,
  sym_tsystem_rest = 90,
  sym_trans_steps = 91,
  sym_trans_step_config = 92,
  sym_transform = 93,
  sym_transform_rest = 94,
  sym_trans_body = 95,
  sym_trans_sentence_config = 96,
  sym_trans_sentence = 97,
  sym_transform_sig_config = 98,
  sym_transform_sig = 99,
  sym_trans_sig_in = 100,
  sym_domain = 101,
  sym_dom_sentences = 102,
  sym_dom_sentence_config = 103,
  sym_dom_sentence = 104,
  sym_domain_sig_config = 105,
  sym_domain_sig = 106,
  sym_config = 107,
  sym_sentence_config = 108,
  sym_setting_list = 109,
  sym_setting = 110,
  sym_model_param_list = 111,
  sym_val_or_model_program = 112,
  sym_vom_param_list = 113,
  sym_update = 114,
  sym_step = 115,
  sym_choice_list = 116,
  sym_mod_apply = 117,
  sym_mod_arg_list = 118,
  sym_mod_app_arg = 119,
  sym_step_or_update_lhs = 120,
  sym_mod_refs = 121,
  sym_mod_ref = 122,
  sym_mod_ref_rename = 123,
  sym_mod_ref_no_rename = 124,
  sym_type_decl = 125,
  sym_type_decl_body = 126,
  sym_fun_decl = 127,
  sym_fields = 128,
  sym_field = 129,
  sym_maparrow = 130,
  sym_unnbody = 131,
  sym_unncmp = 132,
  sym_typeid = 133,
  sym_enum_list = 134,
  sym_enum_cnst = 135,
  sym_string = 136,
  sym_rule = 137,
  sym_compr = 138,
  sym_compr_rest = 139,
  sym_body_list = 140,
  sym_body = 141,
  sym_constraint = 142,
  sym_func_term_list = 143,
  sym_func_or_compr = 144,
  sym_func_term = 145,
  sym_atom = 146,
  sym_id = 147,
  sym_constant = 148,
  sym_unop = 149,
  sym_binop = 150,
  sym_relop = 151,
  aux_sym_program_repeat1 = 152,
  aux_sym_machine_body_repeat1 = 153,
  aux_sym_machine_sig_config_repeat1 = 154,
  aux_sym_model_body_repeat1 = 155,
  aux_sym_trans_steps_repeat1 = 156,
  aux_sym_trans_body_repeat1 = 157,
  aux_sym_dom_sentences_repeat1 = 158,
  aux_sym_setting_list_repeat1 = 159,
  aux_sym_model_param_list_repeat1 = 160,
  aux_sym_fields_repeat1 = 161,
  aux_sym_unnbody_repeat1 = 162,
  aux_sym_enum_list_repeat1 = 163,
  aux_sym_body_list_repeat1 = 164,
  aux_sym_body_repeat1 = 165,
  aux_sym_func_term_list_repeat1 = 166,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_boot] = "boot",
  [anon_sym_initially] = "initially",
  [anon_sym_next] = "next",
  [anon_sym_property] = "property",
  [anon_sym_EQ] = "=",
  [anon_sym_DOT] = ".",
  [anon_sym_machine] = "machine",
  [anon_sym_of] = "of",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_ensures] = "ensures",
  [anon_sym_requires] = "requires",
  [aux_sym_model_contract_token1] = "model_contract_token1",
  [anon_sym_COMMA] = ",",
  [anon_sym_is] = "is",
  [anon_sym_some] = "some",
  [anon_sym_atmost] = "atmost",
  [anon_sym_atleast] = "atleast",
  [anon_sym_includes] = "includes",
  [anon_sym_extends] = "extends",
  [anon_sym_model] = "model",
  [anon_sym_partial] = "partial",
  [anon_sym_transform] = "transform",
  [anon_sym_system] = "system",
  [anon_sym_returns] = "returns",
  [anon_sym_conforms] = "conforms",
  [anon_sym_domain] = "domain",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON] = ":",
  [anon_sym_SEMI] = ";",
  [anon_sym_at] = "at",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_AT] = "@",
  [anon_sym_COLON_COLON_EQ] = "::=",
  [anon_sym_DASH] = "-",
  [anon_sym_new] = "new",
  [anon_sym_inj] = "inj",
  [anon_sym_bij] = "bij",
  [anon_sym_sur] = "sur",
  [anon_sym_fun] = "fun",
  [anon_sym_any] = "any",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_PLUS] = "+",
  [anon_sym_DOT_DOT] = "..",
  [sym_digits] = "digits",
  [sym_real] = "real",
  [sym_frac] = "frac",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_COLON_DASH] = ":-",
  [anon_sym_PIPE] = "|",
  [anon_sym_no] = "no",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [sym_bareid] = "bareid",
  [sym_qualid] = "qualid",
  [sym_comment] = "comment",
  [sym_program] = "program",
  [sym_module] = "module",
  [sym_machine] = "machine",
  [sym_machine_body] = "machine_body",
  [sym_machine_sentence_conf] = "machine_sentence_conf",
  [sym_machine_sentence] = "machine_sentence",
  [sym_machine_prop] = "machine_prop",
  [sym_machine_sig_config] = "machine_sig_config",
  [sym_machine_sig] = "machine_sig",
  [sym_machine_sig_in] = "machine_sig_in",
  [sym_model] = "model",
  [sym_model_body] = "model_body",
  [sym_model_sentence] = "model_sentence",
  [sym_model_contract_conf] = "model_contract_conf",
  [sym_model_contract] = "model_contract",
  [sym_model_fact_list] = "model_fact_list",
  [sym_model_fact] = "model_fact",
  [sym_card_spec] = "card_spec",
  [sym_model_sig_config] = "model_sig_config",
  [sym_model_sig] = "model_sig",
  [sym_model_intro] = "model_intro",
  [sym_tsystem] = "tsystem",
  [sym_tsystem_rest] = "tsystem_rest",
  [sym_trans_steps] = "trans_steps",
  [sym_trans_step_config] = "trans_step_config",
  [sym_transform] = "transform",
  [sym_transform_rest] = "transform_rest",
  [sym_trans_body] = "trans_body",
  [sym_trans_sentence_config] = "trans_sentence_config",
  [sym_trans_sentence] = "trans_sentence",
  [sym_transform_sig_config] = "transform_sig_config",
  [sym_transform_sig] = "transform_sig",
  [sym_trans_sig_in] = "trans_sig_in",
  [sym_domain] = "domain",
  [sym_dom_sentences] = "dom_sentences",
  [sym_dom_sentence_config] = "dom_sentence_config",
  [sym_dom_sentence] = "dom_sentence",
  [sym_domain_sig_config] = "domain_sig_config",
  [sym_domain_sig] = "domain_sig",
  [sym_config] = "config",
  [sym_sentence_config] = "sentence_config",
  [sym_setting_list] = "setting_list",
  [sym_setting] = "setting",
  [sym_model_param_list] = "model_param_list",
  [sym_val_or_model_program] = "val_or_model_program",
  [sym_vom_param_list] = "vom_param_list",
  [sym_update] = "update",
  [sym_step] = "step",
  [sym_choice_list] = "choice_list",
  [sym_mod_apply] = "mod_apply",
  [sym_mod_arg_list] = "mod_arg_list",
  [sym_mod_app_arg] = "mod_app_arg",
  [sym_step_or_update_lhs] = "step_or_update_lhs",
  [sym_mod_refs] = "mod_refs",
  [sym_mod_ref] = "mod_ref",
  [sym_mod_ref_rename] = "mod_ref_rename",
  [sym_mod_ref_no_rename] = "mod_ref_no_rename",
  [sym_type_decl] = "type_decl",
  [sym_type_decl_body] = "type_decl_body",
  [sym_fun_decl] = "fun_decl",
  [sym_fields] = "fields",
  [sym_field] = "field",
  [sym_maparrow] = "maparrow",
  [sym_unnbody] = "unnbody",
  [sym_unncmp] = "unncmp",
  [sym_typeid] = "typeid",
  [sym_enum_list] = "enum_list",
  [sym_enum_cnst] = "enum_cnst",
  [sym_string] = "string",
  [sym_rule] = "rule",
  [sym_compr] = "compr",
  [sym_compr_rest] = "compr_rest",
  [sym_body_list] = "body_list",
  [sym_body] = "body",
  [sym_constraint] = "constraint",
  [sym_func_term_list] = "func_term_list",
  [sym_func_or_compr] = "func_or_compr",
  [sym_func_term] = "func_term",
  [sym_atom] = "atom",
  [sym_id] = "id",
  [sym_constant] = "constant",
  [sym_unop] = "unop",
  [sym_binop] = "binop",
  [sym_relop] = "relop",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_machine_body_repeat1] = "machine_body_repeat1",
  [aux_sym_machine_sig_config_repeat1] = "machine_sig_config_repeat1",
  [aux_sym_model_body_repeat1] = "model_body_repeat1",
  [aux_sym_trans_steps_repeat1] = "trans_steps_repeat1",
  [aux_sym_trans_body_repeat1] = "trans_body_repeat1",
  [aux_sym_dom_sentences_repeat1] = "dom_sentences_repeat1",
  [aux_sym_setting_list_repeat1] = "setting_list_repeat1",
  [aux_sym_model_param_list_repeat1] = "model_param_list_repeat1",
  [aux_sym_fields_repeat1] = "fields_repeat1",
  [aux_sym_unnbody_repeat1] = "unnbody_repeat1",
  [aux_sym_enum_list_repeat1] = "enum_list_repeat1",
  [aux_sym_body_list_repeat1] = "body_list_repeat1",
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym_func_term_list_repeat1] = "func_term_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_boot] = anon_sym_boot,
  [anon_sym_initially] = anon_sym_initially,
  [anon_sym_next] = anon_sym_next,
  [anon_sym_property] = anon_sym_property,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_machine] = anon_sym_machine,
  [anon_sym_of] = anon_sym_of,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_ensures] = anon_sym_ensures,
  [anon_sym_requires] = anon_sym_requires,
  [aux_sym_model_contract_token1] = aux_sym_model_contract_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_some] = anon_sym_some,
  [anon_sym_atmost] = anon_sym_atmost,
  [anon_sym_atleast] = anon_sym_atleast,
  [anon_sym_includes] = anon_sym_includes,
  [anon_sym_extends] = anon_sym_extends,
  [anon_sym_model] = anon_sym_model,
  [anon_sym_partial] = anon_sym_partial,
  [anon_sym_transform] = anon_sym_transform,
  [anon_sym_system] = anon_sym_system,
  [anon_sym_returns] = anon_sym_returns,
  [anon_sym_conforms] = anon_sym_conforms,
  [anon_sym_domain] = anon_sym_domain,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_at] = anon_sym_at,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_COLON_COLON_EQ] = anon_sym_COLON_COLON_EQ,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_new] = anon_sym_new,
  [anon_sym_inj] = anon_sym_inj,
  [anon_sym_bij] = anon_sym_bij,
  [anon_sym_sur] = anon_sym_sur,
  [anon_sym_fun] = anon_sym_fun,
  [anon_sym_any] = anon_sym_any,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [sym_digits] = sym_digits,
  [sym_real] = sym_real,
  [sym_frac] = sym_frac,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_COLON_DASH] = anon_sym_COLON_DASH,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_no] = anon_sym_no,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [sym_bareid] = sym_bareid,
  [sym_qualid] = sym_qualid,
  [sym_comment] = sym_comment,
  [sym_program] = sym_program,
  [sym_module] = sym_module,
  [sym_machine] = sym_machine,
  [sym_machine_body] = sym_machine_body,
  [sym_machine_sentence_conf] = sym_machine_sentence_conf,
  [sym_machine_sentence] = sym_machine_sentence,
  [sym_machine_prop] = sym_machine_prop,
  [sym_machine_sig_config] = sym_machine_sig_config,
  [sym_machine_sig] = sym_machine_sig,
  [sym_machine_sig_in] = sym_machine_sig_in,
  [sym_model] = sym_model,
  [sym_model_body] = sym_model_body,
  [sym_model_sentence] = sym_model_sentence,
  [sym_model_contract_conf] = sym_model_contract_conf,
  [sym_model_contract] = sym_model_contract,
  [sym_model_fact_list] = sym_model_fact_list,
  [sym_model_fact] = sym_model_fact,
  [sym_card_spec] = sym_card_spec,
  [sym_model_sig_config] = sym_model_sig_config,
  [sym_model_sig] = sym_model_sig,
  [sym_model_intro] = sym_model_intro,
  [sym_tsystem] = sym_tsystem,
  [sym_tsystem_rest] = sym_tsystem_rest,
  [sym_trans_steps] = sym_trans_steps,
  [sym_trans_step_config] = sym_trans_step_config,
  [sym_transform] = sym_transform,
  [sym_transform_rest] = sym_transform_rest,
  [sym_trans_body] = sym_trans_body,
  [sym_trans_sentence_config] = sym_trans_sentence_config,
  [sym_trans_sentence] = sym_trans_sentence,
  [sym_transform_sig_config] = sym_transform_sig_config,
  [sym_transform_sig] = sym_transform_sig,
  [sym_trans_sig_in] = sym_trans_sig_in,
  [sym_domain] = sym_domain,
  [sym_dom_sentences] = sym_dom_sentences,
  [sym_dom_sentence_config] = sym_dom_sentence_config,
  [sym_dom_sentence] = sym_dom_sentence,
  [sym_domain_sig_config] = sym_domain_sig_config,
  [sym_domain_sig] = sym_domain_sig,
  [sym_config] = sym_config,
  [sym_sentence_config] = sym_sentence_config,
  [sym_setting_list] = sym_setting_list,
  [sym_setting] = sym_setting,
  [sym_model_param_list] = sym_model_param_list,
  [sym_val_or_model_program] = sym_val_or_model_program,
  [sym_vom_param_list] = sym_vom_param_list,
  [sym_update] = sym_update,
  [sym_step] = sym_step,
  [sym_choice_list] = sym_choice_list,
  [sym_mod_apply] = sym_mod_apply,
  [sym_mod_arg_list] = sym_mod_arg_list,
  [sym_mod_app_arg] = sym_mod_app_arg,
  [sym_step_or_update_lhs] = sym_step_or_update_lhs,
  [sym_mod_refs] = sym_mod_refs,
  [sym_mod_ref] = sym_mod_ref,
  [sym_mod_ref_rename] = sym_mod_ref_rename,
  [sym_mod_ref_no_rename] = sym_mod_ref_no_rename,
  [sym_type_decl] = sym_type_decl,
  [sym_type_decl_body] = sym_type_decl_body,
  [sym_fun_decl] = sym_fun_decl,
  [sym_fields] = sym_fields,
  [sym_field] = sym_field,
  [sym_maparrow] = sym_maparrow,
  [sym_unnbody] = sym_unnbody,
  [sym_unncmp] = sym_unncmp,
  [sym_typeid] = sym_typeid,
  [sym_enum_list] = sym_enum_list,
  [sym_enum_cnst] = sym_enum_cnst,
  [sym_string] = sym_string,
  [sym_rule] = sym_rule,
  [sym_compr] = sym_compr,
  [sym_compr_rest] = sym_compr_rest,
  [sym_body_list] = sym_body_list,
  [sym_body] = sym_body,
  [sym_constraint] = sym_constraint,
  [sym_func_term_list] = sym_func_term_list,
  [sym_func_or_compr] = sym_func_or_compr,
  [sym_func_term] = sym_func_term,
  [sym_atom] = sym_atom,
  [sym_id] = sym_id,
  [sym_constant] = sym_constant,
  [sym_unop] = sym_unop,
  [sym_binop] = sym_binop,
  [sym_relop] = sym_relop,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_machine_body_repeat1] = aux_sym_machine_body_repeat1,
  [aux_sym_machine_sig_config_repeat1] = aux_sym_machine_sig_config_repeat1,
  [aux_sym_model_body_repeat1] = aux_sym_model_body_repeat1,
  [aux_sym_trans_steps_repeat1] = aux_sym_trans_steps_repeat1,
  [aux_sym_trans_body_repeat1] = aux_sym_trans_body_repeat1,
  [aux_sym_dom_sentences_repeat1] = aux_sym_dom_sentences_repeat1,
  [aux_sym_setting_list_repeat1] = aux_sym_setting_list_repeat1,
  [aux_sym_model_param_list_repeat1] = aux_sym_model_param_list_repeat1,
  [aux_sym_fields_repeat1] = aux_sym_fields_repeat1,
  [aux_sym_unnbody_repeat1] = aux_sym_unnbody_repeat1,
  [aux_sym_enum_list_repeat1] = aux_sym_enum_list_repeat1,
  [aux_sym_body_list_repeat1] = aux_sym_body_list_repeat1,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
  [aux_sym_func_term_list_repeat1] = aux_sym_func_term_list_repeat1,
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
  [anon_sym_boot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_initially] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_next] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_property] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_machine] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_of] = {
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
  [anon_sym_ensures] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_requires] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_model_contract_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_some] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_atmost] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_atleast] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_includes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extends] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_model] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_partial] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_transform] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_system] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_returns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_conforms] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_domain] = {
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_at] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_new] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inj] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bij] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sur] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fun] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_any] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_digits] = {
    .visible = true,
    .named = true,
  },
  [sym_real] = {
    .visible = true,
    .named = true,
  },
  [sym_frac] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no] = {
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
  [anon_sym_PERCENT] = {
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
  [sym_bareid] = {
    .visible = true,
    .named = true,
  },
  [sym_qualid] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym_machine] = {
    .visible = true,
    .named = true,
  },
  [sym_machine_body] = {
    .visible = true,
    .named = true,
  },
  [sym_machine_sentence_conf] = {
    .visible = true,
    .named = true,
  },
  [sym_machine_sentence] = {
    .visible = true,
    .named = true,
  },
  [sym_machine_prop] = {
    .visible = true,
    .named = true,
  },
  [sym_machine_sig_config] = {
    .visible = true,
    .named = true,
  },
  [sym_machine_sig] = {
    .visible = true,
    .named = true,
  },
  [sym_machine_sig_in] = {
    .visible = true,
    .named = true,
  },
  [sym_model] = {
    .visible = true,
    .named = true,
  },
  [sym_model_body] = {
    .visible = true,
    .named = true,
  },
  [sym_model_sentence] = {
    .visible = true,
    .named = true,
  },
  [sym_model_contract_conf] = {
    .visible = true,
    .named = true,
  },
  [sym_model_contract] = {
    .visible = true,
    .named = true,
  },
  [sym_model_fact_list] = {
    .visible = true,
    .named = true,
  },
  [sym_model_fact] = {
    .visible = true,
    .named = true,
  },
  [sym_card_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_model_sig_config] = {
    .visible = true,
    .named = true,
  },
  [sym_model_sig] = {
    .visible = true,
    .named = true,
  },
  [sym_model_intro] = {
    .visible = true,
    .named = true,
  },
  [sym_tsystem] = {
    .visible = true,
    .named = true,
  },
  [sym_tsystem_rest] = {
    .visible = true,
    .named = true,
  },
  [sym_trans_steps] = {
    .visible = true,
    .named = true,
  },
  [sym_trans_step_config] = {
    .visible = true,
    .named = true,
  },
  [sym_transform] = {
    .visible = true,
    .named = true,
  },
  [sym_transform_rest] = {
    .visible = true,
    .named = true,
  },
  [sym_trans_body] = {
    .visible = true,
    .named = true,
  },
  [sym_trans_sentence_config] = {
    .visible = true,
    .named = true,
  },
  [sym_trans_sentence] = {
    .visible = true,
    .named = true,
  },
  [sym_transform_sig_config] = {
    .visible = true,
    .named = true,
  },
  [sym_transform_sig] = {
    .visible = true,
    .named = true,
  },
  [sym_trans_sig_in] = {
    .visible = true,
    .named = true,
  },
  [sym_domain] = {
    .visible = true,
    .named = true,
  },
  [sym_dom_sentences] = {
    .visible = true,
    .named = true,
  },
  [sym_dom_sentence_config] = {
    .visible = true,
    .named = true,
  },
  [sym_dom_sentence] = {
    .visible = true,
    .named = true,
  },
  [sym_domain_sig_config] = {
    .visible = true,
    .named = true,
  },
  [sym_domain_sig] = {
    .visible = true,
    .named = true,
  },
  [sym_config] = {
    .visible = true,
    .named = true,
  },
  [sym_sentence_config] = {
    .visible = true,
    .named = true,
  },
  [sym_setting_list] = {
    .visible = true,
    .named = true,
  },
  [sym_setting] = {
    .visible = true,
    .named = true,
  },
  [sym_model_param_list] = {
    .visible = true,
    .named = true,
  },
  [sym_val_or_model_program] = {
    .visible = true,
    .named = true,
  },
  [sym_vom_param_list] = {
    .visible = true,
    .named = true,
  },
  [sym_update] = {
    .visible = true,
    .named = true,
  },
  [sym_step] = {
    .visible = true,
    .named = true,
  },
  [sym_choice_list] = {
    .visible = true,
    .named = true,
  },
  [sym_mod_apply] = {
    .visible = true,
    .named = true,
  },
  [sym_mod_arg_list] = {
    .visible = true,
    .named = true,
  },
  [sym_mod_app_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_step_or_update_lhs] = {
    .visible = true,
    .named = true,
  },
  [sym_mod_refs] = {
    .visible = true,
    .named = true,
  },
  [sym_mod_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_mod_ref_rename] = {
    .visible = true,
    .named = true,
  },
  [sym_mod_ref_no_rename] = {
    .visible = true,
    .named = true,
  },
  [sym_type_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_type_decl_body] = {
    .visible = true,
    .named = true,
  },
  [sym_fun_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_fields] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_maparrow] = {
    .visible = true,
    .named = true,
  },
  [sym_unnbody] = {
    .visible = true,
    .named = true,
  },
  [sym_unncmp] = {
    .visible = true,
    .named = true,
  },
  [sym_typeid] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_list] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_cnst] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_compr] = {
    .visible = true,
    .named = true,
  },
  [sym_compr_rest] = {
    .visible = true,
    .named = true,
  },
  [sym_body_list] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_func_term_list] = {
    .visible = true,
    .named = true,
  },
  [sym_func_or_compr] = {
    .visible = true,
    .named = true,
  },
  [sym_func_term] = {
    .visible = true,
    .named = true,
  },
  [sym_atom] = {
    .visible = true,
    .named = true,
  },
  [sym_id] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_unop] = {
    .visible = true,
    .named = true,
  },
  [sym_binop] = {
    .visible = true,
    .named = true,
  },
  [sym_relop] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_machine_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_machine_sig_config_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_model_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_trans_steps_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_trans_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dom_sentences_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_model_param_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fields_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unnbody_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_body_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_func_term_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_name = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 0},
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
  [15] = 11,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 27,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 20,
  [48] = 48,
  [49] = 49,
  [50] = 31,
  [51] = 49,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 55,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 54,
  [62] = 58,
  [63] = 63,
  [64] = 44,
  [65] = 39,
  [66] = 35,
  [67] = 38,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 68,
  [74] = 46,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 72,
  [85] = 85,
  [86] = 42,
  [87] = 87,
  [88] = 41,
  [89] = 89,
  [90] = 90,
  [91] = 48,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 96,
  [103] = 98,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 96,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 129,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 181,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 177,
  [187] = 181,
  [188] = 188,
  [189] = 189,
  [190] = 181,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 165,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 96,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 251,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 324,
  [342] = 342,
  [343] = 335,
  [344] = 326,
  [345] = 307,
  [346] = 299,
  [347] = 303,
  [348] = 324,
  [349] = 324,
  [350] = 350,
  [351] = 351,
  [352] = 280,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 312,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(163);
      if (lookahead == '!') ADVANCE(40);
      if (lookahead == '"') ADVANCE(238);
      if (lookahead == '%') ADVANCE(251);
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == ')') ADVANCE(177);
      if (lookahead == '*') ADVANCE(249);
      if (lookahead == '+') ADVANCE(232);
      if (lookahead == ',') ADVANCE(183);
      if (lookahead == '-') ADVANCE(217);
      if (lookahead == '.') ADVANCE(173);
      if (lookahead == '/') ADVANCE(250);
      if (lookahead == ':') ADVANCE(207);
      if (lookahead == ';') ADVANCE(209);
      if (lookahead == '<') ADVANCE(253);
      if (lookahead == '=') ADVANCE(171);
      if (lookahead == '>') ADVANCE(255);
      if (lookahead == '@') ADVANCE(214);
      if (lookahead == '[') ADVANCE(204);
      if (lookahead == ']') ADVANCE(205);
      if (lookahead == 'a') ADVANCE(94);
      if (lookahead == 'b') ADVANCE(77);
      if (lookahead == 'c') ADVANCE(105);
      if (lookahead == 'd') ADVANCE(182);
      if (lookahead == 'e') ADVANCE(95);
      if (lookahead == 'f') ADVANCE(145);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'm') ADVANCE(47);
      if (lookahead == 'n') ADVANCE(61);
      if (lookahead == 'o') ADVANCE(73);
      if (lookahead == 'p') ADVANCE(49);
      if (lookahead == 'r') ADVANCE(62);
      if (lookahead == 's') ADVANCE(106);
      if (lookahead == 't') ADVANCE(115);
      if (lookahead == '{') ADVANCE(164);
      if (lookahead == '|') ADVANCE(246);
      if (lookahead == '}') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '*') ADVANCE(241);
      if (lookahead != 0) ADVANCE(240);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(330);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '.') ADVANCE(32);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'D') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'I') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '.') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == ']') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == '\'') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == '\'') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == '"') ADVANCE(238);
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == ',') ADVANCE(183);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == ':') ADVANCE(208);
      if (lookahead == '[') ADVANCE(204);
      if (lookahead == 'e') ADVANCE(274);
      if (lookahead == 'r') ADVANCE(260);
      if (lookahead == '{') ADVANCE(164);
      if (lookahead == '}') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == '"') ADVANCE(238);
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '%') ADVANCE(160);
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == ',') ADVANCE(183);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == ':') ADVANCE(208);
      if (lookahead == '[') ADVANCE(204);
      if (lookahead == 'e') ADVANCE(274);
      if (lookahead == 'r') ADVANCE(260);
      if (lookahead == '{') ADVANCE(164);
      if (lookahead == '}') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == '"') ADVANCE(238);
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == '[') ADVANCE(204);
      if (lookahead == 'c') ADVANCE(280);
      if (lookahead == '{') ADVANCE(164);
      if (lookahead == '}') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == '"') ADVANCE(238);
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '%') ADVANCE(160);
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == '[') ADVANCE(204);
      if (lookahead == 'c') ADVANCE(280);
      if (lookahead == '{') ADVANCE(164);
      if (lookahead == '}') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '"') ADVANCE(238);
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == '[') ADVANCE(204);
      if (lookahead == 'e') ADVANCE(274);
      if (lookahead == 'n') ADVANCE(279);
      if (lookahead == 'r') ADVANCE(260);
      if (lookahead == '{') ADVANCE(164);
      if (lookahead == '}') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '"') ADVANCE(238);
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '%') ADVANCE(160);
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == '[') ADVANCE(204);
      if (lookahead == 'e') ADVANCE(274);
      if (lookahead == 'n') ADVANCE(279);
      if (lookahead == 'r') ADVANCE(260);
      if (lookahead == '{') ADVANCE(164);
      if (lookahead == '}') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == '"') ADVANCE(238);
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == 'a') ADVANCE(295);
      if (lookahead == 'n') ADVANCE(279);
      if (lookahead == 's') ADVANCE(282);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == '"') ADVANCE(238);
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '%') ADVANCE(160);
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == 'a') ADVANCE(295);
      if (lookahead == 'n') ADVANCE(279);
      if (lookahead == 's') ADVANCE(282);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '"') ADVANCE(238);
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == '[') ADVANCE(204);
      if (lookahead == 'c') ADVANCE(280);
      if (lookahead == 'n') ADVANCE(279);
      if (lookahead == '{') ADVANCE(164);
      if (lookahead == '}') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '"') ADVANCE(238);
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '%') ADVANCE(160);
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == '[') ADVANCE(204);
      if (lookahead == 'c') ADVANCE(280);
      if (lookahead == 'n') ADVANCE(279);
      if (lookahead == '{') ADVANCE(164);
      if (lookahead == '}') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '"') ADVANCE(238);
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == ')') ADVANCE(177);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == '[') ADVANCE(204);
      if (lookahead == '{') ADVANCE(164);
      if (lookahead == '}') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '"') ADVANCE(238);
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '%') ADVANCE(160);
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == ')') ADVANCE(177);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == '[') ADVANCE(204);
      if (lookahead == '{') ADVANCE(164);
      if (lookahead == '}') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '"') ADVANCE(238);
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == 'n') ADVANCE(279);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(22)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '"') ADVANCE(238);
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '%') ADVANCE(160);
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == 'n') ADVANCE(279);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(22)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == 'b') ADVANCE(267);
      if (lookahead == 'f') ADVANCE(301);
      if (lookahead == 'i') ADVANCE(278);
      if (lookahead == 'n') ADVANCE(263);
      if (lookahead == 's') ADVANCE(300);
      if (lookahead == '{') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '%') ADVANCE(160);
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == 'b') ADVANCE(267);
      if (lookahead == 'f') ADVANCE(301);
      if (lookahead == 'i') ADVANCE(278);
      if (lookahead == 'n') ADVANCE(263);
      if (lookahead == 's') ADVANCE(300);
      if (lookahead == '{') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(27);
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == ')') ADVANCE(177);
      if (lookahead == '+') ADVANCE(232);
      if (lookahead == ',') ADVANCE(183);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == 'a') ADVANCE(277);
      if (lookahead == '{') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(26)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(27);
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '%') ADVANCE(160);
      if (lookahead == ')') ADVANCE(177);
      if (lookahead == '+') ADVANCE(232);
      if (lookahead == ',') ADVANCE(183);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == 'a') ADVANCE(277);
      if (lookahead == '{') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(26)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 28:
      if (lookahead == '!') ADVANCE(40);
      if (lookahead == '%') ADVANCE(251);
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == '*') ADVANCE(249);
      if (lookahead == '+') ADVANCE(232);
      if (lookahead == ',') ADVANCE(183);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == '/') ADVANCE(250);
      if (lookahead == ':') ADVANCE(208);
      if (lookahead == ';') ADVANCE(209);
      if (lookahead == '<') ADVANCE(253);
      if (lookahead == '=') ADVANCE(170);
      if (lookahead == '>') ADVANCE(255);
      if (lookahead == '@') ADVANCE(214);
      if (lookahead == '[') ADVANCE(204);
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead == 'i') ADVANCE(100);
      if (lookahead == 'm') ADVANCE(46);
      if (lookahead == '{') ADVANCE(164);
      if (lookahead == '}') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == ')') ADVANCE(177);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == '[') ADVANCE(204);
      if (lookahead == '{') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == '[') ADVANCE(204);
      if (lookahead == 'e') ADVANCE(325);
      if (lookahead == 'i') ADVANCE(317);
      if (lookahead == '{') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == 's') ADVANCE(326);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(158);
      if (lookahead == 'S') ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 33:
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '/') ADVANCE(334);
      END_STATE();
    case 34:
      if (lookahead == '*') ADVANCE(37);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(245);
      if (lookahead == ':') ADVANCE(41);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(233);
      END_STATE();
    case 37:
      if (lookahead == '/') ADVANCE(333);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 38:
      if (lookahead == '0') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(39);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(237);
      END_STATE();
    case 39:
      if (lookahead == '0') ADVANCE(39);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(237);
      END_STATE();
    case 40:
      if (lookahead == '=') ADVANCE(252);
      END_STATE();
    case 41:
      if (lookahead == '=') ADVANCE(215);
      END_STATE();
    case 42:
      if (lookahead == '>') ADVANCE(230);
      END_STATE();
    case 43:
      if (lookahead == '>') ADVANCE(231);
      END_STATE();
    case 44:
      if (lookahead == ']') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 45:
      if (lookahead == ']') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(123);
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(87);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(87);
      if (lookahead == 'i') ADVANCE(136);
      if (lookahead == 'j') ADVANCE(220);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(76);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(67);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(125);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(70);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(150);
      if (lookahead == 'o') ADVANCE(247);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 73:
      if (lookahead == 'f') ADVANCE(175);
      END_STATE();
    case 74:
      if (lookahead == 'f') ADVANCE(111);
      END_STATE();
    case 75:
      if (lookahead == 'f') ADVANCE(112);
      END_STATE();
    case 76:
      if (lookahead == 'h') ADVANCE(79);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(83);
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 83:
      if (lookahead == 'j') ADVANCE(222);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(195);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(196);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(154);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(149);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 89:
      if (lookahead == 'm') ADVANCE(198);
      END_STATE();
    case 90:
      if (lookahead == 'm') ADVANCE(197);
      END_STATE();
    case 91:
      if (lookahead == 'm') ADVANCE(63);
      END_STATE();
    case 92:
      if (lookahead == 'm') ADVANCE(53);
      END_STATE();
    case 93:
      if (lookahead == 'm') ADVANCE(127);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(152);
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(130);
      if (lookahead == 'x') ADVANCE(142);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead == 's') ADVANCE(184);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(226);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(55);
      if (lookahead == 's') ADVANCE(184);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(91);
      if (lookahead == 'u') ADVANCE(116);
      if (lookahead == 'y') ADVANCE(133);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 113:
      if (lookahead == 'p') ADVANCE(72);
      END_STATE();
    case 114:
      if (lookahead == 'q') ADVANCE(146);
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 124:
      if (lookahead == 's') ADVANCE(178);
      END_STATE();
    case 125:
      if (lookahead == 's') ADVANCE(193);
      END_STATE();
    case 126:
      if (lookahead == 's') ADVANCE(200);
      END_STATE();
    case 127:
      if (lookahead == 's') ADVANCE(201);
      END_STATE();
    case 128:
      if (lookahead == 's') ADVANCE(191);
      END_STATE();
    case 129:
      if (lookahead == 's') ADVANCE(180);
      END_STATE();
    case 130:
      if (lookahead == 's') ADVANCE(147);
      END_STATE();
    case 131:
      if (lookahead == 's') ADVANCE(138);
      END_STATE();
    case 132:
      if (lookahead == 's') ADVANCE(139);
      END_STATE();
    case 133:
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 134:
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(187);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(189);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(210);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 145:
      if (lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 146:
      if (lookahead == 'u') ADVANCE(82);
      END_STATE();
    case 147:
      if (lookahead == 'u') ADVANCE(120);
      END_STATE();
    case 148:
      if (lookahead == 'u') ADVANCE(121);
      END_STATE();
    case 149:
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 150:
      if (lookahead == 'w') ADVANCE(218);
      if (lookahead == 'x') ADVANCE(137);
      END_STATE();
    case 151:
      if (lookahead == 'x') ADVANCE(142);
      END_STATE();
    case 152:
      if (lookahead == 'y') ADVANCE(228);
      END_STATE();
    case 153:
      if (lookahead == 'y') ADVANCE(169);
      END_STATE();
    case 154:
      if (lookahead == 'y') ADVANCE(167);
      END_STATE();
    case 155:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      END_STATE();
    case 156:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 157:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 158:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 159:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 160:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 161:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(244);
      END_STATE();
    case 162:
      if (eof) ADVANCE(163);
      if (lookahead == '%') ADVANCE(251);
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == ')') ADVANCE(177);
      if (lookahead == '*') ADVANCE(249);
      if (lookahead == '+') ADVANCE(232);
      if (lookahead == ',') ADVANCE(183);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == '/') ADVANCE(250);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == ';') ADVANCE(209);
      if (lookahead == '=') ADVANCE(170);
      if (lookahead == '[') ADVANCE(204);
      if (lookahead == ']') ADVANCE(205);
      if (lookahead == 'a') ADVANCE(140);
      if (lookahead == 'd') ADVANCE(110);
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead == 'i') ADVANCE(100);
      if (lookahead == 'm') ADVANCE(47);
      if (lookahead == 'p') ADVANCE(48);
      if (lookahead == 't') ADVANCE(115);
      if (lookahead == '{') ADVANCE(164);
      if (lookahead == '|') ADVANCE(246);
      if (lookahead == '}') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(162)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_boot);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_initially);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_next);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_property);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(231);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(233);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_machine);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_ensures);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_ensures);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '.') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_requires);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_requires);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '.') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_model_contract_token1);
      if (lookahead == 'd') ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_some);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_some);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '.') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_atmost);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_atmost);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '.') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_atleast);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_atleast);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '.') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_includes);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_includes);
      if (lookahead == '\'') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_extends);
      if (lookahead == '\'') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_model);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_partial);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_transform);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_system);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_system);
      if (lookahead == '\'') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_returns);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_conforms);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_conforms);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '.') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_domain);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(213);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(212);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_at);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_at);
      if (lookahead == 'l') ADVANCE(66);
      if (lookahead == 'm') ADVANCE(109);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead == '=') ADVANCE(215);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_EQ);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(230);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '.') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_inj);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_inj);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '.') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_bij);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_bij);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '.') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_sur);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_sur);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '.') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_fun);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_fun);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '.') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_any);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_any);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '.') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_digits);
      if (lookahead == '.') ADVANCE(155);
      if (lookahead == '/') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_digits);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_real);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_frac);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(244);
      if (lookahead == '"') ADVANCE(334);
      if (lookahead == '\\') ADVANCE(335);
      if (lookahead != 0) ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '*') ADVANCE(241);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(240);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '/') ADVANCE(244);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(240);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(240);
      if (lookahead == '/') ADVANCE(239);
      if (lookahead == '\\') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(244);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(242);
      if (lookahead == '\\') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(244);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '.') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '/') ADVANCE(334);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(254);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(256);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_bareid);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '.') ADVANCE(32);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'a') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'f') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'j') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'j') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'l') ADVANCE(261);
      if (lookahead == 'm') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'm') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'm') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'n') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'n') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'n') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'n') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'n') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'q') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'r') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'r') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'r') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'r') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 's') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 's') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 's') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 's') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 's') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 's') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 't') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 't') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 't') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'u') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'u') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'u') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'u') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'w') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'y') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '.') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(307);
      if (lookahead == ']') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(308);
      if (lookahead == 'c') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(308);
      if (lookahead == 'd') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(308);
      if (lookahead == 'd') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(308);
      if (lookahead == 'e') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(308);
      if (lookahead == 'e') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(308);
      if (lookahead == 'e') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(308);
      if (lookahead == 'l') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(308);
      if (lookahead == 'm') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(308);
      if (lookahead == 'n') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(308);
      if (lookahead == 'n') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(308);
      if (lookahead == 's') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(308);
      if (lookahead == 's') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(308);
      if (lookahead == 's') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(308);
      if (lookahead == 't') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(308);
      if (lookahead == 't') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(308);
      if (lookahead == 'u') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(308);
      if (lookahead == 'x') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(308);
      if (lookahead == 'y') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(328);
      if (lookahead == '.') ADVANCE(159);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(328);
      if (lookahead == '.') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_qualid);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_qualid);
      if (lookahead == '\'') ADVANCE(331);
      if (lookahead == '.') ADVANCE(159);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_qualid);
      if (lookahead == '\'') ADVANCE(331);
      if (lookahead == '.') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(239);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 162},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 12},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 12},
  [7] = {.lex_state = 12},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 14},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 16},
  [14] = {.lex_state = 12},
  [15] = {.lex_state = 18},
  [16] = {.lex_state = 162},
  [17] = {.lex_state = 162},
  [18] = {.lex_state = 162},
  [19] = {.lex_state = 162},
  [20] = {.lex_state = 162},
  [21] = {.lex_state = 28},
  [22] = {.lex_state = 20},
  [23] = {.lex_state = 28},
  [24] = {.lex_state = 20},
  [25] = {.lex_state = 22},
  [26] = {.lex_state = 20},
  [27] = {.lex_state = 20},
  [28] = {.lex_state = 22},
  [29] = {.lex_state = 22},
  [30] = {.lex_state = 22},
  [31] = {.lex_state = 28},
  [32] = {.lex_state = 20},
  [33] = {.lex_state = 10},
  [34] = {.lex_state = 20},
  [35] = {.lex_state = 28},
  [36] = {.lex_state = 20},
  [37] = {.lex_state = 22},
  [38] = {.lex_state = 28},
  [39] = {.lex_state = 28},
  [40] = {.lex_state = 20},
  [41] = {.lex_state = 28},
  [42] = {.lex_state = 28},
  [43] = {.lex_state = 20},
  [44] = {.lex_state = 28},
  [45] = {.lex_state = 22},
  [46] = {.lex_state = 28},
  [47] = {.lex_state = 28},
  [48] = {.lex_state = 28},
  [49] = {.lex_state = 24},
  [50] = {.lex_state = 162},
  [51] = {.lex_state = 24},
  [52] = {.lex_state = 20},
  [53] = {.lex_state = 20},
  [54] = {.lex_state = 20},
  [55] = {.lex_state = 20},
  [56] = {.lex_state = 20},
  [57] = {.lex_state = 20},
  [58] = {.lex_state = 20},
  [59] = {.lex_state = 20},
  [60] = {.lex_state = 20},
  [61] = {.lex_state = 20},
  [62] = {.lex_state = 20},
  [63] = {.lex_state = 10},
  [64] = {.lex_state = 162},
  [65] = {.lex_state = 162},
  [66] = {.lex_state = 162},
  [67] = {.lex_state = 162},
  [68] = {.lex_state = 10},
  [69] = {.lex_state = 10},
  [70] = {.lex_state = 10},
  [71] = {.lex_state = 10},
  [72] = {.lex_state = 10},
  [73] = {.lex_state = 12},
  [74] = {.lex_state = 162},
  [75] = {.lex_state = 12},
  [76] = {.lex_state = 12},
  [77] = {.lex_state = 10},
  [78] = {.lex_state = 12},
  [79] = {.lex_state = 10},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 10},
  [82] = {.lex_state = 10},
  [83] = {.lex_state = 10},
  [84] = {.lex_state = 12},
  [85] = {.lex_state = 10},
  [86] = {.lex_state = 162},
  [87] = {.lex_state = 10},
  [88] = {.lex_state = 162},
  [89] = {.lex_state = 10},
  [90] = {.lex_state = 12},
  [91] = {.lex_state = 162},
  [92] = {.lex_state = 162},
  [93] = {.lex_state = 20},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 162},
  [96] = {.lex_state = 10},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 162},
  [99] = {.lex_state = 162},
  [100] = {.lex_state = 20},
  [101] = {.lex_state = 162},
  [102] = {.lex_state = 12},
  [103] = {.lex_state = 162},
  [104] = {.lex_state = 20},
  [105] = {.lex_state = 162},
  [106] = {.lex_state = 20},
  [107] = {.lex_state = 28},
  [108] = {.lex_state = 162},
  [109] = {.lex_state = 162},
  [110] = {.lex_state = 26},
  [111] = {.lex_state = 26},
  [112] = {.lex_state = 26},
  [113] = {.lex_state = 30},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 26},
  [116] = {.lex_state = 162},
  [117] = {.lex_state = 20},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 162},
  [120] = {.lex_state = 20},
  [121] = {.lex_state = 20},
  [122] = {.lex_state = 162},
  [123] = {.lex_state = 20},
  [124] = {.lex_state = 26},
  [125] = {.lex_state = 20},
  [126] = {.lex_state = 162},
  [127] = {.lex_state = 162},
  [128] = {.lex_state = 162},
  [129] = {.lex_state = 162},
  [130] = {.lex_state = 26},
  [131] = {.lex_state = 162},
  [132] = {.lex_state = 162},
  [133] = {.lex_state = 26},
  [134] = {.lex_state = 162},
  [135] = {.lex_state = 29},
  [136] = {.lex_state = 26},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 162},
  [139] = {.lex_state = 162},
  [140] = {.lex_state = 162},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 26},
  [143] = {.lex_state = 162},
  [144] = {.lex_state = 26},
  [145] = {.lex_state = 162},
  [146] = {.lex_state = 162},
  [147] = {.lex_state = 162},
  [148] = {.lex_state = 162},
  [149] = {.lex_state = 162},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 20},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 162},
  [155] = {.lex_state = 162},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 162},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 162},
  [160] = {.lex_state = 29},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 26},
  [163] = {.lex_state = 29},
  [164] = {.lex_state = 26},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 162},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 162},
  [169] = {.lex_state = 26},
  [170] = {.lex_state = 162},
  [171] = {.lex_state = 162},
  [172] = {.lex_state = 162},
  [173] = {.lex_state = 20},
  [174] = {.lex_state = 26},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 20},
  [177] = {.lex_state = 29},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 20},
  [180] = {.lex_state = 20},
  [181] = {.lex_state = 20},
  [182] = {.lex_state = 20},
  [183] = {.lex_state = 20},
  [184] = {.lex_state = 29},
  [185] = {.lex_state = 26},
  [186] = {.lex_state = 29},
  [187] = {.lex_state = 20},
  [188] = {.lex_state = 20},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 20},
  [191] = {.lex_state = 162},
  [192] = {.lex_state = 162},
  [193] = {.lex_state = 29},
  [194] = {.lex_state = 162},
  [195] = {.lex_state = 29},
  [196] = {.lex_state = 29},
  [197] = {.lex_state = 26},
  [198] = {.lex_state = 20},
  [199] = {.lex_state = 29},
  [200] = {.lex_state = 26},
  [201] = {.lex_state = 162},
  [202] = {.lex_state = 29},
  [203] = {.lex_state = 29},
  [204] = {.lex_state = 26},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 26},
  [208] = {.lex_state = 162},
  [209] = {.lex_state = 26},
  [210] = {.lex_state = 26},
  [211] = {.lex_state = 20},
  [212] = {.lex_state = 162},
  [213] = {.lex_state = 26},
  [214] = {.lex_state = 29},
  [215] = {.lex_state = 162},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 20},
  [219] = {.lex_state = 162},
  [220] = {.lex_state = 26},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 20},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 20},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 20},
  [227] = {.lex_state = 20},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 26},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 10},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 162},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 29},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 162},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 31},
  [250] = {.lex_state = 162},
  [251] = {.lex_state = 162},
  [252] = {.lex_state = 162},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 162},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 162},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 10},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 162},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 162},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 29},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 29},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 243},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 10},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 162},
  [289] = {.lex_state = 162},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 162},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 29},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 162},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 162},
  [303] = {.lex_state = 162},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 162},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 162},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 162},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 162},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 162},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 162},
  [321] = {.lex_state = 162},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 162},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 29},
  [328] = {.lex_state = 29},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 162},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 162},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 29},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 162},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 162},
  [346] = {.lex_state = 162},
  [347] = {.lex_state = 162},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 29},
  [352] = {.lex_state = 243},
  [353] = {.lex_state = 162},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 162},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 29},
  [359] = {.lex_state = 162},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_boot] = ACTIONS(1),
    [anon_sym_initially] = ACTIONS(1),
    [anon_sym_next] = ACTIONS(1),
    [anon_sym_property] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_machine] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_ensures] = ACTIONS(1),
    [anon_sym_requires] = ACTIONS(1),
    [aux_sym_model_contract_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_some] = ACTIONS(1),
    [anon_sym_atmost] = ACTIONS(1),
    [anon_sym_atleast] = ACTIONS(1),
    [anon_sym_includes] = ACTIONS(1),
    [anon_sym_extends] = ACTIONS(1),
    [anon_sym_model] = ACTIONS(1),
    [anon_sym_partial] = ACTIONS(1),
    [anon_sym_transform] = ACTIONS(1),
    [anon_sym_system] = ACTIONS(1),
    [anon_sym_returns] = ACTIONS(1),
    [anon_sym_conforms] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_at] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_inj] = ACTIONS(1),
    [anon_sym_bij] = ACTIONS(1),
    [anon_sym_sur] = ACTIONS(1),
    [anon_sym_fun] = ACTIONS(1),
    [anon_sym_any] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [sym_digits] = ACTIONS(1),
    [sym_real] = ACTIONS(1),
    [sym_frac] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_no] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_program] = STATE(339),
    [sym_module] = STATE(17),
    [sym_machine] = STATE(155),
    [sym_machine_sig_config] = STATE(338),
    [sym_machine_sig] = STATE(205),
    [sym_model] = STATE(155),
    [sym_model_sig_config] = STATE(336),
    [sym_model_sig] = STATE(235),
    [sym_model_intro] = STATE(217),
    [sym_tsystem] = STATE(155),
    [sym_transform] = STATE(155),
    [sym_domain] = STATE(155),
    [sym_domain_sig_config] = STATE(333),
    [sym_domain_sig] = STATE(245),
    [sym_config] = STATE(16),
    [aux_sym_program_repeat1] = STATE(17),
    [aux_sym_machine_sig_config_repeat1] = STATE(205),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_machine] = ACTIONS(7),
    [anon_sym_model] = ACTIONS(9),
    [anon_sym_partial] = ACTIONS(11),
    [anon_sym_transform] = ACTIONS(13),
    [anon_sym_domain] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      sym_digits,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_bareid,
    ACTIONS(39), 1,
      sym_qualid,
    STATE(12), 1,
      sym_sentence_config,
    STATE(62), 1,
      sym_unop,
    STATE(64), 1,
      sym_string,
    STATE(66), 1,
      sym_id,
    STATE(70), 1,
      sym_trans_sentence,
    STATE(86), 1,
      sym_atom,
    STATE(88), 1,
      sym_constant,
    STATE(92), 1,
      sym_func_term,
    STATE(132), 1,
      sym_func_or_compr,
    STATE(148), 1,
      sym_compr,
    STATE(251), 1,
      sym_func_term_list,
    STATE(337), 1,
      sym_trans_body,
    ACTIONS(25), 2,
      anon_sym_ensures,
      anon_sym_requires,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    STATE(4), 2,
      sym_trans_sentence_config,
      aux_sym_trans_body_repeat1,
    STATE(69), 2,
      sym_type_decl,
      sym_rule,
  [83] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      sym_digits,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(43), 1,
      anon_sym_conforms,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      sym_bareid,
    STATE(14), 1,
      sym_sentence_config,
    STATE(62), 1,
      sym_unop,
    STATE(64), 1,
      sym_string,
    STATE(66), 1,
      sym_id,
    STATE(78), 1,
      sym_dom_sentence,
    STATE(86), 1,
      sym_atom,
    STATE(88), 1,
      sym_constant,
    STATE(92), 1,
      sym_func_term,
    STATE(132), 1,
      sym_func_or_compr,
    STATE(148), 1,
      sym_compr,
    STATE(264), 1,
      sym_func_term_list,
    STATE(318), 1,
      sym_dom_sentences,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    STATE(7), 2,
      sym_dom_sentence_config,
      aux_sym_dom_sentences_repeat1,
    STATE(75), 2,
      sym_type_decl,
      sym_rule,
  [165] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      sym_digits,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_bareid,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      sym_sentence_config,
    STATE(62), 1,
      sym_unop,
    STATE(64), 1,
      sym_string,
    STATE(66), 1,
      sym_id,
    STATE(70), 1,
      sym_trans_sentence,
    STATE(86), 1,
      sym_atom,
    STATE(88), 1,
      sym_constant,
    STATE(92), 1,
      sym_func_term,
    STATE(132), 1,
      sym_func_or_compr,
    STATE(148), 1,
      sym_compr,
    STATE(251), 1,
      sym_func_term_list,
    ACTIONS(25), 2,
      anon_sym_ensures,
      anon_sym_requires,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    STATE(5), 2,
      sym_trans_sentence_config,
      aux_sym_trans_body_repeat1,
    STATE(69), 2,
      sym_type_decl,
      sym_rule,
  [245] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(54), 1,
      anon_sym_RBRACE,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    ACTIONS(62), 1,
      anon_sym_LBRACK,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(68), 1,
      sym_digits,
    ACTIONS(74), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      sym_bareid,
    ACTIONS(80), 1,
      sym_qualid,
    STATE(12), 1,
      sym_sentence_config,
    STATE(62), 1,
      sym_unop,
    STATE(64), 1,
      sym_string,
    STATE(66), 1,
      sym_id,
    STATE(70), 1,
      sym_trans_sentence,
    STATE(86), 1,
      sym_atom,
    STATE(88), 1,
      sym_constant,
    STATE(92), 1,
      sym_func_term,
    STATE(132), 1,
      sym_func_or_compr,
    STATE(148), 1,
      sym_compr,
    STATE(251), 1,
      sym_func_term_list,
    ACTIONS(59), 2,
      anon_sym_ensures,
      anon_sym_requires,
    ACTIONS(71), 2,
      sym_real,
      sym_frac,
    STATE(5), 2,
      sym_trans_sentence_config,
      aux_sym_trans_body_repeat1,
    STATE(69), 2,
      sym_type_decl,
      sym_rule,
  [325] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_conforms,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
    ACTIONS(97), 1,
      anon_sym_DASH,
    ACTIONS(100), 1,
      sym_digits,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      sym_bareid,
    ACTIONS(112), 1,
      sym_qualid,
    STATE(14), 1,
      sym_sentence_config,
    STATE(62), 1,
      sym_unop,
    STATE(64), 1,
      sym_string,
    STATE(66), 1,
      sym_id,
    STATE(78), 1,
      sym_dom_sentence,
    STATE(86), 1,
      sym_atom,
    STATE(88), 1,
      sym_constant,
    STATE(92), 1,
      sym_func_term,
    STATE(132), 1,
      sym_func_or_compr,
    STATE(148), 1,
      sym_compr,
    STATE(264), 1,
      sym_func_term_list,
    ACTIONS(103), 2,
      sym_real,
      sym_frac,
    STATE(6), 2,
      sym_dom_sentence_config,
      aux_sym_dom_sentences_repeat1,
    STATE(75), 2,
      sym_type_decl,
      sym_rule,
  [404] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      sym_digits,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(43), 1,
      anon_sym_conforms,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      sym_bareid,
    ACTIONS(115), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      sym_sentence_config,
    STATE(62), 1,
      sym_unop,
    STATE(64), 1,
      sym_string,
    STATE(66), 1,
      sym_id,
    STATE(78), 1,
      sym_dom_sentence,
    STATE(86), 1,
      sym_atom,
    STATE(88), 1,
      sym_constant,
    STATE(92), 1,
      sym_func_term,
    STATE(132), 1,
      sym_func_or_compr,
    STATE(148), 1,
      sym_compr,
    STATE(264), 1,
      sym_func_term_list,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    STATE(6), 2,
      sym_dom_sentence_config,
      aux_sym_dom_sentences_repeat1,
    STATE(75), 2,
      sym_type_decl,
      sym_rule,
  [483] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      sym_digits,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    ACTIONS(119), 1,
      anon_sym_ensures,
    ACTIONS(121), 1,
      anon_sym_requires,
    ACTIONS(123), 1,
      sym_bareid,
    STATE(33), 1,
      sym_sentence_config,
    STATE(62), 1,
      sym_unop,
    STATE(64), 1,
      sym_string,
    STATE(66), 1,
      sym_id,
    STATE(83), 1,
      sym_model_contract,
    STATE(86), 1,
      sym_atom,
    STATE(88), 1,
      sym_constant,
    STATE(122), 1,
      sym_func_term,
    STATE(267), 1,
      sym_model_fact,
    STATE(279), 1,
      sym_model_body,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    STATE(10), 2,
      sym_model_sentence,
      aux_sym_model_body_repeat1,
    STATE(82), 2,
      sym_model_contract_conf,
      sym_model_fact_list,
  [559] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_RBRACE,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(130), 1,
      anon_sym_ensures,
    ACTIONS(133), 1,
      anon_sym_requires,
    ACTIONS(136), 1,
      anon_sym_LBRACK,
    ACTIONS(139), 1,
      anon_sym_DASH,
    ACTIONS(142), 1,
      sym_digits,
    ACTIONS(148), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      sym_bareid,
    ACTIONS(154), 1,
      sym_qualid,
    STATE(33), 1,
      sym_sentence_config,
    STATE(62), 1,
      sym_unop,
    STATE(64), 1,
      sym_string,
    STATE(66), 1,
      sym_id,
    STATE(83), 1,
      sym_model_contract,
    STATE(86), 1,
      sym_atom,
    STATE(88), 1,
      sym_constant,
    STATE(122), 1,
      sym_func_term,
    STATE(267), 1,
      sym_model_fact,
    ACTIONS(145), 2,
      sym_real,
      sym_frac,
    STATE(9), 2,
      sym_model_sentence,
      aux_sym_model_body_repeat1,
    STATE(82), 2,
      sym_model_contract_conf,
      sym_model_fact_list,
  [632] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      sym_digits,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(119), 1,
      anon_sym_ensures,
    ACTIONS(121), 1,
      anon_sym_requires,
    ACTIONS(123), 1,
      sym_bareid,
    ACTIONS(157), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      sym_sentence_config,
    STATE(62), 1,
      sym_unop,
    STATE(64), 1,
      sym_string,
    STATE(66), 1,
      sym_id,
    STATE(83), 1,
      sym_model_contract,
    STATE(86), 1,
      sym_atom,
    STATE(88), 1,
      sym_constant,
    STATE(122), 1,
      sym_func_term,
    STATE(267), 1,
      sym_model_fact,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    STATE(9), 2,
      sym_model_sentence,
      aux_sym_model_body_repeat1,
    STATE(82), 2,
      sym_model_contract_conf,
      sym_model_fact_list,
  [705] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      sym_digits,
    ACTIONS(169), 1,
      anon_sym_DQUOTE,
    ACTIONS(171), 1,
      anon_sym_no,
    ACTIONS(173), 1,
      sym_bareid,
    ACTIONS(175), 1,
      sym_qualid,
    STATE(21), 1,
      sym_id,
    STATE(23), 1,
      sym_func_term,
    STATE(41), 1,
      sym_constant,
    STATE(42), 1,
      sym_atom,
    STATE(44), 1,
      sym_string,
    STATE(58), 1,
      sym_unop,
    STATE(194), 1,
      sym_constraint,
    STATE(212), 1,
      sym_body,
    STATE(346), 1,
      sym_body_list,
    ACTIONS(163), 2,
      anon_sym_ensures,
      anon_sym_requires,
    ACTIONS(167), 2,
      sym_real,
      sym_frac,
    ACTIONS(159), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
  [770] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      sym_digits,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_bareid,
    ACTIONS(39), 1,
      sym_qualid,
    STATE(62), 1,
      sym_unop,
    STATE(63), 1,
      sym_trans_sentence,
    STATE(64), 1,
      sym_string,
    STATE(66), 1,
      sym_id,
    STATE(86), 1,
      sym_atom,
    STATE(88), 1,
      sym_constant,
    STATE(92), 1,
      sym_func_term,
    STATE(132), 1,
      sym_func_or_compr,
    STATE(148), 1,
      sym_compr,
    STATE(251), 1,
      sym_func_term_list,
    ACTIONS(25), 2,
      anon_sym_ensures,
      anon_sym_requires,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    STATE(69), 2,
      sym_type_decl,
      sym_rule,
  [837] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      sym_digits,
    ACTIONS(169), 1,
      anon_sym_DQUOTE,
    ACTIONS(171), 1,
      anon_sym_no,
    ACTIONS(173), 1,
      sym_bareid,
    ACTIONS(175), 1,
      sym_qualid,
    STATE(21), 1,
      sym_id,
    STATE(23), 1,
      sym_func_term,
    STATE(41), 1,
      sym_constant,
    STATE(42), 1,
      sym_atom,
    STATE(44), 1,
      sym_string,
    STATE(58), 1,
      sym_unop,
    STATE(194), 1,
      sym_constraint,
    STATE(212), 1,
      sym_body,
    STATE(334), 1,
      sym_body_list,
    STATE(350), 1,
      sym_card_spec,
    ACTIONS(167), 2,
      sym_real,
      sym_frac,
    ACTIONS(177), 3,
      anon_sym_some,
      anon_sym_atmost,
      anon_sym_atleast,
  [901] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      sym_digits,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(43), 1,
      anon_sym_conforms,
    ACTIONS(47), 1,
      sym_bareid,
    STATE(62), 1,
      sym_unop,
    STATE(64), 1,
      sym_string,
    STATE(66), 1,
      sym_id,
    STATE(76), 1,
      sym_dom_sentence,
    STATE(86), 1,
      sym_atom,
    STATE(88), 1,
      sym_constant,
    STATE(92), 1,
      sym_func_term,
    STATE(132), 1,
      sym_func_or_compr,
    STATE(148), 1,
      sym_compr,
    STATE(264), 1,
      sym_func_term_list,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    STATE(75), 2,
      sym_type_decl,
      sym_rule,
  [967] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      anon_sym_conforms,
    ACTIONS(165), 1,
      sym_digits,
    ACTIONS(169), 1,
      anon_sym_DQUOTE,
    ACTIONS(171), 1,
      anon_sym_no,
    ACTIONS(173), 1,
      sym_bareid,
    ACTIONS(175), 1,
      sym_qualid,
    STATE(21), 1,
      sym_id,
    STATE(23), 1,
      sym_func_term,
    STATE(41), 1,
      sym_constant,
    STATE(42), 1,
      sym_atom,
    STATE(44), 1,
      sym_string,
    STATE(58), 1,
      sym_unop,
    STATE(194), 1,
      sym_constraint,
    STATE(212), 1,
      sym_body,
    STATE(299), 1,
      sym_body_list,
    ACTIONS(167), 2,
      sym_real,
      sym_frac,
    ACTIONS(159), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
  [1031] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_machine,
    ACTIONS(9), 1,
      anon_sym_model,
    ACTIONS(11), 1,
      anon_sym_partial,
    ACTIONS(13), 1,
      anon_sym_transform,
    ACTIONS(15), 1,
      anon_sym_domain,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    STATE(217), 1,
      sym_model_intro,
    STATE(235), 1,
      sym_model_sig,
    STATE(245), 1,
      sym_domain_sig,
    STATE(333), 1,
      sym_domain_sig_config,
    STATE(336), 1,
      sym_model_sig_config,
    STATE(338), 1,
      sym_machine_sig_config,
    STATE(19), 2,
      sym_module,
      aux_sym_program_repeat1,
    STATE(205), 2,
      sym_machine_sig,
      aux_sym_machine_sig_config_repeat1,
    STATE(155), 5,
      sym_machine,
      sym_model,
      sym_tsystem,
      sym_transform,
      sym_domain,
  [1086] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_machine,
    ACTIONS(9), 1,
      anon_sym_model,
    ACTIONS(11), 1,
      anon_sym_partial,
    ACTIONS(13), 1,
      anon_sym_transform,
    ACTIONS(15), 1,
      anon_sym_domain,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    STATE(217), 1,
      sym_model_intro,
    STATE(235), 1,
      sym_model_sig,
    STATE(245), 1,
      sym_domain_sig,
    STATE(333), 1,
      sym_domain_sig_config,
    STATE(336), 1,
      sym_model_sig_config,
    STATE(338), 1,
      sym_machine_sig_config,
    STATE(18), 2,
      sym_module,
      aux_sym_program_repeat1,
    STATE(205), 2,
      sym_machine_sig,
      aux_sym_machine_sig_config_repeat1,
    STATE(155), 5,
      sym_machine,
      sym_model,
      sym_tsystem,
      sym_transform,
      sym_domain,
  [1141] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    ACTIONS(183), 1,
      anon_sym_machine,
    ACTIONS(186), 1,
      anon_sym_model,
    ACTIONS(189), 1,
      anon_sym_partial,
    ACTIONS(192), 1,
      anon_sym_transform,
    ACTIONS(195), 1,
      anon_sym_domain,
    STATE(217), 1,
      sym_model_intro,
    STATE(235), 1,
      sym_model_sig,
    STATE(245), 1,
      sym_domain_sig,
    STATE(333), 1,
      sym_domain_sig_config,
    STATE(336), 1,
      sym_model_sig_config,
    STATE(338), 1,
      sym_machine_sig_config,
    STATE(18), 2,
      sym_module,
      aux_sym_program_repeat1,
    STATE(205), 2,
      sym_machine_sig,
      aux_sym_machine_sig_config_repeat1,
    STATE(155), 5,
      sym_machine,
      sym_model,
      sym_tsystem,
      sym_transform,
      sym_domain,
  [1196] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_machine,
    ACTIONS(9), 1,
      anon_sym_model,
    ACTIONS(11), 1,
      anon_sym_partial,
    ACTIONS(13), 1,
      anon_sym_transform,
    ACTIONS(15), 1,
      anon_sym_domain,
    ACTIONS(198), 1,
      ts_builtin_sym_end,
    STATE(217), 1,
      sym_model_intro,
    STATE(235), 1,
      sym_model_sig,
    STATE(245), 1,
      sym_domain_sig,
    STATE(333), 1,
      sym_domain_sig_config,
    STATE(336), 1,
      sym_model_sig_config,
    STATE(338), 1,
      sym_machine_sig_config,
    STATE(18), 2,
      sym_module,
      aux_sym_program_repeat1,
    STATE(205), 2,
      sym_machine_sig,
      aux_sym_machine_sig_config_repeat1,
    STATE(155), 5,
      sym_machine,
      sym_model,
      sym_tsystem,
      sym_transform,
      sym_domain,
  [1251] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_SLASH,
    ACTIONS(200), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_machine,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [1278] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LPAREN,
    ACTIONS(208), 1,
      anon_sym_is,
    ACTIONS(210), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(204), 13,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1308] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      sym_digits,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(212), 1,
      sym_bareid,
    STATE(62), 1,
      sym_unop,
    STATE(64), 1,
      sym_string,
    STATE(66), 1,
      sym_id,
    STATE(86), 1,
      sym_atom,
    STATE(88), 1,
      sym_constant,
    STATE(92), 1,
      sym_func_term,
    STATE(132), 1,
      sym_func_or_compr,
    STATE(148), 1,
      sym_compr,
    STATE(243), 1,
      sym_func_term_list,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [1364] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_SLASH,
    STATE(57), 1,
      sym_binop,
    STATE(59), 1,
      sym_relop,
    ACTIONS(222), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(214), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(218), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(216), 5,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1400] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      sym_digits,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(123), 1,
      sym_bareid,
    ACTIONS(224), 1,
      anon_sym_LBRACK,
    STATE(52), 1,
      sym_sentence_config,
    STATE(62), 1,
      sym_unop,
    STATE(64), 1,
      sym_string,
    STATE(66), 1,
      sym_id,
    STATE(77), 1,
      sym_model_fact_list,
    STATE(86), 1,
      sym_atom,
    STATE(88), 1,
      sym_constant,
    STATE(122), 1,
      sym_func_term,
    STATE(267), 1,
      sym_model_fact,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [1456] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      sym_digits,
    ACTIONS(169), 1,
      anon_sym_DQUOTE,
    ACTIONS(171), 1,
      anon_sym_no,
    ACTIONS(173), 1,
      sym_bareid,
    ACTIONS(175), 1,
      sym_qualid,
    STATE(21), 1,
      sym_id,
    STATE(23), 1,
      sym_func_term,
    STATE(41), 1,
      sym_constant,
    STATE(42), 1,
      sym_atom,
    STATE(44), 1,
      sym_string,
    STATE(58), 1,
      sym_unop,
    STATE(194), 1,
      sym_constraint,
    STATE(212), 1,
      sym_body,
    STATE(278), 1,
      sym_body_list,
    ACTIONS(167), 2,
      sym_real,
      sym_frac,
  [1512] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      sym_digits,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(123), 1,
      sym_bareid,
    ACTIONS(224), 1,
      anon_sym_LBRACK,
    STATE(52), 1,
      sym_sentence_config,
    STATE(62), 1,
      sym_unop,
    STATE(64), 1,
      sym_string,
    STATE(66), 1,
      sym_id,
    STATE(86), 1,
      sym_atom,
    STATE(88), 1,
      sym_constant,
    STATE(89), 1,
      sym_model_fact_list,
    STATE(122), 1,
      sym_func_term,
    STATE(267), 1,
      sym_model_fact,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [1568] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      sym_digits,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(212), 1,
      sym_bareid,
    STATE(62), 1,
      sym_unop,
    STATE(64), 1,
      sym_string,
    STATE(66), 1,
      sym_id,
    STATE(86), 1,
      sym_atom,
    STATE(88), 1,
      sym_constant,
    STATE(92), 1,
      sym_func_term,
    STATE(132), 1,
      sym_func_or_compr,
    STATE(148), 1,
      sym_compr,
    STATE(326), 1,
      sym_func_term_list,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [1624] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      sym_digits,
    ACTIONS(169), 1,
      anon_sym_DQUOTE,
    ACTIONS(171), 1,
      anon_sym_no,
    ACTIONS(173), 1,
      sym_bareid,
    ACTIONS(175), 1,
      sym_qualid,
    STATE(21), 1,
      sym_id,
    STATE(23), 1,
      sym_func_term,
    STATE(41), 1,
      sym_constant,
    STATE(42), 1,
      sym_atom,
    STATE(44), 1,
      sym_string,
    STATE(58), 1,
      sym_unop,
    STATE(194), 1,
      sym_constraint,
    STATE(212), 1,
      sym_body,
    STATE(334), 1,
      sym_body_list,
    ACTIONS(167), 2,
      sym_real,
      sym_frac,
  [1680] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      sym_digits,
    ACTIONS(169), 1,
      anon_sym_DQUOTE,
    ACTIONS(171), 1,
      anon_sym_no,
    ACTIONS(173), 1,
      sym_bareid,
    ACTIONS(175), 1,
      sym_qualid,
    STATE(21), 1,
      sym_id,
    STATE(23), 1,
      sym_func_term,
    STATE(41), 1,
      sym_constant,
    STATE(42), 1,
      sym_atom,
    STATE(44), 1,
      sym_string,
    STATE(58), 1,
      sym_unop,
    STATE(194), 1,
      sym_constraint,
    STATE(212), 1,
      sym_body,
    STATE(356), 1,
      sym_body_list,
    ACTIONS(167), 2,
      sym_real,
      sym_frac,
  [1736] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      sym_digits,
    ACTIONS(169), 1,
      anon_sym_DQUOTE,
    ACTIONS(171), 1,
      anon_sym_no,
    ACTIONS(173), 1,
      sym_bareid,
    ACTIONS(175), 1,
      sym_qualid,
    STATE(21), 1,
      sym_id,
    STATE(23), 1,
      sym_func_term,
    STATE(41), 1,
      sym_constant,
    STATE(42), 1,
      sym_atom,
    STATE(44), 1,
      sym_string,
    STATE(58), 1,
      sym_unop,
    STATE(194), 1,
      sym_constraint,
    STATE(212), 1,
      sym_body,
    STATE(288), 1,
      sym_body_list,
    ACTIONS(167), 2,
      sym_real,
      sym_frac,
  [1792] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(226), 15,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_is,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1818] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      sym_digits,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(212), 1,
      sym_bareid,
    STATE(62), 1,
      sym_unop,
    STATE(64), 1,
      sym_string,
    STATE(66), 1,
      sym_id,
    STATE(86), 1,
      sym_atom,
    STATE(88), 1,
      sym_constant,
    STATE(92), 1,
      sym_func_term,
    STATE(132), 1,
      sym_func_or_compr,
    STATE(148), 1,
      sym_compr,
    STATE(344), 1,
      sym_func_term_list,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [1874] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      sym_digits,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(119), 1,
      anon_sym_ensures,
    ACTIONS(121), 1,
      anon_sym_requires,
    ACTIONS(123), 1,
      sym_bareid,
    STATE(62), 1,
      sym_unop,
    STATE(64), 1,
      sym_string,
    STATE(66), 1,
      sym_id,
    STATE(79), 1,
      sym_model_contract,
    STATE(86), 1,
      sym_atom,
    STATE(88), 1,
      sym_constant,
    STATE(122), 1,
      sym_func_term,
    STATE(250), 1,
      sym_model_fact,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [1930] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      sym_digits,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(212), 1,
      sym_bareid,
    STATE(62), 1,
      sym_unop,
    STATE(64), 1,
      sym_string,
    STATE(66), 1,
      sym_id,
    STATE(86), 1,
      sym_atom,
    STATE(88), 1,
      sym_constant,
    STATE(92), 1,
      sym_func_term,
    STATE(148), 1,
      sym_compr,
    STATE(166), 1,
      sym_func_or_compr,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [1983] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LPAREN,
    ACTIONS(210), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(204), 13,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2010] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      sym_digits,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(230), 1,
      anon_sym_RPAREN,
    ACTIONS(232), 1,
      sym_bareid,
    STATE(62), 1,
      sym_unop,
    STATE(64), 1,
      sym_string,
    STATE(66), 1,
      sym_id,
    STATE(86), 1,
      sym_atom,
    STATE(88), 1,
      sym_constant,
    STATE(116), 1,
      sym_func_term,
    STATE(276), 1,
      sym_mod_app_arg,
    STATE(300), 1,
      sym_mod_arg_list,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2063] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      sym_digits,
    ACTIONS(169), 1,
      anon_sym_DQUOTE,
    ACTIONS(171), 1,
      anon_sym_no,
    ACTIONS(173), 1,
      sym_bareid,
    ACTIONS(175), 1,
      sym_qualid,
    STATE(21), 1,
      sym_id,
    STATE(23), 1,
      sym_func_term,
    STATE(41), 1,
      sym_constant,
    STATE(42), 1,
      sym_atom,
    STATE(44), 1,
      sym_string,
    STATE(58), 1,
      sym_unop,
    STATE(194), 1,
      sym_constraint,
    STATE(242), 1,
      sym_body,
    ACTIONS(167), 2,
      sym_real,
      sym_frac,
  [2116] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(57), 1,
      sym_binop,
    ACTIONS(236), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(234), 13,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2143] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_SLASH,
    STATE(57), 1,
      sym_binop,
    ACTIONS(240), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(218), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(238), 9,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2174] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      sym_digits,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(212), 1,
      sym_bareid,
    STATE(62), 1,
      sym_unop,
    STATE(64), 1,
      sym_string,
    STATE(86), 1,
      sym_atom,
    STATE(88), 1,
      sym_constant,
    STATE(95), 1,
      sym_id,
    STATE(105), 1,
      sym_func_term,
    STATE(219), 1,
      sym_compr,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2224] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(204), 13,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2248] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(242), 13,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2272] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      sym_digits,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(232), 1,
      sym_bareid,
    STATE(62), 1,
      sym_unop,
    STATE(64), 1,
      sym_string,
    STATE(66), 1,
      sym_id,
    STATE(86), 1,
      sym_atom,
    STATE(88), 1,
      sym_constant,
    STATE(116), 1,
      sym_func_term,
    STATE(276), 1,
      sym_mod_app_arg,
    STATE(319), 1,
      sym_mod_arg_list,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2322] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(246), 13,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2346] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      sym_digits,
    ACTIONS(169), 1,
      anon_sym_DQUOTE,
    ACTIONS(171), 1,
      anon_sym_no,
    ACTIONS(173), 1,
      sym_bareid,
    ACTIONS(175), 1,
      sym_qualid,
    STATE(21), 1,
      sym_id,
    STATE(23), 1,
      sym_func_term,
    STATE(41), 1,
      sym_constant,
    STATE(42), 1,
      sym_atom,
    STATE(44), 1,
      sym_string,
    STATE(58), 1,
      sym_unop,
    STATE(215), 1,
      sym_constraint,
    ACTIONS(167), 2,
      sym_real,
      sym_frac,
  [2396] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(238), 13,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2420] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(200), 13,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2444] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(250), 13,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2468] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(256), 1,
      anon_sym_LPAREN,
    ACTIONS(258), 1,
      anon_sym_DASH,
    ACTIONS(260), 1,
      anon_sym_new,
    ACTIONS(264), 1,
      sym_bareid,
    ACTIONS(266), 1,
      sym_qualid,
    STATE(142), 1,
      sym_unncmp,
    STATE(164), 1,
      sym_typeid,
    STATE(305), 1,
      sym_unnbody,
    STATE(306), 1,
      sym_fun_decl,
    STATE(307), 1,
      sym_type_decl_body,
    ACTIONS(262), 4,
      anon_sym_inj,
      anon_sym_bij,
      anon_sym_sur,
      anon_sym_fun,
  [2511] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_SLASH,
    ACTIONS(226), 14,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_is,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [2534] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(256), 1,
      anon_sym_LPAREN,
    ACTIONS(258), 1,
      anon_sym_DASH,
    ACTIONS(260), 1,
      anon_sym_new,
    ACTIONS(264), 1,
      sym_bareid,
    ACTIONS(266), 1,
      sym_qualid,
    STATE(142), 1,
      sym_unncmp,
    STATE(164), 1,
      sym_typeid,
    STATE(305), 1,
      sym_unnbody,
    STATE(306), 1,
      sym_fun_decl,
    STATE(345), 1,
      sym_type_decl_body,
    ACTIONS(262), 4,
      anon_sym_inj,
      anon_sym_bij,
      anon_sym_sur,
      anon_sym_fun,
  [2577] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      sym_digits,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(123), 1,
      sym_bareid,
    STATE(62), 1,
      sym_unop,
    STATE(64), 1,
      sym_string,
    STATE(66), 1,
      sym_id,
    STATE(86), 1,
      sym_atom,
    STATE(88), 1,
      sym_constant,
    STATE(122), 1,
      sym_func_term,
    STATE(250), 1,
      sym_model_fact,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2624] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      sym_digits,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(212), 1,
      sym_bareid,
    STATE(62), 1,
      sym_unop,
    STATE(64), 1,
      sym_string,
    STATE(66), 1,
      sym_id,
    STATE(86), 1,
      sym_atom,
    STATE(88), 1,
      sym_constant,
    STATE(138), 1,
      sym_func_term,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2668] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      sym_digits,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(212), 1,
      sym_bareid,
    STATE(62), 1,
      sym_unop,
    STATE(64), 1,
      sym_string,
    STATE(66), 1,
      sym_id,
    STATE(86), 1,
      sym_atom,
    STATE(88), 1,
      sym_constant,
    STATE(129), 1,
      sym_func_term,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2712] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      sym_digits,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(212), 1,
      sym_bareid,
    STATE(62), 1,
      sym_unop,
    STATE(64), 1,
      sym_string,
    STATE(65), 1,
      sym_func_term,
    STATE(66), 1,
      sym_id,
    STATE(86), 1,
      sym_atom,
    STATE(88), 1,
      sym_constant,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2756] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      sym_digits,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(212), 1,
      sym_bareid,
    STATE(62), 1,
      sym_unop,
    STATE(64), 1,
      sym_string,
    STATE(66), 1,
      sym_id,
    STATE(86), 1,
      sym_atom,
    STATE(88), 1,
      sym_constant,
    STATE(119), 1,
      sym_func_term,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2800] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      sym_digits,
    ACTIONS(169), 1,
      anon_sym_DQUOTE,
    ACTIONS(173), 1,
      sym_bareid,
    ACTIONS(175), 1,
      sym_qualid,
    STATE(35), 1,
      sym_id,
    STATE(39), 1,
      sym_func_term,
    STATE(41), 1,
      sym_constant,
    STATE(42), 1,
      sym_atom,
    STATE(44), 1,
      sym_string,
    STATE(58), 1,
      sym_unop,
    ACTIONS(167), 2,
      sym_real,
      sym_frac,
  [2844] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      sym_digits,
    ACTIONS(169), 1,
      anon_sym_DQUOTE,
    ACTIONS(173), 1,
      sym_bareid,
    ACTIONS(175), 1,
      sym_qualid,
    STATE(35), 1,
      sym_id,
    STATE(38), 1,
      sym_func_term,
    STATE(41), 1,
      sym_constant,
    STATE(42), 1,
      sym_atom,
    STATE(44), 1,
      sym_string,
    STATE(58), 1,
      sym_unop,
    ACTIONS(167), 2,
      sym_real,
      sym_frac,
  [2888] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      sym_digits,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(212), 1,
      sym_bareid,
    STATE(62), 1,
      sym_unop,
    STATE(64), 1,
      sym_string,
    STATE(66), 1,
      sym_id,
    STATE(86), 1,
      sym_atom,
    STATE(88), 1,
      sym_constant,
    STATE(99), 1,
      sym_func_term,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2932] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      sym_digits,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(212), 1,
      sym_bareid,
    STATE(62), 1,
      sym_unop,
    STATE(64), 1,
      sym_string,
    STATE(66), 1,
      sym_id,
    STATE(86), 1,
      sym_atom,
    STATE(88), 1,
      sym_constant,
    STATE(101), 1,
      sym_func_term,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2976] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      sym_digits,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(212), 1,
      sym_bareid,
    STATE(62), 1,
      sym_unop,
    STATE(64), 1,
      sym_string,
    STATE(66), 1,
      sym_id,
    STATE(86), 1,
      sym_atom,
    STATE(88), 1,
      sym_constant,
    STATE(131), 1,
      sym_func_term,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [3020] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      sym_digits,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(212), 1,
      sym_bareid,
    STATE(62), 1,
      sym_unop,
    STATE(64), 1,
      sym_string,
    STATE(66), 1,
      sym_id,
    STATE(67), 1,
      sym_func_term,
    STATE(86), 1,
      sym_atom,
    STATE(88), 1,
      sym_constant,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [3064] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 4,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      sym_bareid,
    ACTIONS(268), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3085] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_SLASH,
    ACTIONS(246), 12,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [3106] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_SLASH,
    STATE(55), 1,
      sym_binop,
    ACTIONS(218), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(238), 7,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [3131] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_SLASH,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 11,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [3154] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_SLASH,
    STATE(55), 1,
      sym_binop,
    ACTIONS(234), 11,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [3177] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 4,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      sym_bareid,
    ACTIONS(274), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3198] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 4,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      sym_bareid,
    ACTIONS(278), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3219] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 4,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      sym_bareid,
    ACTIONS(282), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3240] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 4,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      sym_bareid,
    ACTIONS(286), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 4,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      sym_bareid,
    ACTIONS(290), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3282] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 3,
      anon_sym_conforms,
      sym_digits,
      sym_bareid,
    ACTIONS(274), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3302] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_SLASH,
    ACTIONS(238), 11,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [3322] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 3,
      anon_sym_conforms,
      sym_digits,
      sym_bareid,
    ACTIONS(294), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3342] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 3,
      anon_sym_conforms,
      sym_digits,
      sym_bareid,
    ACTIONS(298), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3362] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 4,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      sym_bareid,
    ACTIONS(302), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3382] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 3,
      anon_sym_conforms,
      sym_digits,
      sym_bareid,
    ACTIONS(306), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3402] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 4,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      sym_bareid,
    ACTIONS(310), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3422] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_RBRACE,
    ACTIONS(316), 1,
      anon_sym_boot,
    ACTIONS(320), 1,
      anon_sym_property,
    ACTIONS(322), 1,
      anon_sym_LBRACK,
    STATE(151), 1,
      sym_sentence_config,
    STATE(153), 1,
      sym_machine_prop,
    STATE(156), 1,
      sym_machine_sentence,
    STATE(282), 1,
      sym_machine_body,
    ACTIONS(318), 2,
      anon_sym_initially,
      anon_sym_next,
    STATE(97), 2,
      sym_machine_sentence_conf,
      aux_sym_machine_body_repeat1,
  [3458] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 4,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      sym_bareid,
    ACTIONS(324), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3478] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 4,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      sym_bareid,
    ACTIONS(328), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3498] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 4,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      sym_bareid,
    ACTIONS(332), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3518] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 3,
      anon_sym_conforms,
      sym_digits,
      sym_bareid,
    ACTIONS(290), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3538] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 4,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      sym_bareid,
    ACTIONS(336), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3558] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_SLASH,
    ACTIONS(242), 11,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [3578] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 4,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      sym_bareid,
    ACTIONS(340), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3598] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_SLASH,
    ACTIONS(204), 11,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [3618] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 4,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      sym_bareid,
    ACTIONS(344), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3638] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 3,
      anon_sym_conforms,
      sym_digits,
      sym_bareid,
    ACTIONS(348), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3658] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_SLASH,
    ACTIONS(250), 11,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [3678] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_SLASH,
    STATE(55), 1,
      sym_binop,
    ACTIONS(218), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(352), 6,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [3702] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(212), 1,
      sym_bareid,
    ACTIONS(224), 1,
      anon_sym_LBRACK,
    ACTIONS(354), 1,
      anon_sym_RBRACE,
    STATE(183), 1,
      sym_sentence_config,
    STATE(222), 1,
      sym_step,
    STATE(258), 1,
      sym_id,
    STATE(292), 1,
      sym_trans_steps,
    STATE(359), 1,
      sym_step_or_update_lhs,
    STATE(104), 2,
      sym_trans_step_config,
      aux_sym_trans_steps_repeat1,
  [3737] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_RBRACE,
    ACTIONS(358), 1,
      anon_sym_boot,
    ACTIONS(364), 1,
      anon_sym_property,
    ACTIONS(367), 1,
      anon_sym_LBRACK,
    STATE(151), 1,
      sym_sentence_config,
    STATE(153), 1,
      sym_machine_prop,
    STATE(156), 1,
      sym_machine_sentence,
    ACTIONS(361), 2,
      anon_sym_initially,
      anon_sym_next,
    STATE(94), 2,
      sym_machine_sentence_conf,
      aux_sym_machine_body_repeat1,
  [3770] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_SLASH,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(370), 1,
      anon_sym_is,
    ACTIONS(204), 8,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [3793] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 4,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      sym_bareid,
    ACTIONS(372), 7,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3812] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_boot,
    ACTIONS(320), 1,
      anon_sym_property,
    ACTIONS(322), 1,
      anon_sym_LBRACK,
    ACTIONS(376), 1,
      anon_sym_RBRACE,
    STATE(151), 1,
      sym_sentence_config,
    STATE(153), 1,
      sym_machine_prop,
    STATE(156), 1,
      sym_machine_sentence,
    ACTIONS(318), 2,
      anon_sym_initially,
      anon_sym_next,
    STATE(94), 2,
      sym_machine_sentence_conf,
      aux_sym_machine_body_repeat1,
  [3845] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_SLASH,
    ACTIONS(378), 1,
      anon_sym_COLON_COLON_EQ,
    ACTIONS(226), 8,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_COLON_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [3865] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_SLASH,
    STATE(55), 1,
      sym_binop,
    ACTIONS(218), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(380), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [3887] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_RBRACE,
    ACTIONS(384), 1,
      anon_sym_LBRACK,
    ACTIONS(387), 1,
      sym_bareid,
    ACTIONS(390), 1,
      sym_qualid,
    STATE(183), 1,
      sym_sentence_config,
    STATE(222), 1,
      sym_step,
    STATE(258), 1,
      sym_id,
    STATE(359), 1,
      sym_step_or_update_lhs,
    STATE(100), 2,
      sym_trans_step_config,
      aux_sym_trans_steps_repeat1,
  [3919] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_SLASH,
    STATE(55), 1,
      sym_binop,
    ACTIONS(218), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(393), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [3941] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 3,
      anon_sym_conforms,
      sym_digits,
      sym_bareid,
    ACTIONS(372), 7,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3959] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_SLASH,
    ACTIONS(395), 1,
      anon_sym_COLON_COLON_EQ,
    ACTIONS(226), 8,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_COLON_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [3979] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(212), 1,
      sym_bareid,
    ACTIONS(224), 1,
      anon_sym_LBRACK,
    ACTIONS(397), 1,
      anon_sym_RBRACE,
    STATE(183), 1,
      sym_sentence_config,
    STATE(222), 1,
      sym_step,
    STATE(258), 1,
      sym_id,
    STATE(359), 1,
      sym_step_or_update_lhs,
    STATE(100), 2,
      sym_trans_step_config,
      aux_sym_trans_steps_repeat1,
  [4011] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_SLASH,
    STATE(55), 1,
      sym_binop,
    ACTIONS(218), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(399), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [4033] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(401), 1,
      sym_digits,
    ACTIONS(405), 1,
      sym_bareid,
    STATE(234), 1,
      sym_enum_cnst,
    STATE(257), 1,
      sym_string,
    STATE(314), 1,
      sym_enum_list,
    ACTIONS(403), 3,
      sym_real,
      sym_frac,
      sym_qualid,
  [4060] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_COLON_COLON,
    ACTIONS(411), 1,
      anon_sym_AT,
    ACTIONS(407), 7,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [4079] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_SLASH,
    ACTIONS(413), 1,
      anon_sym_at,
    ACTIONS(226), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4098] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_SLASH,
    ACTIONS(415), 1,
      anon_sym_is,
    ACTIONS(226), 7,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4117] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(266), 1,
      sym_qualid,
    ACTIONS(417), 1,
      anon_sym_any,
    ACTIONS(419), 1,
      sym_bareid,
    STATE(142), 1,
      sym_unncmp,
    STATE(164), 1,
      sym_typeid,
    STATE(200), 1,
      sym_field,
    STATE(213), 1,
      sym_unnbody,
    STATE(296), 1,
      sym_fields,
  [4148] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(266), 1,
      sym_qualid,
    ACTIONS(417), 1,
      anon_sym_any,
    ACTIONS(419), 1,
      sym_bareid,
    STATE(142), 1,
      sym_unncmp,
    STATE(164), 1,
      sym_typeid,
    STATE(200), 1,
      sym_field,
    STATE(213), 1,
      sym_unnbody,
    STATE(317), 1,
      sym_fields,
  [4179] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(266), 1,
      sym_qualid,
    ACTIONS(417), 1,
      anon_sym_any,
    ACTIONS(419), 1,
      sym_bareid,
    STATE(142), 1,
      sym_unncmp,
    STATE(164), 1,
      sym_typeid,
    STATE(200), 1,
      sym_field,
    STATE(213), 1,
      sym_unnbody,
    STATE(231), 1,
      sym_fields,
  [4210] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym_bareid,
    STATE(223), 1,
      sym_mod_ref,
    STATE(272), 1,
      sym_mod_refs,
    ACTIONS(421), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
    ACTIONS(423), 2,
      anon_sym_includes,
      anon_sym_extends,
    STATE(137), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [4235] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_AT,
    ACTIONS(427), 8,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [4252] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(266), 1,
      sym_qualid,
    ACTIONS(417), 1,
      anon_sym_any,
    ACTIONS(419), 1,
      sym_bareid,
    STATE(142), 1,
      sym_unncmp,
    STATE(164), 1,
      sym_typeid,
    STATE(200), 1,
      sym_field,
    STATE(213), 1,
      sym_unnbody,
    STATE(311), 1,
      sym_fields,
  [4283] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_SLASH,
    STATE(55), 1,
      sym_binop,
    ACTIONS(431), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(218), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4303] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 2,
      sym_digits,
      sym_bareid,
    ACTIONS(372), 6,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [4319] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 8,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [4333] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_SLASH,
    STATE(55), 1,
      sym_binop,
    ACTIONS(435), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
    ACTIONS(218), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4353] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 2,
      sym_digits,
      sym_bareid,
    ACTIONS(437), 6,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [4369] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 2,
      sym_digits,
      sym_bareid,
    ACTIONS(441), 6,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [4385] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_SLASH,
    STATE(55), 1,
      sym_binop,
    ACTIONS(445), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
    ACTIONS(218), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4405] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 2,
      sym_digits,
      sym_bareid,
    ACTIONS(447), 6,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [4421] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(266), 1,
      sym_qualid,
    ACTIONS(417), 1,
      anon_sym_any,
    ACTIONS(419), 1,
      sym_bareid,
    STATE(142), 1,
      sym_unncmp,
    STATE(164), 1,
      sym_typeid,
    STATE(209), 1,
      sym_field,
    STATE(213), 1,
      sym_unnbody,
  [4449] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(401), 1,
      sym_digits,
    ACTIONS(405), 1,
      sym_bareid,
    STATE(257), 1,
      sym_string,
    STATE(261), 1,
      sym_enum_cnst,
    ACTIONS(403), 3,
      sym_real,
      sym_frac,
      sym_qualid,
  [4473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 7,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [4486] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [4499] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_COMMA,
    STATE(139), 1,
      aux_sym_func_term_list_repeat1,
    ACTIONS(455), 5,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [4516] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_SLASH,
    ACTIONS(459), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      sym_binop,
    ACTIONS(218), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4535] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_PLUS,
    STATE(130), 1,
      aux_sym_unnbody_repeat1,
    ACTIONS(461), 5,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [4552] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_SLASH,
    ACTIONS(466), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      sym_binop,
    ACTIONS(218), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4571] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_COMMA,
    STATE(128), 1,
      aux_sym_func_term_list_repeat1,
    ACTIONS(468), 5,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [4588] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_PLUS,
    STATE(130), 1,
      aux_sym_unnbody_repeat1,
    ACTIONS(470), 5,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [4605] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 7,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [4618] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      sym_bareid,
    STATE(223), 1,
      sym_mod_ref,
    STATE(265), 1,
      sym_mod_refs,
    ACTIONS(476), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
    STATE(137), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [4639] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(264), 1,
      sym_bareid,
    ACTIONS(266), 1,
      sym_qualid,
    ACTIONS(480), 1,
      anon_sym_any,
    STATE(142), 1,
      sym_unncmp,
    STATE(164), 1,
      sym_typeid,
    STATE(210), 1,
      sym_unnbody,
  [4664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 7,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [4677] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_SLASH,
    ACTIONS(484), 1,
      anon_sym_DOT,
    STATE(55), 1,
      sym_binop,
    ACTIONS(218), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4696] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_COMMA,
    STATE(139), 1,
      aux_sym_func_term_list_repeat1,
    ACTIONS(486), 5,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [4713] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 7,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [4726] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 7,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [4739] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_PLUS,
    STATE(133), 1,
      aux_sym_unnbody_repeat1,
    ACTIONS(495), 5,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [4756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [4768] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_PLUS,
  [4780] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [4792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [4804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [4816] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 6,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [4828] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [4840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [4852] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_boot,
    ACTIONS(320), 1,
      anon_sym_property,
    STATE(153), 1,
      sym_machine_prop,
    STATE(158), 1,
      sym_machine_sentence,
    ACTIONS(318), 2,
      anon_sym_initially,
      anon_sym_next,
  [4872] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(264), 1,
      sym_bareid,
    ACTIONS(266), 1,
      sym_qualid,
    STATE(142), 1,
      sym_unncmp,
    STATE(164), 1,
      sym_typeid,
    STATE(274), 1,
      sym_unnbody,
  [4894] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [4906] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [4918] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [4930] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [4942] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [4954] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [4966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [4978] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      sym_bareid,
    STATE(252), 1,
      sym_mod_apply,
    STATE(302), 1,
      sym_choice_list,
    STATE(357), 1,
      sym_mod_ref,
    STATE(137), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [4998] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [5010] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_PLUS,
  [5022] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      sym_bareid,
    STATE(252), 1,
      sym_mod_apply,
    STATE(342), 1,
      sym_choice_list,
    STATE(357), 1,
      sym_mod_ref,
    STATE(137), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5042] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_PLUS,
  [5054] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [5066] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 6,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [5078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [5090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [5102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_PLUS,
  [5114] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [5126] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [5138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [5150] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(264), 1,
      sym_bareid,
    ACTIONS(266), 1,
      sym_qualid,
    STATE(142), 1,
      sym_unncmp,
    STATE(164), 1,
      sym_typeid,
    STATE(220), 1,
      sym_unnbody,
  [5172] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_COLON,
    ACTIONS(527), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_PLUS,
  [5186] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_digits,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(64), 1,
      sym_string,
    STATE(259), 1,
      sym_constant,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [5206] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(264), 1,
      sym_bareid,
    ACTIONS(266), 1,
      sym_qualid,
    STATE(142), 1,
      sym_unncmp,
    STATE(164), 1,
      sym_typeid,
    STATE(204), 1,
      sym_unnbody,
  [5228] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      sym_bareid,
    STATE(303), 1,
      sym_mod_apply,
    STATE(357), 1,
      sym_mod_ref,
    STATE(137), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5245] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_LPAREN,
    STATE(145), 1,
      sym_transform_rest,
    STATE(230), 1,
      sym_transform_sig,
    STATE(290), 1,
      sym_trans_sig_in,
    STATE(293), 1,
      sym_transform_sig_config,
  [5264] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(212), 1,
      sym_bareid,
    STATE(161), 1,
      sym_update,
    STATE(258), 1,
      sym_id,
    STATE(316), 1,
      sym_step_or_update_lhs,
  [5283] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(212), 1,
      sym_bareid,
    STATE(161), 1,
      sym_step,
    STATE(258), 1,
      sym_id,
    STATE(312), 1,
      sym_step_or_update_lhs,
  [5302] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(212), 1,
      sym_bareid,
    STATE(241), 1,
      sym_setting,
    STATE(323), 1,
      sym_id,
    STATE(349), 1,
      sym_setting_list,
  [5321] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(212), 1,
      sym_bareid,
    STATE(241), 1,
      sym_setting,
    STATE(323), 1,
      sym_id,
    STATE(348), 1,
      sym_setting_list,
  [5340] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(212), 1,
      sym_bareid,
    STATE(211), 1,
      sym_step,
    STATE(258), 1,
      sym_id,
    STATE(359), 1,
      sym_step_or_update_lhs,
  [5359] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      anon_sym_RPAREN,
    ACTIONS(549), 1,
      sym_bareid,
    STATE(255), 1,
      sym_mod_ref_rename,
    STATE(260), 1,
      sym_val_or_model_program,
    STATE(286), 1,
      sym_vom_param_list,
  [5378] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_COMMA,
    STATE(197), 1,
      aux_sym_fields_repeat1,
    ACTIONS(551), 3,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [5393] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      sym_bareid,
    STATE(347), 1,
      sym_mod_apply,
    STATE(357), 1,
      sym_mod_ref,
    STATE(137), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5410] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(212), 1,
      sym_bareid,
    STATE(241), 1,
      sym_setting,
    STATE(323), 1,
      sym_id,
    STATE(341), 1,
      sym_setting_list,
  [5429] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(212), 1,
      sym_bareid,
    STATE(241), 1,
      sym_setting,
    STATE(323), 1,
      sym_id,
    STATE(325), 1,
      sym_setting_list,
  [5448] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_LPAREN,
    STATE(172), 1,
      sym_tsystem_rest,
    STATE(230), 1,
      sym_transform_sig,
    STATE(290), 1,
      sym_trans_sig_in,
    STATE(331), 1,
      sym_transform_sig_config,
  [5467] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(212), 1,
      sym_bareid,
    STATE(241), 1,
      sym_setting,
    STATE(323), 1,
      sym_id,
    STATE(324), 1,
      sym_setting_list,
  [5486] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_COMMA,
    STATE(191), 1,
      aux_sym_body_repeat1,
    ACTIONS(555), 3,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [5501] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_COMMA,
    STATE(191), 1,
      aux_sym_body_repeat1,
    ACTIONS(560), 3,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [5516] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      sym_bareid,
    STATE(223), 1,
      sym_mod_ref,
    STATE(240), 1,
      sym_mod_refs,
    STATE(137), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5533] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_COMMA,
    STATE(192), 1,
      aux_sym_body_repeat1,
    ACTIONS(564), 3,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [5548] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      sym_bareid,
    STATE(223), 1,
      sym_mod_ref,
    STATE(248), 1,
      sym_mod_refs,
    STATE(137), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5565] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      sym_bareid,
    ACTIONS(566), 1,
      anon_sym_RPAREN,
    STATE(255), 1,
      sym_mod_ref_rename,
    STATE(260), 1,
      sym_val_or_model_program,
    STATE(313), 1,
      sym_vom_param_list,
  [5584] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_COMMA,
    STATE(197), 1,
      aux_sym_fields_repeat1,
    ACTIONS(568), 3,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [5599] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(264), 1,
      sym_bareid,
    ACTIONS(266), 1,
      sym_qualid,
    STATE(164), 1,
      sym_typeid,
    STATE(169), 1,
      sym_unncmp,
  [5618] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      sym_bareid,
    STATE(223), 1,
      sym_mod_ref,
    STATE(266), 1,
      sym_mod_refs,
    STATE(137), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5635] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_COMMA,
    STATE(185), 1,
      aux_sym_fields_repeat1,
    ACTIONS(573), 3,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [5650] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_SEMI,
    STATE(208), 1,
      aux_sym_body_list_repeat1,
    ACTIONS(575), 2,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [5664] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      sym_bareid,
    STATE(216), 1,
      sym_mod_ref,
    STATE(137), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5678] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      sym_bareid,
    STATE(255), 1,
      sym_mod_ref_rename,
    STATE(260), 1,
      sym_val_or_model_program,
    STATE(295), 1,
      sym_vom_param_list,
  [5694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [5704] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_machine,
    ACTIONS(581), 1,
      anon_sym_LBRACE,
    STATE(206), 2,
      sym_machine_sig,
      aux_sym_machine_sig_config_repeat1,
  [5718] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_LBRACE,
    ACTIONS(585), 1,
      anon_sym_machine,
    STATE(206), 2,
      sym_machine_sig,
      aux_sym_machine_sig_config_repeat1,
  [5732] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 2,
      anon_sym_LBRACE,
      sym_qualid,
    ACTIONS(590), 2,
      anon_sym_any,
      sym_bareid,
  [5744] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_SEMI,
    STATE(208), 1,
      aux_sym_body_list_repeat1,
    ACTIONS(592), 2,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [5758] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [5768] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [5778] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      sym_bareid,
    ACTIONS(599), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_qualid,
  [5790] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_SEMI,
    STATE(201), 1,
      aux_sym_body_list_repeat1,
    ACTIONS(603), 2,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [5804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [5814] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      sym_bareid,
    STATE(221), 1,
      sym_mod_ref,
    STATE(137), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5828] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5838] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 4,
      anon_sym_LBRACE,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [5848] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
    ACTIONS(611), 2,
      anon_sym_includes,
      anon_sym_extends,
  [5860] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      sym_bareid,
    ACTIONS(531), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_qualid,
  [5872] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5882] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [5892] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 4,
      anon_sym_LBRACE,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [5902] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      sym_bareid,
    ACTIONS(619), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_qualid,
  [5914] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_COMMA,
    ACTIONS(623), 3,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LBRACK,
  [5926] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(212), 1,
      sym_bareid,
    STATE(269), 1,
      sym_setting,
    STATE(323), 1,
      sym_id,
  [5942] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 4,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
  [5952] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(212), 1,
      sym_bareid,
    STATE(258), 1,
      sym_id,
    STATE(353), 1,
      sym_step_or_update_lhs,
  [5968] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(212), 1,
      sym_bareid,
    STATE(330), 1,
      sym_id,
  [5981] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      anon_sym_COMMA,
    ACTIONS(629), 1,
      anon_sym_RBRACK,
    STATE(239), 1,
      aux_sym_setting_list_repeat1,
  [5994] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      anon_sym_RBRACE,
    ACTIONS(633), 1,
      anon_sym_COMMA,
    STATE(237), 1,
      aux_sym_enum_list_repeat1,
  [6007] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(635), 1,
      anon_sym_LBRACE,
    STATE(287), 1,
      sym_config,
  [6020] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(111), 1,
      sym_maparrow,
    ACTIONS(637), 2,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [6031] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      anon_sym_RPAREN,
    ACTIONS(641), 1,
      anon_sym_COMMA,
    STATE(236), 1,
      aux_sym_model_param_list_repeat1,
  [6044] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_COMMA,
    ACTIONS(643), 1,
      anon_sym_RPAREN,
    STATE(232), 1,
      aux_sym_model_param_list_repeat1,
  [6057] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_COMMA,
    ACTIONS(645), 1,
      anon_sym_RBRACE,
    STATE(229), 1,
      aux_sym_enum_list_repeat1,
  [6070] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(647), 1,
      anon_sym_LBRACE,
    STATE(322), 1,
      sym_config,
  [6083] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      anon_sym_RPAREN,
    ACTIONS(651), 1,
      anon_sym_COMMA,
    STATE(236), 1,
      aux_sym_model_param_list_repeat1,
  [6096] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      anon_sym_RBRACE,
    ACTIONS(656), 1,
      anon_sym_COMMA,
    STATE(237), 1,
      aux_sym_enum_list_repeat1,
  [6109] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_DOT_DOT,
    ACTIONS(659), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [6120] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_COMMA,
    ACTIONS(666), 1,
      anon_sym_RBRACK,
    STATE(239), 1,
      aux_sym_setting_list_repeat1,
  [6133] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 3,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LBRACK,
  [6142] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      anon_sym_COMMA,
    ACTIONS(670), 1,
      anon_sym_RBRACK,
    STATE(228), 1,
      aux_sym_setting_list_repeat1,
  [6155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 3,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [6164] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 1,
      anon_sym_RBRACE,
    ACTIONS(674), 1,
      anon_sym_PIPE,
    STATE(134), 1,
      sym_compr_rest,
  [6177] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      sym_bareid,
    STATE(233), 1,
      sym_mod_ref_rename,
    STATE(283), 1,
      sym_model_param_list,
  [6190] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(678), 1,
      anon_sym_LBRACE,
    STATE(315), 1,
      sym_config,
  [6203] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(254), 1,
      sym_string,
  [6213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [6221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 2,
      anon_sym_LBRACE,
      anon_sym_machine,
  [6229] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_system,
    ACTIONS(686), 1,
      sym_bareid,
  [6239] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      anon_sym_DOT,
    ACTIONS(690), 1,
      anon_sym_COMMA,
  [6249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 2,
      anon_sym_DOT,
      anon_sym_COLON_DASH,
  [6257] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      anon_sym_DOT,
    ACTIONS(696), 1,
      anon_sym_SEMI,
  [6267] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      anon_sym_LPAREN,
    STATE(301), 1,
      sym_machine_sig_in,
  [6277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [6301] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [6309] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      anon_sym_EQ,
    ACTIONS(708), 1,
      anon_sym_COMMA,
  [6319] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6327] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_RPAREN,
    ACTIONS(714), 1,
      anon_sym_COMMA,
  [6337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [6345] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_COLON_COLON,
    ACTIONS(716), 1,
      anon_sym_COLON,
  [6355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [6363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 2,
      anon_sym_DOT,
      anon_sym_COLON_DASH,
  [6371] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [6379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [6387] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_DOT,
    ACTIONS(728), 1,
      anon_sym_COMMA,
  [6397] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(141), 1,
      sym_string,
  [6407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [6423] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      sym_bareid,
    STATE(273), 1,
      sym_mod_ref_rename,
  [6433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [6441] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6449] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6457] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(118), 1,
      sym_string,
  [6467] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_RPAREN,
    ACTIONS(736), 1,
      anon_sym_COMMA,
  [6477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      sym_bareid,
  [6484] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_RBRACE,
  [6491] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_RBRACE,
  [6498] = 2,
    ACTIONS(744), 1,
      aux_sym_string_token1,
    ACTIONS(746), 1,
      sym_comment,
  [6505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      anon_sym_of,
  [6512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_RBRACE,
  [6519] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      anon_sym_RPAREN,
  [6526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_COLON_COLON,
  [6533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      anon_sym_returns,
  [6540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 1,
      anon_sym_RPAREN,
  [6547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      anon_sym_LBRACE,
  [6554] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_DOT,
  [6561] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      sym_digits,
  [6568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_returns,
  [6575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      anon_sym_LPAREN,
  [6582] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_RBRACE,
  [6589] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_LBRACE,
  [6596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_DOT,
  [6603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_RPAREN,
  [6610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_RPAREN,
  [6617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      sym_bareid,
  [6624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      anon_sym_of,
  [6631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      anon_sym_DOT,
  [6638] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      anon_sym_RPAREN,
  [6645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      anon_sym_of,
  [6652] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      anon_sym_DOT,
  [6659] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_DOT,
  [6666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_of,
  [6673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_DOT,
  [6680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      anon_sym_LPAREN,
  [6687] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      anon_sym_DOT,
  [6694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      anon_sym_LPAREN,
  [6701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      anon_sym_LPAREN,
  [6708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_DOT,
  [6715] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      anon_sym_RPAREN,
  [6722] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 1,
      anon_sym_EQ,
  [6729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_RPAREN,
  [6736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_RBRACE,
  [6743] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_LBRACE,
  [6750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      anon_sym_EQ,
  [6757] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym_RPAREN,
  [6764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      anon_sym_RBRACE,
  [6771] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      anon_sym_RPAREN,
  [6778] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      anon_sym_DOT,
  [6785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      anon_sym_EQ,
  [6792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      anon_sym_LBRACE,
  [6799] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      anon_sym_EQ,
  [6806] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      anon_sym_RBRACK,
  [6813] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_RBRACK,
  [6820] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_RPAREN,
  [6827] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 1,
      sym_bareid,
  [6834] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 1,
      sym_bareid,
  [6841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_of,
  [6848] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_DOT,
  [6855] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      anon_sym_LBRACE,
  [6862] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(848), 1,
      aux_sym_model_contract_token1,
  [6869] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 1,
      anon_sym_LBRACE,
  [6876] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      anon_sym_DOT,
  [6883] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      anon_sym_DQUOTE,
  [6890] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 1,
      anon_sym_LBRACE,
  [6897] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_RBRACE,
  [6904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_LBRACE,
  [6911] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      ts_builtin_sym_end,
  [6918] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      sym_bareid,
  [6925] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      anon_sym_RBRACK,
  [6932] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      anon_sym_DOT,
  [6939] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 1,
      anon_sym_DQUOTE,
  [6946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 1,
      anon_sym_RPAREN,
  [6953] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      anon_sym_DOT,
  [6960] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      anon_sym_DOT,
  [6967] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(878), 1,
      anon_sym_DOT,
  [6974] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(880), 1,
      anon_sym_RBRACK,
  [6981] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      anon_sym_RBRACK,
  [6988] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      aux_sym_model_contract_token1,
  [6995] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      sym_bareid,
  [7002] = 2,
    ACTIONS(746), 1,
      sym_comment,
    ACTIONS(888), 1,
      aux_sym_string_token1,
  [7009] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      anon_sym_EQ,
  [7016] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(892), 1,
      anon_sym_model,
  [7023] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_returns,
  [7030] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      anon_sym_DOT,
  [7037] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      anon_sym_LPAREN,
  [7044] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      sym_bareid,
  [7051] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 83,
  [SMALL_STATE(4)] = 165,
  [SMALL_STATE(5)] = 245,
  [SMALL_STATE(6)] = 325,
  [SMALL_STATE(7)] = 404,
  [SMALL_STATE(8)] = 483,
  [SMALL_STATE(9)] = 559,
  [SMALL_STATE(10)] = 632,
  [SMALL_STATE(11)] = 705,
  [SMALL_STATE(12)] = 770,
  [SMALL_STATE(13)] = 837,
  [SMALL_STATE(14)] = 901,
  [SMALL_STATE(15)] = 967,
  [SMALL_STATE(16)] = 1031,
  [SMALL_STATE(17)] = 1086,
  [SMALL_STATE(18)] = 1141,
  [SMALL_STATE(19)] = 1196,
  [SMALL_STATE(20)] = 1251,
  [SMALL_STATE(21)] = 1278,
  [SMALL_STATE(22)] = 1308,
  [SMALL_STATE(23)] = 1364,
  [SMALL_STATE(24)] = 1400,
  [SMALL_STATE(25)] = 1456,
  [SMALL_STATE(26)] = 1512,
  [SMALL_STATE(27)] = 1568,
  [SMALL_STATE(28)] = 1624,
  [SMALL_STATE(29)] = 1680,
  [SMALL_STATE(30)] = 1736,
  [SMALL_STATE(31)] = 1792,
  [SMALL_STATE(32)] = 1818,
  [SMALL_STATE(33)] = 1874,
  [SMALL_STATE(34)] = 1930,
  [SMALL_STATE(35)] = 1983,
  [SMALL_STATE(36)] = 2010,
  [SMALL_STATE(37)] = 2063,
  [SMALL_STATE(38)] = 2116,
  [SMALL_STATE(39)] = 2143,
  [SMALL_STATE(40)] = 2174,
  [SMALL_STATE(41)] = 2224,
  [SMALL_STATE(42)] = 2248,
  [SMALL_STATE(43)] = 2272,
  [SMALL_STATE(44)] = 2322,
  [SMALL_STATE(45)] = 2346,
  [SMALL_STATE(46)] = 2396,
  [SMALL_STATE(47)] = 2420,
  [SMALL_STATE(48)] = 2444,
  [SMALL_STATE(49)] = 2468,
  [SMALL_STATE(50)] = 2511,
  [SMALL_STATE(51)] = 2534,
  [SMALL_STATE(52)] = 2577,
  [SMALL_STATE(53)] = 2624,
  [SMALL_STATE(54)] = 2668,
  [SMALL_STATE(55)] = 2712,
  [SMALL_STATE(56)] = 2756,
  [SMALL_STATE(57)] = 2800,
  [SMALL_STATE(58)] = 2844,
  [SMALL_STATE(59)] = 2888,
  [SMALL_STATE(60)] = 2932,
  [SMALL_STATE(61)] = 2976,
  [SMALL_STATE(62)] = 3020,
  [SMALL_STATE(63)] = 3064,
  [SMALL_STATE(64)] = 3085,
  [SMALL_STATE(65)] = 3106,
  [SMALL_STATE(66)] = 3131,
  [SMALL_STATE(67)] = 3154,
  [SMALL_STATE(68)] = 3177,
  [SMALL_STATE(69)] = 3198,
  [SMALL_STATE(70)] = 3219,
  [SMALL_STATE(71)] = 3240,
  [SMALL_STATE(72)] = 3261,
  [SMALL_STATE(73)] = 3282,
  [SMALL_STATE(74)] = 3302,
  [SMALL_STATE(75)] = 3322,
  [SMALL_STATE(76)] = 3342,
  [SMALL_STATE(77)] = 3362,
  [SMALL_STATE(78)] = 3382,
  [SMALL_STATE(79)] = 3402,
  [SMALL_STATE(80)] = 3422,
  [SMALL_STATE(81)] = 3458,
  [SMALL_STATE(82)] = 3478,
  [SMALL_STATE(83)] = 3498,
  [SMALL_STATE(84)] = 3518,
  [SMALL_STATE(85)] = 3538,
  [SMALL_STATE(86)] = 3558,
  [SMALL_STATE(87)] = 3578,
  [SMALL_STATE(88)] = 3598,
  [SMALL_STATE(89)] = 3618,
  [SMALL_STATE(90)] = 3638,
  [SMALL_STATE(91)] = 3658,
  [SMALL_STATE(92)] = 3678,
  [SMALL_STATE(93)] = 3702,
  [SMALL_STATE(94)] = 3737,
  [SMALL_STATE(95)] = 3770,
  [SMALL_STATE(96)] = 3793,
  [SMALL_STATE(97)] = 3812,
  [SMALL_STATE(98)] = 3845,
  [SMALL_STATE(99)] = 3865,
  [SMALL_STATE(100)] = 3887,
  [SMALL_STATE(101)] = 3919,
  [SMALL_STATE(102)] = 3941,
  [SMALL_STATE(103)] = 3959,
  [SMALL_STATE(104)] = 3979,
  [SMALL_STATE(105)] = 4011,
  [SMALL_STATE(106)] = 4033,
  [SMALL_STATE(107)] = 4060,
  [SMALL_STATE(108)] = 4079,
  [SMALL_STATE(109)] = 4098,
  [SMALL_STATE(110)] = 4117,
  [SMALL_STATE(111)] = 4148,
  [SMALL_STATE(112)] = 4179,
  [SMALL_STATE(113)] = 4210,
  [SMALL_STATE(114)] = 4235,
  [SMALL_STATE(115)] = 4252,
  [SMALL_STATE(116)] = 4283,
  [SMALL_STATE(117)] = 4303,
  [SMALL_STATE(118)] = 4319,
  [SMALL_STATE(119)] = 4333,
  [SMALL_STATE(120)] = 4353,
  [SMALL_STATE(121)] = 4369,
  [SMALL_STATE(122)] = 4385,
  [SMALL_STATE(123)] = 4405,
  [SMALL_STATE(124)] = 4421,
  [SMALL_STATE(125)] = 4449,
  [SMALL_STATE(126)] = 4473,
  [SMALL_STATE(127)] = 4486,
  [SMALL_STATE(128)] = 4499,
  [SMALL_STATE(129)] = 4516,
  [SMALL_STATE(130)] = 4535,
  [SMALL_STATE(131)] = 4552,
  [SMALL_STATE(132)] = 4571,
  [SMALL_STATE(133)] = 4588,
  [SMALL_STATE(134)] = 4605,
  [SMALL_STATE(135)] = 4618,
  [SMALL_STATE(136)] = 4639,
  [SMALL_STATE(137)] = 4664,
  [SMALL_STATE(138)] = 4677,
  [SMALL_STATE(139)] = 4696,
  [SMALL_STATE(140)] = 4713,
  [SMALL_STATE(141)] = 4726,
  [SMALL_STATE(142)] = 4739,
  [SMALL_STATE(143)] = 4756,
  [SMALL_STATE(144)] = 4768,
  [SMALL_STATE(145)] = 4780,
  [SMALL_STATE(146)] = 4792,
  [SMALL_STATE(147)] = 4804,
  [SMALL_STATE(148)] = 4816,
  [SMALL_STATE(149)] = 4828,
  [SMALL_STATE(150)] = 4840,
  [SMALL_STATE(151)] = 4852,
  [SMALL_STATE(152)] = 4872,
  [SMALL_STATE(153)] = 4894,
  [SMALL_STATE(154)] = 4906,
  [SMALL_STATE(155)] = 4918,
  [SMALL_STATE(156)] = 4930,
  [SMALL_STATE(157)] = 4942,
  [SMALL_STATE(158)] = 4954,
  [SMALL_STATE(159)] = 4966,
  [SMALL_STATE(160)] = 4978,
  [SMALL_STATE(161)] = 4998,
  [SMALL_STATE(162)] = 5010,
  [SMALL_STATE(163)] = 5022,
  [SMALL_STATE(164)] = 5042,
  [SMALL_STATE(165)] = 5054,
  [SMALL_STATE(166)] = 5066,
  [SMALL_STATE(167)] = 5078,
  [SMALL_STATE(168)] = 5090,
  [SMALL_STATE(169)] = 5102,
  [SMALL_STATE(170)] = 5114,
  [SMALL_STATE(171)] = 5126,
  [SMALL_STATE(172)] = 5138,
  [SMALL_STATE(173)] = 5150,
  [SMALL_STATE(174)] = 5172,
  [SMALL_STATE(175)] = 5186,
  [SMALL_STATE(176)] = 5206,
  [SMALL_STATE(177)] = 5228,
  [SMALL_STATE(178)] = 5245,
  [SMALL_STATE(179)] = 5264,
  [SMALL_STATE(180)] = 5283,
  [SMALL_STATE(181)] = 5302,
  [SMALL_STATE(182)] = 5321,
  [SMALL_STATE(183)] = 5340,
  [SMALL_STATE(184)] = 5359,
  [SMALL_STATE(185)] = 5378,
  [SMALL_STATE(186)] = 5393,
  [SMALL_STATE(187)] = 5410,
  [SMALL_STATE(188)] = 5429,
  [SMALL_STATE(189)] = 5448,
  [SMALL_STATE(190)] = 5467,
  [SMALL_STATE(191)] = 5486,
  [SMALL_STATE(192)] = 5501,
  [SMALL_STATE(193)] = 5516,
  [SMALL_STATE(194)] = 5533,
  [SMALL_STATE(195)] = 5548,
  [SMALL_STATE(196)] = 5565,
  [SMALL_STATE(197)] = 5584,
  [SMALL_STATE(198)] = 5599,
  [SMALL_STATE(199)] = 5618,
  [SMALL_STATE(200)] = 5635,
  [SMALL_STATE(201)] = 5650,
  [SMALL_STATE(202)] = 5664,
  [SMALL_STATE(203)] = 5678,
  [SMALL_STATE(204)] = 5694,
  [SMALL_STATE(205)] = 5704,
  [SMALL_STATE(206)] = 5718,
  [SMALL_STATE(207)] = 5732,
  [SMALL_STATE(208)] = 5744,
  [SMALL_STATE(209)] = 5758,
  [SMALL_STATE(210)] = 5768,
  [SMALL_STATE(211)] = 5778,
  [SMALL_STATE(212)] = 5790,
  [SMALL_STATE(213)] = 5804,
  [SMALL_STATE(214)] = 5814,
  [SMALL_STATE(215)] = 5828,
  [SMALL_STATE(216)] = 5838,
  [SMALL_STATE(217)] = 5848,
  [SMALL_STATE(218)] = 5860,
  [SMALL_STATE(219)] = 5872,
  [SMALL_STATE(220)] = 5882,
  [SMALL_STATE(221)] = 5892,
  [SMALL_STATE(222)] = 5902,
  [SMALL_STATE(223)] = 5914,
  [SMALL_STATE(224)] = 5926,
  [SMALL_STATE(225)] = 5942,
  [SMALL_STATE(226)] = 5952,
  [SMALL_STATE(227)] = 5968,
  [SMALL_STATE(228)] = 5981,
  [SMALL_STATE(229)] = 5994,
  [SMALL_STATE(230)] = 6007,
  [SMALL_STATE(231)] = 6020,
  [SMALL_STATE(232)] = 6031,
  [SMALL_STATE(233)] = 6044,
  [SMALL_STATE(234)] = 6057,
  [SMALL_STATE(235)] = 6070,
  [SMALL_STATE(236)] = 6083,
  [SMALL_STATE(237)] = 6096,
  [SMALL_STATE(238)] = 6109,
  [SMALL_STATE(239)] = 6120,
  [SMALL_STATE(240)] = 6133,
  [SMALL_STATE(241)] = 6142,
  [SMALL_STATE(242)] = 6155,
  [SMALL_STATE(243)] = 6164,
  [SMALL_STATE(244)] = 6177,
  [SMALL_STATE(245)] = 6190,
  [SMALL_STATE(246)] = 6203,
  [SMALL_STATE(247)] = 6213,
  [SMALL_STATE(248)] = 6221,
  [SMALL_STATE(249)] = 6229,
  [SMALL_STATE(250)] = 6239,
  [SMALL_STATE(251)] = 6249,
  [SMALL_STATE(252)] = 6257,
  [SMALL_STATE(253)] = 6267,
  [SMALL_STATE(254)] = 6277,
  [SMALL_STATE(255)] = 6285,
  [SMALL_STATE(256)] = 6293,
  [SMALL_STATE(257)] = 6301,
  [SMALL_STATE(258)] = 6309,
  [SMALL_STATE(259)] = 6319,
  [SMALL_STATE(260)] = 6327,
  [SMALL_STATE(261)] = 6337,
  [SMALL_STATE(262)] = 6345,
  [SMALL_STATE(263)] = 6355,
  [SMALL_STATE(264)] = 6363,
  [SMALL_STATE(265)] = 6371,
  [SMALL_STATE(266)] = 6379,
  [SMALL_STATE(267)] = 6387,
  [SMALL_STATE(268)] = 6397,
  [SMALL_STATE(269)] = 6407,
  [SMALL_STATE(270)] = 6415,
  [SMALL_STATE(271)] = 6423,
  [SMALL_STATE(272)] = 6433,
  [SMALL_STATE(273)] = 6441,
  [SMALL_STATE(274)] = 6449,
  [SMALL_STATE(275)] = 6457,
  [SMALL_STATE(276)] = 6467,
  [SMALL_STATE(277)] = 6477,
  [SMALL_STATE(278)] = 6484,
  [SMALL_STATE(279)] = 6491,
  [SMALL_STATE(280)] = 6498,
  [SMALL_STATE(281)] = 6505,
  [SMALL_STATE(282)] = 6512,
  [SMALL_STATE(283)] = 6519,
  [SMALL_STATE(284)] = 6526,
  [SMALL_STATE(285)] = 6533,
  [SMALL_STATE(286)] = 6540,
  [SMALL_STATE(287)] = 6547,
  [SMALL_STATE(288)] = 6554,
  [SMALL_STATE(289)] = 6561,
  [SMALL_STATE(290)] = 6568,
  [SMALL_STATE(291)] = 6575,
  [SMALL_STATE(292)] = 6582,
  [SMALL_STATE(293)] = 6589,
  [SMALL_STATE(294)] = 6596,
  [SMALL_STATE(295)] = 6603,
  [SMALL_STATE(296)] = 6610,
  [SMALL_STATE(297)] = 6617,
  [SMALL_STATE(298)] = 6624,
  [SMALL_STATE(299)] = 6631,
  [SMALL_STATE(300)] = 6638,
  [SMALL_STATE(301)] = 6645,
  [SMALL_STATE(302)] = 6652,
  [SMALL_STATE(303)] = 6659,
  [SMALL_STATE(304)] = 6666,
  [SMALL_STATE(305)] = 6673,
  [SMALL_STATE(306)] = 6680,
  [SMALL_STATE(307)] = 6687,
  [SMALL_STATE(308)] = 6694,
  [SMALL_STATE(309)] = 6701,
  [SMALL_STATE(310)] = 6708,
  [SMALL_STATE(311)] = 6715,
  [SMALL_STATE(312)] = 6722,
  [SMALL_STATE(313)] = 6729,
  [SMALL_STATE(314)] = 6736,
  [SMALL_STATE(315)] = 6743,
  [SMALL_STATE(316)] = 6750,
  [SMALL_STATE(317)] = 6757,
  [SMALL_STATE(318)] = 6764,
  [SMALL_STATE(319)] = 6771,
  [SMALL_STATE(320)] = 6778,
  [SMALL_STATE(321)] = 6785,
  [SMALL_STATE(322)] = 6792,
  [SMALL_STATE(323)] = 6799,
  [SMALL_STATE(324)] = 6806,
  [SMALL_STATE(325)] = 6813,
  [SMALL_STATE(326)] = 6820,
  [SMALL_STATE(327)] = 6827,
  [SMALL_STATE(328)] = 6834,
  [SMALL_STATE(329)] = 6841,
  [SMALL_STATE(330)] = 6848,
  [SMALL_STATE(331)] = 6855,
  [SMALL_STATE(332)] = 6862,
  [SMALL_STATE(333)] = 6869,
  [SMALL_STATE(334)] = 6876,
  [SMALL_STATE(335)] = 6883,
  [SMALL_STATE(336)] = 6890,
  [SMALL_STATE(337)] = 6897,
  [SMALL_STATE(338)] = 6904,
  [SMALL_STATE(339)] = 6911,
  [SMALL_STATE(340)] = 6918,
  [SMALL_STATE(341)] = 6925,
  [SMALL_STATE(342)] = 6932,
  [SMALL_STATE(343)] = 6939,
  [SMALL_STATE(344)] = 6946,
  [SMALL_STATE(345)] = 6953,
  [SMALL_STATE(346)] = 6960,
  [SMALL_STATE(347)] = 6967,
  [SMALL_STATE(348)] = 6974,
  [SMALL_STATE(349)] = 6981,
  [SMALL_STATE(350)] = 6988,
  [SMALL_STATE(351)] = 6995,
  [SMALL_STATE(352)] = 7002,
  [SMALL_STATE(353)] = 7009,
  [SMALL_STATE(354)] = 7016,
  [SMALL_STATE(355)] = 7023,
  [SMALL_STATE(356)] = 7030,
  [SMALL_STATE(357)] = 7037,
  [SMALL_STATE(358)] = 7044,
  [SMALL_STATE(359)] = 7051,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_body, 1),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(22),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(61),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(30),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(187),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(121),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(64),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(64),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(280),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(103),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(50),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(22),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(61),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(29),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(182),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(121),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(64),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(64),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(280),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(98),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(50),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dom_sentences, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(61),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(28),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(13),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(187),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(121),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(64),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(64),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(280),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(109),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(50),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_body, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(340),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(358),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(354),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(249),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(351),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 1),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 1),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term, 2),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_term, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term, 3),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_term, 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term, 1),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_term, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term, 4, .production_id = 2),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_term, 4, .production_id = 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_sentence_config, 2),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trans_sentence_config, 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl, 4),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_decl, 4),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_sentence, 1),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trans_sentence, 1),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_sentence_config, 1),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trans_sentence_config, 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_sentence, 3),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trans_sentence, 3),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 4),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dom_sentence, 1),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dom_sentence, 1),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dom_sentence_config, 2),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dom_sentence_config, 2),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_fact_list, 4),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_fact_list, 4),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dom_sentence_config, 1),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dom_sentence_config, 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_contract_conf, 2),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_contract_conf, 2),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_fact_list, 2),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_fact_list, 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_sentence, 1),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_sentence, 1),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_contract_conf, 1),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_contract_conf, 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_contract, 5),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_contract, 5),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_contract, 3),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_contract, 3),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_fact_list, 3),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_fact_list, 3),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dom_sentence, 3),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dom_sentence, 3),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_or_compr, 1),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_machine_body_repeat1, 2),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_machine_body_repeat1, 2), SHIFT_REPEAT(180),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_machine_body_repeat1, 2), SHIFT_REPEAT(179),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_machine_body_repeat1, 2), SHIFT_REPEAT(277),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_machine_body_repeat1, 2), SHIFT_REPEAT(190),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sentence_config, 3),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sentence_config, 3),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_body, 1),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 3),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trans_steps_repeat1, 2),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_steps_repeat1, 2), SHIFT_REPEAT(181),
  [387] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trans_steps_repeat1, 2), SHIFT_REPEAT(50),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_steps_repeat1, 2), SHIFT_REPEAT(50),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 4),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_steps, 1),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 2),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_ref_no_rename, 1),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain_sig, 2, .production_id = 1),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_ref_rename, 3),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_app_arg, 1),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_ref_rename, 5),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_fact, 3),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binop, 1),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binop, 1),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unop, 1),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unop, 1),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_fact, 1),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relop, 1),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relop, 1),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compr_rest, 1),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 3),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term_list, 2),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unnbody_repeat1, 2),
  [463] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unnbody_repeat1, 2), SHIFT_REPEAT(198),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term_list, 1),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unnbody, 2),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compr, 3),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain_sig, 3, .production_id = 1),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_ref, 1),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_term_list_repeat1, 2),
  [488] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_term_list_repeat1, 2), SHIFT_REPEAT(34),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compr_rest, 3),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_ref_no_rename, 3),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unnbody, 1),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model, 4),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unncmp, 3),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform, 3),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain, 4),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tsystem_rest, 4),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model, 3),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_prop, 5),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sentence, 1),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform_rest, 3),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sentence_conf, 1),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain, 3),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sentence_conf, 2),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine, 4),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sentence, 2),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeid, 1),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unncmp, 1),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 4),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 4),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine, 3),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tsystem_rest, 3),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform_rest, 4),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tsystem, 4),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fields, 2),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [557] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(45),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fields_repeat1, 2),
  [570] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fields_repeat1, 2), SHIFT_REPEAT(124),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fields, 1),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_list, 2),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sig_config, 1),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_machine_sig_config_repeat1, 2),
  [585] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_machine_sig_config_repeat1, 2), SHIFT_REPEAT(340),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maparrow, 1),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_maparrow, 1),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_list_repeat1, 2),
  [594] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_list_repeat1, 2), SHIFT_REPEAT(37),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_step_config, 2),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trans_step_config, 2),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_list, 1),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_intro, 4),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_sig, 1),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_step, 4),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_intro, 5),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_step_config, 1),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trans_step_config, 1),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_refs, 1),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_list, 2),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_list, 2),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform_sig_config, 1),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_param_list, 2),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_param_list, 1),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_list, 1),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_sig_config, 1),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_model_param_list_repeat1, 2),
  [651] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_param_list_repeat1, 2), SHIFT_REPEAT(271),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_list_repeat1, 2),
  [656] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_list_repeat1, 2), SHIFT_REPEAT(125),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_cnst, 1),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [663] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setting_list_repeat1, 2), SHIFT_REPEAT(224),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_setting_list_repeat1, 2),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_refs, 3),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_list, 1),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain_sig_config, 1),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_apply, 3),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sig, 5),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_list, 1),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_app_arg, 3),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_val_or_model_program, 1),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_apply, 4),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_or_update_lhs, 1),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vom_param_list, 1),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_cnst, 3),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain_sig, 4, .production_id = 1),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_sig, 3),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform_sig, 5),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_val_or_model_program, 3),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_arg_list, 1),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sig_in, 3),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_sig_in, 2),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform_sig_config, 2),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl_body, 3),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vom_param_list, 3),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_list, 3),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sig_in, 2),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl_body, 1),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_decl, 1),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl_body, 4),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain_sig_config, 2),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_arg_list, 3),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl_body, 6),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_sig_config, 2),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_card_spec, 1),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [862] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [888] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_or_update_lhs, 3),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_sig_in, 3),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_formula(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
