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
#define STATE_COUNT 387
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
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 5},
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
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 147},
  [22] = {.lex_state = 147},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 147},
  [33] = {.lex_state = 147},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 14},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 11},
  [46] = {.lex_state = 11},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 3},
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
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 14},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 14},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 14},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 14},
  [99] = {.lex_state = 14},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 14},
  [102] = {.lex_state = 14},
  [103] = {.lex_state = 12},
  [104] = {.lex_state = 12},
  [105] = {.lex_state = 12},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 12},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 14},
  [111] = {.lex_state = 14},
  [112] = {.lex_state = 14},
  [113] = {.lex_state = 12},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 14},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 14},
  [118] = {.lex_state = 14},
  [119] = {.lex_state = 14},
  [120] = {.lex_state = 14},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 12},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 14},
  [125] = {.lex_state = 9},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 14},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 14},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 9},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 14},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 14},
  [142] = {.lex_state = 4},
  [143] = {.lex_state = 9},
  [144] = {.lex_state = 4},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 4},
  [148] = {.lex_state = 9},
  [149] = {.lex_state = 14},
  [150] = {.lex_state = 4},
  [151] = {.lex_state = 9},
  [152] = {.lex_state = 9},
  [153] = {.lex_state = 9},
  [154] = {.lex_state = 9},
  [155] = {.lex_state = 9},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 147},
  [158] = {.lex_state = 12},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 12},
  [161] = {.lex_state = 9},
  [162] = {.lex_state = 9},
  [163] = {.lex_state = 14},
  [164] = {.lex_state = 147},
  [165] = {.lex_state = 9},
  [166] = {.lex_state = 147},
  [167] = {.lex_state = 14},
  [168] = {.lex_state = 147},
  [169] = {.lex_state = 14},
  [170] = {.lex_state = 147},
  [171] = {.lex_state = 147},
  [172] = {.lex_state = 4},
  [173] = {.lex_state = 12},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 4},
  [177] = {.lex_state = 12},
  [178] = {.lex_state = 147},
  [179] = {.lex_state = 147},
  [180] = {.lex_state = 12},
  [181] = {.lex_state = 9},
  [182] = {.lex_state = 12},
  [183] = {.lex_state = 12},
  [184] = {.lex_state = 147},
  [185] = {.lex_state = 147},
  [186] = {.lex_state = 147},
  [187] = {.lex_state = 4},
  [188] = {.lex_state = 147},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 147},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 147},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 4},
  [195] = {.lex_state = 12},
  [196] = {.lex_state = 9},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 4},
  [199] = {.lex_state = 147},
  [200] = {.lex_state = 147},
  [201] = {.lex_state = 147},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 4},
  [204] = {.lex_state = 12},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 147},
  [207] = {.lex_state = 147},
  [208] = {.lex_state = 147},
  [209] = {.lex_state = 147},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 12},
  [214] = {.lex_state = 147},
  [215] = {.lex_state = 147},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 147},
  [218] = {.lex_state = 12},
  [219] = {.lex_state = 12},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 9},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 10},
  [224] = {.lex_state = 12},
  [225] = {.lex_state = 12},
  [226] = {.lex_state = 9},
  [227] = {.lex_state = 9},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 12},
  [230] = {.lex_state = 12},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 9},
  [233] = {.lex_state = 12},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 147},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 9},
  [240] = {.lex_state = 147},
  [241] = {.lex_state = 147},
  [242] = {.lex_state = 9},
  [243] = {.lex_state = 9},
  [244] = {.lex_state = 147},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 147},
  [247] = {.lex_state = 9},
  [248] = {.lex_state = 147},
  [249] = {.lex_state = 147},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 147},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 5},
  [254] = {.lex_state = 12},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 5},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 5},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 147},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 5},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 147},
  [279] = {.lex_state = 147},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 147},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 5},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 147},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 14},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 147},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 14},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 5},
  [305] = {.lex_state = 147},
  [306] = {.lex_state = 147},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 147},
  [311] = {.lex_state = 5},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 147},
  [318] = {.lex_state = 147},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 147},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 147},
  [323] = {.lex_state = 5},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 147},
  [326] = {.lex_state = 147},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 147},
  [330] = {.lex_state = 147},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 147},
  [333] = {.lex_state = 5},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 147},
  [339] = {.lex_state = 227},
  [340] = {.lex_state = 147},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 5},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 9},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 5},
  [352] = {.lex_state = 5},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 147},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 9},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 147},
  [371] = {.lex_state = 147},
  [372] = {.lex_state = 147},
  [373] = {.lex_state = 9},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 147},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 227},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 147},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 5},
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
    [sym_program] = STATE(381),
    [sym_module] = STATE(22),
    [sym_machine] = STATE(179),
    [sym_machine_sig_config] = STATE(379),
    [sym_machine_sig] = STATE(235),
    [sym_model] = STATE(179),
    [sym_model_sig_config] = STATE(377),
    [sym_model_sig] = STATE(272),
    [sym_model_intro] = STATE(231),
    [sym_tsystem] = STATE(179),
    [sym_transform] = STATE(179),
    [sym_domain] = STATE(179),
    [sym_domain_sig_config] = STATE(363),
    [sym_domain_sig] = STATE(266),
    [sym_config] = STATE(21),
    [aux_sym_program_repeat1] = STATE(22),
    [aux_sym_machine_sig_config_repeat1] = STATE(235),
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
    STATE(56), 1,
      sym_unop,
    STATE(68), 1,
      sym_trans_sentence,
    STATE(98), 1,
      sym_string,
    STATE(99), 1,
      sym_id,
    STATE(101), 1,
      sym_constant,
    STATE(102), 1,
      sym_atom,
    STATE(112), 1,
      sym_func_term,
    STATE(120), 1,
      sym_bareid,
    STATE(164), 1,
      sym_func_or_compr,
    STATE(199), 1,
      sym_compr,
    STATE(279), 1,
      sym_func_term_list,
    STATE(361), 1,
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
    STATE(73), 2,
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
    STATE(56), 1,
      sym_unop,
    STATE(68), 1,
      sym_trans_sentence,
    STATE(98), 1,
      sym_string,
    STATE(99), 1,
      sym_id,
    STATE(101), 1,
      sym_constant,
    STATE(102), 1,
      sym_atom,
    STATE(112), 1,
      sym_func_term,
    STATE(120), 1,
      sym_bareid,
    STATE(164), 1,
      sym_func_or_compr,
    STATE(199), 1,
      sym_compr,
    STATE(279), 1,
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
    STATE(73), 2,
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
    STATE(17), 1,
      sym_sentence_config,
    STATE(56), 1,
      sym_unop,
    STATE(92), 1,
      sym_dom_sentence,
    STATE(98), 1,
      sym_string,
    STATE(99), 1,
      sym_id,
    STATE(101), 1,
      sym_constant,
    STATE(102), 1,
      sym_atom,
    STATE(112), 1,
      sym_func_term,
    STATE(119), 1,
      sym_bareid,
    STATE(164), 1,
      sym_func_or_compr,
    STATE(199), 1,
      sym_compr,
    STATE(278), 1,
      sym_func_term_list,
    STATE(365), 1,
      sym_dom_sentences,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    STATE(7), 2,
      sym_dom_sentence_config,
      aux_sym_dom_sentences_repeat1,
    STATE(77), 2,
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
    STATE(56), 1,
      sym_unop,
    STATE(68), 1,
      sym_trans_sentence,
    STATE(98), 1,
      sym_string,
    STATE(99), 1,
      sym_id,
    STATE(101), 1,
      sym_constant,
    STATE(102), 1,
      sym_atom,
    STATE(112), 1,
      sym_func_term,
    STATE(120), 1,
      sym_bareid,
    STATE(164), 1,
      sym_func_or_compr,
    STATE(199), 1,
      sym_compr,
    STATE(279), 1,
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
    STATE(73), 2,
      sym_type_decl,
      sym_rule,
  [361] = 28,
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
    STATE(17), 1,
      sym_sentence_config,
    STATE(56), 1,
      sym_unop,
    STATE(92), 1,
      sym_dom_sentence,
    STATE(98), 1,
      sym_string,
    STATE(99), 1,
      sym_id,
    STATE(101), 1,
      sym_constant,
    STATE(102), 1,
      sym_atom,
    STATE(112), 1,
      sym_func_term,
    STATE(119), 1,
      sym_bareid,
    STATE(164), 1,
      sym_func_or_compr,
    STATE(199), 1,
      sym_compr,
    STATE(278), 1,
      sym_func_term_list,
    ACTIONS(111), 2,
      sym_real,
      sym_frac,
    STATE(6), 2,
      sym_dom_sentence_config,
      aux_sym_dom_sentences_repeat1,
    STATE(77), 2,
      sym_type_decl,
      sym_rule,
  [449] = 28,
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
    ACTIONS(129), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      sym_sentence_config,
    STATE(56), 1,
      sym_unop,
    STATE(92), 1,
      sym_dom_sentence,
    STATE(98), 1,
      sym_string,
    STATE(99), 1,
      sym_id,
    STATE(101), 1,
      sym_constant,
    STATE(102), 1,
      sym_atom,
    STATE(112), 1,
      sym_func_term,
    STATE(119), 1,
      sym_bareid,
    STATE(164), 1,
      sym_func_or_compr,
    STATE(199), 1,
      sym_compr,
    STATE(278), 1,
      sym_func_term_list,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    STATE(6), 2,
      sym_dom_sentence_config,
      aux_sym_dom_sentences_repeat1,
    STATE(77), 2,
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
    STATE(18), 1,
      sym_sentence_config,
    STATE(56), 1,
      sym_unop,
    STATE(79), 1,
      sym_model_contract,
    STATE(98), 1,
      sym_string,
    STATE(99), 1,
      sym_id,
    STATE(101), 1,
      sym_constant,
    STATE(102), 1,
      sym_atom,
    STATE(130), 1,
      sym_bareid,
    STATE(137), 1,
      sym_func_term,
    STATE(287), 1,
      sym_model_fact,
    STATE(342), 1,
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
    STATE(18), 1,
      sym_sentence_config,
    STATE(56), 1,
      sym_unop,
    STATE(79), 1,
      sym_model_contract,
    STATE(98), 1,
      sym_string,
    STATE(99), 1,
      sym_id,
    STATE(101), 1,
      sym_constant,
    STATE(102), 1,
      sym_atom,
    STATE(130), 1,
      sym_bareid,
    STATE(137), 1,
      sym_func_term,
    STATE(287), 1,
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
    STATE(18), 1,
      sym_sentence_config,
    STATE(56), 1,
      sym_unop,
    STATE(79), 1,
      sym_model_contract,
    STATE(98), 1,
      sym_string,
    STATE(99), 1,
      sym_id,
    STATE(101), 1,
      sym_constant,
    STATE(102), 1,
      sym_atom,
    STATE(130), 1,
      sym_bareid,
    STATE(137), 1,
      sym_func_term,
    STATE(287), 1,
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
  [821] = 3,
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
    STATE(56), 1,
      sym_unop,
    STATE(69), 1,
      sym_trans_sentence,
    STATE(98), 1,
      sym_string,
    STATE(99), 1,
      sym_id,
    STATE(101), 1,
      sym_constant,
    STATE(102), 1,
      sym_atom,
    STATE(112), 1,
      sym_func_term,
    STATE(120), 1,
      sym_bareid,
    STATE(164), 1,
      sym_func_or_compr,
    STATE(199), 1,
      sym_compr,
    STATE(279), 1,
      sym_func_term_list,
    ACTIONS(25), 2,
      anon_sym_ensures,
      anon_sym_requires,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    STATE(73), 2,
      sym_type_decl,
      sym_rule,
  [1002] = 23,
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
      sym_func_term,
    STATE(41), 1,
      sym_id,
    STATE(48), 1,
      sym_bareid,
    STATE(61), 1,
      sym_unop,
    STATE(63), 1,
      sym_string,
    STATE(66), 1,
      sym_constant,
    STATE(67), 1,
      sym_atom,
    STATE(214), 1,
      sym_constraint,
    STATE(240), 1,
      sym_body,
    STATE(362), 1,
      sym_body_list,
    STATE(383), 1,
      sym_card_spec,
    ACTIONS(191), 2,
      sym_real,
      sym_frac,
    ACTIONS(187), 3,
      anon_sym_some,
      anon_sym_atmost,
      anon_sym_atleast,
  [1075] = 24,
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
    STATE(56), 1,
      sym_unop,
    STATE(91), 1,
      sym_dom_sentence,
    STATE(98), 1,
      sym_string,
    STATE(99), 1,
      sym_id,
    STATE(101), 1,
      sym_constant,
    STATE(102), 1,
      sym_atom,
    STATE(112), 1,
      sym_func_term,
    STATE(119), 1,
      sym_bareid,
    STATE(164), 1,
      sym_func_or_compr,
    STATE(199), 1,
      sym_compr,
    STATE(278), 1,
      sym_func_term_list,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    STATE(77), 2,
      sym_type_decl,
      sym_rule,
  [1150] = 21,
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
    STATE(56), 1,
      sym_unop,
    STATE(89), 1,
      sym_model_contract,
    STATE(98), 1,
      sym_string,
    STATE(99), 1,
      sym_id,
    STATE(101), 1,
      sym_constant,
    STATE(102), 1,
      sym_atom,
    STATE(130), 1,
      sym_bareid,
    STATE(137), 1,
      sym_func_term,
    STATE(281), 1,
      sym_model_fact,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [1215] = 21,
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
    STATE(56), 1,
      sym_unop,
    STATE(74), 1,
      sym_bareid,
    STATE(98), 1,
      sym_string,
    STATE(99), 1,
      sym_id,
    STATE(101), 1,
      sym_constant,
    STATE(102), 1,
      sym_atom,
    STATE(112), 1,
      sym_func_term,
    STATE(164), 1,
      sym_func_or_compr,
    STATE(199), 1,
      sym_compr,
    STATE(369), 1,
      sym_func_term_list,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [1280] = 21,
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
    STATE(43), 1,
      sym_sentence_config,
    STATE(56), 1,
      sym_unop,
    STATE(90), 1,
      sym_model_fact_list,
    STATE(98), 1,
      sym_string,
    STATE(99), 1,
      sym_id,
    STATE(101), 1,
      sym_constant,
    STATE(102), 1,
      sym_atom,
    STATE(130), 1,
      sym_bareid,
    STATE(137), 1,
      sym_func_term,
    STATE(287), 1,
      sym_model_fact,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [1345] = 16,
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
    STATE(231), 1,
      sym_model_intro,
    STATE(266), 1,
      sym_domain_sig,
    STATE(272), 1,
      sym_model_sig,
    STATE(363), 1,
      sym_domain_sig_config,
    STATE(377), 1,
      sym_model_sig_config,
    STATE(379), 1,
      sym_machine_sig_config,
    STATE(33), 2,
      sym_module,
      aux_sym_program_repeat1,
    STATE(235), 2,
      sym_machine_sig,
      aux_sym_machine_sig_config_repeat1,
    STATE(179), 5,
      sym_machine,
      sym_model,
      sym_tsystem,
      sym_transform,
      sym_domain,
  [1400] = 16,
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
    STATE(231), 1,
      sym_model_intro,
    STATE(266), 1,
      sym_domain_sig,
    STATE(272), 1,
      sym_model_sig,
    STATE(363), 1,
      sym_domain_sig_config,
    STATE(377), 1,
      sym_model_sig_config,
    STATE(379), 1,
      sym_machine_sig_config,
    STATE(32), 2,
      sym_module,
      aux_sym_program_repeat1,
    STATE(235), 2,
      sym_machine_sig,
      aux_sym_machine_sig_config_repeat1,
    STATE(179), 5,
      sym_machine,
      sym_model,
      sym_tsystem,
      sym_transform,
      sym_domain,
  [1455] = 21,
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
    STATE(56), 1,
      sym_unop,
    STATE(74), 1,
      sym_bareid,
    STATE(98), 1,
      sym_string,
    STATE(99), 1,
      sym_id,
    STATE(101), 1,
      sym_constant,
    STATE(102), 1,
      sym_atom,
    STATE(112), 1,
      sym_func_term,
    STATE(164), 1,
      sym_func_or_compr,
    STATE(199), 1,
      sym_compr,
    STATE(354), 1,
      sym_func_term_list,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [1520] = 21,
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
      sym_func_term,
    STATE(41), 1,
      sym_id,
    STATE(48), 1,
      sym_bareid,
    STATE(61), 1,
      sym_unop,
    STATE(63), 1,
      sym_string,
    STATE(66), 1,
      sym_constant,
    STATE(67), 1,
      sym_atom,
    STATE(214), 1,
      sym_constraint,
    STATE(240), 1,
      sym_body,
    STATE(380), 1,
      sym_body_list,
    ACTIONS(191), 2,
      sym_real,
      sym_frac,
  [1585] = 21,
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
    STATE(56), 1,
      sym_unop,
    STATE(74), 1,
      sym_bareid,
    STATE(98), 1,
      sym_string,
    STATE(99), 1,
      sym_id,
    STATE(101), 1,
      sym_constant,
    STATE(102), 1,
      sym_atom,
    STATE(112), 1,
      sym_func_term,
    STATE(164), 1,
      sym_func_or_compr,
    STATE(199), 1,
      sym_compr,
    STATE(277), 1,
      sym_func_term_list,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [1650] = 21,
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
      sym_func_term,
    STATE(41), 1,
      sym_id,
    STATE(48), 1,
      sym_bareid,
    STATE(61), 1,
      sym_unop,
    STATE(63), 1,
      sym_string,
    STATE(66), 1,
      sym_constant,
    STATE(67), 1,
      sym_atom,
    STATE(214), 1,
      sym_constraint,
    STATE(240), 1,
      sym_body,
    STATE(310), 1,
      sym_body_list,
    ACTIONS(191), 2,
      sym_real,
      sym_frac,
  [1715] = 21,
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
      sym_func_term,
    STATE(41), 1,
      sym_id,
    STATE(48), 1,
      sym_bareid,
    STATE(61), 1,
      sym_unop,
    STATE(63), 1,
      sym_string,
    STATE(66), 1,
      sym_constant,
    STATE(67), 1,
      sym_atom,
    STATE(214), 1,
      sym_constraint,
    STATE(240), 1,
      sym_body,
    STATE(362), 1,
      sym_body_list,
    ACTIONS(191), 2,
      sym_real,
      sym_frac,
  [1780] = 21,
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
    STATE(43), 1,
      sym_sentence_config,
    STATE(56), 1,
      sym_unop,
    STATE(84), 1,
      sym_model_fact_list,
    STATE(98), 1,
      sym_string,
    STATE(99), 1,
      sym_id,
    STATE(101), 1,
      sym_constant,
    STATE(102), 1,
      sym_atom,
    STATE(130), 1,
      sym_bareid,
    STATE(137), 1,
      sym_func_term,
    STATE(287), 1,
      sym_model_fact,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [1845] = 21,
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
      sym_func_term,
    STATE(41), 1,
      sym_id,
    STATE(48), 1,
      sym_bareid,
    STATE(61), 1,
      sym_unop,
    STATE(63), 1,
      sym_string,
    STATE(66), 1,
      sym_constant,
    STATE(67), 1,
      sym_atom,
    STATE(214), 1,
      sym_constraint,
    STATE(240), 1,
      sym_body,
    STATE(336), 1,
      sym_body_list,
    ACTIONS(191), 2,
      sym_real,
      sym_frac,
  [1910] = 21,
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
      sym_func_term,
    STATE(41), 1,
      sym_id,
    STATE(48), 1,
      sym_bareid,
    STATE(61), 1,
      sym_unop,
    STATE(63), 1,
      sym_string,
    STATE(66), 1,
      sym_constant,
    STATE(67), 1,
      sym_atom,
    STATE(214), 1,
      sym_constraint,
    STATE(240), 1,
      sym_body,
    STATE(320), 1,
      sym_body_list,
    ACTIONS(191), 2,
      sym_real,
      sym_frac,
  [1975] = 21,
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
      sym_func_term,
    STATE(41), 1,
      sym_id,
    STATE(48), 1,
      sym_bareid,
    STATE(61), 1,
      sym_unop,
    STATE(63), 1,
      sym_string,
    STATE(66), 1,
      sym_constant,
    STATE(67), 1,
      sym_atom,
    STATE(214), 1,
      sym_constraint,
    STATE(240), 1,
      sym_body,
    STATE(370), 1,
      sym_body_list,
    ACTIONS(191), 2,
      sym_real,
      sym_frac,
  [2040] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
    ACTIONS(211), 1,
      anon_sym_machine,
    ACTIONS(214), 1,
      anon_sym_partial,
    ACTIONS(217), 1,
      anon_sym_model,
    ACTIONS(220), 1,
      anon_sym_transform,
    ACTIONS(223), 1,
      anon_sym_domain,
    STATE(231), 1,
      sym_model_intro,
    STATE(266), 1,
      sym_domain_sig,
    STATE(272), 1,
      sym_model_sig,
    STATE(363), 1,
      sym_domain_sig_config,
    STATE(377), 1,
      sym_model_sig_config,
    STATE(379), 1,
      sym_machine_sig_config,
    STATE(32), 2,
      sym_module,
      aux_sym_program_repeat1,
    STATE(235), 2,
      sym_machine_sig,
      aux_sym_machine_sig_config_repeat1,
    STATE(179), 5,
      sym_machine,
      sym_model,
      sym_tsystem,
      sym_transform,
      sym_domain,
  [2095] = 16,
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
    ACTIONS(226), 1,
      ts_builtin_sym_end,
    STATE(231), 1,
      sym_model_intro,
    STATE(266), 1,
      sym_domain_sig,
    STATE(272), 1,
      sym_model_sig,
    STATE(363), 1,
      sym_domain_sig_config,
    STATE(377), 1,
      sym_model_sig_config,
    STATE(379), 1,
      sym_machine_sig_config,
    STATE(32), 2,
      sym_module,
      aux_sym_program_repeat1,
    STATE(235), 2,
      sym_machine_sig,
      aux_sym_machine_sig_config_repeat1,
    STATE(179), 5,
      sym_machine,
      sym_model,
      sym_tsystem,
      sym_transform,
      sym_domain,
  [2150] = 20,
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
      sym_func_term,
    STATE(41), 1,
      sym_id,
    STATE(48), 1,
      sym_bareid,
    STATE(61), 1,
      sym_unop,
    STATE(63), 1,
      sym_string,
    STATE(66), 1,
      sym_constant,
    STATE(67), 1,
      sym_atom,
    STATE(214), 1,
      sym_constraint,
    STATE(251), 1,
      sym_body,
    ACTIONS(191), 2,
      sym_real,
      sym_frac,
  [2212] = 20,
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
    STATE(56), 1,
      sym_unop,
    STATE(98), 1,
      sym_string,
    STATE(99), 1,
      sym_id,
    STATE(101), 1,
      sym_constant,
    STATE(102), 1,
      sym_atom,
    STATE(133), 1,
      sym_bareid,
    STATE(141), 1,
      sym_func_term,
    STATE(259), 1,
      sym_mod_app_arg,
    STATE(348), 1,
      sym_mod_arg_list,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2274] = 20,
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
    STATE(56), 1,
      sym_unop,
    STATE(74), 1,
      sym_bareid,
    STATE(98), 1,
      sym_string,
    STATE(99), 1,
      sym_id,
    STATE(101), 1,
      sym_constant,
    STATE(102), 1,
      sym_atom,
    STATE(112), 1,
      sym_func_term,
    STATE(199), 1,
      sym_compr,
    STATE(200), 1,
      sym_func_or_compr,
    ACTIONS(33), 2,
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
    STATE(56), 1,
      sym_unop,
    STATE(74), 1,
      sym_bareid,
    STATE(98), 1,
      sym_string,
    STATE(101), 1,
      sym_constant,
    STATE(102), 1,
      sym_atom,
    STATE(115), 1,
      sym_id,
    STATE(118), 1,
      sym_func_term,
    STATE(237), 1,
      sym_compr,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2422] = 19,
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
      sym_func_term,
    STATE(41), 1,
      sym_id,
    STATE(48), 1,
      sym_bareid,
    STATE(61), 1,
      sym_unop,
    STATE(63), 1,
      sym_string,
    STATE(66), 1,
      sym_constant,
    STATE(67), 1,
      sym_atom,
    STATE(244), 1,
      sym_constraint,
    ACTIONS(191), 2,
      sym_real,
      sym_frac,
  [2481] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_SLASH,
    STATE(51), 1,
      sym_relop,
    STATE(60), 1,
      sym_binop,
    ACTIONS(242), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(234), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(238), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(236), 5,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2517] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_LPAREN,
    ACTIONS(248), 1,
      anon_sym_is,
    ACTIONS(250), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(244), 13,
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
  [2547] = 3,
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
  [2573] = 18,
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
    STATE(56), 1,
      sym_unop,
    STATE(98), 1,
      sym_string,
    STATE(99), 1,
      sym_id,
    STATE(101), 1,
      sym_constant,
    STATE(102), 1,
      sym_atom,
    STATE(130), 1,
      sym_bareid,
    STATE(137), 1,
      sym_func_term,
    STATE(281), 1,
      sym_model_fact,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2629] = 3,
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
  [2655] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(252), 1,
      anon_sym_LBRACE,
    ACTIONS(254), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      anon_sym_DASH,
    ACTIONS(258), 1,
      anon_sym_new,
    ACTIONS(262), 1,
      sym_qualid,
    STATE(158), 1,
      sym_unncmp,
    STATE(180), 1,
      sym_bareid,
    STATE(183), 1,
      sym_typeid,
    STATE(326), 1,
      sym_unnbody,
    STATE(327), 1,
      sym_fun_decl,
    STATE(330), 1,
      sym_type_decl_body,
    ACTIONS(260), 4,
      anon_sym_inj,
      anon_sym_bij,
      anon_sym_sur,
      anon_sym_fun,
  [2707] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(252), 1,
      anon_sym_LBRACE,
    ACTIONS(254), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      anon_sym_DASH,
    ACTIONS(258), 1,
      anon_sym_new,
    ACTIONS(262), 1,
      sym_qualid,
    STATE(158), 1,
      sym_unncmp,
    STATE(180), 1,
      sym_bareid,
    STATE(183), 1,
      sym_typeid,
    STATE(326), 1,
      sym_unnbody,
    STATE(327), 1,
      sym_fun_decl,
    STATE(371), 1,
      sym_type_decl_body,
    ACTIONS(260), 4,
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
    STATE(56), 1,
      sym_unop,
    STATE(98), 1,
      sym_string,
    STATE(99), 1,
      sym_id,
    STATE(101), 1,
      sym_constant,
    STATE(102), 1,
      sym_atom,
    STATE(133), 1,
      sym_bareid,
    STATE(141), 1,
      sym_func_term,
    STATE(292), 1,
      sym_mod_app_arg,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2815] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(264), 15,
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
  [2841] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(60), 1,
      sym_binop,
    ACTIONS(270), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(268), 13,
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
  [2868] = 17,
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
    STATE(56), 1,
      sym_unop,
    STATE(74), 1,
      sym_bareid,
    STATE(98), 1,
      sym_string,
    STATE(99), 1,
      sym_id,
    STATE(101), 1,
      sym_constant,
    STATE(102), 1,
      sym_atom,
    STATE(167), 1,
      sym_func_term,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2921] = 17,
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
    STATE(56), 1,
      sym_unop,
    STATE(74), 1,
      sym_bareid,
    STATE(98), 1,
      sym_string,
    STATE(99), 1,
      sym_id,
    STATE(101), 1,
      sym_constant,
    STATE(102), 1,
      sym_atom,
    STATE(124), 1,
      sym_func_term,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2974] = 17,
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
    STATE(56), 1,
      sym_unop,
    STATE(74), 1,
      sym_bareid,
    STATE(98), 1,
      sym_string,
    STATE(99), 1,
      sym_id,
    STATE(101), 1,
      sym_constant,
    STATE(102), 1,
      sym_atom,
    STATE(169), 1,
      sym_func_term,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [3027] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_SLASH,
    STATE(60), 1,
      sym_binop,
    ACTIONS(274), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(238), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(272), 9,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3058] = 17,
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
    STATE(56), 1,
      sym_unop,
    STATE(74), 1,
      sym_bareid,
    STATE(98), 1,
      sym_string,
    STATE(99), 1,
      sym_id,
    STATE(101), 1,
      sym_constant,
    STATE(102), 1,
      sym_atom,
    STATE(117), 1,
      sym_func_term,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [3111] = 17,
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
    STATE(56), 1,
      sym_unop,
    STATE(74), 1,
      sym_bareid,
    STATE(98), 1,
      sym_string,
    STATE(99), 1,
      sym_id,
    STATE(101), 1,
      sym_constant,
    STATE(102), 1,
      sym_atom,
    STATE(149), 1,
      sym_func_term,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [3164] = 17,
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
    STATE(56), 1,
      sym_unop,
    STATE(74), 1,
      sym_bareid,
    STATE(94), 1,
      sym_func_term,
    STATE(98), 1,
      sym_string,
    STATE(99), 1,
      sym_id,
    STATE(101), 1,
      sym_constant,
    STATE(102), 1,
      sym_atom,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [3217] = 17,
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
    STATE(56), 1,
      sym_unop,
    STATE(74), 1,
      sym_bareid,
    STATE(96), 1,
      sym_func_term,
    STATE(98), 1,
      sym_string,
    STATE(99), 1,
      sym_id,
    STATE(101), 1,
      sym_constant,
    STATE(102), 1,
      sym_atom,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [3270] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_LPAREN,
    ACTIONS(250), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(244), 13,
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
    STATE(56), 1,
      sym_unop,
    STATE(74), 1,
      sym_bareid,
    STATE(98), 1,
      sym_string,
    STATE(99), 1,
      sym_id,
    STATE(101), 1,
      sym_constant,
    STATE(102), 1,
      sym_atom,
    STATE(163), 1,
      sym_func_term,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [3350] = 17,
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
    ACTIONS(276), 1,
      anon_sym_PERCENT,
    ACTIONS(278), 1,
      aux_sym_bareid_token1,
    ACTIONS(280), 1,
      aux_sym_bareid_token2,
    STATE(48), 1,
      sym_bareid,
    STATE(53), 1,
      sym_func_term,
    STATE(58), 1,
      sym_id,
    STATE(61), 1,
      sym_unop,
    STATE(63), 1,
      sym_string,
    STATE(66), 1,
      sym_constant,
    STATE(67), 1,
      sym_atom,
    ACTIONS(191), 2,
      sym_real,
      sym_frac,
  [3403] = 17,
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
    ACTIONS(276), 1,
      anon_sym_PERCENT,
    ACTIONS(278), 1,
      aux_sym_bareid_token1,
    ACTIONS(280), 1,
      aux_sym_bareid_token2,
    STATE(48), 1,
      sym_bareid,
    STATE(49), 1,
      sym_func_term,
    STATE(58), 1,
      sym_id,
    STATE(61), 1,
      sym_unop,
    STATE(63), 1,
      sym_string,
    STATE(66), 1,
      sym_constant,
    STATE(67), 1,
      sym_atom,
    ACTIONS(191), 2,
      sym_real,
      sym_frac,
  [3456] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(272), 13,
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
  [3528] = 3,
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
  [3552] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(244), 13,
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
  [3715] = 3,
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
  [3738] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_SLASH,
    ACTIONS(264), 14,
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
  [3784] = 11,
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
    ACTIONS(322), 1,
      anon_sym_DASH,
    ACTIONS(324), 1,
      sym_digits,
    STATE(265), 1,
      sym_enum_cnst,
    STATE(344), 1,
      sym_enum_list,
    ACTIONS(326), 3,
      sym_real,
      sym_frac,
      sym_qualid,
    STATE(288), 3,
      sym_string,
      sym_range,
      sym_bareid,
  [3822] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 4,
      anon_sym_conforms,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(328), 10,
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
  [3910] = 3,
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
  [3932] = 3,
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
  [3954] = 3,
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
  [3976] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 5,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(352), 9,
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
  [4020] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 4,
      anon_sym_conforms,
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
  [4042] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 4,
      anon_sym_conforms,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(356), 10,
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
  [4064] = 14,
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
    ACTIONS(360), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      sym_bareid,
    STATE(150), 1,
      sym_sentence_config,
    STATE(198), 1,
      sym_step,
    STATE(260), 1,
      sym_id,
    STATE(321), 1,
      sym_trans_steps,
    STATE(386), 1,
      sym_step_or_update_lhs,
    STATE(100), 2,
      sym_trans_step_config,
      aux_sym_trans_steps_repeat1,
  [4108] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 5,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(362), 9,
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
    ACTIONS(368), 5,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(366), 9,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      aux_sym_bareid_token2,
      sym_qualid,
  [4152] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 4,
      anon_sym_conforms,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(370), 10,
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
  [4174] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 4,
      anon_sym_conforms,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(374), 10,
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
  [4196] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_RBRACE,
    ACTIONS(380), 1,
      anon_sym_LBRACK,
    ACTIONS(383), 1,
      anon_sym_PERCENT,
    ACTIONS(386), 1,
      aux_sym_bareid_token1,
    ACTIONS(389), 1,
      aux_sym_bareid_token2,
    ACTIONS(392), 1,
      sym_qualid,
    STATE(74), 1,
      sym_bareid,
    STATE(150), 1,
      sym_sentence_config,
    STATE(198), 1,
      sym_step,
    STATE(260), 1,
      sym_id,
    STATE(386), 1,
      sym_step_or_update_lhs,
    STATE(93), 2,
      sym_trans_step_config,
      aux_sym_trans_steps_repeat1,
  [4237] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_SLASH,
    STATE(57), 1,
      sym_binop,
    ACTIONS(268), 11,
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
  [4260] = 10,
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
    ACTIONS(322), 1,
      anon_sym_DASH,
    ACTIONS(324), 1,
      sym_digits,
    STATE(300), 1,
      sym_enum_cnst,
    ACTIONS(326), 3,
      sym_real,
      sym_frac,
      sym_qualid,
    STATE(288), 3,
      sym_string,
      sym_range,
      sym_bareid,
  [4295] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_SLASH,
    STATE(57), 1,
      sym_binop,
    ACTIONS(238), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(272), 7,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [4320] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 5,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(395), 8,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      aux_sym_bareid_token2,
      sym_qualid,
  [4341] = 3,
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
  [4362] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_SLASH,
    ACTIONS(399), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 11,
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
  [4385] = 13,
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
    ACTIONS(401), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      sym_bareid,
    STATE(150), 1,
      sym_sentence_config,
    STATE(198), 1,
      sym_step,
    STATE(260), 1,
      sym_id,
    STATE(386), 1,
      sym_step_or_update_lhs,
    STATE(93), 2,
      sym_trans_step_config,
      aux_sym_trans_steps_repeat1,
  [4426] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_SLASH,
    ACTIONS(244), 11,
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
  [4466] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_LBRACE,
    ACTIONS(262), 1,
      sym_qualid,
    ACTIONS(276), 1,
      anon_sym_PERCENT,
    ACTIONS(278), 1,
      aux_sym_bareid_token1,
    ACTIONS(280), 1,
      aux_sym_bareid_token2,
    ACTIONS(403), 1,
      anon_sym_any,
    STATE(158), 1,
      sym_unncmp,
    STATE(182), 1,
      sym_bareid,
    STATE(183), 1,
      sym_typeid,
    STATE(218), 1,
      sym_field,
    STATE(233), 1,
      sym_unnbody,
    STATE(254), 1,
      sym_fields,
  [4506] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_LBRACE,
    ACTIONS(262), 1,
      sym_qualid,
    ACTIONS(276), 1,
      anon_sym_PERCENT,
    ACTIONS(278), 1,
      aux_sym_bareid_token1,
    ACTIONS(280), 1,
      aux_sym_bareid_token2,
    ACTIONS(403), 1,
      anon_sym_any,
    STATE(158), 1,
      sym_unncmp,
    STATE(182), 1,
      sym_bareid,
    STATE(183), 1,
      sym_typeid,
    STATE(218), 1,
      sym_field,
    STATE(233), 1,
      sym_unnbody,
    STATE(335), 1,
      sym_fields,
  [4546] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_LBRACE,
    ACTIONS(262), 1,
      sym_qualid,
    ACTIONS(276), 1,
      anon_sym_PERCENT,
    ACTIONS(278), 1,
      aux_sym_bareid_token1,
    ACTIONS(280), 1,
      aux_sym_bareid_token2,
    ACTIONS(403), 1,
      anon_sym_any,
    STATE(158), 1,
      sym_unncmp,
    STATE(182), 1,
      sym_bareid,
    STATE(183), 1,
      sym_typeid,
    STATE(218), 1,
      sym_field,
    STATE(233), 1,
      sym_unnbody,
    STATE(315), 1,
      sym_fields,
  [4586] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_RBRACE,
    ACTIONS(407), 1,
      anon_sym_boot,
    ACTIONS(411), 1,
      anon_sym_property,
    ACTIONS(413), 1,
      anon_sym_LBRACK,
    STATE(175), 1,
      sym_machine_sentence,
    STATE(193), 1,
      sym_sentence_config,
    STATE(197), 1,
      sym_machine_prop,
    STATE(316), 1,
      sym_machine_body,
    ACTIONS(409), 2,
      anon_sym_initially,
      anon_sym_next,
    STATE(114), 2,
      sym_machine_sentence_conf,
      aux_sym_machine_body_repeat1,
  [4622] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_LBRACE,
    ACTIONS(262), 1,
      sym_qualid,
    ACTIONS(276), 1,
      anon_sym_PERCENT,
    ACTIONS(278), 1,
      aux_sym_bareid_token1,
    ACTIONS(280), 1,
      aux_sym_bareid_token2,
    ACTIONS(403), 1,
      anon_sym_any,
    STATE(158), 1,
      sym_unncmp,
    STATE(182), 1,
      sym_bareid,
    STATE(183), 1,
      sym_typeid,
    STATE(218), 1,
      sym_field,
    STATE(233), 1,
      sym_unnbody,
    STATE(357), 1,
      sym_fields,
  [4662] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(419), 1,
      anon_sym_PERCENT,
    STATE(131), 1,
      sym_bareid,
    STATE(222), 1,
      sym_mod_ref,
    STATE(296), 1,
      sym_mod_refs,
    ACTIONS(415), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
    ACTIONS(417), 2,
      anon_sym_includes,
      anon_sym_extends,
    STATE(156), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [4696] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 4,
      anon_sym_conforms,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(395), 8,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      aux_sym_bareid_token2,
      sym_qualid,
  [4716] = 3,
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
  [4736] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_SLASH,
    ACTIONS(272), 11,
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
  [4756] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_SLASH,
    STATE(57), 1,
      sym_binop,
    ACTIONS(238), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(421), 6,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [4780] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_LBRACE,
    ACTIONS(262), 1,
      sym_qualid,
    ACTIONS(276), 1,
      anon_sym_PERCENT,
    ACTIONS(278), 1,
      aux_sym_bareid_token1,
    ACTIONS(280), 1,
      aux_sym_bareid_token2,
    ACTIONS(403), 1,
      anon_sym_any,
    STATE(158), 1,
      sym_unncmp,
    STATE(182), 1,
      sym_bareid,
    STATE(183), 1,
      sym_typeid,
    STATE(229), 1,
      sym_field,
    STATE(233), 1,
      sym_unnbody,
  [4817] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_boot,
    ACTIONS(411), 1,
      anon_sym_property,
    ACTIONS(413), 1,
      anon_sym_LBRACK,
    ACTIONS(423), 1,
      anon_sym_RBRACE,
    STATE(175), 1,
      sym_machine_sentence,
    STATE(193), 1,
      sym_sentence_config,
    STATE(197), 1,
      sym_machine_prop,
    ACTIONS(409), 2,
      anon_sym_initially,
      anon_sym_next,
    STATE(116), 2,
      sym_machine_sentence_conf,
      aux_sym_machine_body_repeat1,
  [4850] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_SLASH,
    ACTIONS(399), 1,
      anon_sym_LPAREN,
    ACTIONS(425), 1,
      anon_sym_is,
    ACTIONS(244), 8,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4873] = 10,
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
    STATE(175), 1,
      sym_machine_sentence,
    STATE(193), 1,
      sym_sentence_config,
    STATE(197), 1,
      sym_machine_prop,
    ACTIONS(432), 2,
      anon_sym_initially,
      anon_sym_next,
    STATE(116), 2,
      sym_machine_sentence_conf,
      aux_sym_machine_body_repeat1,
  [4906] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_SLASH,
    STATE(57), 1,
      sym_binop,
    ACTIONS(238), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(441), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [4928] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_SLASH,
    STATE(57), 1,
      sym_binop,
    ACTIONS(238), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(443), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [4950] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_SLASH,
    ACTIONS(445), 1,
      anon_sym_COLON_COLON_EQ,
    ACTIONS(264), 8,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_COLON_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4970] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_SLASH,
    ACTIONS(447), 1,
      anon_sym_COLON_COLON_EQ,
    ACTIONS(264), 8,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_COLON_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4990] = 3,
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
  [5008] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(252), 1,
      anon_sym_LBRACE,
    ACTIONS(262), 1,
      sym_qualid,
    ACTIONS(453), 1,
      anon_sym_any,
    STATE(158), 1,
      sym_unncmp,
    STATE(180), 1,
      sym_bareid,
    STATE(183), 1,
      sym_typeid,
    STATE(224), 1,
      sym_unnbody,
  [5042] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 3,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(395), 7,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      aux_sym_bareid_token2,
      sym_qualid,
  [5060] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_SLASH,
    STATE(57), 1,
      sym_binop,
    ACTIONS(238), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(455), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5082] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_PERCENT,
    STATE(131), 1,
      sym_bareid,
    STATE(222), 1,
      sym_mod_ref,
    STATE(303), 1,
      sym_mod_refs,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
    ACTIONS(457), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
    STATE(156), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5110] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 3,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(459), 7,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      aux_sym_bareid_token2,
      sym_qualid,
  [5128] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 3,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(463), 7,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      aux_sym_bareid_token2,
      sym_qualid,
  [5146] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(252), 1,
      anon_sym_LBRACE,
    ACTIONS(262), 1,
      sym_qualid,
    STATE(158), 1,
      sym_unncmp,
    STATE(180), 1,
      sym_bareid,
    STATE(183), 1,
      sym_typeid,
    STATE(225), 1,
      sym_unnbody,
  [5177] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(252), 1,
      anon_sym_LBRACE,
    ACTIONS(262), 1,
      sym_qualid,
    STATE(158), 1,
      sym_unncmp,
    STATE(180), 1,
      sym_bareid,
    STATE(183), 1,
      sym_typeid,
    STATE(230), 1,
      sym_unnbody,
  [5208] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_SLASH,
    ACTIONS(467), 1,
      anon_sym_is,
    ACTIONS(264), 7,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [5227] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_COLON_COLON,
    ACTIONS(473), 1,
      anon_sym_AT,
    ACTIONS(469), 7,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [5246] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(252), 1,
      anon_sym_LBRACE,
    ACTIONS(262), 1,
      sym_qualid,
    STATE(158), 1,
      sym_unncmp,
    STATE(180), 1,
      sym_bareid,
    STATE(183), 1,
      sym_typeid,
    STATE(299), 1,
      sym_unnbody,
  [5277] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_SLASH,
    ACTIONS(475), 1,
      anon_sym_at,
    ACTIONS(264), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [5296] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_AT,
    ACTIONS(477), 8,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [5313] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_PERCENT,
    STATE(131), 1,
      sym_bareid,
    STATE(248), 1,
      sym_mod_apply,
    STATE(314), 1,
      sym_mod_ref,
    STATE(318), 1,
      sym_choice_list,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
    STATE(156), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5340] = 9,
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
    STATE(74), 1,
      sym_bareid,
    STATE(202), 1,
      sym_update,
    STATE(260), 1,
      sym_id,
    STATE(352), 1,
      sym_step_or_update_lhs,
  [5368] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_SLASH,
    STATE(57), 1,
      sym_binop,
    ACTIONS(481), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
    ACTIONS(238), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [5388] = 9,
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
    STATE(74), 1,
      sym_bareid,
    STATE(255), 1,
      sym_setting,
    STATE(347), 1,
      sym_setting_list,
    STATE(351), 1,
      sym_id,
  [5416] = 9,
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
    STATE(74), 1,
      sym_bareid,
    STATE(202), 1,
      sym_step,
    STATE(260), 1,
      sym_id,
    STATE(345), 1,
      sym_step_or_update_lhs,
  [5444] = 9,
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
    STATE(74), 1,
      sym_bareid,
    STATE(255), 1,
      sym_setting,
    STATE(351), 1,
      sym_id,
    STATE(374), 1,
      sym_setting_list,
  [5472] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_SLASH,
    STATE(57), 1,
      sym_binop,
    ACTIONS(483), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(238), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [5492] = 9,
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
    STATE(74), 1,
      sym_bareid,
    STATE(255), 1,
      sym_setting,
    STATE(351), 1,
      sym_id,
    STATE(367), 1,
      sym_setting_list,
  [5520] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_PERCENT,
    STATE(131), 1,
      sym_bareid,
    STATE(314), 1,
      sym_mod_ref,
    STATE(372), 1,
      sym_mod_apply,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
    STATE(156), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5544] = 9,
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
    STATE(74), 1,
      sym_bareid,
    STATE(255), 1,
      sym_setting,
    STATE(351), 1,
      sym_id,
    STATE(353), 1,
      sym_setting_list,
  [5572] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(252), 1,
      anon_sym_LBRACE,
    ACTIONS(262), 1,
      sym_qualid,
    STATE(180), 1,
      sym_bareid,
    STATE(183), 1,
      sym_typeid,
    STATE(204), 1,
      sym_unncmp,
  [5600] = 2,
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
  [5614] = 9,
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
    STATE(74), 1,
      sym_bareid,
    STATE(255), 1,
      sym_setting,
    STATE(351), 1,
      sym_id,
    STATE(366), 1,
      sym_setting_list,
  [5642] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_PERCENT,
    STATE(131), 1,
      sym_bareid,
    STATE(222), 1,
      sym_mod_ref,
    STATE(283), 1,
      sym_mod_refs,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
    STATE(156), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5666] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_SLASH,
    STATE(57), 1,
      sym_binop,
    ACTIONS(487), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
    ACTIONS(238), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [5686] = 9,
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
    STATE(74), 1,
      sym_bareid,
    STATE(176), 1,
      sym_step,
    STATE(260), 1,
      sym_id,
    STATE(386), 1,
      sym_step_or_update_lhs,
  [5714] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_PERCENT,
    STATE(131), 1,
      sym_bareid,
    STATE(305), 1,
      sym_mod_apply,
    STATE(314), 1,
      sym_mod_ref,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
    STATE(156), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5738] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_RPAREN,
    ACTIONS(491), 1,
      anon_sym_PERCENT,
    STATE(273), 1,
      sym_val_or_model_program,
    STATE(282), 1,
      sym_mod_ref_rename,
    STATE(284), 1,
      sym_bareid,
    STATE(324), 1,
      sym_vom_param_list,
    ACTIONS(280), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [5764] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_PERCENT,
    STATE(131), 1,
      sym_bareid,
    STATE(314), 1,
      sym_mod_ref,
    STATE(375), 1,
      sym_mod_apply,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
    STATE(156), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5788] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_PERCENT,
    ACTIONS(493), 1,
      anon_sym_RPAREN,
    STATE(273), 1,
      sym_val_or_model_program,
    STATE(282), 1,
      sym_mod_ref_rename,
    STATE(284), 1,
      sym_bareid,
    STATE(358), 1,
      sym_vom_param_list,
    ACTIONS(280), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [5814] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_PERCENT,
    STATE(131), 1,
      sym_bareid,
    STATE(222), 1,
      sym_mod_ref,
    STATE(285), 1,
      sym_mod_refs,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
    STATE(156), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5838] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 7,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [5851] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_COMMA,
    STATE(157), 1,
      aux_sym_func_term_list_repeat1,
    ACTIONS(497), 5,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [5868] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_PLUS,
    STATE(160), 1,
      aux_sym_unnbody_repeat1,
    ACTIONS(502), 5,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [5885] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 7,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [5898] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_PLUS,
    STATE(173), 1,
      aux_sym_unnbody_repeat1,
    ACTIONS(508), 5,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [5915] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_PERCENT,
    STATE(131), 1,
      sym_bareid,
    STATE(236), 1,
      sym_mod_ref,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
    STATE(156), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5936] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_PERCENT,
    STATE(131), 1,
      sym_bareid,
    STATE(228), 1,
      sym_mod_ref,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
    STATE(156), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5957] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_SLASH,
    ACTIONS(510), 1,
      anon_sym_DOT,
    STATE(57), 1,
      sym_binop,
    ACTIONS(238), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [5976] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_COMMA,
    STATE(168), 1,
      aux_sym_func_term_list_repeat1,
    ACTIONS(512), 5,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [5993] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_PERCENT,
    STATE(131), 1,
      sym_bareid,
    STATE(245), 1,
      sym_mod_ref,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
    STATE(156), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [6014] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 7,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [6027] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_SLASH,
    ACTIONS(518), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      sym_binop,
    ACTIONS(238), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [6046] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_COMMA,
    STATE(157), 1,
      aux_sym_func_term_list_repeat1,
    ACTIONS(520), 5,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [6063] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_SLASH,
    ACTIONS(522), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      sym_binop,
    ACTIONS(238), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [6082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 7,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [6095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [6108] = 8,
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
    STATE(74), 1,
      sym_bareid,
    STATE(289), 1,
      sym_setting,
    STATE(351), 1,
      sym_id,
  [6133] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_PLUS,
    STATE(173), 1,
      aux_sym_unnbody_repeat1,
    ACTIONS(528), 5,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [6150] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [6162] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [6174] = 3,
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
  [6188] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 3,
      anon_sym_LBRACE,
      aux_sym_bareid_token2,
      sym_qualid,
    ACTIONS(543), 3,
      anon_sym_any,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
  [6202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [6214] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [6226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_PLUS,
  [6238] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_PERCENT,
    STATE(258), 1,
      sym_mod_ref_rename,
    STATE(311), 1,
      sym_bareid,
    STATE(312), 1,
      sym_model_param_list,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [6258] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_COLON,
    ACTIONS(549), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_PLUS,
  [6272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_PLUS,
  [6284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [6296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [6308] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [6320] = 7,
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
    STATE(74), 1,
      sym_bareid,
    STATE(304), 1,
      sym_id,
  [6342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [6354] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [6366] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [6378] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [6390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [6402] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_boot,
    ACTIONS(411), 1,
      anon_sym_property,
    STATE(197), 1,
      sym_machine_prop,
    STATE(205), 1,
      sym_machine_sentence,
    ACTIONS(409), 2,
      anon_sym_initially,
      anon_sym_next,
  [6422] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 2,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(563), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_bareid_token2,
      sym_qualid,
  [6436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_PLUS,
  [6448] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_PERCENT,
    STATE(275), 1,
      sym_val_or_model_program,
    STATE(282), 1,
      sym_mod_ref_rename,
    STATE(284), 1,
      sym_bareid,
    ACTIONS(280), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [6468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [6480] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 2,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(577), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_bareid_token2,
      sym_qualid,
  [6494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 6,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [6506] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 6,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [6518] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [6530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [6542] = 7,
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
    STATE(74), 1,
      sym_bareid,
    STATE(329), 1,
      sym_id,
  [6564] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_PLUS,
  [6576] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [6588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [6600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [6612] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [6624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [6636] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_digits,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(98), 1,
      sym_string,
    STATE(286), 1,
      sym_constant,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [6656] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_LPAREN,
    STATE(201), 1,
      sym_transform_rest,
    STATE(263), 1,
      sym_transform_sig,
    STATE(341), 1,
      sym_trans_sig_in,
    STATE(343), 1,
      sym_transform_sig_config,
  [6675] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_LPAREN,
    STATE(208), 1,
      sym_tsystem_rest,
    STATE(263), 1,
      sym_transform_sig,
    STATE(331), 1,
      sym_transform_sig_config,
    STATE(341), 1,
      sym_trans_sig_in,
  [6694] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_COMMA,
    STATE(219), 1,
      aux_sym_fields_repeat1,
    ACTIONS(597), 3,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [6709] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_COMMA,
    STATE(215), 1,
      aux_sym_body_repeat1,
    ACTIONS(601), 3,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [6724] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_COMMA,
    STATE(217), 1,
      aux_sym_body_repeat1,
    ACTIONS(605), 3,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [6739] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_COMMA,
    STATE(220), 1,
      aux_sym_mod_refs_repeat1,
    ACTIONS(607), 3,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LBRACK,
  [6754] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_COMMA,
    STATE(217), 1,
      aux_sym_body_repeat1,
    ACTIONS(611), 3,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [6769] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_COMMA,
    STATE(213), 1,
      aux_sym_fields_repeat1,
    ACTIONS(616), 3,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [6784] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_COMMA,
    STATE(219), 1,
      aux_sym_fields_repeat1,
    ACTIONS(618), 3,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [6799] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_COMMA,
    STATE(220), 1,
      aux_sym_mod_refs_repeat1,
    ACTIONS(623), 3,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LBRACK,
  [6814] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_PERCENT,
    STATE(307), 1,
      sym_mod_ref_rename,
    STATE(311), 1,
      sym_bareid,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [6831] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_COMMA,
    STATE(216), 1,
      aux_sym_mod_refs_repeat1,
    ACTIONS(628), 3,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LBRACK,
  [6846] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(419), 1,
      anon_sym_PERCENT,
    ACTIONS(630), 1,
      anon_sym_system,
    STATE(211), 1,
      sym_bareid,
  [6865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [6875] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [6885] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_PERCENT,
    STATE(356), 1,
      sym_bareid,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [6899] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_PERCENT,
    STATE(108), 1,
      sym_bareid,
    ACTIONS(280), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [6913] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 4,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_COMMA,
      anon_sym_LBRACK,
  [6923] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [6933] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [6943] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
    ACTIONS(640), 2,
      anon_sym_includes,
      anon_sym_extends,
  [6955] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_PERCENT,
    STATE(134), 1,
      sym_bareid,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [6969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [6979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 4,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
  [6989] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_machine,
    ACTIONS(644), 1,
      anon_sym_LBRACE,
    STATE(238), 2,
      sym_machine_sig,
      aux_sym_machine_sig_config_repeat1,
  [7003] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 4,
      anon_sym_LBRACE,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [7013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [7023] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      anon_sym_LBRACE,
    ACTIONS(650), 1,
      anon_sym_machine,
    STATE(238), 2,
      sym_machine_sig,
      aux_sym_machine_sig_config_repeat1,
  [7037] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_PERCENT,
    STATE(276), 1,
      sym_bareid,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [7051] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      anon_sym_SEMI,
    STATE(241), 1,
      aux_sym_body_list_repeat1,
    ACTIONS(653), 2,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [7065] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      anon_sym_SEMI,
    STATE(246), 1,
      aux_sym_body_list_repeat1,
    ACTIONS(657), 2,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [7079] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_PERCENT,
    STATE(323), 1,
      sym_bareid,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [7093] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_PERCENT,
    STATE(346), 1,
      sym_bareid,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [7107] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [7117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 4,
      anon_sym_LBRACE,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [7127] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_SEMI,
    STATE(246), 1,
      aux_sym_body_list_repeat1,
    ACTIONS(661), 2,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [7141] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_PERCENT,
    STATE(212), 1,
      sym_bareid,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [7155] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_DOT,
    ACTIONS(668), 1,
      anon_sym_SEMI,
    STATE(249), 1,
      aux_sym_choice_list_repeat1,
  [7168] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_SEMI,
    ACTIONS(670), 1,
      anon_sym_DOT,
    STATE(264), 1,
      aux_sym_choice_list_repeat1,
  [7181] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 1,
      anon_sym_RBRACE,
    ACTIONS(674), 1,
      anon_sym_COMMA,
    STATE(271), 1,
      aux_sym_enum_list_repeat1,
  [7194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 3,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [7203] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_RPAREN,
    ACTIONS(678), 1,
      anon_sym_COMMA,
    STATE(270), 1,
      aux_sym_mod_arg_list_repeat1,
  [7216] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      anon_sym_EQ,
    ACTIONS(682), 1,
      anon_sym_COMMA,
    STATE(253), 1,
      aux_sym_step_or_update_lhs_repeat1,
  [7229] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(104), 1,
      sym_maparrow,
    ACTIONS(685), 2,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [7240] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      anon_sym_COMMA,
    ACTIONS(689), 1,
      anon_sym_RBRACK,
    STATE(261), 1,
      aux_sym_setting_list_repeat1,
  [7253] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_RPAREN,
    ACTIONS(693), 1,
      anon_sym_COMMA,
    STATE(274), 1,
      aux_sym_vom_param_list_repeat1,
  [7266] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      anon_sym_RPAREN,
    ACTIONS(697), 1,
      anon_sym_COMMA,
    STATE(257), 1,
      aux_sym_model_param_list_repeat1,
  [7279] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      anon_sym_RPAREN,
    ACTIONS(702), 1,
      anon_sym_COMMA,
    STATE(267), 1,
      aux_sym_model_param_list_repeat1,
  [7292] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      anon_sym_COMMA,
    ACTIONS(704), 1,
      anon_sym_RPAREN,
    STATE(252), 1,
      aux_sym_mod_arg_list_repeat1,
  [7305] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      anon_sym_EQ,
    ACTIONS(708), 1,
      anon_sym_COMMA,
    STATE(268), 1,
      aux_sym_step_or_update_lhs_repeat1,
  [7318] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      anon_sym_COMMA,
    ACTIONS(710), 1,
      anon_sym_RBRACK,
    STATE(269), 1,
      aux_sym_setting_list_repeat1,
  [7331] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 1,
      anon_sym_DOT_DOT,
    ACTIONS(712), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [7342] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(716), 1,
      anon_sym_LBRACE,
    STATE(319), 1,
      sym_config,
  [7355] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_DOT,
    ACTIONS(720), 1,
      anon_sym_SEMI,
    STATE(264), 1,
      aux_sym_choice_list_repeat1,
  [7368] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      anon_sym_COMMA,
    ACTIONS(723), 1,
      anon_sym_RBRACE,
    STATE(250), 1,
      aux_sym_enum_list_repeat1,
  [7381] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(725), 1,
      anon_sym_LBRACE,
    STATE(360), 1,
      sym_config,
  [7394] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_COMMA,
    ACTIONS(727), 1,
      anon_sym_RPAREN,
    STATE(257), 1,
      aux_sym_model_param_list_repeat1,
  [7407] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_COMMA,
    ACTIONS(729), 1,
      anon_sym_EQ,
    STATE(253), 1,
      aux_sym_step_or_update_lhs_repeat1,
  [7420] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      anon_sym_COMMA,
    ACTIONS(734), 1,
      anon_sym_RBRACK,
    STATE(269), 1,
      aux_sym_setting_list_repeat1,
  [7433] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_RPAREN,
    ACTIONS(738), 1,
      anon_sym_COMMA,
    STATE(270), 1,
      aux_sym_mod_arg_list_repeat1,
  [7446] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      anon_sym_RBRACE,
    ACTIONS(743), 1,
      anon_sym_COMMA,
    STATE(271), 1,
      aux_sym_enum_list_repeat1,
  [7459] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(746), 1,
      anon_sym_LBRACE,
    STATE(350), 1,
      sym_config,
  [7472] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      anon_sym_COMMA,
    ACTIONS(748), 1,
      anon_sym_RPAREN,
    STATE(256), 1,
      aux_sym_vom_param_list_repeat1,
  [7485] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_RPAREN,
    ACTIONS(752), 1,
      anon_sym_COMMA,
    STATE(274), 1,
      aux_sym_vom_param_list_repeat1,
  [7498] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7506] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      anon_sym_LPAREN,
    STATE(309), 1,
      sym_machine_sig_in,
  [7516] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 1,
      anon_sym_RBRACE,
    ACTIONS(759), 1,
      anon_sym_PIPE,
  [7526] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      anon_sym_DOT,
    ACTIONS(763), 1,
      anon_sym_COLON_DASH,
  [7536] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 1,
      anon_sym_DOT,
    ACTIONS(767), 1,
      anon_sym_COLON_DASH,
  [7546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [7554] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_DOT,
    ACTIONS(773), 1,
      anon_sym_COMMA,
  [7564] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(775), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7572] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 2,
      anon_sym_LBRACE,
      anon_sym_machine,
  [7580] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_COLON_COLON,
    ACTIONS(779), 1,
      anon_sym_COLON,
  [7590] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [7598] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7606] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 1,
      anon_sym_DOT,
    ACTIONS(787), 1,
      anon_sym_COMMA,
  [7616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [7624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7632] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [7640] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7648] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7656] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [7664] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 1,
      anon_sym_DASH,
    ACTIONS(797), 1,
      sym_digits,
  [7674] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(291), 1,
      sym_string,
  [7684] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [7692] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [7700] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(159), 1,
      sym_string,
  [7710] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7718] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [7726] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [7734] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      anon_sym_DASH,
    ACTIONS(807), 1,
      sym_digits,
  [7744] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [7752] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 2,
      anon_sym_EQ,
      anon_sym_COMMA,
  [7760] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [7768] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [7776] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7784] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(146), 1,
      sym_string,
  [7794] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_of,
  [7801] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_DOT,
  [7808] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_COLON_COLON,
  [7815] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(817), 1,
      anon_sym_RPAREN,
  [7822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 1,
      anon_sym_LPAREN,
  [7829] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      anon_sym_LPAREN,
  [7836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_RPAREN,
  [7843] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_RBRACE,
  [7850] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 1,
      sym_digits,
  [7857] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_DOT,
  [7864] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 1,
      anon_sym_LBRACE,
  [7871] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_DOT,
  [7878] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 1,
      anon_sym_RBRACE,
  [7885] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_DOT,
  [7892] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_EQ,
  [7899] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      anon_sym_RPAREN,
  [7906] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 1,
      anon_sym_DOT,
  [7913] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_DOT,
  [7920] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_LPAREN,
  [7927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      anon_sym_returns,
  [7934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 1,
      anon_sym_DOT,
  [7941] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      anon_sym_DOT,
  [7948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(853), 1,
      anon_sym_LBRACE,
  [7955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      sym_digits,
  [7962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      anon_sym_DOT_DOT,
  [7969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_LPAREN,
  [7976] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(861), 1,
      anon_sym_RPAREN,
  [7983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_RBRACE,
  [7990] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_LPAREN,
  [7997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 1,
      sym_digits,
  [8004] = 2,
    ACTIONS(869), 1,
      aux_sym_string_token1,
    ACTIONS(871), 1,
      sym_comment,
  [8011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      anon_sym_DOT,
  [8018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(875), 1,
      anon_sym_returns,
  [8025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      anon_sym_RBRACE,
  [8032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      anon_sym_LBRACE,
  [8039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      anon_sym_RBRACE,
  [8046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      anon_sym_EQ,
  [8053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(885), 1,
      anon_sym_of,
  [8060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(887), 1,
      anon_sym_RBRACK,
  [8067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 1,
      anon_sym_RPAREN,
  [8074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 1,
      aux_sym_bareid_token1,
  [8081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 1,
      anon_sym_LBRACE,
  [8088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 1,
      anon_sym_EQ,
  [8095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_EQ,
  [8102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 1,
      anon_sym_RBRACK,
  [8109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(901), 1,
      anon_sym_RPAREN,
  [8116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 1,
      anon_sym_returns,
  [8123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 1,
      anon_sym_of,
  [8130] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      anon_sym_RPAREN,
  [8137] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(909), 1,
      anon_sym_RPAREN,
  [8144] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 1,
      anon_sym_of,
  [8151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 1,
      anon_sym_LBRACE,
  [8158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 1,
      anon_sym_RBRACE,
  [8165] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      anon_sym_DOT,
  [8172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(919), 1,
      anon_sym_LBRACE,
  [8179] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 1,
      aux_sym_bareid_token1,
  [8186] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(923), 1,
      anon_sym_RBRACE,
  [8193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(925), 1,
      anon_sym_RBRACK,
  [8200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(927), 1,
      anon_sym_RBRACK,
  [8207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(929), 1,
      anon_sym_DQUOTE,
  [8214] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 1,
      anon_sym_RPAREN,
  [8221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(933), 1,
      anon_sym_DOT,
  [8228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 1,
      anon_sym_DOT,
  [8235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      anon_sym_DOT,
  [8242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      aux_sym_bareid_token1,
  [8249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(941), 1,
      anon_sym_RBRACK,
  [8256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 1,
      anon_sym_DOT,
  [8263] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(945), 1,
      anon_sym_DQUOTE,
  [8270] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 1,
      anon_sym_LBRACE,
  [8277] = 2,
    ACTIONS(871), 1,
      sym_comment,
    ACTIONS(949), 1,
      aux_sym_string_token1,
  [8284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(951), 1,
      anon_sym_LBRACE,
  [8291] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(953), 1,
      anon_sym_DOT,
  [8298] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(955), 1,
      ts_builtin_sym_end,
  [8305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 1,
      anon_sym_of,
  [8312] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(959), 1,
      aux_sym_model_contract_token1,
  [8319] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 1,
      aux_sym_model_contract_token1,
  [8326] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(963), 1,
      anon_sym_model,
  [8333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(965), 1,
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
  [SMALL_STATE(17)] = 1075,
  [SMALL_STATE(18)] = 1150,
  [SMALL_STATE(19)] = 1215,
  [SMALL_STATE(20)] = 1280,
  [SMALL_STATE(21)] = 1345,
  [SMALL_STATE(22)] = 1400,
  [SMALL_STATE(23)] = 1455,
  [SMALL_STATE(24)] = 1520,
  [SMALL_STATE(25)] = 1585,
  [SMALL_STATE(26)] = 1650,
  [SMALL_STATE(27)] = 1715,
  [SMALL_STATE(28)] = 1780,
  [SMALL_STATE(29)] = 1845,
  [SMALL_STATE(30)] = 1910,
  [SMALL_STATE(31)] = 1975,
  [SMALL_STATE(32)] = 2040,
  [SMALL_STATE(33)] = 2095,
  [SMALL_STATE(34)] = 2150,
  [SMALL_STATE(35)] = 2212,
  [SMALL_STATE(36)] = 2274,
  [SMALL_STATE(37)] = 2336,
  [SMALL_STATE(38)] = 2363,
  [SMALL_STATE(39)] = 2422,
  [SMALL_STATE(40)] = 2481,
  [SMALL_STATE(41)] = 2517,
  [SMALL_STATE(42)] = 2547,
  [SMALL_STATE(43)] = 2573,
  [SMALL_STATE(44)] = 2629,
  [SMALL_STATE(45)] = 2655,
  [SMALL_STATE(46)] = 2707,
  [SMALL_STATE(47)] = 2759,
  [SMALL_STATE(48)] = 2815,
  [SMALL_STATE(49)] = 2841,
  [SMALL_STATE(50)] = 2868,
  [SMALL_STATE(51)] = 2921,
  [SMALL_STATE(52)] = 2974,
  [SMALL_STATE(53)] = 3027,
  [SMALL_STATE(54)] = 3058,
  [SMALL_STATE(55)] = 3111,
  [SMALL_STATE(56)] = 3164,
  [SMALL_STATE(57)] = 3217,
  [SMALL_STATE(58)] = 3270,
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
  [SMALL_STATE(77)] = 3822,
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
  [SMALL_STATE(89)] = 4108,
  [SMALL_STATE(90)] = 4130,
  [SMALL_STATE(91)] = 4152,
  [SMALL_STATE(92)] = 4174,
  [SMALL_STATE(93)] = 4196,
  [SMALL_STATE(94)] = 4237,
  [SMALL_STATE(95)] = 4260,
  [SMALL_STATE(96)] = 4295,
  [SMALL_STATE(97)] = 4320,
  [SMALL_STATE(98)] = 4341,
  [SMALL_STATE(99)] = 4362,
  [SMALL_STATE(100)] = 4385,
  [SMALL_STATE(101)] = 4426,
  [SMALL_STATE(102)] = 4446,
  [SMALL_STATE(103)] = 4466,
  [SMALL_STATE(104)] = 4506,
  [SMALL_STATE(105)] = 4546,
  [SMALL_STATE(106)] = 4586,
  [SMALL_STATE(107)] = 4622,
  [SMALL_STATE(108)] = 4662,
  [SMALL_STATE(109)] = 4696,
  [SMALL_STATE(110)] = 4716,
  [SMALL_STATE(111)] = 4736,
  [SMALL_STATE(112)] = 4756,
  [SMALL_STATE(113)] = 4780,
  [SMALL_STATE(114)] = 4817,
  [SMALL_STATE(115)] = 4850,
  [SMALL_STATE(116)] = 4873,
  [SMALL_STATE(117)] = 4906,
  [SMALL_STATE(118)] = 4928,
  [SMALL_STATE(119)] = 4950,
  [SMALL_STATE(120)] = 4970,
  [SMALL_STATE(121)] = 4990,
  [SMALL_STATE(122)] = 5008,
  [SMALL_STATE(123)] = 5042,
  [SMALL_STATE(124)] = 5060,
  [SMALL_STATE(125)] = 5082,
  [SMALL_STATE(126)] = 5110,
  [SMALL_STATE(127)] = 5128,
  [SMALL_STATE(128)] = 5146,
  [SMALL_STATE(129)] = 5177,
  [SMALL_STATE(130)] = 5208,
  [SMALL_STATE(131)] = 5227,
  [SMALL_STATE(132)] = 5246,
  [SMALL_STATE(133)] = 5277,
  [SMALL_STATE(134)] = 5296,
  [SMALL_STATE(135)] = 5313,
  [SMALL_STATE(136)] = 5340,
  [SMALL_STATE(137)] = 5368,
  [SMALL_STATE(138)] = 5388,
  [SMALL_STATE(139)] = 5416,
  [SMALL_STATE(140)] = 5444,
  [SMALL_STATE(141)] = 5472,
  [SMALL_STATE(142)] = 5492,
  [SMALL_STATE(143)] = 5520,
  [SMALL_STATE(144)] = 5544,
  [SMALL_STATE(145)] = 5572,
  [SMALL_STATE(146)] = 5600,
  [SMALL_STATE(147)] = 5614,
  [SMALL_STATE(148)] = 5642,
  [SMALL_STATE(149)] = 5666,
  [SMALL_STATE(150)] = 5686,
  [SMALL_STATE(151)] = 5714,
  [SMALL_STATE(152)] = 5738,
  [SMALL_STATE(153)] = 5764,
  [SMALL_STATE(154)] = 5788,
  [SMALL_STATE(155)] = 5814,
  [SMALL_STATE(156)] = 5838,
  [SMALL_STATE(157)] = 5851,
  [SMALL_STATE(158)] = 5868,
  [SMALL_STATE(159)] = 5885,
  [SMALL_STATE(160)] = 5898,
  [SMALL_STATE(161)] = 5915,
  [SMALL_STATE(162)] = 5936,
  [SMALL_STATE(163)] = 5957,
  [SMALL_STATE(164)] = 5976,
  [SMALL_STATE(165)] = 5993,
  [SMALL_STATE(166)] = 6014,
  [SMALL_STATE(167)] = 6027,
  [SMALL_STATE(168)] = 6046,
  [SMALL_STATE(169)] = 6063,
  [SMALL_STATE(170)] = 6082,
  [SMALL_STATE(171)] = 6095,
  [SMALL_STATE(172)] = 6108,
  [SMALL_STATE(173)] = 6133,
  [SMALL_STATE(174)] = 6150,
  [SMALL_STATE(175)] = 6162,
  [SMALL_STATE(176)] = 6174,
  [SMALL_STATE(177)] = 6188,
  [SMALL_STATE(178)] = 6202,
  [SMALL_STATE(179)] = 6214,
  [SMALL_STATE(180)] = 6226,
  [SMALL_STATE(181)] = 6238,
  [SMALL_STATE(182)] = 6258,
  [SMALL_STATE(183)] = 6272,
  [SMALL_STATE(184)] = 6284,
  [SMALL_STATE(185)] = 6296,
  [SMALL_STATE(186)] = 6308,
  [SMALL_STATE(187)] = 6320,
  [SMALL_STATE(188)] = 6342,
  [SMALL_STATE(189)] = 6354,
  [SMALL_STATE(190)] = 6366,
  [SMALL_STATE(191)] = 6378,
  [SMALL_STATE(192)] = 6390,
  [SMALL_STATE(193)] = 6402,
  [SMALL_STATE(194)] = 6422,
  [SMALL_STATE(195)] = 6436,
  [SMALL_STATE(196)] = 6448,
  [SMALL_STATE(197)] = 6468,
  [SMALL_STATE(198)] = 6480,
  [SMALL_STATE(199)] = 6494,
  [SMALL_STATE(200)] = 6506,
  [SMALL_STATE(201)] = 6518,
  [SMALL_STATE(202)] = 6530,
  [SMALL_STATE(203)] = 6542,
  [SMALL_STATE(204)] = 6564,
  [SMALL_STATE(205)] = 6576,
  [SMALL_STATE(206)] = 6588,
  [SMALL_STATE(207)] = 6600,
  [SMALL_STATE(208)] = 6612,
  [SMALL_STATE(209)] = 6624,
  [SMALL_STATE(210)] = 6636,
  [SMALL_STATE(211)] = 6656,
  [SMALL_STATE(212)] = 6675,
  [SMALL_STATE(213)] = 6694,
  [SMALL_STATE(214)] = 6709,
  [SMALL_STATE(215)] = 6724,
  [SMALL_STATE(216)] = 6739,
  [SMALL_STATE(217)] = 6754,
  [SMALL_STATE(218)] = 6769,
  [SMALL_STATE(219)] = 6784,
  [SMALL_STATE(220)] = 6799,
  [SMALL_STATE(221)] = 6814,
  [SMALL_STATE(222)] = 6831,
  [SMALL_STATE(223)] = 6846,
  [SMALL_STATE(224)] = 6865,
  [SMALL_STATE(225)] = 6875,
  [SMALL_STATE(226)] = 6885,
  [SMALL_STATE(227)] = 6899,
  [SMALL_STATE(228)] = 6913,
  [SMALL_STATE(229)] = 6923,
  [SMALL_STATE(230)] = 6933,
  [SMALL_STATE(231)] = 6943,
  [SMALL_STATE(232)] = 6955,
  [SMALL_STATE(233)] = 6969,
  [SMALL_STATE(234)] = 6979,
  [SMALL_STATE(235)] = 6989,
  [SMALL_STATE(236)] = 7003,
  [SMALL_STATE(237)] = 7013,
  [SMALL_STATE(238)] = 7023,
  [SMALL_STATE(239)] = 7037,
  [SMALL_STATE(240)] = 7051,
  [SMALL_STATE(241)] = 7065,
  [SMALL_STATE(242)] = 7079,
  [SMALL_STATE(243)] = 7093,
  [SMALL_STATE(244)] = 7107,
  [SMALL_STATE(245)] = 7117,
  [SMALL_STATE(246)] = 7127,
  [SMALL_STATE(247)] = 7141,
  [SMALL_STATE(248)] = 7155,
  [SMALL_STATE(249)] = 7168,
  [SMALL_STATE(250)] = 7181,
  [SMALL_STATE(251)] = 7194,
  [SMALL_STATE(252)] = 7203,
  [SMALL_STATE(253)] = 7216,
  [SMALL_STATE(254)] = 7229,
  [SMALL_STATE(255)] = 7240,
  [SMALL_STATE(256)] = 7253,
  [SMALL_STATE(257)] = 7266,
  [SMALL_STATE(258)] = 7279,
  [SMALL_STATE(259)] = 7292,
  [SMALL_STATE(260)] = 7305,
  [SMALL_STATE(261)] = 7318,
  [SMALL_STATE(262)] = 7331,
  [SMALL_STATE(263)] = 7342,
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
  [SMALL_STATE(276)] = 7506,
  [SMALL_STATE(277)] = 7516,
  [SMALL_STATE(278)] = 7526,
  [SMALL_STATE(279)] = 7536,
  [SMALL_STATE(280)] = 7546,
  [SMALL_STATE(281)] = 7554,
  [SMALL_STATE(282)] = 7564,
  [SMALL_STATE(283)] = 7572,
  [SMALL_STATE(284)] = 7580,
  [SMALL_STATE(285)] = 7590,
  [SMALL_STATE(286)] = 7598,
  [SMALL_STATE(287)] = 7606,
  [SMALL_STATE(288)] = 7616,
  [SMALL_STATE(289)] = 7624,
  [SMALL_STATE(290)] = 7632,
  [SMALL_STATE(291)] = 7640,
  [SMALL_STATE(292)] = 7648,
  [SMALL_STATE(293)] = 7656,
  [SMALL_STATE(294)] = 7664,
  [SMALL_STATE(295)] = 7674,
  [SMALL_STATE(296)] = 7684,
  [SMALL_STATE(297)] = 7692,
  [SMALL_STATE(298)] = 7700,
  [SMALL_STATE(299)] = 7710,
  [SMALL_STATE(300)] = 7718,
  [SMALL_STATE(301)] = 7726,
  [SMALL_STATE(302)] = 7734,
  [SMALL_STATE(303)] = 7744,
  [SMALL_STATE(304)] = 7752,
  [SMALL_STATE(305)] = 7760,
  [SMALL_STATE(306)] = 7768,
  [SMALL_STATE(307)] = 7776,
  [SMALL_STATE(308)] = 7784,
  [SMALL_STATE(309)] = 7794,
  [SMALL_STATE(310)] = 7801,
  [SMALL_STATE(311)] = 7808,
  [SMALL_STATE(312)] = 7815,
  [SMALL_STATE(313)] = 7822,
  [SMALL_STATE(314)] = 7829,
  [SMALL_STATE(315)] = 7836,
  [SMALL_STATE(316)] = 7843,
  [SMALL_STATE(317)] = 7850,
  [SMALL_STATE(318)] = 7857,
  [SMALL_STATE(319)] = 7864,
  [SMALL_STATE(320)] = 7871,
  [SMALL_STATE(321)] = 7878,
  [SMALL_STATE(322)] = 7885,
  [SMALL_STATE(323)] = 7892,
  [SMALL_STATE(324)] = 7899,
  [SMALL_STATE(325)] = 7906,
  [SMALL_STATE(326)] = 7913,
  [SMALL_STATE(327)] = 7920,
  [SMALL_STATE(328)] = 7927,
  [SMALL_STATE(329)] = 7934,
  [SMALL_STATE(330)] = 7941,
  [SMALL_STATE(331)] = 7948,
  [SMALL_STATE(332)] = 7955,
  [SMALL_STATE(333)] = 7962,
  [SMALL_STATE(334)] = 7969,
  [SMALL_STATE(335)] = 7976,
  [SMALL_STATE(336)] = 7983,
  [SMALL_STATE(337)] = 7990,
  [SMALL_STATE(338)] = 7997,
  [SMALL_STATE(339)] = 8004,
  [SMALL_STATE(340)] = 8011,
  [SMALL_STATE(341)] = 8018,
  [SMALL_STATE(342)] = 8025,
  [SMALL_STATE(343)] = 8032,
  [SMALL_STATE(344)] = 8039,
  [SMALL_STATE(345)] = 8046,
  [SMALL_STATE(346)] = 8053,
  [SMALL_STATE(347)] = 8060,
  [SMALL_STATE(348)] = 8067,
  [SMALL_STATE(349)] = 8074,
  [SMALL_STATE(350)] = 8081,
  [SMALL_STATE(351)] = 8088,
  [SMALL_STATE(352)] = 8095,
  [SMALL_STATE(353)] = 8102,
  [SMALL_STATE(354)] = 8109,
  [SMALL_STATE(355)] = 8116,
  [SMALL_STATE(356)] = 8123,
  [SMALL_STATE(357)] = 8130,
  [SMALL_STATE(358)] = 8137,
  [SMALL_STATE(359)] = 8144,
  [SMALL_STATE(360)] = 8151,
  [SMALL_STATE(361)] = 8158,
  [SMALL_STATE(362)] = 8165,
  [SMALL_STATE(363)] = 8172,
  [SMALL_STATE(364)] = 8179,
  [SMALL_STATE(365)] = 8186,
  [SMALL_STATE(366)] = 8193,
  [SMALL_STATE(367)] = 8200,
  [SMALL_STATE(368)] = 8207,
  [SMALL_STATE(369)] = 8214,
  [SMALL_STATE(370)] = 8221,
  [SMALL_STATE(371)] = 8228,
  [SMALL_STATE(372)] = 8235,
  [SMALL_STATE(373)] = 8242,
  [SMALL_STATE(374)] = 8249,
  [SMALL_STATE(375)] = 8256,
  [SMALL_STATE(376)] = 8263,
  [SMALL_STATE(377)] = 8270,
  [SMALL_STATE(378)] = 8277,
  [SMALL_STATE(379)] = 8284,
  [SMALL_STATE(380)] = 8291,
  [SMALL_STATE(381)] = 8298,
  [SMALL_STATE(382)] = 8305,
  [SMALL_STATE(383)] = 8312,
  [SMALL_STATE(384)] = 8319,
  [SMALL_STATE(385)] = 8326,
  [SMALL_STATE(386)] = 8333,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(25),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(52),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(30),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(147),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(126),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(98),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(98),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(339),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(349),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(14),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(14),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(74),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_body, 1),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(25),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(52),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(24),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(140),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(126),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(98),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(98),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(339),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(349),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(14),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(14),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(74),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dom_sentences, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(52),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(27),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(16),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(147),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(126),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(98),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(98),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(339),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(349),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(14),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(14),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(74),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_body, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bareid, 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bareid, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bareid, 2),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bareid, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(239),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(385),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(226),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(223),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(227),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 1),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 1),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term, 2),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_term, 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term, 3),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_term, 3),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term, 4, .production_id = 2),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_term, 4, .production_id = 2),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term, 1),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_term, 1),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_sentence_config, 1),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trans_sentence_config, 1),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_sentence_config, 2),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trans_sentence_config, 2),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl, 4, .production_id = 3),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_decl, 4, .production_id = 3),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 4),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_sentence, 3),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trans_sentence, 3),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_sentence, 1),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trans_sentence, 1),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 2),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 2),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dom_sentence, 1),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dom_sentence, 1),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_sentence, 1),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_sentence, 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_contract_conf, 1),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_contract_conf, 1),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_fact_list, 2),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_fact_list, 2),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_contract, 3),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_contract, 3),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_contract, 5),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_contract, 5),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_fact_list, 4),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_fact_list, 4),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dom_sentence, 3),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dom_sentence, 3),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_contract_conf, 2),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_contract_conf, 2),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_fact_list, 3),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_fact_list, 3),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dom_sentence_config, 2),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dom_sentence_config, 2),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dom_sentence_config, 1),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dom_sentence_config, 1),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trans_steps_repeat1, 2),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_steps_repeat1, 2), SHIFT_REPEAT(138),
  [383] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trans_steps_repeat1, 2), SHIFT_REPEAT(349),
  [386] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trans_steps_repeat1, 2), SHIFT_REPEAT(14),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_steps_repeat1, 2), SHIFT_REPEAT(14),
  [392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_steps_repeat1, 2), SHIFT_REPEAT(74),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sentence_config, 3),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sentence_config, 3),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_steps, 1),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain_sig, 2, .production_id = 1),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_or_compr, 1),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_body, 1),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_machine_body_repeat1, 2),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_machine_body_repeat1, 2), SHIFT_REPEAT(139),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_machine_body_repeat1, 2), SHIFT_REPEAT(136),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_machine_body_repeat1, 2), SHIFT_REPEAT(242),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_machine_body_repeat1, 2), SHIFT_REPEAT(142),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 4),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 2),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binop, 1),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binop, 1),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 3),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain_sig, 3, .production_id = 1),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unop, 1),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unop, 1),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relop, 1),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relop, 1),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_ref_no_rename, 1),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_ref_rename, 3, .production_id = 2),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_fact, 1),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_app_arg, 1),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_ref_rename, 5, .production_id = 2),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_fact, 3),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_ref, 1),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_term_list_repeat1, 2),
  [499] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_term_list_repeat1, 2), SHIFT_REPEAT(36),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unnbody, 1),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_ref_no_rename, 3),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unnbody, 2),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term_list, 1),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compr, 3),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term_list, 2),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compr, 5),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 3),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unnbody_repeat1, 2),
  [530] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unnbody_repeat1, 2), SHIFT_REPEAT(145),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_prop, 5),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sentence_conf, 1),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_step_config, 2),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trans_step_config, 2),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maparrow, 1),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_maparrow, 1),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tsystem_rest, 4),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeid, 1),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unncmp, 1),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain, 4),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tsystem_rest, 3),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model, 4),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain, 3),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 4),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine, 4),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 4),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model, 3),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_step, 4),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unncmp, 3),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sentence, 1),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_step_config, 1),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trans_step_config, 1),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform, 3, .production_id = 1),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sentence, 2),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sentence_conf, 2),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform_rest, 4),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform_rest, 3),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tsystem, 4),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine, 3),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fields, 2),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_refs, 2),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [613] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(39),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fields, 1),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fields_repeat1, 2),
  [620] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fields_repeat1, 2), SHIFT_REPEAT(113),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mod_refs_repeat1, 2),
  [625] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mod_refs_repeat1, 2), SHIFT_REPEAT(162),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_refs, 1),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 2),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, .production_id = 2),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_sig, 1),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sig_config, 1),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_intro, 4),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_machine_sig_config_repeat1, 2),
  [650] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_machine_sig_config_repeat1, 2), SHIFT_REPEAT(239),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_list, 1),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_list, 2),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_intro, 5),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_list_repeat1, 2),
  [663] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_list_repeat1, 2), SHIFT_REPEAT(34),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_list, 1),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_list, 2),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_list, 2),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_arg_list, 2),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_or_update_lhs_repeat1, 2),
  [682] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_step_or_update_lhs_repeat1, 2), SHIFT_REPEAT(187),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_list, 1),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vom_param_list, 2),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_model_param_list_repeat1, 2),
  [697] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_param_list_repeat1, 2), SHIFT_REPEAT(221),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_param_list, 1),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_arg_list, 1),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_or_update_lhs, 1),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_list, 2),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_cnst, 1),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform_sig_config, 1),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_list_repeat1, 2),
  [720] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_list_repeat1, 2), SHIFT_REPEAT(151),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_list, 1),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain_sig_config, 1),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_param_list, 2),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_or_update_lhs, 2),
  [731] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setting_list_repeat1, 2), SHIFT_REPEAT(172),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_setting_list_repeat1, 2),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mod_arg_list_repeat1, 2),
  [738] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mod_arg_list_repeat1, 2), SHIFT_REPEAT(47),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_list_repeat1, 2),
  [743] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_list_repeat1, 2), SHIFT_REPEAT(95),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_sig_config, 1),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vom_param_list, 1),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vom_param_list_repeat1, 2),
  [752] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vom_param_list_repeat1, 2), SHIFT_REPEAT(196),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform_sig, 5),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_val_or_model_program, 1),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sig, 5),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_sig, 3),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 5),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_app_arg, 3),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 4),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_apply, 4),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_val_or_model_program, 3, .production_id = 2),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain_sig, 4, .production_id = 1),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_apply, 3),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform_sig_config, 2),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl_body, 3),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl_body, 4),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl_body, 1),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_sig_in, 2),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_decl, 1),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [871] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl_body, 6),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_sig_config, 2),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_sig_in, 3),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sig_in, 3),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain_sig_config, 2),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [949] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [955] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sig_in, 2),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_card_spec, 1),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
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
