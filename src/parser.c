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
#define STATE_COUNT 378
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
  aux_sym_model_fact_list_repeat1 = 158,
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
  [aux_sym_model_fact_list_repeat1] = "model_fact_list_repeat1",
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
  [aux_sym_model_fact_list_repeat1] = aux_sym_model_fact_list_repeat1,
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
  [aux_sym_model_fact_list_repeat1] = {
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
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 5},
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
  [19] = {.lex_state = 147},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 147},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 147},
  [30] = {.lex_state = 147},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 14},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 11},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 14},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 14},
  [75] = {.lex_state = 14},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 14},
  [78] = {.lex_state = 14},
  [79] = {.lex_state = 12},
  [80] = {.lex_state = 14},
  [81] = {.lex_state = 14},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 12},
  [84] = {.lex_state = 12},
  [85] = {.lex_state = 14},
  [86] = {.lex_state = 14},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 12},
  [90] = {.lex_state = 14},
  [91] = {.lex_state = 12},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 14},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 14},
  [96] = {.lex_state = 12},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 14},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 14},
  [103] = {.lex_state = 14},
  [104] = {.lex_state = 9},
  [105] = {.lex_state = 14},
  [106] = {.lex_state = 14},
  [107] = {.lex_state = 9},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 3},
  [113] = {.lex_state = 14},
  [114] = {.lex_state = 9},
  [115] = {.lex_state = 9},
  [116] = {.lex_state = 9},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 9},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 14},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 9},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 9},
  [130] = {.lex_state = 14},
  [131] = {.lex_state = 9},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 147},
  [134] = {.lex_state = 147},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 147},
  [137] = {.lex_state = 14},
  [138] = {.lex_state = 9},
  [139] = {.lex_state = 14},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 147},
  [143] = {.lex_state = 9},
  [144] = {.lex_state = 147},
  [145] = {.lex_state = 147},
  [146] = {.lex_state = 12},
  [147] = {.lex_state = 12},
  [148] = {.lex_state = 12},
  [149] = {.lex_state = 14},
  [150] = {.lex_state = 9},
  [151] = {.lex_state = 12},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 147},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 12},
  [158] = {.lex_state = 147},
  [159] = {.lex_state = 12},
  [160] = {.lex_state = 4},
  [161] = {.lex_state = 147},
  [162] = {.lex_state = 12},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 147},
  [166] = {.lex_state = 147},
  [167] = {.lex_state = 4},
  [168] = {.lex_state = 147},
  [169] = {.lex_state = 9},
  [170] = {.lex_state = 147},
  [171] = {.lex_state = 4},
  [172] = {.lex_state = 12},
  [173] = {.lex_state = 147},
  [174] = {.lex_state = 4},
  [175] = {.lex_state = 147},
  [176] = {.lex_state = 147},
  [177] = {.lex_state = 147},
  [178] = {.lex_state = 147},
  [179] = {.lex_state = 147},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 147},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 9},
  [186] = {.lex_state = 12},
  [187] = {.lex_state = 147},
  [188] = {.lex_state = 9},
  [189] = {.lex_state = 12},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 147},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 10},
  [194] = {.lex_state = 12},
  [195] = {.lex_state = 12},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 147},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 147},
  [201] = {.lex_state = 147},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 12},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 147},
  [206] = {.lex_state = 12},
  [207] = {.lex_state = 9},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 9},
  [210] = {.lex_state = 12},
  [211] = {.lex_state = 147},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 12},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 9},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 9},
  [218] = {.lex_state = 12},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 147},
  [221] = {.lex_state = 9},
  [222] = {.lex_state = 9},
  [223] = {.lex_state = 9},
  [224] = {.lex_state = 147},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 147},
  [228] = {.lex_state = 147},
  [229] = {.lex_state = 147},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 5},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 5},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 12},
  [240] = {.lex_state = 147},
  [241] = {.lex_state = 147},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 147},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 5},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 147},
  [253] = {.lex_state = 5},
  [254] = {.lex_state = 147},
  [255] = {.lex_state = 147},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 14},
  [261] = {.lex_state = 147},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 147},
  [264] = {.lex_state = 147},
  [265] = {.lex_state = 147},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 5},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 147},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 147},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 5},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 14},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 5},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 5},
  [296] = {.lex_state = 5},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 147},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 147},
  [308] = {.lex_state = 147},
  [309] = {.lex_state = 147},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 147},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 147},
  [318] = {.lex_state = 147},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 147},
  [323] = {.lex_state = 147},
  [324] = {.lex_state = 147},
  [325] = {.lex_state = 147},
  [326] = {.lex_state = 147},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 147},
  [329] = {.lex_state = 147},
  [330] = {.lex_state = 5},
  [331] = {.lex_state = 147},
  [332] = {.lex_state = 147},
  [333] = {.lex_state = 147},
  [334] = {.lex_state = 147},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 5},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 147},
  [339] = {.lex_state = 147},
  [340] = {.lex_state = 147},
  [341] = {.lex_state = 147},
  [342] = {.lex_state = 147},
  [343] = {.lex_state = 147},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 227},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 147},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 5},
  [357] = {.lex_state = 147},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 9},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 9},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 147},
  [367] = {.lex_state = 9},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 227},
  [373] = {.lex_state = 147},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 5},
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
    [sym_program] = STATE(376),
    [sym_module] = STATE(19),
    [sym_machine] = STATE(170),
    [sym_machine_sig_config] = STATE(375),
    [sym_machine_sig] = STATE(212),
    [sym_model] = STATE(170),
    [sym_model_sig_config] = STATE(374),
    [sym_model_sig] = STATE(230),
    [sym_model_intro] = STATE(214),
    [sym_tsystem] = STATE(170),
    [sym_transform] = STATE(170),
    [sym_domain] = STATE(170),
    [sym_domain_sig_config] = STATE(371),
    [sym_domain_sig] = STATE(231),
    [sym_config] = STATE(21),
    [aux_sym_program_repeat1] = STATE(19),
    [aux_sym_machine_sig_config_repeat1] = STATE(212),
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
    STATE(4), 1,
      aux_sym_trans_body_repeat1,
    STATE(15), 1,
      sym_sentence_config,
    STATE(49), 1,
      sym_unop,
    STATE(75), 1,
      sym_id,
    STATE(77), 1,
      sym_string,
    STATE(80), 1,
      sym_func_term,
    STATE(85), 1,
      sym_atom,
    STATE(86), 1,
      sym_constant,
    STATE(103), 1,
      sym_bareid,
    STATE(145), 1,
      sym_func_or_compr,
    STATE(168), 1,
      sym_compr,
    STATE(263), 1,
      sym_func_term_list,
    STATE(320), 1,
      sym_trans_body,
    STATE(322), 1,
      sym_trans_sentence_config,
    STATE(328), 1,
      sym_trans_sentence,
    ACTIONS(25), 2,
      anon_sym_ensures,
      anon_sym_requires,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    STATE(329), 2,
      sym_type_decl,
      sym_rule,
  [94] = 30,
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
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    ACTIONS(47), 1,
      anon_sym_conforms,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    STATE(7), 1,
      aux_sym_dom_sentences_repeat1,
    STATE(16), 1,
      sym_sentence_config,
    STATE(49), 1,
      sym_unop,
    STATE(75), 1,
      sym_id,
    STATE(77), 1,
      sym_string,
    STATE(80), 1,
      sym_func_term,
    STATE(85), 1,
      sym_atom,
    STATE(86), 1,
      sym_constant,
    STATE(103), 1,
      sym_bareid,
    STATE(145), 1,
      sym_func_or_compr,
    STATE(168), 1,
      sym_compr,
    STATE(263), 1,
      sym_func_term_list,
    STATE(324), 1,
      sym_dom_sentence,
    STATE(326), 1,
      sym_dom_sentence_config,
    STATE(327), 1,
      sym_dom_sentences,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    STATE(323), 2,
      sym_type_decl,
      sym_rule,
  [187] = 29,
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
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      aux_sym_trans_body_repeat1,
    STATE(15), 1,
      sym_sentence_config,
    STATE(49), 1,
      sym_unop,
    STATE(75), 1,
      sym_id,
    STATE(77), 1,
      sym_string,
    STATE(80), 1,
      sym_func_term,
    STATE(85), 1,
      sym_atom,
    STATE(86), 1,
      sym_constant,
    STATE(103), 1,
      sym_bareid,
    STATE(145), 1,
      sym_func_or_compr,
    STATE(168), 1,
      sym_compr,
    STATE(263), 1,
      sym_func_term_list,
    STATE(322), 1,
      sym_trans_sentence_config,
    STATE(328), 1,
      sym_trans_sentence,
    ACTIONS(25), 2,
      anon_sym_ensures,
      anon_sym_requires,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    STATE(329), 2,
      sym_type_decl,
      sym_rule,
  [278] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(56), 1,
      anon_sym_RBRACE,
    ACTIONS(58), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 1,
      anon_sym_LBRACK,
    ACTIONS(67), 1,
      anon_sym_DASH,
    ACTIONS(70), 1,
      sym_digits,
    ACTIONS(76), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      anon_sym_PERCENT,
    ACTIONS(82), 1,
      aux_sym_bareid_token1,
    ACTIONS(85), 1,
      aux_sym_bareid_token2,
    ACTIONS(88), 1,
      sym_qualid,
    STATE(5), 1,
      aux_sym_trans_body_repeat1,
    STATE(15), 1,
      sym_sentence_config,
    STATE(49), 1,
      sym_unop,
    STATE(75), 1,
      sym_id,
    STATE(77), 1,
      sym_string,
    STATE(80), 1,
      sym_func_term,
    STATE(85), 1,
      sym_atom,
    STATE(86), 1,
      sym_constant,
    STATE(103), 1,
      sym_bareid,
    STATE(145), 1,
      sym_func_or_compr,
    STATE(168), 1,
      sym_compr,
    STATE(263), 1,
      sym_func_term_list,
    STATE(322), 1,
      sym_trans_sentence_config,
    STATE(328), 1,
      sym_trans_sentence,
    ACTIONS(61), 2,
      anon_sym_ensures,
      anon_sym_requires,
    ACTIONS(73), 2,
      sym_real,
      sym_frac,
    STATE(329), 2,
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
    STATE(49), 1,
      sym_unop,
    STATE(75), 1,
      sym_id,
    STATE(77), 1,
      sym_string,
    STATE(80), 1,
      sym_func_term,
    STATE(85), 1,
      sym_atom,
    STATE(86), 1,
      sym_constant,
    STATE(103), 1,
      sym_bareid,
    STATE(145), 1,
      sym_func_or_compr,
    STATE(168), 1,
      sym_compr,
    STATE(263), 1,
      sym_func_term_list,
    STATE(324), 1,
      sym_dom_sentence,
    STATE(326), 1,
      sym_dom_sentence_config,
    ACTIONS(111), 2,
      sym_real,
      sym_frac,
    STATE(323), 2,
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
    ACTIONS(47), 1,
      anon_sym_conforms,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(129), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      aux_sym_dom_sentences_repeat1,
    STATE(16), 1,
      sym_sentence_config,
    STATE(49), 1,
      sym_unop,
    STATE(75), 1,
      sym_id,
    STATE(77), 1,
      sym_string,
    STATE(80), 1,
      sym_func_term,
    STATE(85), 1,
      sym_atom,
    STATE(86), 1,
      sym_constant,
    STATE(103), 1,
      sym_bareid,
    STATE(145), 1,
      sym_func_or_compr,
    STATE(168), 1,
      sym_compr,
    STATE(263), 1,
      sym_func_term_list,
    STATE(324), 1,
      sym_dom_sentence,
    STATE(326), 1,
      sym_dom_sentence_config,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    STATE(323), 2,
      sym_type_decl,
      sym_rule,
  [549] = 28,
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
    STATE(9), 1,
      aux_sym_model_body_repeat1,
    STATE(26), 1,
      sym_sentence_config,
    STATE(49), 1,
      sym_unop,
    STATE(75), 1,
      sym_id,
    STATE(77), 1,
      sym_string,
    STATE(85), 1,
      sym_atom,
    STATE(86), 1,
      sym_constant,
    STATE(105), 1,
      sym_bareid,
    STATE(130), 1,
      sym_func_term,
    STATE(245), 1,
      sym_model_fact,
    STATE(341), 1,
      sym_model_contract,
    STATE(343), 1,
      sym_model_sentence,
    STATE(344), 1,
      sym_model_body,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    STATE(342), 2,
      sym_model_contract_conf,
      sym_model_fact_list,
  [636] = 27,
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
    ACTIONS(137), 1,
      anon_sym_RBRACE,
    STATE(10), 1,
      aux_sym_model_body_repeat1,
    STATE(26), 1,
      sym_sentence_config,
    STATE(49), 1,
      sym_unop,
    STATE(75), 1,
      sym_id,
    STATE(77), 1,
      sym_string,
    STATE(85), 1,
      sym_atom,
    STATE(86), 1,
      sym_constant,
    STATE(105), 1,
      sym_bareid,
    STATE(130), 1,
      sym_func_term,
    STATE(245), 1,
      sym_model_fact,
    STATE(341), 1,
      sym_model_contract,
    STATE(343), 1,
      sym_model_sentence,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    STATE(342), 2,
      sym_model_contract_conf,
      sym_model_fact_list,
  [720] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_RBRACE,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(144), 1,
      anon_sym_ensures,
    ACTIONS(147), 1,
      anon_sym_requires,
    ACTIONS(150), 1,
      anon_sym_LBRACK,
    ACTIONS(153), 1,
      anon_sym_DASH,
    ACTIONS(156), 1,
      sym_digits,
    ACTIONS(162), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      anon_sym_PERCENT,
    ACTIONS(168), 1,
      aux_sym_bareid_token1,
    ACTIONS(171), 1,
      aux_sym_bareid_token2,
    ACTIONS(174), 1,
      sym_qualid,
    STATE(10), 1,
      aux_sym_model_body_repeat1,
    STATE(26), 1,
      sym_sentence_config,
    STATE(49), 1,
      sym_unop,
    STATE(75), 1,
      sym_id,
    STATE(77), 1,
      sym_string,
    STATE(85), 1,
      sym_atom,
    STATE(86), 1,
      sym_constant,
    STATE(105), 1,
      sym_bareid,
    STATE(130), 1,
      sym_func_term,
    STATE(245), 1,
      sym_model_fact,
    STATE(341), 1,
      sym_model_contract,
    STATE(343), 1,
      sym_model_sentence,
    ACTIONS(159), 2,
      sym_real,
      sym_frac,
    STATE(342), 2,
      sym_model_contract_conf,
      sym_model_fact_list,
  [804] = 3,
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
  [839] = 3,
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
  [874] = 3,
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
  [909] = 3,
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
  [944] = 24,
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
    STATE(49), 1,
      sym_unop,
    STATE(75), 1,
      sym_id,
    STATE(77), 1,
      sym_string,
    STATE(80), 1,
      sym_func_term,
    STATE(85), 1,
      sym_atom,
    STATE(86), 1,
      sym_constant,
    STATE(103), 1,
      sym_bareid,
    STATE(145), 1,
      sym_func_or_compr,
    STATE(168), 1,
      sym_compr,
    STATE(263), 1,
      sym_func_term_list,
    STATE(338), 1,
      sym_trans_sentence,
    ACTIONS(25), 2,
      anon_sym_ensures,
      anon_sym_requires,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    STATE(329), 2,
      sym_type_decl,
      sym_rule,
  [1020] = 24,
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
    ACTIONS(47), 1,
      anon_sym_conforms,
    STATE(49), 1,
      sym_unop,
    STATE(75), 1,
      sym_id,
    STATE(77), 1,
      sym_string,
    STATE(80), 1,
      sym_func_term,
    STATE(85), 1,
      sym_atom,
    STATE(86), 1,
      sym_constant,
    STATE(103), 1,
      sym_bareid,
    STATE(145), 1,
      sym_func_or_compr,
    STATE(168), 1,
      sym_compr,
    STATE(263), 1,
      sym_func_term_list,
    STATE(309), 1,
      sym_dom_sentence,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    STATE(323), 2,
      sym_type_decl,
      sym_rule,
  [1095] = 23,
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
    STATE(38), 1,
      sym_bareid,
    STATE(41), 1,
      sym_id,
    STATE(45), 1,
      sym_func_term,
    STATE(52), 1,
      sym_unop,
    STATE(59), 1,
      sym_constant,
    STATE(60), 1,
      sym_atom,
    STATE(63), 1,
      sym_string,
    STATE(191), 1,
      sym_constraint,
    STATE(224), 1,
      sym_body,
    STATE(305), 1,
      sym_card_spec,
    STATE(333), 1,
      sym_body_list,
    ACTIONS(191), 2,
      sym_real,
      sym_frac,
    ACTIONS(187), 3,
      anon_sym_some,
      anon_sym_atmost,
      anon_sym_atleast,
  [1168] = 21,
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
    STATE(38), 1,
      sym_bareid,
    STATE(41), 1,
      sym_id,
    STATE(45), 1,
      sym_func_term,
    STATE(52), 1,
      sym_unop,
    STATE(59), 1,
      sym_constant,
    STATE(60), 1,
      sym_atom,
    STATE(63), 1,
      sym_string,
    STATE(191), 1,
      sym_constraint,
    STATE(224), 1,
      sym_body,
    STATE(333), 1,
      sym_body_list,
    ACTIONS(191), 2,
      sym_real,
      sym_frac,
  [1233] = 16,
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
    ACTIONS(205), 1,
      ts_builtin_sym_end,
    STATE(214), 1,
      sym_model_intro,
    STATE(230), 1,
      sym_model_sig,
    STATE(231), 1,
      sym_domain_sig,
    STATE(371), 1,
      sym_domain_sig_config,
    STATE(374), 1,
      sym_model_sig_config,
    STATE(375), 1,
      sym_machine_sig_config,
    STATE(30), 2,
      sym_module,
      aux_sym_program_repeat1,
    STATE(212), 2,
      sym_machine_sig,
      aux_sym_machine_sig_config_repeat1,
    STATE(170), 5,
      sym_machine,
      sym_model,
      sym_tsystem,
      sym_transform,
      sym_domain,
  [1288] = 21,
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
    STATE(49), 1,
      sym_unop,
    STATE(66), 1,
      sym_bareid,
    STATE(75), 1,
      sym_id,
    STATE(77), 1,
      sym_string,
    STATE(80), 1,
      sym_func_term,
    STATE(85), 1,
      sym_atom,
    STATE(86), 1,
      sym_constant,
    STATE(145), 1,
      sym_func_or_compr,
    STATE(168), 1,
      sym_compr,
    STATE(302), 1,
      sym_func_term_list,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [1353] = 16,
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
    ACTIONS(205), 1,
      ts_builtin_sym_end,
    STATE(214), 1,
      sym_model_intro,
    STATE(230), 1,
      sym_model_sig,
    STATE(231), 1,
      sym_domain_sig,
    STATE(371), 1,
      sym_domain_sig_config,
    STATE(374), 1,
      sym_model_sig_config,
    STATE(375), 1,
      sym_machine_sig_config,
    STATE(29), 2,
      sym_module,
      aux_sym_program_repeat1,
    STATE(212), 2,
      sym_machine_sig,
      aux_sym_machine_sig_config_repeat1,
    STATE(170), 5,
      sym_machine,
      sym_model,
      sym_tsystem,
      sym_transform,
      sym_domain,
  [1408] = 21,
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
    STATE(38), 1,
      sym_bareid,
    STATE(41), 1,
      sym_id,
    STATE(45), 1,
      sym_func_term,
    STATE(52), 1,
      sym_unop,
    STATE(59), 1,
      sym_constant,
    STATE(60), 1,
      sym_atom,
    STATE(63), 1,
      sym_string,
    STATE(191), 1,
      sym_constraint,
    STATE(224), 1,
      sym_body,
    STATE(373), 1,
      sym_body_list,
    ACTIONS(191), 2,
      sym_real,
      sym_frac,
  [1473] = 21,
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
    STATE(49), 1,
      sym_unop,
    STATE(66), 1,
      sym_bareid,
    STATE(75), 1,
      sym_id,
    STATE(77), 1,
      sym_string,
    STATE(80), 1,
      sym_func_term,
    STATE(85), 1,
      sym_atom,
    STATE(86), 1,
      sym_constant,
    STATE(145), 1,
      sym_func_or_compr,
    STATE(168), 1,
      sym_compr,
    STATE(365), 1,
      sym_func_term_list,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [1538] = 21,
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
    STATE(38), 1,
      sym_bareid,
    STATE(41), 1,
      sym_id,
    STATE(45), 1,
      sym_func_term,
    STATE(52), 1,
      sym_unop,
    STATE(59), 1,
      sym_constant,
    STATE(60), 1,
      sym_atom,
    STATE(63), 1,
      sym_string,
    STATE(191), 1,
      sym_constraint,
    STATE(224), 1,
      sym_body,
    STATE(308), 1,
      sym_body_list,
    ACTIONS(191), 2,
      sym_real,
      sym_frac,
  [1603] = 21,
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
    STATE(49), 1,
      sym_unop,
    STATE(66), 1,
      sym_bareid,
    STATE(75), 1,
      sym_id,
    STATE(77), 1,
      sym_string,
    STATE(80), 1,
      sym_func_term,
    STATE(85), 1,
      sym_atom,
    STATE(86), 1,
      sym_constant,
    STATE(145), 1,
      sym_func_or_compr,
    STATE(168), 1,
      sym_compr,
    STATE(258), 1,
      sym_func_term_list,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [1668] = 21,
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
    STATE(49), 1,
      sym_unop,
    STATE(75), 1,
      sym_id,
    STATE(77), 1,
      sym_string,
    STATE(85), 1,
      sym_atom,
    STATE(86), 1,
      sym_constant,
    STATE(105), 1,
      sym_bareid,
    STATE(130), 1,
      sym_func_term,
    STATE(241), 1,
      sym_model_fact,
    STATE(307), 1,
      sym_model_contract,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [1733] = 21,
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
    STATE(38), 1,
      sym_bareid,
    STATE(41), 1,
      sym_id,
    STATE(45), 1,
      sym_func_term,
    STATE(52), 1,
      sym_unop,
    STATE(59), 1,
      sym_constant,
    STATE(60), 1,
      sym_atom,
    STATE(63), 1,
      sym_string,
    STATE(191), 1,
      sym_constraint,
    STATE(224), 1,
      sym_body,
    STATE(339), 1,
      sym_body_list,
    ACTIONS(191), 2,
      sym_real,
      sym_frac,
  [1798] = 21,
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
    STATE(38), 1,
      sym_bareid,
    STATE(41), 1,
      sym_id,
    STATE(45), 1,
      sym_func_term,
    STATE(52), 1,
      sym_unop,
    STATE(59), 1,
      sym_constant,
    STATE(60), 1,
      sym_atom,
    STATE(63), 1,
      sym_string,
    STATE(191), 1,
      sym_constraint,
    STATE(224), 1,
      sym_body,
    STATE(316), 1,
      sym_body_list,
    ACTIONS(191), 2,
      sym_real,
      sym_frac,
  [1863] = 16,
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
    STATE(214), 1,
      sym_model_intro,
    STATE(230), 1,
      sym_model_sig,
    STATE(231), 1,
      sym_domain_sig,
    STATE(371), 1,
      sym_domain_sig_config,
    STATE(374), 1,
      sym_model_sig_config,
    STATE(375), 1,
      sym_machine_sig_config,
    STATE(30), 2,
      sym_module,
      aux_sym_program_repeat1,
    STATE(212), 2,
      sym_machine_sig,
      aux_sym_machine_sig_config_repeat1,
    STATE(170), 5,
      sym_machine,
      sym_model,
      sym_tsystem,
      sym_transform,
      sym_domain,
  [1918] = 16,
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
    STATE(214), 1,
      sym_model_intro,
    STATE(230), 1,
      sym_model_sig,
    STATE(231), 1,
      sym_domain_sig,
    STATE(371), 1,
      sym_domain_sig_config,
    STATE(374), 1,
      sym_model_sig_config,
    STATE(375), 1,
      sym_machine_sig_config,
    STATE(30), 2,
      sym_module,
      aux_sym_program_repeat1,
    STATE(212), 2,
      sym_machine_sig,
      aux_sym_machine_sig_config_repeat1,
    STATE(170), 5,
      sym_machine,
      sym_model,
      sym_tsystem,
      sym_transform,
      sym_domain,
  [1973] = 20,
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
    STATE(49), 1,
      sym_unop,
    STATE(66), 1,
      sym_bareid,
    STATE(75), 1,
      sym_id,
    STATE(77), 1,
      sym_string,
    STATE(80), 1,
      sym_func_term,
    STATE(85), 1,
      sym_atom,
    STATE(86), 1,
      sym_constant,
    STATE(168), 1,
      sym_compr,
    STATE(176), 1,
      sym_func_or_compr,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2035] = 20,
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
      anon_sym_RPAREN,
    STATE(49), 1,
      sym_unop,
    STATE(75), 1,
      sym_id,
    STATE(77), 1,
      sym_string,
    STATE(85), 1,
      sym_atom,
    STATE(86), 1,
      sym_constant,
    STATE(106), 1,
      sym_bareid,
    STATE(113), 1,
      sym_func_term,
    STATE(247), 1,
      sym_mod_app_arg,
    STATE(310), 1,
      sym_mod_arg_list,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2097] = 20,
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
    STATE(38), 1,
      sym_bareid,
    STATE(41), 1,
      sym_id,
    STATE(45), 1,
      sym_func_term,
    STATE(52), 1,
      sym_unop,
    STATE(59), 1,
      sym_constant,
    STATE(60), 1,
      sym_atom,
    STATE(63), 1,
      sym_string,
    STATE(191), 1,
      sym_constraint,
    STATE(255), 1,
      sym_body,
    ACTIONS(191), 2,
      sym_real,
      sym_frac,
  [2159] = 20,
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
      anon_sym_LBRACK,
    STATE(44), 1,
      sym_sentence_config,
    STATE(49), 1,
      sym_unop,
    STATE(75), 1,
      sym_id,
    STATE(77), 1,
      sym_string,
    STATE(85), 1,
      sym_atom,
    STATE(86), 1,
      sym_constant,
    STATE(105), 1,
      sym_bareid,
    STATE(130), 1,
      sym_func_term,
    STATE(274), 1,
      sym_model_fact,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2221] = 3,
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
  [2248] = 19,
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
    STATE(38), 1,
      sym_bareid,
    STATE(41), 1,
      sym_id,
    STATE(45), 1,
      sym_func_term,
    STATE(52), 1,
      sym_unop,
    STATE(59), 1,
      sym_constant,
    STATE(60), 1,
      sym_atom,
    STATE(63), 1,
      sym_string,
    STATE(211), 1,
      sym_constraint,
    ACTIONS(191), 2,
      sym_real,
      sym_frac,
  [2307] = 19,
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
    STATE(49), 1,
      sym_unop,
    STATE(66), 1,
      sym_bareid,
    STATE(77), 1,
      sym_string,
    STATE(85), 1,
      sym_atom,
    STATE(86), 1,
      sym_constant,
    STATE(93), 1,
      sym_id,
    STATE(99), 1,
      sym_func_term,
    STATE(205), 1,
      sym_compr,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2366] = 3,
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
  [2392] = 18,
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
    STATE(49), 1,
      sym_unop,
    STATE(75), 1,
      sym_id,
    STATE(77), 1,
      sym_string,
    STATE(85), 1,
      sym_atom,
    STATE(86), 1,
      sym_constant,
    STATE(106), 1,
      sym_bareid,
    STATE(113), 1,
      sym_func_term,
    STATE(275), 1,
      sym_mod_app_arg,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2448] = 3,
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
  [2474] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      anon_sym_is,
    ACTIONS(244), 3,
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
  [2504] = 3,
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
  [2530] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(246), 1,
      anon_sym_LBRACE,
    ACTIONS(248), 1,
      anon_sym_LPAREN,
    ACTIONS(250), 1,
      anon_sym_DASH,
    ACTIONS(252), 1,
      anon_sym_new,
    ACTIONS(256), 1,
      sym_qualid,
    STATE(148), 1,
      sym_unncmp,
    STATE(151), 1,
      sym_typeid,
    STATE(186), 1,
      sym_bareid,
    STATE(348), 1,
      sym_unnbody,
    STATE(350), 1,
      sym_fun_decl,
    STATE(357), 1,
      sym_type_decl_body,
    ACTIONS(254), 4,
      anon_sym_inj,
      anon_sym_bij,
      anon_sym_sur,
      anon_sym_fun,
  [2582] = 18,
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
    STATE(49), 1,
      sym_unop,
    STATE(75), 1,
      sym_id,
    STATE(77), 1,
      sym_string,
    STATE(85), 1,
      sym_atom,
    STATE(86), 1,
      sym_constant,
    STATE(105), 1,
      sym_bareid,
    STATE(130), 1,
      sym_func_term,
    STATE(261), 1,
      sym_model_fact,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2638] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    STATE(51), 1,
      sym_binop,
    STATE(54), 1,
      sym_relop,
    ACTIONS(266), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(258), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(262), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(260), 5,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2674] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    STATE(51), 1,
      sym_binop,
    ACTIONS(270), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(262), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(268), 9,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2705] = 17,
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
    STATE(49), 1,
      sym_unop,
    STATE(66), 1,
      sym_bareid,
    STATE(75), 1,
      sym_id,
    STATE(77), 1,
      sym_string,
    STATE(85), 1,
      sym_atom,
    STATE(86), 1,
      sym_constant,
    STATE(137), 1,
      sym_func_term,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2758] = 17,
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
    STATE(49), 1,
      sym_unop,
    STATE(66), 1,
      sym_bareid,
    STATE(74), 1,
      sym_func_term,
    STATE(75), 1,
      sym_id,
    STATE(77), 1,
      sym_string,
    STATE(85), 1,
      sym_atom,
    STATE(86), 1,
      sym_constant,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2811] = 17,
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
    STATE(49), 1,
      sym_unop,
    STATE(66), 1,
      sym_bareid,
    STATE(75), 1,
      sym_id,
    STATE(77), 1,
      sym_string,
    STATE(78), 1,
      sym_func_term,
    STATE(85), 1,
      sym_atom,
    STATE(86), 1,
      sym_constant,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2864] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(51), 1,
      sym_binop,
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
  [2891] = 17,
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
    STATE(38), 1,
      sym_bareid,
    STATE(46), 1,
      sym_func_term,
    STATE(52), 1,
      sym_unop,
    STATE(58), 1,
      sym_id,
    STATE(59), 1,
      sym_constant,
    STATE(60), 1,
      sym_atom,
    STATE(63), 1,
      sym_string,
    ACTIONS(191), 2,
      sym_real,
      sym_frac,
  [2944] = 17,
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
    STATE(38), 1,
      sym_bareid,
    STATE(50), 1,
      sym_func_term,
    STATE(52), 1,
      sym_unop,
    STATE(58), 1,
      sym_id,
    STATE(59), 1,
      sym_constant,
    STATE(60), 1,
      sym_atom,
    STATE(63), 1,
      sym_string,
    ACTIONS(191), 2,
      sym_real,
      sym_frac,
  [2997] = 17,
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
    STATE(49), 1,
      sym_unop,
    STATE(66), 1,
      sym_bareid,
    STATE(75), 1,
      sym_id,
    STATE(77), 1,
      sym_string,
    STATE(85), 1,
      sym_atom,
    STATE(86), 1,
      sym_constant,
    STATE(95), 1,
      sym_func_term,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [3050] = 17,
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
    STATE(49), 1,
      sym_unop,
    STATE(66), 1,
      sym_bareid,
    STATE(75), 1,
      sym_id,
    STATE(77), 1,
      sym_string,
    STATE(85), 1,
      sym_atom,
    STATE(86), 1,
      sym_constant,
    STATE(102), 1,
      sym_func_term,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [3103] = 17,
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
    STATE(49), 1,
      sym_unop,
    STATE(66), 1,
      sym_bareid,
    STATE(75), 1,
      sym_id,
    STATE(77), 1,
      sym_string,
    STATE(85), 1,
      sym_atom,
    STATE(86), 1,
      sym_constant,
    STATE(139), 1,
      sym_func_term,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [3156] = 17,
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
    STATE(49), 1,
      sym_unop,
    STATE(66), 1,
      sym_bareid,
    STATE(75), 1,
      sym_id,
    STATE(77), 1,
      sym_string,
    STATE(85), 1,
      sym_atom,
    STATE(86), 1,
      sym_constant,
    STATE(121), 1,
      sym_func_term,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [3209] = 17,
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
    STATE(49), 1,
      sym_unop,
    STATE(66), 1,
      sym_bareid,
    STATE(75), 1,
      sym_id,
    STATE(77), 1,
      sym_string,
    STATE(85), 1,
      sym_atom,
    STATE(86), 1,
      sym_constant,
    STATE(149), 1,
      sym_func_term,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [3262] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 3,
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
  [3289] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 3,
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
  [3313] = 3,
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
  [3337] = 3,
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
  [3361] = 3,
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
  [3385] = 3,
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
  [3409] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [3433] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 5,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(56), 10,
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
  [3456] = 3,
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
  [3479] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 4,
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
  [3501] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 5,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(139), 9,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      aux_sym_bareid_token2,
      sym_qualid,
  [3523] = 14,
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
    ACTIONS(228), 1,
      anon_sym_LBRACK,
    ACTIONS(300), 1,
      anon_sym_RBRACE,
    STATE(66), 1,
      sym_bareid,
    STATE(117), 1,
      sym_sentence_config,
    STATE(167), 1,
      sym_step,
    STATE(232), 1,
      sym_id,
    STATE(347), 1,
      sym_trans_steps,
    STATE(377), 1,
      sym_step_or_update_lhs,
    STATE(72), 2,
      sym_trans_step_config,
      aux_sym_trans_steps_repeat1,
  [3567] = 11,
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
    ACTIONS(302), 1,
      anon_sym_DASH,
    ACTIONS(304), 1,
      sym_digits,
    STATE(248), 1,
      sym_enum_cnst,
    STATE(314), 1,
      sym_enum_list,
    ACTIONS(306), 3,
      sym_real,
      sym_frac,
      sym_qualid,
    STATE(266), 3,
      sym_string,
      sym_range,
      sym_bareid,
  [3605] = 10,
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
    ACTIONS(302), 1,
      anon_sym_DASH,
    ACTIONS(304), 1,
      sym_digits,
    STATE(257), 1,
      sym_enum_cnst,
    ACTIONS(306), 3,
      sym_real,
      sym_frac,
      sym_qualid,
    STATE(266), 3,
      sym_string,
      sym_range,
      sym_bareid,
  [3640] = 13,
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
    ACTIONS(228), 1,
      anon_sym_LBRACK,
    ACTIONS(308), 1,
      anon_sym_RBRACE,
    STATE(66), 1,
      sym_bareid,
    STATE(117), 1,
      sym_sentence_config,
    STATE(167), 1,
      sym_step,
    STATE(232), 1,
      sym_id,
    STATE(377), 1,
      sym_step_or_update_lhs,
    STATE(73), 2,
      sym_trans_step_config,
      aux_sym_trans_steps_repeat1,
  [3681] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_RBRACE,
    ACTIONS(312), 1,
      anon_sym_LBRACK,
    ACTIONS(315), 1,
      anon_sym_PERCENT,
    ACTIONS(318), 1,
      aux_sym_bareid_token1,
    ACTIONS(321), 1,
      aux_sym_bareid_token2,
    ACTIONS(324), 1,
      sym_qualid,
    STATE(66), 1,
      sym_bareid,
    STATE(117), 1,
      sym_sentence_config,
    STATE(167), 1,
      sym_step,
    STATE(232), 1,
      sym_id,
    STATE(377), 1,
      sym_step_or_update_lhs,
    STATE(73), 2,
      sym_trans_step_config,
      aux_sym_trans_steps_repeat1,
  [3722] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    STATE(48), 1,
      sym_binop,
    ACTIONS(262), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(268), 7,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [3747] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_SLASH,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
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
  [3770] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 5,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(329), 8,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      aux_sym_bareid_token2,
      sym_qualid,
  [3791] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_SLASH,
    ACTIONS(290), 12,
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
  [3812] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_SLASH,
    STATE(48), 1,
      sym_binop,
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
  [3835] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_LBRACE,
    ACTIONS(256), 1,
      sym_qualid,
    ACTIONS(276), 1,
      anon_sym_PERCENT,
    ACTIONS(278), 1,
      aux_sym_bareid_token1,
    ACTIONS(280), 1,
      aux_sym_bareid_token2,
    ACTIONS(333), 1,
      anon_sym_any,
    STATE(148), 1,
      sym_unncmp,
    STATE(151), 1,
      sym_typeid,
    STATE(159), 1,
      sym_bareid,
    STATE(194), 1,
      sym_field,
    STATE(213), 1,
      sym_unnbody,
    STATE(335), 1,
      sym_fields,
  [3875] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    STATE(48), 1,
      sym_binop,
    ACTIONS(262), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(335), 6,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [3899] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_SLASH,
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
  [3919] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 4,
      anon_sym_conforms,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(329), 8,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      aux_sym_bareid_token2,
      sym_qualid,
  [3939] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_LBRACE,
    ACTIONS(256), 1,
      sym_qualid,
    ACTIONS(276), 1,
      anon_sym_PERCENT,
    ACTIONS(278), 1,
      aux_sym_bareid_token1,
    ACTIONS(280), 1,
      aux_sym_bareid_token2,
    ACTIONS(333), 1,
      anon_sym_any,
    STATE(148), 1,
      sym_unncmp,
    STATE(151), 1,
      sym_typeid,
    STATE(159), 1,
      sym_bareid,
    STATE(194), 1,
      sym_field,
    STATE(213), 1,
      sym_unnbody,
    STATE(311), 1,
      sym_fields,
  [3979] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_LBRACE,
    ACTIONS(256), 1,
      sym_qualid,
    ACTIONS(276), 1,
      anon_sym_PERCENT,
    ACTIONS(278), 1,
      aux_sym_bareid_token1,
    ACTIONS(280), 1,
      aux_sym_bareid_token2,
    ACTIONS(333), 1,
      anon_sym_any,
    STATE(148), 1,
      sym_unncmp,
    STATE(151), 1,
      sym_typeid,
    STATE(159), 1,
      sym_bareid,
    STATE(194), 1,
      sym_field,
    STATE(213), 1,
      sym_unnbody,
    STATE(303), 1,
      sym_fields,
  [4019] = 3,
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
  [4039] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
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
  [4059] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      anon_sym_RBRACE,
    ACTIONS(339), 1,
      anon_sym_boot,
    ACTIONS(343), 1,
      anon_sym_property,
    ACTIONS(345), 1,
      anon_sym_LBRACK,
    STATE(181), 1,
      sym_sentence_config,
    STATE(182), 1,
      sym_machine_prop,
    STATE(184), 1,
      sym_machine_sentence,
    STATE(346), 1,
      sym_machine_body,
    ACTIONS(341), 2,
      anon_sym_initially,
      anon_sym_next,
    STATE(94), 2,
      sym_machine_sentence_conf,
      aux_sym_machine_body_repeat1,
  [4095] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(351), 1,
      anon_sym_PERCENT,
    STATE(112), 1,
      sym_bareid,
    STATE(196), 1,
      sym_mod_ref,
    STATE(286), 1,
      sym_mod_refs,
    ACTIONS(347), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
    ACTIONS(349), 2,
      anon_sym_includes,
      anon_sym_extends,
    STATE(141), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [4129] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_LBRACE,
    ACTIONS(256), 1,
      sym_qualid,
    ACTIONS(276), 1,
      anon_sym_PERCENT,
    ACTIONS(278), 1,
      aux_sym_bareid_token1,
    ACTIONS(280), 1,
      aux_sym_bareid_token2,
    ACTIONS(333), 1,
      anon_sym_any,
    STATE(148), 1,
      sym_unncmp,
    STATE(151), 1,
      sym_typeid,
    STATE(159), 1,
      sym_bareid,
    STATE(194), 1,
      sym_field,
    STATE(213), 1,
      sym_unnbody,
    STATE(239), 1,
      sym_fields,
  [4169] = 3,
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
  [4189] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_LBRACE,
    ACTIONS(256), 1,
      sym_qualid,
    ACTIONS(276), 1,
      anon_sym_PERCENT,
    ACTIONS(278), 1,
      aux_sym_bareid_token1,
    ACTIONS(280), 1,
      aux_sym_bareid_token2,
    ACTIONS(333), 1,
      anon_sym_any,
    STATE(148), 1,
      sym_unncmp,
    STATE(151), 1,
      sym_typeid,
    STATE(159), 1,
      sym_bareid,
    STATE(210), 1,
      sym_field,
    STATE(213), 1,
      sym_unnbody,
  [4226] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_RBRACE,
    ACTIONS(355), 1,
      anon_sym_boot,
    ACTIONS(361), 1,
      anon_sym_property,
    ACTIONS(364), 1,
      anon_sym_LBRACK,
    STATE(181), 1,
      sym_sentence_config,
    STATE(182), 1,
      sym_machine_prop,
    STATE(184), 1,
      sym_machine_sentence,
    ACTIONS(358), 2,
      anon_sym_initially,
      anon_sym_next,
    STATE(92), 2,
      sym_machine_sentence_conf,
      aux_sym_machine_body_repeat1,
  [4259] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_SLASH,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      anon_sym_is,
    ACTIONS(238), 8,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4282] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_boot,
    ACTIONS(343), 1,
      anon_sym_property,
    ACTIONS(345), 1,
      anon_sym_LBRACK,
    ACTIONS(369), 1,
      anon_sym_RBRACE,
    STATE(181), 1,
      sym_sentence_config,
    STATE(182), 1,
      sym_machine_prop,
    STATE(184), 1,
      sym_machine_sentence,
    ACTIONS(341), 2,
      anon_sym_initially,
      anon_sym_next,
    STATE(92), 2,
      sym_machine_sentence_conf,
      aux_sym_machine_body_repeat1,
  [4315] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    STATE(48), 1,
      sym_binop,
    ACTIONS(262), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(371), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [4337] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(246), 1,
      anon_sym_LBRACE,
    ACTIONS(256), 1,
      sym_qualid,
    ACTIONS(373), 1,
      anon_sym_any,
    STATE(148), 1,
      sym_unncmp,
    STATE(151), 1,
      sym_typeid,
    STATE(186), 1,
      sym_bareid,
    STATE(206), 1,
      sym_unnbody,
  [4371] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 3,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(375), 7,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      aux_sym_bareid_token2,
      sym_qualid,
  [4389] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 3,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(379), 7,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      aux_sym_bareid_token2,
      sym_qualid,
  [4407] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    STATE(48), 1,
      sym_binop,
    ACTIONS(262), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(383), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [4429] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 3,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(385), 7,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      aux_sym_bareid_token2,
      sym_qualid,
  [4447] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 3,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(329), 7,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      aux_sym_bareid_token2,
      sym_qualid,
  [4465] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    STATE(48), 1,
      sym_binop,
    ACTIONS(262), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(389), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [4487] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_SLASH,
    ACTIONS(391), 1,
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
  [4507] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_PERCENT,
    STATE(112), 1,
      sym_bareid,
    STATE(196), 1,
      sym_mod_ref,
    STATE(287), 1,
      sym_mod_refs,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
    ACTIONS(393), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
    STATE(141), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [4535] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_SLASH,
    ACTIONS(395), 1,
      anon_sym_is,
    ACTIONS(234), 7,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4554] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_SLASH,
    ACTIONS(397), 1,
      anon_sym_at,
    ACTIONS(234), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4573] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_PERCENT,
    STATE(112), 1,
      sym_bareid,
    STATE(252), 1,
      sym_mod_apply,
    STATE(291), 1,
      sym_mod_ref,
    STATE(331), 1,
      sym_choice_list,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
    STATE(141), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [4600] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(246), 1,
      anon_sym_LBRACE,
    ACTIONS(256), 1,
      sym_qualid,
    STATE(148), 1,
      sym_unncmp,
    STATE(151), 1,
      sym_typeid,
    STATE(186), 1,
      sym_bareid,
    STATE(203), 1,
      sym_unnbody,
  [4631] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_AT,
    ACTIONS(399), 8,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [4648] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(246), 1,
      anon_sym_LBRACE,
    ACTIONS(256), 1,
      sym_qualid,
    STATE(148), 1,
      sym_unncmp,
    STATE(151), 1,
      sym_typeid,
    STATE(186), 1,
      sym_bareid,
    STATE(218), 1,
      sym_unnbody,
  [4679] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(246), 1,
      anon_sym_LBRACE,
    ACTIONS(256), 1,
      sym_qualid,
    STATE(148), 1,
      sym_unncmp,
    STATE(151), 1,
      sym_typeid,
    STATE(186), 1,
      sym_bareid,
    STATE(280), 1,
      sym_unnbody,
  [4710] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_COLON_COLON,
    ACTIONS(407), 1,
      anon_sym_AT,
    ACTIONS(403), 7,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [4729] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    STATE(48), 1,
      sym_binop,
    ACTIONS(409), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(262), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4749] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_PERCENT,
    STATE(112), 1,
      sym_bareid,
    STATE(291), 1,
      sym_mod_ref,
    STATE(334), 1,
      sym_mod_apply,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
    STATE(141), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [4773] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_PERCENT,
    STATE(112), 1,
      sym_bareid,
    STATE(196), 1,
      sym_mod_ref,
    STATE(262), 1,
      sym_mod_refs,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
    STATE(141), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [4797] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_PERCENT,
    STATE(112), 1,
      sym_bareid,
    STATE(264), 1,
      sym_mod_apply,
    STATE(291), 1,
      sym_mod_ref,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
    STATE(141), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [4821] = 9,
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
    STATE(66), 1,
      sym_bareid,
    STATE(174), 1,
      sym_step,
    STATE(232), 1,
      sym_id,
    STATE(377), 1,
      sym_step_or_update_lhs,
  [4849] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 8,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [4863] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_PERCENT,
    STATE(112), 1,
      sym_bareid,
    STATE(291), 1,
      sym_mod_ref,
    STATE(366), 1,
      sym_mod_apply,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
    STATE(141), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [4887] = 9,
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
    STATE(66), 1,
      sym_bareid,
    STATE(154), 1,
      sym_step,
    STATE(232), 1,
      sym_id,
    STATE(295), 1,
      sym_step_or_update_lhs,
  [4915] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    STATE(48), 1,
      sym_binop,
    ACTIONS(413), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
    ACTIONS(262), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4935] = 9,
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
    STATE(66), 1,
      sym_bareid,
    STATE(233), 1,
      sym_setting,
    STATE(356), 1,
      sym_id,
    STATE(362), 1,
      sym_setting_list,
  [4963] = 9,
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
    STATE(66), 1,
      sym_bareid,
    STATE(233), 1,
      sym_setting,
    STATE(356), 1,
      sym_id,
    STATE(368), 1,
      sym_setting_list,
  [4991] = 9,
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
    STATE(66), 1,
      sym_bareid,
    STATE(233), 1,
      sym_setting,
    STATE(356), 1,
      sym_id,
    STATE(358), 1,
      sym_setting_list,
  [5019] = 9,
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
    STATE(66), 1,
      sym_bareid,
    STATE(154), 1,
      sym_update,
    STATE(232), 1,
      sym_id,
    STATE(330), 1,
      sym_step_or_update_lhs,
  [5047] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_RPAREN,
    ACTIONS(417), 1,
      anon_sym_PERCENT,
    STATE(249), 1,
      sym_val_or_model_program,
    STATE(276), 1,
      sym_mod_ref_rename,
    STATE(278), 1,
      sym_bareid,
    STATE(312), 1,
      sym_vom_param_list,
    ACTIONS(280), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [5073] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(246), 1,
      anon_sym_LBRACE,
    ACTIONS(256), 1,
      sym_qualid,
    STATE(151), 1,
      sym_typeid,
    STATE(162), 1,
      sym_unncmp,
    STATE(186), 1,
      sym_bareid,
  [5101] = 9,
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
    STATE(66), 1,
      sym_bareid,
    STATE(233), 1,
      sym_setting,
    STATE(292), 1,
      sym_setting_list,
    STATE(356), 1,
      sym_id,
  [5129] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_PERCENT,
    ACTIONS(419), 1,
      anon_sym_RPAREN,
    STATE(249), 1,
      sym_val_or_model_program,
    STATE(276), 1,
      sym_mod_ref_rename,
    STATE(278), 1,
      sym_bareid,
    STATE(300), 1,
      sym_vom_param_list,
    ACTIONS(280), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [5155] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    STATE(48), 1,
      sym_binop,
    ACTIONS(421), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
    ACTIONS(262), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [5175] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_PERCENT,
    STATE(112), 1,
      sym_bareid,
    STATE(196), 1,
      sym_mod_ref,
    STATE(267), 1,
      sym_mod_refs,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
    STATE(141), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5199] = 9,
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
    STATE(66), 1,
      sym_bareid,
    STATE(233), 1,
      sym_setting,
    STATE(356), 1,
      sym_id,
    STATE(369), 1,
      sym_setting_list,
  [5227] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [5240] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 7,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [5253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 7,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [5266] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 7,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [5279] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    ACTIONS(431), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      sym_binop,
    ACTIONS(262), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [5298] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_PERCENT,
    STATE(112), 1,
      sym_bareid,
    STATE(216), 1,
      sym_mod_ref,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
    STATE(141), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5319] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    ACTIONS(433), 1,
      anon_sym_DOT,
    STATE(48), 1,
      sym_binop,
    ACTIONS(262), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [5338] = 8,
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
    STATE(66), 1,
      sym_bareid,
    STATE(282), 1,
      sym_setting,
    STATE(356), 1,
      sym_id,
  [5363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 7,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [5376] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_COMMA,
    STATE(142), 1,
      aux_sym_func_term_list_repeat1,
    ACTIONS(437), 5,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [5393] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_PERCENT,
    STATE(112), 1,
      sym_bareid,
    STATE(219), 1,
      sym_mod_ref,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
    STATE(141), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5414] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_COMMA,
    STATE(142), 1,
      aux_sym_func_term_list_repeat1,
    ACTIONS(442), 5,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [5431] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_COMMA,
    STATE(144), 1,
      aux_sym_func_term_list_repeat1,
    ACTIONS(446), 5,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [5448] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_PLUS,
    STATE(147), 1,
      aux_sym_unnbody_repeat1,
    ACTIONS(448), 5,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [5465] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_PLUS,
    STATE(147), 1,
      aux_sym_unnbody_repeat1,
    ACTIONS(452), 5,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [5482] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_PLUS,
    STATE(146), 1,
      aux_sym_unnbody_repeat1,
    ACTIONS(457), 5,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [5499] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    ACTIONS(459), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      sym_binop,
    ACTIONS(262), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [5518] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_PERCENT,
    STATE(112), 1,
      sym_bareid,
    STATE(204), 1,
      sym_mod_ref,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
    STATE(141), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5539] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_PLUS,
  [5551] = 7,
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
    STATE(66), 1,
      sym_bareid,
    STATE(318), 1,
      sym_id,
  [5573] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [5585] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [5597] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [5609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [5621] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_PLUS,
  [5633] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [5645] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_COLON,
    ACTIONS(475), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_PLUS,
  [5659] = 7,
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
    STATE(66), 1,
      sym_bareid,
    STATE(268), 1,
      sym_id,
  [5681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [5693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_PLUS,
  [5705] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [5717] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [5729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [5741] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [5753] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 2,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(489), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_bareid_token2,
      sym_qualid,
  [5767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 6,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [5779] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_PERCENT,
    STATE(276), 1,
      sym_mod_ref_rename,
    STATE(278), 1,
      sym_bareid,
    STATE(284), 1,
      sym_val_or_model_program,
    ACTIONS(280), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [5799] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [5811] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 2,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(469), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_bareid_token2,
      sym_qualid,
  [5825] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 3,
      anon_sym_LBRACE,
      aux_sym_bareid_token2,
      sym_qualid,
    ACTIONS(499), 3,
      anon_sym_any,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
  [5839] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [5851] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 2,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(503), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_bareid_token2,
      sym_qualid,
  [5865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [5877] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 6,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [5889] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [5901] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [5913] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [5925] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_digits,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_string,
    STATE(288), 1,
      sym_constant,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [5945] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_boot,
    ACTIONS(343), 1,
      anon_sym_property,
    STATE(163), 1,
      sym_machine_sentence,
    STATE(182), 1,
      sym_machine_prop,
    ACTIONS(341), 2,
      anon_sym_initially,
      anon_sym_next,
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
  [5989] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [6001] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_PERCENT,
    STATE(244), 1,
      sym_mod_ref_rename,
    STATE(336), 1,
      sym_bareid,
    STATE(337), 1,
      sym_model_param_list,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [6021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_PLUS,
  [6033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [6045] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_PERCENT,
    STATE(273), 1,
      sym_mod_ref_rename,
    STATE(336), 1,
      sym_bareid,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [6062] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_COMMA,
    STATE(195), 1,
      aux_sym_fields_repeat1,
    ACTIONS(523), 3,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [6077] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_COMMA,
    STATE(190), 1,
      aux_sym_mod_refs_repeat1,
    ACTIONS(527), 3,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LBRACK,
  [6092] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      aux_sym_body_repeat1,
    ACTIONS(532), 3,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [6107] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_COMMA,
    STATE(190), 1,
      aux_sym_mod_refs_repeat1,
    ACTIONS(536), 3,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LBRACK,
  [6122] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(351), 1,
      anon_sym_PERCENT,
    ACTIONS(540), 1,
      anon_sym_system,
    STATE(197), 1,
      sym_bareid,
  [6141] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_COMMA,
    STATE(189), 1,
      aux_sym_fields_repeat1,
    ACTIONS(542), 3,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [6156] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_COMMA,
    STATE(195), 1,
      aux_sym_fields_repeat1,
    ACTIONS(544), 3,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [6171] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_COMMA,
    STATE(192), 1,
      aux_sym_mod_refs_repeat1,
    ACTIONS(549), 3,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LBRACK,
  [6186] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_LPAREN,
    STATE(175), 1,
      sym_transform_rest,
    STATE(234), 1,
      sym_transform_sig,
    STATE(349), 1,
      sym_trans_sig_in,
    STATE(351), 1,
      sym_transform_sig_config,
  [6205] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_COMMA,
    STATE(198), 1,
      aux_sym_body_repeat1,
    ACTIONS(553), 3,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [6220] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_LPAREN,
    STATE(155), 1,
      sym_tsystem_rest,
    STATE(234), 1,
      sym_transform_sig,
    STATE(290), 1,
      sym_transform_sig_config,
    STATE(349), 1,
      sym_trans_sig_in,
  [6239] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    STATE(198), 1,
      aux_sym_body_repeat1,
    ACTIONS(558), 3,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [6254] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_SEMI,
    STATE(220), 1,
      aux_sym_body_list_repeat1,
    ACTIONS(560), 2,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [6268] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_LBRACE,
    ACTIONS(566), 1,
      anon_sym_machine,
    STATE(202), 2,
      sym_machine_sig,
      aux_sym_machine_sig_config_repeat1,
  [6282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [6292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 4,
      anon_sym_LBRACE,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [6302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [6312] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [6322] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_PERCENT,
    STATE(199), 1,
      sym_bareid,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [6336] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 4,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
  [6346] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_PERCENT,
    STATE(352), 1,
      sym_bareid,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [6360] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [6370] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [6380] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_machine,
    ACTIONS(575), 1,
      anon_sym_LBRACE,
    STATE(202), 2,
      sym_machine_sig,
      aux_sym_machine_sig_config_repeat1,
  [6394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [6404] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
    ACTIONS(581), 2,
      anon_sym_includes,
      anon_sym_extends,
  [6416] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_PERCENT,
    STATE(289), 1,
      sym_bareid,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [6430] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 4,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_COMMA,
      anon_sym_LBRACK,
  [6440] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_PERCENT,
    STATE(88), 1,
      sym_bareid,
    ACTIONS(280), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [6454] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [6464] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 4,
      anon_sym_LBRACE,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [6474] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_SEMI,
    STATE(220), 1,
      aux_sym_body_list_repeat1,
    ACTIONS(587), 2,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [6488] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_PERCENT,
    STATE(359), 1,
      sym_bareid,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [6502] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_PERCENT,
    STATE(109), 1,
      sym_bareid,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [6516] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_PERCENT,
    STATE(293), 1,
      sym_bareid,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [6530] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_SEMI,
    STATE(201), 1,
      aux_sym_body_list_repeat1,
    ACTIONS(592), 2,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [6544] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_RPAREN,
    ACTIONS(596), 1,
      anon_sym_COMMA,
    STATE(243), 1,
      aux_sym_model_param_list_repeat1,
  [6557] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_RBRACE,
    ACTIONS(600), 1,
      anon_sym_COMMA,
    STATE(226), 1,
      aux_sym_enum_list_repeat1,
  [6570] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_DOT,
    ACTIONS(605), 1,
      anon_sym_SEMI,
    STATE(254), 1,
      aux_sym_choice_list_repeat1,
  [6583] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_DOT,
    ACTIONS(609), 1,
      anon_sym_COMMA,
    STATE(228), 1,
      aux_sym_model_fact_list_repeat1,
  [6596] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_DOT,
    ACTIONS(614), 1,
      anon_sym_COMMA,
    STATE(228), 1,
      aux_sym_model_fact_list_repeat1,
  [6609] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(616), 1,
      anon_sym_LBRACE,
    STATE(355), 1,
      sym_config,
  [6622] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(618), 1,
      anon_sym_LBRACE,
    STATE(354), 1,
      sym_config,
  [6635] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_EQ,
    ACTIONS(622), 1,
      anon_sym_COMMA,
    STATE(237), 1,
      aux_sym_step_or_update_lhs_repeat1,
  [6648] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_COMMA,
    ACTIONS(626), 1,
      anon_sym_RBRACK,
    STATE(236), 1,
      aux_sym_setting_list_repeat1,
  [6661] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(628), 1,
      anon_sym_LBRACE,
    STATE(298), 1,
      sym_config,
  [6674] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 1,
      anon_sym_RBRACE,
    ACTIONS(632), 1,
      anon_sym_COMMA,
    STATE(226), 1,
      aux_sym_enum_list_repeat1,
  [6687] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_COMMA,
    ACTIONS(634), 1,
      anon_sym_RBRACK,
    STATE(256), 1,
      aux_sym_setting_list_repeat1,
  [6700] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_COMMA,
    ACTIONS(636), 1,
      anon_sym_EQ,
    STATE(250), 1,
      aux_sym_step_or_update_lhs_repeat1,
  [6713] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 1,
      anon_sym_RPAREN,
    ACTIONS(640), 1,
      anon_sym_COMMA,
    STATE(238), 1,
      aux_sym_vom_param_list_repeat1,
  [6726] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(79), 1,
      sym_maparrow,
    ACTIONS(643), 2,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [6737] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      anon_sym_COMMA,
    ACTIONS(645), 1,
      anon_sym_DOT,
    STATE(228), 1,
      aux_sym_model_fact_list_repeat1,
  [6750] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      anon_sym_COMMA,
    ACTIONS(645), 1,
      anon_sym_DOT,
    STATE(229), 1,
      aux_sym_model_fact_list_repeat1,
  [6763] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_RPAREN,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    STATE(242), 1,
      aux_sym_mod_arg_list_repeat1,
  [6776] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_RPAREN,
    ACTIONS(654), 1,
      anon_sym_COMMA,
    STATE(243), 1,
      aux_sym_model_param_list_repeat1,
  [6789] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_COMMA,
    ACTIONS(657), 1,
      anon_sym_RPAREN,
    STATE(225), 1,
      aux_sym_model_param_list_repeat1,
  [6802] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      anon_sym_COMMA,
    ACTIONS(659), 1,
      anon_sym_DOT,
    STATE(240), 1,
      aux_sym_model_fact_list_repeat1,
  [6815] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_RPAREN,
    ACTIONS(663), 1,
      anon_sym_COMMA,
    STATE(238), 1,
      aux_sym_vom_param_list_repeat1,
  [6828] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      anon_sym_RPAREN,
    ACTIONS(667), 1,
      anon_sym_COMMA,
    STATE(251), 1,
      aux_sym_mod_arg_list_repeat1,
  [6841] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_COMMA,
    ACTIONS(669), 1,
      anon_sym_RBRACE,
    STATE(235), 1,
      aux_sym_enum_list_repeat1,
  [6854] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_COMMA,
    ACTIONS(671), 1,
      anon_sym_RPAREN,
    STATE(246), 1,
      aux_sym_vom_param_list_repeat1,
  [6867] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_EQ,
    ACTIONS(675), 1,
      anon_sym_COMMA,
    STATE(250), 1,
      aux_sym_step_or_update_lhs_repeat1,
  [6880] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      anon_sym_COMMA,
    ACTIONS(678), 1,
      anon_sym_RPAREN,
    STATE(242), 1,
      aux_sym_mod_arg_list_repeat1,
  [6893] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_SEMI,
    ACTIONS(680), 1,
      anon_sym_DOT,
    STATE(227), 1,
      aux_sym_choice_list_repeat1,
  [6906] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_DOT_DOT,
    ACTIONS(682), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [6917] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      anon_sym_DOT,
    ACTIONS(688), 1,
      anon_sym_SEMI,
    STATE(254), 1,
      aux_sym_choice_list_repeat1,
  [6930] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 3,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [6939] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_COMMA,
    ACTIONS(694), 1,
      anon_sym_RBRACK,
    STATE(256), 1,
      aux_sym_setting_list_repeat1,
  [6952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [6960] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      anon_sym_RBRACE,
    ACTIONS(698), 1,
      anon_sym_PIPE,
  [6970] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [6978] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_DASH,
    ACTIONS(704), 1,
      sym_digits,
  [6988] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
  [6996] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 2,
      anon_sym_LBRACE,
      anon_sym_machine,
  [7004] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_DOT,
    ACTIONS(712), 1,
      anon_sym_COLON_DASH,
  [7014] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [7022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [7030] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [7038] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [7046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 2,
      anon_sym_EQ,
      anon_sym_COMMA,
  [7054] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(277), 1,
      sym_string,
  [7064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [7072] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [7080] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(118), 1,
      sym_string,
  [7090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7098] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
  [7106] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7114] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7130] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_COLON_COLON,
    ACTIONS(726), 1,
      anon_sym_COLON,
  [7140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [7148] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7156] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [7164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7172] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(135), 1,
      sym_string,
  [7182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7190] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_DASH,
    ACTIONS(736), 1,
      sym_digits,
  [7200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [7208] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [7216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7224] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_LPAREN,
    STATE(353), 1,
      sym_machine_sig_in,
  [7234] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 1,
      anon_sym_LBRACE,
  [7241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      anon_sym_LPAREN,
  [7248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      anon_sym_RBRACK,
  [7255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_EQ,
  [7262] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      anon_sym_model,
  [7269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      anon_sym_EQ,
  [7276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 1,
      anon_sym_DOT_DOT,
  [7283] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      anon_sym_LPAREN,
  [7290] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_LBRACE,
  [7297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_DOT,
  [7304] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_RPAREN,
  [7311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      anon_sym_returns,
  [7318] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_RPAREN,
  [7325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_RPAREN,
  [7332] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      aux_sym_model_contract_token1,
  [7339] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      aux_sym_model_contract_token1,
  [7346] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_DQUOTE,
  [7353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      anon_sym_DOT,
  [7360] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      anon_sym_DOT,
  [7367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      anon_sym_DOT,
  [7374] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      anon_sym_RPAREN,
  [7381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      anon_sym_RPAREN,
  [7388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      anon_sym_RPAREN,
  [7395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_of,
  [7402] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_RBRACE,
  [7409] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      sym_digits,
  [7416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      anon_sym_RBRACE,
  [7423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      sym_digits,
  [7430] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      anon_sym_DOT,
  [7437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      anon_sym_returns,
  [7444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      anon_sym_RBRACE,
  [7451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_of,
  [7458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      anon_sym_DOT,
  [7465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 1,
      anon_sym_DOT,
  [7472] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_DOT,
  [7479] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_DOT,
  [7486] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_DOT,
  [7493] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      anon_sym_RBRACE,
  [7500] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym_DOT,
  [7507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      anon_sym_DOT,
  [7514] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      anon_sym_EQ,
  [7521] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      anon_sym_DOT,
  [7528] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      sym_digits,
  [7535] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      anon_sym_DOT,
  [7542] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      anon_sym_DOT,
  [7549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      anon_sym_RPAREN,
  [7556] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_COLON_COLON,
  [7563] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_RPAREN,
  [7570] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_DOT,
  [7577] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 1,
      anon_sym_DOT,
  [7584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 1,
      anon_sym_DOT,
  [7591] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_DOT,
  [7598] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_DOT,
  [7605] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      anon_sym_DOT,
  [7612] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(848), 1,
      anon_sym_RBRACE,
  [7619] = 2,
    ACTIONS(850), 1,
      aux_sym_string_token1,
    ACTIONS(852), 1,
      sym_comment,
  [7626] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      anon_sym_RBRACE,
  [7633] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 1,
      anon_sym_RBRACE,
  [7640] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_DOT,
  [7647] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_returns,
  [7654] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_LPAREN,
  [7661] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      anon_sym_LBRACE,
  [7668] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      anon_sym_of,
  [7675] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      anon_sym_of,
  [7682] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 1,
      anon_sym_LBRACE,
  [7689] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 1,
      anon_sym_LBRACE,
  [7696] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      anon_sym_EQ,
  [7703] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      anon_sym_DOT,
  [7710] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(878), 1,
      anon_sym_RBRACK,
  [7717] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(880), 1,
      anon_sym_of,
  [7724] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      anon_sym_LPAREN,
  [7731] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      aux_sym_bareid_token1,
  [7738] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      anon_sym_RBRACK,
  [7745] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(888), 1,
      aux_sym_bareid_token1,
  [7752] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      anon_sym_DQUOTE,
  [7759] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(892), 1,
      anon_sym_RPAREN,
  [7766] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_DOT,
  [7773] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      aux_sym_bareid_token1,
  [7780] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      anon_sym_RBRACK,
  [7787] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      anon_sym_RBRACK,
  [7794] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      anon_sym_LPAREN,
  [7801] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      anon_sym_LBRACE,
  [7808] = 2,
    ACTIONS(852), 1,
      sym_comment,
    ACTIONS(906), 1,
      aux_sym_string_token1,
  [7815] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 1,
      anon_sym_DOT,
  [7822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(910), 1,
      anon_sym_LBRACE,
  [7829] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(912), 1,
      anon_sym_LBRACE,
  [7836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 1,
      ts_builtin_sym_end,
  [7843] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 94,
  [SMALL_STATE(4)] = 187,
  [SMALL_STATE(5)] = 278,
  [SMALL_STATE(6)] = 369,
  [SMALL_STATE(7)] = 459,
  [SMALL_STATE(8)] = 549,
  [SMALL_STATE(9)] = 636,
  [SMALL_STATE(10)] = 720,
  [SMALL_STATE(11)] = 804,
  [SMALL_STATE(12)] = 839,
  [SMALL_STATE(13)] = 874,
  [SMALL_STATE(14)] = 909,
  [SMALL_STATE(15)] = 944,
  [SMALL_STATE(16)] = 1020,
  [SMALL_STATE(17)] = 1095,
  [SMALL_STATE(18)] = 1168,
  [SMALL_STATE(19)] = 1233,
  [SMALL_STATE(20)] = 1288,
  [SMALL_STATE(21)] = 1353,
  [SMALL_STATE(22)] = 1408,
  [SMALL_STATE(23)] = 1473,
  [SMALL_STATE(24)] = 1538,
  [SMALL_STATE(25)] = 1603,
  [SMALL_STATE(26)] = 1668,
  [SMALL_STATE(27)] = 1733,
  [SMALL_STATE(28)] = 1798,
  [SMALL_STATE(29)] = 1863,
  [SMALL_STATE(30)] = 1918,
  [SMALL_STATE(31)] = 1973,
  [SMALL_STATE(32)] = 2035,
  [SMALL_STATE(33)] = 2097,
  [SMALL_STATE(34)] = 2159,
  [SMALL_STATE(35)] = 2221,
  [SMALL_STATE(36)] = 2248,
  [SMALL_STATE(37)] = 2307,
  [SMALL_STATE(38)] = 2366,
  [SMALL_STATE(39)] = 2392,
  [SMALL_STATE(40)] = 2448,
  [SMALL_STATE(41)] = 2474,
  [SMALL_STATE(42)] = 2504,
  [SMALL_STATE(43)] = 2530,
  [SMALL_STATE(44)] = 2582,
  [SMALL_STATE(45)] = 2638,
  [SMALL_STATE(46)] = 2674,
  [SMALL_STATE(47)] = 2705,
  [SMALL_STATE(48)] = 2758,
  [SMALL_STATE(49)] = 2811,
  [SMALL_STATE(50)] = 2864,
  [SMALL_STATE(51)] = 2891,
  [SMALL_STATE(52)] = 2944,
  [SMALL_STATE(53)] = 2997,
  [SMALL_STATE(54)] = 3050,
  [SMALL_STATE(55)] = 3103,
  [SMALL_STATE(56)] = 3156,
  [SMALL_STATE(57)] = 3209,
  [SMALL_STATE(58)] = 3262,
  [SMALL_STATE(59)] = 3289,
  [SMALL_STATE(60)] = 3313,
  [SMALL_STATE(61)] = 3337,
  [SMALL_STATE(62)] = 3361,
  [SMALL_STATE(63)] = 3385,
  [SMALL_STATE(64)] = 3409,
  [SMALL_STATE(65)] = 3433,
  [SMALL_STATE(66)] = 3456,
  [SMALL_STATE(67)] = 3479,
  [SMALL_STATE(68)] = 3501,
  [SMALL_STATE(69)] = 3523,
  [SMALL_STATE(70)] = 3567,
  [SMALL_STATE(71)] = 3605,
  [SMALL_STATE(72)] = 3640,
  [SMALL_STATE(73)] = 3681,
  [SMALL_STATE(74)] = 3722,
  [SMALL_STATE(75)] = 3747,
  [SMALL_STATE(76)] = 3770,
  [SMALL_STATE(77)] = 3791,
  [SMALL_STATE(78)] = 3812,
  [SMALL_STATE(79)] = 3835,
  [SMALL_STATE(80)] = 3875,
  [SMALL_STATE(81)] = 3899,
  [SMALL_STATE(82)] = 3919,
  [SMALL_STATE(83)] = 3939,
  [SMALL_STATE(84)] = 3979,
  [SMALL_STATE(85)] = 4019,
  [SMALL_STATE(86)] = 4039,
  [SMALL_STATE(87)] = 4059,
  [SMALL_STATE(88)] = 4095,
  [SMALL_STATE(89)] = 4129,
  [SMALL_STATE(90)] = 4169,
  [SMALL_STATE(91)] = 4189,
  [SMALL_STATE(92)] = 4226,
  [SMALL_STATE(93)] = 4259,
  [SMALL_STATE(94)] = 4282,
  [SMALL_STATE(95)] = 4315,
  [SMALL_STATE(96)] = 4337,
  [SMALL_STATE(97)] = 4371,
  [SMALL_STATE(98)] = 4389,
  [SMALL_STATE(99)] = 4407,
  [SMALL_STATE(100)] = 4429,
  [SMALL_STATE(101)] = 4447,
  [SMALL_STATE(102)] = 4465,
  [SMALL_STATE(103)] = 4487,
  [SMALL_STATE(104)] = 4507,
  [SMALL_STATE(105)] = 4535,
  [SMALL_STATE(106)] = 4554,
  [SMALL_STATE(107)] = 4573,
  [SMALL_STATE(108)] = 4600,
  [SMALL_STATE(109)] = 4631,
  [SMALL_STATE(110)] = 4648,
  [SMALL_STATE(111)] = 4679,
  [SMALL_STATE(112)] = 4710,
  [SMALL_STATE(113)] = 4729,
  [SMALL_STATE(114)] = 4749,
  [SMALL_STATE(115)] = 4773,
  [SMALL_STATE(116)] = 4797,
  [SMALL_STATE(117)] = 4821,
  [SMALL_STATE(118)] = 4849,
  [SMALL_STATE(119)] = 4863,
  [SMALL_STATE(120)] = 4887,
  [SMALL_STATE(121)] = 4915,
  [SMALL_STATE(122)] = 4935,
  [SMALL_STATE(123)] = 4963,
  [SMALL_STATE(124)] = 4991,
  [SMALL_STATE(125)] = 5019,
  [SMALL_STATE(126)] = 5047,
  [SMALL_STATE(127)] = 5073,
  [SMALL_STATE(128)] = 5101,
  [SMALL_STATE(129)] = 5129,
  [SMALL_STATE(130)] = 5155,
  [SMALL_STATE(131)] = 5175,
  [SMALL_STATE(132)] = 5199,
  [SMALL_STATE(133)] = 5227,
  [SMALL_STATE(134)] = 5240,
  [SMALL_STATE(135)] = 5253,
  [SMALL_STATE(136)] = 5266,
  [SMALL_STATE(137)] = 5279,
  [SMALL_STATE(138)] = 5298,
  [SMALL_STATE(139)] = 5319,
  [SMALL_STATE(140)] = 5338,
  [SMALL_STATE(141)] = 5363,
  [SMALL_STATE(142)] = 5376,
  [SMALL_STATE(143)] = 5393,
  [SMALL_STATE(144)] = 5414,
  [SMALL_STATE(145)] = 5431,
  [SMALL_STATE(146)] = 5448,
  [SMALL_STATE(147)] = 5465,
  [SMALL_STATE(148)] = 5482,
  [SMALL_STATE(149)] = 5499,
  [SMALL_STATE(150)] = 5518,
  [SMALL_STATE(151)] = 5539,
  [SMALL_STATE(152)] = 5551,
  [SMALL_STATE(153)] = 5573,
  [SMALL_STATE(154)] = 5585,
  [SMALL_STATE(155)] = 5597,
  [SMALL_STATE(156)] = 5609,
  [SMALL_STATE(157)] = 5621,
  [SMALL_STATE(158)] = 5633,
  [SMALL_STATE(159)] = 5645,
  [SMALL_STATE(160)] = 5659,
  [SMALL_STATE(161)] = 5681,
  [SMALL_STATE(162)] = 5693,
  [SMALL_STATE(163)] = 5705,
  [SMALL_STATE(164)] = 5717,
  [SMALL_STATE(165)] = 5729,
  [SMALL_STATE(166)] = 5741,
  [SMALL_STATE(167)] = 5753,
  [SMALL_STATE(168)] = 5767,
  [SMALL_STATE(169)] = 5779,
  [SMALL_STATE(170)] = 5799,
  [SMALL_STATE(171)] = 5811,
  [SMALL_STATE(172)] = 5825,
  [SMALL_STATE(173)] = 5839,
  [SMALL_STATE(174)] = 5851,
  [SMALL_STATE(175)] = 5865,
  [SMALL_STATE(176)] = 5877,
  [SMALL_STATE(177)] = 5889,
  [SMALL_STATE(178)] = 5901,
  [SMALL_STATE(179)] = 5913,
  [SMALL_STATE(180)] = 5925,
  [SMALL_STATE(181)] = 5945,
  [SMALL_STATE(182)] = 5965,
  [SMALL_STATE(183)] = 5977,
  [SMALL_STATE(184)] = 5989,
  [SMALL_STATE(185)] = 6001,
  [SMALL_STATE(186)] = 6021,
  [SMALL_STATE(187)] = 6033,
  [SMALL_STATE(188)] = 6045,
  [SMALL_STATE(189)] = 6062,
  [SMALL_STATE(190)] = 6077,
  [SMALL_STATE(191)] = 6092,
  [SMALL_STATE(192)] = 6107,
  [SMALL_STATE(193)] = 6122,
  [SMALL_STATE(194)] = 6141,
  [SMALL_STATE(195)] = 6156,
  [SMALL_STATE(196)] = 6171,
  [SMALL_STATE(197)] = 6186,
  [SMALL_STATE(198)] = 6205,
  [SMALL_STATE(199)] = 6220,
  [SMALL_STATE(200)] = 6239,
  [SMALL_STATE(201)] = 6254,
  [SMALL_STATE(202)] = 6268,
  [SMALL_STATE(203)] = 6282,
  [SMALL_STATE(204)] = 6292,
  [SMALL_STATE(205)] = 6302,
  [SMALL_STATE(206)] = 6312,
  [SMALL_STATE(207)] = 6322,
  [SMALL_STATE(208)] = 6336,
  [SMALL_STATE(209)] = 6346,
  [SMALL_STATE(210)] = 6360,
  [SMALL_STATE(211)] = 6370,
  [SMALL_STATE(212)] = 6380,
  [SMALL_STATE(213)] = 6394,
  [SMALL_STATE(214)] = 6404,
  [SMALL_STATE(215)] = 6416,
  [SMALL_STATE(216)] = 6430,
  [SMALL_STATE(217)] = 6440,
  [SMALL_STATE(218)] = 6454,
  [SMALL_STATE(219)] = 6464,
  [SMALL_STATE(220)] = 6474,
  [SMALL_STATE(221)] = 6488,
  [SMALL_STATE(222)] = 6502,
  [SMALL_STATE(223)] = 6516,
  [SMALL_STATE(224)] = 6530,
  [SMALL_STATE(225)] = 6544,
  [SMALL_STATE(226)] = 6557,
  [SMALL_STATE(227)] = 6570,
  [SMALL_STATE(228)] = 6583,
  [SMALL_STATE(229)] = 6596,
  [SMALL_STATE(230)] = 6609,
  [SMALL_STATE(231)] = 6622,
  [SMALL_STATE(232)] = 6635,
  [SMALL_STATE(233)] = 6648,
  [SMALL_STATE(234)] = 6661,
  [SMALL_STATE(235)] = 6674,
  [SMALL_STATE(236)] = 6687,
  [SMALL_STATE(237)] = 6700,
  [SMALL_STATE(238)] = 6713,
  [SMALL_STATE(239)] = 6726,
  [SMALL_STATE(240)] = 6737,
  [SMALL_STATE(241)] = 6750,
  [SMALL_STATE(242)] = 6763,
  [SMALL_STATE(243)] = 6776,
  [SMALL_STATE(244)] = 6789,
  [SMALL_STATE(245)] = 6802,
  [SMALL_STATE(246)] = 6815,
  [SMALL_STATE(247)] = 6828,
  [SMALL_STATE(248)] = 6841,
  [SMALL_STATE(249)] = 6854,
  [SMALL_STATE(250)] = 6867,
  [SMALL_STATE(251)] = 6880,
  [SMALL_STATE(252)] = 6893,
  [SMALL_STATE(253)] = 6906,
  [SMALL_STATE(254)] = 6917,
  [SMALL_STATE(255)] = 6930,
  [SMALL_STATE(256)] = 6939,
  [SMALL_STATE(257)] = 6952,
  [SMALL_STATE(258)] = 6960,
  [SMALL_STATE(259)] = 6970,
  [SMALL_STATE(260)] = 6978,
  [SMALL_STATE(261)] = 6988,
  [SMALL_STATE(262)] = 6996,
  [SMALL_STATE(263)] = 7004,
  [SMALL_STATE(264)] = 7014,
  [SMALL_STATE(265)] = 7022,
  [SMALL_STATE(266)] = 7030,
  [SMALL_STATE(267)] = 7038,
  [SMALL_STATE(268)] = 7046,
  [SMALL_STATE(269)] = 7054,
  [SMALL_STATE(270)] = 7064,
  [SMALL_STATE(271)] = 7072,
  [SMALL_STATE(272)] = 7080,
  [SMALL_STATE(273)] = 7090,
  [SMALL_STATE(274)] = 7098,
  [SMALL_STATE(275)] = 7106,
  [SMALL_STATE(276)] = 7114,
  [SMALL_STATE(277)] = 7122,
  [SMALL_STATE(278)] = 7130,
  [SMALL_STATE(279)] = 7140,
  [SMALL_STATE(280)] = 7148,
  [SMALL_STATE(281)] = 7156,
  [SMALL_STATE(282)] = 7164,
  [SMALL_STATE(283)] = 7172,
  [SMALL_STATE(284)] = 7182,
  [SMALL_STATE(285)] = 7190,
  [SMALL_STATE(286)] = 7200,
  [SMALL_STATE(287)] = 7208,
  [SMALL_STATE(288)] = 7216,
  [SMALL_STATE(289)] = 7224,
  [SMALL_STATE(290)] = 7234,
  [SMALL_STATE(291)] = 7241,
  [SMALL_STATE(292)] = 7248,
  [SMALL_STATE(293)] = 7255,
  [SMALL_STATE(294)] = 7262,
  [SMALL_STATE(295)] = 7269,
  [SMALL_STATE(296)] = 7276,
  [SMALL_STATE(297)] = 7283,
  [SMALL_STATE(298)] = 7290,
  [SMALL_STATE(299)] = 7297,
  [SMALL_STATE(300)] = 7304,
  [SMALL_STATE(301)] = 7311,
  [SMALL_STATE(302)] = 7318,
  [SMALL_STATE(303)] = 7325,
  [SMALL_STATE(304)] = 7332,
  [SMALL_STATE(305)] = 7339,
  [SMALL_STATE(306)] = 7346,
  [SMALL_STATE(307)] = 7353,
  [SMALL_STATE(308)] = 7360,
  [SMALL_STATE(309)] = 7367,
  [SMALL_STATE(310)] = 7374,
  [SMALL_STATE(311)] = 7381,
  [SMALL_STATE(312)] = 7388,
  [SMALL_STATE(313)] = 7395,
  [SMALL_STATE(314)] = 7402,
  [SMALL_STATE(315)] = 7409,
  [SMALL_STATE(316)] = 7416,
  [SMALL_STATE(317)] = 7423,
  [SMALL_STATE(318)] = 7430,
  [SMALL_STATE(319)] = 7437,
  [SMALL_STATE(320)] = 7444,
  [SMALL_STATE(321)] = 7451,
  [SMALL_STATE(322)] = 7458,
  [SMALL_STATE(323)] = 7465,
  [SMALL_STATE(324)] = 7472,
  [SMALL_STATE(325)] = 7479,
  [SMALL_STATE(326)] = 7486,
  [SMALL_STATE(327)] = 7493,
  [SMALL_STATE(328)] = 7500,
  [SMALL_STATE(329)] = 7507,
  [SMALL_STATE(330)] = 7514,
  [SMALL_STATE(331)] = 7521,
  [SMALL_STATE(332)] = 7528,
  [SMALL_STATE(333)] = 7535,
  [SMALL_STATE(334)] = 7542,
  [SMALL_STATE(335)] = 7549,
  [SMALL_STATE(336)] = 7556,
  [SMALL_STATE(337)] = 7563,
  [SMALL_STATE(338)] = 7570,
  [SMALL_STATE(339)] = 7577,
  [SMALL_STATE(340)] = 7584,
  [SMALL_STATE(341)] = 7591,
  [SMALL_STATE(342)] = 7598,
  [SMALL_STATE(343)] = 7605,
  [SMALL_STATE(344)] = 7612,
  [SMALL_STATE(345)] = 7619,
  [SMALL_STATE(346)] = 7626,
  [SMALL_STATE(347)] = 7633,
  [SMALL_STATE(348)] = 7640,
  [SMALL_STATE(349)] = 7647,
  [SMALL_STATE(350)] = 7654,
  [SMALL_STATE(351)] = 7661,
  [SMALL_STATE(352)] = 7668,
  [SMALL_STATE(353)] = 7675,
  [SMALL_STATE(354)] = 7682,
  [SMALL_STATE(355)] = 7689,
  [SMALL_STATE(356)] = 7696,
  [SMALL_STATE(357)] = 7703,
  [SMALL_STATE(358)] = 7710,
  [SMALL_STATE(359)] = 7717,
  [SMALL_STATE(360)] = 7724,
  [SMALL_STATE(361)] = 7731,
  [SMALL_STATE(362)] = 7738,
  [SMALL_STATE(363)] = 7745,
  [SMALL_STATE(364)] = 7752,
  [SMALL_STATE(365)] = 7759,
  [SMALL_STATE(366)] = 7766,
  [SMALL_STATE(367)] = 7773,
  [SMALL_STATE(368)] = 7780,
  [SMALL_STATE(369)] = 7787,
  [SMALL_STATE(370)] = 7794,
  [SMALL_STATE(371)] = 7801,
  [SMALL_STATE(372)] = 7808,
  [SMALL_STATE(373)] = 7815,
  [SMALL_STATE(374)] = 7822,
  [SMALL_STATE(375)] = 7829,
  [SMALL_STATE(376)] = 7836,
  [SMALL_STATE(377)] = 7843,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_body, 1),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(25),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(47),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(27),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(122),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(97),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(77),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(77),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(345),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(363),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(11),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(11),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(66),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(25),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(47),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(24),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(123),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(97),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(77),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(77),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(345),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(363),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(11),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(11),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(66),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dom_sentences, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_body, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(47),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(18),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(17),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(122),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(97),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(77),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(77),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(345),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(363),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(11),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(11),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(66),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bareid, 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bareid, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bareid, 2),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bareid, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(215),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(294),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(221),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(193),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(217),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 1),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term, 3),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_term, 3),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term, 2),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_term, 2),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term, 1),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_term, 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term, 4, .production_id = 2),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_term, 4, .production_id = 2),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_trans_body_repeat1, 2),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dom_sentences_repeat1, 2),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_model_body_repeat1, 2),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_steps, 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trans_steps_repeat1, 2),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_steps_repeat1, 2), SHIFT_REPEAT(132),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trans_steps_repeat1, 2), SHIFT_REPEAT(363),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trans_steps_repeat1, 2), SHIFT_REPEAT(11),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_steps_repeat1, 2), SHIFT_REPEAT(11),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_steps_repeat1, 2), SHIFT_REPEAT(66),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sentence_config, 3),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sentence_config, 3),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_or_compr, 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain_sig, 2, .production_id = 1),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_machine_body_repeat1, 2),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_machine_body_repeat1, 2), SHIFT_REPEAT(120),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_machine_body_repeat1, 2), SHIFT_REPEAT(125),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_machine_body_repeat1, 2), SHIFT_REPEAT(223),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_machine_body_repeat1, 2), SHIFT_REPEAT(128),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_body, 1),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 4),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unop, 1),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unop, 1),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relop, 1),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relop, 1),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 2),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binop, 1),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binop, 1),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 3),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain_sig, 3, .production_id = 1),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_ref_rename, 3, .production_id = 2),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_ref_no_rename, 1),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_app_arg, 1),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_ref_rename, 5, .production_id = 2),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_fact, 3),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_fact, 1),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 3),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compr, 3),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_ref_no_rename, 3),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compr, 5),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_ref, 1),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_term_list_repeat1, 2),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_term_list_repeat1, 2), SHIFT_REPEAT(31),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term_list, 2),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term_list, 1),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unnbody, 2),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unnbody_repeat1, 2),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unnbody_repeat1, 2), SHIFT_REPEAT(127),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unnbody, 1),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unncmp, 1),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 4),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sentence, 2),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tsystem, 4),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 4),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unncmp, 3),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine, 4),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeid, 1),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain, 4),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sentence_conf, 2),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_prop, 5),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model, 4),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tsystem_rest, 4),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_step_config, 1),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trans_step_config, 1),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_step, 4),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maparrow, 1),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_maparrow, 1),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain, 3),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_step_config, 2),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trans_step_config, 2),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform, 3, .production_id = 1),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform_rest, 3),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model, 3),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform_rest, 4),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sentence, 1),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tsystem_rest, 3),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sentence_conf, 1),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine, 3),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fields, 2),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mod_refs_repeat1, 2),
  [529] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mod_refs_repeat1, 2), SHIFT_REPEAT(138),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_refs, 2),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fields, 1),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fields_repeat1, 2),
  [546] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fields_repeat1, 2), SHIFT_REPEAT(91),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_refs, 1),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [555] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(36),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_list, 2),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_machine_sig_config_repeat1, 2),
  [566] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_machine_sig_config_repeat1, 2), SHIFT_REPEAT(215),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, .production_id = 2),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_intro, 5),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 2),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sig_config, 1),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_sig, 1),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_intro, 4),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_list_repeat1, 2),
  [589] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_list_repeat1, 2), SHIFT_REPEAT(33),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_list, 1),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_param_list, 2),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_list_repeat1, 2),
  [600] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_list_repeat1, 2), SHIFT_REPEAT(71),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_list, 2),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_model_fact_list_repeat1, 2),
  [609] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_fact_list_repeat1, 2), SHIFT_REPEAT(34),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_fact_list, 3),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_sig_config, 1),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain_sig_config, 1),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_or_update_lhs, 1),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_list, 1),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform_sig_config, 1),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_list, 2),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_list, 2),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_or_update_lhs, 2),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vom_param_list_repeat1, 2),
  [640] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vom_param_list_repeat1, 2), SHIFT_REPEAT(169),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_fact_list, 2),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mod_arg_list_repeat1, 2),
  [649] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mod_arg_list_repeat1, 2), SHIFT_REPEAT(39),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_model_param_list_repeat1, 2),
  [654] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_param_list_repeat1, 2), SHIFT_REPEAT(188),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_param_list, 1),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_fact_list, 1),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vom_param_list, 2),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_arg_list, 1),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_list, 1),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vom_param_list, 1),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_or_update_lhs_repeat1, 2),
  [675] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_step_or_update_lhs_repeat1, 2), SHIFT_REPEAT(160),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_arg_list, 2),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_list, 1),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_cnst, 1),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_list_repeat1, 2),
  [688] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_list_repeat1, 2), SHIFT_REPEAT(116),
  [691] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setting_list_repeat1, 2), SHIFT_REPEAT(140),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_setting_list_repeat1, 2),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_model_fact_list_repeat1, 3),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sig, 5),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 1),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_apply, 4),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_sig, 3),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_apply, 3),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 4),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_val_or_model_program, 1),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_app_arg, 3),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 5),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_val_or_model_program, 3, .production_id = 2),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform_sig, 5),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain_sig, 4, .production_id = 1),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform_sig_config, 2),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl_body, 3),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_sig_in, 2),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_card_spec, 1),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_contract_conf, 2),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dom_sentence, 2),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dom_sentence_config, 2),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sig_in, 3),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_contract, 4),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_sig_in, 3),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sig_in, 2),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dom_sentence, 1),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dom_sentence_config, 1),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl_body, 4),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_sentence_config, 1),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_sentence, 1),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_contract, 2),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_sentence_config, 2),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_sentence, 2),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl_body, 6),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_contract_conf, 1),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_sentence, 1),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [850] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [852] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl_body, 1),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain_sig_config, 2),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_sig_config, 2),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl, 3, .production_id = 3),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_decl, 1),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [906] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [914] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
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
