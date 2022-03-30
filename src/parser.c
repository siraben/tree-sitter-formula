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
#define STATE_COUNT 374
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
  anon_sym_DOT = 3,
  anon_sym_boot = 4,
  anon_sym_initially = 5,
  anon_sym_next = 6,
  anon_sym_property = 7,
  anon_sym_EQ = 8,
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
  sym__machine_sentence_conf = 73,
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
  sym__trans_step_config = 93,
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
  [anon_sym_DOT] = ".",
  [anon_sym_boot] = "boot",
  [anon_sym_initially] = "initially",
  [anon_sym_next] = "next",
  [anon_sym_property] = "property",
  [anon_sym_EQ] = "=",
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
  [sym__machine_sentence_conf] = "_machine_sentence_conf",
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
  [sym__trans_step_config] = "_trans_step_config",
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
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_boot] = anon_sym_boot,
  [anon_sym_initially] = anon_sym_initially,
  [anon_sym_next] = anon_sym_next,
  [anon_sym_property] = anon_sym_property,
  [anon_sym_EQ] = anon_sym_EQ,
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
  [sym__machine_sentence_conf] = sym__machine_sentence_conf,
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
  [sym__trans_step_config] = sym__trans_step_config,
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
  [anon_sym_DOT] = {
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
  [sym__machine_sentence_conf] = {
    .visible = false,
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
  [sym__trans_step_config] = {
    .visible = false,
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead == ':') ADVANCE(192);
      if (lookahead == ';') ADVANCE(194);
      if (lookahead == '<') ADVANCE(239);
      if (lookahead == '=') ADVANCE(158);
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
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead == ':') ADVANCE(193);
      if (lookahead == ';') ADVANCE(194);
      if (lookahead == '<') ADVANCE(239);
      if (lookahead == '=') ADVANCE(158);
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
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead == ':') ADVANCE(193);
      if (lookahead == ';') ADVANCE(194);
      if (lookahead == '<') ADVANCE(239);
      if (lookahead == '=') ADVANCE(157);
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
      if (lookahead == '=') ADVANCE(157);
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
      if (lookahead == '.') ADVANCE(151);
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
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == ';') ADVANCE(194);
      if (lookahead == '=') ADVANCE(157);
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
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(155);
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
      if (lookahead == 'y') ADVANCE(156);
      END_STATE();
    case 139:
      if (lookahead == 'y') ADVANCE(154);
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
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == ';') ADVANCE(194);
      if (lookahead == '=') ADVANCE(158);
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
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(229);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_boot);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_initially);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_next);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_property);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(216);
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
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 147},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 147},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 147},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 147},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 14},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 11},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 4},
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
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 14},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 14},
  [72] = {.lex_state = 14},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 14},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 14},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 14},
  [80] = {.lex_state = 12},
  [81] = {.lex_state = 14},
  [82] = {.lex_state = 14},
  [83] = {.lex_state = 12},
  [84] = {.lex_state = 12},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 14},
  [87] = {.lex_state = 14},
  [88] = {.lex_state = 12},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 14},
  [93] = {.lex_state = 12},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 14},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 14},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 14},
  [101] = {.lex_state = 14},
  [102] = {.lex_state = 12},
  [103] = {.lex_state = 9},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 14},
  [107] = {.lex_state = 14},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 9},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 9},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 14},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 14},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 9},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 14},
  [128] = {.lex_state = 9},
  [129] = {.lex_state = 9},
  [130] = {.lex_state = 9},
  [131] = {.lex_state = 9},
  [132] = {.lex_state = 147},
  [133] = {.lex_state = 12},
  [134] = {.lex_state = 9},
  [135] = {.lex_state = 9},
  [136] = {.lex_state = 14},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 147},
  [139] = {.lex_state = 147},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 147},
  [142] = {.lex_state = 12},
  [143] = {.lex_state = 12},
  [144] = {.lex_state = 14},
  [145] = {.lex_state = 9},
  [146] = {.lex_state = 147},
  [147] = {.lex_state = 147},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 14},
  [150] = {.lex_state = 147},
  [151] = {.lex_state = 147},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 4},
  [155] = {.lex_state = 147},
  [156] = {.lex_state = 12},
  [157] = {.lex_state = 147},
  [158] = {.lex_state = 147},
  [159] = {.lex_state = 9},
  [160] = {.lex_state = 147},
  [161] = {.lex_state = 147},
  [162] = {.lex_state = 147},
  [163] = {.lex_state = 12},
  [164] = {.lex_state = 12},
  [165] = {.lex_state = 147},
  [166] = {.lex_state = 147},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 147},
  [170] = {.lex_state = 9},
  [171] = {.lex_state = 147},
  [172] = {.lex_state = 12},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 12},
  [175] = {.lex_state = 147},
  [176] = {.lex_state = 12},
  [177] = {.lex_state = 147},
  [178] = {.lex_state = 147},
  [179] = {.lex_state = 4},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 12},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 147},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 12},
  [186] = {.lex_state = 147},
  [187] = {.lex_state = 10},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 12},
  [190] = {.lex_state = 147},
  [191] = {.lex_state = 9},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 12},
  [195] = {.lex_state = 147},
  [196] = {.lex_state = 147},
  [197] = {.lex_state = 9},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 147},
  [200] = {.lex_state = 9},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 12},
  [203] = {.lex_state = 147},
  [204] = {.lex_state = 9},
  [205] = {.lex_state = 9},
  [206] = {.lex_state = 12},
  [207] = {.lex_state = 9},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 147},
  [210] = {.lex_state = 12},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 12},
  [215] = {.lex_state = 9},
  [216] = {.lex_state = 9},
  [217] = {.lex_state = 147},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 5},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 147},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 147},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 147},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 12},
  [238] = {.lex_state = 147},
  [239] = {.lex_state = 5},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 147},
  [242] = {.lex_state = 147},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 147},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 5},
  [247] = {.lex_state = 5},
  [248] = {.lex_state = 147},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 5},
  [252] = {.lex_state = 147},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 14},
  [259] = {.lex_state = 147},
  [260] = {.lex_state = 147},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 147},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 5},
  [268] = {.lex_state = 147},
  [269] = {.lex_state = 147},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 14},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 147},
  [284] = {.lex_state = 147},
  [285] = {.lex_state = 147},
  [286] = {.lex_state = 147},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 227},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 147},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 5},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 147},
  [296] = {.lex_state = 147},
  [297] = {.lex_state = 147},
  [298] = {.lex_state = 147},
  [299] = {.lex_state = 147},
  [300] = {.lex_state = 147},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 147},
  [305] = {.lex_state = 5},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 147},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 147},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 147},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 147},
  [314] = {.lex_state = 147},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 147},
  [317] = {.lex_state = 147},
  [318] = {.lex_state = 147},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 147},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 147},
  [325] = {.lex_state = 147},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 147},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 147},
  [337] = {.lex_state = 147},
  [338] = {.lex_state = 5},
  [339] = {.lex_state = 147},
  [340] = {.lex_state = 147},
  [341] = {.lex_state = 147},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 5},
  [345] = {.lex_state = 0},
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
  [360] = {.lex_state = 9},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 147},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 9},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 147},
  [370] = {.lex_state = 227},
  [371] = {.lex_state = 5},
  [372] = {.lex_state = 5},
  [373] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_boot] = ACTIONS(1),
    [anon_sym_initially] = ACTIONS(1),
    [anon_sym_next] = ACTIONS(1),
    [anon_sym_property] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
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
    [sym_program] = STATE(368),
    [sym_module] = STATE(20),
    [sym_machine] = STATE(157),
    [sym_machine_sig_config] = STATE(359),
    [sym_machine_sig] = STATE(213),
    [sym_model] = STATE(157),
    [sym_model_sig_config] = STATE(358),
    [sym_model_sig] = STATE(230),
    [sym_model_intro] = STATE(212),
    [sym_tsystem] = STATE(157),
    [sym_transform] = STATE(157),
    [sym_domain] = STATE(157),
    [sym_domain_sig_config] = STATE(355),
    [sym_domain_sig] = STATE(227),
    [sym_config] = STATE(18),
    [aux_sym_program_repeat1] = STATE(20),
    [aux_sym_machine_sig_config_repeat1] = STATE(213),
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
    STATE(58), 1,
      sym_unop,
    STATE(71), 1,
      sym_string,
    STATE(77), 1,
      sym_id,
    STATE(79), 1,
      sym_func_term,
    STATE(86), 1,
      sym_atom,
    STATE(87), 1,
      sym_constant,
    STATE(98), 1,
      sym_bareid,
    STATE(139), 1,
      sym_func_or_compr,
    STATE(166), 1,
      sym_compr,
    STATE(260), 1,
      sym_func_term_list,
    STATE(339), 1,
      sym_trans_sentence,
    STATE(341), 1,
      sym_trans_sentence_config,
    STATE(345), 1,
      sym_trans_body,
    ACTIONS(25), 2,
      anon_sym_ensures,
      anon_sym_requires,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    STATE(337), 2,
      sym_type_decl,
      sym_rule,
  [94] = 29,
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
    STATE(3), 1,
      aux_sym_trans_body_repeat1,
    STATE(15), 1,
      sym_sentence_config,
    STATE(58), 1,
      sym_unop,
    STATE(71), 1,
      sym_string,
    STATE(77), 1,
      sym_id,
    STATE(79), 1,
      sym_func_term,
    STATE(86), 1,
      sym_atom,
    STATE(87), 1,
      sym_constant,
    STATE(98), 1,
      sym_bareid,
    STATE(139), 1,
      sym_func_or_compr,
    STATE(166), 1,
      sym_compr,
    STATE(260), 1,
      sym_func_term_list,
    STATE(339), 1,
      sym_trans_sentence,
    STATE(341), 1,
      sym_trans_sentence_config,
    ACTIONS(53), 2,
      anon_sym_ensures,
      anon_sym_requires,
    ACTIONS(65), 2,
      sym_real,
      sym_frac,
    STATE(337), 2,
      sym_type_decl,
      sym_rule,
  [185] = 29,
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
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      aux_sym_trans_body_repeat1,
    STATE(15), 1,
      sym_sentence_config,
    STATE(58), 1,
      sym_unop,
    STATE(71), 1,
      sym_string,
    STATE(77), 1,
      sym_id,
    STATE(79), 1,
      sym_func_term,
    STATE(86), 1,
      sym_atom,
    STATE(87), 1,
      sym_constant,
    STATE(98), 1,
      sym_bareid,
    STATE(139), 1,
      sym_func_or_compr,
    STATE(166), 1,
      sym_compr,
    STATE(260), 1,
      sym_func_term_list,
    STATE(339), 1,
      sym_trans_sentence,
    STATE(341), 1,
      sym_trans_sentence_config,
    ACTIONS(25), 2,
      anon_sym_ensures,
      anon_sym_requires,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    STATE(337), 2,
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
    STATE(17), 1,
      sym_sentence_config,
    STATE(58), 1,
      sym_unop,
    STATE(71), 1,
      sym_string,
    STATE(77), 1,
      sym_id,
    STATE(79), 1,
      sym_func_term,
    STATE(86), 1,
      sym_atom,
    STATE(87), 1,
      sym_constant,
    STATE(98), 1,
      sym_bareid,
    STATE(139), 1,
      sym_func_or_compr,
    STATE(166), 1,
      sym_compr,
    STATE(260), 1,
      sym_func_term_list,
    STATE(308), 1,
      sym_dom_sentences,
    STATE(311), 1,
      sym_dom_sentence_config,
    STATE(313), 1,
      sym_dom_sentence,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    STATE(316), 2,
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
    STATE(17), 1,
      sym_sentence_config,
    STATE(58), 1,
      sym_unop,
    STATE(71), 1,
      sym_string,
    STATE(77), 1,
      sym_id,
    STATE(79), 1,
      sym_func_term,
    STATE(86), 1,
      sym_atom,
    STATE(87), 1,
      sym_constant,
    STATE(98), 1,
      sym_bareid,
    STATE(139), 1,
      sym_func_or_compr,
    STATE(166), 1,
      sym_compr,
    STATE(260), 1,
      sym_func_term_list,
    STATE(311), 1,
      sym_dom_sentence_config,
    STATE(313), 1,
      sym_dom_sentence,
    ACTIONS(111), 2,
      sym_real,
      sym_frac,
    STATE(316), 2,
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
    STATE(17), 1,
      sym_sentence_config,
    STATE(58), 1,
      sym_unop,
    STATE(71), 1,
      sym_string,
    STATE(77), 1,
      sym_id,
    STATE(79), 1,
      sym_func_term,
    STATE(86), 1,
      sym_atom,
    STATE(87), 1,
      sym_constant,
    STATE(98), 1,
      sym_bareid,
    STATE(139), 1,
      sym_func_or_compr,
    STATE(166), 1,
      sym_compr,
    STATE(260), 1,
      sym_func_term_list,
    STATE(311), 1,
      sym_dom_sentence_config,
    STATE(313), 1,
      sym_dom_sentence,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    STATE(316), 2,
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
    STATE(23), 1,
      sym_sentence_config,
    STATE(58), 1,
      sym_unop,
    STATE(71), 1,
      sym_string,
    STATE(77), 1,
      sym_id,
    STATE(86), 1,
      sym_atom,
    STATE(87), 1,
      sym_constant,
    STATE(106), 1,
      sym_bareid,
    STATE(122), 1,
      sym_func_term,
    STATE(238), 1,
      sym_model_fact,
    STATE(286), 1,
      sym_model_sentence,
    STATE(292), 1,
      sym_model_body,
    STATE(298), 1,
      sym_model_contract,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    STATE(297), 2,
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
    STATE(23), 1,
      sym_sentence_config,
    STATE(58), 1,
      sym_unop,
    STATE(71), 1,
      sym_string,
    STATE(77), 1,
      sym_id,
    STATE(86), 1,
      sym_atom,
    STATE(87), 1,
      sym_constant,
    STATE(106), 1,
      sym_bareid,
    STATE(122), 1,
      sym_func_term,
    STATE(238), 1,
      sym_model_fact,
    STATE(286), 1,
      sym_model_sentence,
    STATE(298), 1,
      sym_model_contract,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    STATE(297), 2,
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
    STATE(23), 1,
      sym_sentence_config,
    STATE(58), 1,
      sym_unop,
    STATE(71), 1,
      sym_string,
    STATE(77), 1,
      sym_id,
    STATE(86), 1,
      sym_atom,
    STATE(87), 1,
      sym_constant,
    STATE(106), 1,
      sym_bareid,
    STATE(122), 1,
      sym_func_term,
    STATE(238), 1,
      sym_model_fact,
    STATE(286), 1,
      sym_model_sentence,
    STATE(298), 1,
      sym_model_contract,
    ACTIONS(159), 2,
      sym_real,
      sym_frac,
    STATE(297), 2,
      sym_model_contract_conf,
      sym_model_fact_list,
  [804] = 3,
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
  [839] = 3,
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
    STATE(58), 1,
      sym_unop,
    STATE(71), 1,
      sym_string,
    STATE(77), 1,
      sym_id,
    STATE(79), 1,
      sym_func_term,
    STATE(86), 1,
      sym_atom,
    STATE(87), 1,
      sym_constant,
    STATE(98), 1,
      sym_bareid,
    STATE(139), 1,
      sym_func_or_compr,
    STATE(166), 1,
      sym_compr,
    STATE(260), 1,
      sym_func_term_list,
    STATE(307), 1,
      sym_trans_sentence,
    ACTIONS(25), 2,
      anon_sym_ensures,
      anon_sym_requires,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    STATE(337), 2,
      sym_type_decl,
      sym_rule,
  [1020] = 23,
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
      sym_bareid,
    STATE(42), 1,
      sym_id,
    STATE(43), 1,
      sym_func_term,
    STATE(54), 1,
      sym_unop,
    STATE(61), 1,
      sym_constant,
    STATE(62), 1,
      sym_atom,
    STATE(64), 1,
      sym_string,
    STATE(186), 1,
      sym_constraint,
    STATE(209), 1,
      sym_body,
    STATE(353), 1,
      sym_card_spec,
    STATE(369), 1,
      sym_body_list,
    ACTIONS(191), 2,
      sym_real,
      sym_frac,
    ACTIONS(187), 3,
      anon_sym_some,
      anon_sym_atmost,
      anon_sym_atleast,
  [1093] = 24,
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
    STATE(58), 1,
      sym_unop,
    STATE(71), 1,
      sym_string,
    STATE(77), 1,
      sym_id,
    STATE(79), 1,
      sym_func_term,
    STATE(86), 1,
      sym_atom,
    STATE(87), 1,
      sym_constant,
    STATE(98), 1,
      sym_bareid,
    STATE(139), 1,
      sym_func_or_compr,
    STATE(166), 1,
      sym_compr,
    STATE(260), 1,
      sym_func_term_list,
    STATE(356), 1,
      sym_dom_sentence,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    STATE(316), 2,
      sym_type_decl,
      sym_rule,
  [1168] = 16,
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
    STATE(212), 1,
      sym_model_intro,
    STATE(227), 1,
      sym_domain_sig,
    STATE(230), 1,
      sym_model_sig,
    STATE(355), 1,
      sym_domain_sig_config,
    STATE(358), 1,
      sym_model_sig_config,
    STATE(359), 1,
      sym_machine_sig_config,
    STATE(29), 2,
      sym_module,
      aux_sym_program_repeat1,
    STATE(213), 2,
      sym_machine_sig,
      aux_sym_machine_sig_config_repeat1,
    STATE(157), 5,
      sym_machine,
      sym_model,
      sym_tsystem,
      sym_transform,
      sym_domain,
  [1223] = 21,
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
      sym_bareid,
    STATE(42), 1,
      sym_id,
    STATE(43), 1,
      sym_func_term,
    STATE(54), 1,
      sym_unop,
    STATE(61), 1,
      sym_constant,
    STATE(62), 1,
      sym_atom,
    STATE(64), 1,
      sym_string,
    STATE(186), 1,
      sym_constraint,
    STATE(209), 1,
      sym_body,
    STATE(369), 1,
      sym_body_list,
    ACTIONS(191), 2,
      sym_real,
      sym_frac,
  [1288] = 16,
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
    STATE(212), 1,
      sym_model_intro,
    STATE(227), 1,
      sym_domain_sig,
    STATE(230), 1,
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
    STATE(213), 2,
      sym_machine_sig,
      aux_sym_machine_sig_config_repeat1,
    STATE(157), 5,
      sym_machine,
      sym_model,
      sym_tsystem,
      sym_transform,
      sym_domain,
  [1343] = 21,
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
      sym_bareid,
    STATE(42), 1,
      sym_id,
    STATE(43), 1,
      sym_func_term,
    STATE(54), 1,
      sym_unop,
    STATE(61), 1,
      sym_constant,
    STATE(62), 1,
      sym_atom,
    STATE(64), 1,
      sym_string,
    STATE(186), 1,
      sym_constraint,
    STATE(209), 1,
      sym_body,
    STATE(324), 1,
      sym_body_list,
    ACTIONS(191), 2,
      sym_real,
      sym_frac,
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
    STATE(39), 1,
      sym_bareid,
    STATE(42), 1,
      sym_id,
    STATE(43), 1,
      sym_func_term,
    STATE(54), 1,
      sym_unop,
    STATE(61), 1,
      sym_constant,
    STATE(62), 1,
      sym_atom,
    STATE(64), 1,
      sym_string,
    STATE(186), 1,
      sym_constraint,
    STATE(209), 1,
      sym_body,
    STATE(290), 1,
      sym_body_list,
    ACTIONS(191), 2,
      sym_real,
      sym_frac,
  [1473] = 21,
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
    STATE(58), 1,
      sym_unop,
    STATE(71), 1,
      sym_string,
    STATE(77), 1,
      sym_id,
    STATE(86), 1,
      sym_atom,
    STATE(87), 1,
      sym_constant,
    STATE(106), 1,
      sym_bareid,
    STATE(122), 1,
      sym_func_term,
    STATE(248), 1,
      sym_model_fact,
    STATE(296), 1,
      sym_model_contract,
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
    STATE(39), 1,
      sym_bareid,
    STATE(42), 1,
      sym_id,
    STATE(43), 1,
      sym_func_term,
    STATE(54), 1,
      sym_unop,
    STATE(61), 1,
      sym_constant,
    STATE(62), 1,
      sym_atom,
    STATE(64), 1,
      sym_string,
    STATE(186), 1,
      sym_constraint,
    STATE(209), 1,
      sym_body,
    STATE(362), 1,
      sym_body_list,
    ACTIONS(191), 2,
      sym_real,
      sym_frac,
  [1603] = 21,
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
      sym_bareid,
    STATE(42), 1,
      sym_id,
    STATE(43), 1,
      sym_func_term,
    STATE(54), 1,
      sym_unop,
    STATE(61), 1,
      sym_constant,
    STATE(62), 1,
      sym_atom,
    STATE(64), 1,
      sym_string,
    STATE(186), 1,
      sym_constraint,
    STATE(209), 1,
      sym_body,
    STATE(309), 1,
      sym_body_list,
    ACTIONS(191), 2,
      sym_real,
      sym_frac,
  [1668] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
    ACTIONS(209), 1,
      anon_sym_machine,
    ACTIONS(212), 1,
      anon_sym_partial,
    ACTIONS(215), 1,
      anon_sym_model,
    ACTIONS(218), 1,
      anon_sym_transform,
    ACTIONS(221), 1,
      anon_sym_domain,
    STATE(212), 1,
      sym_model_intro,
    STATE(227), 1,
      sym_domain_sig,
    STATE(230), 1,
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
    STATE(213), 2,
      sym_machine_sig,
      aux_sym_machine_sig_config_repeat1,
    STATE(157), 5,
      sym_machine,
      sym_model,
      sym_tsystem,
      sym_transform,
      sym_domain,
  [1723] = 21,
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
    STATE(58), 1,
      sym_unop,
    STATE(66), 1,
      sym_bareid,
    STATE(71), 1,
      sym_string,
    STATE(77), 1,
      sym_id,
    STATE(79), 1,
      sym_func_term,
    STATE(86), 1,
      sym_atom,
    STATE(87), 1,
      sym_constant,
    STATE(139), 1,
      sym_func_or_compr,
    STATE(166), 1,
      sym_compr,
    STATE(265), 1,
      sym_func_term_list,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [1788] = 21,
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
    STATE(58), 1,
      sym_unop,
    STATE(66), 1,
      sym_bareid,
    STATE(71), 1,
      sym_string,
    STATE(77), 1,
      sym_id,
    STATE(79), 1,
      sym_func_term,
    STATE(86), 1,
      sym_atom,
    STATE(87), 1,
      sym_constant,
    STATE(139), 1,
      sym_func_or_compr,
    STATE(166), 1,
      sym_compr,
    STATE(328), 1,
      sym_func_term_list,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [1853] = 16,
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
    ACTIONS(224), 1,
      ts_builtin_sym_end,
    STATE(212), 1,
      sym_model_intro,
    STATE(227), 1,
      sym_domain_sig,
    STATE(230), 1,
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
    STATE(213), 2,
      sym_machine_sig,
      aux_sym_machine_sig_config_repeat1,
    STATE(157), 5,
      sym_machine,
      sym_model,
      sym_tsystem,
      sym_transform,
      sym_domain,
  [1908] = 21,
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
    STATE(58), 1,
      sym_unop,
    STATE(66), 1,
      sym_bareid,
    STATE(71), 1,
      sym_string,
    STATE(77), 1,
      sym_id,
    STATE(79), 1,
      sym_func_term,
    STATE(86), 1,
      sym_atom,
    STATE(87), 1,
      sym_constant,
    STATE(139), 1,
      sym_func_or_compr,
    STATE(166), 1,
      sym_compr,
    STATE(364), 1,
      sym_func_term_list,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [1973] = 20,
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
      sym_bareid,
    STATE(42), 1,
      sym_id,
    STATE(43), 1,
      sym_func_term,
    STATE(54), 1,
      sym_unop,
    STATE(61), 1,
      sym_constant,
    STATE(62), 1,
      sym_atom,
    STATE(64), 1,
      sym_string,
    STATE(186), 1,
      sym_constraint,
    STATE(244), 1,
      sym_body,
    ACTIONS(191), 2,
      sym_real,
      sym_frac,
  [2035] = 20,
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
    STATE(58), 1,
      sym_unop,
    STATE(66), 1,
      sym_bareid,
    STATE(71), 1,
      sym_string,
    STATE(77), 1,
      sym_id,
    STATE(79), 1,
      sym_func_term,
    STATE(86), 1,
      sym_atom,
    STATE(87), 1,
      sym_constant,
    STATE(151), 1,
      sym_func_or_compr,
    STATE(166), 1,
      sym_compr,
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
    ACTIONS(226), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      sym_unop,
    STATE(71), 1,
      sym_string,
    STATE(77), 1,
      sym_id,
    STATE(86), 1,
      sym_atom,
    STATE(87), 1,
      sym_constant,
    STATE(107), 1,
      sym_bareid,
    STATE(127), 1,
      sym_func_term,
    STATE(231), 1,
      sym_mod_app_arg,
    STATE(310), 1,
      sym_mod_arg_list,
    ACTIONS(33), 2,
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
    STATE(45), 1,
      sym_sentence_config,
    STATE(58), 1,
      sym_unop,
    STATE(71), 1,
      sym_string,
    STATE(77), 1,
      sym_id,
    STATE(86), 1,
      sym_atom,
    STATE(87), 1,
      sym_constant,
    STATE(106), 1,
      sym_bareid,
    STATE(122), 1,
      sym_func_term,
    STATE(268), 1,
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
    STATE(39), 1,
      sym_bareid,
    STATE(42), 1,
      sym_id,
    STATE(43), 1,
      sym_func_term,
    STATE(54), 1,
      sym_unop,
    STATE(61), 1,
      sym_constant,
    STATE(62), 1,
      sym_atom,
    STATE(64), 1,
      sym_string,
    STATE(195), 1,
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
    STATE(58), 1,
      sym_unop,
    STATE(66), 1,
      sym_bareid,
    STATE(71), 1,
      sym_string,
    STATE(86), 1,
      sym_atom,
    STATE(87), 1,
      sym_constant,
    STATE(92), 1,
      sym_id,
    STATE(100), 1,
      sym_func_term,
    STATE(199), 1,
      sym_compr,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2366] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(234), 1,
      anon_sym_LBRACE,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(238), 1,
      anon_sym_DASH,
    ACTIONS(240), 1,
      anon_sym_new,
    ACTIONS(244), 1,
      sym_qualid,
    STATE(133), 1,
      sym_unncmp,
    STATE(163), 1,
      sym_typeid,
    STATE(164), 1,
      sym_bareid,
    STATE(318), 1,
      sym_unnbody,
    STATE(319), 1,
      sym_fun_decl,
    STATE(320), 1,
      sym_type_decl_body,
    ACTIONS(242), 4,
      anon_sym_inj,
      anon_sym_bij,
      anon_sym_sur,
      anon_sym_fun,
  [2418] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(246), 15,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_EQ,
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
  [2444] = 18,
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
    STATE(58), 1,
      sym_unop,
    STATE(71), 1,
      sym_string,
    STATE(77), 1,
      sym_id,
    STATE(86), 1,
      sym_atom,
    STATE(87), 1,
      sym_constant,
    STATE(107), 1,
      sym_bareid,
    STATE(127), 1,
      sym_func_term,
    STATE(277), 1,
      sym_mod_app_arg,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2500] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(181), 15,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_EQ,
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
  [2526] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(254), 1,
      anon_sym_is,
    ACTIONS(256), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(250), 13,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_EQ,
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
  [2556] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    STATE(51), 1,
      sym_relop,
    STATE(55), 1,
      sym_binop,
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
  [2592] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(177), 15,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_EQ,
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
  [2618] = 18,
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
    STATE(58), 1,
      sym_unop,
    STATE(71), 1,
      sym_string,
    STATE(77), 1,
      sym_id,
    STATE(86), 1,
      sym_atom,
    STATE(87), 1,
      sym_constant,
    STATE(106), 1,
      sym_bareid,
    STATE(122), 1,
      sym_func_term,
    STATE(262), 1,
      sym_model_fact,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2674] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    STATE(55), 1,
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
      anon_sym_DOT,
      anon_sym_EQ,
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
    STATE(58), 1,
      sym_unop,
    STATE(66), 1,
      sym_bareid,
    STATE(71), 1,
      sym_string,
    STATE(74), 1,
      sym_func_term,
    STATE(77), 1,
      sym_id,
    STATE(86), 1,
      sym_atom,
    STATE(87), 1,
      sym_constant,
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
    STATE(58), 1,
      sym_unop,
    STATE(66), 1,
      sym_bareid,
    STATE(71), 1,
      sym_string,
    STATE(77), 1,
      sym_id,
    STATE(86), 1,
      sym_atom,
    STATE(87), 1,
      sym_constant,
    STATE(149), 1,
      sym_func_term,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2811] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(250), 13,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_EQ,
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
  [2838] = 17,
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
    STATE(58), 1,
      sym_unop,
    STATE(66), 1,
      sym_bareid,
    STATE(71), 1,
      sym_string,
    STATE(77), 1,
      sym_id,
    STATE(86), 1,
      sym_atom,
    STATE(87), 1,
      sym_constant,
    STATE(144), 1,
      sym_func_term,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2891] = 17,
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
    STATE(58), 1,
      sym_unop,
    STATE(66), 1,
      sym_bareid,
    STATE(71), 1,
      sym_string,
    STATE(77), 1,
      sym_id,
    STATE(86), 1,
      sym_atom,
    STATE(87), 1,
      sym_constant,
    STATE(101), 1,
      sym_func_term,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2944] = 17,
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
    STATE(58), 1,
      sym_unop,
    STATE(66), 1,
      sym_bareid,
    STATE(71), 1,
      sym_string,
    STATE(77), 1,
      sym_id,
    STATE(86), 1,
      sym_atom,
    STATE(87), 1,
      sym_constant,
    STATE(136), 1,
      sym_func_term,
    ACTIONS(33), 2,
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
    STATE(58), 1,
      sym_unop,
    STATE(66), 1,
      sym_bareid,
    STATE(71), 1,
      sym_string,
    STATE(77), 1,
      sym_id,
    STATE(86), 1,
      sym_atom,
    STATE(87), 1,
      sym_constant,
    STATE(95), 1,
      sym_func_term,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [3050] = 17,
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
    ACTIONS(272), 1,
      anon_sym_PERCENT,
    ACTIONS(274), 1,
      aux_sym_bareid_token1,
    ACTIONS(276), 1,
      aux_sym_bareid_token2,
    STATE(39), 1,
      sym_bareid,
    STATE(49), 1,
      sym_id,
    STATE(54), 1,
      sym_unop,
    STATE(57), 1,
      sym_func_term,
    STATE(61), 1,
      sym_constant,
    STATE(62), 1,
      sym_atom,
    STATE(64), 1,
      sym_string,
    ACTIONS(191), 2,
      sym_real,
      sym_frac,
  [3103] = 17,
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
    ACTIONS(272), 1,
      anon_sym_PERCENT,
    ACTIONS(274), 1,
      aux_sym_bareid_token1,
    ACTIONS(276), 1,
      aux_sym_bareid_token2,
    STATE(39), 1,
      sym_bareid,
    STATE(46), 1,
      sym_func_term,
    STATE(49), 1,
      sym_id,
    STATE(54), 1,
      sym_unop,
    STATE(61), 1,
      sym_constant,
    STATE(62), 1,
      sym_atom,
    STATE(64), 1,
      sym_string,
    ACTIONS(191), 2,
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
    STATE(58), 1,
      sym_unop,
    STATE(66), 1,
      sym_bareid,
    STATE(71), 1,
      sym_string,
    STATE(77), 1,
      sym_id,
    STATE(86), 1,
      sym_atom,
    STATE(87), 1,
      sym_constant,
    STATE(119), 1,
      sym_func_term,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [3209] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(55), 1,
      sym_binop,
    ACTIONS(280), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(278), 13,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_EQ,
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
  [3236] = 17,
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
    STATE(58), 1,
      sym_unop,
    STATE(66), 1,
      sym_bareid,
    STATE(71), 1,
      sym_string,
    STATE(72), 1,
      sym_func_term,
    STATE(77), 1,
      sym_id,
    STATE(86), 1,
      sym_atom,
    STATE(87), 1,
      sym_constant,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [3289] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(230), 13,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_EQ,
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
      anon_sym_DOT,
      anon_sym_EQ,
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
    ACTIONS(256), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(250), 13,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_EQ,
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
    ACTIONS(288), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(286), 13,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_EQ,
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
    ACTIONS(270), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(268), 13,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_EQ,
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
    ACTIONS(292), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(290), 13,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_EQ,
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
    ACTIONS(48), 10,
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
    ACTIONS(248), 1,
      anon_sym_SLASH,
    ACTIONS(246), 14,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_EQ,
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
    ACTIONS(296), 5,
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
  [3501] = 11,
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
    ACTIONS(298), 1,
      anon_sym_DASH,
    ACTIONS(300), 1,
      sym_digits,
    STATE(232), 1,
      sym_enum_cnst,
    STATE(289), 1,
      sym_enum_list,
    ACTIONS(302), 3,
      sym_real,
      sym_frac,
      sym_qualid,
    STATE(264), 3,
      sym_string,
      sym_range,
      sym_bareid,
  [3539] = 14,
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
    ACTIONS(304), 1,
      anon_sym_RBRACE,
    STATE(66), 1,
      sym_bareid,
    STATE(75), 1,
      aux_sym_trans_steps_repeat1,
    STATE(114), 1,
      sym_sentence_config,
    STATE(247), 1,
      sym_id,
    STATE(315), 1,
      sym_trans_steps,
    STATE(338), 1,
      sym_step_or_update_lhs,
    STATE(314), 2,
      sym__trans_step_config,
      sym_step,
  [3583] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 4,
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
  [3605] = 3,
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
  [3626] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_SLASH,
    STATE(47), 1,
      sym_binop,
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
  [3649] = 10,
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
    ACTIONS(298), 1,
      anon_sym_DASH,
    ACTIONS(300), 1,
      sym_digits,
    STATE(263), 1,
      sym_enum_cnst,
    ACTIONS(302), 3,
      sym_real,
      sym_frac,
      sym_qualid,
    STATE(264), 3,
      sym_string,
      sym_range,
      sym_bareid,
  [3684] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    STATE(47), 1,
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
  [3709] = 13,
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
    STATE(76), 1,
      aux_sym_trans_steps_repeat1,
    STATE(114), 1,
      sym_sentence_config,
    STATE(247), 1,
      sym_id,
    STATE(338), 1,
      sym_step_or_update_lhs,
    STATE(314), 2,
      sym__trans_step_config,
      sym_step,
  [3750] = 13,
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
    STATE(76), 1,
      aux_sym_trans_steps_repeat1,
    STATE(114), 1,
      sym_sentence_config,
    STATE(247), 1,
      sym_id,
    STATE(338), 1,
      sym_step_or_update_lhs,
    STATE(314), 2,
      sym__trans_step_config,
      sym_step,
  [3791] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_SLASH,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
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
  [3814] = 3,
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
  [3835] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    STATE(47), 1,
      sym_binop,
    ACTIONS(262), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(333), 6,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [3859] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_LBRACE,
    ACTIONS(244), 1,
      sym_qualid,
    ACTIONS(272), 1,
      anon_sym_PERCENT,
    ACTIONS(274), 1,
      aux_sym_bareid_token1,
    ACTIONS(276), 1,
      aux_sym_bareid_token2,
    ACTIONS(335), 1,
      anon_sym_any,
    STATE(133), 1,
      sym_unncmp,
    STATE(163), 1,
      sym_typeid,
    STATE(176), 1,
      sym_bareid,
    STATE(181), 1,
      sym_field,
    STATE(210), 1,
      sym_unnbody,
    STATE(335), 1,
      sym_fields,
  [3899] = 3,
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
  [3919] = 3,
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
  [3939] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_LBRACE,
    ACTIONS(244), 1,
      sym_qualid,
    ACTIONS(272), 1,
      anon_sym_PERCENT,
    ACTIONS(274), 1,
      aux_sym_bareid_token1,
    ACTIONS(276), 1,
      aux_sym_bareid_token2,
    ACTIONS(335), 1,
      anon_sym_any,
    STATE(133), 1,
      sym_unncmp,
    STATE(163), 1,
      sym_typeid,
    STATE(176), 1,
      sym_bareid,
    STATE(181), 1,
      sym_field,
    STATE(210), 1,
      sym_unnbody,
    STATE(237), 1,
      sym_fields,
  [3979] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_LBRACE,
    ACTIONS(244), 1,
      sym_qualid,
    ACTIONS(272), 1,
      anon_sym_PERCENT,
    ACTIONS(274), 1,
      aux_sym_bareid_token1,
    ACTIONS(276), 1,
      aux_sym_bareid_token2,
    ACTIONS(335), 1,
      anon_sym_any,
    STATE(133), 1,
      sym_unncmp,
    STATE(163), 1,
      sym_typeid,
    STATE(176), 1,
      sym_bareid,
    STATE(181), 1,
      sym_field,
    STATE(210), 1,
      sym_unnbody,
    STATE(294), 1,
      sym_fields,
  [4019] = 3,
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
  [4039] = 3,
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
  [4059] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
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
  [4079] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_LBRACE,
    ACTIONS(244), 1,
      sym_qualid,
    ACTIONS(272), 1,
      anon_sym_PERCENT,
    ACTIONS(274), 1,
      aux_sym_bareid_token1,
    ACTIONS(276), 1,
      aux_sym_bareid_token2,
    ACTIONS(335), 1,
      anon_sym_any,
    STATE(133), 1,
      sym_unncmp,
    STATE(163), 1,
      sym_typeid,
    STATE(176), 1,
      sym_bareid,
    STATE(181), 1,
      sym_field,
    STATE(210), 1,
      sym_unnbody,
    STATE(303), 1,
      sym_fields,
  [4119] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(341), 1,
      anon_sym_PERCENT,
    STATE(110), 1,
      sym_bareid,
    STATE(192), 1,
      sym_mod_ref,
    STATE(250), 1,
      sym_mod_refs,
    ACTIONS(337), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
    ACTIONS(339), 2,
      anon_sym_includes,
      anon_sym_extends,
    STATE(148), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [4153] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_RBRACE,
    ACTIONS(345), 1,
      anon_sym_boot,
    ACTIONS(349), 1,
      anon_sym_property,
    ACTIONS(351), 1,
      anon_sym_LBRACK,
    STATE(168), 1,
      sym_sentence_config,
    STATE(283), 1,
      sym_machine_sentence,
    STATE(287), 1,
      sym_machine_body,
    STATE(291), 1,
      sym_machine_prop,
    ACTIONS(347), 2,
      anon_sym_initially,
      anon_sym_next,
    STATE(94), 2,
      sym__machine_sentence_conf,
      aux_sym_machine_body_repeat1,
  [4189] = 10,
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
    STATE(168), 1,
      sym_sentence_config,
    STATE(283), 1,
      sym_machine_sentence,
    STATE(291), 1,
      sym_machine_prop,
    ACTIONS(358), 2,
      anon_sym_initially,
      anon_sym_next,
    STATE(91), 2,
      sym__machine_sentence_conf,
      aux_sym_machine_body_repeat1,
  [4222] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_SLASH,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      anon_sym_is,
    ACTIONS(250), 8,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4245] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_LBRACE,
    ACTIONS(244), 1,
      sym_qualid,
    ACTIONS(272), 1,
      anon_sym_PERCENT,
    ACTIONS(274), 1,
      aux_sym_bareid_token1,
    ACTIONS(276), 1,
      aux_sym_bareid_token2,
    ACTIONS(335), 1,
      anon_sym_any,
    STATE(133), 1,
      sym_unncmp,
    STATE(163), 1,
      sym_typeid,
    STATE(176), 1,
      sym_bareid,
    STATE(210), 1,
      sym_unnbody,
    STATE(214), 1,
      sym_field,
  [4282] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_boot,
    ACTIONS(349), 1,
      anon_sym_property,
    ACTIONS(351), 1,
      anon_sym_LBRACK,
    ACTIONS(369), 1,
      anon_sym_RBRACE,
    STATE(168), 1,
      sym_sentence_config,
    STATE(283), 1,
      sym_machine_sentence,
    STATE(291), 1,
      sym_machine_prop,
    ACTIONS(347), 2,
      anon_sym_initially,
      anon_sym_next,
    STATE(91), 2,
      sym__machine_sentence_conf,
      aux_sym_machine_body_repeat1,
  [4315] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    STATE(47), 1,
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
  [4337] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 3,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(373), 7,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      aux_sym_bareid_token2,
      sym_qualid,
  [4355] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 3,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(377), 7,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      aux_sym_bareid_token2,
      sym_qualid,
  [4373] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_SLASH,
    ACTIONS(381), 1,
      anon_sym_COLON_COLON_EQ,
    ACTIONS(246), 8,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_COLON_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4393] = 3,
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
  [4411] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    STATE(47), 1,
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
  [4433] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    STATE(47), 1,
      sym_binop,
    ACTIONS(262), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(385), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [4455] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(234), 1,
      anon_sym_LBRACE,
    ACTIONS(244), 1,
      sym_qualid,
    ACTIONS(387), 1,
      anon_sym_any,
    STATE(133), 1,
      sym_unncmp,
    STATE(163), 1,
      sym_typeid,
    STATE(164), 1,
      sym_bareid,
    STATE(194), 1,
      sym_unnbody,
  [4489] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_PERCENT,
    STATE(110), 1,
      sym_bareid,
    STATE(192), 1,
      sym_mod_ref,
    STATE(272), 1,
      sym_mod_refs,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
    ACTIONS(389), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
    STATE(148), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [4517] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 3,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(391), 7,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      aux_sym_bareid_token2,
      sym_qualid,
  [4535] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(234), 1,
      anon_sym_LBRACE,
    ACTIONS(244), 1,
      sym_qualid,
    STATE(133), 1,
      sym_unncmp,
    STATE(163), 1,
      sym_typeid,
    STATE(164), 1,
      sym_bareid,
    STATE(206), 1,
      sym_unnbody,
  [4566] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_SLASH,
    ACTIONS(395), 1,
      anon_sym_is,
    ACTIONS(246), 7,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4585] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_SLASH,
    ACTIONS(397), 1,
      anon_sym_at,
    ACTIONS(246), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4604] = 3,
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
  [4621] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_PERCENT,
    STATE(110), 1,
      sym_bareid,
    STATE(241), 1,
      sym_mod_apply,
    STATE(300), 1,
      sym_choice_list,
    STATE(301), 1,
      sym_mod_ref,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
    STATE(148), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [4648] = 4,
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
  [4667] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(234), 1,
      anon_sym_LBRACE,
    ACTIONS(244), 1,
      sym_qualid,
    STATE(133), 1,
      sym_unncmp,
    STATE(163), 1,
      sym_typeid,
    STATE(164), 1,
      sym_bareid,
    STATE(256), 1,
      sym_unnbody,
  [4698] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(234), 1,
      anon_sym_LBRACE,
    ACTIONS(244), 1,
      sym_qualid,
    STATE(133), 1,
      sym_unncmp,
    STATE(163), 1,
      sym_typeid,
    STATE(164), 1,
      sym_bareid,
    STATE(202), 1,
      sym_unnbody,
  [4729] = 9,
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
    STATE(247), 1,
      sym_id,
    STATE(336), 1,
      sym_update,
    STATE(372), 1,
      sym_step_or_update_lhs,
  [4757] = 9,
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
    STATE(247), 1,
      sym_id,
    STATE(295), 1,
      sym_step,
    STATE(338), 1,
      sym_step_or_update_lhs,
  [4785] = 9,
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
    STATE(225), 1,
      sym_setting,
    STATE(344), 1,
      sym_id,
    STATE(367), 1,
      sym_setting_list,
  [4813] = 9,
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
    STATE(225), 1,
      sym_setting,
    STATE(344), 1,
      sym_id,
    STATE(366), 1,
      sym_setting_list,
  [4841] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_PERCENT,
    STATE(110), 1,
      sym_bareid,
    STATE(192), 1,
      sym_mod_ref,
    STATE(279), 1,
      sym_mod_refs,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
    STATE(148), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [4865] = 9,
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
    STATE(225), 1,
      sym_setting,
    STATE(344), 1,
      sym_id,
    STATE(361), 1,
      sym_setting_list,
  [4893] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    STATE(47), 1,
      sym_binop,
    ACTIONS(409), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
    ACTIONS(262), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4913] = 9,
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
    STATE(225), 1,
      sym_setting,
    STATE(344), 1,
      sym_id,
    STATE(346), 1,
      sym_setting_list,
  [4941] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(234), 1,
      anon_sym_LBRACE,
    ACTIONS(244), 1,
      sym_qualid,
    STATE(156), 1,
      sym_unncmp,
    STATE(163), 1,
      sym_typeid,
    STATE(164), 1,
      sym_bareid,
  [4969] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    STATE(47), 1,
      sym_binop,
    ACTIONS(411), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
    ACTIONS(262), 4,
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
    STATE(66), 1,
      sym_bareid,
    STATE(225), 1,
      sym_setting,
    STATE(344), 1,
      sym_id,
    STATE(357), 1,
      sym_setting_list,
  [5017] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_PERCENT,
    STATE(110), 1,
      sym_bareid,
    STATE(301), 1,
      sym_mod_ref,
    STATE(304), 1,
      sym_mod_apply,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
    STATE(148), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5041] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 8,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [5055] = 9,
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
    STATE(247), 1,
      sym_id,
    STATE(336), 1,
      sym_step,
    STATE(338), 1,
      sym_step_or_update_lhs,
  [5083] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    STATE(47), 1,
      sym_binop,
    ACTIONS(415), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(262), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [5103] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_RPAREN,
    ACTIONS(419), 1,
      anon_sym_PERCENT,
    STATE(219), 1,
      sym_val_or_model_program,
    STATE(266), 1,
      sym_mod_ref_rename,
    STATE(267), 1,
      sym_bareid,
    STATE(331), 1,
      sym_vom_param_list,
    ACTIONS(276), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [5129] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_PERCENT,
    STATE(110), 1,
      sym_bareid,
    STATE(259), 1,
      sym_mod_apply,
    STATE(301), 1,
      sym_mod_ref,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
    STATE(148), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5153] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_PERCENT,
    STATE(110), 1,
      sym_bareid,
    STATE(192), 1,
      sym_mod_ref,
    STATE(257), 1,
      sym_mod_refs,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
    STATE(148), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5177] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_PERCENT,
    ACTIONS(421), 1,
      anon_sym_RPAREN,
    STATE(219), 1,
      sym_val_or_model_program,
    STATE(266), 1,
      sym_mod_ref_rename,
    STATE(267), 1,
      sym_bareid,
    STATE(326), 1,
      sym_vom_param_list,
    ACTIONS(276), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [5203] = 2,
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
  [5216] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_PLUS,
    STATE(142), 1,
      aux_sym_unnbody_repeat1,
    ACTIONS(425), 5,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [5233] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_PERCENT,
    STATE(110), 1,
      sym_bareid,
    STATE(211), 1,
      sym_mod_ref,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
    STATE(148), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5254] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_PERCENT,
    STATE(110), 1,
      sym_bareid,
    STATE(193), 1,
      sym_mod_ref,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
    STATE(148), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5275] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    ACTIONS(429), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      sym_binop,
    ACTIONS(262), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [5294] = 8,
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
    STATE(275), 1,
      sym_setting,
    STATE(344), 1,
      sym_id,
  [5319] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_COMMA,
    STATE(138), 1,
      aux_sym_func_term_list_repeat1,
    ACTIONS(431), 5,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [5336] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_COMMA,
    STATE(146), 1,
      aux_sym_func_term_list_repeat1,
    ACTIONS(436), 5,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [5353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 7,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [5366] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 7,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [5379] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_PLUS,
    STATE(143), 1,
      aux_sym_unnbody_repeat1,
    ACTIONS(444), 5,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [5396] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_PLUS,
    STATE(143), 1,
      aux_sym_unnbody_repeat1,
    ACTIONS(446), 5,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [5413] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    ACTIONS(451), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      sym_binop,
    ACTIONS(262), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [5432] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_PERCENT,
    STATE(110), 1,
      sym_bareid,
    STATE(201), 1,
      sym_mod_ref,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
    STATE(148), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5453] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_COMMA,
    STATE(138), 1,
      aux_sym_func_term_list_repeat1,
    ACTIONS(453), 5,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [5470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 7,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [5483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 7,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [5496] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    ACTIONS(459), 1,
      anon_sym_DOT,
    STATE(47), 1,
      sym_binop,
    ACTIONS(262), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [5515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [5527] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 6,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [5539] = 7,
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
    STATE(251), 1,
      sym_id,
  [5561] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [5573] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 2,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(310), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_bareid_token2,
      sym_qualid,
  [5587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [5599] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_PLUS,
  [5611] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [5623] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [5635] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_PERCENT,
    STATE(236), 1,
      sym_mod_ref_rename,
    STATE(305), 1,
      sym_bareid,
    STATE(306), 1,
      sym_model_param_list,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [5655] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [5667] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [5679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [5691] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_PLUS,
  [5703] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_PLUS,
  [5715] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [5727] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 6,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [5739] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_digits,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(71), 1,
      sym_string,
    STATE(276), 1,
      sym_constant,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [5759] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_boot,
    ACTIONS(349), 1,
      anon_sym_property,
    STATE(291), 1,
      sym_machine_prop,
    STATE(348), 1,
      sym_machine_sentence,
    ACTIONS(347), 2,
      anon_sym_initially,
      anon_sym_next,
  [5779] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [5791] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_PERCENT,
    STATE(253), 1,
      sym_val_or_model_program,
    STATE(266), 1,
      sym_mod_ref_rename,
    STATE(267), 1,
      sym_bareid,
    ACTIONS(276), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [5811] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [5823] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_PLUS,
  [5835] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [5847] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 3,
      anon_sym_LBRACE,
      aux_sym_bareid_token2,
      sym_qualid,
    ACTIONS(495), 3,
      anon_sym_any,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
  [5861] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [5873] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_COLON,
    ACTIONS(481), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_PLUS,
  [5887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [5899] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [5911] = 7,
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
    STATE(285), 1,
      sym_id,
  [5933] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_LPAREN,
    STATE(160), 1,
      sym_transform_rest,
    STATE(234), 1,
      sym_transform_sig,
    STATE(302), 1,
      sym_trans_sig_in,
    STATE(312), 1,
      sym_transform_sig_config,
  [5952] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_COMMA,
    STATE(189), 1,
      aux_sym_fields_repeat1,
    ACTIONS(507), 3,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [5967] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_LPAREN,
    STATE(177), 1,
      sym_tsystem_rest,
    STATE(234), 1,
      sym_transform_sig,
    STATE(302), 1,
      sym_trans_sig_in,
    STATE(330), 1,
      sym_transform_sig_config,
  [5986] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_COMMA,
    STATE(190), 1,
      aux_sym_body_repeat1,
    ACTIONS(511), 3,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [6001] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_COMMA,
    STATE(188), 1,
      aux_sym_mod_refs_repeat1,
    ACTIONS(515), 3,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LBRACK,
  [6016] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_COMMA,
    STATE(185), 1,
      aux_sym_fields_repeat1,
    ACTIONS(519), 3,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [6031] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_COMMA,
    STATE(183), 1,
      aux_sym_body_repeat1,
    ACTIONS(524), 3,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [6046] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(341), 1,
      anon_sym_PERCENT,
    ACTIONS(526), 1,
      anon_sym_system,
    STATE(180), 1,
      sym_bareid,
  [6065] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_COMMA,
    STATE(188), 1,
      aux_sym_mod_refs_repeat1,
    ACTIONS(528), 3,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LBRACK,
  [6080] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_COMMA,
    STATE(185), 1,
      aux_sym_fields_repeat1,
    ACTIONS(533), 3,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [6095] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_COMMA,
    STATE(190), 1,
      aux_sym_body_repeat1,
    ACTIONS(535), 3,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [6110] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_PERCENT,
    STATE(255), 1,
      sym_mod_ref_rename,
    STATE(305), 1,
      sym_bareid,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [6127] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_COMMA,
    STATE(184), 1,
      aux_sym_mod_refs_repeat1,
    ACTIONS(540), 3,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LBRACK,
  [6142] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 4,
      anon_sym_LBRACE,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [6152] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [6162] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [6172] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_SEMI,
    STATE(196), 1,
      aux_sym_body_list_repeat1,
    ACTIONS(546), 2,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [6186] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_PERCENT,
    STATE(108), 1,
      sym_bareid,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [6200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 4,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
  [6210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [6220] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_PERCENT,
    STATE(349), 1,
      sym_bareid,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [6234] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 4,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_COMMA,
      anon_sym_LBRACK,
  [6244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [6254] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_SEMI,
    STATE(196), 1,
      aux_sym_body_list_repeat1,
    ACTIONS(553), 2,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [6268] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_PERCENT,
    STATE(280), 1,
      sym_bareid,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [6282] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_PERCENT,
    STATE(371), 1,
      sym_bareid,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [6296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [6306] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_PERCENT,
    STATE(89), 1,
      sym_bareid,
    ACTIONS(276), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [6320] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_LBRACE,
    ACTIONS(561), 1,
      anon_sym_machine,
    STATE(208), 2,
      sym_machine_sig,
      aux_sym_machine_sig_config_repeat1,
  [6334] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_SEMI,
    STATE(203), 1,
      aux_sym_body_list_repeat1,
    ACTIONS(564), 2,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [6348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [6358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 4,
      anon_sym_LBRACE,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [6368] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
    ACTIONS(572), 2,
      anon_sym_includes,
      anon_sym_extends,
  [6380] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_machine,
    ACTIONS(574), 1,
      anon_sym_LBRACE,
    STATE(208), 2,
      sym_machine_sig,
      aux_sym_machine_sig_config_repeat1,
  [6394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [6404] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_PERCENT,
    STATE(327), 1,
      sym_bareid,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [6418] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_PERCENT,
    STATE(182), 1,
      sym_bareid,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [6432] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_DOT,
    ACTIONS(578), 1,
      anon_sym_SEMI,
    STATE(226), 1,
      aux_sym_choice_list_repeat1,
  [6445] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      anon_sym_RPAREN,
    ACTIONS(582), 1,
      anon_sym_COMMA,
    STATE(218), 1,
      aux_sym_model_param_list_repeat1,
  [6458] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_RPAREN,
    ACTIONS(587), 1,
      anon_sym_COMMA,
    STATE(221), 1,
      aux_sym_vom_param_list_repeat1,
  [6471] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_RPAREN,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    STATE(218), 1,
      aux_sym_model_param_list_repeat1,
  [6484] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_COMMA,
    ACTIONS(593), 1,
      anon_sym_RPAREN,
    STATE(228), 1,
      aux_sym_vom_param_list_repeat1,
  [6497] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_COMMA,
    ACTIONS(598), 1,
      anon_sym_RBRACK,
    STATE(222), 1,
      aux_sym_setting_list_repeat1,
  [6510] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
      anon_sym_DOT_DOT,
    ACTIONS(600), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [6521] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_RBRACE,
    ACTIONS(606), 1,
      anon_sym_COMMA,
    STATE(224), 1,
      aux_sym_enum_list_repeat1,
  [6534] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_COMMA,
    ACTIONS(611), 1,
      anon_sym_RBRACK,
    STATE(233), 1,
      aux_sym_setting_list_repeat1,
  [6547] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_DOT,
    ACTIONS(615), 1,
      anon_sym_SEMI,
    STATE(226), 1,
      aux_sym_choice_list_repeat1,
  [6560] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(618), 1,
      anon_sym_LBRACE,
    STATE(342), 1,
      sym_config,
  [6573] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_RPAREN,
    ACTIONS(622), 1,
      anon_sym_COMMA,
    STATE(228), 1,
      aux_sym_vom_param_list_repeat1,
  [6586] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_DOT,
    ACTIONS(627), 1,
      anon_sym_COMMA,
    STATE(235), 1,
      aux_sym_model_fact_list_repeat1,
  [6599] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(629), 1,
      anon_sym_LBRACE,
    STATE(343), 1,
      sym_config,
  [6612] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      anon_sym_RPAREN,
    ACTIONS(633), 1,
      anon_sym_COMMA,
    STATE(245), 1,
      aux_sym_mod_arg_list_repeat1,
  [6625] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_RBRACE,
    ACTIONS(637), 1,
      anon_sym_COMMA,
    STATE(243), 1,
      aux_sym_enum_list_repeat1,
  [6638] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_COMMA,
    ACTIONS(639), 1,
      anon_sym_RBRACK,
    STATE(222), 1,
      aux_sym_setting_list_repeat1,
  [6651] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(641), 1,
      anon_sym_LBRACE,
    STATE(333), 1,
      sym_config,
  [6664] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      anon_sym_DOT,
    ACTIONS(645), 1,
      anon_sym_COMMA,
    STATE(235), 1,
      aux_sym_model_fact_list_repeat1,
  [6677] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    ACTIONS(648), 1,
      anon_sym_RPAREN,
    STATE(220), 1,
      aux_sym_model_param_list_repeat1,
  [6690] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(80), 1,
      sym_maparrow,
    ACTIONS(650), 2,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [6701] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      anon_sym_COMMA,
    ACTIONS(652), 1,
      anon_sym_DOT,
    STATE(242), 1,
      aux_sym_model_fact_list_repeat1,
  [6714] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      anon_sym_EQ,
    ACTIONS(656), 1,
      anon_sym_COMMA,
    STATE(239), 1,
      aux_sym_step_or_update_lhs_repeat1,
  [6727] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_RPAREN,
    ACTIONS(661), 1,
      anon_sym_COMMA,
    STATE(240), 1,
      aux_sym_mod_arg_list_repeat1,
  [6740] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_SEMI,
    ACTIONS(664), 1,
      anon_sym_DOT,
    STATE(217), 1,
      aux_sym_choice_list_repeat1,
  [6753] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      anon_sym_COMMA,
    ACTIONS(666), 1,
      anon_sym_DOT,
    STATE(235), 1,
      aux_sym_model_fact_list_repeat1,
  [6766] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_COMMA,
    ACTIONS(668), 1,
      anon_sym_RBRACE,
    STATE(224), 1,
      aux_sym_enum_list_repeat1,
  [6779] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 3,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [6788] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_COMMA,
    ACTIONS(670), 1,
      anon_sym_RPAREN,
    STATE(240), 1,
      aux_sym_mod_arg_list_repeat1,
  [6801] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 1,
      anon_sym_EQ,
    ACTIONS(674), 1,
      anon_sym_COMMA,
    STATE(239), 1,
      aux_sym_step_or_update_lhs_repeat1,
  [6814] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      anon_sym_COMMA,
    ACTIONS(676), 1,
      anon_sym_EQ,
    STATE(246), 1,
      aux_sym_step_or_update_lhs_repeat1,
  [6827] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      anon_sym_COMMA,
    ACTIONS(666), 1,
      anon_sym_DOT,
    STATE(229), 1,
      aux_sym_model_fact_list_repeat1,
  [6840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6848] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [6856] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 2,
      anon_sym_EQ,
      anon_sym_COMMA,
  [6864] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [6872] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6880] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [6888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6896] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [6912] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      anon_sym_DASH,
    ACTIONS(690), 1,
      sym_digits,
  [6922] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [6930] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_DOT,
    ACTIONS(694), 1,
      anon_sym_COLON_DASH,
  [6940] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(125), 1,
      sym_string,
  [6950] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
  [6958] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [6966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [6974] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      anon_sym_RBRACE,
    ACTIONS(700), 1,
      anon_sym_PIPE,
  [6984] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6992] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_COLON_COLON,
    ACTIONS(704), 1,
      anon_sym_COLON,
  [7002] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
  [7010] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [7018] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(249), 1,
      sym_string,
  [7028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [7036] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [7044] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [7052] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(140), 1,
      sym_string,
  [7062] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7070] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7086] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [7094] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 2,
      anon_sym_LBRACE,
      anon_sym_machine,
  [7102] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_LPAREN,
    STATE(329), 1,
      sym_machine_sig_in,
  [7112] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      anon_sym_DASH,
    ACTIONS(724), 1,
      sym_digits,
  [7122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_returns,
  [7129] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_DOT,
  [7136] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      sym_digits,
  [7143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DOT,
  [7150] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_DOT,
  [7157] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_RBRACE,
  [7164] = 2,
    ACTIONS(738), 1,
      aux_sym_string_token1,
    ACTIONS(740), 1,
      sym_comment,
  [7171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_RBRACE,
  [7178] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 1,
      anon_sym_RBRACE,
  [7185] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      anon_sym_DOT,
  [7192] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      anon_sym_RBRACE,
  [7199] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_DOT_DOT,
  [7206] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      anon_sym_RPAREN,
  [7213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      anon_sym_DOT,
  [7220] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 1,
      anon_sym_DOT,
  [7227] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      anon_sym_DOT,
  [7234] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_DOT,
  [7241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_DOT,
  [7248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_DOT,
  [7255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      anon_sym_LPAREN,
  [7262] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_returns,
  [7269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_RPAREN,
  [7276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_DOT,
  [7283] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_COLON_COLON,
  [7290] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_RPAREN,
  [7297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_DOT,
  [7304] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      anon_sym_RBRACE,
  [7311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      anon_sym_DOT,
  [7318] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      anon_sym_RPAREN,
  [7325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      anon_sym_DOT,
  [7332] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      anon_sym_LBRACE,
  [7339] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      anon_sym_DOT,
  [7346] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_DOT,
  [7353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_RBRACE,
  [7360] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_DOT,
  [7367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      sym_digits,
  [7374] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      anon_sym_DOT,
  [7381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      anon_sym_LPAREN,
  [7388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      anon_sym_DOT,
  [7395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      anon_sym_LPAREN,
  [7402] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_LPAREN,
  [7409] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      anon_sym_of,
  [7416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 1,
      anon_sym_DOT,
  [7423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_DOT,
  [7430] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_RPAREN,
  [7437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_of,
  [7444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      anon_sym_RPAREN,
  [7451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym_of,
  [7458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      anon_sym_LBRACE,
  [7465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      anon_sym_RPAREN,
  [7472] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      sym_digits,
  [7479] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      anon_sym_LBRACE,
  [7486] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      anon_sym_LPAREN,
  [7493] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      anon_sym_RPAREN,
  [7500] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      anon_sym_DOT,
  [7507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_DOT,
  [7514] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_EQ,
  [7521] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 1,
      anon_sym_DOT,
  [7528] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 1,
      anon_sym_DOT,
  [7535] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_DOT,
  [7542] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_LBRACE,
  [7549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      anon_sym_LBRACE,
  [7556] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(848), 1,
      anon_sym_EQ,
  [7563] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 1,
      anon_sym_RBRACE,
  [7570] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      anon_sym_RBRACK,
  [7577] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      anon_sym_returns,
  [7584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 1,
      anon_sym_DOT,
  [7591] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_of,
  [7598] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_of,
  [7605] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_DQUOTE,
  [7612] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      aux_sym_bareid_token1,
  [7619] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      aux_sym_model_contract_token1,
  [7626] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      aux_sym_model_contract_token1,
  [7633] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 1,
      anon_sym_LBRACE,
  [7640] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 1,
      anon_sym_DOT,
  [7647] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      anon_sym_RBRACK,
  [7654] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      anon_sym_LBRACE,
  [7661] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(878), 1,
      anon_sym_LBRACE,
  [7668] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(880), 1,
      aux_sym_bareid_token1,
  [7675] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      anon_sym_RBRACK,
  [7682] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      anon_sym_DOT,
  [7689] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      anon_sym_DQUOTE,
  [7696] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(888), 1,
      anon_sym_RPAREN,
  [7703] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      aux_sym_bareid_token1,
  [7710] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(892), 1,
      anon_sym_RBRACK,
  [7717] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_RBRACK,
  [7724] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      ts_builtin_sym_end,
  [7731] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      anon_sym_DOT,
  [7738] = 2,
    ACTIONS(740), 1,
      sym_comment,
    ACTIONS(900), 1,
      aux_sym_string_token1,
  [7745] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      anon_sym_EQ,
  [7752] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      anon_sym_EQ,
  [7759] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      anon_sym_model,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 94,
  [SMALL_STATE(4)] = 185,
  [SMALL_STATE(5)] = 276,
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
  [SMALL_STATE(17)] = 1093,
  [SMALL_STATE(18)] = 1168,
  [SMALL_STATE(19)] = 1223,
  [SMALL_STATE(20)] = 1288,
  [SMALL_STATE(21)] = 1343,
  [SMALL_STATE(22)] = 1408,
  [SMALL_STATE(23)] = 1473,
  [SMALL_STATE(24)] = 1538,
  [SMALL_STATE(25)] = 1603,
  [SMALL_STATE(26)] = 1668,
  [SMALL_STATE(27)] = 1723,
  [SMALL_STATE(28)] = 1788,
  [SMALL_STATE(29)] = 1853,
  [SMALL_STATE(30)] = 1908,
  [SMALL_STATE(31)] = 1973,
  [SMALL_STATE(32)] = 2035,
  [SMALL_STATE(33)] = 2097,
  [SMALL_STATE(34)] = 2159,
  [SMALL_STATE(35)] = 2221,
  [SMALL_STATE(36)] = 2248,
  [SMALL_STATE(37)] = 2307,
  [SMALL_STATE(38)] = 2366,
  [SMALL_STATE(39)] = 2418,
  [SMALL_STATE(40)] = 2444,
  [SMALL_STATE(41)] = 2500,
  [SMALL_STATE(42)] = 2526,
  [SMALL_STATE(43)] = 2556,
  [SMALL_STATE(44)] = 2592,
  [SMALL_STATE(45)] = 2618,
  [SMALL_STATE(46)] = 2674,
  [SMALL_STATE(47)] = 2705,
  [SMALL_STATE(48)] = 2758,
  [SMALL_STATE(49)] = 2811,
  [SMALL_STATE(50)] = 2838,
  [SMALL_STATE(51)] = 2891,
  [SMALL_STATE(52)] = 2944,
  [SMALL_STATE(53)] = 2997,
  [SMALL_STATE(54)] = 3050,
  [SMALL_STATE(55)] = 3103,
  [SMALL_STATE(56)] = 3156,
  [SMALL_STATE(57)] = 3209,
  [SMALL_STATE(58)] = 3236,
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
  [SMALL_STATE(69)] = 3539,
  [SMALL_STATE(70)] = 3583,
  [SMALL_STATE(71)] = 3605,
  [SMALL_STATE(72)] = 3626,
  [SMALL_STATE(73)] = 3649,
  [SMALL_STATE(74)] = 3684,
  [SMALL_STATE(75)] = 3709,
  [SMALL_STATE(76)] = 3750,
  [SMALL_STATE(77)] = 3791,
  [SMALL_STATE(78)] = 3814,
  [SMALL_STATE(79)] = 3835,
  [SMALL_STATE(80)] = 3859,
  [SMALL_STATE(81)] = 3899,
  [SMALL_STATE(82)] = 3919,
  [SMALL_STATE(83)] = 3939,
  [SMALL_STATE(84)] = 3979,
  [SMALL_STATE(85)] = 4019,
  [SMALL_STATE(86)] = 4039,
  [SMALL_STATE(87)] = 4059,
  [SMALL_STATE(88)] = 4079,
  [SMALL_STATE(89)] = 4119,
  [SMALL_STATE(90)] = 4153,
  [SMALL_STATE(91)] = 4189,
  [SMALL_STATE(92)] = 4222,
  [SMALL_STATE(93)] = 4245,
  [SMALL_STATE(94)] = 4282,
  [SMALL_STATE(95)] = 4315,
  [SMALL_STATE(96)] = 4337,
  [SMALL_STATE(97)] = 4355,
  [SMALL_STATE(98)] = 4373,
  [SMALL_STATE(99)] = 4393,
  [SMALL_STATE(100)] = 4411,
  [SMALL_STATE(101)] = 4433,
  [SMALL_STATE(102)] = 4455,
  [SMALL_STATE(103)] = 4489,
  [SMALL_STATE(104)] = 4517,
  [SMALL_STATE(105)] = 4535,
  [SMALL_STATE(106)] = 4566,
  [SMALL_STATE(107)] = 4585,
  [SMALL_STATE(108)] = 4604,
  [SMALL_STATE(109)] = 4621,
  [SMALL_STATE(110)] = 4648,
  [SMALL_STATE(111)] = 4667,
  [SMALL_STATE(112)] = 4698,
  [SMALL_STATE(113)] = 4729,
  [SMALL_STATE(114)] = 4757,
  [SMALL_STATE(115)] = 4785,
  [SMALL_STATE(116)] = 4813,
  [SMALL_STATE(117)] = 4841,
  [SMALL_STATE(118)] = 4865,
  [SMALL_STATE(119)] = 4893,
  [SMALL_STATE(120)] = 4913,
  [SMALL_STATE(121)] = 4941,
  [SMALL_STATE(122)] = 4969,
  [SMALL_STATE(123)] = 4989,
  [SMALL_STATE(124)] = 5017,
  [SMALL_STATE(125)] = 5041,
  [SMALL_STATE(126)] = 5055,
  [SMALL_STATE(127)] = 5083,
  [SMALL_STATE(128)] = 5103,
  [SMALL_STATE(129)] = 5129,
  [SMALL_STATE(130)] = 5153,
  [SMALL_STATE(131)] = 5177,
  [SMALL_STATE(132)] = 5203,
  [SMALL_STATE(133)] = 5216,
  [SMALL_STATE(134)] = 5233,
  [SMALL_STATE(135)] = 5254,
  [SMALL_STATE(136)] = 5275,
  [SMALL_STATE(137)] = 5294,
  [SMALL_STATE(138)] = 5319,
  [SMALL_STATE(139)] = 5336,
  [SMALL_STATE(140)] = 5353,
  [SMALL_STATE(141)] = 5366,
  [SMALL_STATE(142)] = 5379,
  [SMALL_STATE(143)] = 5396,
  [SMALL_STATE(144)] = 5413,
  [SMALL_STATE(145)] = 5432,
  [SMALL_STATE(146)] = 5453,
  [SMALL_STATE(147)] = 5470,
  [SMALL_STATE(148)] = 5483,
  [SMALL_STATE(149)] = 5496,
  [SMALL_STATE(150)] = 5515,
  [SMALL_STATE(151)] = 5527,
  [SMALL_STATE(152)] = 5539,
  [SMALL_STATE(153)] = 5561,
  [SMALL_STATE(154)] = 5573,
  [SMALL_STATE(155)] = 5587,
  [SMALL_STATE(156)] = 5599,
  [SMALL_STATE(157)] = 5611,
  [SMALL_STATE(158)] = 5623,
  [SMALL_STATE(159)] = 5635,
  [SMALL_STATE(160)] = 5655,
  [SMALL_STATE(161)] = 5667,
  [SMALL_STATE(162)] = 5679,
  [SMALL_STATE(163)] = 5691,
  [SMALL_STATE(164)] = 5703,
  [SMALL_STATE(165)] = 5715,
  [SMALL_STATE(166)] = 5727,
  [SMALL_STATE(167)] = 5739,
  [SMALL_STATE(168)] = 5759,
  [SMALL_STATE(169)] = 5779,
  [SMALL_STATE(170)] = 5791,
  [SMALL_STATE(171)] = 5811,
  [SMALL_STATE(172)] = 5823,
  [SMALL_STATE(173)] = 5835,
  [SMALL_STATE(174)] = 5847,
  [SMALL_STATE(175)] = 5861,
  [SMALL_STATE(176)] = 5873,
  [SMALL_STATE(177)] = 5887,
  [SMALL_STATE(178)] = 5899,
  [SMALL_STATE(179)] = 5911,
  [SMALL_STATE(180)] = 5933,
  [SMALL_STATE(181)] = 5952,
  [SMALL_STATE(182)] = 5967,
  [SMALL_STATE(183)] = 5986,
  [SMALL_STATE(184)] = 6001,
  [SMALL_STATE(185)] = 6016,
  [SMALL_STATE(186)] = 6031,
  [SMALL_STATE(187)] = 6046,
  [SMALL_STATE(188)] = 6065,
  [SMALL_STATE(189)] = 6080,
  [SMALL_STATE(190)] = 6095,
  [SMALL_STATE(191)] = 6110,
  [SMALL_STATE(192)] = 6127,
  [SMALL_STATE(193)] = 6142,
  [SMALL_STATE(194)] = 6152,
  [SMALL_STATE(195)] = 6162,
  [SMALL_STATE(196)] = 6172,
  [SMALL_STATE(197)] = 6186,
  [SMALL_STATE(198)] = 6200,
  [SMALL_STATE(199)] = 6210,
  [SMALL_STATE(200)] = 6220,
  [SMALL_STATE(201)] = 6234,
  [SMALL_STATE(202)] = 6244,
  [SMALL_STATE(203)] = 6254,
  [SMALL_STATE(204)] = 6268,
  [SMALL_STATE(205)] = 6282,
  [SMALL_STATE(206)] = 6296,
  [SMALL_STATE(207)] = 6306,
  [SMALL_STATE(208)] = 6320,
  [SMALL_STATE(209)] = 6334,
  [SMALL_STATE(210)] = 6348,
  [SMALL_STATE(211)] = 6358,
  [SMALL_STATE(212)] = 6368,
  [SMALL_STATE(213)] = 6380,
  [SMALL_STATE(214)] = 6394,
  [SMALL_STATE(215)] = 6404,
  [SMALL_STATE(216)] = 6418,
  [SMALL_STATE(217)] = 6432,
  [SMALL_STATE(218)] = 6445,
  [SMALL_STATE(219)] = 6458,
  [SMALL_STATE(220)] = 6471,
  [SMALL_STATE(221)] = 6484,
  [SMALL_STATE(222)] = 6497,
  [SMALL_STATE(223)] = 6510,
  [SMALL_STATE(224)] = 6521,
  [SMALL_STATE(225)] = 6534,
  [SMALL_STATE(226)] = 6547,
  [SMALL_STATE(227)] = 6560,
  [SMALL_STATE(228)] = 6573,
  [SMALL_STATE(229)] = 6586,
  [SMALL_STATE(230)] = 6599,
  [SMALL_STATE(231)] = 6612,
  [SMALL_STATE(232)] = 6625,
  [SMALL_STATE(233)] = 6638,
  [SMALL_STATE(234)] = 6651,
  [SMALL_STATE(235)] = 6664,
  [SMALL_STATE(236)] = 6677,
  [SMALL_STATE(237)] = 6690,
  [SMALL_STATE(238)] = 6701,
  [SMALL_STATE(239)] = 6714,
  [SMALL_STATE(240)] = 6727,
  [SMALL_STATE(241)] = 6740,
  [SMALL_STATE(242)] = 6753,
  [SMALL_STATE(243)] = 6766,
  [SMALL_STATE(244)] = 6779,
  [SMALL_STATE(245)] = 6788,
  [SMALL_STATE(246)] = 6801,
  [SMALL_STATE(247)] = 6814,
  [SMALL_STATE(248)] = 6827,
  [SMALL_STATE(249)] = 6840,
  [SMALL_STATE(250)] = 6848,
  [SMALL_STATE(251)] = 6856,
  [SMALL_STATE(252)] = 6864,
  [SMALL_STATE(253)] = 6872,
  [SMALL_STATE(254)] = 6880,
  [SMALL_STATE(255)] = 6888,
  [SMALL_STATE(256)] = 6896,
  [SMALL_STATE(257)] = 6904,
  [SMALL_STATE(258)] = 6912,
  [SMALL_STATE(259)] = 6922,
  [SMALL_STATE(260)] = 6930,
  [SMALL_STATE(261)] = 6940,
  [SMALL_STATE(262)] = 6950,
  [SMALL_STATE(263)] = 6958,
  [SMALL_STATE(264)] = 6966,
  [SMALL_STATE(265)] = 6974,
  [SMALL_STATE(266)] = 6984,
  [SMALL_STATE(267)] = 6992,
  [SMALL_STATE(268)] = 7002,
  [SMALL_STATE(269)] = 7010,
  [SMALL_STATE(270)] = 7018,
  [SMALL_STATE(271)] = 7028,
  [SMALL_STATE(272)] = 7036,
  [SMALL_STATE(273)] = 7044,
  [SMALL_STATE(274)] = 7052,
  [SMALL_STATE(275)] = 7062,
  [SMALL_STATE(276)] = 7070,
  [SMALL_STATE(277)] = 7078,
  [SMALL_STATE(278)] = 7086,
  [SMALL_STATE(279)] = 7094,
  [SMALL_STATE(280)] = 7102,
  [SMALL_STATE(281)] = 7112,
  [SMALL_STATE(282)] = 7122,
  [SMALL_STATE(283)] = 7129,
  [SMALL_STATE(284)] = 7136,
  [SMALL_STATE(285)] = 7143,
  [SMALL_STATE(286)] = 7150,
  [SMALL_STATE(287)] = 7157,
  [SMALL_STATE(288)] = 7164,
  [SMALL_STATE(289)] = 7171,
  [SMALL_STATE(290)] = 7178,
  [SMALL_STATE(291)] = 7185,
  [SMALL_STATE(292)] = 7192,
  [SMALL_STATE(293)] = 7199,
  [SMALL_STATE(294)] = 7206,
  [SMALL_STATE(295)] = 7213,
  [SMALL_STATE(296)] = 7220,
  [SMALL_STATE(297)] = 7227,
  [SMALL_STATE(298)] = 7234,
  [SMALL_STATE(299)] = 7241,
  [SMALL_STATE(300)] = 7248,
  [SMALL_STATE(301)] = 7255,
  [SMALL_STATE(302)] = 7262,
  [SMALL_STATE(303)] = 7269,
  [SMALL_STATE(304)] = 7276,
  [SMALL_STATE(305)] = 7283,
  [SMALL_STATE(306)] = 7290,
  [SMALL_STATE(307)] = 7297,
  [SMALL_STATE(308)] = 7304,
  [SMALL_STATE(309)] = 7311,
  [SMALL_STATE(310)] = 7318,
  [SMALL_STATE(311)] = 7325,
  [SMALL_STATE(312)] = 7332,
  [SMALL_STATE(313)] = 7339,
  [SMALL_STATE(314)] = 7346,
  [SMALL_STATE(315)] = 7353,
  [SMALL_STATE(316)] = 7360,
  [SMALL_STATE(317)] = 7367,
  [SMALL_STATE(318)] = 7374,
  [SMALL_STATE(319)] = 7381,
  [SMALL_STATE(320)] = 7388,
  [SMALL_STATE(321)] = 7395,
  [SMALL_STATE(322)] = 7402,
  [SMALL_STATE(323)] = 7409,
  [SMALL_STATE(324)] = 7416,
  [SMALL_STATE(325)] = 7423,
  [SMALL_STATE(326)] = 7430,
  [SMALL_STATE(327)] = 7437,
  [SMALL_STATE(328)] = 7444,
  [SMALL_STATE(329)] = 7451,
  [SMALL_STATE(330)] = 7458,
  [SMALL_STATE(331)] = 7465,
  [SMALL_STATE(332)] = 7472,
  [SMALL_STATE(333)] = 7479,
  [SMALL_STATE(334)] = 7486,
  [SMALL_STATE(335)] = 7493,
  [SMALL_STATE(336)] = 7500,
  [SMALL_STATE(337)] = 7507,
  [SMALL_STATE(338)] = 7514,
  [SMALL_STATE(339)] = 7521,
  [SMALL_STATE(340)] = 7528,
  [SMALL_STATE(341)] = 7535,
  [SMALL_STATE(342)] = 7542,
  [SMALL_STATE(343)] = 7549,
  [SMALL_STATE(344)] = 7556,
  [SMALL_STATE(345)] = 7563,
  [SMALL_STATE(346)] = 7570,
  [SMALL_STATE(347)] = 7577,
  [SMALL_STATE(348)] = 7584,
  [SMALL_STATE(349)] = 7591,
  [SMALL_STATE(350)] = 7598,
  [SMALL_STATE(351)] = 7605,
  [SMALL_STATE(352)] = 7612,
  [SMALL_STATE(353)] = 7619,
  [SMALL_STATE(354)] = 7626,
  [SMALL_STATE(355)] = 7633,
  [SMALL_STATE(356)] = 7640,
  [SMALL_STATE(357)] = 7647,
  [SMALL_STATE(358)] = 7654,
  [SMALL_STATE(359)] = 7661,
  [SMALL_STATE(360)] = 7668,
  [SMALL_STATE(361)] = 7675,
  [SMALL_STATE(362)] = 7682,
  [SMALL_STATE(363)] = 7689,
  [SMALL_STATE(364)] = 7696,
  [SMALL_STATE(365)] = 7703,
  [SMALL_STATE(366)] = 7710,
  [SMALL_STATE(367)] = 7717,
  [SMALL_STATE(368)] = 7724,
  [SMALL_STATE(369)] = 7731,
  [SMALL_STATE(370)] = 7738,
  [SMALL_STATE(371)] = 7745,
  [SMALL_STATE(372)] = 7752,
  [SMALL_STATE(373)] = 7759,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(27),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(52),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(25),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(118),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(104),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(71),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(71),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(288),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(352),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(14),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(14),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(66),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_body, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(27),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(52),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(24),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(116),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(104),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(71),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(71),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(288),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(352),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(14),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(14),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(66),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dom_sentences, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_body, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(52),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(19),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(16),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(118),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(104),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(71),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(71),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(288),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(352),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(14),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(14),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(66),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bareid, 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bareid, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bareid, 2),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bareid, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(204),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(373),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(200),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(187),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(207),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 1),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 1),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term, 3),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_term, 3),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term, 2),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_term, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term, 4, .production_id = 2),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_term, 4, .production_id = 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term, 1),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_term, 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_trans_body_repeat1, 2),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_model_body_repeat1, 2),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dom_sentences_repeat1, 2),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_steps, 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trans_steps_repeat1, 2),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_steps_repeat1, 2), SHIFT_REPEAT(115),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trans_steps_repeat1, 2), SHIFT_REPEAT(352),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trans_steps_repeat1, 2), SHIFT_REPEAT(14),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_steps_repeat1, 2), SHIFT_REPEAT(14),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_steps_repeat1, 2), SHIFT_REPEAT(66),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sentence_config, 3),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sentence_config, 3),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_or_compr, 1),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain_sig, 2, .production_id = 1),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_machine_body_repeat1, 2),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_machine_body_repeat1, 2), SHIFT_REPEAT(126),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_machine_body_repeat1, 2), SHIFT_REPEAT(113),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_machine_body_repeat1, 2), SHIFT_REPEAT(205),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_machine_body_repeat1, 2), SHIFT_REPEAT(123),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_body, 1),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 4),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binop, 1),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binop, 1),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relop, 1),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relop, 1),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 2),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 3),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain_sig, 3, .production_id = 1),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unop, 1),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unop, 1),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_ref_rename, 3, .production_id = 2),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_ref_no_rename, 1),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_fact, 3),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_fact, 1),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_ref_rename, 5, .production_id = 2),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_app_arg, 1),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 3),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unnbody, 1),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_term_list_repeat1, 2),
  [433] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_term_list_repeat1, 2), SHIFT_REPEAT(32),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term_list, 1),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_ref_no_rename, 3),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compr, 5),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unnbody, 2),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unnbody_repeat1, 2),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unnbody_repeat1, 2), SHIFT_REPEAT(121),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term_list, 2),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compr, 3),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_ref, 1),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_prop, 4),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain, 3),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__machine_sentence_conf, 3),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_trans_steps_repeat1, 2),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tsystem_rest, 4),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform_rest, 4),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform, 3, .production_id = 1),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tsystem_rest, 3),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain, 4),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unncmp, 1),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeid, 1),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine, 4),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model, 4),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model, 3),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unncmp, 3),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__machine_sentence_conf, 2),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maparrow, 1),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_maparrow, 1),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine, 3),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tsystem, 4),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform_rest, 3),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fields, 1),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_refs, 2),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fields_repeat1, 2),
  [521] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fields_repeat1, 2), SHIFT_REPEAT(93),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mod_refs_repeat1, 2),
  [530] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mod_refs_repeat1, 2), SHIFT_REPEAT(145),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fields, 2),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [537] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(36),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_refs, 1),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_intro, 5),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 2),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_list_repeat1, 2),
  [548] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_list_repeat1, 2), SHIFT_REPEAT(31),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, .production_id = 2),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_list, 2),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_machine_sig_config_repeat1, 2),
  [561] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_machine_sig_config_repeat1, 2), SHIFT_REPEAT(204),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_list, 1),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_intro, 4),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_sig, 1),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sig_config, 1),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_list, 2),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_model_param_list_repeat1, 2),
  [582] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_param_list_repeat1, 2), SHIFT_REPEAT(191),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vom_param_list, 1),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_param_list, 2),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vom_param_list, 2),
  [595] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setting_list_repeat1, 2), SHIFT_REPEAT(137),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_setting_list_repeat1, 2),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_cnst, 1),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_list_repeat1, 2),
  [606] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_list_repeat1, 2), SHIFT_REPEAT(73),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_list, 1),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_list_repeat1, 2),
  [615] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_list_repeat1, 2), SHIFT_REPEAT(129),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain_sig_config, 1),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vom_param_list_repeat1, 2),
  [622] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vom_param_list_repeat1, 2), SHIFT_REPEAT(170),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_fact_list, 3),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_sig_config, 1),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_arg_list, 1),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_list, 1),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_list, 2),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform_sig_config, 1),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_model_fact_list_repeat1, 2),
  [645] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_fact_list_repeat1, 2), SHIFT_REPEAT(34),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_param_list, 1),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_fact_list, 1),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_or_update_lhs_repeat1, 2),
  [656] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_step_or_update_lhs_repeat1, 2), SHIFT_REPEAT(152),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mod_arg_list_repeat1, 2),
  [661] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mod_arg_list_repeat1, 2), SHIFT_REPEAT(40),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_list, 1),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_fact_list, 2),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_list, 2),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_arg_list, 2),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_or_update_lhs, 2),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_or_update_lhs, 1),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_app_arg, 3),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_apply, 3),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_val_or_model_program, 3, .production_id = 2),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_sig, 3),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 1),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_model_fact_list_repeat1, 3),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_val_or_model_program, 1),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_apply, 4),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 4),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain_sig, 4, .production_id = 1),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform_sig, 5),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 5),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sig, 5),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_sig_in, 2),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_contract, 4),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sentence, 1),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trans_step_config, 2),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_contract_conf, 2),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_sentence, 1),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_contract_conf, 1),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl_body, 3),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 3),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 3),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_sentence_config, 2),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_sentence, 2),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dom_sentence_config, 1),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dom_sentence, 1),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl_body, 1),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl, 3, .production_id = 3),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_decl, 1),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sig_in, 2),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl_body, 4),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform_sig_config, 2),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sentence, 2),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_sentence, 1),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_sentence_config, 1),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl_body, 6),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain_sig_config, 2),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_sig_config, 2),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_sig_in, 3),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sig_in, 3),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_card_spec, 1),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dom_sentence_config, 2),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dom_sentence, 2),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [896] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_contract, 2),
  [900] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
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
