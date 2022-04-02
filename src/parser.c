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
#define SYMBOL_COUNT 176
#define ALIAS_COUNT 0
#define TOKEN_COUNT 70
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
  anon_sym_sub = 38,
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
  anon_sym_DASH = 53,
  anon_sym_DOT_DOT = 54,
  anon_sym_COLON_DASH = 55,
  anon_sym_PIPE = 56,
  anon_sym_no = 57,
  anon_sym_STAR = 58,
  anon_sym_SLASH = 59,
  anon_sym_PERCENT = 60,
  anon_sym_BANG_EQ = 61,
  anon_sym_LT = 62,
  anon_sym_LT_EQ = 63,
  anon_sym_GT = 64,
  anon_sym_GT_EQ = 65,
  aux_sym_bareid_token1 = 66,
  aux_sym_bareid_token2 = 67,
  sym_qualid = 68,
  sym_comment = 69,
  sym_program = 70,
  sym_module = 71,
  sym_machine = 72,
  sym_machine_body = 73,
  sym__machine_sentence_conf = 74,
  sym_machine_sentence = 75,
  sym_machine_prop = 76,
  sym_machine_sig_config = 77,
  sym_machine_sig = 78,
  sym_machine_sig_in = 79,
  sym_model = 80,
  sym_model_body = 81,
  sym_model_sentence = 82,
  sym_model_contract_conf = 83,
  sym_model_contract = 84,
  sym_model_fact_list = 85,
  sym_model_fact = 86,
  sym_card_spec = 87,
  sym_model_sig_config = 88,
  sym_model_sig = 89,
  sym_model_intro = 90,
  sym_tsystem = 91,
  sym_tsystem_rest = 92,
  sym_trans_steps = 93,
  sym__trans_step_config = 94,
  sym_transform = 95,
  sym_transform_rest = 96,
  sym_trans_body = 97,
  sym_trans_sentence_config = 98,
  sym_trans_sentence = 99,
  sym_transform_sig_config = 100,
  sym_transform_sig = 101,
  sym_trans_sig_in = 102,
  sym_domain = 103,
  sym_dom_sentences = 104,
  sym_dom_sentence_config = 105,
  sym_dom_sentence = 106,
  sym_domain_sig_config = 107,
  sym_domain_sig = 108,
  sym_config = 109,
  sym_sentence_config = 110,
  sym_setting_list = 111,
  sym_setting = 112,
  sym_model_param_list = 113,
  sym_val_or_model_program = 114,
  sym_vom_param_list = 115,
  sym_update = 116,
  sym_step = 117,
  sym_choice_list = 118,
  sym_mod_apply = 119,
  sym_mod_arg_list = 120,
  sym_mod_app_arg = 121,
  sym_step_or_update_lhs = 122,
  sym_mod_refs = 123,
  sym_mod_ref = 124,
  sym_mod_ref_rename = 125,
  sym_mod_ref_no_rename = 126,
  sym_type_decl = 127,
  sym_type_decl_body = 128,
  sym_fun_decl = 129,
  sym_fields = 130,
  sym_field = 131,
  sym_maparrow = 132,
  sym_unnbody = 133,
  sym_unncmp = 134,
  sym_typeid = 135,
  sym_enum_list = 136,
  sym_enum_cnst = 137,
  sym_string = 138,
  sym_range = 139,
  sym_rule = 140,
  sym_compr = 141,
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
  aux_sym_model_fact_list_repeat1 = 159,
  aux_sym_trans_steps_repeat1 = 160,
  aux_sym_trans_body_repeat1 = 161,
  aux_sym_dom_sentences_repeat1 = 162,
  aux_sym_setting_list_repeat1 = 163,
  aux_sym_model_param_list_repeat1 = 164,
  aux_sym_vom_param_list_repeat1 = 165,
  aux_sym_choice_list_repeat1 = 166,
  aux_sym_mod_arg_list_repeat1 = 167,
  aux_sym_step_or_update_lhs_repeat1 = 168,
  aux_sym_mod_refs_repeat1 = 169,
  aux_sym_fields_repeat1 = 170,
  aux_sym_unnbody_repeat1 = 171,
  aux_sym_enum_list_repeat1 = 172,
  aux_sym_body_list_repeat1 = 173,
  aux_sym_body_repeat1 = 174,
  aux_sym_func_term_list_repeat1 = 175,
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
  [anon_sym_sub] = "sub",
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
  [anon_sym_DASH] = "-",
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
  [anon_sym_sub] = anon_sym_sub,
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
  [anon_sym_DASH] = anon_sym_DASH,
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
  [anon_sym_sub] = {
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
  [anon_sym_DASH] = {
    .visible = true,
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
      if (lookahead == '%') ADVANCE(238);
      if (lookahead == '(') ADVANCE(161);
      if (lookahead == ')') ADVANCE(162);
      if (lookahead == '*') ADVANCE(236);
      if (lookahead == '+') ADVANCE(217);
      if (lookahead == ',') ADVANCE(168);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '/') ADVANCE(237);
      if (lookahead == ':') ADVANCE(192);
      if (lookahead == ';') ADVANCE(194);
      if (lookahead == '<') ADVANCE(241);
      if (lookahead == '=') ADVANCE(158);
      if (lookahead == '>') ADVANCE(243);
      if (lookahead == '@') ADVANCE(199);
      if (lookahead == '[') ADVANCE(189);
      if (lookahead == ']') ADVANCE(190);
      if (lookahead == 'a') ADVANCE(80);
      if (lookahead == 'b') ADVANCE(63);
      if (lookahead == 'c') ADVANCE(91);
      if (lookahead == 'd') ADVANCE(167);
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == 'f') ADVANCE(130);
      if (lookahead == 'i') ADVANCE(82);
      if (lookahead == 'm') ADVANCE(32);
      if (lookahead == 'n') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(59);
      if (lookahead == 'p') ADVANCE(34);
      if (lookahead == 'r') ADVANCE(48);
      if (lookahead == 's') ADVANCE(92);
      if (lookahead == 't') ADVANCE(101);
      if (lookahead == '{') ADVANCE(149);
      if (lookahead == '|') ADVANCE(233);
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
      if (lookahead == '%') ADVANCE(238);
      if (lookahead == '(') ADVANCE(161);
      if (lookahead == ')') ADVANCE(162);
      if (lookahead == '*') ADVANCE(236);
      if (lookahead == '+') ADVANCE(217);
      if (lookahead == ',') ADVANCE(168);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '/') ADVANCE(237);
      if (lookahead == ':') ADVANCE(193);
      if (lookahead == ';') ADVANCE(194);
      if (lookahead == '<') ADVANCE(241);
      if (lookahead == '=') ADVANCE(158);
      if (lookahead == '>') ADVANCE(243);
      if (lookahead == '[') ADVANCE(189);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '{') ADVANCE(149);
      if (lookahead == '}') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '%') ADVANCE(238);
      if (lookahead == '(') ADVANCE(161);
      if (lookahead == '*') ADVANCE(236);
      if (lookahead == '+') ADVANCE(217);
      if (lookahead == ',') ADVANCE(168);
      if (lookahead == '-') ADVANCE(229);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '/') ADVANCE(237);
      if (lookahead == ':') ADVANCE(193);
      if (lookahead == ';') ADVANCE(194);
      if (lookahead == '<') ADVANCE(241);
      if (lookahead == '=') ADVANCE(157);
      if (lookahead == '>') ADVANCE(243);
      if (lookahead == '@') ADVANCE(199);
      if (lookahead == '[') ADVANCE(189);
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead == 'i') ADVANCE(86);
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
      if (lookahead == '%') ADVANCE(239);
      if (lookahead == '(') ADVANCE(161);
      if (lookahead == ')') ADVANCE(162);
      if (lookahead == '-') ADVANCE(229);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '%') ADVANCE(239);
      if (lookahead == '(') ADVANCE(161);
      if (lookahead == ',') ADVANCE(168);
      if (lookahead == '-') ADVANCE(229);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == ':') ADVANCE(193);
      if (lookahead == '=') ADVANCE(157);
      if (lookahead == '[') ADVANCE(189);
      if (lookahead == 'e') ADVANCE(262);
      if (lookahead == 'r') ADVANCE(248);
      if (lookahead == '{') ADVANCE(149);
      if (lookahead == '}') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '%') ADVANCE(239);
      if (lookahead == '(') ADVANCE(161);
      if (lookahead == '-') ADVANCE(229);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '[') ADVANCE(189);
      if (lookahead == 'c') ADVANCE(268);
      if (lookahead == '{') ADVANCE(149);
      if (lookahead == '}') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '%') ADVANCE(239);
      if (lookahead == '(') ADVANCE(161);
      if (lookahead == '-') ADVANCE(229);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == 'a') ADVANCE(282);
      if (lookahead == 'n') ADVANCE(267);
      if (lookahead == 's') ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '%') ADVANCE(239);
      if (lookahead == '(') ADVANCE(161);
      if (lookahead == '-') ADVANCE(229);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '%') ADVANCE(238);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '%') ADVANCE(238);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == 's') ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '%') ADVANCE(239);
      if (lookahead == '(') ADVANCE(161);
      if (lookahead == ')') ADVANCE(162);
      if (lookahead == '+') ADVANCE(217);
      if (lookahead == ',') ADVANCE(168);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == ':') ADVANCE(191);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == 'b') ADVANCE(255);
      if (lookahead == 'f') ADVANCE(288);
      if (lookahead == 'i') ADVANCE(266);
      if (lookahead == 'n') ADVANCE(251);
      if (lookahead == 's') ADVANCE(287);
      if (lookahead == '{') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '%') ADVANCE(239);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == 'a') ADVANCE(265);
      if (lookahead == '{') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == '%') ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 14:
      if (lookahead == '%') ADVANCE(238);
      if (lookahead == '(') ADVANCE(161);
      if (lookahead == ')') ADVANCE(162);
      if (lookahead == '*') ADVANCE(236);
      if (lookahead == '+') ADVANCE(217);
      if (lookahead == ',') ADVANCE(168);
      if (lookahead == '-') ADVANCE(229);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '/') ADVANCE(237);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == ';') ADVANCE(194);
      if (lookahead == '=') ADVANCE(157);
      if (lookahead == '[') ADVANCE(189);
      if (lookahead == ']') ADVANCE(190);
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == 'm') ADVANCE(31);
      if (lookahead == '{') ADVANCE(149);
      if (lookahead == '|') ADVANCE(233);
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
      if (lookahead == '/') ADVANCE(323);
      END_STATE();
    case 18:
      if (lookahead == '*') ADVANCE(22);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(232);
      if (lookahead == ':') ADVANCE(198);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(232);
      if (lookahead == ':') ADVANCE(26);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(231);
      END_STATE();
    case 22:
      if (lookahead == '/') ADVANCE(322);
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
      if (lookahead == '=') ADVANCE(240);
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
      if (lookahead == ']') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == ']') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(108);
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 40:
      if (lookahead == 'b') ADVANCE(201);
      if (lookahead == 'r') ADVANCE(209);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(73);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(121);
      if (lookahead == 'j') ADVANCE(205);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(62);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(53);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(110);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(56);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(135);
      if (lookahead == 'o') ADVANCE(234);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 59:
      if (lookahead == 'f') ADVANCE(160);
      END_STATE();
    case 60:
      if (lookahead == 'f') ADVANCE(96);
      END_STATE();
    case 61:
      if (lookahead == 'f') ADVANCE(98);
      END_STATE();
    case 62:
      if (lookahead == 'h') ADVANCE(65);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(69);
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 69:
      if (lookahead == 'j') ADVANCE(207);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(181);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(180);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 75:
      if (lookahead == 'm') ADVANCE(183);
      END_STATE();
    case 76:
      if (lookahead == 'm') ADVANCE(182);
      END_STATE();
    case 77:
      if (lookahead == 'm') ADVANCE(49);
      END_STATE();
    case 78:
      if (lookahead == 'm') ADVANCE(38);
      END_STATE();
    case 79:
      if (lookahead == 'm') ADVANCE(112);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(137);
      if (lookahead == 't') ADVANCE(196);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(115);
      if (lookahead == 'x') ADVANCE(127);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(42);
      if (lookahead == 's') ADVANCE(169);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(211);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(188);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(41);
      if (lookahead == 's') ADVANCE(169);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(77);
      if (lookahead == 'u') ADVANCE(40);
      if (lookahead == 'y') ADVANCE(118);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 99:
      if (lookahead == 'p') ADVANCE(58);
      END_STATE();
    case 100:
      if (lookahead == 'q') ADVANCE(132);
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(57);
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
      if (lookahead == 's') ADVANCE(131);
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
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(64);
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
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 130:
      if (lookahead == 'u') ADVANCE(83);
      END_STATE();
    case 131:
      if (lookahead == 'u') ADVANCE(105);
      END_STATE();
    case 132:
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 133:
      if (lookahead == 'u') ADVANCE(106);
      END_STATE();
    case 134:
      if (lookahead == 'u') ADVANCE(46);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 144:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 145:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      END_STATE();
    case 146:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(228);
      END_STATE();
    case 147:
      if (eof) ADVANCE(148);
      if (lookahead == '%') ADVANCE(238);
      if (lookahead == '(') ADVANCE(161);
      if (lookahead == ')') ADVANCE(162);
      if (lookahead == '*') ADVANCE(236);
      if (lookahead == '+') ADVANCE(217);
      if (lookahead == ',') ADVANCE(168);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '/') ADVANCE(237);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == ';') ADVANCE(194);
      if (lookahead == '=') ADVANCE(158);
      if (lookahead == '@') ADVANCE(199);
      if (lookahead == '[') ADVANCE(189);
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == 'd') ADVANCE(97);
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == 'm') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(59);
      if (lookahead == 'p') ADVANCE(33);
      if (lookahead == 't') ADVANCE(101);
      if (lookahead == '{') ADVANCE(149);
      if (lookahead == '|') ADVANCE(233);
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
      if (lookahead == '.') ADVANCE(231);
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
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_requires);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_requires);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
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
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_atmost);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_atmost);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_atleast);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_atleast);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_includes);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_includes);
      if (lookahead == '\'') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_extends);
      if (lookahead == '\'') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
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
      if (lookahead == '\'') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_returns);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_conforms);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_conforms);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
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
      if (lookahead == 'l') ADVANCE(52);
      if (lookahead == 'm') ADVANCE(95);
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
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_sub);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_inj);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_inj);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_bij);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_bij);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_sur);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_sur);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_fun);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_fun);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_any);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_any);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
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
      if (lookahead == '"') ADVANCE(323);
      if (lookahead == '\\') ADVANCE(324);
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
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(215);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '/') ADVANCE(323);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(242);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(244);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'a') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'b') ADVANCE(202);
      if (lookahead == 'r') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'f') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'j') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'j') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'l') ADVANCE(249);
      if (lookahead == 'm') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'm') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'm') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'n') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'n') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'n') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'n') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'n') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'q') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 's') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 's') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 's') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 's') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 's') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 's') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 't') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 't') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 't') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'w') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'y') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == 'c') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == 'd') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == 'd') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == 'e') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == 'e') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == 'e') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == 'l') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == 'm') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == 'n') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == 'n') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == 's') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == 's') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == 's') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == 't') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == 't') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == 'u') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == 'x') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == 'y') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_bareid_token1);
      if (lookahead == '\'') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_bareid_token2);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_bareid_token2);
      if (lookahead == '\'') ADVANCE(313);
      if (lookahead == '[') ADVANCE(141);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_bareid_token2);
      if (lookahead == '\'') ADVANCE(313);
      if (lookahead == '[') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_qualid);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_qualid);
      if (lookahead == '\'') ADVANCE(316);
      if (lookahead == '.') ADVANCE(13);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_qualid);
      if (lookahead == '\'') ADVANCE(316);
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_qualid);
      if (lookahead == '\'') ADVANCE(318);
      if (lookahead == '[') ADVANCE(142);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_qualid);
      if (lookahead == '\'') ADVANCE(318);
      if (lookahead == '[') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_qualid);
      if (lookahead == '\'') ADVANCE(320);
      if (lookahead == '.') ADVANCE(145);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_qualid);
      if (lookahead == '\'') ADVANCE(320);
      if (lookahead == '.') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(323);
      END_STATE();
    case 324:
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
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 11},
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
  [65] = {.lex_state = 14},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 14},
  [72] = {.lex_state = 14},
  [73] = {.lex_state = 14},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 14},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 14},
  [80] = {.lex_state = 12},
  [81] = {.lex_state = 14},
  [82] = {.lex_state = 12},
  [83] = {.lex_state = 14},
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
  [97] = {.lex_state = 14},
  [98] = {.lex_state = 14},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 14},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 12},
  [103] = {.lex_state = 9},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 14},
  [106] = {.lex_state = 14},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 9},
  [109] = {.lex_state = 4},
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
  [121] = {.lex_state = 14},
  [122] = {.lex_state = 4},
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
  [133] = {.lex_state = 11},
  [134] = {.lex_state = 9},
  [135] = {.lex_state = 147},
  [136] = {.lex_state = 14},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 147},
  [139] = {.lex_state = 147},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 11},
  [142] = {.lex_state = 11},
  [143] = {.lex_state = 9},
  [144] = {.lex_state = 14},
  [145] = {.lex_state = 147},
  [146] = {.lex_state = 147},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 9},
  [149] = {.lex_state = 14},
  [150] = {.lex_state = 147},
  [151] = {.lex_state = 147},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 4},
  [155] = {.lex_state = 147},
  [156] = {.lex_state = 11},
  [157] = {.lex_state = 147},
  [158] = {.lex_state = 147},
  [159] = {.lex_state = 9},
  [160] = {.lex_state = 147},
  [161] = {.lex_state = 147},
  [162] = {.lex_state = 147},
  [163] = {.lex_state = 11},
  [164] = {.lex_state = 11},
  [165] = {.lex_state = 147},
  [166] = {.lex_state = 147},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 147},
  [170] = {.lex_state = 9},
  [171] = {.lex_state = 147},
  [172] = {.lex_state = 11},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 12},
  [175] = {.lex_state = 147},
  [176] = {.lex_state = 11},
  [177] = {.lex_state = 147},
  [178] = {.lex_state = 147},
  [179] = {.lex_state = 4},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 11},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 147},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 11},
  [186] = {.lex_state = 147},
  [187] = {.lex_state = 10},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 11},
  [190] = {.lex_state = 147},
  [191] = {.lex_state = 9},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 11},
  [195] = {.lex_state = 147},
  [196] = {.lex_state = 147},
  [197] = {.lex_state = 9},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 147},
  [200] = {.lex_state = 9},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 11},
  [203] = {.lex_state = 147},
  [204] = {.lex_state = 9},
  [205] = {.lex_state = 9},
  [206] = {.lex_state = 11},
  [207] = {.lex_state = 9},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 147},
  [210] = {.lex_state = 11},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 11},
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
  [237] = {.lex_state = 11},
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
  [254] = {.lex_state = 14},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
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
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 5},
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
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 147},
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
    [anon_sym_sub] = ACTIONS(1),
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
    [anon_sym_DASH] = ACTIONS(1),
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
      sym_digits,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_DASH,
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
    STATE(47), 1,
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
    ACTIONS(31), 2,
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
      sym_digits,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(68), 1,
      anon_sym_DASH,
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
    STATE(47), 1,
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
    ACTIONS(62), 2,
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
      sym_digits,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_DASH,
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
    STATE(47), 1,
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
    ACTIONS(31), 2,
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
      sym_digits,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_DASH,
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
    STATE(47), 1,
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
    ACTIONS(31), 2,
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
      sym_digits,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(114), 1,
      anon_sym_DASH,
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
    STATE(47), 1,
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
    ACTIONS(108), 2,
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
      sym_digits,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_DASH,
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
    STATE(47), 1,
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
    ACTIONS(31), 2,
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
      sym_digits,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_DASH,
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
    STATE(47), 1,
      sym_unop,
    STATE(71), 1,
      sym_string,
    STATE(77), 1,
      sym_id,
    STATE(86), 1,
      sym_atom,
    STATE(87), 1,
      sym_constant,
    STATE(105), 1,
      sym_bareid,
    STATE(121), 1,
      sym_func_term,
    STATE(238), 1,
      sym_model_fact,
    STATE(285), 1,
      sym_model_sentence,
    STATE(292), 1,
      sym_model_body,
    STATE(298), 1,
      sym_model_contract,
    ACTIONS(31), 2,
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
      sym_digits,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_DASH,
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
    STATE(47), 1,
      sym_unop,
    STATE(71), 1,
      sym_string,
    STATE(77), 1,
      sym_id,
    STATE(86), 1,
      sym_atom,
    STATE(87), 1,
      sym_constant,
    STATE(105), 1,
      sym_bareid,
    STATE(121), 1,
      sym_func_term,
    STATE(238), 1,
      sym_model_fact,
    STATE(285), 1,
      sym_model_sentence,
    STATE(298), 1,
      sym_model_contract,
    ACTIONS(31), 2,
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
      sym_digits,
    ACTIONS(159), 1,
      anon_sym_DQUOTE,
    ACTIONS(162), 1,
      anon_sym_DASH,
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
    STATE(47), 1,
      sym_unop,
    STATE(71), 1,
      sym_string,
    STATE(77), 1,
      sym_id,
    STATE(86), 1,
      sym_atom,
    STATE(87), 1,
      sym_constant,
    STATE(105), 1,
      sym_bareid,
    STATE(121), 1,
      sym_func_term,
    STATE(238), 1,
      sym_model_fact,
    STATE(285), 1,
      sym_model_sentence,
    STATE(298), 1,
      sym_model_contract,
    ACTIONS(156), 2,
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
      sym_digits,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_DASH,
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
    ACTIONS(31), 2,
      sym_real,
      sym_frac,
    STATE(337), 2,
      sym_type_decl,
      sym_rule,
  [1020] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
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
    STATE(59), 1,
      sym_string,
    STATE(61), 1,
      sym_atom,
    STATE(62), 1,
      sym_constant,
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
      sym_digits,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_DASH,
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
    ACTIONS(31), 2,
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
    ACTIONS(35), 1,
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
    STATE(59), 1,
      sym_string,
    STATE(61), 1,
      sym_atom,
    STATE(62), 1,
      sym_constant,
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
    ACTIONS(35), 1,
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
    STATE(59), 1,
      sym_string,
    STATE(61), 1,
      sym_atom,
    STATE(62), 1,
      sym_constant,
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
    ACTIONS(35), 1,
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
    STATE(59), 1,
      sym_string,
    STATE(61), 1,
      sym_atom,
    STATE(62), 1,
      sym_constant,
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
      sym_digits,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_DASH,
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
    STATE(71), 1,
      sym_string,
    STATE(77), 1,
      sym_id,
    STATE(86), 1,
      sym_atom,
    STATE(87), 1,
      sym_constant,
    STATE(105), 1,
      sym_bareid,
    STATE(121), 1,
      sym_func_term,
    STATE(248), 1,
      sym_model_fact,
    STATE(296), 1,
      sym_model_contract,
    ACTIONS(31), 2,
      sym_real,
      sym_frac,
  [1538] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
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
    STATE(59), 1,
      sym_string,
    STATE(61), 1,
      sym_atom,
    STATE(62), 1,
      sym_constant,
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
    ACTIONS(35), 1,
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
    STATE(59), 1,
      sym_string,
    STATE(61), 1,
      sym_atom,
    STATE(62), 1,
      sym_constant,
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
      sym_digits,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_DASH,
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
    STATE(65), 1,
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
    ACTIONS(31), 2,
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
      sym_digits,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_DASH,
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
    STATE(65), 1,
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
    ACTIONS(31), 2,
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
      sym_digits,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_DASH,
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
    STATE(65), 1,
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
    ACTIONS(31), 2,
      sym_real,
      sym_frac,
  [1973] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
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
    STATE(59), 1,
      sym_string,
    STATE(61), 1,
      sym_atom,
    STATE(62), 1,
      sym_constant,
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
      sym_digits,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_DASH,
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
    STATE(65), 1,
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
    ACTIONS(31), 2,
      sym_real,
      sym_frac,
  [2097] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym_digits,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_DASH,
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
    STATE(47), 1,
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
    STATE(127), 1,
      sym_func_term,
    STATE(231), 1,
      sym_mod_app_arg,
    STATE(310), 1,
      sym_mod_arg_list,
    ACTIONS(31), 2,
      sym_real,
      sym_frac,
  [2159] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym_digits,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_DASH,
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
    STATE(47), 1,
      sym_unop,
    STATE(71), 1,
      sym_string,
    STATE(77), 1,
      sym_id,
    STATE(86), 1,
      sym_atom,
    STATE(87), 1,
      sym_constant,
    STATE(105), 1,
      sym_bareid,
    STATE(121), 1,
      sym_func_term,
    STATE(268), 1,
      sym_model_fact,
    ACTIONS(31), 2,
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
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [2248] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
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
    STATE(59), 1,
      sym_string,
    STATE(61), 1,
      sym_atom,
    STATE(62), 1,
      sym_constant,
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
      sym_digits,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_DASH,
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
    STATE(65), 1,
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
    ACTIONS(31), 2,
      sym_real,
      sym_frac,
  [2366] = 3,
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
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2392] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(234), 15,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_is,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2418] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym_digits,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_DASH,
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
    STATE(127), 1,
      sym_func_term,
    STATE(277), 1,
      sym_mod_app_arg,
    ACTIONS(31), 2,
      sym_real,
      sym_frac,
  [2474] = 3,
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
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2500] = 5,
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
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2530] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_SLASH,
    STATE(51), 1,
      sym_relop,
    STATE(55), 1,
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
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(248), 5,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2566] = 15,
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
    ACTIONS(264), 1,
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
    ACTIONS(260), 2,
      anon_sym_sub,
      anon_sym_new,
    ACTIONS(262), 4,
      anon_sym_inj,
      anon_sym_bij,
      anon_sym_sur,
      anon_sym_fun,
  [2616] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym_digits,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_DASH,
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
    STATE(71), 1,
      sym_string,
    STATE(77), 1,
      sym_id,
    STATE(86), 1,
      sym_atom,
    STATE(87), 1,
      sym_constant,
    STATE(105), 1,
      sym_bareid,
    STATE(121), 1,
      sym_func_term,
    STATE(262), 1,
      sym_model_fact,
    ACTIONS(31), 2,
      sym_real,
      sym_frac,
  [2672] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_SLASH,
    STATE(55), 1,
      sym_binop,
    ACTIONS(268), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(250), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(266), 9,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2703] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym_digits,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_DASH,
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
    STATE(65), 1,
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
    ACTIONS(31), 2,
      sym_real,
      sym_frac,
  [2756] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym_digits,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_DASH,
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
    STATE(65), 1,
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
    ACTIONS(31), 2,
      sym_real,
      sym_frac,
  [2809] = 4,
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
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2836] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym_digits,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_DASH,
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
    STATE(65), 1,
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
    ACTIONS(31), 2,
      sym_real,
      sym_frac,
  [2889] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym_digits,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_DASH,
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
    STATE(65), 1,
      sym_bareid,
    STATE(71), 1,
      sym_string,
    STATE(77), 1,
      sym_id,
    STATE(86), 1,
      sym_atom,
    STATE(87), 1,
      sym_constant,
    STATE(97), 1,
      sym_func_term,
    ACTIONS(31), 2,
      sym_real,
      sym_frac,
  [2942] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym_digits,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_DASH,
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
    STATE(65), 1,
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
    ACTIONS(31), 2,
      sym_real,
      sym_frac,
  [2995] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym_digits,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_DASH,
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
    STATE(65), 1,
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
    ACTIONS(31), 2,
      sym_real,
      sym_frac,
  [3048] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      sym_digits,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(203), 1,
      sym_qualid,
    ACTIONS(270), 1,
      anon_sym_PERCENT,
    ACTIONS(272), 1,
      aux_sym_bareid_token1,
    ACTIONS(274), 1,
      aux_sym_bareid_token2,
    STATE(39), 1,
      sym_bareid,
    STATE(49), 1,
      sym_id,
    STATE(54), 1,
      sym_unop,
    STATE(57), 1,
      sym_func_term,
    STATE(59), 1,
      sym_string,
    STATE(61), 1,
      sym_atom,
    STATE(62), 1,
      sym_constant,
    ACTIONS(191), 2,
      sym_real,
      sym_frac,
  [3101] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      sym_digits,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(203), 1,
      sym_qualid,
    ACTIONS(270), 1,
      anon_sym_PERCENT,
    ACTIONS(272), 1,
      aux_sym_bareid_token1,
    ACTIONS(274), 1,
      aux_sym_bareid_token2,
    STATE(39), 1,
      sym_bareid,
    STATE(46), 1,
      sym_func_term,
    STATE(49), 1,
      sym_id,
    STATE(54), 1,
      sym_unop,
    STATE(59), 1,
      sym_string,
    STATE(61), 1,
      sym_atom,
    STATE(62), 1,
      sym_constant,
    ACTIONS(191), 2,
      sym_real,
      sym_frac,
  [3154] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym_digits,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_DASH,
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
    STATE(65), 1,
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
    ACTIONS(31), 2,
      sym_real,
      sym_frac,
  [3207] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(55), 1,
      sym_binop,
    ACTIONS(278), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(276), 13,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3234] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym_digits,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_DASH,
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
    STATE(65), 1,
      sym_bareid,
    STATE(71), 1,
      sym_string,
    STATE(73), 1,
      sym_func_term,
    STATE(77), 1,
      sym_id,
    STATE(86), 1,
      sym_atom,
    STATE(87), 1,
      sym_constant,
    ACTIONS(31), 2,
      sym_real,
      sym_frac,
  [3287] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(280), 13,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3311] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(284), 13,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3335] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(288), 13,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3359] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(238), 13,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3383] = 3,
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
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3407] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(266), 13,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3431] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_SLASH,
    ACTIONS(234), 14,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_is,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [3454] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 5,
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
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      aux_sym_bareid_token2,
      sym_qualid,
  [3477] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(294), 1,
      sym_digits,
    ACTIONS(298), 1,
      anon_sym_DASH,
    STATE(232), 1,
      sym_enum_cnst,
    STATE(289), 1,
      sym_enum_list,
    ACTIONS(296), 3,
      sym_real,
      sym_frac,
      sym_qualid,
    STATE(264), 3,
      sym_string,
      sym_range,
      sym_bareid,
  [3515] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 4,
      anon_sym_conforms,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(94), 10,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      aux_sym_bareid_token2,
      sym_qualid,
  [3537] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 5,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(139), 9,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      aux_sym_bareid_token2,
      sym_qualid,
  [3559] = 14,
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
    STATE(65), 1,
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
  [3603] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_SLASH,
    ACTIONS(280), 12,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [3624] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_SLASH,
    STATE(58), 1,
      sym_binop,
    ACTIONS(276), 11,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [3647] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_SLASH,
    STATE(58), 1,
      sym_binop,
    ACTIONS(250), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(266), 7,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [3672] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(294), 1,
      sym_digits,
    ACTIONS(298), 1,
      anon_sym_DASH,
    STATE(263), 1,
      sym_enum_cnst,
    ACTIONS(296), 3,
      sym_real,
      sym_frac,
      sym_qualid,
    STATE(264), 3,
      sym_string,
      sym_range,
      sym_bareid,
  [3707] = 13,
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
    ACTIONS(306), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
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
  [3748] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_RBRACE,
    ACTIONS(310), 1,
      anon_sym_LBRACK,
    ACTIONS(313), 1,
      anon_sym_PERCENT,
    ACTIONS(316), 1,
      aux_sym_bareid_token1,
    ACTIONS(319), 1,
      aux_sym_bareid_token2,
    ACTIONS(322), 1,
      sym_qualid,
    STATE(65), 1,
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
  [3789] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_SLASH,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    ACTIONS(238), 11,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [3812] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 5,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(327), 8,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      aux_sym_bareid_token2,
      sym_qualid,
  [3833] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_SLASH,
    STATE(58), 1,
      sym_binop,
    ACTIONS(250), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(331), 6,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [3857] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_LBRACE,
    ACTIONS(264), 1,
      sym_qualid,
    ACTIONS(270), 1,
      anon_sym_PERCENT,
    ACTIONS(272), 1,
      aux_sym_bareid_token1,
    ACTIONS(274), 1,
      aux_sym_bareid_token2,
    ACTIONS(333), 1,
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
  [3897] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_SLASH,
    ACTIONS(284), 11,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [3917] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_LBRACE,
    ACTIONS(264), 1,
      sym_qualid,
    ACTIONS(270), 1,
      anon_sym_PERCENT,
    ACTIONS(272), 1,
      aux_sym_bareid_token1,
    ACTIONS(274), 1,
      aux_sym_bareid_token2,
    ACTIONS(333), 1,
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
  [3957] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_SLASH,
    ACTIONS(266), 11,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [3977] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_LBRACE,
    ACTIONS(264), 1,
      sym_qualid,
    ACTIONS(270), 1,
      anon_sym_PERCENT,
    ACTIONS(272), 1,
      aux_sym_bareid_token1,
    ACTIONS(274), 1,
      aux_sym_bareid_token2,
    ACTIONS(333), 1,
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
    STATE(293), 1,
      sym_fields,
  [4017] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 4,
      anon_sym_conforms,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(327), 8,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      aux_sym_bareid_token2,
      sym_qualid,
  [4037] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_SLASH,
    ACTIONS(288), 11,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4057] = 3,
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
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4077] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_LBRACE,
    ACTIONS(264), 1,
      sym_qualid,
    ACTIONS(270), 1,
      anon_sym_PERCENT,
    ACTIONS(272), 1,
      aux_sym_bareid_token1,
    ACTIONS(274), 1,
      aux_sym_bareid_token2,
    ACTIONS(333), 1,
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
  [4117] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(339), 1,
      anon_sym_PERCENT,
    STATE(110), 1,
      sym_bareid,
    STATE(192), 1,
      sym_mod_ref,
    STATE(250), 1,
      sym_mod_refs,
    ACTIONS(335), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
    ACTIONS(337), 2,
      anon_sym_includes,
      anon_sym_extends,
    STATE(147), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [4151] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_RBRACE,
    ACTIONS(343), 1,
      anon_sym_boot,
    ACTIONS(347), 1,
      anon_sym_property,
    ACTIONS(349), 1,
      anon_sym_LBRACK,
    STATE(168), 1,
      sym_sentence_config,
    STATE(283), 1,
      sym_machine_sentence,
    STATE(287), 1,
      sym_machine_body,
    STATE(291), 1,
      sym_machine_prop,
    ACTIONS(345), 2,
      anon_sym_initially,
      anon_sym_next,
    STATE(94), 2,
      sym__machine_sentence_conf,
      aux_sym_machine_body_repeat1,
  [4187] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_RBRACE,
    ACTIONS(353), 1,
      anon_sym_boot,
    ACTIONS(359), 1,
      anon_sym_property,
    ACTIONS(362), 1,
      anon_sym_LBRACK,
    STATE(168), 1,
      sym_sentence_config,
    STATE(283), 1,
      sym_machine_sentence,
    STATE(291), 1,
      sym_machine_prop,
    ACTIONS(356), 2,
      anon_sym_initially,
      anon_sym_next,
    STATE(91), 2,
      sym__machine_sentence_conf,
      aux_sym_machine_body_repeat1,
  [4220] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_SLASH,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    ACTIONS(365), 1,
      anon_sym_is,
    ACTIONS(238), 8,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4243] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_LBRACE,
    ACTIONS(264), 1,
      sym_qualid,
    ACTIONS(270), 1,
      anon_sym_PERCENT,
    ACTIONS(272), 1,
      aux_sym_bareid_token1,
    ACTIONS(274), 1,
      aux_sym_bareid_token2,
    ACTIONS(333), 1,
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
  [4280] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_boot,
    ACTIONS(347), 1,
      anon_sym_property,
    ACTIONS(349), 1,
      anon_sym_LBRACK,
    ACTIONS(367), 1,
      anon_sym_RBRACE,
    STATE(168), 1,
      sym_sentence_config,
    STATE(283), 1,
      sym_machine_sentence,
    STATE(291), 1,
      sym_machine_prop,
    ACTIONS(345), 2,
      anon_sym_initially,
      anon_sym_next,
    STATE(91), 2,
      sym__machine_sentence_conf,
      aux_sym_machine_body_repeat1,
  [4313] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_SLASH,
    STATE(58), 1,
      sym_binop,
    ACTIONS(250), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(369), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [4335] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 3,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(371), 7,
      anon_sym_LPAREN,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      aux_sym_bareid_token2,
      sym_qualid,
  [4353] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_SLASH,
    STATE(58), 1,
      sym_binop,
    ACTIONS(250), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(375), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [4375] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_SLASH,
    ACTIONS(377), 1,
      anon_sym_COLON_COLON_EQ,
    ACTIONS(234), 8,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COLON_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4395] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 3,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(327), 7,
      anon_sym_LPAREN,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      aux_sym_bareid_token2,
      sym_qualid,
  [4413] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_SLASH,
    STATE(58), 1,
      sym_binop,
    ACTIONS(250), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(379), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [4435] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 3,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(381), 7,
      anon_sym_LPAREN,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      aux_sym_bareid_token2,
      sym_qualid,
  [4453] = 11,
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
    ACTIONS(264), 1,
      sym_qualid,
    ACTIONS(385), 1,
      anon_sym_any,
    STATE(133), 1,
      sym_unncmp,
    STATE(163), 1,
      sym_typeid,
    STATE(164), 1,
      sym_bareid,
    STATE(194), 1,
      sym_unnbody,
  [4487] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
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
    ACTIONS(387), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
    STATE(147), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [4515] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 3,
      sym_digits,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(389), 7,
      anon_sym_LPAREN,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      aux_sym_bareid_token2,
      sym_qualid,
  [4533] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_SLASH,
    ACTIONS(393), 1,
      anon_sym_is,
    ACTIONS(234), 7,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4552] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_SLASH,
    ACTIONS(395), 1,
      anon_sym_at,
    ACTIONS(234), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4571] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_AT,
    ACTIONS(397), 8,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [4588] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
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
    STATE(147), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [4615] = 10,
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
    ACTIONS(264), 1,
      sym_qualid,
    STATE(133), 1,
      sym_unncmp,
    STATE(163), 1,
      sym_typeid,
    STATE(164), 1,
      sym_bareid,
    STATE(206), 1,
      sym_unnbody,
  [4646] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_COLON_COLON,
    ACTIONS(405), 1,
      anon_sym_AT,
    ACTIONS(401), 7,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [4665] = 10,
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
    ACTIONS(264), 1,
      sym_qualid,
    STATE(133), 1,
      sym_unncmp,
    STATE(163), 1,
      sym_typeid,
    STATE(164), 1,
      sym_bareid,
    STATE(256), 1,
      sym_unnbody,
  [4696] = 10,
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
    ACTIONS(264), 1,
      sym_qualid,
    STATE(133), 1,
      sym_unncmp,
    STATE(163), 1,
      sym_typeid,
    STATE(164), 1,
      sym_bareid,
    STATE(202), 1,
      sym_unnbody,
  [4727] = 9,
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
    STATE(65), 1,
      sym_bareid,
    STATE(247), 1,
      sym_id,
    STATE(336), 1,
      sym_update,
    STATE(372), 1,
      sym_step_or_update_lhs,
  [4755] = 9,
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
    STATE(65), 1,
      sym_bareid,
    STATE(247), 1,
      sym_id,
    STATE(295), 1,
      sym_step,
    STATE(338), 1,
      sym_step_or_update_lhs,
  [4783] = 9,
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
    STATE(65), 1,
      sym_bareid,
    STATE(225), 1,
      sym_setting,
    STATE(344), 1,
      sym_id,
    STATE(366), 1,
      sym_setting_list,
  [4811] = 9,
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
    STATE(65), 1,
      sym_bareid,
    STATE(225), 1,
      sym_setting,
    STATE(344), 1,
      sym_id,
    STATE(361), 1,
      sym_setting_list,
  [4839] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
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
    STATE(147), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [4863] = 9,
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
    STATE(65), 1,
      sym_bareid,
    STATE(225), 1,
      sym_setting,
    STATE(344), 1,
      sym_id,
    STATE(346), 1,
      sym_setting_list,
  [4891] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_SLASH,
    STATE(58), 1,
      sym_binop,
    ACTIONS(407), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
    ACTIONS(250), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4911] = 9,
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
    ACTIONS(264), 1,
      sym_qualid,
    STATE(156), 1,
      sym_unncmp,
    STATE(163), 1,
      sym_typeid,
    STATE(164), 1,
      sym_bareid,
  [4939] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_SLASH,
    STATE(58), 1,
      sym_binop,
    ACTIONS(409), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
    ACTIONS(250), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4959] = 9,
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
    STATE(65), 1,
      sym_bareid,
    STATE(225), 1,
      sym_setting,
    STATE(344), 1,
      sym_id,
    STATE(357), 1,
      sym_setting_list,
  [4987] = 9,
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
    STATE(65), 1,
      sym_bareid,
    STATE(225), 1,
      sym_setting,
    STATE(344), 1,
      sym_id,
    STATE(367), 1,
      sym_setting_list,
  [5015] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
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
    STATE(147), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5039] = 2,
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
  [5053] = 9,
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
    STATE(65), 1,
      sym_bareid,
    STATE(247), 1,
      sym_id,
    STATE(336), 1,
      sym_step,
    STATE(338), 1,
      sym_step_or_update_lhs,
  [5081] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_SLASH,
    STATE(58), 1,
      sym_binop,
    ACTIONS(413), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(250), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [5101] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_RPAREN,
    ACTIONS(417), 1,
      anon_sym_PERCENT,
    STATE(219), 1,
      sym_val_or_model_program,
    STATE(266), 1,
      sym_mod_ref_rename,
    STATE(267), 1,
      sym_bareid,
    STATE(331), 1,
      sym_vom_param_list,
    ACTIONS(274), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [5127] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
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
    STATE(147), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5151] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
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
    STATE(147), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5175] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_PERCENT,
    ACTIONS(419), 1,
      anon_sym_RPAREN,
    STATE(219), 1,
      sym_val_or_model_program,
    STATE(266), 1,
      sym_mod_ref_rename,
    STATE(267), 1,
      sym_bareid,
    STATE(326), 1,
      sym_vom_param_list,
    ACTIONS(274), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [5201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [5214] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_PLUS,
    STATE(142), 1,
      aux_sym_unnbody_repeat1,
    ACTIONS(423), 5,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [5231] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_PERCENT,
    STATE(110), 1,
      sym_bareid,
    STATE(211), 1,
      sym_mod_ref,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
    STATE(147), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5252] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 7,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [5265] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_SLASH,
    ACTIONS(429), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      sym_binop,
    ACTIONS(250), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [5284] = 8,
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
    STATE(65), 1,
      sym_bareid,
    STATE(275), 1,
      sym_setting,
    STATE(344), 1,
      sym_id,
  [5309] = 4,
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
  [5326] = 4,
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
  [5343] = 2,
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
  [5356] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_PLUS,
    STATE(141), 1,
      aux_sym_unnbody_repeat1,
    ACTIONS(442), 5,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [5373] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_PLUS,
    STATE(141), 1,
      aux_sym_unnbody_repeat1,
    ACTIONS(447), 5,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [5390] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_PERCENT,
    STATE(110), 1,
      sym_bareid,
    STATE(201), 1,
      sym_mod_ref,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
    STATE(147), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5411] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_SLASH,
    ACTIONS(449), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      sym_binop,
    ACTIONS(250), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [5430] = 2,
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
  [5443] = 4,
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
  [5460] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 7,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [5473] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_PERCENT,
    STATE(110), 1,
      sym_bareid,
    STATE(193), 1,
      sym_mod_ref,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
    STATE(147), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5494] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_SLASH,
    ACTIONS(457), 1,
      anon_sym_DOT,
    STATE(58), 1,
      sym_binop,
    ACTIONS(250), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [5513] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [5525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 6,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [5537] = 7,
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
    STATE(65), 1,
      sym_bareid,
    STATE(251), 1,
      sym_id,
  [5559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [5571] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 2,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
    ACTIONS(308), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_bareid_token2,
      sym_qualid,
  [5585] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [5597] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_PLUS,
  [5609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [5621] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [5633] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
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
  [5653] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [5665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [5677] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [5689] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_PLUS,
  [5701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_PLUS,
  [5713] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [5725] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 6,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [5737] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      sym_digits,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(71), 1,
      sym_string,
    STATE(276), 1,
      sym_constant,
    ACTIONS(31), 2,
      sym_real,
      sym_frac,
  [5757] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_boot,
    ACTIONS(347), 1,
      anon_sym_property,
    STATE(291), 1,
      sym_machine_prop,
    STATE(348), 1,
      sym_machine_sentence,
    ACTIONS(345), 2,
      anon_sym_initially,
      anon_sym_next,
  [5777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [5789] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_PERCENT,
    STATE(253), 1,
      sym_val_or_model_program,
    STATE(266), 1,
      sym_mod_ref_rename,
    STATE(267), 1,
      sym_bareid,
    ACTIONS(274), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [5809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [5821] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_PLUS,
  [5833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [5845] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 3,
      anon_sym_LBRACE,
      aux_sym_bareid_token2,
      sym_qualid,
    ACTIONS(493), 3,
      anon_sym_any,
      anon_sym_PERCENT,
      aux_sym_bareid_token1,
  [5859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [5871] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      anon_sym_COLON,
    ACTIONS(479), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_PLUS,
  [5885] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [5897] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_partial,
      anon_sym_model,
      anon_sym_transform,
      anon_sym_domain,
  [5909] = 7,
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
    STATE(65), 1,
      sym_bareid,
    STATE(284), 1,
      sym_id,
  [5931] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_LPAREN,
    STATE(160), 1,
      sym_transform_rest,
    STATE(234), 1,
      sym_transform_sig,
    STATE(302), 1,
      sym_trans_sig_in,
    STATE(312), 1,
      sym_transform_sig_config,
  [5950] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_COMMA,
    STATE(189), 1,
      aux_sym_fields_repeat1,
    ACTIONS(505), 3,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [5965] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_LPAREN,
    STATE(177), 1,
      sym_tsystem_rest,
    STATE(234), 1,
      sym_transform_sig,
    STATE(302), 1,
      sym_trans_sig_in,
    STATE(330), 1,
      sym_transform_sig_config,
  [5984] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_COMMA,
    STATE(190), 1,
      aux_sym_body_repeat1,
    ACTIONS(509), 3,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [5999] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_COMMA,
    STATE(188), 1,
      aux_sym_mod_refs_repeat1,
    ACTIONS(513), 3,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LBRACK,
  [6014] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_COMMA,
    STATE(185), 1,
      aux_sym_fields_repeat1,
    ACTIONS(517), 3,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [6029] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_COMMA,
    STATE(183), 1,
      aux_sym_body_repeat1,
    ACTIONS(522), 3,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [6044] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_bareid_token1,
    ACTIONS(41), 1,
      aux_sym_bareid_token2,
    ACTIONS(339), 1,
      anon_sym_PERCENT,
    ACTIONS(524), 1,
      anon_sym_system,
    STATE(180), 1,
      sym_bareid,
  [6063] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_COMMA,
    STATE(188), 1,
      aux_sym_mod_refs_repeat1,
    ACTIONS(526), 3,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LBRACK,
  [6078] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_COMMA,
    STATE(185), 1,
      aux_sym_fields_repeat1,
    ACTIONS(531), 3,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [6093] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_COMMA,
    STATE(190), 1,
      aux_sym_body_repeat1,
    ACTIONS(533), 3,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [6108] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_PERCENT,
    STATE(255), 1,
      sym_mod_ref_rename,
    STATE(305), 1,
      sym_bareid,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [6125] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_COMMA,
    STATE(184), 1,
      aux_sym_mod_refs_repeat1,
    ACTIONS(538), 3,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LBRACK,
  [6140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 4,
      anon_sym_LBRACE,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [6150] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [6160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [6170] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_SEMI,
    STATE(196), 1,
      aux_sym_body_list_repeat1,
    ACTIONS(544), 2,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [6184] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_PERCENT,
    STATE(107), 1,
      sym_bareid,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [6198] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 4,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
  [6208] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [6218] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_PERCENT,
    STATE(349), 1,
      sym_bareid,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [6232] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 4,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_COMMA,
      anon_sym_LBRACK,
  [6242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [6252] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_SEMI,
    STATE(196), 1,
      aux_sym_body_list_repeat1,
    ACTIONS(551), 2,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [6266] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_PERCENT,
    STATE(280), 1,
      sym_bareid,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [6280] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_PERCENT,
    STATE(371), 1,
      sym_bareid,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [6294] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [6304] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_PERCENT,
    STATE(89), 1,
      sym_bareid,
    ACTIONS(274), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [6318] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_LBRACE,
    ACTIONS(559), 1,
      anon_sym_machine,
    STATE(208), 2,
      sym_machine_sig,
      aux_sym_machine_sig_config_repeat1,
  [6332] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_SEMI,
    STATE(203), 1,
      aux_sym_body_list_repeat1,
    ACTIONS(562), 2,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [6346] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [6356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 4,
      anon_sym_LBRACE,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [6366] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
    ACTIONS(570), 2,
      anon_sym_includes,
      anon_sym_extends,
  [6378] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_machine,
    ACTIONS(572), 1,
      anon_sym_LBRACE,
    STATE(208), 2,
      sym_machine_sig,
      aux_sym_machine_sig_config_repeat1,
  [6392] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [6402] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_PERCENT,
    STATE(327), 1,
      sym_bareid,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [6416] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_PERCENT,
    STATE(182), 1,
      sym_bareid,
    ACTIONS(41), 2,
      aux_sym_bareid_token1,
      aux_sym_bareid_token2,
  [6430] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      anon_sym_DOT,
    ACTIONS(576), 1,
      anon_sym_SEMI,
    STATE(226), 1,
      aux_sym_choice_list_repeat1,
  [6443] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_RPAREN,
    ACTIONS(580), 1,
      anon_sym_COMMA,
    STATE(218), 1,
      aux_sym_model_param_list_repeat1,
  [6456] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_RPAREN,
    ACTIONS(585), 1,
      anon_sym_COMMA,
    STATE(221), 1,
      aux_sym_vom_param_list_repeat1,
  [6469] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_RPAREN,
    ACTIONS(589), 1,
      anon_sym_COMMA,
    STATE(218), 1,
      aux_sym_model_param_list_repeat1,
  [6482] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_COMMA,
    ACTIONS(591), 1,
      anon_sym_RPAREN,
    STATE(228), 1,
      aux_sym_vom_param_list_repeat1,
  [6495] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_COMMA,
    ACTIONS(596), 1,
      anon_sym_RBRACK,
    STATE(222), 1,
      aux_sym_setting_list_repeat1,
  [6508] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_DOT_DOT,
    ACTIONS(598), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [6519] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
      anon_sym_RBRACE,
    ACTIONS(604), 1,
      anon_sym_COMMA,
    STATE(224), 1,
      aux_sym_enum_list_repeat1,
  [6532] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_COMMA,
    ACTIONS(609), 1,
      anon_sym_RBRACK,
    STATE(233), 1,
      aux_sym_setting_list_repeat1,
  [6545] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_DOT,
    ACTIONS(613), 1,
      anon_sym_SEMI,
    STATE(226), 1,
      aux_sym_choice_list_repeat1,
  [6558] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(616), 1,
      anon_sym_LBRACE,
    STATE(342), 1,
      sym_config,
  [6571] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_RPAREN,
    ACTIONS(620), 1,
      anon_sym_COMMA,
    STATE(228), 1,
      aux_sym_vom_param_list_repeat1,
  [6584] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_DOT,
    ACTIONS(625), 1,
      anon_sym_COMMA,
    STATE(235), 1,
      aux_sym_model_fact_list_repeat1,
  [6597] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(627), 1,
      anon_sym_LBRACE,
    STATE(343), 1,
      sym_config,
  [6610] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_RPAREN,
    ACTIONS(631), 1,
      anon_sym_COMMA,
    STATE(245), 1,
      aux_sym_mod_arg_list_repeat1,
  [6623] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_RBRACE,
    ACTIONS(635), 1,
      anon_sym_COMMA,
    STATE(243), 1,
      aux_sym_enum_list_repeat1,
  [6636] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_COMMA,
    ACTIONS(637), 1,
      anon_sym_RBRACK,
    STATE(222), 1,
      aux_sym_setting_list_repeat1,
  [6649] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(639), 1,
      anon_sym_LBRACE,
    STATE(332), 1,
      sym_config,
  [6662] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_DOT,
    ACTIONS(643), 1,
      anon_sym_COMMA,
    STATE(235), 1,
      aux_sym_model_fact_list_repeat1,
  [6675] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_COMMA,
    ACTIONS(646), 1,
      anon_sym_RPAREN,
    STATE(220), 1,
      aux_sym_model_param_list_repeat1,
  [6688] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(88), 1,
      sym_maparrow,
    ACTIONS(648), 2,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [6699] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_COMMA,
    ACTIONS(650), 1,
      anon_sym_DOT,
    STATE(242), 1,
      aux_sym_model_fact_list_repeat1,
  [6712] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_EQ,
    ACTIONS(654), 1,
      anon_sym_COMMA,
    STATE(239), 1,
      aux_sym_step_or_update_lhs_repeat1,
  [6725] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_RPAREN,
    ACTIONS(659), 1,
      anon_sym_COMMA,
    STATE(240), 1,
      aux_sym_mod_arg_list_repeat1,
  [6738] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_SEMI,
    ACTIONS(662), 1,
      anon_sym_DOT,
    STATE(217), 1,
      aux_sym_choice_list_repeat1,
  [6751] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_COMMA,
    ACTIONS(664), 1,
      anon_sym_DOT,
    STATE(235), 1,
      aux_sym_model_fact_list_repeat1,
  [6764] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_COMMA,
    ACTIONS(666), 1,
      anon_sym_RBRACE,
    STATE(224), 1,
      aux_sym_enum_list_repeat1,
  [6777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 3,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [6786] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      anon_sym_COMMA,
    ACTIONS(668), 1,
      anon_sym_RPAREN,
    STATE(240), 1,
      aux_sym_mod_arg_list_repeat1,
  [6799] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_EQ,
    ACTIONS(672), 1,
      anon_sym_COMMA,
    STATE(239), 1,
      aux_sym_step_or_update_lhs_repeat1,
  [6812] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 1,
      anon_sym_COMMA,
    ACTIONS(674), 1,
      anon_sym_EQ,
    STATE(246), 1,
      aux_sym_step_or_update_lhs_repeat1,
  [6825] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_COMMA,
    ACTIONS(664), 1,
      anon_sym_DOT,
    STATE(229), 1,
      aux_sym_model_fact_list_repeat1,
  [6838] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6846] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [6854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 2,
      anon_sym_EQ,
      anon_sym_COMMA,
  [6862] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [6870] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6878] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      sym_digits,
    ACTIONS(682), 1,
      anon_sym_DASH,
  [6888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 2,
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
  [6912] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [6920] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [6928] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      anon_sym_DOT,
    ACTIONS(692), 1,
      anon_sym_COLON_DASH,
  [6938] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(125), 1,
      sym_string,
  [6948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
  [6956] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [6964] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [6972] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      anon_sym_RBRACE,
    ACTIONS(698), 1,
      anon_sym_PIPE,
  [6982] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6990] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_COLON_COLON,
    ACTIONS(702), 1,
      anon_sym_COLON,
  [7000] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
  [7008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [7016] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(249), 1,
      sym_string,
  [7026] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [7034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [7042] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [7050] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(140), 1,
      sym_string,
  [7060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7068] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7076] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7084] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [7092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 2,
      anon_sym_LBRACE,
      anon_sym_machine,
  [7100] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_LPAREN,
    STATE(329), 1,
      sym_machine_sig_in,
  [7110] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      sym_digits,
    ACTIONS(722), 1,
      anon_sym_DASH,
  [7120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_returns,
  [7127] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_DOT,
  [7134] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_DOT,
  [7141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      anon_sym_DOT,
  [7148] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      sym_digits,
  [7155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_RBRACE,
  [7162] = 2,
    ACTIONS(736), 1,
      aux_sym_string_token1,
    ACTIONS(738), 1,
      sym_comment,
  [7169] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_RBRACE,
  [7176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_RBRACE,
  [7183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 1,
      anon_sym_DOT,
  [7190] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      anon_sym_RBRACE,
  [7197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      anon_sym_RPAREN,
  [7204] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_DOT_DOT,
  [7211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      anon_sym_DOT,
  [7218] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      anon_sym_DOT,
  [7225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 1,
      anon_sym_DOT,
  [7232] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      anon_sym_DOT,
  [7239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_DOT,
  [7246] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_DOT,
  [7253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_LPAREN,
  [7260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      anon_sym_returns,
  [7267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_RPAREN,
  [7274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_DOT,
  [7281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_COLON_COLON,
  [7288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_RPAREN,
  [7295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_DOT,
  [7302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_RBRACE,
  [7309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      anon_sym_DOT,
  [7316] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      anon_sym_RPAREN,
  [7323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      anon_sym_DOT,
  [7330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      anon_sym_LBRACE,
  [7337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      anon_sym_DOT,
  [7344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      anon_sym_DOT,
  [7351] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_RBRACE,
  [7358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_DOT,
  [7365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      sym_digits,
  [7372] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_DOT,
  [7379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      anon_sym_LPAREN,
  [7386] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      anon_sym_DOT,
  [7393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      anon_sym_LPAREN,
  [7400] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      anon_sym_LPAREN,
  [7407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_of,
  [7414] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      anon_sym_DOT,
  [7421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 1,
      anon_sym_DOT,
  [7428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_RPAREN,
  [7435] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_of,
  [7442] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_RPAREN,
  [7449] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      anon_sym_of,
  [7456] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym_LBRACE,
  [7463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      anon_sym_RPAREN,
  [7470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      anon_sym_LBRACE,
  [7477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      sym_digits,
  [7484] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      anon_sym_LPAREN,
  [7491] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      anon_sym_RPAREN,
  [7498] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      anon_sym_DOT,
  [7505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      anon_sym_DOT,
  [7512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_EQ,
  [7519] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_DOT,
  [7526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 1,
      anon_sym_DOT,
  [7533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 1,
      anon_sym_DOT,
  [7540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_LBRACE,
  [7547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_LBRACE,
  [7554] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      anon_sym_EQ,
  [7561] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(848), 1,
      anon_sym_RBRACE,
  [7568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 1,
      anon_sym_RBRACK,
  [7575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      anon_sym_returns,
  [7582] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      anon_sym_DOT,
  [7589] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 1,
      anon_sym_of,
  [7596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_of,
  [7603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_DQUOTE,
  [7610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      aux_sym_bareid_token1,
  [7617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      aux_sym_model_contract_token1,
  [7624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      aux_sym_model_contract_token1,
  [7631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      anon_sym_LBRACE,
  [7638] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 1,
      anon_sym_DOT,
  [7645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 1,
      anon_sym_RBRACK,
  [7652] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      anon_sym_LBRACE,
  [7659] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      anon_sym_LBRACE,
  [7666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(878), 1,
      aux_sym_bareid_token1,
  [7673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(880), 1,
      anon_sym_RBRACK,
  [7680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      anon_sym_DOT,
  [7687] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      anon_sym_DQUOTE,
  [7694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      anon_sym_RPAREN,
  [7701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(888), 1,
      aux_sym_bareid_token1,
  [7708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      anon_sym_RBRACK,
  [7715] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(892), 1,
      anon_sym_RBRACK,
  [7722] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      ts_builtin_sym_end,
  [7729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      anon_sym_DOT,
  [7736] = 2,
    ACTIONS(738), 1,
      sym_comment,
    ACTIONS(898), 1,
      aux_sym_string_token1,
  [7743] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      anon_sym_EQ,
  [7750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      anon_sym_EQ,
  [7757] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
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
  [SMALL_STATE(39)] = 2392,
  [SMALL_STATE(40)] = 2418,
  [SMALL_STATE(41)] = 2474,
  [SMALL_STATE(42)] = 2500,
  [SMALL_STATE(43)] = 2530,
  [SMALL_STATE(44)] = 2566,
  [SMALL_STATE(45)] = 2616,
  [SMALL_STATE(46)] = 2672,
  [SMALL_STATE(47)] = 2703,
  [SMALL_STATE(48)] = 2756,
  [SMALL_STATE(49)] = 2809,
  [SMALL_STATE(50)] = 2836,
  [SMALL_STATE(51)] = 2889,
  [SMALL_STATE(52)] = 2942,
  [SMALL_STATE(53)] = 2995,
  [SMALL_STATE(54)] = 3048,
  [SMALL_STATE(55)] = 3101,
  [SMALL_STATE(56)] = 3154,
  [SMALL_STATE(57)] = 3207,
  [SMALL_STATE(58)] = 3234,
  [SMALL_STATE(59)] = 3287,
  [SMALL_STATE(60)] = 3311,
  [SMALL_STATE(61)] = 3335,
  [SMALL_STATE(62)] = 3359,
  [SMALL_STATE(63)] = 3383,
  [SMALL_STATE(64)] = 3407,
  [SMALL_STATE(65)] = 3431,
  [SMALL_STATE(66)] = 3454,
  [SMALL_STATE(67)] = 3477,
  [SMALL_STATE(68)] = 3515,
  [SMALL_STATE(69)] = 3537,
  [SMALL_STATE(70)] = 3559,
  [SMALL_STATE(71)] = 3603,
  [SMALL_STATE(72)] = 3624,
  [SMALL_STATE(73)] = 3647,
  [SMALL_STATE(74)] = 3672,
  [SMALL_STATE(75)] = 3707,
  [SMALL_STATE(76)] = 3748,
  [SMALL_STATE(77)] = 3789,
  [SMALL_STATE(78)] = 3812,
  [SMALL_STATE(79)] = 3833,
  [SMALL_STATE(80)] = 3857,
  [SMALL_STATE(81)] = 3897,
  [SMALL_STATE(82)] = 3917,
  [SMALL_STATE(83)] = 3957,
  [SMALL_STATE(84)] = 3977,
  [SMALL_STATE(85)] = 4017,
  [SMALL_STATE(86)] = 4037,
  [SMALL_STATE(87)] = 4057,
  [SMALL_STATE(88)] = 4077,
  [SMALL_STATE(89)] = 4117,
  [SMALL_STATE(90)] = 4151,
  [SMALL_STATE(91)] = 4187,
  [SMALL_STATE(92)] = 4220,
  [SMALL_STATE(93)] = 4243,
  [SMALL_STATE(94)] = 4280,
  [SMALL_STATE(95)] = 4313,
  [SMALL_STATE(96)] = 4335,
  [SMALL_STATE(97)] = 4353,
  [SMALL_STATE(98)] = 4375,
  [SMALL_STATE(99)] = 4395,
  [SMALL_STATE(100)] = 4413,
  [SMALL_STATE(101)] = 4435,
  [SMALL_STATE(102)] = 4453,
  [SMALL_STATE(103)] = 4487,
  [SMALL_STATE(104)] = 4515,
  [SMALL_STATE(105)] = 4533,
  [SMALL_STATE(106)] = 4552,
  [SMALL_STATE(107)] = 4571,
  [SMALL_STATE(108)] = 4588,
  [SMALL_STATE(109)] = 4615,
  [SMALL_STATE(110)] = 4646,
  [SMALL_STATE(111)] = 4665,
  [SMALL_STATE(112)] = 4696,
  [SMALL_STATE(113)] = 4727,
  [SMALL_STATE(114)] = 4755,
  [SMALL_STATE(115)] = 4783,
  [SMALL_STATE(116)] = 4811,
  [SMALL_STATE(117)] = 4839,
  [SMALL_STATE(118)] = 4863,
  [SMALL_STATE(119)] = 4891,
  [SMALL_STATE(120)] = 4911,
  [SMALL_STATE(121)] = 4939,
  [SMALL_STATE(122)] = 4959,
  [SMALL_STATE(123)] = 4987,
  [SMALL_STATE(124)] = 5015,
  [SMALL_STATE(125)] = 5039,
  [SMALL_STATE(126)] = 5053,
  [SMALL_STATE(127)] = 5081,
  [SMALL_STATE(128)] = 5101,
  [SMALL_STATE(129)] = 5127,
  [SMALL_STATE(130)] = 5151,
  [SMALL_STATE(131)] = 5175,
  [SMALL_STATE(132)] = 5201,
  [SMALL_STATE(133)] = 5214,
  [SMALL_STATE(134)] = 5231,
  [SMALL_STATE(135)] = 5252,
  [SMALL_STATE(136)] = 5265,
  [SMALL_STATE(137)] = 5284,
  [SMALL_STATE(138)] = 5309,
  [SMALL_STATE(139)] = 5326,
  [SMALL_STATE(140)] = 5343,
  [SMALL_STATE(141)] = 5356,
  [SMALL_STATE(142)] = 5373,
  [SMALL_STATE(143)] = 5390,
  [SMALL_STATE(144)] = 5411,
  [SMALL_STATE(145)] = 5430,
  [SMALL_STATE(146)] = 5443,
  [SMALL_STATE(147)] = 5460,
  [SMALL_STATE(148)] = 5473,
  [SMALL_STATE(149)] = 5494,
  [SMALL_STATE(150)] = 5513,
  [SMALL_STATE(151)] = 5525,
  [SMALL_STATE(152)] = 5537,
  [SMALL_STATE(153)] = 5559,
  [SMALL_STATE(154)] = 5571,
  [SMALL_STATE(155)] = 5585,
  [SMALL_STATE(156)] = 5597,
  [SMALL_STATE(157)] = 5609,
  [SMALL_STATE(158)] = 5621,
  [SMALL_STATE(159)] = 5633,
  [SMALL_STATE(160)] = 5653,
  [SMALL_STATE(161)] = 5665,
  [SMALL_STATE(162)] = 5677,
  [SMALL_STATE(163)] = 5689,
  [SMALL_STATE(164)] = 5701,
  [SMALL_STATE(165)] = 5713,
  [SMALL_STATE(166)] = 5725,
  [SMALL_STATE(167)] = 5737,
  [SMALL_STATE(168)] = 5757,
  [SMALL_STATE(169)] = 5777,
  [SMALL_STATE(170)] = 5789,
  [SMALL_STATE(171)] = 5809,
  [SMALL_STATE(172)] = 5821,
  [SMALL_STATE(173)] = 5833,
  [SMALL_STATE(174)] = 5845,
  [SMALL_STATE(175)] = 5859,
  [SMALL_STATE(176)] = 5871,
  [SMALL_STATE(177)] = 5885,
  [SMALL_STATE(178)] = 5897,
  [SMALL_STATE(179)] = 5909,
  [SMALL_STATE(180)] = 5931,
  [SMALL_STATE(181)] = 5950,
  [SMALL_STATE(182)] = 5965,
  [SMALL_STATE(183)] = 5984,
  [SMALL_STATE(184)] = 5999,
  [SMALL_STATE(185)] = 6014,
  [SMALL_STATE(186)] = 6029,
  [SMALL_STATE(187)] = 6044,
  [SMALL_STATE(188)] = 6063,
  [SMALL_STATE(189)] = 6078,
  [SMALL_STATE(190)] = 6093,
  [SMALL_STATE(191)] = 6108,
  [SMALL_STATE(192)] = 6125,
  [SMALL_STATE(193)] = 6140,
  [SMALL_STATE(194)] = 6150,
  [SMALL_STATE(195)] = 6160,
  [SMALL_STATE(196)] = 6170,
  [SMALL_STATE(197)] = 6184,
  [SMALL_STATE(198)] = 6198,
  [SMALL_STATE(199)] = 6208,
  [SMALL_STATE(200)] = 6218,
  [SMALL_STATE(201)] = 6232,
  [SMALL_STATE(202)] = 6242,
  [SMALL_STATE(203)] = 6252,
  [SMALL_STATE(204)] = 6266,
  [SMALL_STATE(205)] = 6280,
  [SMALL_STATE(206)] = 6294,
  [SMALL_STATE(207)] = 6304,
  [SMALL_STATE(208)] = 6318,
  [SMALL_STATE(209)] = 6332,
  [SMALL_STATE(210)] = 6346,
  [SMALL_STATE(211)] = 6356,
  [SMALL_STATE(212)] = 6366,
  [SMALL_STATE(213)] = 6378,
  [SMALL_STATE(214)] = 6392,
  [SMALL_STATE(215)] = 6402,
  [SMALL_STATE(216)] = 6416,
  [SMALL_STATE(217)] = 6430,
  [SMALL_STATE(218)] = 6443,
  [SMALL_STATE(219)] = 6456,
  [SMALL_STATE(220)] = 6469,
  [SMALL_STATE(221)] = 6482,
  [SMALL_STATE(222)] = 6495,
  [SMALL_STATE(223)] = 6508,
  [SMALL_STATE(224)] = 6519,
  [SMALL_STATE(225)] = 6532,
  [SMALL_STATE(226)] = 6545,
  [SMALL_STATE(227)] = 6558,
  [SMALL_STATE(228)] = 6571,
  [SMALL_STATE(229)] = 6584,
  [SMALL_STATE(230)] = 6597,
  [SMALL_STATE(231)] = 6610,
  [SMALL_STATE(232)] = 6623,
  [SMALL_STATE(233)] = 6636,
  [SMALL_STATE(234)] = 6649,
  [SMALL_STATE(235)] = 6662,
  [SMALL_STATE(236)] = 6675,
  [SMALL_STATE(237)] = 6688,
  [SMALL_STATE(238)] = 6699,
  [SMALL_STATE(239)] = 6712,
  [SMALL_STATE(240)] = 6725,
  [SMALL_STATE(241)] = 6738,
  [SMALL_STATE(242)] = 6751,
  [SMALL_STATE(243)] = 6764,
  [SMALL_STATE(244)] = 6777,
  [SMALL_STATE(245)] = 6786,
  [SMALL_STATE(246)] = 6799,
  [SMALL_STATE(247)] = 6812,
  [SMALL_STATE(248)] = 6825,
  [SMALL_STATE(249)] = 6838,
  [SMALL_STATE(250)] = 6846,
  [SMALL_STATE(251)] = 6854,
  [SMALL_STATE(252)] = 6862,
  [SMALL_STATE(253)] = 6870,
  [SMALL_STATE(254)] = 6878,
  [SMALL_STATE(255)] = 6888,
  [SMALL_STATE(256)] = 6896,
  [SMALL_STATE(257)] = 6904,
  [SMALL_STATE(258)] = 6912,
  [SMALL_STATE(259)] = 6920,
  [SMALL_STATE(260)] = 6928,
  [SMALL_STATE(261)] = 6938,
  [SMALL_STATE(262)] = 6948,
  [SMALL_STATE(263)] = 6956,
  [SMALL_STATE(264)] = 6964,
  [SMALL_STATE(265)] = 6972,
  [SMALL_STATE(266)] = 6982,
  [SMALL_STATE(267)] = 6990,
  [SMALL_STATE(268)] = 7000,
  [SMALL_STATE(269)] = 7008,
  [SMALL_STATE(270)] = 7016,
  [SMALL_STATE(271)] = 7026,
  [SMALL_STATE(272)] = 7034,
  [SMALL_STATE(273)] = 7042,
  [SMALL_STATE(274)] = 7050,
  [SMALL_STATE(275)] = 7060,
  [SMALL_STATE(276)] = 7068,
  [SMALL_STATE(277)] = 7076,
  [SMALL_STATE(278)] = 7084,
  [SMALL_STATE(279)] = 7092,
  [SMALL_STATE(280)] = 7100,
  [SMALL_STATE(281)] = 7110,
  [SMALL_STATE(282)] = 7120,
  [SMALL_STATE(283)] = 7127,
  [SMALL_STATE(284)] = 7134,
  [SMALL_STATE(285)] = 7141,
  [SMALL_STATE(286)] = 7148,
  [SMALL_STATE(287)] = 7155,
  [SMALL_STATE(288)] = 7162,
  [SMALL_STATE(289)] = 7169,
  [SMALL_STATE(290)] = 7176,
  [SMALL_STATE(291)] = 7183,
  [SMALL_STATE(292)] = 7190,
  [SMALL_STATE(293)] = 7197,
  [SMALL_STATE(294)] = 7204,
  [SMALL_STATE(295)] = 7211,
  [SMALL_STATE(296)] = 7218,
  [SMALL_STATE(297)] = 7225,
  [SMALL_STATE(298)] = 7232,
  [SMALL_STATE(299)] = 7239,
  [SMALL_STATE(300)] = 7246,
  [SMALL_STATE(301)] = 7253,
  [SMALL_STATE(302)] = 7260,
  [SMALL_STATE(303)] = 7267,
  [SMALL_STATE(304)] = 7274,
  [SMALL_STATE(305)] = 7281,
  [SMALL_STATE(306)] = 7288,
  [SMALL_STATE(307)] = 7295,
  [SMALL_STATE(308)] = 7302,
  [SMALL_STATE(309)] = 7309,
  [SMALL_STATE(310)] = 7316,
  [SMALL_STATE(311)] = 7323,
  [SMALL_STATE(312)] = 7330,
  [SMALL_STATE(313)] = 7337,
  [SMALL_STATE(314)] = 7344,
  [SMALL_STATE(315)] = 7351,
  [SMALL_STATE(316)] = 7358,
  [SMALL_STATE(317)] = 7365,
  [SMALL_STATE(318)] = 7372,
  [SMALL_STATE(319)] = 7379,
  [SMALL_STATE(320)] = 7386,
  [SMALL_STATE(321)] = 7393,
  [SMALL_STATE(322)] = 7400,
  [SMALL_STATE(323)] = 7407,
  [SMALL_STATE(324)] = 7414,
  [SMALL_STATE(325)] = 7421,
  [SMALL_STATE(326)] = 7428,
  [SMALL_STATE(327)] = 7435,
  [SMALL_STATE(328)] = 7442,
  [SMALL_STATE(329)] = 7449,
  [SMALL_STATE(330)] = 7456,
  [SMALL_STATE(331)] = 7463,
  [SMALL_STATE(332)] = 7470,
  [SMALL_STATE(333)] = 7477,
  [SMALL_STATE(334)] = 7484,
  [SMALL_STATE(335)] = 7491,
  [SMALL_STATE(336)] = 7498,
  [SMALL_STATE(337)] = 7505,
  [SMALL_STATE(338)] = 7512,
  [SMALL_STATE(339)] = 7519,
  [SMALL_STATE(340)] = 7526,
  [SMALL_STATE(341)] = 7533,
  [SMALL_STATE(342)] = 7540,
  [SMALL_STATE(343)] = 7547,
  [SMALL_STATE(344)] = 7554,
  [SMALL_STATE(345)] = 7561,
  [SMALL_STATE(346)] = 7568,
  [SMALL_STATE(347)] = 7575,
  [SMALL_STATE(348)] = 7582,
  [SMALL_STATE(349)] = 7589,
  [SMALL_STATE(350)] = 7596,
  [SMALL_STATE(351)] = 7603,
  [SMALL_STATE(352)] = 7610,
  [SMALL_STATE(353)] = 7617,
  [SMALL_STATE(354)] = 7624,
  [SMALL_STATE(355)] = 7631,
  [SMALL_STATE(356)] = 7638,
  [SMALL_STATE(357)] = 7645,
  [SMALL_STATE(358)] = 7652,
  [SMALL_STATE(359)] = 7659,
  [SMALL_STATE(360)] = 7666,
  [SMALL_STATE(361)] = 7673,
  [SMALL_STATE(362)] = 7680,
  [SMALL_STATE(363)] = 7687,
  [SMALL_STATE(364)] = 7694,
  [SMALL_STATE(365)] = 7701,
  [SMALL_STATE(366)] = 7708,
  [SMALL_STATE(367)] = 7715,
  [SMALL_STATE(368)] = 7722,
  [SMALL_STATE(369)] = 7729,
  [SMALL_STATE(370)] = 7736,
  [SMALL_STATE(371)] = 7743,
  [SMALL_STATE(372)] = 7750,
  [SMALL_STATE(373)] = 7757,
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
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(27),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(52),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(25),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(116),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(71),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(71),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(288),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(96),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(352),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(14),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(14),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(65),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_body, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(27),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(52),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(24),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(115),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(71),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(71),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(288),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(96),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(352),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(14),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(14),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(65),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dom_sentences, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_body, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(52),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(19),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(16),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(116),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(71),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(71),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(288),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(96),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(352),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(14),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(14),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(65),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bareid, 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bareid, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bareid, 2),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bareid, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
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
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 1),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term, 3),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_term, 3),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term, 2),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_term, 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term, 4, .production_id = 2),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_term, 4, .production_id = 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term, 1),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_term, 1),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_trans_body_repeat1, 2),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dom_sentences_repeat1, 2),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_model_body_repeat1, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_steps, 1),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trans_steps_repeat1, 2),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_steps_repeat1, 2), SHIFT_REPEAT(123),
  [313] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trans_steps_repeat1, 2), SHIFT_REPEAT(352),
  [316] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trans_steps_repeat1, 2), SHIFT_REPEAT(14),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_steps_repeat1, 2), SHIFT_REPEAT(14),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_steps_repeat1, 2), SHIFT_REPEAT(65),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sentence_config, 3),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sentence_config, 3),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_or_compr, 1),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain_sig, 2, .production_id = 1),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_machine_body_repeat1, 2),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_machine_body_repeat1, 2), SHIFT_REPEAT(126),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_machine_body_repeat1, 2), SHIFT_REPEAT(113),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_machine_body_repeat1, 2), SHIFT_REPEAT(205),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_machine_body_repeat1, 2), SHIFT_REPEAT(122),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_body, 1),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 4),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unop, 1),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unop, 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 3),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 2),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binop, 1),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binop, 1),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain_sig, 3, .production_id = 1),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relop, 1),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relop, 1),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_ref_rename, 3, .production_id = 2),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_ref_no_rename, 1),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_fact, 3),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_fact, 1),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_ref_rename, 5, .production_id = 2),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_app_arg, 1),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 3),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unnbody, 1),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compr, 5),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_term_list_repeat1, 2),
  [433] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_term_list_repeat1, 2), SHIFT_REPEAT(32),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term_list, 1),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_ref_no_rename, 3),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unnbody_repeat1, 2),
  [444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unnbody_repeat1, 2), SHIFT_REPEAT(120),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unnbody, 2),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compr, 3),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term_list, 2),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_ref, 1),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_prop, 4),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain, 3),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__machine_sentence_conf, 3),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_trans_steps_repeat1, 2),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tsystem_rest, 4),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform_rest, 4),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform, 3, .production_id = 1),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tsystem_rest, 3),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain, 4),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unncmp, 1),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeid, 1),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine, 4),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model, 4),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model, 3),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unncmp, 3),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__machine_sentence_conf, 2),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maparrow, 1),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_maparrow, 1),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine, 3),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tsystem, 4),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform_rest, 3),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fields, 1),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_refs, 2),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fields_repeat1, 2),
  [519] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fields_repeat1, 2), SHIFT_REPEAT(93),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mod_refs_repeat1, 2),
  [528] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mod_refs_repeat1, 2), SHIFT_REPEAT(143),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fields, 2),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [535] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(36),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_refs, 1),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_intro, 5),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 2),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_list_repeat1, 2),
  [546] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_list_repeat1, 2), SHIFT_REPEAT(31),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, .production_id = 2),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_list, 2),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_machine_sig_config_repeat1, 2),
  [559] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_machine_sig_config_repeat1, 2), SHIFT_REPEAT(204),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_list, 1),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_intro, 4),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_sig, 1),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sig_config, 1),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_list, 2),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_model_param_list_repeat1, 2),
  [580] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_param_list_repeat1, 2), SHIFT_REPEAT(191),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vom_param_list, 1),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_param_list, 2),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vom_param_list, 2),
  [593] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setting_list_repeat1, 2), SHIFT_REPEAT(137),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_setting_list_repeat1, 2),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_cnst, 1),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_list_repeat1, 2),
  [604] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_list_repeat1, 2), SHIFT_REPEAT(74),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_list, 1),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_list_repeat1, 2),
  [613] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_list_repeat1, 2), SHIFT_REPEAT(129),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain_sig_config, 1),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vom_param_list_repeat1, 2),
  [620] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vom_param_list_repeat1, 2), SHIFT_REPEAT(170),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_fact_list, 3),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_sig_config, 1),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_arg_list, 1),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_list, 1),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_list, 2),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform_sig_config, 1),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_model_fact_list_repeat1, 2),
  [643] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_fact_list_repeat1, 2), SHIFT_REPEAT(34),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_param_list, 1),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_fact_list, 1),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_or_update_lhs_repeat1, 2),
  [654] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_step_or_update_lhs_repeat1, 2), SHIFT_REPEAT(152),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mod_arg_list_repeat1, 2),
  [659] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mod_arg_list_repeat1, 2), SHIFT_REPEAT(40),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_list, 1),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_fact_list, 2),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_list, 2),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_arg_list, 2),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_or_update_lhs, 2),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_or_update_lhs, 1),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_app_arg, 3),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_apply, 3),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_val_or_model_program, 3, .production_id = 2),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_sig, 3),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 1),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_model_fact_list_repeat1, 3),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_val_or_model_program, 1),
  [702] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_apply, 4),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 4),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain_sig, 4, .production_id = 1),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform_sig, 5),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 5),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sig, 5),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_sig_in, 2),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_contract, 4),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sentence, 1),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trans_step_config, 2),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_contract_conf, 2),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_sentence, 1),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_contract_conf, 1),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl_body, 3),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 3),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 3),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_sentence_config, 2),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_sentence, 2),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dom_sentence_config, 1),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dom_sentence, 1),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl_body, 1),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl, 3, .production_id = 3),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_decl, 1),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sig_in, 2),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl_body, 4),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform_sig_config, 2),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sentence, 2),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_sentence, 1),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_sentence_config, 1),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl_body, 6),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain_sig_config, 2),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_sig_config, 2),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_sig_in, 3),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sig_in, 3),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_card_spec, 1),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dom_sentence_config, 2),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dom_sentence, 2),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [894] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_contract, 2),
  [898] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
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
