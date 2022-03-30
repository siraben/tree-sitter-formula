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
#define STATE_COUNT 377
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 174
#define ALIAS_COUNT 0
#define TOKEN_COUNT 69
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 4

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
  anon_sym_partial = 23,
  anon_sym_model = 24,
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
  sym_digits = 48,
  sym_real = 49,
  sym_frac = 50,
  anon_sym_DQUOTE = 51,
  aux_sym_string_token1 = 52,
  anon_sym_DOT_DOT = 53,
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
  aux_sym_bareid_token1 = 65,
  aux_sym_bareid_token2 = 66,
  sym_qualid = 67,
  sym_comment = 68,
  sym_program = 69,
  sym_module = 70,
  sym_machine = 71,
  sym_machine_body = 72,
  sym_machine_sentence_conf = 73,
  sym_machine_sentence = 74,
  sym_machine_prop = 75,
  sym_machine_sig_config = 76,
  sym_machine_sig = 77,
  sym_machine_sig_in = 78,
  sym_model = 79,
  sym_model_body = 80,
  sym_model_sentence = 81,
  sym_model_contract_conf = 82,
  sym_model_contract = 83,
  sym_model_fact_list = 84,
  sym_model_fact = 85,
  sym_card_spec = 86,
  sym_model_sig_config = 87,
  sym_model_sig = 88,
  sym_model_intro = 89,
  sym_tsystem = 90,
  sym_tsystem_rest = 91,
  sym_trans_steps = 92,
  sym_trans_step_config = 93,
  sym_transform = 94,
  sym_transform_rest = 95,
  sym_trans_body = 96,
  sym_trans_sentence_config = 97,
  sym_trans_sentence = 98,
  sym_transform_sig_config = 99,
  sym_transform_sig = 100,
  sym_trans_sig_in = 101,
  sym_domain = 102,
  sym_dom_sentences = 103,
  sym_dom_sentence_config = 104,
  sym_dom_sentence = 105,
  sym_domain_sig_config = 106,
  sym_domain_sig = 107,
  sym_config = 108,
  sym_sentence_config = 109,
  sym_setting_list = 110,
  sym_setting = 111,
  sym_model_param_list = 112,
  sym_val_or_model_program = 113,
  sym_vom_param_list = 114,
  sym_update = 115,
  sym_step = 116,
  sym_choice_list = 117,
  sym_mod_apply = 118,
  sym_mod_arg_list = 119,
  sym_mod_app_arg = 120,
  sym_step_or_update_lhs = 121,
  sym_mod_refs = 122,
  sym_mod_ref = 123,
  sym_mod_ref_rename = 124,
  sym_mod_ref_no_rename = 125,
  sym_type_decl = 126,
  sym_type_decl_body = 127,
  sym_fun_decl = 128,
  sym_fields = 129,
  sym_field = 130,
  sym_maparrow = 131,
  sym_unnbody = 132,
  sym_unncmp = 133,
  sym_typeid = 134,
  sym_enum_list = 135,
  sym_enum_cnst = 136,
  sym_string = 137,
  sym_range = 138,
  sym_rule = 139,
  sym_compr = 140,
  sym_body_list = 141,
  sym_body = 142,
  sym_constraint = 143,
  sym_func_term_list = 144,
  sym_func_or_compr = 145,
  sym_func_term = 146,
  sym_atom = 147,
  sym_id = 148,
  sym_constant = 149,
  sym_unop = 150,
  sym_binop = 151,
  sym_relop = 152,
  sym_bareid = 153,
  aux_sym_program_repeat1 = 154,
  aux_sym_machine_body_repeat1 = 155,
  aux_sym_machine_sig_config_repeat1 = 156,
  aux_sym_model_body_repeat1 = 157,
  aux_sym_trans_steps_repeat1 = 158,
  aux_sym_trans_body_repeat1 = 159,
  aux_sym_dom_sentences_repeat1 = 160,
  aux_sym_setting_list_repeat1 = 161,
  aux_sym_model_param_list_repeat1 = 162,
  aux_sym_vom_param_list_repeat1 = 163,
  aux_sym_choice_list_repeat1 = 164,
  aux_sym_mod_arg_list_repeat1 = 165,
  aux_sym_step_or_update_lhs_repeat1 = 166,
  aux_sym_mod_refs_repeat1 = 167,
  aux_sym_fields_repeat1 = 168,
  aux_sym_unnbody_repeat1 = 169,
  aux_sym_enum_list_repeat1 = 170,
  aux_sym_body_list_repeat1 = 171,
  aux_sym_body_repeat1 = 172,
  aux_sym_func_term_list_repeat1 = 173,
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
  [anon_sym_partial] = "partial",
  [anon_sym_model] = "model",
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
  [sym_digits] = "digits",
  [sym_real] = "real",
  [sym_frac] = "frac",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_DOT_DOT] = "..",
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
  [aux_sym_bareid_token1] = "bareid_token1",
  [aux_sym_bareid_token2] = "bareid_token2",
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
  [sym_range] = "range",
  [sym_rule] = "rule",
  [sym_compr] = "compr",
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
  [sym_bareid] = "bareid",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_machine_body_repeat1] = "machine_body_repeat1",
  [aux_sym_machine_sig_config_repeat1] = "machine_sig_config_repeat1",
  [aux_sym_model_body_repeat1] = "model_body_repeat1",
  [aux_sym_trans_steps_repeat1] = "trans_steps_repeat1",
  [aux_sym_trans_body_repeat1] = "trans_body_repeat1",
  [aux_sym_dom_sentences_repeat1] = "dom_sentences_repeat1",
  [aux_sym_setting_list_repeat1] = "setting_list_repeat1",
  [aux_sym_model_param_list_repeat1] = "model_param_list_repeat1",
  [aux_sym_vom_param_list_repeat1] = "vom_param_list_repeat1",
  [aux_sym_choice_list_repeat1] = "choice_list_repeat1",
  [aux_sym_mod_arg_list_repeat1] = "mod_arg_list_repeat1",
  [aux_sym_step_or_update_lhs_repeat1] = "step_or_update_lhs_repeat1",
  [aux_sym_mod_refs_repeat1] = "mod_refs_repeat1",
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
  [anon_sym_partial] = anon_sym_partial,
  [anon_sym_model] = anon_sym_model,
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
  [sym_digits] = sym_digits,
  [sym_real] = sym_real,
  [sym_frac] = sym_frac,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
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
  [aux_sym_bareid_token1] = aux_sym_bareid_token1,
  [aux_sym_bareid_token2] = aux_sym_bareid_token2,
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
  [sym_range] = sym_range,
  [sym_rule] = sym_rule,
  [sym_compr] = sym_compr,
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
  [sym_bareid] = sym_bareid,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_machine_body_repeat1] = aux_sym_machine_body_repeat1,
  [aux_sym_machine_sig_config_repeat1] = aux_sym_machine_sig_config_repeat1,
  [aux_sym_model_body_repeat1] = aux_sym_model_body_repeat1,
  [aux_sym_trans_steps_repeat1] = aux_sym_trans_steps_repeat1,
  [aux_sym_trans_body_repeat1] = aux_sym_trans_body_repeat1,
  [aux_sym_dom_sentences_repeat1] = aux_sym_dom_sentences_repeat1,
  [aux_sym_setting_list_repeat1] = aux_sym_setting_list_repeat1,
  [aux_sym_model_param_list_repeat1] = aux_sym_model_param_list_repeat1,
  [aux_sym_vom_param_list_repeat1] = aux_sym_vom_param_list_repeat1,
  [aux_sym_choice_list_repeat1] = aux_sym_choice_list_repeat1,
  [aux_sym_mod_arg_list_repeat1] = aux_sym_mod_arg_list_repeat1,
  [aux_sym_step_or_update_lhs_repeat1] = aux_sym_step_or_update_lhs_repeat1,
  [aux_sym_mod_refs_repeat1] = aux_sym_mod_refs_repeat1,
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
  [anon_sym_partial] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_model] = {
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
  [anon_sym_DOT_DOT] = {
    .visible = true,
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
  [aux_sym_bareid_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bareid_token2] = {
    .visible = false,
    .named = false,
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
  [sym_range] = {
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
  [sym_bareid] = {
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
  [aux_sym_vom_param_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_choice_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mod_arg_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_step_or_update_lhs_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mod_refs_repeat1] = {
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
  field_type = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 0},
  [2] =
    {field_type, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(148);
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '%') ADVANCE(236);
      if (lookahead == '(') ADVANCE(161);
      if (lookahead == ')') ADVANCE(162);
      if (lookahead == '*') ADVANCE(234);
      if (lookahead == '+') ADVANCE(217);
      if (lookahead == ',') ADVANCE(168);
      if (lookahead == '-') ADVANCE(202);
      if (lookahead == '.') ADVANCE(158);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead == ':') ADVANCE(192);
      if (lookahead == ';') ADVANCE(194);
      if (lookahead == '<') ADVANCE(239);
      if (lookahead == '=') ADVANCE(156);
      if (lookahead == '>') ADVANCE(241);
      if (lookahead == '@') ADVANCE(199);
      if (lookahead == '[') ADVANCE(189);
      if (lookahead == ']') ADVANCE(190);
      if (lookahead == 'a') ADVANCE(79);
      if (lookahead == 'b') ADVANCE(62);
      if (lookahead == 'c') ADVANCE(90);
      if (lookahead == 'd') ADVANCE(167);
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead == 'f') ADVANCE(130);
      if (lookahead == 'i') ADVANCE(81);
      if (lookahead == 'm') ADVANCE(32);
      if (lookahead == 'n') ADVANCE(46);
      if (lookahead == 'o') ADVANCE(58);
      if (lookahead == 'p') ADVANCE(34);
      if (lookahead == 'r') ADVANCE(47);
      if (lookahead == 's') ADVANCE(91);
      if (lookahead == 't') ADVANCE(100);
      if (lookahead == '{') ADVANCE(149);
      if (lookahead == '|') ADVANCE(231);
      if (lookahead == '}') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == '*') ADVANCE(225);
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '%') ADVANCE(236);
      if (lookahead == '(') ADVANCE(161);
      if (lookahead == ')') ADVANCE(162);
      if (lookahead == '*') ADVANCE(234);
      if (lookahead == '+') ADVANCE(217);
      if (lookahead == ',') ADVANCE(168);
      if (lookahead == '-') ADVANCE(202);
      if (lookahead == '.') ADVANCE(157);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead == ':') ADVANCE(193);
      if (lookahead == ';') ADVANCE(194);
      if (lookahead == '<') ADVANCE(239);
      if (lookahead == '=') ADVANCE(156);
      if (lookahead == '>') ADVANCE(241);
      if (lookahead == '[') ADVANCE(189);
      if (lookahead == 'e') ADVANCE(307);
      if (lookahead == 'i') ADVANCE(299);
      if (lookahead == '{') ADVANCE(149);
      if (lookahead == '}') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '%') ADVANCE(236);
      if (lookahead == '(') ADVANCE(161);
      if (lookahead == '*') ADVANCE(234);
      if (lookahead == '+') ADVANCE(217);
      if (lookahead == ',') ADVANCE(168);
      if (lookahead == '-') ADVANCE(201);
      if (lookahead == '.') ADVANCE(157);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead == ':') ADVANCE(193);
      if (lookahead == ';') ADVANCE(194);
      if (lookahead == '<') ADVANCE(239);
      if (lookahead == '=') ADVANCE(155);
      if (lookahead == '>') ADVANCE(241);
      if (lookahead == '@') ADVANCE(199);
      if (lookahead == '[') ADVANCE(189);
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead == 'i') ADVANCE(85);
      if (lookahead == 'm') ADVANCE(31);
      if (lookahead == '{') ADVANCE(149);
      if (lookahead == '}') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '%') ADVANCE(237);
      if (lookahead == '(') ADVANCE(161);
      if (lookahead == ')') ADVANCE(162);
      if (lookahead == '-') ADVANCE(201);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '[') ADVANCE(189);
      if (lookahead == '{') ADVANCE(149);
      if (lookahead == '}') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '%') ADVANCE(237);
      if (lookahead == '(') ADVANCE(161);
      if (lookahead == ',') ADVANCE(168);
      if (lookahead == '-') ADVANCE(201);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == ':') ADVANCE(193);
      if (lookahead == '=') ADVANCE(155);
      if (lookahead == '[') ADVANCE(189);
      if (lookahead == 'e') ADVANCE(259);
      if (lookahead == 'r') ADVANCE(245);
      if (lookahead == '{') ADVANCE(149);
      if (lookahead == '}') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '%') ADVANCE(237);
      if (lookahead == '(') ADVANCE(161);
      if (lookahead == '-') ADVANCE(201);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '[') ADVANCE(189);
      if (lookahead == 'c') ADVANCE(265);
      if (lookahead == '{') ADVANCE(149);
      if (lookahead == '}') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '%') ADVANCE(237);
      if (lookahead == '(') ADVANCE(161);
      if (lookahead == '-') ADVANCE(201);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == 'a') ADVANCE(280);
      if (lookahead == 'n') ADVANCE(264);
      if (lookahead == 's') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '%') ADVANCE(237);
      if (lookahead == '(') ADVANCE(161);
      if (lookahead == '-') ADVANCE(201);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '%') ADVANCE(236);
      if (lookahead == ')') ADVANCE(162);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '[') ADVANCE(189);
      if (lookahead == '{') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '%') ADVANCE(236);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == 's') ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '%') ADVANCE(237);
      if (lookahead == '(') ADVANCE(161);
      if (lookahead == '-') ADVANCE(201);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == 'b') ADVANCE(252);
      if (lookahead == 'f') ADVANCE(286);
      if (lookahead == 'i') ADVANCE(263);
      if (lookahead == 'n') ADVANCE(248);
      if (lookahead == 's') ADVANCE(285);
      if (lookahead == '{') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '%') ADVANCE(237);
      if (lookahead == ')') ADVANCE(162);
      if (lookahead == '+') ADVANCE(217);
      if (lookahead == ',') ADVANCE(168);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '.') ADVANCE(157);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == ':') ADVANCE(191);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(262);
      if (lookahead == '{') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == '%') ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 14:
      if (lookahead == '%') ADVANCE(236);
      if (lookahead == '(') ADVANCE(161);
      if (lookahead == ')') ADVANCE(162);
      if (lookahead == '*') ADVANCE(234);
      if (lookahead == '+') ADVANCE(217);
      if (lookahead == ',') ADVANCE(168);
      if (lookahead == '-') ADVANCE(201);
      if (lookahead == '.') ADVANCE(157);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == ';') ADVANCE(194);
      if (lookahead == '=') ADVANCE(155);
      if (lookahead == '[') ADVANCE(189);
      if (lookahead == ']') ADVANCE(190);
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead == 'i') ADVANCE(85);
      if (lookahead == 'm') ADVANCE(31);
      if (lookahead == '{') ADVANCE(149);
      if (lookahead == '|') ADVANCE(231);
      if (lookahead == '}') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(15);
      if (lookahead == '.') ADVANCE(145);
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(15);
      if (lookahead == '.') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '/') ADVANCE(321);
      END_STATE();
    case 18:
      if (lookahead == '*') ADVANCE(22);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == ':') ADVANCE(198);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == ':') ADVANCE(26);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(229);
      END_STATE();
    case 22:
      if (lookahead == '/') ADVANCE(320);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 23:
      if (lookahead == '0') ADVANCE(24);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(24);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(221);
      END_STATE();
    case 24:
      if (lookahead == '0') ADVANCE(24);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(221);
      END_STATE();
    case 25:
      if (lookahead == '=') ADVANCE(238);
      END_STATE();
    case 26:
      if (lookahead == '=') ADVANCE(200);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(215);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(216);
      END_STATE();
    case 29:
      if (lookahead == ']') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == ']') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(108);
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(72);
      if (lookahead == 'i') ADVANCE(121);
      if (lookahead == 'j') ADVANCE(205);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(52);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(110);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(55);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(135);
      if (lookahead == 'o') ADVANCE(232);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 58:
      if (lookahead == 'f') ADVANCE(160);
      END_STATE();
    case 59:
      if (lookahead == 'f') ADVANCE(96);
      END_STATE();
    case 60:
      if (lookahead == 'f') ADVANCE(97);
      END_STATE();
    case 61:
      if (lookahead == 'h') ADVANCE(64);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(68);
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 68:
      if (lookahead == 'j') ADVANCE(207);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(181);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(180);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 74:
      if (lookahead == 'm') ADVANCE(183);
      END_STATE();
    case 75:
      if (lookahead == 'm') ADVANCE(182);
      END_STATE();
    case 76:
      if (lookahead == 'm') ADVANCE(48);
      END_STATE();
    case 77:
      if (lookahead == 'm') ADVANCE(38);
      END_STATE();
    case 78:
      if (lookahead == 'm') ADVANCE(112);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(137);
      if (lookahead == 't') ADVANCE(196);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(115);
      if (lookahead == 'x') ADVANCE(127);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(41);
      if (lookahead == 's') ADVANCE(169);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(211);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(188);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(40);
      if (lookahead == 's') ADVANCE(169);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(76);
      if (lookahead == 'u') ADVANCE(101);
      if (lookahead == 'y') ADVANCE(118);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 98:
      if (lookahead == 'p') ADVANCE(57);
      END_STATE();
    case 99:
      if (lookahead == 'q') ADVANCE(131);
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(209);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 109:
      if (lookahead == 's') ADVANCE(163);
      END_STATE();
    case 110:
      if (lookahead == 's') ADVANCE(178);
      END_STATE();
    case 111:
      if (lookahead == 's') ADVANCE(185);
      END_STATE();
    case 112:
      if (lookahead == 's') ADVANCE(186);
      END_STATE();
    case 113:
      if (lookahead == 's') ADVANCE(176);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(165);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(132);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 117:
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 118:
      if (lookahead == 's') ADVANCE(128);
      END_STATE();
    case 119:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(195);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 130:
      if (lookahead == 'u') ADVANCE(82);
      END_STATE();
    case 131:
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 132:
      if (lookahead == 'u') ADVANCE(105);
      END_STATE();
    case 133:
      if (lookahead == 'u') ADVANCE(106);
      END_STATE();
    case 134:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 135:
      if (lookahead == 'w') ADVANCE(203);
      if (lookahead == 'x') ADVANCE(122);
      END_STATE();
    case 136:
      if (lookahead == 'x') ADVANCE(127);
      END_STATE();
    case 137:
      if (lookahead == 'y') ADVANCE(213);
      END_STATE();
    case 138:
      if (lookahead == 'y') ADVANCE(154);
      END_STATE();
    case 139:
      if (lookahead == 'y') ADVANCE(152);
      END_STATE();
    case 140:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      END_STATE();
    case 141:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 142:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 143:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 144:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 145:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 146:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(228);
      END_STATE();
    case 147:
      if (eof) ADVANCE(148);
      if (lookahead == '%') ADVANCE(236);
      if (lookahead == '(') ADVANCE(161);
      if (lookahead == ')') ADVANCE(162);
      if (lookahead == '*') ADVANCE(234);
      if (lookahead == '+') ADVANCE(217);
      if (lookahead == ',') ADVANCE(168);
      if (lookahead == '-') ADVANCE(202);
      if (lookahead == '.') ADVANCE(157);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == ';') ADVANCE(194);
      if (lookahead == '=') ADVANCE(156);
      if (lookahead == '@') ADVANCE(199);
      if (lookahead == '[') ADVANCE(189);
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == 'd') ADVANCE(95);
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead == 'i') ADVANCE(85);
      if (lookahead == 'm') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(58);
      if (lookahead == 'p') ADVANCE(33);
      if (lookahead == 't') ADVANCE(100);
      if (lookahead == '{') ADVANCE(149);
      if (lookahead == '|') ADVANCE(231);
      if (lookahead == '}') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(147)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_boot);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_initially);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_next);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_property);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(216);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(229);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_machine);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_ensures);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_ensures);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_requires);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_requires);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_model_contract_token1);
      if (lookahead == 'd') ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_some);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_some);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_atmost);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_atmost);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_atleast);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_atleast);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_includes);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_includes);
      if (lookahead == '\'') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_extends);
      if (lookahead == '\'') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_partial);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_model);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_transform);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_system);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_system);
      if (lookahead == '\'') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_returns);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_conforms);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_conforms);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_domain);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(198);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(197);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_at);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_at);
      if (lookahead == 'l') ADVANCE(51);
      if (lookahead == 'm') ADVANCE(94);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead == '=') ADVANCE(200);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_EQ);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(215);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_inj);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_inj);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_bij);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_bij);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_sur);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_sur);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_fun);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_fun);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_any);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_any);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_digits);
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == '/') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_digits);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_real);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_frac);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(228);
      if (lookahead == '"') ADVANCE(321);
      if (lookahead == '\\') ADVANCE(322);
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == '*') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == '/') ADVANCE(228);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(224);
      if (lookahead == '/') ADVANCE(223);
      if (lookahead == '\\') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(228);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(226);
      if (lookahead == '\\') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(228);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '/') ADVANCE(321);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(240);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(242);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '.') ADVANCE(13);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'a') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'f') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'j') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'j') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'l') ADVANCE(246);
      if (lookahead == 'm') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'm') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'm') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'n') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'n') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'n') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'n') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'n') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'q') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 's') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 's') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 's') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 's') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 's') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 's') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 't') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 't') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 't') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'w') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'y') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(290);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(290);
      if (lookahead == 'c') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(290);
      if (lookahead == 'd') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(290);
      if (lookahead == 'd') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(290);
      if (lookahead == 'e') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(290);
      if (lookahead == 'e') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(290);
      if (lookahead == 'e') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(290);
      if (lookahead == 'l') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(290);
      if (lookahead == 'm') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(290);
      if (lookahead == 'n') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(290);
      if (lookahead == 'n') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(290);
      if (lookahead == 's') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(290);
      if (lookahead == 's') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(290);
      if (lookahead == 's') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(290);
      if (lookahead == 't') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(290);
      if (lookahead == 't') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(290);
      if (lookahead == 'u') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(290);
      if (lookahead == 'x') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(290);
      if (lookahead == 'y') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_bareid_token2);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_bareid_token2);
      if (lookahead == '\'') ADVANCE(311);
      if (lookahead == '[') ADVANCE(141);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_bareid_token2);
      if (lookahead == '\'') ADVANCE(311);
      if (lookahead == '[') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_qualid);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_qualid);
      if (lookahead == '\'') ADVANCE(314);
      if (lookahead == '.') ADVANCE(13);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_qualid);
      if (lookahead == '\'') ADVANCE(314);
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_qualid);
      if (lookahead == '\'') ADVANCE(316);
      if (lookahead == '[') ADVANCE(142);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_qualid);
      if (lookahead == '\'') ADVANCE(316);
      if (lookahead == '[') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_qualid);
      if (lookahead == '\'') ADVANCE(318);
      if (lookahead == '.') ADVANCE(145);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_qualid);
      if (lookahead == '\'') ADVANCE(318);
      if (lookahead == '.') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(223);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 147},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 147},
  [14] = {.lex_state = 147},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 147},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 147},
  [24] = {.lex_state = 147},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 147},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 14},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 11},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 14},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 14},
  [80] = {.lex_state = 14},
  [81] = {.lex_state = 14},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 14},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 14},
  [89] = {.lex_state = 12},
  [90] = {.lex_state = 12},
  [91] = {.lex_state = 14},
  [92] = {.lex_state = 14},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 12},
  [95] = {.lex_state = 12},
  [96] = {.lex_state = 14},
  [97] = {.lex_state = 14},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 14},
  [102] = {.lex_state = 12},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 14},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 14},
  [107] = {.lex_state = 14},
  [108] = {.lex_state = 9},
  [109] = {.lex_state = 12},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 14},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 14},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 14},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 9},
  [121] = {.lex_state = 9},
  [122] = {.lex_state = 14},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 9},
  [125] = {.lex_state = 9},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 14},
  [128] = {.lex_state = 9},
  [129] = {.lex_state = 14},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 9},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 9},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 9},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 14},
  [142] = {.lex_state = 14},
  [143] = {.lex_state = 14},
  [144] = {.lex_state = 147},
  [145] = {.lex_state = 12},
  [146] = {.lex_state = 147},
  [147] = {.lex_state = 147},
  [148] = {.lex_state = 12},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 9},
  [151] = {.lex_state = 9},
  [152] = {.lex_state = 147},
  [153] = {.lex_state = 147},
  [154] = {.lex_state = 9},
  [155] = {.lex_state = 147},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 12},
  [158] = {.lex_state = 4},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 4},
  [161] = {.lex_state = 147},
  [162] = {.lex_state = 4},
  [163] = {.lex_state = 147},
  [164] = {.lex_state = 12},
  [165] = {.lex_state = 147},
  [166] = {.lex_state = 12},
  [167] = {.lex_state = 9},
  [168] = {.lex_state = 12},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 147},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 147},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 147},
  [178] = {.lex_state = 4},
  [179] = {.lex_state = 147},
  [180] = {.lex_state = 12},
  [181] = {.lex_state = 147},
  [182] = {.lex_state = 147},
  [183] = {.lex_state = 9},
  [184] = {.lex_state = 4},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 147},
  [188] = {.lex_state = 12},
  [189] = {.lex_state = 4},
  [190] = {.lex_state = 147},
  [191] = {.lex_state = 147},
  [192] = {.lex_state = 147},
  [193] = {.lex_state = 12},
  [194] = {.lex_state = 147},
  [195] = {.lex_state = 147},
  [196] = {.lex_state = 12},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 9},
  [200] = {.lex_state = 10},
  [201] = {.lex_state = 147},
  [202] = {.lex_state = 147},
  [203] = {.lex_state = 12},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 12},
  [206] = {.lex_state = 147},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 12},
  [210] = {.lex_state = 12},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 147},
  [213] = {.lex_state = 9},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 9},
  [217] = {.lex_state = 9},
  [218] = {.lex_state = 9},
  [219] = {.lex_state = 147},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 147},
  [222] = {.lex_state = 12},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 147},
  [226] = {.lex_state = 12},
  [227] = {.lex_state = 9},
  [228] = {.lex_state = 147},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 9},
  [231] = {.lex_state = 12},
  [232] = {.lex_state = 9},
  [233] = {.lex_state = 147},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 12},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 5},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 147},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 5},
  [248] = {.lex_state = 5},
  [249] = {.lex_state = 5},
  [250] = {.lex_state = 147},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 147},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 14},
  [262] = {.lex_state = 5},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 5},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 147},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 147},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 14},
  [281] = {.lex_state = 147},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 147},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 147},
  [292] = {.lex_state = 147},
  [293] = {.lex_state = 147},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 227},
  [296] = {.lex_state = 147},
  [297] = {.lex_state = 147},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 147},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 147},
  [304] = {.lex_state = 5},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 5},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 147},
  [309] = {.lex_state = 147},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 147},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 147},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 147},
  [324] = {.lex_state = 147},
  [325] = {.lex_state = 5},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 147},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 147},
  [331] = {.lex_state = 147},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 147},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 147},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 147},
  [339] = {.lex_state = 147},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 5},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 9},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 147},
  [355] = {.lex_state = 5},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 147},
  [358] = {.lex_state = 147},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 9},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 147},
  [366] = {.lex_state = 9},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 227},
  [372] = {.lex_state = 5},
  [373] = {.lex_state = 147},
  [374] = {.lex_state = 147},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 5},
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
    [anon_sym_partial] = ACTIONS(1),
    [anon_sym_model] = ACTIONS(1),
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
    [sym_digits] = ACTIONS(1),
    [sym_real] = ACTIONS(1),
    [sym_frac] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
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
    [aux_sym_bareid_token2] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_program] = STATE(370),
    [sym_module] = STATE(24),
    [sym_machine] = STATE(161),
    [sym_machine_sig_config] = STATE(362),
    [sym_machine_sig] = STATE(215),
    [sym_model] = STATE(161),
    [sym_model_sig_config] = STATE(359),
    [sym_model_sig] = STATE(245),
    [sym_model_intro] = STATE(211),
    [sym_tsystem] = STATE(161),
    [sym_transform] = STATE(161),
    [sym_domain] = STATE(161),
    [sym_domain_sig_config] = STATE(356),
    [sym_domain_sig] = STATE(256),
    [sym_config] = STATE(23),
    [aux_sym_program_repeat1] = STATE(24),
    [aux_sym_machine_sig_config_repeat1] = STATE(215),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_machine] = ACTIONS(7),
    [anon_sym_partial] = ACTIONS(9),
    [anon_sym_model] = ACTIONS(11),
    [anon_sym_transform] = ACTIONS(13),
    [anon_sym_domain] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 30,
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
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(43), 1,
      sym_qualid,
    STATE(3), 1,
      aux_sym_trans_body_repeat1,
    STATE(15), 1,
      sym_sentence_config,
    STATE(47), 1,
      sym_unop,
    STATE(79), 1,
      sym_string,
    STATE(80), 1,
      sym_id,
    STATE(91), 1,
      sym_atom,
    STATE(92), 1,
      sym_constant,
    STATE(97), 1,
      sym_func_term,
    STATE(104), 1,
      sym_bareid,
    STATE(146), 1,
      sym_func_or_compr,
    STATE(194), 1,
      sym_compr,
    STATE(281), 1,
      sym_func_term_list,
    STATE(296), 1,
      sym_trans_sentence,
    STATE(297), 1,
      sym_trans_sentence_config,
    STATE(298), 1,
      sym_trans_body,
    ACTIONS(25), 2,
      anon_sym_ensures,
      anon_sym_requires,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    STATE(330), 2,
      sym_type_decl,
      sym_rule,
  [94] = 29,
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
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(43), 1,
      sym_qualid,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      aux_sym_trans_body_repeat1,
    STATE(15), 1,
      sym_sentence_config,
    STATE(47), 1,
      sym_unop,
    STATE(79), 1,
      sym_string,
    STATE(80), 1,
      sym_id,
    STATE(91), 1,
      sym_atom,
    STATE(92), 1,
      sym_constant,
    STATE(97), 1,
      sym_func_term,
    STATE(104), 1,
      sym_bareid,
    STATE(146), 1,
      sym_func_or_compr,
    STATE(194), 1,
      sym_compr,
    STATE(281), 1,
      sym_func_term_list,
    STATE(296), 1,
      sym_trans_sentence,
    STATE(297), 1,
      sym_trans_sentence_config,
    ACTIONS(25), 2,
      anon_sym_ensures,
      anon_sym_requires,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    STATE(330), 2,
      sym_type_decl,
      sym_rule,
  [185] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_LBRACE,
    ACTIONS(50), 1,
      anon_sym_RBRACE,
    ACTIONS(52), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 1,
      anon_sym_DASH,
    ACTIONS(64), 1,
      sym_digits,
    ACTIONS(70), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_PERCENT,
    ACTIONS(76), 1,
      aux_sym_bareid_token1,
    ACTIONS(79), 1,
      aux_sym_bareid_token2,
    ACTIONS(82), 1,
      sym_qualid,
    STATE(4), 1,
      aux_sym_trans_body_repeat1,
    STATE(15), 1,
      sym_sentence_config,
    STATE(47), 1,
      sym_unop,
    STATE(79), 1,
      sym_string,
    STATE(80), 1,
      sym_id,
    STATE(91), 1,
      sym_atom,
    STATE(92), 1,
      sym_constant,
    STATE(97), 1,
      sym_func_term,
    STATE(104), 1,
      sym_bareid,
    STATE(146), 1,
      sym_func_or_compr,
    STATE(194), 1,
      sym_compr,
    STATE(281), 1,
      sym_func_term_list,
    STATE(296), 1,
      sym_trans_sentence,
    STATE(297), 1,
      sym_trans_sentence_config,
    ACTIONS(55), 2,
      anon_sym_ensures,
      anon_sym_requires,
    ACTIONS(67), 2,
      sym_real,
      sym_frac,
    STATE(330), 2,
      sym_type_decl,
      sym_rule,
  [276] = 30,
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
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(43), 1,
      sym_qualid,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    ACTIONS(87), 1,
      anon_sym_conforms,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    STATE(7), 1,
      aux_sym_dom_sentences_repeat1,
    STATE(16), 1,
      sym_sentence_config,
    STATE(47), 1,
      sym_unop,
    STATE(79), 1,
      sym_string,
    STATE(80), 1,
      sym_id,
    STATE(91), 1,
      sym_atom,
    STATE(92), 1,
      sym_constant,
    STATE(97), 1,
      sym_func_term,
    STATE(104), 1,
      sym_bareid,
    STATE(146), 1,
      sym_func_or_compr,
    STATE(194), 1,
      sym_compr,
    STATE(281), 1,
      sym_func_term_list,
    STATE(353), 1,
      sym_dom_sentences,
    STATE(354), 1,
      sym_dom_sentence_config,
    STATE(358), 1,
      sym_dom_sentence,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    STATE(374), 2,
      sym_type_decl,
      sym_rule,
  [369] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(94), 1,
      anon_sym_RBRACE,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_conforms,
    ACTIONS(102), 1,
      anon_sym_LBRACK,
    ACTIONS(105), 1,
      anon_sym_DASH,
    ACTIONS(108), 1,
      sym_digits,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_PERCENT,
    ACTIONS(120), 1,
      aux_sym_bareid_token1,
    ACTIONS(123), 1,
      aux_sym_bareid_token2,
    ACTIONS(126), 1,
      sym_qualid,
    STATE(6), 1,
      aux_sym_dom_sentences_repeat1,
    STATE(16), 1,
      sym_sentence_config,
    STATE(47), 1,
      sym_unop,
    STATE(79), 1,
      sym_string,
    STATE(80), 1,
      sym_id,
    STATE(91), 1,
      sym_atom,
    STATE(92), 1,
      sym_constant,
    STATE(97), 1,
      sym_func_term,
    STATE(104), 1,
      sym_bareid,
    STATE(146), 1,
      sym_func_or_compr,
    STATE(194), 1,
      sym_compr,
    STATE(281), 1,
      sym_func_term_list,
    STATE(354), 1,
      sym_dom_sentence_config,
    STATE(358), 1,
      sym_dom_sentence,
    ACTIONS(111), 2,
      sym_real,
      sym_frac,
    STATE(374), 2,
      sym_type_decl,
      sym_rule,
  [459] = 29,
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
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(43), 1,
      sym_qualid,
    ACTIONS(87), 1,
      anon_sym_conforms,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(129), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      aux_sym_dom_sentences_repeat1,
    STATE(16), 1,
      sym_sentence_config,
    STATE(47), 1,
      sym_unop,
    STATE(79), 1,
      sym_string,
    STATE(80), 1,
      sym_id,
    STATE(91), 1,
      sym_atom,
    STATE(92), 1,
      sym_constant,
    STATE(97), 1,
      sym_func_term,
    STATE(104), 1,
      sym_bareid,
    STATE(146), 1,
      sym_func_or_compr,
    STATE(194), 1,
      sym_compr,
    STATE(281), 1,
      sym_func_term_list,
    STATE(354), 1,
      sym_dom_sentence_config,
    STATE(358), 1,
      sym_dom_sentence,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    STATE(374), 2,
      sym_type_decl,
      sym_rule,
  [549] = 27,
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
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(43), 1,
      sym_qualid,
    ACTIONS(131), 1,
      anon_sym_RBRACE,
    ACTIONS(133), 1,
      anon_sym_ensures,
    ACTIONS(135), 1,
      anon_sym_requires,
    STATE(26), 1,
      sym_sentence_config,
    STATE(47), 1,
      sym_unop,
    STATE(78), 1,
      sym_model_contract,
    STATE(79), 1,
      sym_string,
    STATE(80), 1,
      sym_id,
    STATE(91), 1,
      sym_atom,
    STATE(92), 1,
      sym_constant,
    STATE(115), 1,
      sym_bareid,
    STATE(122), 1,
      sym_func_term,
    STATE(277), 1,
      sym_model_fact,
    STATE(334), 1,
      sym_model_body,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    STATE(10), 2,
      sym_model_sentence,
      aux_sym_model_body_repeat1,
    STATE(77), 2,
      sym_model_contract_conf,
      sym_model_fact_list,
  [634] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_RBRACE,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 1,
      anon_sym_ensures,
    ACTIONS(145), 1,
      anon_sym_requires,
    ACTIONS(148), 1,
      anon_sym_LBRACK,
    ACTIONS(151), 1,
      anon_sym_DASH,
    ACTIONS(154), 1,
      sym_digits,
    ACTIONS(160), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      anon_sym_PERCENT,
    ACTIONS(166), 1,
      aux_sym_bareid_token1,
    ACTIONS(169), 1,
      aux_sym_bareid_token2,
    ACTIONS(172), 1,
      sym_qualid,
    STATE(26), 1,
      sym_sentence_config,
    STATE(47), 1,
      sym_unop,
    STATE(78), 1,
      sym_model_contract,
    STATE(79), 1,
      sym_string,
    STATE(80), 1,
      sym_id,
    STATE(91), 1,
      sym_atom,
    STATE(92), 1,
      sym_constant,
    STATE(115), 1,
      sym_bareid,
    STATE(122), 1,
      sym_func_term,
    STATE(277), 1,
      sym_model_fact,
    ACTIONS(157), 2,
      sym_real,
      sym_frac,
    STATE(9), 2,
      sym_model_sentence,
      aux_sym_model_body_repeat1,
    STATE(77), 2,
      sym_model_contract_conf,
      sym_model_fact_list,
  [716] = 26,
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
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(43), 1,
      sym_qualid,
    ACTIONS(133), 1,
      anon_sym_ensures,
    ACTIONS(135), 1,
      anon_sym_requires,
    ACTIONS(175), 1,
      anon_sym_RBRACE,
    STATE(26), 1,
      sym_sentence_config,
    STATE(47), 1,
      sym_unop,
    STATE(78), 1,
      sym_model_contract,
    STATE(79), 1,
      sym_string,
    STATE(80), 1,
      sym_id,
    STATE(91), 1,
      sym_atom,
    STATE(92), 1,
      sym_constant,
    STATE(115), 1,
      sym_bareid,
    STATE(122), 1,
      sym_func_term,
    STATE(277), 1,
      sym_model_fact,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    STATE(9), 2,
      sym_model_sentence,
      aux_sym_model_body_repeat1,
    STATE(77), 2,
      sym_model_contract_conf,
      sym_model_fact_list,
  [798] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 9,
      anon_sym_EQ,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_bareid_token1,
    ACTIONS(177), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_SEMI,
      anon_sym_COLON_COLON,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_bareid_token2,
  [833] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 9,
      anon_sym_EQ,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_bareid_token1,
    ACTIONS(181), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_SEMI,
      anon_sym_COLON_COLON,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_bareid_token2,
  [868] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 4,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(181), 23,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_machine,
      anon_sym_of,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_is,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
      anon_sym_SEMI,
      anon_sym_at,
      anon_sym_AT,
      anon_sym_COLON_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_PLUS,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [903] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 4,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(177), 23,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_machine,
      anon_sym_of,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_is,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
      anon_sym_SEMI,
      anon_sym_at,
      anon_sym_AT,
      anon_sym_COLON_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_PLUS,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [938] = 24,
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
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(43), 1,
      sym_qualid,
    STATE(47), 1,
      sym_unop,
    STATE(79), 1,
      sym_string,
    STATE(80), 1,
      sym_id,
    STATE(91), 1,
      sym_atom,
    STATE(92), 1,
      sym_constant,
    STATE(97), 1,
      sym_func_term,
    STATE(104), 1,
      sym_bareid,
    STATE(146), 1,
      sym_func_or_compr,
    STATE(194), 1,
      sym_compr,
    STATE(281), 1,
      sym_func_term_list,
    STATE(309), 1,
      sym_trans_sentence,
    ACTIONS(25), 2,
      anon_sym_ensures,
      anon_sym_requires,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    STATE(330), 2,
      sym_type_decl,
      sym_rule,
  [1014] = 24,
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
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(43), 1,
      sym_qualid,
    ACTIONS(87), 1,
      anon_sym_conforms,
    STATE(47), 1,
      sym_unop,
    STATE(79), 1,
      sym_string,
    STATE(80), 1,
      sym_id,
    STATE(91), 1,
      sym_atom,
    STATE(92), 1,
      sym_constant,
    STATE(97), 1,
      sym_func_term,
    STATE(104), 1,
      sym_bareid,
    STATE(146), 1,
      sym_func_or_compr,
    STATE(194), 1,
      sym_compr,
    STATE(281), 1,
      sym_func_term_list,
    STATE(335), 1,
      sym_dom_sentence,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    STATE(374), 2,
      sym_type_decl,
      sym_rule,
  [1089] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      sym_digits,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      anon_sym_no,
    ACTIONS(197), 1,
      anon_sym_PERCENT,
    ACTIONS(199), 1,
      aux_sym_bareid_token1,
    ACTIONS(201), 1,
      aux_sym_bareid_token2,
    ACTIONS(203), 1,
      sym_qualid,
    STATE(39), 1,
      sym_id,
    STATE(40), 1,
      sym_bareid,
    STATE(42), 1,
      sym_func_term,
    STATE(54), 1,
      sym_unop,
    STATE(61), 1,
      sym_atom,
    STATE(63), 1,
      sym_constant,
    STATE(64), 1,
      sym_string,
    STATE(201), 1,
      sym_constraint,
    STATE(225), 1,
      sym_body,
    STATE(300), 1,
      sym_body_list,
    STATE(321), 1,
      sym_card_spec,
    ACTIONS(191), 2,
      sym_real,
      sym_frac,
    ACTIONS(187), 3,
      anon_sym_some,
      anon_sym_atmost,
      anon_sym_atleast,
  [1162] = 21,
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
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(43), 1,
      sym_qualid,
    ACTIONS(205), 1,
      anon_sym_LBRACK,
    STATE(44), 1,
      sym_sentence_config,
    STATE(47), 1,
      sym_unop,
    STATE(75), 1,
      sym_model_fact_list,
    STATE(79), 1,
      sym_string,
    STATE(80), 1,
      sym_id,
    STATE(91), 1,
      sym_atom,
    STATE(92), 1,
      sym_constant,
    STATE(115), 1,
      sym_bareid,
    STATE(122), 1,
      sym_func_term,
    STATE(277), 1,
      sym_model_fact,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [1227] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_machine,
    ACTIONS(9), 1,
      anon_sym_partial,
    ACTIONS(11), 1,
      anon_sym_model,
    ACTIONS(13), 1,
      anon_sym_transform,
    ACTIONS(15), 1,
      anon_sym_domain,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
    STATE(211), 1,
      sym_model_intro,
    STATE(245), 1,
      sym_model_sig,
    STATE(256), 1,
      sym_domain_sig,
    STATE(356), 1,
      sym_domain_sig_config,
    STATE(359), 1,
      sym_model_sig_config,
    STATE(362), 1,
      sym_machine_sig_config,
    STATE(31), 2,
      sym_module,
      aux_sym_program_repeat1,
    STATE(215), 2,
      sym_machine_sig,
      aux_sym_machine_sig_config_repeat1,
    STATE(161), 5,
      sym_machine,
      sym_model,
      sym_tsystem,
      sym_transform,
      sym_domain,
  [1282] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      sym_digits,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      anon_sym_no,
    ACTIONS(197), 1,
      anon_sym_PERCENT,
    ACTIONS(199), 1,
      aux_sym_bareid_token1,
    ACTIONS(201), 1,
      aux_sym_bareid_token2,
    ACTIONS(203), 1,
      sym_qualid,
    STATE(39), 1,
      sym_id,
    STATE(40), 1,
      sym_bareid,
    STATE(42), 1,
      sym_func_term,
    STATE(54), 1,
      sym_unop,
    STATE(61), 1,
      sym_atom,
    STATE(63), 1,
      sym_constant,
    STATE(64), 1,
      sym_string,
    STATE(201), 1,
      sym_constraint,
    STATE(225), 1,
      sym_body,
    STATE(300), 1,
      sym_body_list,
    ACTIONS(191), 2,
      sym_real,
      sym_frac,
  [1347] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      sym_digits,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      anon_sym_no,
    ACTIONS(197), 1,
      anon_sym_PERCENT,
    ACTIONS(199), 1,
      aux_sym_bareid_token1,
    ACTIONS(201), 1,
      aux_sym_bareid_token2,
    ACTIONS(203), 1,
      sym_qualid,
    STATE(39), 1,
      sym_id,
    STATE(40), 1,
      sym_bareid,
    STATE(42), 1,
      sym_func_term,
    STATE(54), 1,
      sym_unop,
    STATE(61), 1,
      sym_atom,
    STATE(63), 1,
      sym_constant,
    STATE(64), 1,
      sym_string,
    STATE(201), 1,
      sym_constraint,
    STATE(225), 1,
      sym_body,
    STATE(312), 1,
      sym_body_list,
    ACTIONS(191), 2,
      sym_real,
      sym_frac,
  [1412] = 21,
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
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(43), 1,
      sym_qualid,
    STATE(47), 1,
      sym_unop,
    STATE(67), 1,
      sym_bareid,
    STATE(79), 1,
      sym_string,
    STATE(80), 1,
      sym_id,
    STATE(91), 1,
      sym_atom,
    STATE(92), 1,
      sym_constant,
    STATE(97), 1,
      sym_func_term,
    STATE(146), 1,
      sym_func_or_compr,
    STATE(194), 1,
      sym_compr,
    STATE(263), 1,
      sym_func_term_list,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [1477] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_machine,
    ACTIONS(9), 1,
      anon_sym_partial,
    ACTIONS(11), 1,
      anon_sym_model,
    ACTIONS(13), 1,
      anon_sym_transform,
    ACTIONS(15), 1,
      anon_sym_domain,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
    STATE(211), 1,
      sym_model_intro,
    STATE(245), 1,
      sym_model_sig,
    STATE(256), 1,
      sym_domain_sig,
    STATE(356), 1,
      sym_domain_sig_config,
    STATE(359), 1,
      sym_model_sig_config,
    STATE(362), 1,
      sym_machine_sig_config,
    STATE(19), 2,
      sym_module,
      aux_sym_program_repeat1,
    STATE(215), 2,
      sym_machine_sig,
      aux_sym_machine_sig_config_repeat1,
    STATE(161), 5,
      sym_machine,
      sym_model,
      sym_tsystem,
      sym_transform,
      sym_domain,
  [1532] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_machine,
    ACTIONS(9), 1,
      anon_sym_partial,
    ACTIONS(11), 1,
      anon_sym_model,
    ACTIONS(13), 1,
      anon_sym_transform,
    ACTIONS(15), 1,
      anon_sym_domain,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
    STATE(211), 1,
      sym_model_intro,
    STATE(245), 1,
      sym_model_sig,
    STATE(256), 1,
      sym_domain_sig,
    STATE(356), 1,
      sym_domain_sig_config,
    STATE(359), 1,
      sym_model_sig_config,
    STATE(362), 1,
      sym_machine_sig_config,
    STATE(31), 2,
      sym_module,
      aux_sym_program_repeat1,
    STATE(215), 2,
      sym_machine_sig,
      aux_sym_machine_sig_config_repeat1,
    STATE(161), 5,
      sym_machine,
      sym_model,
      sym_tsystem,
      sym_transform,
      sym_domain,
  [1587] = 21,
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
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(43), 1,
      sym_qualid,
    STATE(47), 1,
      sym_unop,
    STATE(67), 1,
      sym_bareid,
    STATE(79), 1,
      sym_string,
    STATE(80), 1,
      sym_id,
    STATE(91), 1,
      sym_atom,
    STATE(92), 1,
      sym_constant,
    STATE(97), 1,
      sym_func_term,
    STATE(146), 1,
      sym_func_or_compr,
    STATE(194), 1,
      sym_compr,
    STATE(364), 1,
      sym_func_term_list,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [1652] = 21,
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
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(43), 1,
      sym_qualid,
    ACTIONS(133), 1,
      anon_sym_ensures,
    ACTIONS(135), 1,
      anon_sym_requires,
    STATE(47), 1,
      sym_unop,
    STATE(74), 1,
      sym_model_contract,
    STATE(79), 1,
      sym_string,
    STATE(80), 1,
      sym_id,
    STATE(91), 1,
      sym_atom,
    STATE(92), 1,
      sym_constant,
    STATE(115), 1,
      sym_bareid,
    STATE(122), 1,
      sym_func_term,
    STATE(291), 1,
      sym_model_fact,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [1717] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      sym_digits,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      anon_sym_no,
    ACTIONS(197), 1,
      anon_sym_PERCENT,
    ACTIONS(199), 1,
      aux_sym_bareid_token1,
    ACTIONS(201), 1,
      aux_sym_bareid_token2,
    ACTIONS(203), 1,
      sym_qualid,
    STATE(39), 1,
      sym_id,
    STATE(40), 1,
      sym_bareid,
    STATE(42), 1,
      sym_func_term,
    STATE(54), 1,
      sym_unop,
    STATE(61), 1,
      sym_atom,
    STATE(63), 1,
      sym_constant,
    STATE(64), 1,
      sym_string,
    STATE(201), 1,
      sym_constraint,
    STATE(225), 1,
      sym_body,
    STATE(373), 1,
      sym_body_list,
    ACTIONS(191), 2,
      sym_real,
      sym_frac,
  [1782] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      sym_digits,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      anon_sym_no,
    ACTIONS(197), 1,
      anon_sym_PERCENT,
    ACTIONS(199), 1,
      aux_sym_bareid_token1,
    ACTIONS(201), 1,
      aux_sym_bareid_token2,
    ACTIONS(203), 1,
      sym_qualid,
    STATE(39), 1,
      sym_id,
    STATE(40), 1,
      sym_bareid,
    STATE(42), 1,
      sym_func_term,
    STATE(54), 1,
      sym_unop,
    STATE(61), 1,
      sym_atom,
    STATE(63), 1,
      sym_constant,
    STATE(64), 1,
      sym_string,
    STATE(201), 1,
      sym_constraint,
    STATE(225), 1,
      sym_body,
    STATE(351), 1,
      sym_body_list,
    ACTIONS(191), 2,
      sym_real,
      sym_frac,
  [1847] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      sym_digits,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      anon_sym_no,
    ACTIONS(197), 1,
      anon_sym_PERCENT,
    ACTIONS(199), 1,
      aux_sym_bareid_token1,
    ACTIONS(201), 1,
      aux_sym_bareid_token2,
    ACTIONS(203), 1,
      sym_qualid,
    STATE(39), 1,
      sym_id,
    STATE(40), 1,
      sym_bareid,
    STATE(42), 1,
      sym_func_term,
    STATE(54), 1,
      sym_unop,
    STATE(61), 1,
      sym_atom,
    STATE(63), 1,
      sym_constant,
    STATE(64), 1,
      sym_string,
    STATE(201), 1,
      sym_constraint,
    STATE(225), 1,
      sym_body,
    STATE(333), 1,
      sym_body_list,
    ACTIONS(191), 2,
      sym_real,
      sym_frac,
  [1912] = 21,
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
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(43), 1,
      sym_qualid,
    STATE(47), 1,
      sym_unop,
    STATE(67), 1,
      sym_bareid,
    STATE(79), 1,
      sym_string,
    STATE(80), 1,
      sym_id,
    STATE(91), 1,
      sym_atom,
    STATE(92), 1,
      sym_constant,
    STATE(97), 1,
      sym_func_term,
    STATE(146), 1,
      sym_func_or_compr,
    STATE(194), 1,
      sym_compr,
    STATE(347), 1,
      sym_func_term_list,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [1977] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
    ACTIONS(213), 1,
      anon_sym_machine,
    ACTIONS(216), 1,
      anon_sym_partial,
    ACTIONS(219), 1,
      anon_sym_model,
    ACTIONS(222), 1,
      anon_sym_transform,
    ACTIONS(225), 1,
      anon_sym_domain,
    STATE(211), 1,
      sym_model_intro,
    STATE(245), 1,
      sym_model_sig,
    STATE(256), 1,
      sym_domain_sig,
    STATE(356), 1,
      sym_domain_sig_config,
    STATE(359), 1,
      sym_model_sig_config,
    STATE(362), 1,
      sym_machine_sig_config,
    STATE(31), 2,
      sym_module,
      aux_sym_program_repeat1,
    STATE(215), 2,
      sym_machine_sig,
      aux_sym_machine_sig_config_repeat1,
    STATE(161), 5,
      sym_machine,
      sym_model,
      sym_tsystem,
      sym_transform,
      sym_domain,
  [2032] = 21,
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
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(43), 1,
      sym_qualid,
    ACTIONS(205), 1,
      anon_sym_LBRACK,
    STATE(44), 1,
      sym_sentence_config,
    STATE(47), 1,
      sym_unop,
    STATE(69), 1,
      sym_model_fact_list,
    STATE(79), 1,
      sym_string,
    STATE(80), 1,
      sym_id,
    STATE(91), 1,
      sym_atom,
    STATE(92), 1,
      sym_constant,
    STATE(115), 1,
      sym_bareid,
    STATE(122), 1,
      sym_func_term,
    STATE(277), 1,
      sym_model_fact,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2097] = 20,
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
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(43), 1,
      sym_qualid,
    ACTIONS(228), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      sym_unop,
    STATE(79), 1,
      sym_string,
    STATE(80), 1,
      sym_id,
    STATE(91), 1,
      sym_atom,
    STATE(92), 1,
      sym_constant,
    STATE(118), 1,
      sym_bareid,
    STATE(129), 1,
      sym_func_term,
    STATE(239), 1,
      sym_mod_app_arg,
    STATE(316), 1,
      sym_mod_arg_list,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2159] = 20,
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
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(43), 1,
      sym_qualid,
    STATE(47), 1,
      sym_unop,
    STATE(67), 1,
      sym_bareid,
    STATE(79), 1,
      sym_string,
    STATE(80), 1,
      sym_id,
    STATE(91), 1,
      sym_atom,
    STATE(92), 1,
      sym_constant,
    STATE(97), 1,
      sym_func_term,
    STATE(190), 1,
      sym_func_or_compr,
    STATE(194), 1,
      sym_compr,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2221] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      sym_digits,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      anon_sym_no,
    ACTIONS(197), 1,
      anon_sym_PERCENT,
    ACTIONS(199), 1,
      aux_sym_bareid_token1,
    ACTIONS(201), 1,
      aux_sym_bareid_token2,
    ACTIONS(203), 1,
      sym_qualid,
    STATE(39), 1,
      sym_id,
    STATE(40), 1,
      sym_bareid,
    STATE(42), 1,
      sym_func_term,
    STATE(54), 1,
      sym_unop,
    STATE(61), 1,
      sym_atom,
    STATE(63), 1,
      sym_constant,
    STATE(64), 1,
      sym_string,
    STATE(201), 1,
      sym_constraint,
    STATE(253), 1,
      sym_body,
    ACTIONS(191), 2,
      sym_real,
      sym_frac,
  [2283] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_SLASH,
    ACTIONS(230), 18,
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
  [2310] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      sym_digits,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      anon_sym_no,
    ACTIONS(197), 1,
      anon_sym_PERCENT,
    ACTIONS(199), 1,
      aux_sym_bareid_token1,
    ACTIONS(201), 1,
      aux_sym_bareid_token2,
    ACTIONS(203), 1,
      sym_qualid,
    STATE(39), 1,
      sym_id,
    STATE(40), 1,
      sym_bareid,
    STATE(42), 1,
      sym_func_term,
    STATE(54), 1,
      sym_unop,
    STATE(61), 1,
      sym_atom,
    STATE(63), 1,
      sym_constant,
    STATE(64), 1,
      sym_string,
    STATE(219), 1,
      sym_constraint,
    ACTIONS(191), 2,
      sym_real,
      sym_frac,
  [2369] = 19,
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
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(43), 1,
      sym_qualid,
    STATE(47), 1,
      sym_unop,
    STATE(67), 1,
      sym_bareid,
    STATE(79), 1,
      sym_string,
    STATE(91), 1,
      sym_atom,
    STATE(92), 1,
      sym_constant,
    STATE(101), 1,
      sym_id,
    STATE(112), 1,
      sym_func_term,
    STATE(228), 1,
      sym_compr,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2428] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(238), 1,
      anon_sym_is,
    ACTIONS(240), 3,
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
  [2458] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(242), 15,
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
  [2484] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(177), 15,
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
  [2510] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_SLASH,
    STATE(51), 1,
      sym_relop,
    STATE(56), 1,
      sym_binop,
    ACTIONS(254), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(246), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(250), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(248), 5,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2546] = 18,
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
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(43), 1,
      sym_qualid,
    STATE(47), 1,
      sym_unop,
    STATE(79), 1,
      sym_string,
    STATE(80), 1,
      sym_id,
    STATE(91), 1,
      sym_atom,
    STATE(92), 1,
      sym_constant,
    STATE(118), 1,
      sym_bareid,
    STATE(129), 1,
      sym_func_term,
    STATE(272), 1,
      sym_mod_app_arg,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2602] = 18,
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
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(43), 1,
      sym_qualid,
    STATE(47), 1,
      sym_unop,
    STATE(79), 1,
      sym_string,
    STATE(80), 1,
      sym_id,
    STATE(91), 1,
      sym_atom,
    STATE(92), 1,
      sym_constant,
    STATE(115), 1,
      sym_bareid,
    STATE(122), 1,
      sym_func_term,
    STATE(291), 1,
      sym_model_fact,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2658] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(256), 1,
      anon_sym_LBRACE,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      anon_sym_DASH,
    ACTIONS(262), 1,
      anon_sym_new,
    ACTIONS(266), 1,
      sym_qualid,
    STATE(148), 1,
      sym_unncmp,
    STATE(188), 1,
      sym_bareid,
    STATE(193), 1,
      sym_typeid,
    STATE(293), 1,
      sym_unnbody,
    STATE(320), 1,
      sym_fun_decl,
    STATE(323), 1,
      sym_type_decl_body,
    ACTIONS(264), 4,
      anon_sym_inj,
      anon_sym_bij,
      anon_sym_sur,
      anon_sym_fun,
  [2710] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(181), 15,
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
  [2736] = 17,
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
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(43), 1,
      sym_qualid,
    STATE(47), 1,
      sym_unop,
    STATE(67), 1,
      sym_bareid,
    STATE(79), 1,
      sym_string,
    STATE(80), 1,
      sym_id,
    STATE(85), 1,
      sym_func_term,
    STATE(91), 1,
      sym_atom,
    STATE(92), 1,
      sym_constant,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2789] = 17,
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
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(43), 1,
      sym_qualid,
    STATE(47), 1,
      sym_unop,
    STATE(67), 1,
      sym_bareid,
    STATE(79), 1,
      sym_string,
    STATE(80), 1,
      sym_id,
    STATE(81), 1,
      sym_func_term,
    STATE(91), 1,
      sym_atom,
    STATE(92), 1,
      sym_constant,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2842] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 3,
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
  [2869] = 17,
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
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(43), 1,
      sym_qualid,
    STATE(47), 1,
      sym_unop,
    STATE(67), 1,
      sym_bareid,
    STATE(79), 1,
      sym_string,
    STATE(80), 1,
      sym_id,
    STATE(91), 1,
      sym_atom,
    STATE(92), 1,
      sym_constant,
    STATE(127), 1,
      sym_func_term,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2922] = 17,
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
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(43), 1,
      sym_qualid,
    STATE(47), 1,
      sym_unop,
    STATE(67), 1,
      sym_bareid,
    STATE(79), 1,
      sym_string,
    STATE(80), 1,
      sym_id,
    STATE(91), 1,
      sym_atom,
    STATE(92), 1,
      sym_constant,
    STATE(106), 1,
      sym_func_term,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2975] = 17,
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
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(43), 1,
      sym_qualid,
    STATE(47), 1,
      sym_unop,
    STATE(67), 1,
      sym_bareid,
    STATE(79), 1,
      sym_string,
    STATE(80), 1,
      sym_id,
    STATE(91), 1,
      sym_atom,
    STATE(92), 1,
      sym_constant,
    STATE(143), 1,
      sym_func_term,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [3028] = 17,
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
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(43), 1,
      sym_qualid,
    STATE(47), 1,
      sym_unop,
    STATE(67), 1,
      sym_bareid,
    STATE(79), 1,
      sym_string,
    STATE(80), 1,
      sym_id,
    STATE(91), 1,
      sym_atom,
    STATE(92), 1,
      sym_constant,
    STATE(142), 1,
      sym_func_term,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [3081] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      sym_digits,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(203), 1,
      sym_qualid,
    ACTIONS(268), 1,
      anon_sym_PERCENT,
    ACTIONS(270), 1,
      aux_sym_bareid_token1,
    ACTIONS(272), 1,
      aux_sym_bareid_token2,
    STATE(40), 1,
      sym_bareid,
    STATE(49), 1,
      sym_id,
    STATE(54), 1,
      sym_unop,
    STATE(57), 1,
      sym_func_term,
    STATE(61), 1,
      sym_atom,
    STATE(63), 1,
      sym_constant,
    STATE(64), 1,
      sym_string,
    ACTIONS(191), 2,
      sym_real,
      sym_frac,
  [3134] = 17,
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
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(43), 1,
      sym_qualid,
    STATE(47), 1,
      sym_unop,
    STATE(67), 1,
      sym_bareid,
    STATE(79), 1,
      sym_string,
    STATE(80), 1,
      sym_id,
    STATE(91), 1,
      sym_atom,
    STATE(92), 1,
      sym_constant,
    STATE(107), 1,
      sym_func_term,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [3187] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      sym_digits,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(203), 1,
      sym_qualid,
    ACTIONS(268), 1,
      anon_sym_PERCENT,
    ACTIONS(270), 1,
      aux_sym_bareid_token1,
    ACTIONS(272), 1,
      aux_sym_bareid_token2,
    STATE(40), 1,
      sym_bareid,
    STATE(49), 1,
      sym_id,
    STATE(54), 1,
      sym_unop,
    STATE(58), 1,
      sym_func_term,
    STATE(61), 1,
      sym_atom,
    STATE(63), 1,
      sym_constant,
    STATE(64), 1,
      sym_string,
    ACTIONS(191), 2,
      sym_real,
      sym_frac,
  [3240] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(56), 1,
      sym_binop,
    ACTIONS(276), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(274), 13,
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
  [3267] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_SLASH,
    STATE(56), 1,
      sym_binop,
    ACTIONS(280), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(250), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(278), 9,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3298] = 17,
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
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(43), 1,
      sym_qualid,
    STATE(47), 1,
      sym_unop,
    STATE(67), 1,
      sym_bareid,
    STATE(79), 1,
      sym_string,
    STATE(80), 1,
      sym_id,
    STATE(91), 1,
      sym_atom,
    STATE(92), 1,
      sym_constant,
    STATE(141), 1,
      sym_func_term,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [3351] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(278), 13,
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
  [3375] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(282), 13,
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
  [3399] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(230), 13,
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
  [3423] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 3,
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
  [3447] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(286), 13,
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
  [3471] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(290), 13,
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
  [3495] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 5,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(50), 10,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      aux_sym_bareid_token2,
      sym_qualid,
  [3518] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_SLASH,
    ACTIONS(242), 14,
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
  [3541] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 5,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(296), 9,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      aux_sym_bareid_token2,
      sym_qualid,
  [3563] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 5,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(300), 9,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      aux_sym_bareid_token2,
      sym_qualid,
  [3585] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(304), 1,
      anon_sym_DASH,
    ACTIONS(306), 1,
      sym_digits,
    STATE(258), 1,
      sym_enum_cnst,
    STATE(337), 1,
      sym_enum_list,
    ACTIONS(308), 3,
      sym_real,
      sym_frac,
      sym_qualid,
    STATE(271), 3,
      sym_string,
      sym_range,
      sym_bareid,
  [3623] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 5,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(310), 9,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      aux_sym_bareid_token2,
      sym_qualid,
  [3645] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 5,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(314), 9,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      aux_sym_bareid_token2,
      sym_qualid,
  [3667] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(43), 1,
      sym_qualid,
    ACTIONS(205), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      anon_sym_RBRACE,
    STATE(67), 1,
      sym_bareid,
    STATE(138), 1,
      sym_sentence_config,
    STATE(184), 1,
      sym_step,
    STATE(238), 1,
      sym_id,
    STATE(315), 1,
      sym_trans_steps,
    STATE(376), 1,
      sym_step_or_update_lhs,
    STATE(84), 2,
      sym_trans_step_config,
      aux_sym_trans_steps_repeat1,
  [3711] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 5,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(320), 9,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      aux_sym_bareid_token2,
      sym_qualid,
  [3733] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 5,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(324), 9,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      aux_sym_bareid_token2,
      sym_qualid,
  [3755] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 4,
      anon_sym_conforms,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(94), 10,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      aux_sym_bareid_token2,
      sym_qualid,
  [3777] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 5,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(330), 9,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      aux_sym_bareid_token2,
      sym_qualid,
  [3799] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 5,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(334), 9,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      aux_sym_bareid_token2,
      sym_qualid,
  [3821] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_SLASH,
    ACTIONS(286), 12,
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
  [3842] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_SLASH,
    ACTIONS(338), 1,
      anon_sym_LPAREN,
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
  [3865] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_SLASH,
    STATE(48), 1,
      sym_binop,
    ACTIONS(250), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(278), 7,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [3890] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(304), 1,
      anon_sym_DASH,
    ACTIONS(306), 1,
      sym_digits,
    STATE(284), 1,
      sym_enum_cnst,
    ACTIONS(308), 3,
      sym_real,
      sym_frac,
      sym_qualid,
    STATE(271), 3,
      sym_string,
      sym_range,
      sym_bareid,
  [3925] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 5,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(340), 8,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      aux_sym_bareid_token2,
      sym_qualid,
  [3946] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(43), 1,
      sym_qualid,
    ACTIONS(205), 1,
      anon_sym_LBRACK,
    ACTIONS(344), 1,
      anon_sym_RBRACE,
    STATE(67), 1,
      sym_bareid,
    STATE(138), 1,
      sym_sentence_config,
    STATE(184), 1,
      sym_step,
    STATE(238), 1,
      sym_id,
    STATE(376), 1,
      sym_step_or_update_lhs,
    STATE(86), 2,
      sym_trans_step_config,
      aux_sym_trans_steps_repeat1,
  [3987] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_SLASH,
    STATE(48), 1,
      sym_binop,
    ACTIONS(274), 11,
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
  [4010] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_RBRACE,
    ACTIONS(348), 1,
      anon_sym_LBRACK,
    ACTIONS(351), 1,
      anon_sym_PERCENT,
    ACTIONS(354), 1,
      aux_sym_bareid_token1,
    ACTIONS(357), 1,
      aux_sym_bareid_token2,
    ACTIONS(360), 1,
      sym_qualid,
    STATE(67), 1,
      sym_bareid,
    STATE(138), 1,
      sym_sentence_config,
    STATE(184), 1,
      sym_step,
    STATE(238), 1,
      sym_id,
    STATE(376), 1,
      sym_step_or_update_lhs,
    STATE(86), 2,
      sym_trans_step_config,
      aux_sym_trans_steps_repeat1,
  [4051] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(367), 1,
      anon_sym_PERCENT,
    STATE(116), 1,
      sym_bareid,
    STATE(204), 1,
      sym_mod_ref,
    STATE(286), 1,
      sym_mod_refs,
    ACTIONS(363), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
    ACTIONS(365), 2,
      anon_sym_includes,
      anon_sym_extends,
    STATE(149), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [4085] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_SLASH,
    ACTIONS(278), 11,
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
  [4105] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_LBRACE,
    ACTIONS(266), 1,
      sym_qualid,
    ACTIONS(268), 1,
      anon_sym_PERCENT,
    ACTIONS(270), 1,
      aux_sym_bareid_token1,
    ACTIONS(272), 1,
      aux_sym_bareid_token2,
    ACTIONS(369), 1,
      anon_sym_any,
    STATE(148), 1,
      sym_unncmp,
    STATE(180), 1,
      sym_bareid,
    STATE(193), 1,
      sym_typeid,
    STATE(203), 1,
      sym_field,
    STATE(210), 1,
      sym_unnbody,
    STATE(235), 1,
      sym_fields,
  [4145] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_LBRACE,
    ACTIONS(266), 1,
      sym_qualid,
    ACTIONS(268), 1,
      anon_sym_PERCENT,
    ACTIONS(270), 1,
      aux_sym_bareid_token1,
    ACTIONS(272), 1,
      aux_sym_bareid_token2,
    ACTIONS(369), 1,
      anon_sym_any,
    STATE(148), 1,
      sym_unncmp,
    STATE(180), 1,
      sym_bareid,
    STATE(193), 1,
      sym_typeid,
    STATE(203), 1,
      sym_field,
    STATE(210), 1,
      sym_unnbody,
    STATE(311), 1,
      sym_fields,
  [4185] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_SLASH,
    ACTIONS(282), 11,
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
  [4205] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_SLASH,
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
  [4225] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 4,
      anon_sym_conforms,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(340), 8,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      aux_sym_bareid_token2,
      sym_qualid,
  [4245] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_LBRACE,
    ACTIONS(266), 1,
      sym_qualid,
    ACTIONS(268), 1,
      anon_sym_PERCENT,
    ACTIONS(270), 1,
      aux_sym_bareid_token1,
    ACTIONS(272), 1,
      aux_sym_bareid_token2,
    ACTIONS(369), 1,
      anon_sym_any,
    STATE(148), 1,
      sym_unncmp,
    STATE(180), 1,
      sym_bareid,
    STATE(193), 1,
      sym_typeid,
    STATE(203), 1,
      sym_field,
    STATE(210), 1,
      sym_unnbody,
    STATE(332), 1,
      sym_fields,
  [4285] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_LBRACE,
    ACTIONS(266), 1,
      sym_qualid,
    ACTIONS(268), 1,
      anon_sym_PERCENT,
    ACTIONS(270), 1,
      aux_sym_bareid_token1,
    ACTIONS(272), 1,
      aux_sym_bareid_token2,
    ACTIONS(369), 1,
      anon_sym_any,
    STATE(148), 1,
      sym_unncmp,
    STATE(180), 1,
      sym_bareid,
    STATE(193), 1,
      sym_typeid,
    STATE(203), 1,
      sym_field,
    STATE(210), 1,
      sym_unnbody,
    STATE(294), 1,
      sym_fields,
  [4325] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_SLASH,
    ACTIONS(290), 11,
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
  [4345] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_SLASH,
    STATE(48), 1,
      sym_binop,
    ACTIONS(250), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(371), 6,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [4369] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_RBRACE,
    ACTIONS(375), 1,
      anon_sym_boot,
    ACTIONS(379), 1,
      anon_sym_property,
    ACTIONS(381), 1,
      anon_sym_LBRACK,
    STATE(173), 1,
      sym_machine_sentence,
    STATE(174), 1,
      sym_machine_prop,
    STATE(176), 1,
      sym_sentence_config,
    STATE(301), 1,
      sym_machine_body,
    ACTIONS(377), 2,
      anon_sym_initially,
      anon_sym_next,
    STATE(100), 2,
      sym_machine_sentence_conf,
      aux_sym_machine_body_repeat1,
  [4405] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_RBRACE,
    ACTIONS(385), 1,
      anon_sym_boot,
    ACTIONS(391), 1,
      anon_sym_property,
    ACTIONS(394), 1,
      anon_sym_LBRACK,
    STATE(173), 1,
      sym_machine_sentence,
    STATE(174), 1,
      sym_machine_prop,
    STATE(176), 1,
      sym_sentence_config,
    ACTIONS(388), 2,
      anon_sym_initially,
      anon_sym_next,
    STATE(99), 2,
      sym_machine_sentence_conf,
      aux_sym_machine_body_repeat1,
  [4438] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_boot,
    ACTIONS(379), 1,
      anon_sym_property,
    ACTIONS(381), 1,
      anon_sym_LBRACK,
    ACTIONS(397), 1,
      anon_sym_RBRACE,
    STATE(173), 1,
      sym_machine_sentence,
    STATE(174), 1,
      sym_machine_prop,
    STATE(176), 1,
      sym_sentence_config,
    ACTIONS(377), 2,
      anon_sym_initially,
      anon_sym_next,
    STATE(99), 2,
      sym_machine_sentence_conf,
      aux_sym_machine_body_repeat1,
  [4471] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_SLASH,
    ACTIONS(338), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_is,
    ACTIONS(234), 8,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4494] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_LBRACE,
    ACTIONS(266), 1,
      sym_qualid,
    ACTIONS(268), 1,
      anon_sym_PERCENT,
    ACTIONS(270), 1,
      aux_sym_bareid_token1,
    ACTIONS(272), 1,
      aux_sym_bareid_token2,
    ACTIONS(369), 1,
      anon_sym_any,
    STATE(148), 1,
      sym_unncmp,
    STATE(180), 1,
      sym_bareid,
    STATE(193), 1,
      sym_typeid,
    STATE(209), 1,
      sym_field,
    STATE(210), 1,
      sym_unnbody,
  [4531] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 3,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(401), 7,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      aux_sym_bareid_token2,
      sym_qualid,
  [4549] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_SLASH,
    ACTIONS(405), 1,
      anon_sym_COLON_COLON_EQ,
    ACTIONS(242), 8,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_COLON_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4569] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 3,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(407), 7,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      aux_sym_bareid_token2,
      sym_qualid,
  [4587] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_SLASH,
    STATE(48), 1,
      sym_binop,
    ACTIONS(250), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(411), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [4609] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_SLASH,
    STATE(48), 1,
      sym_binop,
    ACTIONS(250), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(413), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [4631] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_PERCENT,
    STATE(116), 1,
      sym_bareid,
    STATE(204), 1,
      sym_mod_ref,
    STATE(267), 1,
      sym_mod_refs,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
    ACTIONS(415), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
    STATE(149), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [4659] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(256), 1,
      anon_sym_LBRACE,
    ACTIONS(266), 1,
      sym_qualid,
    ACTIONS(417), 1,
      anon_sym_any,
    STATE(148), 1,
      sym_unncmp,
    STATE(188), 1,
      sym_bareid,
    STATE(193), 1,
      sym_typeid,
    STATE(226), 1,
      sym_unnbody,
  [4693] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 3,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(419), 7,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      aux_sym_bareid_token2,
      sym_qualid,
  [4711] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 3,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(340), 7,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      aux_sym_bareid_token2,
      sym_qualid,
  [4729] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_SLASH,
    STATE(48), 1,
      sym_binop,
    ACTIONS(250), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(423), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [4751] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(256), 1,
      anon_sym_LBRACE,
    ACTIONS(266), 1,
      sym_qualid,
    STATE(148), 1,
      sym_unncmp,
    STATE(188), 1,
      sym_bareid,
    STATE(193), 1,
      sym_typeid,
    STATE(285), 1,
      sym_unnbody,
  [4782] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(256), 1,
      anon_sym_LBRACE,
    ACTIONS(266), 1,
      sym_qualid,
    STATE(148), 1,
      sym_unncmp,
    STATE(188), 1,
      sym_bareid,
    STATE(193), 1,
      sym_typeid,
    STATE(231), 1,
      sym_unnbody,
  [4813] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_SLASH,
    ACTIONS(425), 1,
      anon_sym_is,
    ACTIONS(242), 7,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4832] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_COLON_COLON,
    ACTIONS(431), 1,
      anon_sym_AT,
    ACTIONS(427), 7,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [4851] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_AT,
    ACTIONS(433), 8,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [4868] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_SLASH,
    ACTIONS(437), 1,
      anon_sym_at,
    ACTIONS(242), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4887] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(256), 1,
      anon_sym_LBRACE,
    ACTIONS(266), 1,
      sym_qualid,
    STATE(148), 1,
      sym_unncmp,
    STATE(188), 1,
      sym_bareid,
    STATE(193), 1,
      sym_typeid,
    STATE(222), 1,
      sym_unnbody,
  [4918] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_PERCENT,
    STATE(116), 1,
      sym_bareid,
    STATE(250), 1,
      sym_mod_apply,
    STATE(319), 1,
      sym_mod_ref,
    STATE(327), 1,
      sym_choice_list,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
    STATE(149), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [4945] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_PERCENT,
    STATE(116), 1,
      sym_bareid,
    STATE(204), 1,
      sym_mod_ref,
    STATE(290), 1,
      sym_mod_refs,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
    STATE(149), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [4969] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_SLASH,
    STATE(48), 1,
      sym_binop,
    ACTIONS(439), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
    ACTIONS(250), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4989] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(43), 1,
      sym_qualid,
    STATE(67), 1,
      sym_bareid,
    STATE(255), 1,
      sym_setting,
    STATE(344), 1,
      sym_id,
    STATE(346), 1,
      sym_setting_list,
  [5017] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_RPAREN,
    ACTIONS(443), 1,
      anon_sym_PERCENT,
    STATE(236), 1,
      sym_val_or_model_program,
    STATE(273), 1,
      sym_bareid,
    STATE(278), 1,
      sym_mod_ref_rename,
    STATE(345), 1,
      sym_vom_param_list,
    ACTIONS(272), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [5043] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_PERCENT,
    STATE(116), 1,
      sym_bareid,
    STATE(303), 1,
      sym_mod_apply,
    STATE(319), 1,
      sym_mod_ref,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
    STATE(149), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5067] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(43), 1,
      sym_qualid,
    STATE(67), 1,
      sym_bareid,
    STATE(255), 1,
      sym_setting,
    STATE(344), 1,
      sym_id,
    STATE(367), 1,
      sym_setting_list,
  [5095] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_SLASH,
    STATE(48), 1,
      sym_binop,
    ACTIONS(445), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
    ACTIONS(250), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [5115] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_PERCENT,
    STATE(116), 1,
      sym_bareid,
    STATE(319), 1,
      sym_mod_ref,
    STATE(365), 1,
      sym_mod_apply,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
    STATE(149), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5139] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_SLASH,
    STATE(48), 1,
      sym_binop,
    ACTIONS(447), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(250), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [5159] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(43), 1,
      sym_qualid,
    STATE(67), 1,
      sym_bareid,
    STATE(185), 1,
      sym_step,
    STATE(238), 1,
      sym_id,
    STATE(372), 1,
      sym_step_or_update_lhs,
  [5187] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(43), 1,
      sym_qualid,
    STATE(67), 1,
      sym_bareid,
    STATE(185), 1,
      sym_update,
    STATE(238), 1,
      sym_id,
    STATE(355), 1,
      sym_step_or_update_lhs,
  [5215] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_PERCENT,
    STATE(116), 1,
      sym_bareid,
    STATE(292), 1,
      sym_mod_apply,
    STATE(319), 1,
      sym_mod_ref,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
    STATE(149), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5239] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(43), 1,
      sym_qualid,
    STATE(67), 1,
      sym_bareid,
    STATE(255), 1,
      sym_setting,
    STATE(344), 1,
      sym_id,
    STATE(368), 1,
      sym_setting_list,
  [5267] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_PERCENT,
    ACTIONS(449), 1,
      anon_sym_RPAREN,
    STATE(236), 1,
      sym_val_or_model_program,
    STATE(273), 1,
      sym_bareid,
    STATE(278), 1,
      sym_mod_ref_rename,
    STATE(313), 1,
      sym_vom_param_list,
    ACTIONS(272), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [5293] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(43), 1,
      sym_qualid,
    STATE(67), 1,
      sym_bareid,
    STATE(255), 1,
      sym_setting,
    STATE(322), 1,
      sym_setting_list,
    STATE(344), 1,
      sym_id,
  [5321] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_PERCENT,
    STATE(116), 1,
      sym_bareid,
    STATE(204), 1,
      sym_mod_ref,
    STATE(276), 1,
      sym_mod_refs,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
    STATE(149), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5345] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 8,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [5359] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(43), 1,
      sym_qualid,
    STATE(67), 1,
      sym_bareid,
    STATE(178), 1,
      sym_step,
    STATE(238), 1,
      sym_id,
    STATE(376), 1,
      sym_step_or_update_lhs,
  [5387] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(43), 1,
      sym_qualid,
    STATE(67), 1,
      sym_bareid,
    STATE(255), 1,
      sym_setting,
    STATE(344), 1,
      sym_id,
    STATE(361), 1,
      sym_setting_list,
  [5415] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(256), 1,
      anon_sym_LBRACE,
    ACTIONS(266), 1,
      sym_qualid,
    STATE(166), 1,
      sym_unncmp,
    STATE(188), 1,
      sym_bareid,
    STATE(193), 1,
      sym_typeid,
  [5443] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_SLASH,
    ACTIONS(453), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      sym_binop,
    ACTIONS(250), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [5462] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_SLASH,
    ACTIONS(455), 1,
      anon_sym_DOT,
    STATE(48), 1,
      sym_binop,
    ACTIONS(250), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [5481] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_SLASH,
    ACTIONS(457), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      sym_binop,
    ACTIONS(250), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [5500] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 7,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [5513] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_PLUS,
    STATE(157), 1,
      aux_sym_unnbody_repeat1,
    ACTIONS(461), 5,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [5530] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_COMMA,
    STATE(147), 1,
      aux_sym_func_term_list_repeat1,
    ACTIONS(465), 5,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [5547] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_COMMA,
    STATE(152), 1,
      aux_sym_func_term_list_repeat1,
    ACTIONS(469), 5,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [5564] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_PLUS,
    STATE(145), 1,
      aux_sym_unnbody_repeat1,
    ACTIONS(471), 5,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [5581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 7,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [5594] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_PERCENT,
    STATE(116), 1,
      sym_bareid,
    STATE(229), 1,
      sym_mod_ref,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
    STATE(149), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5615] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_PERCENT,
    STATE(116), 1,
      sym_bareid,
    STATE(224), 1,
      sym_mod_ref,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
    STATE(149), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5636] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_COMMA,
    STATE(152), 1,
      aux_sym_func_term_list_repeat1,
    ACTIONS(475), 5,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [5653] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [5666] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_PERCENT,
    STATE(116), 1,
      sym_bareid,
    STATE(223), 1,
      sym_mod_ref,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
    STATE(149), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5687] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 7,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [5700] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 7,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [5713] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_PLUS,
    STATE(157), 1,
      aux_sym_unnbody_repeat1,
    ACTIONS(486), 5,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [5730] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(43), 1,
      sym_qualid,
    STATE(67), 1,
      sym_bareid,
    STATE(265), 1,
      sym_setting,
    STATE(344), 1,
      sym_id,
  [5755] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [5767] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(43), 1,
      sym_qualid,
    STATE(67), 1,
      sym_bareid,
    STATE(357), 1,
      sym_id,
  [5789] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [5801] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 2,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(491), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_bareid_token2,
      sym_qualid,
  [5815] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [5827] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 3,
      anon_sym_LBRACE,
      aux_sym_bareid_token2,
      sym_qualid,
    ACTIONS(501), 3,
      anon_sym_any,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
  [5841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [5853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_PLUS,
  [5865] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_PERCENT,
    STATE(273), 1,
      sym_bareid,
    STATE(278), 1,
      sym_mod_ref_rename,
    STATE(287), 1,
      sym_val_or_model_program,
    ACTIONS(272), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [5885] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_PLUS,
  [5897] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_digits,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(79), 1,
      sym_string,
    STATE(264), 1,
      sym_constant,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [5917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [5929] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [5941] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [5953] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [5965] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [5977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [5989] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_boot,
    ACTIONS(379), 1,
      anon_sym_property,
    STATE(174), 1,
      sym_machine_prop,
    STATE(186), 1,
      sym_machine_sentence,
    ACTIONS(377), 2,
      anon_sym_initially,
      anon_sym_next,
  [6009] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [6021] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 2,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(521), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_bareid_token2,
      sym_qualid,
  [6035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [6047] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_COLON,
    ACTIONS(527), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_PLUS,
  [6061] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [6073] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [6085] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_PERCENT,
    STATE(242), 1,
      sym_mod_ref_rename,
    STATE(306), 1,
      sym_bareid,
    STATE(307), 1,
      sym_model_param_list,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [6105] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 2,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(535), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_bareid_token2,
      sym_qualid,
  [6119] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [6131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [6143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [6155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_PLUS,
  [6167] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(43), 1,
      sym_qualid,
    STATE(67), 1,
      sym_bareid,
    STATE(262), 1,
      sym_id,
  [6189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 6,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [6201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [6213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [6225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_PLUS,
  [6237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 6,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [6249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [6261] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_COMMA,
    STATE(196), 1,
      aux_sym_fields_repeat1,
    ACTIONS(553), 3,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [6276] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_LPAREN,
    STATE(191), 1,
      sym_tsystem_rest,
    STATE(243), 1,
      sym_transform_sig,
    STATE(314), 1,
      sym_trans_sig_in,
    STATE(336), 1,
      sym_transform_sig_config,
  [6295] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_COMMA,
    STATE(198), 1,
      aux_sym_mod_refs_repeat1,
    ACTIONS(560), 3,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LBRACK,
  [6310] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_PERCENT,
    STATE(279), 1,
      sym_mod_ref_rename,
    STATE(306), 1,
      sym_bareid,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [6327] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(367), 1,
      anon_sym_PERCENT,
    ACTIONS(565), 1,
      anon_sym_system,
    STATE(208), 1,
      sym_bareid,
  [6346] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      aux_sym_body_repeat1,
    ACTIONS(567), 3,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [6361] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_COMMA,
    STATE(202), 1,
      aux_sym_body_repeat1,
    ACTIONS(571), 3,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [6376] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_COMMA,
    STATE(205), 1,
      aux_sym_fields_repeat1,
    ACTIONS(576), 3,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [6391] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_COMMA,
    STATE(207), 1,
      aux_sym_mod_refs_repeat1,
    ACTIONS(580), 3,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LBRACK,
  [6406] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_COMMA,
    STATE(196), 1,
      aux_sym_fields_repeat1,
    ACTIONS(584), 3,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [6421] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_COMMA,
    STATE(202), 1,
      aux_sym_body_repeat1,
    ACTIONS(586), 3,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [6436] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_COMMA,
    STATE(198), 1,
      aux_sym_mod_refs_repeat1,
    ACTIONS(588), 3,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LBRACK,
  [6451] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_LPAREN,
    STATE(165), 1,
      sym_transform_rest,
    STATE(243), 1,
      sym_transform_sig,
    STATE(314), 1,
      sym_trans_sig_in,
    STATE(317), 1,
      sym_transform_sig_config,
  [6470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [6480] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [6490] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
    ACTIONS(594), 2,
      anon_sym_includes,
      anon_sym_extends,
  [6502] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_SEMI,
    STATE(221), 1,
      aux_sym_body_list_repeat1,
    ACTIONS(596), 2,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [6516] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_PERCENT,
    STATE(87), 1,
      sym_bareid,
    ACTIONS(272), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [6530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 4,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
  [6540] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_machine,
    ACTIONS(600), 1,
      anon_sym_LBRACE,
    STATE(220), 2,
      sym_machine_sig,
      aux_sym_machine_sig_config_repeat1,
  [6554] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_PERCENT,
    STATE(117), 1,
      sym_bareid,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [6568] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_PERCENT,
    STATE(328), 1,
      sym_bareid,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [6582] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_PERCENT,
    STATE(197), 1,
      sym_bareid,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [6596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [6606] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
      anon_sym_LBRACE,
    ACTIONS(604), 1,
      anon_sym_machine,
    STATE(220), 2,
      sym_machine_sig,
      aux_sym_machine_sig_config_repeat1,
  [6620] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_SEMI,
    STATE(221), 1,
      aux_sym_body_list_repeat1,
    ACTIONS(607), 2,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [6634] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [6644] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 4,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_COMMA,
      anon_sym_LBRACK,
  [6654] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 4,
      anon_sym_LBRACE,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [6664] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_SEMI,
    STATE(212), 1,
      aux_sym_body_list_repeat1,
    ACTIONS(616), 2,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [6678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [6688] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_PERCENT,
    STATE(268), 1,
      sym_bareid,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [6702] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [6712] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 4,
      anon_sym_LBRACE,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [6722] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_PERCENT,
    STATE(325), 1,
      sym_bareid,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [6736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [6746] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_PERCENT,
    STATE(349), 1,
      sym_bareid,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [6760] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_DOT,
    ACTIONS(626), 1,
      anon_sym_SEMI,
    STATE(244), 1,
      aux_sym_choice_list_repeat1,
  [6773] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      anon_sym_RBRACE,
    ACTIONS(630), 1,
      anon_sym_COMMA,
    STATE(240), 1,
      aux_sym_enum_list_repeat1,
  [6786] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(95), 1,
      sym_maparrow,
    ACTIONS(632), 2,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [6797] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      anon_sym_RPAREN,
    ACTIONS(636), 1,
      anon_sym_COMMA,
    STATE(246), 1,
      aux_sym_vom_param_list_repeat1,
  [6810] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 1,
      anon_sym_RPAREN,
    ACTIONS(640), 1,
      anon_sym_COMMA,
    STATE(237), 1,
      aux_sym_vom_param_list_repeat1,
  [6823] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      anon_sym_EQ,
    ACTIONS(645), 1,
      anon_sym_COMMA,
    STATE(247), 1,
      aux_sym_step_or_update_lhs_repeat1,
  [6836] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_RPAREN,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    STATE(252), 1,
      aux_sym_mod_arg_list_repeat1,
  [6849] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 1,
      anon_sym_RBRACE,
    ACTIONS(653), 1,
      anon_sym_COMMA,
    STATE(240), 1,
      aux_sym_enum_list_repeat1,
  [6862] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      anon_sym_COMMA,
    ACTIONS(658), 1,
      anon_sym_RBRACK,
    STATE(257), 1,
      aux_sym_setting_list_repeat1,
  [6875] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_RPAREN,
    ACTIONS(662), 1,
      anon_sym_COMMA,
    STATE(251), 1,
      aux_sym_model_param_list_repeat1,
  [6888] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(664), 1,
      anon_sym_LBRACE,
    STATE(348), 1,
      sym_config,
  [6901] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_DOT,
    ACTIONS(668), 1,
      anon_sym_SEMI,
    STATE(244), 1,
      aux_sym_choice_list_repeat1,
  [6914] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(671), 1,
      anon_sym_LBRACE,
    STATE(343), 1,
      sym_config,
  [6927] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_COMMA,
    ACTIONS(673), 1,
      anon_sym_RPAREN,
    STATE(237), 1,
      aux_sym_vom_param_list_repeat1,
  [6940] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_COMMA,
    ACTIONS(675), 1,
      anon_sym_EQ,
    STATE(248), 1,
      aux_sym_step_or_update_lhs_repeat1,
  [6953] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      anon_sym_EQ,
    ACTIONS(679), 1,
      anon_sym_COMMA,
    STATE(248), 1,
      aux_sym_step_or_update_lhs_repeat1,
  [6966] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_DOT_DOT,
    ACTIONS(682), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [6977] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      anon_sym_SEMI,
    ACTIONS(686), 1,
      anon_sym_DOT,
    STATE(233), 1,
      aux_sym_choice_list_repeat1,
  [6990] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      anon_sym_COMMA,
    ACTIONS(688), 1,
      anon_sym_RPAREN,
    STATE(259), 1,
      aux_sym_model_param_list_repeat1,
  [7003] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(690), 1,
      anon_sym_RPAREN,
    STATE(254), 1,
      aux_sym_mod_arg_list_repeat1,
  [7016] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 3,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [7025] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_RPAREN,
    ACTIONS(694), 1,
      anon_sym_COMMA,
    STATE(254), 1,
      aux_sym_mod_arg_list_repeat1,
  [7038] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      anon_sym_COMMA,
    ACTIONS(697), 1,
      anon_sym_RBRACK,
    STATE(241), 1,
      aux_sym_setting_list_repeat1,
  [7051] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(699), 1,
      anon_sym_LBRACE,
    STATE(342), 1,
      sym_config,
  [7064] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_COMMA,
    ACTIONS(704), 1,
      anon_sym_RBRACK,
    STATE(257), 1,
      aux_sym_setting_list_repeat1,
  [7077] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 1,
      anon_sym_COMMA,
    ACTIONS(706), 1,
      anon_sym_RBRACE,
    STATE(234), 1,
      aux_sym_enum_list_repeat1,
  [7090] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_RPAREN,
    ACTIONS(710), 1,
      anon_sym_COMMA,
    STATE(259), 1,
      aux_sym_model_param_list_repeat1,
  [7103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [7111] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      anon_sym_DASH,
    ACTIONS(717), 1,
      sym_digits,
  [7121] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 2,
      anon_sym_EQ,
      anon_sym_COMMA,
  [7129] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_RBRACE,
    ACTIONS(721), 1,
      anon_sym_PIPE,
  [7139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7147] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7155] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(156), 1,
      sym_string,
  [7165] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [7173] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      anon_sym_LPAREN,
    STATE(340), 1,
      sym_machine_sig_in,
  [7183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [7191] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7199] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [7207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7215] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_COLON_COLON,
    ACTIONS(733), 1,
      anon_sym_COLON,
  [7225] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(270), 1,
      sym_string,
  [7235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [7243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [7251] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      anon_sym_DOT,
    ACTIONS(741), 1,
      anon_sym_COMMA,
  [7261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7277] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      anon_sym_DASH,
    ACTIONS(747), 1,
      sym_digits,
  [7287] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      anon_sym_DOT,
    ACTIONS(751), 1,
      anon_sym_COLON_DASH,
  [7297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [7305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [7313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [7321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7329] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [7337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7345] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [7353] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(137), 1,
      sym_string,
  [7363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 2,
      anon_sym_LBRACE,
      anon_sym_machine,
  [7371] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 1,
      anon_sym_DOT,
    ACTIONS(765), 1,
      anon_sym_COMMA,
  [7381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [7389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      anon_sym_DOT,
  [7396] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      anon_sym_RPAREN,
  [7403] = 2,
    ACTIONS(771), 1,
      aux_sym_string_token1,
    ACTIONS(773), 1,
      sym_comment,
  [7410] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(775), 1,
      anon_sym_DOT,
  [7417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 1,
      anon_sym_DOT,
  [7424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 1,
      anon_sym_RBRACE,
  [7431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_returns,
  [7438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      anon_sym_DOT,
  [7445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 1,
      anon_sym_RBRACE,
  [7452] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 1,
      aux_sym_model_contract_token1,
  [7459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 1,
      anon_sym_DOT,
  [7466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 1,
      anon_sym_DOT_DOT,
  [7473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      anon_sym_of,
  [7480] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_COLON_COLON,
  [7487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 1,
      anon_sym_RPAREN,
  [7494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      anon_sym_DOT,
  [7501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      anon_sym_DOT,
  [7508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_of,
  [7515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      anon_sym_RPAREN,
  [7522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      anon_sym_DOT,
  [7529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 1,
      anon_sym_RPAREN,
  [7536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 1,
      anon_sym_returns,
  [7543] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 1,
      anon_sym_RBRACE,
  [7550] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_RPAREN,
  [7557] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_LBRACE,
  [7564] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      sym_digits,
  [7571] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(817), 1,
      anon_sym_LPAREN,
  [7578] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 1,
      anon_sym_LPAREN,
  [7585] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      aux_sym_model_contract_token1,
  [7592] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_RBRACK,
  [7599] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_DOT,
  [7606] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_DOT,
  [7613] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 1,
      anon_sym_EQ,
  [7620] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_LPAREN,
  [7627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 1,
      anon_sym_DOT,
  [7634] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_of,
  [7641] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_LPAREN,
  [7648] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      anon_sym_DOT,
  [7655] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 1,
      sym_digits,
  [7662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_RPAREN,
  [7669] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_DOT,
  [7676] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      anon_sym_RBRACE,
  [7683] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 1,
      anon_sym_DOT,
  [7690] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      anon_sym_LBRACE,
  [7697] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(853), 1,
      anon_sym_RBRACE,
  [7704] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      sym_digits,
  [7711] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      anon_sym_DOT,
  [7718] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_of,
  [7725] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(861), 1,
      anon_sym_returns,
  [7732] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_LBRACE,
  [7739] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_LBRACE,
  [7746] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 1,
      anon_sym_EQ,
  [7753] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      anon_sym_RPAREN,
  [7760] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 1,
      anon_sym_RBRACK,
  [7767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      anon_sym_RPAREN,
  [7774] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(875), 1,
      anon_sym_LBRACE,
  [7781] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      anon_sym_of,
  [7788] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      anon_sym_LPAREN,
  [7795] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      anon_sym_RBRACE,
  [7802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      aux_sym_bareid_token1,
  [7809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(885), 1,
      anon_sym_RBRACE,
  [7816] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(887), 1,
      anon_sym_DOT,
  [7823] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 1,
      anon_sym_EQ,
  [7830] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 1,
      anon_sym_LBRACE,
  [7837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 1,
      anon_sym_DOT,
  [7844] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 1,
      anon_sym_DOT,
  [7851] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_LBRACE,
  [7858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 1,
      aux_sym_bareid_token1,
  [7865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(901), 1,
      anon_sym_RBRACK,
  [7872] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
  [7879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 1,
      anon_sym_DQUOTE,
  [7886] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      anon_sym_RPAREN,
  [7893] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(909), 1,
      anon_sym_DOT,
  [7900] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 1,
      aux_sym_bareid_token1,
  [7907] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 1,
      anon_sym_RBRACK,
  [7914] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 1,
      anon_sym_RBRACK,
  [7921] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      anon_sym_DQUOTE,
  [7928] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(919), 1,
      ts_builtin_sym_end,
  [7935] = 2,
    ACTIONS(773), 1,
      sym_comment,
    ACTIONS(921), 1,
      aux_sym_string_token1,
  [7942] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(923), 1,
      anon_sym_EQ,
  [7949] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(925), 1,
      anon_sym_DOT,
  [7956] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(927), 1,
      anon_sym_DOT,
  [7963] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(929), 1,
      anon_sym_model,
  [7970] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 94,
  [SMALL_STATE(4)] = 185,
  [SMALL_STATE(5)] = 276,
  [SMALL_STATE(6)] = 369,
  [SMALL_STATE(7)] = 459,
  [SMALL_STATE(8)] = 549,
  [SMALL_STATE(9)] = 634,
  [SMALL_STATE(10)] = 716,
  [SMALL_STATE(11)] = 798,
  [SMALL_STATE(12)] = 833,
  [SMALL_STATE(13)] = 868,
  [SMALL_STATE(14)] = 903,
  [SMALL_STATE(15)] = 938,
  [SMALL_STATE(16)] = 1014,
  [SMALL_STATE(17)] = 1089,
  [SMALL_STATE(18)] = 1162,
  [SMALL_STATE(19)] = 1227,
  [SMALL_STATE(20)] = 1282,
  [SMALL_STATE(21)] = 1347,
  [SMALL_STATE(22)] = 1412,
  [SMALL_STATE(23)] = 1477,
  [SMALL_STATE(24)] = 1532,
  [SMALL_STATE(25)] = 1587,
  [SMALL_STATE(26)] = 1652,
  [SMALL_STATE(27)] = 1717,
  [SMALL_STATE(28)] = 1782,
  [SMALL_STATE(29)] = 1847,
  [SMALL_STATE(30)] = 1912,
  [SMALL_STATE(31)] = 1977,
  [SMALL_STATE(32)] = 2032,
  [SMALL_STATE(33)] = 2097,
  [SMALL_STATE(34)] = 2159,
  [SMALL_STATE(35)] = 2221,
  [SMALL_STATE(36)] = 2283,
  [SMALL_STATE(37)] = 2310,
  [SMALL_STATE(38)] = 2369,
  [SMALL_STATE(39)] = 2428,
  [SMALL_STATE(40)] = 2458,
  [SMALL_STATE(41)] = 2484,
  [SMALL_STATE(42)] = 2510,
  [SMALL_STATE(43)] = 2546,
  [SMALL_STATE(44)] = 2602,
  [SMALL_STATE(45)] = 2658,
  [SMALL_STATE(46)] = 2710,
  [SMALL_STATE(47)] = 2736,
  [SMALL_STATE(48)] = 2789,
  [SMALL_STATE(49)] = 2842,
  [SMALL_STATE(50)] = 2869,
  [SMALL_STATE(51)] = 2922,
  [SMALL_STATE(52)] = 2975,
  [SMALL_STATE(53)] = 3028,
  [SMALL_STATE(54)] = 3081,
  [SMALL_STATE(55)] = 3134,
  [SMALL_STATE(56)] = 3187,
  [SMALL_STATE(57)] = 3240,
  [SMALL_STATE(58)] = 3267,
  [SMALL_STATE(59)] = 3298,
  [SMALL_STATE(60)] = 3351,
  [SMALL_STATE(61)] = 3375,
  [SMALL_STATE(62)] = 3399,
  [SMALL_STATE(63)] = 3423,
  [SMALL_STATE(64)] = 3447,
  [SMALL_STATE(65)] = 3471,
  [SMALL_STATE(66)] = 3495,
  [SMALL_STATE(67)] = 3518,
  [SMALL_STATE(68)] = 3541,
  [SMALL_STATE(69)] = 3563,
  [SMALL_STATE(70)] = 3585,
  [SMALL_STATE(71)] = 3623,
  [SMALL_STATE(72)] = 3645,
  [SMALL_STATE(73)] = 3667,
  [SMALL_STATE(74)] = 3711,
  [SMALL_STATE(75)] = 3733,
  [SMALL_STATE(76)] = 3755,
  [SMALL_STATE(77)] = 3777,
  [SMALL_STATE(78)] = 3799,
  [SMALL_STATE(79)] = 3821,
  [SMALL_STATE(80)] = 3842,
  [SMALL_STATE(81)] = 3865,
  [SMALL_STATE(82)] = 3890,
  [SMALL_STATE(83)] = 3925,
  [SMALL_STATE(84)] = 3946,
  [SMALL_STATE(85)] = 3987,
  [SMALL_STATE(86)] = 4010,
  [SMALL_STATE(87)] = 4051,
  [SMALL_STATE(88)] = 4085,
  [SMALL_STATE(89)] = 4105,
  [SMALL_STATE(90)] = 4145,
  [SMALL_STATE(91)] = 4185,
  [SMALL_STATE(92)] = 4205,
  [SMALL_STATE(93)] = 4225,
  [SMALL_STATE(94)] = 4245,
  [SMALL_STATE(95)] = 4285,
  [SMALL_STATE(96)] = 4325,
  [SMALL_STATE(97)] = 4345,
  [SMALL_STATE(98)] = 4369,
  [SMALL_STATE(99)] = 4405,
  [SMALL_STATE(100)] = 4438,
  [SMALL_STATE(101)] = 4471,
  [SMALL_STATE(102)] = 4494,
  [SMALL_STATE(103)] = 4531,
  [SMALL_STATE(104)] = 4549,
  [SMALL_STATE(105)] = 4569,
  [SMALL_STATE(106)] = 4587,
  [SMALL_STATE(107)] = 4609,
  [SMALL_STATE(108)] = 4631,
  [SMALL_STATE(109)] = 4659,
  [SMALL_STATE(110)] = 4693,
  [SMALL_STATE(111)] = 4711,
  [SMALL_STATE(112)] = 4729,
  [SMALL_STATE(113)] = 4751,
  [SMALL_STATE(114)] = 4782,
  [SMALL_STATE(115)] = 4813,
  [SMALL_STATE(116)] = 4832,
  [SMALL_STATE(117)] = 4851,
  [SMALL_STATE(118)] = 4868,
  [SMALL_STATE(119)] = 4887,
  [SMALL_STATE(120)] = 4918,
  [SMALL_STATE(121)] = 4945,
  [SMALL_STATE(122)] = 4969,
  [SMALL_STATE(123)] = 4989,
  [SMALL_STATE(124)] = 5017,
  [SMALL_STATE(125)] = 5043,
  [SMALL_STATE(126)] = 5067,
  [SMALL_STATE(127)] = 5095,
  [SMALL_STATE(128)] = 5115,
  [SMALL_STATE(129)] = 5139,
  [SMALL_STATE(130)] = 5159,
  [SMALL_STATE(131)] = 5187,
  [SMALL_STATE(132)] = 5215,
  [SMALL_STATE(133)] = 5239,
  [SMALL_STATE(134)] = 5267,
  [SMALL_STATE(135)] = 5293,
  [SMALL_STATE(136)] = 5321,
  [SMALL_STATE(137)] = 5345,
  [SMALL_STATE(138)] = 5359,
  [SMALL_STATE(139)] = 5387,
  [SMALL_STATE(140)] = 5415,
  [SMALL_STATE(141)] = 5443,
  [SMALL_STATE(142)] = 5462,
  [SMALL_STATE(143)] = 5481,
  [SMALL_STATE(144)] = 5500,
  [SMALL_STATE(145)] = 5513,
  [SMALL_STATE(146)] = 5530,
  [SMALL_STATE(147)] = 5547,
  [SMALL_STATE(148)] = 5564,
  [SMALL_STATE(149)] = 5581,
  [SMALL_STATE(150)] = 5594,
  [SMALL_STATE(151)] = 5615,
  [SMALL_STATE(152)] = 5636,
  [SMALL_STATE(153)] = 5653,
  [SMALL_STATE(154)] = 5666,
  [SMALL_STATE(155)] = 5687,
  [SMALL_STATE(156)] = 5700,
  [SMALL_STATE(157)] = 5713,
  [SMALL_STATE(158)] = 5730,
  [SMALL_STATE(159)] = 5755,
  [SMALL_STATE(160)] = 5767,
  [SMALL_STATE(161)] = 5789,
  [SMALL_STATE(162)] = 5801,
  [SMALL_STATE(163)] = 5815,
  [SMALL_STATE(164)] = 5827,
  [SMALL_STATE(165)] = 5841,
  [SMALL_STATE(166)] = 5853,
  [SMALL_STATE(167)] = 5865,
  [SMALL_STATE(168)] = 5885,
  [SMALL_STATE(169)] = 5897,
  [SMALL_STATE(170)] = 5917,
  [SMALL_STATE(171)] = 5929,
  [SMALL_STATE(172)] = 5941,
  [SMALL_STATE(173)] = 5953,
  [SMALL_STATE(174)] = 5965,
  [SMALL_STATE(175)] = 5977,
  [SMALL_STATE(176)] = 5989,
  [SMALL_STATE(177)] = 6009,
  [SMALL_STATE(178)] = 6021,
  [SMALL_STATE(179)] = 6035,
  [SMALL_STATE(180)] = 6047,
  [SMALL_STATE(181)] = 6061,
  [SMALL_STATE(182)] = 6073,
  [SMALL_STATE(183)] = 6085,
  [SMALL_STATE(184)] = 6105,
  [SMALL_STATE(185)] = 6119,
  [SMALL_STATE(186)] = 6131,
  [SMALL_STATE(187)] = 6143,
  [SMALL_STATE(188)] = 6155,
  [SMALL_STATE(189)] = 6167,
  [SMALL_STATE(190)] = 6189,
  [SMALL_STATE(191)] = 6201,
  [SMALL_STATE(192)] = 6213,
  [SMALL_STATE(193)] = 6225,
  [SMALL_STATE(194)] = 6237,
  [SMALL_STATE(195)] = 6249,
  [SMALL_STATE(196)] = 6261,
  [SMALL_STATE(197)] = 6276,
  [SMALL_STATE(198)] = 6295,
  [SMALL_STATE(199)] = 6310,
  [SMALL_STATE(200)] = 6327,
  [SMALL_STATE(201)] = 6346,
  [SMALL_STATE(202)] = 6361,
  [SMALL_STATE(203)] = 6376,
  [SMALL_STATE(204)] = 6391,
  [SMALL_STATE(205)] = 6406,
  [SMALL_STATE(206)] = 6421,
  [SMALL_STATE(207)] = 6436,
  [SMALL_STATE(208)] = 6451,
  [SMALL_STATE(209)] = 6470,
  [SMALL_STATE(210)] = 6480,
  [SMALL_STATE(211)] = 6490,
  [SMALL_STATE(212)] = 6502,
  [SMALL_STATE(213)] = 6516,
  [SMALL_STATE(214)] = 6530,
  [SMALL_STATE(215)] = 6540,
  [SMALL_STATE(216)] = 6554,
  [SMALL_STATE(217)] = 6568,
  [SMALL_STATE(218)] = 6582,
  [SMALL_STATE(219)] = 6596,
  [SMALL_STATE(220)] = 6606,
  [SMALL_STATE(221)] = 6620,
  [SMALL_STATE(222)] = 6634,
  [SMALL_STATE(223)] = 6644,
  [SMALL_STATE(224)] = 6654,
  [SMALL_STATE(225)] = 6664,
  [SMALL_STATE(226)] = 6678,
  [SMALL_STATE(227)] = 6688,
  [SMALL_STATE(228)] = 6702,
  [SMALL_STATE(229)] = 6712,
  [SMALL_STATE(230)] = 6722,
  [SMALL_STATE(231)] = 6736,
  [SMALL_STATE(232)] = 6746,
  [SMALL_STATE(233)] = 6760,
  [SMALL_STATE(234)] = 6773,
  [SMALL_STATE(235)] = 6786,
  [SMALL_STATE(236)] = 6797,
  [SMALL_STATE(237)] = 6810,
  [SMALL_STATE(238)] = 6823,
  [SMALL_STATE(239)] = 6836,
  [SMALL_STATE(240)] = 6849,
  [SMALL_STATE(241)] = 6862,
  [SMALL_STATE(242)] = 6875,
  [SMALL_STATE(243)] = 6888,
  [SMALL_STATE(244)] = 6901,
  [SMALL_STATE(245)] = 6914,
  [SMALL_STATE(246)] = 6927,
  [SMALL_STATE(247)] = 6940,
  [SMALL_STATE(248)] = 6953,
  [SMALL_STATE(249)] = 6966,
  [SMALL_STATE(250)] = 6977,
  [SMALL_STATE(251)] = 6990,
  [SMALL_STATE(252)] = 7003,
  [SMALL_STATE(253)] = 7016,
  [SMALL_STATE(254)] = 7025,
  [SMALL_STATE(255)] = 7038,
  [SMALL_STATE(256)] = 7051,
  [SMALL_STATE(257)] = 7064,
  [SMALL_STATE(258)] = 7077,
  [SMALL_STATE(259)] = 7090,
  [SMALL_STATE(260)] = 7103,
  [SMALL_STATE(261)] = 7111,
  [SMALL_STATE(262)] = 7121,
  [SMALL_STATE(263)] = 7129,
  [SMALL_STATE(264)] = 7139,
  [SMALL_STATE(265)] = 7147,
  [SMALL_STATE(266)] = 7155,
  [SMALL_STATE(267)] = 7165,
  [SMALL_STATE(268)] = 7173,
  [SMALL_STATE(269)] = 7183,
  [SMALL_STATE(270)] = 7191,
  [SMALL_STATE(271)] = 7199,
  [SMALL_STATE(272)] = 7207,
  [SMALL_STATE(273)] = 7215,
  [SMALL_STATE(274)] = 7225,
  [SMALL_STATE(275)] = 7235,
  [SMALL_STATE(276)] = 7243,
  [SMALL_STATE(277)] = 7251,
  [SMALL_STATE(278)] = 7261,
  [SMALL_STATE(279)] = 7269,
  [SMALL_STATE(280)] = 7277,
  [SMALL_STATE(281)] = 7287,
  [SMALL_STATE(282)] = 7297,
  [SMALL_STATE(283)] = 7305,
  [SMALL_STATE(284)] = 7313,
  [SMALL_STATE(285)] = 7321,
  [SMALL_STATE(286)] = 7329,
  [SMALL_STATE(287)] = 7337,
  [SMALL_STATE(288)] = 7345,
  [SMALL_STATE(289)] = 7353,
  [SMALL_STATE(290)] = 7363,
  [SMALL_STATE(291)] = 7371,
  [SMALL_STATE(292)] = 7381,
  [SMALL_STATE(293)] = 7389,
  [SMALL_STATE(294)] = 7396,
  [SMALL_STATE(295)] = 7403,
  [SMALL_STATE(296)] = 7410,
  [SMALL_STATE(297)] = 7417,
  [SMALL_STATE(298)] = 7424,
  [SMALL_STATE(299)] = 7431,
  [SMALL_STATE(300)] = 7438,
  [SMALL_STATE(301)] = 7445,
  [SMALL_STATE(302)] = 7452,
  [SMALL_STATE(303)] = 7459,
  [SMALL_STATE(304)] = 7466,
  [SMALL_STATE(305)] = 7473,
  [SMALL_STATE(306)] = 7480,
  [SMALL_STATE(307)] = 7487,
  [SMALL_STATE(308)] = 7494,
  [SMALL_STATE(309)] = 7501,
  [SMALL_STATE(310)] = 7508,
  [SMALL_STATE(311)] = 7515,
  [SMALL_STATE(312)] = 7522,
  [SMALL_STATE(313)] = 7529,
  [SMALL_STATE(314)] = 7536,
  [SMALL_STATE(315)] = 7543,
  [SMALL_STATE(316)] = 7550,
  [SMALL_STATE(317)] = 7557,
  [SMALL_STATE(318)] = 7564,
  [SMALL_STATE(319)] = 7571,
  [SMALL_STATE(320)] = 7578,
  [SMALL_STATE(321)] = 7585,
  [SMALL_STATE(322)] = 7592,
  [SMALL_STATE(323)] = 7599,
  [SMALL_STATE(324)] = 7606,
  [SMALL_STATE(325)] = 7613,
  [SMALL_STATE(326)] = 7620,
  [SMALL_STATE(327)] = 7627,
  [SMALL_STATE(328)] = 7634,
  [SMALL_STATE(329)] = 7641,
  [SMALL_STATE(330)] = 7648,
  [SMALL_STATE(331)] = 7655,
  [SMALL_STATE(332)] = 7662,
  [SMALL_STATE(333)] = 7669,
  [SMALL_STATE(334)] = 7676,
  [SMALL_STATE(335)] = 7683,
  [SMALL_STATE(336)] = 7690,
  [SMALL_STATE(337)] = 7697,
  [SMALL_STATE(338)] = 7704,
  [SMALL_STATE(339)] = 7711,
  [SMALL_STATE(340)] = 7718,
  [SMALL_STATE(341)] = 7725,
  [SMALL_STATE(342)] = 7732,
  [SMALL_STATE(343)] = 7739,
  [SMALL_STATE(344)] = 7746,
  [SMALL_STATE(345)] = 7753,
  [SMALL_STATE(346)] = 7760,
  [SMALL_STATE(347)] = 7767,
  [SMALL_STATE(348)] = 7774,
  [SMALL_STATE(349)] = 7781,
  [SMALL_STATE(350)] = 7788,
  [SMALL_STATE(351)] = 7795,
  [SMALL_STATE(352)] = 7802,
  [SMALL_STATE(353)] = 7809,
  [SMALL_STATE(354)] = 7816,
  [SMALL_STATE(355)] = 7823,
  [SMALL_STATE(356)] = 7830,
  [SMALL_STATE(357)] = 7837,
  [SMALL_STATE(358)] = 7844,
  [SMALL_STATE(359)] = 7851,
  [SMALL_STATE(360)] = 7858,
  [SMALL_STATE(361)] = 7865,
  [SMALL_STATE(362)] = 7872,
  [SMALL_STATE(363)] = 7879,
  [SMALL_STATE(364)] = 7886,
  [SMALL_STATE(365)] = 7893,
  [SMALL_STATE(366)] = 7900,
  [SMALL_STATE(367)] = 7907,
  [SMALL_STATE(368)] = 7914,
  [SMALL_STATE(369)] = 7921,
  [SMALL_STATE(370)] = 7928,
  [SMALL_STATE(371)] = 7935,
  [SMALL_STATE(372)] = 7942,
  [SMALL_STATE(373)] = 7949,
  [SMALL_STATE(374)] = 7956,
  [SMALL_STATE(375)] = 7963,
  [SMALL_STATE(376)] = 7970,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_body, 1),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(22),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(59),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(21),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(139),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(103),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(79),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(79),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(295),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(352),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(13),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(13),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(67),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(22),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(59),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(27),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(126),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(103),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(79),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(79),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(295),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(352),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(13),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(13),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(67),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dom_sentences, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(59),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(20),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(17),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(139),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(103),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(79),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(79),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(295),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(352),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(13),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(13),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(67),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_body, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bareid, 2),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bareid, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bareid, 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bareid, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(227),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(375),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(232),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(200),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(213),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 1),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term, 2),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_term, 2),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term, 3),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_term, 3),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term, 1),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_term, 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term, 4, .production_id = 2),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_term, 4, .production_id = 2),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_trans_body_repeat1, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_contract, 3),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_contract, 3),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_fact_list, 3),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_fact_list, 3),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_contract, 5),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_contract, 5),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_fact_list, 2),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_fact_list, 2),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_contract_conf, 2),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_contract_conf, 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_fact_list, 4),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_fact_list, 4),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dom_sentences_repeat1, 2),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_sentence, 1),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_sentence, 1),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_contract_conf, 1),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_contract_conf, 1),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sentence_config, 3),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sentence_config, 3),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_steps, 1),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trans_steps_repeat1, 2),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_steps_repeat1, 2), SHIFT_REPEAT(133),
  [351] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trans_steps_repeat1, 2), SHIFT_REPEAT(352),
  [354] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trans_steps_repeat1, 2), SHIFT_REPEAT(13),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_steps_repeat1, 2), SHIFT_REPEAT(13),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_steps_repeat1, 2), SHIFT_REPEAT(67),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain_sig, 2, .production_id = 1),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_or_compr, 1),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_machine_body_repeat1, 2),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_machine_body_repeat1, 2), SHIFT_REPEAT(130),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_machine_body_repeat1, 2), SHIFT_REPEAT(131),
  [391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_machine_body_repeat1, 2), SHIFT_REPEAT(230),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_machine_body_repeat1, 2), SHIFT_REPEAT(135),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_body, 1),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unop, 1),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unop, 1),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binop, 1),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binop, 1),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 3),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 4),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain_sig, 3, .production_id = 1),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relop, 1),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relop, 1),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 2),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_ref_no_rename, 1),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_ref_rename, 3, .production_id = 2),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_fact, 1),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_fact, 3),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_app_arg, 1),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_ref_rename, 5, .production_id = 2),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compr, 3),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unnbody, 2),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term_list, 1),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term_list, 2),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unnbody, 1),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_ref, 1),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_term_list_repeat1, 2),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_term_list_repeat1, 2), SHIFT_REPEAT(34),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 3),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compr, 5),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_ref_no_rename, 3),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unnbody_repeat1, 2),
  [488] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unnbody_repeat1, 2), SHIFT_REPEAT(140),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 4),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_step, 4),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model, 4),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maparrow, 1),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_maparrow, 1),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform, 3, .production_id = 1),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unncmp, 3),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine, 3),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_prop, 5),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 4),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sentence_conf, 1),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sentence, 1),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform_rest, 3),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model, 3),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_step_config, 2),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trans_step_config, 2),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tsystem_rest, 4),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeid, 1),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain, 3),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine, 4),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_step_config, 1),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trans_step_config, 1),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sentence, 2),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sentence_conf, 2),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform_rest, 4),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tsystem, 4),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain, 4),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unncmp, 1),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tsystem_rest, 3),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fields_repeat1, 2),
  [555] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fields_repeat1, 2), SHIFT_REPEAT(102),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mod_refs_repeat1, 2),
  [562] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mod_refs_repeat1, 2), SHIFT_REPEAT(154),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [573] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(37),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fields, 1),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_refs, 1),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fields, 2),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_refs, 2),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_sig, 1),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_list, 2),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sig_config, 1),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_machine_sig_config_repeat1, 2),
  [604] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_machine_sig_config_repeat1, 2), SHIFT_REPEAT(227),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_list_repeat1, 2),
  [609] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_list_repeat1, 2), SHIFT_REPEAT(35),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, .production_id = 2),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_intro, 4),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_list, 1),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 2),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_intro, 5),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_list, 2),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_list, 2),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vom_param_list, 1),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vom_param_list_repeat1, 2),
  [640] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vom_param_list_repeat1, 2), SHIFT_REPEAT(167),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_or_update_lhs, 1),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_arg_list, 1),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_list_repeat1, 2),
  [653] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_list_repeat1, 2), SHIFT_REPEAT(82),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_list, 2),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_param_list, 1),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform_sig_config, 1),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_list_repeat1, 2),
  [668] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_list_repeat1, 2), SHIFT_REPEAT(132),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_sig_config, 1),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vom_param_list, 2),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_or_update_lhs, 2),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_or_update_lhs_repeat1, 2),
  [679] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_step_or_update_lhs_repeat1, 2), SHIFT_REPEAT(189),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_cnst, 1),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_list, 1),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_param_list, 2),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_arg_list, 2),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mod_arg_list_repeat1, 2),
  [694] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mod_arg_list_repeat1, 2), SHIFT_REPEAT(43),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_list, 1),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain_sig_config, 1),
  [701] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setting_list_repeat1, 2), SHIFT_REPEAT(158),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_setting_list_repeat1, 2),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_list, 1),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_model_param_list_repeat1, 2),
  [710] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_param_list_repeat1, 2), SHIFT_REPEAT(199),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 4),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain_sig, 4, .production_id = 1),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 5),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_app_arg, 3),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_apply, 4),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_sig, 3),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_val_or_model_program, 1),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 1),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform_sig, 5),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_apply, 3),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_val_or_model_program, 3, .production_id = 2),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sig, 5),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl_body, 1),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_sentence_config, 1),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_sig_in, 3),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_card_spec, 1),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sig_in, 3),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl_body, 3),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_sentence_config, 2),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sig_in, 2),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_sentence, 2),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl, 3, .production_id = 3),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl_body, 4),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_decl, 1),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_sentence, 1),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dom_sentence_config, 2),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl_body, 6),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_sig_in, 2),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain_sig_config, 2),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_sig_config, 2),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform_sig_config, 2),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dom_sentence_config, 1),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [919] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [921] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dom_sentence, 2),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dom_sentence, 1),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
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
