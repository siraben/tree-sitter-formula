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
#define STATE_COUNT 388
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 175
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
  sym_compr_rest = 141,
  sym_body_list = 142,
  sym_body = 143,
  sym_constraint = 144,
  sym_func_term_list = 145,
  sym_func_or_compr = 146,
  sym_func_term = 147,
  sym_atom = 148,
  sym_id = 149,
  sym_constant = 150,
  sym_unop = 151,
  sym_binop = 152,
  sym_relop = 153,
  sym_bareid = 154,
  aux_sym_program_repeat1 = 155,
  aux_sym_machine_body_repeat1 = 156,
  aux_sym_machine_sig_config_repeat1 = 157,
  aux_sym_model_body_repeat1 = 158,
  aux_sym_trans_steps_repeat1 = 159,
  aux_sym_trans_body_repeat1 = 160,
  aux_sym_dom_sentences_repeat1 = 161,
  aux_sym_setting_list_repeat1 = 162,
  aux_sym_model_param_list_repeat1 = 163,
  aux_sym_vom_param_list_repeat1 = 164,
  aux_sym_choice_list_repeat1 = 165,
  aux_sym_mod_arg_list_repeat1 = 166,
  aux_sym_step_or_update_lhs_repeat1 = 167,
  aux_sym_mod_refs_repeat1 = 168,
  aux_sym_fields_repeat1 = 169,
  aux_sym_unnbody_repeat1 = 170,
  aux_sym_enum_list_repeat1 = 171,
  aux_sym_body_list_repeat1 = 172,
  aux_sym_body_repeat1 = 173,
  aux_sym_func_term_list_repeat1 = 174,
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
      if (lookahead == 'l') ADVANCE(180);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(181);
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
      ACCEPT_TOKEN(anon_sym_model);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_partial);
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
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 147},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 147},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 147},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 147},
  [27] = {.lex_state = 147},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 147},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 14},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 11},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 11},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 14},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 14},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 14},
  [96] = {.lex_state = 14},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 14},
  [101] = {.lex_state = 14},
  [102] = {.lex_state = 14},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 12},
  [105] = {.lex_state = 14},
  [106] = {.lex_state = 12},
  [107] = {.lex_state = 14},
  [108] = {.lex_state = 12},
  [109] = {.lex_state = 14},
  [110] = {.lex_state = 12},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 14},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 12},
  [117] = {.lex_state = 14},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 14},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 14},
  [122] = {.lex_state = 14},
  [123] = {.lex_state = 9},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 12},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 14},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 9},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 14},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 14},
  [136] = {.lex_state = 9},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 9},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 9},
  [144] = {.lex_state = 4},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 14},
  [147] = {.lex_state = 14},
  [148] = {.lex_state = 14},
  [149] = {.lex_state = 9},
  [150] = {.lex_state = 4},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 9},
  [153] = {.lex_state = 4},
  [154] = {.lex_state = 9},
  [155] = {.lex_state = 9},
  [156] = {.lex_state = 147},
  [157] = {.lex_state = 147},
  [158] = {.lex_state = 9},
  [159] = {.lex_state = 14},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 147},
  [162] = {.lex_state = 9},
  [163] = {.lex_state = 147},
  [164] = {.lex_state = 147},
  [165] = {.lex_state = 12},
  [166] = {.lex_state = 12},
  [167] = {.lex_state = 14},
  [168] = {.lex_state = 147},
  [169] = {.lex_state = 9},
  [170] = {.lex_state = 4},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 147},
  [173] = {.lex_state = 14},
  [174] = {.lex_state = 12},
  [175] = {.lex_state = 147},
  [176] = {.lex_state = 9},
  [177] = {.lex_state = 4},
  [178] = {.lex_state = 147},
  [179] = {.lex_state = 147},
  [180] = {.lex_state = 147},
  [181] = {.lex_state = 9},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 4},
  [184] = {.lex_state = 147},
  [185] = {.lex_state = 147},
  [186] = {.lex_state = 4},
  [187] = {.lex_state = 4},
  [188] = {.lex_state = 12},
  [189] = {.lex_state = 12},
  [190] = {.lex_state = 147},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 147},
  [194] = {.lex_state = 147},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 147},
  [197] = {.lex_state = 147},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 147},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 4},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 147},
  [206] = {.lex_state = 12},
  [207] = {.lex_state = 147},
  [208] = {.lex_state = 12},
  [209] = {.lex_state = 12},
  [210] = {.lex_state = 147},
  [211] = {.lex_state = 12},
  [212] = {.lex_state = 147},
  [213] = {.lex_state = 12},
  [214] = {.lex_state = 12},
  [215] = {.lex_state = 147},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 147},
  [221] = {.lex_state = 10},
  [222] = {.lex_state = 12},
  [223] = {.lex_state = 9},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 147},
  [226] = {.lex_state = 12},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 9},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 9},
  [231] = {.lex_state = 12},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 9},
  [237] = {.lex_state = 9},
  [238] = {.lex_state = 9},
  [239] = {.lex_state = 147},
  [240] = {.lex_state = 9},
  [241] = {.lex_state = 9},
  [242] = {.lex_state = 147},
  [243] = {.lex_state = 12},
  [244] = {.lex_state = 147},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 12},
  [247] = {.lex_state = 147},
  [248] = {.lex_state = 12},
  [249] = {.lex_state = 147},
  [250] = {.lex_state = 147},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 147},
  [253] = {.lex_state = 147},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 12},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 5},
  [263] = {.lex_state = 5},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 5},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 5},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 147},
  [278] = {.lex_state = 147},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 147},
  [284] = {.lex_state = 147},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 147},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 14},
  [301] = {.lex_state = 5},
  [302] = {.lex_state = 147},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 5},
  [305] = {.lex_state = 147},
  [306] = {.lex_state = 14},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 147},
  [313] = {.lex_state = 5},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 147},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 147},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 227},
  [324] = {.lex_state = 147},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 147},
  [329] = {.lex_state = 147},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 147},
  [334] = {.lex_state = 147},
  [335] = {.lex_state = 147},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 147},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 5},
  [345] = {.lex_state = 5},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 147},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 9},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 147},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 147},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 5},
  [365] = {.lex_state = 9},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 5},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 147},
  [372] = {.lex_state = 147},
  [373] = {.lex_state = 147},
  [374] = {.lex_state = 9},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 147},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 227},
  [380] = {.lex_state = 5},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 147},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 5},
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
    [sym_program] = STATE(362),
    [sym_module] = STATE(29),
    [sym_machine] = STATE(180),
    [sym_machine_sig_config] = STATE(359),
    [sym_machine_sig] = STATE(235),
    [sym_model] = STATE(180),
    [sym_model_sig_config] = STATE(358),
    [sym_model_sig] = STATE(270),
    [sym_model_intro] = STATE(233),
    [sym_tsystem] = STATE(180),
    [sym_transform] = STATE(180),
    [sym_domain] = STATE(180),
    [sym_domain_sig_config] = STATE(355),
    [sym_domain_sig] = STATE(269),
    [sym_config] = STATE(23),
    [aux_sym_program_repeat1] = STATE(29),
    [aux_sym_machine_sig_config_repeat1] = STATE(235),
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
  [0] = 29,
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
    STATE(15), 1,
      sym_sentence_config,
    STATE(55), 1,
      sym_unop,
    STATE(70), 1,
      sym_trans_sentence,
    STATE(93), 1,
      sym_id,
    STATE(96), 1,
      sym_string,
    STATE(102), 1,
      sym_constant,
    STATE(105), 1,
      sym_atom,
    STATE(107), 1,
      sym_func_term,
    STATE(119), 1,
      sym_bareid,
    STATE(164), 1,
      sym_func_or_compr,
    STATE(185), 1,
      sym_compr,
    STATE(283), 1,
      sym_func_term_list,
    STATE(353), 1,
      sym_trans_body,
    ACTIONS(25), 2,
      anon_sym_ensures,
      anon_sym_requires,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    STATE(5), 2,
      sym_trans_sentence_config,
      aux_sym_trans_body_repeat1,
    STATE(74), 2,
      sym_type_decl,
      sym_rule,
  [92] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(48), 1,
      anon_sym_RBRACE,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(56), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      anon_sym_DASH,
    ACTIONS(62), 1,
      sym_digits,
    ACTIONS(68), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_PERCENT,
    ACTIONS(74), 1,
      aux_sym_bareid_token1,
    ACTIONS(77), 1,
      aux_sym_bareid_token2,
    ACTIONS(80), 1,
      sym_qualid,
    STATE(15), 1,
      sym_sentence_config,
    STATE(55), 1,
      sym_unop,
    STATE(70), 1,
      sym_trans_sentence,
    STATE(93), 1,
      sym_id,
    STATE(96), 1,
      sym_string,
    STATE(102), 1,
      sym_constant,
    STATE(105), 1,
      sym_atom,
    STATE(107), 1,
      sym_func_term,
    STATE(119), 1,
      sym_bareid,
    STATE(164), 1,
      sym_func_or_compr,
    STATE(185), 1,
      sym_compr,
    STATE(283), 1,
      sym_func_term_list,
    ACTIONS(53), 2,
      anon_sym_ensures,
      anon_sym_requires,
    ACTIONS(65), 2,
      sym_real,
      sym_frac,
    STATE(3), 2,
      sym_trans_sentence_config,
      aux_sym_trans_body_repeat1,
    STATE(74), 2,
      sym_type_decl,
      sym_rule,
  [181] = 29,
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
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    ACTIONS(85), 1,
      anon_sym_conforms,
    ACTIONS(87), 1,
      anon_sym_LBRACK,
    STATE(16), 1,
      sym_sentence_config,
    STATE(55), 1,
      sym_unop,
    STATE(91), 1,
      sym_dom_sentence,
    STATE(93), 1,
      sym_id,
    STATE(96), 1,
      sym_string,
    STATE(102), 1,
      sym_constant,
    STATE(105), 1,
      sym_atom,
    STATE(107), 1,
      sym_func_term,
    STATE(127), 1,
      sym_bareid,
    STATE(164), 1,
      sym_func_or_compr,
    STATE(185), 1,
      sym_compr,
    STATE(294), 1,
      sym_func_term_list,
    STATE(351), 1,
      sym_dom_sentences,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    STATE(6), 2,
      sym_dom_sentence_config,
      aux_sym_dom_sentences_repeat1,
    STATE(89), 2,
      sym_type_decl,
      sym_rule,
  [272] = 28,
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
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    STATE(15), 1,
      sym_sentence_config,
    STATE(55), 1,
      sym_unop,
    STATE(70), 1,
      sym_trans_sentence,
    STATE(93), 1,
      sym_id,
    STATE(96), 1,
      sym_string,
    STATE(102), 1,
      sym_constant,
    STATE(105), 1,
      sym_atom,
    STATE(107), 1,
      sym_func_term,
    STATE(119), 1,
      sym_bareid,
    STATE(164), 1,
      sym_func_or_compr,
    STATE(185), 1,
      sym_compr,
    STATE(283), 1,
      sym_func_term_list,
    ACTIONS(25), 2,
      anon_sym_ensures,
      anon_sym_requires,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    STATE(3), 2,
      sym_trans_sentence_config,
      aux_sym_trans_body_repeat1,
    STATE(74), 2,
      sym_type_decl,
      sym_rule,
  [361] = 28,
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
      anon_sym_conforms,
    ACTIONS(87), 1,
      anon_sym_LBRACK,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      sym_sentence_config,
    STATE(55), 1,
      sym_unop,
    STATE(91), 1,
      sym_dom_sentence,
    STATE(93), 1,
      sym_id,
    STATE(96), 1,
      sym_string,
    STATE(102), 1,
      sym_constant,
    STATE(105), 1,
      sym_atom,
    STATE(107), 1,
      sym_func_term,
    STATE(127), 1,
      sym_bareid,
    STATE(164), 1,
      sym_func_or_compr,
    STATE(185), 1,
      sym_compr,
    STATE(294), 1,
      sym_func_term_list,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    STATE(7), 2,
      sym_dom_sentence_config,
      aux_sym_dom_sentences_repeat1,
    STATE(89), 2,
      sym_type_decl,
      sym_rule,
  [449] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_LBRACE,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    ACTIONS(98), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_conforms,
    ACTIONS(104), 1,
      anon_sym_LBRACK,
    ACTIONS(107), 1,
      anon_sym_DASH,
    ACTIONS(110), 1,
      sym_digits,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      anon_sym_PERCENT,
    ACTIONS(122), 1,
      aux_sym_bareid_token1,
    ACTIONS(125), 1,
      aux_sym_bareid_token2,
    ACTIONS(128), 1,
      sym_qualid,
    STATE(16), 1,
      sym_sentence_config,
    STATE(55), 1,
      sym_unop,
    STATE(91), 1,
      sym_dom_sentence,
    STATE(93), 1,
      sym_id,
    STATE(96), 1,
      sym_string,
    STATE(102), 1,
      sym_constant,
    STATE(105), 1,
      sym_atom,
    STATE(107), 1,
      sym_func_term,
    STATE(127), 1,
      sym_bareid,
    STATE(164), 1,
      sym_func_or_compr,
    STATE(185), 1,
      sym_compr,
    STATE(294), 1,
      sym_func_term_list,
    ACTIONS(113), 2,
      sym_real,
      sym_frac,
    STATE(7), 2,
      sym_dom_sentence_config,
      aux_sym_dom_sentences_repeat1,
    STATE(89), 2,
      sym_type_decl,
      sym_rule,
  [537] = 27,
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
    STATE(22), 1,
      sym_sentence_config,
    STATE(55), 1,
      sym_unop,
    STATE(79), 1,
      sym_model_contract,
    STATE(93), 1,
      sym_id,
    STATE(96), 1,
      sym_string,
    STATE(102), 1,
      sym_constant,
    STATE(105), 1,
      sym_atom,
    STATE(133), 1,
      sym_bareid,
    STATE(146), 1,
      sym_func_term,
    STATE(284), 1,
      sym_model_fact,
    STATE(385), 1,
      sym_model_body,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    STATE(10), 2,
      sym_model_sentence,
      aux_sym_model_body_repeat1,
    STATE(78), 2,
      sym_model_contract_conf,
      sym_model_fact_list,
  [622] = 26,
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
    STATE(22), 1,
      sym_sentence_config,
    STATE(55), 1,
      sym_unop,
    STATE(79), 1,
      sym_model_contract,
    STATE(93), 1,
      sym_id,
    STATE(96), 1,
      sym_string,
    STATE(102), 1,
      sym_constant,
    STATE(105), 1,
      sym_atom,
    STATE(133), 1,
      sym_bareid,
    STATE(146), 1,
      sym_func_term,
    STATE(284), 1,
      sym_model_fact,
    ACTIONS(157), 2,
      sym_real,
      sym_frac,
    STATE(9), 2,
      sym_model_sentence,
      aux_sym_model_body_repeat1,
    STATE(78), 2,
      sym_model_contract_conf,
      sym_model_fact_list,
  [704] = 26,
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
    STATE(22), 1,
      sym_sentence_config,
    STATE(55), 1,
      sym_unop,
    STATE(79), 1,
      sym_model_contract,
    STATE(93), 1,
      sym_id,
    STATE(96), 1,
      sym_string,
    STATE(102), 1,
      sym_constant,
    STATE(105), 1,
      sym_atom,
    STATE(133), 1,
      sym_bareid,
    STATE(146), 1,
      sym_func_term,
    STATE(284), 1,
      sym_model_fact,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    STATE(9), 2,
      sym_model_sentence,
      aux_sym_model_body_repeat1,
    STATE(78), 2,
      sym_model_contract_conf,
      sym_model_fact_list,
  [786] = 3,
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
  [821] = 3,
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
  [856] = 3,
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
  [891] = 3,
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
  [926] = 24,
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
    STATE(55), 1,
      sym_unop,
    STATE(73), 1,
      sym_trans_sentence,
    STATE(93), 1,
      sym_id,
    STATE(96), 1,
      sym_string,
    STATE(102), 1,
      sym_constant,
    STATE(105), 1,
      sym_atom,
    STATE(107), 1,
      sym_func_term,
    STATE(119), 1,
      sym_bareid,
    STATE(164), 1,
      sym_func_or_compr,
    STATE(185), 1,
      sym_compr,
    STATE(283), 1,
      sym_func_term_list,
    ACTIONS(25), 2,
      anon_sym_ensures,
      anon_sym_requires,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    STATE(74), 2,
      sym_type_decl,
      sym_rule,
  [1002] = 24,
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
      anon_sym_conforms,
    STATE(55), 1,
      sym_unop,
    STATE(85), 1,
      sym_dom_sentence,
    STATE(93), 1,
      sym_id,
    STATE(96), 1,
      sym_string,
    STATE(102), 1,
      sym_constant,
    STATE(105), 1,
      sym_atom,
    STATE(107), 1,
      sym_func_term,
    STATE(127), 1,
      sym_bareid,
    STATE(164), 1,
      sym_func_or_compr,
    STATE(185), 1,
      sym_compr,
    STATE(294), 1,
      sym_func_term_list,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    STATE(89), 2,
      sym_type_decl,
      sym_rule,
  [1077] = 23,
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
    STATE(40), 1,
      sym_bareid,
    STATE(43), 1,
      sym_func_term,
    STATE(44), 1,
      sym_id,
    STATE(57), 1,
      sym_unop,
    STATE(63), 1,
      sym_string,
    STATE(66), 1,
      sym_atom,
    STATE(67), 1,
      sym_constant,
    STATE(215), 1,
      sym_constraint,
    STATE(239), 1,
      sym_body,
    STATE(326), 1,
      sym_card_spec,
    STATE(360), 1,
      sym_body_list,
    ACTIONS(191), 2,
      sym_real,
      sym_frac,
    ACTIONS(187), 3,
      anon_sym_some,
      anon_sym_atmost,
      anon_sym_atleast,
  [1150] = 21,
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
    STATE(40), 1,
      sym_bareid,
    STATE(43), 1,
      sym_func_term,
    STATE(44), 1,
      sym_id,
    STATE(57), 1,
      sym_unop,
    STATE(63), 1,
      sym_string,
    STATE(66), 1,
      sym_atom,
    STATE(67), 1,
      sym_constant,
    STATE(215), 1,
      sym_constraint,
    STATE(239), 1,
      sym_body,
    STATE(384), 1,
      sym_body_list,
    ACTIONS(191), 2,
      sym_real,
      sym_frac,
  [1215] = 21,
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
    STATE(40), 1,
      sym_bareid,
    STATE(43), 1,
      sym_func_term,
    STATE(44), 1,
      sym_id,
    STATE(57), 1,
      sym_unop,
    STATE(63), 1,
      sym_string,
    STATE(66), 1,
      sym_atom,
    STATE(67), 1,
      sym_constant,
    STATE(215), 1,
      sym_constraint,
    STATE(239), 1,
      sym_body,
    STATE(312), 1,
      sym_body_list,
    ACTIONS(191), 2,
      sym_real,
      sym_frac,
  [1280] = 21,
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
    STATE(55), 1,
      sym_unop,
    STATE(72), 1,
      sym_bareid,
    STATE(93), 1,
      sym_id,
    STATE(96), 1,
      sym_string,
    STATE(102), 1,
      sym_constant,
    STATE(105), 1,
      sym_atom,
    STATE(107), 1,
      sym_func_term,
    STATE(164), 1,
      sym_func_or_compr,
    STATE(185), 1,
      sym_compr,
    STATE(265), 1,
      sym_func_term_list,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [1345] = 21,
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
    STATE(40), 1,
      sym_bareid,
    STATE(43), 1,
      sym_func_term,
    STATE(44), 1,
      sym_id,
    STATE(57), 1,
      sym_unop,
    STATE(63), 1,
      sym_string,
    STATE(66), 1,
      sym_atom,
    STATE(67), 1,
      sym_constant,
    STATE(215), 1,
      sym_constraint,
    STATE(239), 1,
      sym_body,
    STATE(371), 1,
      sym_body_list,
    ACTIONS(191), 2,
      sym_real,
      sym_frac,
  [1410] = 21,
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
    STATE(55), 1,
      sym_unop,
    STATE(82), 1,
      sym_model_contract,
    STATE(93), 1,
      sym_id,
    STATE(96), 1,
      sym_string,
    STATE(102), 1,
      sym_constant,
    STATE(105), 1,
      sym_atom,
    STATE(133), 1,
      sym_bareid,
    STATE(146), 1,
      sym_func_term,
    STATE(277), 1,
      sym_model_fact,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [1475] = 16,
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
    ACTIONS(205), 1,
      ts_builtin_sym_end,
    STATE(233), 1,
      sym_model_intro,
    STATE(269), 1,
      sym_domain_sig,
    STATE(270), 1,
      sym_model_sig,
    STATE(355), 1,
      sym_domain_sig_config,
    STATE(358), 1,
      sym_model_sig_config,
    STATE(359), 1,
      sym_machine_sig_config,
    STATE(27), 2,
      sym_module,
      aux_sym_program_repeat1,
    STATE(235), 2,
      sym_machine_sig,
      aux_sym_machine_sig_config_repeat1,
    STATE(180), 5,
      sym_machine,
      sym_model,
      sym_tsystem,
      sym_transform,
      sym_domain,
  [1530] = 21,
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
    STATE(40), 1,
      sym_bareid,
    STATE(43), 1,
      sym_func_term,
    STATE(44), 1,
      sym_id,
    STATE(57), 1,
      sym_unop,
    STATE(63), 1,
      sym_string,
    STATE(66), 1,
      sym_atom,
    STATE(67), 1,
      sym_constant,
    STATE(215), 1,
      sym_constraint,
    STATE(239), 1,
      sym_body,
    STATE(348), 1,
      sym_body_list,
    ACTIONS(191), 2,
      sym_real,
      sym_frac,
  [1595] = 21,
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
    STATE(40), 1,
      sym_bareid,
    STATE(43), 1,
      sym_func_term,
    STATE(44), 1,
      sym_id,
    STATE(57), 1,
      sym_unop,
    STATE(63), 1,
      sym_string,
    STATE(66), 1,
      sym_atom,
    STATE(67), 1,
      sym_constant,
    STATE(215), 1,
      sym_constraint,
    STATE(239), 1,
      sym_body,
    STATE(360), 1,
      sym_body_list,
    ACTIONS(191), 2,
      sym_real,
      sym_frac,
  [1660] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
    ACTIONS(209), 1,
      anon_sym_machine,
    ACTIONS(212), 1,
      anon_sym_model,
    ACTIONS(215), 1,
      anon_sym_partial,
    ACTIONS(218), 1,
      anon_sym_transform,
    ACTIONS(221), 1,
      anon_sym_domain,
    STATE(233), 1,
      sym_model_intro,
    STATE(269), 1,
      sym_domain_sig,
    STATE(270), 1,
      sym_model_sig,
    STATE(355), 1,
      sym_domain_sig_config,
    STATE(358), 1,
      sym_model_sig_config,
    STATE(359), 1,
      sym_machine_sig_config,
    STATE(26), 2,
      sym_module,
      aux_sym_program_repeat1,
    STATE(235), 2,
      sym_machine_sig,
      aux_sym_machine_sig_config_repeat1,
    STATE(180), 5,
      sym_machine,
      sym_model,
      sym_tsystem,
      sym_transform,
      sym_domain,
  [1715] = 16,
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
    ACTIONS(224), 1,
      ts_builtin_sym_end,
    STATE(233), 1,
      sym_model_intro,
    STATE(269), 1,
      sym_domain_sig,
    STATE(270), 1,
      sym_model_sig,
    STATE(355), 1,
      sym_domain_sig_config,
    STATE(358), 1,
      sym_model_sig_config,
    STATE(359), 1,
      sym_machine_sig_config,
    STATE(26), 2,
      sym_module,
      aux_sym_program_repeat1,
    STATE(235), 2,
      sym_machine_sig,
      aux_sym_machine_sig_config_repeat1,
    STATE(180), 5,
      sym_machine,
      sym_model,
      sym_tsystem,
      sym_transform,
      sym_domain,
  [1770] = 21,
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
    STATE(55), 1,
      sym_unop,
    STATE(72), 1,
      sym_bareid,
    STATE(93), 1,
      sym_id,
    STATE(96), 1,
      sym_string,
    STATE(102), 1,
      sym_constant,
    STATE(105), 1,
      sym_atom,
    STATE(107), 1,
      sym_func_term,
    STATE(164), 1,
      sym_func_or_compr,
    STATE(185), 1,
      sym_compr,
    STATE(370), 1,
      sym_func_term_list,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [1835] = 16,
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
    ACTIONS(205), 1,
      ts_builtin_sym_end,
    STATE(233), 1,
      sym_model_intro,
    STATE(269), 1,
      sym_domain_sig,
    STATE(270), 1,
      sym_model_sig,
    STATE(355), 1,
      sym_domain_sig_config,
    STATE(358), 1,
      sym_model_sig_config,
    STATE(359), 1,
      sym_machine_sig_config,
    STATE(26), 2,
      sym_module,
      aux_sym_program_repeat1,
    STATE(235), 2,
      sym_machine_sig,
      aux_sym_machine_sig_config_repeat1,
    STATE(180), 5,
      sym_machine,
      sym_model,
      sym_tsystem,
      sym_transform,
      sym_domain,
  [1890] = 21,
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
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    STATE(42), 1,
      sym_sentence_config,
    STATE(55), 1,
      sym_unop,
    STATE(88), 1,
      sym_model_fact_list,
    STATE(93), 1,
      sym_id,
    STATE(96), 1,
      sym_string,
    STATE(102), 1,
      sym_constant,
    STATE(105), 1,
      sym_atom,
    STATE(133), 1,
      sym_bareid,
    STATE(146), 1,
      sym_func_term,
    STATE(284), 1,
      sym_model_fact,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [1955] = 21,
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
    STATE(40), 1,
      sym_bareid,
    STATE(43), 1,
      sym_func_term,
    STATE(44), 1,
      sym_id,
    STATE(57), 1,
      sym_unop,
    STATE(63), 1,
      sym_string,
    STATE(66), 1,
      sym_atom,
    STATE(67), 1,
      sym_constant,
    STATE(215), 1,
      sym_constraint,
    STATE(239), 1,
      sym_body,
    STATE(332), 1,
      sym_body_list,
    ACTIONS(191), 2,
      sym_real,
      sym_frac,
  [2020] = 21,
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
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    STATE(42), 1,
      sym_sentence_config,
    STATE(55), 1,
      sym_unop,
    STATE(90), 1,
      sym_model_fact_list,
    STATE(93), 1,
      sym_id,
    STATE(96), 1,
      sym_string,
    STATE(102), 1,
      sym_constant,
    STATE(105), 1,
      sym_atom,
    STATE(133), 1,
      sym_bareid,
    STATE(146), 1,
      sym_func_term,
    STATE(284), 1,
      sym_model_fact,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2085] = 21,
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
    STATE(55), 1,
      sym_unop,
    STATE(72), 1,
      sym_bareid,
    STATE(93), 1,
      sym_id,
    STATE(96), 1,
      sym_string,
    STATE(102), 1,
      sym_constant,
    STATE(105), 1,
      sym_atom,
    STATE(107), 1,
      sym_func_term,
    STATE(164), 1,
      sym_func_or_compr,
    STATE(185), 1,
      sym_compr,
    STATE(317), 1,
      sym_func_term_list,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2150] = 20,
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
    STATE(55), 1,
      sym_unop,
    STATE(93), 1,
      sym_id,
    STATE(96), 1,
      sym_string,
    STATE(102), 1,
      sym_constant,
    STATE(105), 1,
      sym_atom,
    STATE(135), 1,
      sym_bareid,
    STATE(147), 1,
      sym_func_term,
    STATE(256), 1,
      sym_mod_app_arg,
    STATE(319), 1,
      sym_mod_arg_list,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2212] = 20,
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
    STATE(55), 1,
      sym_unop,
    STATE(72), 1,
      sym_bareid,
    STATE(93), 1,
      sym_id,
    STATE(96), 1,
      sym_string,
    STATE(102), 1,
      sym_constant,
    STATE(105), 1,
      sym_atom,
    STATE(107), 1,
      sym_func_term,
    STATE(185), 1,
      sym_compr,
    STATE(196), 1,
      sym_func_or_compr,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2274] = 20,
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
    STATE(40), 1,
      sym_bareid,
    STATE(43), 1,
      sym_func_term,
    STATE(44), 1,
      sym_id,
    STATE(57), 1,
      sym_unop,
    STATE(63), 1,
      sym_string,
    STATE(66), 1,
      sym_atom,
    STATE(67), 1,
      sym_constant,
    STATE(215), 1,
      sym_constraint,
    STATE(252), 1,
      sym_body,
    ACTIONS(191), 2,
      sym_real,
      sym_frac,
  [2336] = 3,
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
  [2363] = 19,
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
    STATE(40), 1,
      sym_bareid,
    STATE(43), 1,
      sym_func_term,
    STATE(44), 1,
      sym_id,
    STATE(57), 1,
      sym_unop,
    STATE(63), 1,
      sym_string,
    STATE(66), 1,
      sym_atom,
    STATE(67), 1,
      sym_constant,
    STATE(244), 1,
      sym_constraint,
    ACTIONS(191), 2,
      sym_real,
      sym_frac,
  [2422] = 19,
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
    STATE(55), 1,
      sym_unop,
    STATE(72), 1,
      sym_bareid,
    STATE(96), 1,
      sym_string,
    STATE(102), 1,
      sym_constant,
    STATE(105), 1,
      sym_atom,
    STATE(114), 1,
      sym_id,
    STATE(121), 1,
      sym_func_term,
    STATE(247), 1,
      sym_compr,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2481] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(234), 15,
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
  [2507] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(238), 1,
      anon_sym_LBRACE,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      anon_sym_DASH,
    ACTIONS(244), 1,
      anon_sym_new,
    ACTIONS(248), 1,
      sym_qualid,
    STATE(165), 1,
      sym_unncmp,
    STATE(189), 1,
      sym_bareid,
    STATE(208), 1,
      sym_typeid,
    STATE(356), 1,
      sym_unnbody,
    STATE(357), 1,
      sym_fun_decl,
    STATE(377), 1,
      sym_type_decl_body,
    ACTIONS(246), 4,
      anon_sym_inj,
      anon_sym_bij,
      anon_sym_sur,
      anon_sym_fun,
  [2559] = 18,
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
    STATE(55), 1,
      sym_unop,
    STATE(93), 1,
      sym_id,
    STATE(96), 1,
      sym_string,
    STATE(102), 1,
      sym_constant,
    STATE(105), 1,
      sym_atom,
    STATE(133), 1,
      sym_bareid,
    STATE(146), 1,
      sym_func_term,
    STATE(277), 1,
      sym_model_fact,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2615] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_SLASH,
    STATE(49), 1,
      sym_binop,
    STATE(58), 1,
      sym_relop,
    ACTIONS(258), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(250), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(254), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(252), 5,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2651] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_LPAREN,
    ACTIONS(264), 1,
      anon_sym_is,
    ACTIONS(266), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(260), 13,
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
  [2681] = 3,
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
  [2707] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(238), 1,
      anon_sym_LBRACE,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      anon_sym_DASH,
    ACTIONS(244), 1,
      anon_sym_new,
    ACTIONS(248), 1,
      sym_qualid,
    STATE(165), 1,
      sym_unncmp,
    STATE(189), 1,
      sym_bareid,
    STATE(208), 1,
      sym_typeid,
    STATE(356), 1,
      sym_unnbody,
    STATE(357), 1,
      sym_fun_decl,
    STATE(372), 1,
      sym_type_decl_body,
    ACTIONS(246), 4,
      anon_sym_inj,
      anon_sym_bij,
      anon_sym_sur,
      anon_sym_fun,
  [2759] = 18,
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
    STATE(55), 1,
      sym_unop,
    STATE(93), 1,
      sym_id,
    STATE(96), 1,
      sym_string,
    STATE(102), 1,
      sym_constant,
    STATE(105), 1,
      sym_atom,
    STATE(135), 1,
      sym_bareid,
    STATE(147), 1,
      sym_func_term,
    STATE(295), 1,
      sym_mod_app_arg,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2815] = 3,
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
  [2841] = 17,
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
    STATE(51), 1,
      sym_id,
    STATE(53), 1,
      sym_func_term,
    STATE(57), 1,
      sym_unop,
    STATE(63), 1,
      sym_string,
    STATE(66), 1,
      sym_atom,
    STATE(67), 1,
      sym_constant,
    ACTIONS(191), 2,
      sym_real,
      sym_frac,
  [2894] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(49), 1,
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
  [2921] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(260), 13,
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
  [2948] = 17,
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
    STATE(55), 1,
      sym_unop,
    STATE(72), 1,
      sym_bareid,
    STATE(93), 1,
      sym_id,
    STATE(96), 1,
      sym_string,
    STATE(102), 1,
      sym_constant,
    STATE(105), 1,
      sym_atom,
    STATE(173), 1,
      sym_func_term,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [3001] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_SLASH,
    STATE(49), 1,
      sym_binop,
    ACTIONS(280), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(254), 4,
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
  [3032] = 17,
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
    STATE(55), 1,
      sym_unop,
    STATE(72), 1,
      sym_bareid,
    STATE(93), 1,
      sym_id,
    STATE(96), 1,
      sym_string,
    STATE(102), 1,
      sym_constant,
    STATE(105), 1,
      sym_atom,
    STATE(117), 1,
      sym_func_term,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [3085] = 17,
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
    STATE(55), 1,
      sym_unop,
    STATE(72), 1,
      sym_bareid,
    STATE(93), 1,
      sym_id,
    STATE(96), 1,
      sym_string,
    STATE(100), 1,
      sym_func_term,
    STATE(102), 1,
      sym_constant,
    STATE(105), 1,
      sym_atom,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [3138] = 17,
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
    STATE(55), 1,
      sym_unop,
    STATE(72), 1,
      sym_bareid,
    STATE(93), 1,
      sym_id,
    STATE(96), 1,
      sym_string,
    STATE(102), 1,
      sym_constant,
    STATE(105), 1,
      sym_atom,
    STATE(167), 1,
      sym_func_term,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [3191] = 17,
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
    STATE(50), 1,
      sym_func_term,
    STATE(51), 1,
      sym_id,
    STATE(57), 1,
      sym_unop,
    STATE(63), 1,
      sym_string,
    STATE(66), 1,
      sym_atom,
    STATE(67), 1,
      sym_constant,
    ACTIONS(191), 2,
      sym_real,
      sym_frac,
  [3244] = 17,
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
    STATE(55), 1,
      sym_unop,
    STATE(72), 1,
      sym_bareid,
    STATE(93), 1,
      sym_id,
    STATE(96), 1,
      sym_string,
    STATE(102), 1,
      sym_constant,
    STATE(105), 1,
      sym_atom,
    STATE(122), 1,
      sym_func_term,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [3297] = 17,
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
    STATE(55), 1,
      sym_unop,
    STATE(72), 1,
      sym_bareid,
    STATE(93), 1,
      sym_id,
    STATE(96), 1,
      sym_string,
    STATE(102), 1,
      sym_constant,
    STATE(105), 1,
      sym_atom,
    STATE(148), 1,
      sym_func_term,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [3350] = 17,
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
    STATE(55), 1,
      sym_unop,
    STATE(72), 1,
      sym_bareid,
    STATE(93), 1,
      sym_id,
    STATE(95), 1,
      sym_func_term,
    STATE(96), 1,
      sym_string,
    STATE(102), 1,
      sym_constant,
    STATE(105), 1,
      sym_atom,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [3403] = 17,
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
    STATE(55), 1,
      sym_unop,
    STATE(72), 1,
      sym_bareid,
    STATE(93), 1,
      sym_id,
    STATE(96), 1,
      sym_string,
    STATE(102), 1,
      sym_constant,
    STATE(105), 1,
      sym_atom,
    STATE(159), 1,
      sym_func_term,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [3456] = 3,
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
  [3480] = 3,
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
  [3504] = 3,
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
  [3528] = 3,
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
  [3552] = 3,
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
  [3576] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(260), 13,
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
  [3600] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 5,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(294), 10,
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
  [3623] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 5,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(298), 10,
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
  [3646] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 5,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(302), 10,
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
  [3669] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 5,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(306), 10,
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
  [3692] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_SLASH,
    ACTIONS(234), 14,
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
  [3715] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 5,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(310), 10,
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
  [3738] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 5,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(314), 10,
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
  [3761] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 5,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(318), 10,
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
  [3784] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 4,
      anon_sym_conforms,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(322), 10,
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
  [3806] = 11,
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
    ACTIONS(326), 1,
      anon_sym_DASH,
    ACTIONS(328), 1,
      sym_digits,
    STATE(266), 1,
      sym_enum_cnst,
    STATE(386), 1,
      sym_enum_list,
    ACTIONS(330), 3,
      sym_real,
      sym_frac,
      sym_qualid,
    STATE(280), 3,
      sym_string,
      sym_range,
      sym_bareid,
  [3844] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 5,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(332), 9,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      aux_sym_bareid_token2,
      sym_qualid,
  [3866] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 5,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(336), 9,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      aux_sym_bareid_token2,
      sym_qualid,
  [3888] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 5,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(340), 9,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      aux_sym_bareid_token2,
      sym_qualid,
  [3910] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 5,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(344), 9,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      aux_sym_bareid_token2,
      sym_qualid,
  [3932] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 5,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(348), 9,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      aux_sym_bareid_token2,
      sym_qualid,
  [3954] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 4,
      anon_sym_conforms,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(294), 10,
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
  [3976] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 4,
      anon_sym_conforms,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(318), 10,
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
  [3998] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 4,
      anon_sym_conforms,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(352), 10,
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
  [4020] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 4,
      anon_sym_conforms,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(306), 10,
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
  [4042] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 5,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(356), 9,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      aux_sym_bareid_token2,
      sym_qualid,
  [4064] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 5,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(360), 9,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      aux_sym_bareid_token2,
      sym_qualid,
  [4086] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 4,
      anon_sym_conforms,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(364), 10,
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
  [4108] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 5,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(368), 9,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      aux_sym_bareid_token2,
      sym_qualid,
  [4130] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 4,
      anon_sym_conforms,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(372), 10,
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
  [4152] = 14,
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
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    ACTIONS(376), 1,
      anon_sym_RBRACE,
    STATE(72), 1,
      sym_bareid,
    STATE(138), 1,
      sym_sentence_config,
    STATE(186), 1,
      sym_step,
    STATE(271), 1,
      sym_id,
    STATE(311), 1,
      sym_trans_steps,
    STATE(387), 1,
      sym_step_or_update_lhs,
    STATE(99), 2,
      sym_trans_step_config,
      aux_sym_trans_steps_repeat1,
  [4196] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_SLASH,
    ACTIONS(378), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 11,
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
  [4219] = 10,
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
    ACTIONS(326), 1,
      anon_sym_DASH,
    ACTIONS(328), 1,
      sym_digits,
    STATE(298), 1,
      sym_enum_cnst,
    ACTIONS(330), 3,
      sym_real,
      sym_frac,
      sym_qualid,
    STATE(280), 3,
      sym_string,
      sym_range,
      sym_bareid,
  [4254] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_SLASH,
    STATE(60), 1,
      sym_binop,
    ACTIONS(254), 4,
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
  [4279] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_SLASH,
    ACTIONS(282), 12,
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
  [4300] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_RBRACE,
    ACTIONS(382), 1,
      anon_sym_LBRACK,
    ACTIONS(385), 1,
      anon_sym_PERCENT,
    ACTIONS(388), 1,
      aux_sym_bareid_token1,
    ACTIONS(391), 1,
      aux_sym_bareid_token2,
    ACTIONS(394), 1,
      sym_qualid,
    STATE(72), 1,
      sym_bareid,
    STATE(138), 1,
      sym_sentence_config,
    STATE(186), 1,
      sym_step,
    STATE(271), 1,
      sym_id,
    STATE(387), 1,
      sym_step_or_update_lhs,
    STATE(97), 2,
      sym_trans_step_config,
      aux_sym_trans_steps_repeat1,
  [4341] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 5,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(397), 8,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      aux_sym_bareid_token2,
      sym_qualid,
  [4362] = 13,
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
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    ACTIONS(401), 1,
      anon_sym_RBRACE,
    STATE(72), 1,
      sym_bareid,
    STATE(138), 1,
      sym_sentence_config,
    STATE(186), 1,
      sym_step,
    STATE(271), 1,
      sym_id,
    STATE(387), 1,
      sym_step_or_update_lhs,
    STATE(97), 2,
      sym_trans_step_config,
      aux_sym_trans_steps_repeat1,
  [4403] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_SLASH,
    STATE(60), 1,
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
  [4426] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_SLASH,
    ACTIONS(286), 11,
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
  [4446] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_SLASH,
    ACTIONS(260), 11,
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
  [4466] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_RBRACE,
    ACTIONS(405), 1,
      anon_sym_boot,
    ACTIONS(409), 1,
      anon_sym_property,
    ACTIONS(411), 1,
      anon_sym_LBRACK,
    STATE(199), 1,
      sym_sentence_config,
    STATE(202), 1,
      sym_machine_prop,
    STATE(204), 1,
      sym_machine_sentence,
    STATE(325), 1,
      sym_machine_body,
    ACTIONS(407), 2,
      anon_sym_initially,
      anon_sym_next,
    STATE(113), 2,
      sym_machine_sentence_conf,
      aux_sym_machine_body_repeat1,
  [4502] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_LBRACE,
    ACTIONS(248), 1,
      sym_qualid,
    ACTIONS(268), 1,
      anon_sym_PERCENT,
    ACTIONS(270), 1,
      aux_sym_bareid_token1,
    ACTIONS(272), 1,
      aux_sym_bareid_token2,
    ACTIONS(413), 1,
      anon_sym_any,
    STATE(165), 1,
      sym_unncmp,
    STATE(188), 1,
      sym_bareid,
    STATE(208), 1,
      sym_typeid,
    STATE(222), 1,
      sym_field,
    STATE(231), 1,
      sym_unnbody,
    STATE(316), 1,
      sym_fields,
  [4542] = 3,
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
  [4562] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_LBRACE,
    ACTIONS(248), 1,
      sym_qualid,
    ACTIONS(268), 1,
      anon_sym_PERCENT,
    ACTIONS(270), 1,
      aux_sym_bareid_token1,
    ACTIONS(272), 1,
      aux_sym_bareid_token2,
    ACTIONS(413), 1,
      anon_sym_any,
    STATE(165), 1,
      sym_unncmp,
    STATE(188), 1,
      sym_bareid,
    STATE(208), 1,
      sym_typeid,
    STATE(222), 1,
      sym_field,
    STATE(231), 1,
      sym_unnbody,
    STATE(260), 1,
      sym_fields,
  [4602] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_SLASH,
    STATE(60), 1,
      sym_binop,
    ACTIONS(254), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(415), 6,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [4626] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_LBRACE,
    ACTIONS(248), 1,
      sym_qualid,
    ACTIONS(268), 1,
      anon_sym_PERCENT,
    ACTIONS(270), 1,
      aux_sym_bareid_token1,
    ACTIONS(272), 1,
      aux_sym_bareid_token2,
    ACTIONS(413), 1,
      anon_sym_any,
    STATE(165), 1,
      sym_unncmp,
    STATE(188), 1,
      sym_bareid,
    STATE(208), 1,
      sym_typeid,
    STATE(222), 1,
      sym_field,
    STATE(231), 1,
      sym_unnbody,
    STATE(383), 1,
      sym_fields,
  [4666] = 3,
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
  [4686] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_LBRACE,
    ACTIONS(248), 1,
      sym_qualid,
    ACTIONS(268), 1,
      anon_sym_PERCENT,
    ACTIONS(270), 1,
      aux_sym_bareid_token1,
    ACTIONS(272), 1,
      aux_sym_bareid_token2,
    ACTIONS(413), 1,
      anon_sym_any,
    STATE(165), 1,
      sym_unncmp,
    STATE(188), 1,
      sym_bareid,
    STATE(208), 1,
      sym_typeid,
    STATE(222), 1,
      sym_field,
    STATE(231), 1,
      sym_unnbody,
    STATE(336), 1,
      sym_fields,
  [4726] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(421), 1,
      anon_sym_PERCENT,
    STATE(129), 1,
      sym_bareid,
    STATE(224), 1,
      sym_mod_ref,
    STATE(309), 1,
      sym_mod_refs,
    ACTIONS(417), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
    ACTIONS(419), 2,
      anon_sym_includes,
      anon_sym_extends,
    STATE(160), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [4760] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 4,
      anon_sym_conforms,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(397), 8,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      aux_sym_bareid_token2,
      sym_qualid,
  [4780] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_boot,
    ACTIONS(409), 1,
      anon_sym_property,
    ACTIONS(411), 1,
      anon_sym_LBRACK,
    ACTIONS(423), 1,
      anon_sym_RBRACE,
    STATE(199), 1,
      sym_sentence_config,
    STATE(202), 1,
      sym_machine_prop,
    STATE(204), 1,
      sym_machine_sentence,
    ACTIONS(407), 2,
      anon_sym_initially,
      anon_sym_next,
    STATE(115), 2,
      sym_machine_sentence_conf,
      aux_sym_machine_body_repeat1,
  [4813] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_SLASH,
    ACTIONS(378), 1,
      anon_sym_LPAREN,
    ACTIONS(425), 1,
      anon_sym_is,
    ACTIONS(260), 8,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4836] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_RBRACE,
    ACTIONS(429), 1,
      anon_sym_boot,
    ACTIONS(435), 1,
      anon_sym_property,
    ACTIONS(438), 1,
      anon_sym_LBRACK,
    STATE(199), 1,
      sym_sentence_config,
    STATE(202), 1,
      sym_machine_prop,
    STATE(204), 1,
      sym_machine_sentence,
    ACTIONS(432), 2,
      anon_sym_initially,
      anon_sym_next,
    STATE(115), 2,
      sym_machine_sentence_conf,
      aux_sym_machine_body_repeat1,
  [4869] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_LBRACE,
    ACTIONS(248), 1,
      sym_qualid,
    ACTIONS(268), 1,
      anon_sym_PERCENT,
    ACTIONS(270), 1,
      aux_sym_bareid_token1,
    ACTIONS(272), 1,
      aux_sym_bareid_token2,
    ACTIONS(413), 1,
      anon_sym_any,
    STATE(165), 1,
      sym_unncmp,
    STATE(188), 1,
      sym_bareid,
    STATE(208), 1,
      sym_typeid,
    STATE(231), 1,
      sym_unnbody,
    STATE(248), 1,
      sym_field,
  [4906] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_SLASH,
    STATE(60), 1,
      sym_binop,
    ACTIONS(254), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(441), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [4928] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 3,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(443), 7,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      aux_sym_bareid_token2,
      sym_qualid,
  [4946] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_SLASH,
    ACTIONS(447), 1,
      anon_sym_COLON_COLON_EQ,
    ACTIONS(234), 8,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_COLON_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4966] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 3,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(449), 7,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      aux_sym_bareid_token2,
      sym_qualid,
  [4984] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_SLASH,
    STATE(60), 1,
      sym_binop,
    ACTIONS(254), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(453), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5006] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_SLASH,
    STATE(60), 1,
      sym_binop,
    ACTIONS(254), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(455), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5028] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_PERCENT,
    STATE(129), 1,
      sym_bareid,
    STATE(224), 1,
      sym_mod_ref,
    STATE(299), 1,
      sym_mod_refs,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
    ACTIONS(457), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
    STATE(160), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5056] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 3,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(397), 7,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      aux_sym_bareid_token2,
      sym_qualid,
  [5074] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(238), 1,
      anon_sym_LBRACE,
    ACTIONS(248), 1,
      sym_qualid,
    ACTIONS(459), 1,
      anon_sym_any,
    STATE(165), 1,
      sym_unncmp,
    STATE(189), 1,
      sym_bareid,
    STATE(208), 1,
      sym_typeid,
    STATE(246), 1,
      sym_unnbody,
  [5108] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 3,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(461), 7,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      aux_sym_bareid_token2,
      sym_qualid,
  [5126] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_SLASH,
    ACTIONS(465), 1,
      anon_sym_COLON_COLON_EQ,
    ACTIONS(234), 8,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_COLON_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [5146] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(238), 1,
      anon_sym_LBRACE,
    ACTIONS(248), 1,
      sym_qualid,
    STATE(165), 1,
      sym_unncmp,
    STATE(189), 1,
      sym_bareid,
    STATE(208), 1,
      sym_typeid,
    STATE(243), 1,
      sym_unnbody,
  [5177] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_COLON_COLON,
    ACTIONS(471), 1,
      anon_sym_AT,
    ACTIONS(467), 7,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [5196] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(238), 1,
      anon_sym_LBRACE,
    ACTIONS(248), 1,
      sym_qualid,
    STATE(165), 1,
      sym_unncmp,
    STATE(189), 1,
      sym_bareid,
    STATE(208), 1,
      sym_typeid,
    STATE(226), 1,
      sym_unnbody,
  [5227] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_PERCENT,
    STATE(129), 1,
      sym_bareid,
    STATE(249), 1,
      sym_mod_apply,
    STATE(310), 1,
      sym_mod_ref,
    STATE(328), 1,
      sym_choice_list,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
    STATE(160), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5254] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_AT,
    ACTIONS(473), 8,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [5271] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_SLASH,
    ACTIONS(477), 1,
      anon_sym_is,
    ACTIONS(234), 7,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [5290] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(238), 1,
      anon_sym_LBRACE,
    ACTIONS(248), 1,
      sym_qualid,
    STATE(165), 1,
      sym_unncmp,
    STATE(189), 1,
      sym_bareid,
    STATE(208), 1,
      sym_typeid,
    STATE(286), 1,
      sym_unnbody,
  [5321] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_SLASH,
    ACTIONS(479), 1,
      anon_sym_at,
    ACTIONS(234), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [5340] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      anon_sym_RPAREN,
    ACTIONS(483), 1,
      anon_sym_PERCENT,
    STATE(264), 1,
      sym_val_or_model_program,
    STATE(303), 1,
      sym_mod_ref_rename,
    STATE(304), 1,
      sym_bareid,
    STATE(330), 1,
      sym_vom_param_list,
    ACTIONS(272), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [5366] = 9,
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
    STATE(72), 1,
      sym_bareid,
    STATE(261), 1,
      sym_setting,
    STATE(344), 1,
      sym_id,
    STATE(376), 1,
      sym_setting_list,
  [5394] = 9,
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
    STATE(72), 1,
      sym_bareid,
    STATE(177), 1,
      sym_step,
    STATE(271), 1,
      sym_id,
    STATE(387), 1,
      sym_step_or_update_lhs,
  [5422] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(238), 1,
      anon_sym_LBRACE,
    ACTIONS(248), 1,
      sym_qualid,
    STATE(189), 1,
      sym_bareid,
    STATE(208), 1,
      sym_typeid,
    STATE(209), 1,
      sym_unncmp,
  [5450] = 9,
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
    STATE(72), 1,
      sym_bareid,
    STATE(261), 1,
      sym_setting,
    STATE(344), 1,
      sym_id,
    STATE(346), 1,
      sym_setting_list,
  [5478] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_PERCENT,
    STATE(129), 1,
      sym_bareid,
    STATE(310), 1,
      sym_mod_ref,
    STATE(335), 1,
      sym_mod_apply,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
    STATE(160), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5502] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 8,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [5516] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_PERCENT,
    STATE(129), 1,
      sym_bareid,
    STATE(224), 1,
      sym_mod_ref,
    STATE(287), 1,
      sym_mod_refs,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
    STATE(160), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5540] = 9,
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
    STATE(72), 1,
      sym_bareid,
    STATE(261), 1,
      sym_setting,
    STATE(344), 1,
      sym_id,
    STATE(367), 1,
      sym_setting_list,
  [5568] = 9,
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
    STATE(72), 1,
      sym_bareid,
    STATE(192), 1,
      sym_step,
    STATE(271), 1,
      sym_id,
    STATE(380), 1,
      sym_step_or_update_lhs,
  [5596] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_SLASH,
    STATE(60), 1,
      sym_binop,
    ACTIONS(487), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
    ACTIONS(254), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [5616] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_SLASH,
    STATE(60), 1,
      sym_binop,
    ACTIONS(489), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(254), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [5636] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_SLASH,
    STATE(60), 1,
      sym_binop,
    ACTIONS(491), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
    ACTIONS(254), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [5656] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_PERCENT,
    STATE(129), 1,
      sym_bareid,
    STATE(310), 1,
      sym_mod_ref,
    STATE(373), 1,
      sym_mod_apply,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
    STATE(160), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5680] = 9,
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
    STATE(72), 1,
      sym_bareid,
    STATE(192), 1,
      sym_update,
    STATE(271), 1,
      sym_id,
    STATE(368), 1,
      sym_step_or_update_lhs,
  [5708] = 9,
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
    STATE(72), 1,
      sym_bareid,
    STATE(261), 1,
      sym_setting,
    STATE(344), 1,
      sym_id,
    STATE(375), 1,
      sym_setting_list,
  [5736] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_PERCENT,
    STATE(129), 1,
      sym_bareid,
    STATE(302), 1,
      sym_mod_apply,
    STATE(310), 1,
      sym_mod_ref,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
    STATE(160), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5760] = 9,
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
    STATE(72), 1,
      sym_bareid,
    STATE(261), 1,
      sym_setting,
    STATE(344), 1,
      sym_id,
    STATE(363), 1,
      sym_setting_list,
  [5788] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_PERCENT,
    STATE(129), 1,
      sym_bareid,
    STATE(224), 1,
      sym_mod_ref,
    STATE(292), 1,
      sym_mod_refs,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
    STATE(160), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5812] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_PERCENT,
    ACTIONS(493), 1,
      anon_sym_RPAREN,
    STATE(264), 1,
      sym_val_or_model_program,
    STATE(303), 1,
      sym_mod_ref_rename,
    STATE(304), 1,
      sym_bareid,
    STATE(349), 1,
      sym_vom_param_list,
    ACTIONS(272), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [5838] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 7,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [5851] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 7,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [5864] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_PERCENT,
    STATE(129), 1,
      sym_bareid,
    STATE(229), 1,
      sym_mod_ref,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
    STATE(160), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5885] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_SLASH,
    ACTIONS(499), 1,
      anon_sym_DOT,
    STATE(60), 1,
      sym_binop,
    ACTIONS(254), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [5904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 7,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [5917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [5930] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_PERCENT,
    STATE(129), 1,
      sym_bareid,
    STATE(234), 1,
      sym_mod_ref,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
    STATE(160), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5951] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_COMMA,
    STATE(172), 1,
      aux_sym_func_term_list_repeat1,
    ACTIONS(505), 5,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [5968] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_COMMA,
    STATE(163), 1,
      aux_sym_func_term_list_repeat1,
    ACTIONS(509), 5,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [5985] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_PLUS,
    STATE(174), 1,
      aux_sym_unnbody_repeat1,
    ACTIONS(511), 5,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [6002] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_PLUS,
    STATE(166), 1,
      aux_sym_unnbody_repeat1,
    ACTIONS(515), 5,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [6019] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_SLASH,
    ACTIONS(520), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      sym_binop,
    ACTIONS(254), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [6038] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 7,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [6051] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_PERCENT,
    STATE(129), 1,
      sym_bareid,
    STATE(227), 1,
      sym_mod_ref,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
    STATE(160), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [6072] = 8,
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
    STATE(72), 1,
      sym_bareid,
    STATE(281), 1,
      sym_setting,
    STATE(344), 1,
      sym_id,
  [6097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 7,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [6110] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_COMMA,
    STATE(172), 1,
      aux_sym_func_term_list_repeat1,
    ACTIONS(526), 5,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [6127] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_SLASH,
    ACTIONS(531), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      sym_binop,
    ACTIONS(254), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [6146] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_PLUS,
    STATE(166), 1,
      aux_sym_unnbody_repeat1,
    ACTIONS(533), 5,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [6163] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [6175] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_PERCENT,
    STATE(285), 1,
      sym_val_or_model_program,
    STATE(303), 1,
      sym_mod_ref_rename,
    STATE(304), 1,
      sym_bareid,
    ACTIONS(272), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [6195] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 2,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(537), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_bareid_token2,
      sym_qualid,
  [6209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [6221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [6233] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [6245] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_PERCENT,
    STATE(259), 1,
      sym_mod_ref_rename,
    STATE(345), 1,
      sym_bareid,
    STATE(347), 1,
      sym_model_param_list,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [6265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [6277] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 2,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(549), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_bareid_token2,
      sym_qualid,
  [6291] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [6303] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 6,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [6315] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 2,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(555), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_bareid_token2,
      sym_qualid,
  [6329] = 7,
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
    STATE(72), 1,
      sym_bareid,
    STATE(301), 1,
      sym_id,
  [6351] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_COLON,
    ACTIONS(559), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_PLUS,
  [6365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_PLUS,
  [6377] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [6389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [6401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [6413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [6425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [6437] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_digits,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(96), 1,
      sym_string,
    STATE(282), 1,
      sym_constant,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [6457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 6,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [6469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [6481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [6493] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_boot,
    ACTIONS(409), 1,
      anon_sym_property,
    STATE(182), 1,
      sym_machine_sentence,
    STATE(202), 1,
      sym_machine_prop,
    ACTIONS(407), 2,
      anon_sym_initially,
      anon_sym_next,
  [6513] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [6525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [6537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [6549] = 7,
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
    STATE(72), 1,
      sym_bareid,
    STATE(320), 1,
      sym_id,
  [6571] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [6583] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [6595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_PLUS,
  [6607] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [6619] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_PLUS,
  [6631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_PLUS,
  [6643] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [6655] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 3,
      anon_sym_LBRACE,
      aux_sym_bareid_token2,
      sym_qualid,
    ACTIONS(595), 3,
      anon_sym_any,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
  [6669] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_COMMA,
    STATE(220), 1,
      aux_sym_body_repeat1,
    ACTIONS(597), 3,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [6684] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_COMMA,
    STATE(214), 1,
      aux_sym_fields_repeat1,
    ACTIONS(601), 3,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [6699] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_COMMA,
    STATE(214), 1,
      aux_sym_fields_repeat1,
    ACTIONS(605), 3,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [6714] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_COMMA,
    STATE(212), 1,
      aux_sym_body_repeat1,
    ACTIONS(610), 3,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [6729] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      anon_sym_COMMA,
    STATE(216), 1,
      aux_sym_mod_refs_repeat1,
    ACTIONS(612), 3,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LBRACK,
  [6744] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_LPAREN,
    STATE(184), 1,
      sym_transform_rest,
    STATE(273), 1,
      sym_transform_sig,
    STATE(354), 1,
      sym_transform_sig_config,
    STATE(366), 1,
      sym_trans_sig_in,
  [6763] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_LPAREN,
    STATE(207), 1,
      sym_tsystem_rest,
    STATE(273), 1,
      sym_transform_sig,
    STATE(318), 1,
      sym_transform_sig_config,
    STATE(366), 1,
      sym_trans_sig_in,
  [6782] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_COMMA,
    STATE(216), 1,
      aux_sym_mod_refs_repeat1,
    ACTIONS(619), 3,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LBRACK,
  [6797] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_COMMA,
    STATE(220), 1,
      aux_sym_body_repeat1,
    ACTIONS(623), 3,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [6812] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(421), 1,
      anon_sym_PERCENT,
    ACTIONS(628), 1,
      anon_sym_system,
    STATE(217), 1,
      sym_bareid,
  [6831] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_COMMA,
    STATE(213), 1,
      aux_sym_fields_repeat1,
    ACTIONS(630), 3,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [6846] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_PERCENT,
    STATE(308), 1,
      sym_mod_ref_rename,
    STATE(345), 1,
      sym_bareid,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [6863] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_COMMA,
    STATE(219), 1,
      aux_sym_mod_refs_repeat1,
    ACTIONS(632), 3,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LBRACK,
  [6878] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_SEMI,
    STATE(225), 1,
      aux_sym_body_list_repeat1,
    ACTIONS(634), 2,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [6892] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [6902] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 4,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_COMMA,
      anon_sym_LBRACK,
  [6912] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_PERCENT,
    STATE(350), 1,
      sym_bareid,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [6926] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 4,
      anon_sym_LBRACE,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [6936] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_PERCENT,
    STATE(111), 1,
      sym_bareid,
    ACTIONS(272), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [6950] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [6960] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 4,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
  [6970] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
    ACTIONS(647), 2,
      anon_sym_includes,
      anon_sym_extends,
  [6982] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 4,
      anon_sym_LBRACE,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [6992] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_machine,
    ACTIONS(651), 1,
      anon_sym_LBRACE,
    STATE(245), 2,
      sym_machine_sig,
      aux_sym_machine_sig_config_repeat1,
  [7006] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_PERCENT,
    STATE(132), 1,
      sym_bareid,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [7020] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_PERCENT,
    STATE(337), 1,
      sym_bareid,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [7034] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_PERCENT,
    STATE(218), 1,
      sym_bareid,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [7048] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      anon_sym_SEMI,
    STATE(242), 1,
      aux_sym_body_list_repeat1,
    ACTIONS(653), 2,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [7062] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_PERCENT,
    STATE(364), 1,
      sym_bareid,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [7076] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_PERCENT,
    STATE(288), 1,
      sym_bareid,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [7090] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      anon_sym_SEMI,
    STATE(225), 1,
      aux_sym_body_list_repeat1,
    ACTIONS(657), 2,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [7104] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [7114] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [7124] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_LBRACE,
    ACTIONS(663), 1,
      anon_sym_machine,
    STATE(245), 2,
      sym_machine_sig,
      aux_sym_machine_sig_config_repeat1,
  [7138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [7148] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [7158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [7168] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_DOT,
    ACTIONS(670), 1,
      anon_sym_SEMI,
    STATE(250), 1,
      aux_sym_choice_list_repeat1,
  [7181] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_SEMI,
    ACTIONS(672), 1,
      anon_sym_DOT,
    STATE(253), 1,
      aux_sym_choice_list_repeat1,
  [7194] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      anon_sym_RBRACE,
    ACTIONS(676), 1,
      anon_sym_COMMA,
    STATE(251), 1,
      aux_sym_enum_list_repeat1,
  [7207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 3,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [7216] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_DOT,
    ACTIONS(681), 1,
      anon_sym_SEMI,
    STATE(253), 1,
      aux_sym_choice_list_repeat1,
  [7229] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_COMMA,
    ACTIONS(687), 1,
      anon_sym_RBRACK,
    STATE(254), 1,
      aux_sym_setting_list_repeat1,
  [7242] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 1,
      anon_sym_RPAREN,
    ACTIONS(691), 1,
      anon_sym_COMMA,
    STATE(258), 1,
      aux_sym_mod_arg_list_repeat1,
  [7255] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_COMMA,
    ACTIONS(693), 1,
      anon_sym_RPAREN,
    STATE(255), 1,
      aux_sym_mod_arg_list_repeat1,
  [7268] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      anon_sym_RPAREN,
    ACTIONS(697), 1,
      anon_sym_COMMA,
    STATE(257), 1,
      aux_sym_model_param_list_repeat1,
  [7281] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      anon_sym_RPAREN,
    ACTIONS(702), 1,
      anon_sym_COMMA,
    STATE(258), 1,
      aux_sym_mod_arg_list_repeat1,
  [7294] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      anon_sym_RPAREN,
    ACTIONS(707), 1,
      anon_sym_COMMA,
    STATE(268), 1,
      aux_sym_model_param_list_repeat1,
  [7307] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(110), 1,
      sym_maparrow,
    ACTIONS(709), 2,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [7318] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      anon_sym_COMMA,
    ACTIONS(713), 1,
      anon_sym_RBRACK,
    STATE(276), 1,
      aux_sym_setting_list_repeat1,
  [7331] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      anon_sym_EQ,
    ACTIONS(717), 1,
      anon_sym_COMMA,
    STATE(262), 1,
      aux_sym_step_or_update_lhs_repeat1,
  [7344] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      anon_sym_DOT_DOT,
    ACTIONS(720), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [7355] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_RPAREN,
    ACTIONS(726), 1,
      anon_sym_COMMA,
    STATE(274), 1,
      aux_sym_vom_param_list_repeat1,
  [7368] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_RBRACE,
    ACTIONS(730), 1,
      anon_sym_PIPE,
    STATE(168), 1,
      sym_compr_rest,
  [7381] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_RBRACE,
    ACTIONS(734), 1,
      anon_sym_COMMA,
    STATE(272), 1,
      aux_sym_enum_list_repeat1,
  [7394] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_RPAREN,
    ACTIONS(738), 1,
      anon_sym_COMMA,
    STATE(267), 1,
      aux_sym_vom_param_list_repeat1,
  [7407] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      anon_sym_COMMA,
    ACTIONS(741), 1,
      anon_sym_RPAREN,
    STATE(257), 1,
      aux_sym_model_param_list_repeat1,
  [7420] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(743), 1,
      anon_sym_LBRACE,
    STATE(331), 1,
      sym_config,
  [7433] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(745), 1,
      anon_sym_LBRACE,
    STATE(343), 1,
      sym_config,
  [7446] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      anon_sym_EQ,
    ACTIONS(749), 1,
      anon_sym_COMMA,
    STATE(275), 1,
      aux_sym_step_or_update_lhs_repeat1,
  [7459] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_COMMA,
    ACTIONS(751), 1,
      anon_sym_RBRACE,
    STATE(251), 1,
      aux_sym_enum_list_repeat1,
  [7472] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(753), 1,
      anon_sym_LBRACE,
    STATE(342), 1,
      sym_config,
  [7485] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_COMMA,
    ACTIONS(755), 1,
      anon_sym_RPAREN,
    STATE(267), 1,
      aux_sym_vom_param_list_repeat1,
  [7498] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      anon_sym_COMMA,
    ACTIONS(757), 1,
      anon_sym_EQ,
    STATE(262), 1,
      aux_sym_step_or_update_lhs_repeat1,
  [7511] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      anon_sym_COMMA,
    ACTIONS(759), 1,
      anon_sym_RBRACK,
    STATE(254), 1,
      aux_sym_setting_list_repeat1,
  [7524] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      anon_sym_DOT,
    ACTIONS(763), 1,
      anon_sym_COMMA,
  [7534] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [7542] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(171), 1,
      sym_string,
  [7552] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [7560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7576] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      anon_sym_DOT,
    ACTIONS(771), 1,
      anon_sym_COLON_DASH,
  [7586] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      anon_sym_DOT,
    ACTIONS(775), 1,
      anon_sym_COMMA,
  [7596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7612] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [7620] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_LPAREN,
    STATE(314), 1,
      sym_machine_sig_in,
  [7630] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [7638] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7646] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [7654] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 2,
      anon_sym_LBRACE,
      anon_sym_machine,
  [7662] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(142), 1,
      sym_string,
  [7672] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 1,
      anon_sym_DOT,
    ACTIONS(793), 1,
      anon_sym_COLON_DASH,
  [7682] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7690] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [7698] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [7706] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [7714] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [7722] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_DASH,
    ACTIONS(803), 1,
      sym_digits,
  [7732] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 2,
      anon_sym_EQ,
      anon_sym_COMMA,
  [7740] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [7748] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7756] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_COLON_COLON,
    ACTIONS(807), 1,
      anon_sym_COLON,
  [7766] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [7774] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 1,
      anon_sym_DASH,
    ACTIONS(813), 1,
      sym_digits,
  [7784] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(290), 1,
      sym_string,
  [7794] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [7810] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_LPAREN,
  [7817] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(817), 1,
      anon_sym_RBRACE,
  [7824] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 1,
      anon_sym_DOT,
  [7831] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      anon_sym_DOT_DOT,
  [7838] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_of,
  [7845] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_DOT,
  [7852] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_RPAREN,
  [7859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 1,
      anon_sym_RPAREN,
  [7866] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_LBRACE,
  [7873] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 1,
      anon_sym_RPAREN,
  [7880] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_DOT,
  [7887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_returns,
  [7894] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      anon_sym_DQUOTE,
  [7901] = 2,
    ACTIONS(841), 1,
      aux_sym_string_token1,
    ACTIONS(843), 1,
      sym_comment,
  [7908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      sym_digits,
  [7915] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_RBRACE,
  [7922] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      aux_sym_model_contract_token1,
  [7929] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 1,
      aux_sym_model_contract_token1,
  [7936] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      anon_sym_DOT,
  [7943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(853), 1,
      anon_sym_DOT,
  [7950] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      anon_sym_RPAREN,
  [7957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      anon_sym_LBRACE,
  [7964] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_RBRACE,
  [7971] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(861), 1,
      sym_digits,
  [7978] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(863), 1,
      sym_digits,
  [7985] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_DOT,
  [7992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 1,
      anon_sym_RPAREN,
  [7999] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      anon_sym_of,
  [8006] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 1,
      anon_sym_of,
  [8013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      anon_sym_of,
  [8020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(875), 1,
      anon_sym_returns,
  [8027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      anon_sym_DOT,
  [8034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      anon_sym_LBRACE,
  [8041] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      anon_sym_LBRACE,
  [8048] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      anon_sym_EQ,
  [8055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_COLON_COLON,
  [8062] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(885), 1,
      anon_sym_RBRACK,
  [8069] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(887), 1,
      anon_sym_RPAREN,
  [8076] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 1,
      anon_sym_DOT,
  [8083] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 1,
      anon_sym_RPAREN,
  [8090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 1,
      anon_sym_of,
  [8097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 1,
      anon_sym_RBRACE,
  [8104] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      aux_sym_bareid_token1,
  [8111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 1,
      anon_sym_RBRACE,
  [8118] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(901), 1,
      anon_sym_LBRACE,
  [8125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
  [8132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 1,
      anon_sym_DOT,
  [8139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      anon_sym_LPAREN,
  [8146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(909), 1,
      anon_sym_LBRACE,
  [8153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 1,
      anon_sym_LBRACE,
  [8160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 1,
      anon_sym_DOT,
  [8167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 1,
      anon_sym_LPAREN,
  [8174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      ts_builtin_sym_end,
  [8181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(919), 1,
      anon_sym_RBRACK,
  [8188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 1,
      anon_sym_EQ,
  [8195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(923), 1,
      aux_sym_bareid_token1,
  [8202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(925), 1,
      anon_sym_returns,
  [8209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(927), 1,
      anon_sym_RBRACK,
  [8216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(929), 1,
      anon_sym_EQ,
  [8223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 1,
      anon_sym_DQUOTE,
  [8230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(933), 1,
      anon_sym_RPAREN,
  [8237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 1,
      anon_sym_DOT,
  [8244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      anon_sym_DOT,
  [8251] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_DOT,
  [8258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(941), 1,
      aux_sym_bareid_token1,
  [8265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 1,
      anon_sym_RBRACK,
  [8272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(945), 1,
      anon_sym_RBRACK,
  [8279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 1,
      anon_sym_DOT,
  [8286] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(949), 1,
      anon_sym_LPAREN,
  [8293] = 2,
    ACTIONS(843), 1,
      sym_comment,
    ACTIONS(951), 1,
      aux_sym_string_token1,
  [8300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(953), 1,
      anon_sym_EQ,
  [8307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(955), 1,
      anon_sym_model,
  [8314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 1,
      anon_sym_LPAREN,
  [8321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(959), 1,
      anon_sym_RPAREN,
  [8328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 1,
      anon_sym_DOT,
  [8335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(963), 1,
      anon_sym_RBRACE,
  [8342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(965), 1,
      anon_sym_RBRACE,
  [8349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 92,
  [SMALL_STATE(4)] = 181,
  [SMALL_STATE(5)] = 272,
  [SMALL_STATE(6)] = 361,
  [SMALL_STATE(7)] = 449,
  [SMALL_STATE(8)] = 537,
  [SMALL_STATE(9)] = 622,
  [SMALL_STATE(10)] = 704,
  [SMALL_STATE(11)] = 786,
  [SMALL_STATE(12)] = 821,
  [SMALL_STATE(13)] = 856,
  [SMALL_STATE(14)] = 891,
  [SMALL_STATE(15)] = 926,
  [SMALL_STATE(16)] = 1002,
  [SMALL_STATE(17)] = 1077,
  [SMALL_STATE(18)] = 1150,
  [SMALL_STATE(19)] = 1215,
  [SMALL_STATE(20)] = 1280,
  [SMALL_STATE(21)] = 1345,
  [SMALL_STATE(22)] = 1410,
  [SMALL_STATE(23)] = 1475,
  [SMALL_STATE(24)] = 1530,
  [SMALL_STATE(25)] = 1595,
  [SMALL_STATE(26)] = 1660,
  [SMALL_STATE(27)] = 1715,
  [SMALL_STATE(28)] = 1770,
  [SMALL_STATE(29)] = 1835,
  [SMALL_STATE(30)] = 1890,
  [SMALL_STATE(31)] = 1955,
  [SMALL_STATE(32)] = 2020,
  [SMALL_STATE(33)] = 2085,
  [SMALL_STATE(34)] = 2150,
  [SMALL_STATE(35)] = 2212,
  [SMALL_STATE(36)] = 2274,
  [SMALL_STATE(37)] = 2336,
  [SMALL_STATE(38)] = 2363,
  [SMALL_STATE(39)] = 2422,
  [SMALL_STATE(40)] = 2481,
  [SMALL_STATE(41)] = 2507,
  [SMALL_STATE(42)] = 2559,
  [SMALL_STATE(43)] = 2615,
  [SMALL_STATE(44)] = 2651,
  [SMALL_STATE(45)] = 2681,
  [SMALL_STATE(46)] = 2707,
  [SMALL_STATE(47)] = 2759,
  [SMALL_STATE(48)] = 2815,
  [SMALL_STATE(49)] = 2841,
  [SMALL_STATE(50)] = 2894,
  [SMALL_STATE(51)] = 2921,
  [SMALL_STATE(52)] = 2948,
  [SMALL_STATE(53)] = 3001,
  [SMALL_STATE(54)] = 3032,
  [SMALL_STATE(55)] = 3085,
  [SMALL_STATE(56)] = 3138,
  [SMALL_STATE(57)] = 3191,
  [SMALL_STATE(58)] = 3244,
  [SMALL_STATE(59)] = 3297,
  [SMALL_STATE(60)] = 3350,
  [SMALL_STATE(61)] = 3403,
  [SMALL_STATE(62)] = 3456,
  [SMALL_STATE(63)] = 3480,
  [SMALL_STATE(64)] = 3504,
  [SMALL_STATE(65)] = 3528,
  [SMALL_STATE(66)] = 3552,
  [SMALL_STATE(67)] = 3576,
  [SMALL_STATE(68)] = 3600,
  [SMALL_STATE(69)] = 3623,
  [SMALL_STATE(70)] = 3646,
  [SMALL_STATE(71)] = 3669,
  [SMALL_STATE(72)] = 3692,
  [SMALL_STATE(73)] = 3715,
  [SMALL_STATE(74)] = 3738,
  [SMALL_STATE(75)] = 3761,
  [SMALL_STATE(76)] = 3784,
  [SMALL_STATE(77)] = 3806,
  [SMALL_STATE(78)] = 3844,
  [SMALL_STATE(79)] = 3866,
  [SMALL_STATE(80)] = 3888,
  [SMALL_STATE(81)] = 3910,
  [SMALL_STATE(82)] = 3932,
  [SMALL_STATE(83)] = 3954,
  [SMALL_STATE(84)] = 3976,
  [SMALL_STATE(85)] = 3998,
  [SMALL_STATE(86)] = 4020,
  [SMALL_STATE(87)] = 4042,
  [SMALL_STATE(88)] = 4064,
  [SMALL_STATE(89)] = 4086,
  [SMALL_STATE(90)] = 4108,
  [SMALL_STATE(91)] = 4130,
  [SMALL_STATE(92)] = 4152,
  [SMALL_STATE(93)] = 4196,
  [SMALL_STATE(94)] = 4219,
  [SMALL_STATE(95)] = 4254,
  [SMALL_STATE(96)] = 4279,
  [SMALL_STATE(97)] = 4300,
  [SMALL_STATE(98)] = 4341,
  [SMALL_STATE(99)] = 4362,
  [SMALL_STATE(100)] = 4403,
  [SMALL_STATE(101)] = 4426,
  [SMALL_STATE(102)] = 4446,
  [SMALL_STATE(103)] = 4466,
  [SMALL_STATE(104)] = 4502,
  [SMALL_STATE(105)] = 4542,
  [SMALL_STATE(106)] = 4562,
  [SMALL_STATE(107)] = 4602,
  [SMALL_STATE(108)] = 4626,
  [SMALL_STATE(109)] = 4666,
  [SMALL_STATE(110)] = 4686,
  [SMALL_STATE(111)] = 4726,
  [SMALL_STATE(112)] = 4760,
  [SMALL_STATE(113)] = 4780,
  [SMALL_STATE(114)] = 4813,
  [SMALL_STATE(115)] = 4836,
  [SMALL_STATE(116)] = 4869,
  [SMALL_STATE(117)] = 4906,
  [SMALL_STATE(118)] = 4928,
  [SMALL_STATE(119)] = 4946,
  [SMALL_STATE(120)] = 4966,
  [SMALL_STATE(121)] = 4984,
  [SMALL_STATE(122)] = 5006,
  [SMALL_STATE(123)] = 5028,
  [SMALL_STATE(124)] = 5056,
  [SMALL_STATE(125)] = 5074,
  [SMALL_STATE(126)] = 5108,
  [SMALL_STATE(127)] = 5126,
  [SMALL_STATE(128)] = 5146,
  [SMALL_STATE(129)] = 5177,
  [SMALL_STATE(130)] = 5196,
  [SMALL_STATE(131)] = 5227,
  [SMALL_STATE(132)] = 5254,
  [SMALL_STATE(133)] = 5271,
  [SMALL_STATE(134)] = 5290,
  [SMALL_STATE(135)] = 5321,
  [SMALL_STATE(136)] = 5340,
  [SMALL_STATE(137)] = 5366,
  [SMALL_STATE(138)] = 5394,
  [SMALL_STATE(139)] = 5422,
  [SMALL_STATE(140)] = 5450,
  [SMALL_STATE(141)] = 5478,
  [SMALL_STATE(142)] = 5502,
  [SMALL_STATE(143)] = 5516,
  [SMALL_STATE(144)] = 5540,
  [SMALL_STATE(145)] = 5568,
  [SMALL_STATE(146)] = 5596,
  [SMALL_STATE(147)] = 5616,
  [SMALL_STATE(148)] = 5636,
  [SMALL_STATE(149)] = 5656,
  [SMALL_STATE(150)] = 5680,
  [SMALL_STATE(151)] = 5708,
  [SMALL_STATE(152)] = 5736,
  [SMALL_STATE(153)] = 5760,
  [SMALL_STATE(154)] = 5788,
  [SMALL_STATE(155)] = 5812,
  [SMALL_STATE(156)] = 5838,
  [SMALL_STATE(157)] = 5851,
  [SMALL_STATE(158)] = 5864,
  [SMALL_STATE(159)] = 5885,
  [SMALL_STATE(160)] = 5904,
  [SMALL_STATE(161)] = 5917,
  [SMALL_STATE(162)] = 5930,
  [SMALL_STATE(163)] = 5951,
  [SMALL_STATE(164)] = 5968,
  [SMALL_STATE(165)] = 5985,
  [SMALL_STATE(166)] = 6002,
  [SMALL_STATE(167)] = 6019,
  [SMALL_STATE(168)] = 6038,
  [SMALL_STATE(169)] = 6051,
  [SMALL_STATE(170)] = 6072,
  [SMALL_STATE(171)] = 6097,
  [SMALL_STATE(172)] = 6110,
  [SMALL_STATE(173)] = 6127,
  [SMALL_STATE(174)] = 6146,
  [SMALL_STATE(175)] = 6163,
  [SMALL_STATE(176)] = 6175,
  [SMALL_STATE(177)] = 6195,
  [SMALL_STATE(178)] = 6209,
  [SMALL_STATE(179)] = 6221,
  [SMALL_STATE(180)] = 6233,
  [SMALL_STATE(181)] = 6245,
  [SMALL_STATE(182)] = 6265,
  [SMALL_STATE(183)] = 6277,
  [SMALL_STATE(184)] = 6291,
  [SMALL_STATE(185)] = 6303,
  [SMALL_STATE(186)] = 6315,
  [SMALL_STATE(187)] = 6329,
  [SMALL_STATE(188)] = 6351,
  [SMALL_STATE(189)] = 6365,
  [SMALL_STATE(190)] = 6377,
  [SMALL_STATE(191)] = 6389,
  [SMALL_STATE(192)] = 6401,
  [SMALL_STATE(193)] = 6413,
  [SMALL_STATE(194)] = 6425,
  [SMALL_STATE(195)] = 6437,
  [SMALL_STATE(196)] = 6457,
  [SMALL_STATE(197)] = 6469,
  [SMALL_STATE(198)] = 6481,
  [SMALL_STATE(199)] = 6493,
  [SMALL_STATE(200)] = 6513,
  [SMALL_STATE(201)] = 6525,
  [SMALL_STATE(202)] = 6537,
  [SMALL_STATE(203)] = 6549,
  [SMALL_STATE(204)] = 6571,
  [SMALL_STATE(205)] = 6583,
  [SMALL_STATE(206)] = 6595,
  [SMALL_STATE(207)] = 6607,
  [SMALL_STATE(208)] = 6619,
  [SMALL_STATE(209)] = 6631,
  [SMALL_STATE(210)] = 6643,
  [SMALL_STATE(211)] = 6655,
  [SMALL_STATE(212)] = 6669,
  [SMALL_STATE(213)] = 6684,
  [SMALL_STATE(214)] = 6699,
  [SMALL_STATE(215)] = 6714,
  [SMALL_STATE(216)] = 6729,
  [SMALL_STATE(217)] = 6744,
  [SMALL_STATE(218)] = 6763,
  [SMALL_STATE(219)] = 6782,
  [SMALL_STATE(220)] = 6797,
  [SMALL_STATE(221)] = 6812,
  [SMALL_STATE(222)] = 6831,
  [SMALL_STATE(223)] = 6846,
  [SMALL_STATE(224)] = 6863,
  [SMALL_STATE(225)] = 6878,
  [SMALL_STATE(226)] = 6892,
  [SMALL_STATE(227)] = 6902,
  [SMALL_STATE(228)] = 6912,
  [SMALL_STATE(229)] = 6926,
  [SMALL_STATE(230)] = 6936,
  [SMALL_STATE(231)] = 6950,
  [SMALL_STATE(232)] = 6960,
  [SMALL_STATE(233)] = 6970,
  [SMALL_STATE(234)] = 6982,
  [SMALL_STATE(235)] = 6992,
  [SMALL_STATE(236)] = 7006,
  [SMALL_STATE(237)] = 7020,
  [SMALL_STATE(238)] = 7034,
  [SMALL_STATE(239)] = 7048,
  [SMALL_STATE(240)] = 7062,
  [SMALL_STATE(241)] = 7076,
  [SMALL_STATE(242)] = 7090,
  [SMALL_STATE(243)] = 7104,
  [SMALL_STATE(244)] = 7114,
  [SMALL_STATE(245)] = 7124,
  [SMALL_STATE(246)] = 7138,
  [SMALL_STATE(247)] = 7148,
  [SMALL_STATE(248)] = 7158,
  [SMALL_STATE(249)] = 7168,
  [SMALL_STATE(250)] = 7181,
  [SMALL_STATE(251)] = 7194,
  [SMALL_STATE(252)] = 7207,
  [SMALL_STATE(253)] = 7216,
  [SMALL_STATE(254)] = 7229,
  [SMALL_STATE(255)] = 7242,
  [SMALL_STATE(256)] = 7255,
  [SMALL_STATE(257)] = 7268,
  [SMALL_STATE(258)] = 7281,
  [SMALL_STATE(259)] = 7294,
  [SMALL_STATE(260)] = 7307,
  [SMALL_STATE(261)] = 7318,
  [SMALL_STATE(262)] = 7331,
  [SMALL_STATE(263)] = 7344,
  [SMALL_STATE(264)] = 7355,
  [SMALL_STATE(265)] = 7368,
  [SMALL_STATE(266)] = 7381,
  [SMALL_STATE(267)] = 7394,
  [SMALL_STATE(268)] = 7407,
  [SMALL_STATE(269)] = 7420,
  [SMALL_STATE(270)] = 7433,
  [SMALL_STATE(271)] = 7446,
  [SMALL_STATE(272)] = 7459,
  [SMALL_STATE(273)] = 7472,
  [SMALL_STATE(274)] = 7485,
  [SMALL_STATE(275)] = 7498,
  [SMALL_STATE(276)] = 7511,
  [SMALL_STATE(277)] = 7524,
  [SMALL_STATE(278)] = 7534,
  [SMALL_STATE(279)] = 7542,
  [SMALL_STATE(280)] = 7552,
  [SMALL_STATE(281)] = 7560,
  [SMALL_STATE(282)] = 7568,
  [SMALL_STATE(283)] = 7576,
  [SMALL_STATE(284)] = 7586,
  [SMALL_STATE(285)] = 7596,
  [SMALL_STATE(286)] = 7604,
  [SMALL_STATE(287)] = 7612,
  [SMALL_STATE(288)] = 7620,
  [SMALL_STATE(289)] = 7630,
  [SMALL_STATE(290)] = 7638,
  [SMALL_STATE(291)] = 7646,
  [SMALL_STATE(292)] = 7654,
  [SMALL_STATE(293)] = 7662,
  [SMALL_STATE(294)] = 7672,
  [SMALL_STATE(295)] = 7682,
  [SMALL_STATE(296)] = 7690,
  [SMALL_STATE(297)] = 7698,
  [SMALL_STATE(298)] = 7706,
  [SMALL_STATE(299)] = 7714,
  [SMALL_STATE(300)] = 7722,
  [SMALL_STATE(301)] = 7732,
  [SMALL_STATE(302)] = 7740,
  [SMALL_STATE(303)] = 7748,
  [SMALL_STATE(304)] = 7756,
  [SMALL_STATE(305)] = 7766,
  [SMALL_STATE(306)] = 7774,
  [SMALL_STATE(307)] = 7784,
  [SMALL_STATE(308)] = 7794,
  [SMALL_STATE(309)] = 7802,
  [SMALL_STATE(310)] = 7810,
  [SMALL_STATE(311)] = 7817,
  [SMALL_STATE(312)] = 7824,
  [SMALL_STATE(313)] = 7831,
  [SMALL_STATE(314)] = 7838,
  [SMALL_STATE(315)] = 7845,
  [SMALL_STATE(316)] = 7852,
  [SMALL_STATE(317)] = 7859,
  [SMALL_STATE(318)] = 7866,
  [SMALL_STATE(319)] = 7873,
  [SMALL_STATE(320)] = 7880,
  [SMALL_STATE(321)] = 7887,
  [SMALL_STATE(322)] = 7894,
  [SMALL_STATE(323)] = 7901,
  [SMALL_STATE(324)] = 7908,
  [SMALL_STATE(325)] = 7915,
  [SMALL_STATE(326)] = 7922,
  [SMALL_STATE(327)] = 7929,
  [SMALL_STATE(328)] = 7936,
  [SMALL_STATE(329)] = 7943,
  [SMALL_STATE(330)] = 7950,
  [SMALL_STATE(331)] = 7957,
  [SMALL_STATE(332)] = 7964,
  [SMALL_STATE(333)] = 7971,
  [SMALL_STATE(334)] = 7978,
  [SMALL_STATE(335)] = 7985,
  [SMALL_STATE(336)] = 7992,
  [SMALL_STATE(337)] = 7999,
  [SMALL_STATE(338)] = 8006,
  [SMALL_STATE(339)] = 8013,
  [SMALL_STATE(340)] = 8020,
  [SMALL_STATE(341)] = 8027,
  [SMALL_STATE(342)] = 8034,
  [SMALL_STATE(343)] = 8041,
  [SMALL_STATE(344)] = 8048,
  [SMALL_STATE(345)] = 8055,
  [SMALL_STATE(346)] = 8062,
  [SMALL_STATE(347)] = 8069,
  [SMALL_STATE(348)] = 8076,
  [SMALL_STATE(349)] = 8083,
  [SMALL_STATE(350)] = 8090,
  [SMALL_STATE(351)] = 8097,
  [SMALL_STATE(352)] = 8104,
  [SMALL_STATE(353)] = 8111,
  [SMALL_STATE(354)] = 8118,
  [SMALL_STATE(355)] = 8125,
  [SMALL_STATE(356)] = 8132,
  [SMALL_STATE(357)] = 8139,
  [SMALL_STATE(358)] = 8146,
  [SMALL_STATE(359)] = 8153,
  [SMALL_STATE(360)] = 8160,
  [SMALL_STATE(361)] = 8167,
  [SMALL_STATE(362)] = 8174,
  [SMALL_STATE(363)] = 8181,
  [SMALL_STATE(364)] = 8188,
  [SMALL_STATE(365)] = 8195,
  [SMALL_STATE(366)] = 8202,
  [SMALL_STATE(367)] = 8209,
  [SMALL_STATE(368)] = 8216,
  [SMALL_STATE(369)] = 8223,
  [SMALL_STATE(370)] = 8230,
  [SMALL_STATE(371)] = 8237,
  [SMALL_STATE(372)] = 8244,
  [SMALL_STATE(373)] = 8251,
  [SMALL_STATE(374)] = 8258,
  [SMALL_STATE(375)] = 8265,
  [SMALL_STATE(376)] = 8272,
  [SMALL_STATE(377)] = 8279,
  [SMALL_STATE(378)] = 8286,
  [SMALL_STATE(379)] = 8293,
  [SMALL_STATE(380)] = 8300,
  [SMALL_STATE(381)] = 8307,
  [SMALL_STATE(382)] = 8314,
  [SMALL_STATE(383)] = 8321,
  [SMALL_STATE(384)] = 8328,
  [SMALL_STATE(385)] = 8335,
  [SMALL_STATE(386)] = 8342,
  [SMALL_STATE(387)] = 8349,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(20),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(52),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(24),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(144),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(120),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(96),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(96),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(323),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(352),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(11),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(11),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(72),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_body, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dom_sentences, 1),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(20),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(52),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(19),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(151),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(120),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(96),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(96),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(323),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(352),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(11),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(11),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(72),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(52),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(25),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(17),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(144),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(120),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(96),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(96),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(323),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(352),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(11),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(11),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(72),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_body, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bareid, 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bareid, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bareid, 2),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bareid, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(241),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(228),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(381),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(221),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(230),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 1),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 1),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 1),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term, 2),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_term, 2),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term, 3),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_term, 3),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term, 4, .production_id = 2),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_term, 4, .production_id = 2),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term, 1),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_term, 1),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl, 4, .production_id = 3),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_decl, 4, .production_id = 3),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_sentence, 3),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trans_sentence, 3),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_sentence_config, 1),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trans_sentence_config, 1),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 2),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 2),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_sentence_config, 2),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trans_sentence_config, 2),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_sentence, 1),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trans_sentence, 1),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 4),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dom_sentence, 3),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dom_sentence, 3),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_sentence, 1),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_sentence, 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_contract_conf, 1),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_contract_conf, 1),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_contract, 5),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_contract, 5),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_fact_list, 2),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_fact_list, 2),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_contract_conf, 2),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_contract_conf, 2),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dom_sentence_config, 2),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dom_sentence_config, 2),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_contract, 3),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_contract, 3),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_fact_list, 4),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_fact_list, 4),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dom_sentence, 1),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dom_sentence, 1),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_fact_list, 3),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_fact_list, 3),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dom_sentence_config, 1),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dom_sentence_config, 1),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trans_steps_repeat1, 2),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_steps_repeat1, 2), SHIFT_REPEAT(137),
  [385] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trans_steps_repeat1, 2), SHIFT_REPEAT(352),
  [388] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trans_steps_repeat1, 2), SHIFT_REPEAT(11),
  [391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_steps_repeat1, 2), SHIFT_REPEAT(11),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_steps_repeat1, 2), SHIFT_REPEAT(72),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sentence_config, 3),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sentence_config, 3),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_steps, 1),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_or_compr, 1),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain_sig, 2, .production_id = 1),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_body, 1),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_machine_body_repeat1, 2),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_machine_body_repeat1, 2), SHIFT_REPEAT(145),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_machine_body_repeat1, 2), SHIFT_REPEAT(150),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_machine_body_repeat1, 2), SHIFT_REPEAT(240),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_machine_body_repeat1, 2), SHIFT_REPEAT(153),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 4),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relop, 1),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relop, 1),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unop, 1),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unop, 1),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 2),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 3),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain_sig, 3, .production_id = 1),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binop, 1),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binop, 1),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_ref_no_rename, 1),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_ref_rename, 3, .production_id = 2),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_ref_rename, 5, .production_id = 2),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_fact, 1),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_app_arg, 1),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_fact, 3),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compr_rest, 1),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compr_rest, 3),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_ref, 1),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 3),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term_list, 2),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term_list, 1),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unnbody, 1),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unnbody_repeat1, 2),
  [517] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unnbody_repeat1, 2), SHIFT_REPEAT(139),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compr, 3),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_ref_no_rename, 3),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_term_list_repeat1, 2),
  [528] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_term_list_repeat1, 2), SHIFT_REPEAT(35),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unnbody, 2),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain, 4),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_step_config, 2),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trans_step_config, 2),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tsystem_rest, 4),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain, 3),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sentence_conf, 2),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 4),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_step, 4),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform, 3, .production_id = 1),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_step_config, 1),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trans_step_config, 1),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeid, 1),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tsystem_rest, 3),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sentence, 2),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform_rest, 4),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine, 3),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model, 3),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 4),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform_rest, 3),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_prop, 5),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sentence, 1),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sentence_conf, 1),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine, 4),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unncmp, 3),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tsystem, 4),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unncmp, 1),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model, 4),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maparrow, 1),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_maparrow, 1),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fields, 2),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fields_repeat1, 2),
  [607] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fields_repeat1, 2), SHIFT_REPEAT(116),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mod_refs_repeat1, 2),
  [614] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mod_refs_repeat1, 2), SHIFT_REPEAT(169),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_refs, 2),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [625] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(38),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fields, 1),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_refs, 1),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_list_repeat1, 2),
  [636] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_list_repeat1, 2), SHIFT_REPEAT(36),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_intro, 4),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_sig, 1),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_intro, 5),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sig_config, 1),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_list, 1),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_list, 2),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, .production_id = 2),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_machine_sig_config_repeat1, 2),
  [663] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_machine_sig_config_repeat1, 2), SHIFT_REPEAT(241),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 2),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_list, 1),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_list, 2),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_list_repeat1, 2),
  [676] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_list_repeat1, 2), SHIFT_REPEAT(94),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_list_repeat1, 2),
  [681] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_list_repeat1, 2), SHIFT_REPEAT(152),
  [684] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setting_list_repeat1, 2), SHIFT_REPEAT(170),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_setting_list_repeat1, 2),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_arg_list, 2),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_arg_list, 1),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_model_param_list_repeat1, 2),
  [697] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_param_list_repeat1, 2), SHIFT_REPEAT(223),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mod_arg_list_repeat1, 2),
  [702] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mod_arg_list_repeat1, 2), SHIFT_REPEAT(47),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_param_list, 1),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_list, 1),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_or_update_lhs_repeat1, 2),
  [717] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_step_or_update_lhs_repeat1, 2), SHIFT_REPEAT(187),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_cnst, 1),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vom_param_list, 1),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_list, 1),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vom_param_list_repeat1, 2),
  [738] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vom_param_list_repeat1, 2), SHIFT_REPEAT(176),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_param_list, 2),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain_sig_config, 1),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_sig_config, 1),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_or_update_lhs, 1),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_list, 2),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform_sig_config, 1),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vom_param_list, 2),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_or_update_lhs, 2),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_list, 2),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_apply, 3),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_val_or_model_program, 3, .production_id = 2),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_sig, 3),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 5),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_app_arg, 3),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform_sig, 5),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sig, 5),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 4),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain_sig, 4, .production_id = 1),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_val_or_model_program, 1),
  [807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_apply, 4),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl_body, 3),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_sig_in, 2),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [843] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_card_spec, 1),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl_body, 4),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain_sig_config, 2),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sig_in, 2),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sig_in, 3),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_sig_in, 3),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl_body, 6),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform_sig_config, 2),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_sig_config, 2),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl_body, 1),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [917] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_decl, 1),
  [951] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
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
