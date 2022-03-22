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
#define STATE_COUNT 367
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(146);
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '"') ADVANCE(221);
      if (lookahead == '%') ADVANCE(234);
      if (lookahead == '(') ADVANCE(159);
      if (lookahead == ')') ADVANCE(160);
      if (lookahead == '*') ADVANCE(232);
      if (lookahead == '+') ADVANCE(215);
      if (lookahead == ',') ADVANCE(166);
      if (lookahead == '-') ADVANCE(200);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == '/') ADVANCE(233);
      if (lookahead == ':') ADVANCE(190);
      if (lookahead == ';') ADVANCE(192);
      if (lookahead == '<') ADVANCE(236);
      if (lookahead == '=') ADVANCE(154);
      if (lookahead == '>') ADVANCE(238);
      if (lookahead == '@') ADVANCE(197);
      if (lookahead == '[') ADVANCE(187);
      if (lookahead == ']') ADVANCE(188);
      if (lookahead == 'a') ADVANCE(77);
      if (lookahead == 'b') ADVANCE(60);
      if (lookahead == 'c') ADVANCE(88);
      if (lookahead == 'd') ADVANCE(165);
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead == 'f') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead == 'm') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(44);
      if (lookahead == 'o') ADVANCE(56);
      if (lookahead == 'p') ADVANCE(32);
      if (lookahead == 'r') ADVANCE(45);
      if (lookahead == 's') ADVANCE(89);
      if (lookahead == 't') ADVANCE(98);
      if (lookahead == '{') ADVANCE(147);
      if (lookahead == '|') ADVANCE(229);
      if (lookahead == '}') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '*') ADVANCE(224);
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '%') ADVANCE(234);
      if (lookahead == '(') ADVANCE(159);
      if (lookahead == '*') ADVANCE(232);
      if (lookahead == '+') ADVANCE(215);
      if (lookahead == ',') ADVANCE(166);
      if (lookahead == '-') ADVANCE(199);
      if (lookahead == '.') ADVANCE(155);
      if (lookahead == '/') ADVANCE(233);
      if (lookahead == ':') ADVANCE(191);
      if (lookahead == ';') ADVANCE(192);
      if (lookahead == '<') ADVANCE(236);
      if (lookahead == '=') ADVANCE(153);
      if (lookahead == '>') ADVANCE(238);
      if (lookahead == '@') ADVANCE(197);
      if (lookahead == '[') ADVANCE(187);
      if (lookahead == 'e') ADVANCE(134);
      if (lookahead == 'i') ADVANCE(83);
      if (lookahead == 'm') ADVANCE(29);
      if (lookahead == '{') ADVANCE(147);
      if (lookahead == '}') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(221);
      if (lookahead == '#') ADVANCE(139);
      if (lookahead == '%') ADVANCE(142);
      if (lookahead == '(') ADVANCE(159);
      if (lookahead == ')') ADVANCE(160);
      if (lookahead == '-') ADVANCE(199);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '[') ADVANCE(187);
      if (lookahead == '{') ADVANCE(147);
      if (lookahead == '}') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(221);
      if (lookahead == '#') ADVANCE(139);
      if (lookahead == '%') ADVANCE(142);
      if (lookahead == '(') ADVANCE(159);
      if (lookahead == ',') ADVANCE(166);
      if (lookahead == '-') ADVANCE(199);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ':') ADVANCE(191);
      if (lookahead == '[') ADVANCE(187);
      if (lookahead == 'e') ADVANCE(257);
      if (lookahead == 'r') ADVANCE(243);
      if (lookahead == '{') ADVANCE(147);
      if (lookahead == '}') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(221);
      if (lookahead == '#') ADVANCE(139);
      if (lookahead == '%') ADVANCE(142);
      if (lookahead == '(') ADVANCE(159);
      if (lookahead == '-') ADVANCE(199);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '[') ADVANCE(187);
      if (lookahead == 'c') ADVANCE(263);
      if (lookahead == 'n') ADVANCE(262);
      if (lookahead == '{') ADVANCE(147);
      if (lookahead == '}') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(221);
      if (lookahead == '#') ADVANCE(139);
      if (lookahead == '%') ADVANCE(142);
      if (lookahead == '(') ADVANCE(159);
      if (lookahead == '-') ADVANCE(199);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '[') ADVANCE(187);
      if (lookahead == 'c') ADVANCE(263);
      if (lookahead == '{') ADVANCE(147);
      if (lookahead == '}') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(221);
      if (lookahead == '#') ADVANCE(139);
      if (lookahead == '%') ADVANCE(142);
      if (lookahead == '(') ADVANCE(159);
      if (lookahead == '-') ADVANCE(199);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '[') ADVANCE(187);
      if (lookahead == 'e') ADVANCE(257);
      if (lookahead == 'n') ADVANCE(262);
      if (lookahead == 'r') ADVANCE(243);
      if (lookahead == '{') ADVANCE(147);
      if (lookahead == '}') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(221);
      if (lookahead == '#') ADVANCE(139);
      if (lookahead == '%') ADVANCE(142);
      if (lookahead == '(') ADVANCE(159);
      if (lookahead == '-') ADVANCE(199);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == 'a') ADVANCE(278);
      if (lookahead == 'n') ADVANCE(262);
      if (lookahead == 's') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(221);
      if (lookahead == '#') ADVANCE(139);
      if (lookahead == '%') ADVANCE(142);
      if (lookahead == '(') ADVANCE(159);
      if (lookahead == '-') ADVANCE(199);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == 'n') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(139);
      if (lookahead == '%') ADVANCE(142);
      if (lookahead == '(') ADVANCE(159);
      if (lookahead == '-') ADVANCE(199);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == 'b') ADVANCE(250);
      if (lookahead == 'f') ADVANCE(284);
      if (lookahead == 'i') ADVANCE(261);
      if (lookahead == 'n') ADVANCE(246);
      if (lookahead == 's') ADVANCE(283);
      if (lookahead == '{') ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(139);
      if (lookahead == '%') ADVANCE(142);
      if (lookahead == ')') ADVANCE(160);
      if (lookahead == '+') ADVANCE(215);
      if (lookahead == ',') ADVANCE(166);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '.') ADVANCE(155);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ':') ADVANCE(189);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == 'a') ADVANCE(260);
      if (lookahead == '{') ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(139);
      if (lookahead == '%') ADVANCE(141);
      if (lookahead == ')') ADVANCE(160);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '[') ADVANCE(187);
      if (lookahead == '{') ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(139);
      if (lookahead == '%') ADVANCE(141);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '[') ADVANCE(187);
      if (lookahead == 'e') ADVANCE(308);
      if (lookahead == 'i') ADVANCE(300);
      if (lookahead == '{') ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(139);
      if (lookahead == '%') ADVANCE(141);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == 's') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(140);
      if (lookahead == 'S') ADVANCE(316);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '/') ADVANCE(324);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(20);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == ':') ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(216);
      END_STATE();
    case 20:
      if (lookahead == '/') ADVANCE(323);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 21:
      if (lookahead == '0') ADVANCE(22);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(22);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(220);
      END_STATE();
    case 22:
      if (lookahead == '0') ADVANCE(22);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(220);
      END_STATE();
    case 23:
      if (lookahead == '=') ADVANCE(235);
      END_STATE();
    case 24:
      if (lookahead == '=') ADVANCE(198);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(213);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(214);
      END_STATE();
    case 27:
      if (lookahead == ']') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == ']') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(106);
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(70);
      if (lookahead == 'i') ADVANCE(119);
      if (lookahead == 'j') ADVANCE(203);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(108);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(53);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(133);
      if (lookahead == 'o') ADVANCE(230);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 56:
      if (lookahead == 'f') ADVANCE(158);
      END_STATE();
    case 57:
      if (lookahead == 'f') ADVANCE(94);
      END_STATE();
    case 58:
      if (lookahead == 'f') ADVANCE(95);
      END_STATE();
    case 59:
      if (lookahead == 'h') ADVANCE(62);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 66:
      if (lookahead == 'j') ADVANCE(205);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(178);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(179);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 72:
      if (lookahead == 'm') ADVANCE(181);
      END_STATE();
    case 73:
      if (lookahead == 'm') ADVANCE(180);
      END_STATE();
    case 74:
      if (lookahead == 'm') ADVANCE(46);
      END_STATE();
    case 75:
      if (lookahead == 'm') ADVANCE(36);
      END_STATE();
    case 76:
      if (lookahead == 'm') ADVANCE(110);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(135);
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(113);
      if (lookahead == 'x') ADVANCE(125);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(39);
      if (lookahead == 's') ADVANCE(167);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(209);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(38);
      if (lookahead == 's') ADVANCE(167);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(74);
      if (lookahead == 'u') ADVANCE(99);
      if (lookahead == 'y') ADVANCE(116);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 96:
      if (lookahead == 'p') ADVANCE(55);
      END_STATE();
    case 97:
      if (lookahead == 'q') ADVANCE(129);
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 107:
      if (lookahead == 's') ADVANCE(161);
      END_STATE();
    case 108:
      if (lookahead == 's') ADVANCE(176);
      END_STATE();
    case 109:
      if (lookahead == 's') ADVANCE(183);
      END_STATE();
    case 110:
      if (lookahead == 's') ADVANCE(184);
      END_STATE();
    case 111:
      if (lookahead == 's') ADVANCE(174);
      END_STATE();
    case 112:
      if (lookahead == 's') ADVANCE(163);
      END_STATE();
    case 113:
      if (lookahead == 's') ADVANCE(130);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(122);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 117:
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(193);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 128:
      if (lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 129:
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 130:
      if (lookahead == 'u') ADVANCE(103);
      END_STATE();
    case 131:
      if (lookahead == 'u') ADVANCE(104);
      END_STATE();
    case 132:
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 133:
      if (lookahead == 'w') ADVANCE(201);
      if (lookahead == 'x') ADVANCE(120);
      END_STATE();
    case 134:
      if (lookahead == 'x') ADVANCE(125);
      END_STATE();
    case 135:
      if (lookahead == 'y') ADVANCE(211);
      END_STATE();
    case 136:
      if (lookahead == 'y') ADVANCE(152);
      END_STATE();
    case 137:
      if (lookahead == 'y') ADVANCE(150);
      END_STATE();
    case 138:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 139:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 140:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 141:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 142:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 143:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 144:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(227);
      END_STATE();
    case 145:
      if (eof) ADVANCE(146);
      if (lookahead == '%') ADVANCE(234);
      if (lookahead == '(') ADVANCE(159);
      if (lookahead == ')') ADVANCE(160);
      if (lookahead == '*') ADVANCE(232);
      if (lookahead == '+') ADVANCE(215);
      if (lookahead == ',') ADVANCE(166);
      if (lookahead == '-') ADVANCE(199);
      if (lookahead == '.') ADVANCE(155);
      if (lookahead == '/') ADVANCE(233);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == ';') ADVANCE(192);
      if (lookahead == '=') ADVANCE(153);
      if (lookahead == '[') ADVANCE(187);
      if (lookahead == ']') ADVANCE(188);
      if (lookahead == 'a') ADVANCE(123);
      if (lookahead == 'd') ADVANCE(93);
      if (lookahead == 'e') ADVANCE(134);
      if (lookahead == 'i') ADVANCE(83);
      if (lookahead == 'm') ADVANCE(30);
      if (lookahead == 'p') ADVANCE(31);
      if (lookahead == 't') ADVANCE(98);
      if (lookahead == '{') ADVANCE(147);
      if (lookahead == '|') ADVANCE(229);
      if (lookahead == '}') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(145)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_boot);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_initially);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_next);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_property);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(214);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(216);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_machine);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_ensures);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_ensures);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_requires);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_requires);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_model_contract_token1);
      if (lookahead == 'd') ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_some);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_some);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_atmost);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_atmost);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_atleast);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_atleast);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_includes);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_includes);
      if (lookahead == '\'') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_extends);
      if (lookahead == '\'') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_model);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_partial);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_transform);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_system);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_system);
      if (lookahead == '\'') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_returns);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_conforms);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_conforms);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_domain);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(196);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(195);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_at);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_at);
      if (lookahead == 'l') ADVANCE(49);
      if (lookahead == 'm') ADVANCE(92);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead == '=') ADVANCE(198);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_EQ);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(213);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_inj);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_inj);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_bij);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_bij);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_sur);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_sur);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_fun);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_fun);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_any);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_any);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_digits);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == '/') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_digits);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_real);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_frac);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(227);
      if (lookahead == '"') ADVANCE(324);
      if (lookahead == '\\') ADVANCE(325);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '*') ADVANCE(224);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '/') ADVANCE(227);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(223);
      if (lookahead == '/') ADVANCE(222);
      if (lookahead == '\\') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(227);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(227);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '/') ADVANCE(324);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(237);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(239);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_bareid);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '.') ADVANCE(15);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 'a') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 'e') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 'e') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 'e') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 'e') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 'e') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 'e') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 'f') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 'j') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 'j') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 'l') ADVANCE(244);
      if (lookahead == 'm') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 'm') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 'm') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 'o') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 'o') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 'o') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 'o') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 'o') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 'q') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 'r') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 'r') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 'r') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 'r') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 's') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 's') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 's') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 's') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 's') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 's') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 't') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 't') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 't') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 'u') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 'u') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 'u') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 'u') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 'w') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 'y') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(290);
      if (lookahead == ']') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(291);
      if (lookahead == 'c') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(291);
      if (lookahead == 'd') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(291);
      if (lookahead == 'd') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(291);
      if (lookahead == 'e') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(291);
      if (lookahead == 'e') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(291);
      if (lookahead == 'e') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(291);
      if (lookahead == 'l') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(291);
      if (lookahead == 'm') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(291);
      if (lookahead == 'n') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(291);
      if (lookahead == 'n') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(291);
      if (lookahead == 's') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(291);
      if (lookahead == 's') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(291);
      if (lookahead == 's') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(291);
      if (lookahead == 't') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(291);
      if (lookahead == 't') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(291);
      if (lookahead == 'u') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(291);
      if (lookahead == 'x') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(291);
      if (lookahead == 'y') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(311);
      if (lookahead == '.') ADVANCE(143);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(311);
      if (lookahead == '.') ADVANCE(143);
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
      if (lookahead == '.') ADVANCE(15);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_qualid);
      if (lookahead == '\'') ADVANCE(314);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 'D') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_qualid);
      if (lookahead == '\'') ADVANCE(314);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 'I') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_qualid);
      if (lookahead == '\'') ADVANCE(314);
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_qualid);
      if (lookahead == '\'') ADVANCE(320);
      if (lookahead == ']') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_qualid);
      if (lookahead == '\'') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_qualid);
      if (lookahead == '\'') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_qualid);
      if (lookahead == '\'') ADVANCE(321);
      if (lookahead == '.') ADVANCE(143);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_qualid);
      if (lookahead == '\'') ADVANCE(321);
      if (lookahead == '.') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(222);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 145},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 145},
  [17] = {.lex_state = 145},
  [18] = {.lex_state = 145},
  [19] = {.lex_state = 145},
  [20] = {.lex_state = 145},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 9},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 9},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 10},
  [50] = {.lex_state = 145},
  [51] = {.lex_state = 10},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 145},
  [66] = {.lex_state = 145},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 145},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 145},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 145},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 145},
  [84] = {.lex_state = 145},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 145},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 145},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 145},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 145},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 145},
  [103] = {.lex_state = 145},
  [104] = {.lex_state = 145},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 145},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 11},
  [109] = {.lex_state = 145},
  [110] = {.lex_state = 145},
  [111] = {.lex_state = 11},
  [112] = {.lex_state = 13},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 11},
  [115] = {.lex_state = 11},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 145},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 11},
  [123] = {.lex_state = 145},
  [124] = {.lex_state = 145},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 11},
  [127] = {.lex_state = 145},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 145},
  [130] = {.lex_state = 12},
  [131] = {.lex_state = 145},
  [132] = {.lex_state = 145},
  [133] = {.lex_state = 11},
  [134] = {.lex_state = 145},
  [135] = {.lex_state = 145},
  [136] = {.lex_state = 11},
  [137] = {.lex_state = 145},
  [138] = {.lex_state = 11},
  [139] = {.lex_state = 145},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 145},
  [142] = {.lex_state = 145},
  [143] = {.lex_state = 12},
  [144] = {.lex_state = 11},
  [145] = {.lex_state = 3},
  [146] = {.lex_state = 11},
  [147] = {.lex_state = 145},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 145},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 145},
  [153] = {.lex_state = 145},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 145},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 145},
  [158] = {.lex_state = 145},
  [159] = {.lex_state = 145},
  [160] = {.lex_state = 145},
  [161] = {.lex_state = 3},
  [162] = {.lex_state = 145},
  [163] = {.lex_state = 11},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 11},
  [167] = {.lex_state = 12},
  [168] = {.lex_state = 145},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 145},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 145},
  [173] = {.lex_state = 11},
  [174] = {.lex_state = 145},
  [175] = {.lex_state = 145},
  [176] = {.lex_state = 3},
  [177] = {.lex_state = 12},
  [178] = {.lex_state = 12},
  [179] = {.lex_state = 12},
  [180] = {.lex_state = 145},
  [181] = {.lex_state = 3},
  [182] = {.lex_state = 12},
  [183] = {.lex_state = 3},
  [184] = {.lex_state = 12},
  [185] = {.lex_state = 11},
  [186] = {.lex_state = 3},
  [187] = {.lex_state = 3},
  [188] = {.lex_state = 145},
  [189] = {.lex_state = 12},
  [190] = {.lex_state = 3},
  [191] = {.lex_state = 3},
  [192] = {.lex_state = 145},
  [193] = {.lex_state = 3},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 12},
  [197] = {.lex_state = 3},
  [198] = {.lex_state = 11},
  [199] = {.lex_state = 11},
  [200] = {.lex_state = 3},
  [201] = {.lex_state = 3},
  [202] = {.lex_state = 11},
  [203] = {.lex_state = 145},
  [204] = {.lex_state = 145},
  [205] = {.lex_state = 12},
  [206] = {.lex_state = 145},
  [207] = {.lex_state = 11},
  [208] = {.lex_state = 3},
  [209] = {.lex_state = 11},
  [210] = {.lex_state = 11},
  [211] = {.lex_state = 11},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 145},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 3},
  [220] = {.lex_state = 12},
  [221] = {.lex_state = 3},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 145},
  [224] = {.lex_state = 11},
  [225] = {.lex_state = 3},
  [226] = {.lex_state = 12},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 12},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 4},
  [242] = {.lex_state = 145},
  [243] = {.lex_state = 11},
  [244] = {.lex_state = 3},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 4},
  [247] = {.lex_state = 145},
  [248] = {.lex_state = 145},
  [249] = {.lex_state = 14},
  [250] = {.lex_state = 145},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 145},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 145},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 145},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 12},
  [273] = {.lex_state = 145},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 145},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 145},
  [280] = {.lex_state = 145},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 4},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 145},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 145},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 145},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 145},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 226},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 145},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 145},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 4},
  [312] = {.lex_state = 12},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 145},
  [315] = {.lex_state = 145},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 145},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 145},
  [321] = {.lex_state = 145},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 145},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 145},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 145},
  [330] = {.lex_state = 145},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 12},
  [334] = {.lex_state = 12},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 145},
  [337] = {.lex_state = 12},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 145},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 145},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 12},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 145},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 145},
  [353] = {.lex_state = 145},
  [354] = {.lex_state = 145},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 145},
  [358] = {.lex_state = 12},
  [359] = {.lex_state = 226},
  [360] = {.lex_state = 145},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 12},
  [366] = {.lex_state = 145},
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
    [sym_program] = STATE(346),
    [sym_module] = STATE(19),
    [sym_machine] = STATE(153),
    [sym_machine_sig_config] = STATE(343),
    [sym_machine_sig] = STATE(216),
    [sym_model] = STATE(153),
    [sym_model_sig_config] = STATE(342),
    [sym_model_sig] = STATE(227),
    [sym_model_intro] = STATE(222),
    [sym_tsystem] = STATE(153),
    [sym_transform] = STATE(153),
    [sym_domain] = STATE(153),
    [sym_domain_sig_config] = STATE(339),
    [sym_domain_sig] = STATE(232),
    [sym_config] = STATE(18),
    [aux_sym_program_repeat1] = STATE(19),
    [aux_sym_machine_sig_config_repeat1] = STATE(216),
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
    STATE(11), 1,
      sym_sentence_config,
    STATE(59), 1,
      sym_unop,
    STATE(67), 1,
      sym_trans_sentence,
    STATE(70), 1,
      sym_id,
    STATE(72), 1,
      sym_string,
    STATE(81), 1,
      sym_atom,
    STATE(83), 1,
      sym_constant,
    STATE(88), 1,
      sym_func_term,
    STATE(142), 1,
      sym_func_or_compr,
    STATE(174), 1,
      sym_compr,
    STATE(250), 1,
      sym_func_term_list,
    STATE(322), 1,
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
    STATE(59), 1,
      sym_unop,
    STATE(70), 1,
      sym_id,
    STATE(72), 1,
      sym_string,
    STATE(81), 1,
      sym_atom,
    STATE(83), 1,
      sym_constant,
    STATE(88), 1,
      sym_func_term,
    STATE(90), 1,
      sym_dom_sentence,
    STATE(142), 1,
      sym_func_or_compr,
    STATE(174), 1,
      sym_compr,
    STATE(277), 1,
      sym_func_term_list,
    STATE(286), 1,
      sym_dom_sentences,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    STATE(7), 2,
      sym_dom_sentence_config,
      aux_sym_dom_sentences_repeat1,
    STATE(74), 2,
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
    STATE(11), 1,
      sym_sentence_config,
    STATE(59), 1,
      sym_unop,
    STATE(67), 1,
      sym_trans_sentence,
    STATE(70), 1,
      sym_id,
    STATE(72), 1,
      sym_string,
    STATE(81), 1,
      sym_atom,
    STATE(83), 1,
      sym_constant,
    STATE(88), 1,
      sym_func_term,
    STATE(142), 1,
      sym_func_or_compr,
    STATE(174), 1,
      sym_compr,
    STATE(250), 1,
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
    STATE(11), 1,
      sym_sentence_config,
    STATE(59), 1,
      sym_unop,
    STATE(67), 1,
      sym_trans_sentence,
    STATE(70), 1,
      sym_id,
    STATE(72), 1,
      sym_string,
    STATE(81), 1,
      sym_atom,
    STATE(83), 1,
      sym_constant,
    STATE(88), 1,
      sym_func_term,
    STATE(142), 1,
      sym_func_or_compr,
    STATE(174), 1,
      sym_compr,
    STATE(250), 1,
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
    STATE(59), 1,
      sym_unop,
    STATE(70), 1,
      sym_id,
    STATE(72), 1,
      sym_string,
    STATE(81), 1,
      sym_atom,
    STATE(83), 1,
      sym_constant,
    STATE(88), 1,
      sym_func_term,
    STATE(90), 1,
      sym_dom_sentence,
    STATE(142), 1,
      sym_func_or_compr,
    STATE(174), 1,
      sym_compr,
    STATE(277), 1,
      sym_func_term_list,
    ACTIONS(103), 2,
      sym_real,
      sym_frac,
    STATE(6), 2,
      sym_dom_sentence_config,
      aux_sym_dom_sentences_repeat1,
    STATE(74), 2,
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
    STATE(59), 1,
      sym_unop,
    STATE(70), 1,
      sym_id,
    STATE(72), 1,
      sym_string,
    STATE(81), 1,
      sym_atom,
    STATE(83), 1,
      sym_constant,
    STATE(88), 1,
      sym_func_term,
    STATE(90), 1,
      sym_dom_sentence,
    STATE(142), 1,
      sym_func_or_compr,
    STATE(174), 1,
      sym_compr,
    STATE(277), 1,
      sym_func_term_list,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    STATE(6), 2,
      sym_dom_sentence_config,
      aux_sym_dom_sentences_repeat1,
    STATE(74), 2,
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
    STATE(28), 1,
      sym_sentence_config,
    STATE(59), 1,
      sym_unop,
    STATE(70), 1,
      sym_id,
    STATE(72), 1,
      sym_string,
    STATE(77), 1,
      sym_model_contract,
    STATE(81), 1,
      sym_atom,
    STATE(83), 1,
      sym_constant,
    STATE(119), 1,
      sym_func_term,
    STATE(280), 1,
      sym_model_fact,
    STATE(295), 1,
      sym_model_body,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    STATE(9), 2,
      sym_model_sentence,
      aux_sym_model_body_repeat1,
    STATE(73), 2,
      sym_model_contract_conf,
      sym_model_fact_list,
  [559] = 23,
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
    ACTIONS(125), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      sym_sentence_config,
    STATE(59), 1,
      sym_unop,
    STATE(70), 1,
      sym_id,
    STATE(72), 1,
      sym_string,
    STATE(77), 1,
      sym_model_contract,
    STATE(81), 1,
      sym_atom,
    STATE(83), 1,
      sym_constant,
    STATE(119), 1,
      sym_func_term,
    STATE(280), 1,
      sym_model_fact,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    STATE(10), 2,
      sym_model_sentence,
      aux_sym_model_body_repeat1,
    STATE(73), 2,
      sym_model_contract_conf,
      sym_model_fact_list,
  [632] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_ensures,
    ACTIONS(135), 1,
      anon_sym_requires,
    ACTIONS(138), 1,
      anon_sym_LBRACK,
    ACTIONS(141), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      sym_digits,
    ACTIONS(150), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      sym_bareid,
    ACTIONS(156), 1,
      sym_qualid,
    STATE(28), 1,
      sym_sentence_config,
    STATE(59), 1,
      sym_unop,
    STATE(70), 1,
      sym_id,
    STATE(72), 1,
      sym_string,
    STATE(77), 1,
      sym_model_contract,
    STATE(81), 1,
      sym_atom,
    STATE(83), 1,
      sym_constant,
    STATE(119), 1,
      sym_func_term,
    STATE(280), 1,
      sym_model_fact,
    ACTIONS(147), 2,
      sym_real,
      sym_frac,
    STATE(10), 2,
      sym_model_sentence,
      aux_sym_model_body_repeat1,
    STATE(73), 2,
      sym_model_contract_conf,
      sym_model_fact_list,
  [705] = 21,
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
    STATE(59), 1,
      sym_unop,
    STATE(68), 1,
      sym_trans_sentence,
    STATE(70), 1,
      sym_id,
    STATE(72), 1,
      sym_string,
    STATE(81), 1,
      sym_atom,
    STATE(83), 1,
      sym_constant,
    STATE(88), 1,
      sym_func_term,
    STATE(142), 1,
      sym_func_or_compr,
    STATE(174), 1,
      sym_compr,
    STATE(250), 1,
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
  [772] = 20,
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
    STATE(26), 1,
      sym_func_term,
    STATE(27), 1,
      sym_id,
    STATE(40), 1,
      sym_string,
    STATE(42), 1,
      sym_atom,
    STATE(44), 1,
      sym_constant,
    STATE(55), 1,
      sym_unop,
    STATE(188), 1,
      sym_constraint,
    STATE(206), 1,
      sym_body,
    STATE(353), 1,
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
  [837] = 20,
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
    STATE(26), 1,
      sym_func_term,
    STATE(27), 1,
      sym_id,
    STATE(40), 1,
      sym_string,
    STATE(42), 1,
      sym_atom,
    STATE(44), 1,
      sym_constant,
    STATE(55), 1,
      sym_unop,
    STATE(188), 1,
      sym_constraint,
    STATE(206), 1,
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
    STATE(59), 1,
      sym_unop,
    STATE(70), 1,
      sym_id,
    STATE(72), 1,
      sym_string,
    STATE(76), 1,
      sym_dom_sentence,
    STATE(81), 1,
      sym_atom,
    STATE(83), 1,
      sym_constant,
    STATE(88), 1,
      sym_func_term,
    STATE(142), 1,
      sym_func_or_compr,
    STATE(174), 1,
      sym_compr,
    STATE(277), 1,
      sym_func_term_list,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    STATE(74), 2,
      sym_type_decl,
      sym_rule,
  [967] = 20,
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
    STATE(26), 1,
      sym_func_term,
    STATE(27), 1,
      sym_id,
    STATE(40), 1,
      sym_string,
    STATE(42), 1,
      sym_atom,
    STATE(44), 1,
      sym_constant,
    STATE(55), 1,
      sym_unop,
    STATE(188), 1,
      sym_constraint,
    STATE(206), 1,
      sym_body,
    STATE(357), 1,
      sym_body_list,
    STATE(363), 1,
      sym_card_spec,
    ACTIONS(167), 2,
      sym_real,
      sym_frac,
    ACTIONS(177), 3,
      anon_sym_some,
      anon_sym_atmost,
      anon_sym_atleast,
  [1031] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    ACTIONS(181), 1,
      anon_sym_machine,
    ACTIONS(184), 1,
      anon_sym_model,
    ACTIONS(187), 1,
      anon_sym_partial,
    ACTIONS(190), 1,
      anon_sym_transform,
    ACTIONS(193), 1,
      anon_sym_domain,
    STATE(222), 1,
      sym_model_intro,
    STATE(227), 1,
      sym_model_sig,
    STATE(232), 1,
      sym_domain_sig,
    STATE(339), 1,
      sym_domain_sig_config,
    STATE(342), 1,
      sym_model_sig_config,
    STATE(343), 1,
      sym_machine_sig_config,
    STATE(16), 2,
      sym_module,
      aux_sym_program_repeat1,
    STATE(216), 2,
      sym_machine_sig,
      aux_sym_machine_sig_config_repeat1,
    STATE(153), 5,
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
    ACTIONS(196), 1,
      ts_builtin_sym_end,
    STATE(222), 1,
      sym_model_intro,
    STATE(227), 1,
      sym_model_sig,
    STATE(232), 1,
      sym_domain_sig,
    STATE(339), 1,
      sym_domain_sig_config,
    STATE(342), 1,
      sym_model_sig_config,
    STATE(343), 1,
      sym_machine_sig_config,
    STATE(16), 2,
      sym_module,
      aux_sym_program_repeat1,
    STATE(216), 2,
      sym_machine_sig,
      aux_sym_machine_sig_config_repeat1,
    STATE(153), 5,
      sym_machine,
      sym_model,
      sym_tsystem,
      sym_transform,
      sym_domain,
  [1141] = 16,
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
    STATE(222), 1,
      sym_model_intro,
    STATE(227), 1,
      sym_model_sig,
    STATE(232), 1,
      sym_domain_sig,
    STATE(339), 1,
      sym_domain_sig_config,
    STATE(342), 1,
      sym_model_sig_config,
    STATE(343), 1,
      sym_machine_sig_config,
    STATE(17), 2,
      sym_module,
      aux_sym_program_repeat1,
    STATE(216), 2,
      sym_machine_sig,
      aux_sym_machine_sig_config_repeat1,
    STATE(153), 5,
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
    STATE(222), 1,
      sym_model_intro,
    STATE(227), 1,
      sym_model_sig,
    STATE(232), 1,
      sym_domain_sig,
    STATE(339), 1,
      sym_domain_sig_config,
    STATE(342), 1,
      sym_model_sig_config,
    STATE(343), 1,
      sym_machine_sig_config,
    STATE(16), 2,
      sym_module,
      aux_sym_program_repeat1,
    STATE(216), 2,
      sym_machine_sig,
      aux_sym_machine_sig_config_repeat1,
    STATE(153), 5,
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
  [1278] = 18,
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
    STATE(26), 1,
      sym_func_term,
    STATE(27), 1,
      sym_id,
    STATE(40), 1,
      sym_string,
    STATE(42), 1,
      sym_atom,
    STATE(44), 1,
      sym_constant,
    STATE(55), 1,
      sym_unop,
    STATE(188), 1,
      sym_constraint,
    STATE(206), 1,
      sym_body,
    STATE(357), 1,
      sym_body_list,
    ACTIONS(167), 2,
      sym_real,
      sym_frac,
  [1334] = 18,
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
    ACTIONS(204), 1,
      sym_bareid,
    STATE(59), 1,
      sym_unop,
    STATE(70), 1,
      sym_id,
    STATE(72), 1,
      sym_string,
    STATE(81), 1,
      sym_atom,
    STATE(83), 1,
      sym_constant,
    STATE(88), 1,
      sym_func_term,
    STATE(142), 1,
      sym_func_or_compr,
    STATE(174), 1,
      sym_compr,
    STATE(288), 1,
      sym_func_term_list,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [1390] = 18,
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
    STATE(26), 1,
      sym_func_term,
    STATE(27), 1,
      sym_id,
    STATE(40), 1,
      sym_string,
    STATE(42), 1,
      sym_atom,
    STATE(44), 1,
      sym_constant,
    STATE(55), 1,
      sym_unop,
    STATE(188), 1,
      sym_constraint,
    STATE(206), 1,
      sym_body,
    STATE(323), 1,
      sym_body_list,
    ACTIONS(167), 2,
      sym_real,
      sym_frac,
  [1446] = 18,
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
    ACTIONS(204), 1,
      sym_bareid,
    STATE(59), 1,
      sym_unop,
    STATE(70), 1,
      sym_id,
    STATE(72), 1,
      sym_string,
    STATE(81), 1,
      sym_atom,
    STATE(83), 1,
      sym_constant,
    STATE(88), 1,
      sym_func_term,
    STATE(142), 1,
      sym_func_or_compr,
    STATE(174), 1,
      sym_compr,
    STATE(351), 1,
      sym_func_term_list,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [1502] = 18,
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
    ACTIONS(206), 1,
      anon_sym_LBRACK,
    STATE(52), 1,
      sym_sentence_config,
    STATE(59), 1,
      sym_unop,
    STATE(70), 1,
      sym_id,
    STATE(72), 1,
      sym_string,
    STATE(81), 1,
      sym_atom,
    STATE(83), 1,
      sym_constant,
    STATE(91), 1,
      sym_model_fact_list,
    STATE(119), 1,
      sym_func_term,
    STATE(280), 1,
      sym_model_fact,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [1558] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_SLASH,
    STATE(53), 1,
      sym_relop,
    STATE(54), 1,
      sym_binop,
    ACTIONS(216), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(208), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(212), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(210), 5,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1594] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(222), 1,
      anon_sym_is,
    ACTIONS(224), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(218), 13,
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
  [1624] = 18,
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
    STATE(59), 1,
      sym_unop,
    STATE(70), 1,
      sym_id,
    STATE(72), 1,
      sym_string,
    STATE(81), 1,
      sym_atom,
    STATE(83), 1,
      sym_constant,
    STATE(87), 1,
      sym_model_contract,
    STATE(119), 1,
      sym_func_term,
    STATE(248), 1,
      sym_model_fact,
    ACTIONS(33), 2,
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
    STATE(26), 1,
      sym_func_term,
    STATE(27), 1,
      sym_id,
    STATE(40), 1,
      sym_string,
    STATE(42), 1,
      sym_atom,
    STATE(44), 1,
      sym_constant,
    STATE(55), 1,
      sym_unop,
    STATE(188), 1,
      sym_constraint,
    STATE(206), 1,
      sym_body,
    STATE(338), 1,
      sym_body_list,
    ACTIONS(167), 2,
      sym_real,
      sym_frac,
  [1736] = 18,
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
    ACTIONS(206), 1,
      anon_sym_LBRACK,
    STATE(52), 1,
      sym_sentence_config,
    STATE(59), 1,
      sym_unop,
    STATE(70), 1,
      sym_id,
    STATE(72), 1,
      sym_string,
    STATE(78), 1,
      sym_model_fact_list,
    STATE(81), 1,
      sym_atom,
    STATE(83), 1,
      sym_constant,
    STATE(119), 1,
      sym_func_term,
    STATE(280), 1,
      sym_model_fact,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [1792] = 18,
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
    ACTIONS(204), 1,
      sym_bareid,
    STATE(59), 1,
      sym_unop,
    STATE(70), 1,
      sym_id,
    STATE(72), 1,
      sym_string,
    STATE(81), 1,
      sym_atom,
    STATE(83), 1,
      sym_constant,
    STATE(88), 1,
      sym_func_term,
    STATE(142), 1,
      sym_func_or_compr,
    STATE(174), 1,
      sym_compr,
    STATE(229), 1,
      sym_func_term_list,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [1848] = 18,
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
    STATE(26), 1,
      sym_func_term,
    STATE(27), 1,
      sym_id,
    STATE(40), 1,
      sym_string,
    STATE(42), 1,
      sym_atom,
    STATE(44), 1,
      sym_constant,
    STATE(55), 1,
      sym_unop,
    STATE(188), 1,
      sym_constraint,
    STATE(206), 1,
      sym_body,
    STATE(349), 1,
      sym_body_list,
    ACTIONS(167), 2,
      sym_real,
      sym_frac,
  [1904] = 3,
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
  [1930] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_SLASH,
    STATE(54), 1,
      sym_binop,
    ACTIONS(232), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(212), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(230), 9,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1961] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(224), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(218), 13,
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
  [1988] = 17,
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
    STATE(26), 1,
      sym_func_term,
    STATE(27), 1,
      sym_id,
    STATE(40), 1,
      sym_string,
    STATE(42), 1,
      sym_atom,
    STATE(44), 1,
      sym_constant,
    STATE(55), 1,
      sym_unop,
    STATE(188), 1,
      sym_constraint,
    STATE(242), 1,
      sym_body,
    ACTIONS(167), 2,
      sym_real,
      sym_frac,
  [2041] = 17,
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
    ACTIONS(234), 1,
      anon_sym_RPAREN,
    ACTIONS(236), 1,
      sym_bareid,
    STATE(59), 1,
      sym_unop,
    STATE(70), 1,
      sym_id,
    STATE(72), 1,
      sym_string,
    STATE(81), 1,
      sym_atom,
    STATE(83), 1,
      sym_constant,
    STATE(124), 1,
      sym_func_term,
    STATE(269), 1,
      sym_mod_app_arg,
    STATE(301), 1,
      sym_mod_arg_list,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2094] = 17,
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
    ACTIONS(204), 1,
      sym_bareid,
    STATE(59), 1,
      sym_unop,
    STATE(70), 1,
      sym_id,
    STATE(72), 1,
      sym_string,
    STATE(81), 1,
      sym_atom,
    STATE(83), 1,
      sym_constant,
    STATE(88), 1,
      sym_func_term,
    STATE(162), 1,
      sym_func_or_compr,
    STATE(174), 1,
      sym_compr,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2147] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(54), 1,
      sym_binop,
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
  [2174] = 3,
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
  [2198] = 16,
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
    ACTIONS(236), 1,
      sym_bareid,
    STATE(59), 1,
      sym_unop,
    STATE(70), 1,
      sym_id,
    STATE(72), 1,
      sym_string,
    STATE(81), 1,
      sym_atom,
    STATE(83), 1,
      sym_constant,
    STATE(124), 1,
      sym_func_term,
    STATE(269), 1,
      sym_mod_app_arg,
    STATE(316), 1,
      sym_mod_arg_list,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2248] = 3,
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
  [2272] = 16,
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
    STATE(26), 1,
      sym_func_term,
    STATE(27), 1,
      sym_id,
    STATE(40), 1,
      sym_string,
    STATE(42), 1,
      sym_atom,
    STATE(44), 1,
      sym_constant,
    STATE(55), 1,
      sym_unop,
    STATE(203), 1,
      sym_constraint,
    ACTIONS(167), 2,
      sym_real,
      sym_frac,
  [2322] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(218), 13,
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
  [2346] = 3,
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
  [2370] = 16,
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
    ACTIONS(204), 1,
      sym_bareid,
    STATE(59), 1,
      sym_unop,
    STATE(72), 1,
      sym_string,
    STATE(81), 1,
      sym_atom,
    STATE(83), 1,
      sym_constant,
    STATE(97), 1,
      sym_id,
    STATE(106), 1,
      sym_func_term,
    STATE(215), 1,
      sym_compr,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
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
    STATE(126), 1,
      sym_unncmp,
    STATE(163), 1,
      sym_typeid,
    STATE(287), 1,
      sym_fun_decl,
    STATE(292), 1,
      sym_unnbody,
    STATE(352), 1,
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
    STATE(126), 1,
      sym_unncmp,
    STATE(163), 1,
      sym_typeid,
    STATE(285), 1,
      sym_type_decl_body,
    STATE(287), 1,
      sym_fun_decl,
    STATE(292), 1,
      sym_unnbody,
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
    STATE(59), 1,
      sym_unop,
    STATE(70), 1,
      sym_id,
    STATE(72), 1,
      sym_string,
    STATE(81), 1,
      sym_atom,
    STATE(83), 1,
      sym_constant,
    STATE(119), 1,
      sym_func_term,
    STATE(248), 1,
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
    ACTIONS(204), 1,
      sym_bareid,
    STATE(59), 1,
      sym_unop,
    STATE(70), 1,
      sym_id,
    STATE(72), 1,
      sym_string,
    STATE(81), 1,
      sym_atom,
    STATE(83), 1,
      sym_constant,
    STATE(100), 1,
      sym_func_term,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2668] = 14,
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
    STATE(34), 1,
      sym_func_term,
    STATE(35), 1,
      sym_id,
    STATE(40), 1,
      sym_string,
    STATE(42), 1,
      sym_atom,
    STATE(44), 1,
      sym_constant,
    STATE(55), 1,
      sym_unop,
    ACTIONS(167), 2,
      sym_real,
      sym_frac,
  [2712] = 14,
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
    STATE(40), 1,
      sym_string,
    STATE(42), 1,
      sym_atom,
    STATE(44), 1,
      sym_constant,
    STATE(55), 1,
      sym_unop,
    ACTIONS(167), 2,
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
    ACTIONS(204), 1,
      sym_bareid,
    STATE(59), 1,
      sym_unop,
    STATE(65), 1,
      sym_func_term,
    STATE(70), 1,
      sym_id,
    STATE(72), 1,
      sym_string,
    STATE(81), 1,
      sym_atom,
    STATE(83), 1,
      sym_constant,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2800] = 14,
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
    ACTIONS(204), 1,
      sym_bareid,
    STATE(59), 1,
      sym_unop,
    STATE(70), 1,
      sym_id,
    STATE(72), 1,
      sym_string,
    STATE(81), 1,
      sym_atom,
    STATE(83), 1,
      sym_constant,
    STATE(103), 1,
      sym_func_term,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2844] = 14,
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
    ACTIONS(204), 1,
      sym_bareid,
    STATE(59), 1,
      sym_unop,
    STATE(70), 1,
      sym_id,
    STATE(72), 1,
      sym_string,
    STATE(81), 1,
      sym_atom,
    STATE(83), 1,
      sym_constant,
    STATE(139), 1,
      sym_func_term,
    ACTIONS(33), 2,
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
    ACTIONS(204), 1,
      sym_bareid,
    STATE(59), 1,
      sym_unop,
    STATE(66), 1,
      sym_func_term,
    STATE(70), 1,
      sym_id,
    STATE(72), 1,
      sym_string,
    STATE(81), 1,
      sym_atom,
    STATE(83), 1,
      sym_constant,
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
    ACTIONS(204), 1,
      sym_bareid,
    STATE(59), 1,
      sym_unop,
    STATE(70), 1,
      sym_id,
    STATE(72), 1,
      sym_string,
    STATE(81), 1,
      sym_atom,
    STATE(83), 1,
      sym_constant,
    STATE(129), 1,
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
    ACTIONS(204), 1,
      sym_bareid,
    STATE(59), 1,
      sym_unop,
    STATE(70), 1,
      sym_id,
    STATE(72), 1,
      sym_string,
    STATE(81), 1,
      sym_atom,
    STATE(83), 1,
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
    ACTIONS(204), 1,
      sym_bareid,
    STATE(59), 1,
      sym_unop,
    STATE(70), 1,
      sym_id,
    STATE(72), 1,
      sym_string,
    STATE(81), 1,
      sym_atom,
    STATE(83), 1,
      sym_constant,
    STATE(123), 1,
      sym_func_term,
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
    ACTIONS(274), 4,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      sym_bareid,
    ACTIONS(272), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3106] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_SLASH,
    STATE(56), 1,
      sym_binop,
    ACTIONS(212), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(230), 7,
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
    ACTIONS(240), 1,
      anon_sym_SLASH,
    STATE(56), 1,
      sym_binop,
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
  [3154] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 4,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      sym_bareid,
    ACTIONS(276), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3175] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 4,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      sym_bareid,
    ACTIONS(280), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3196] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 4,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      sym_bareid,
    ACTIONS(284), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3217] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_SLASH,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 11,
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
  [3240] = 3,
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
  [3261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_SLASH,
    ACTIONS(242), 12,
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
  [3282] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 4,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      sym_bareid,
    ACTIONS(294), 8,
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
  [3322] = 3,
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
  [3342] = 3,
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
  [3362] = 3,
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
  [3382] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 4,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      sym_bareid,
    ACTIONS(314), 8,
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
    ACTIONS(320), 4,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      sym_bareid,
    ACTIONS(318), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3422] = 3,
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
  [3442] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_SLASH,
    ACTIONS(246), 11,
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
  [3462] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 3,
      anon_sym_conforms,
      sym_digits,
      sym_bareid,
    ACTIONS(272), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3482] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_SLASH,
    ACTIONS(218), 11,
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
  [3502] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_SLASH,
    ACTIONS(230), 11,
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
  [3522] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 4,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      sym_bareid,
    ACTIONS(322), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3542] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 3,
      anon_sym_conforms,
      sym_digits,
      sym_bareid,
    ACTIONS(326), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3562] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 4,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      sym_bareid,
    ACTIONS(330), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3582] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_SLASH,
    STATE(56), 1,
      sym_binop,
    ACTIONS(212), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(334), 6,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [3606] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_RBRACE,
    ACTIONS(338), 1,
      anon_sym_boot,
    ACTIONS(342), 1,
      anon_sym_property,
    ACTIONS(344), 1,
      anon_sym_LBRACK,
    STATE(149), 1,
      sym_machine_prop,
    STATE(151), 1,
      sym_sentence_config,
    STATE(154), 1,
      sym_machine_sentence,
    STATE(364), 1,
      sym_machine_body,
    ACTIONS(340), 2,
      anon_sym_initially,
      anon_sym_next,
    STATE(94), 2,
      sym_machine_sentence_conf,
      aux_sym_machine_body_repeat1,
  [3642] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 3,
      anon_sym_conforms,
      sym_digits,
      sym_bareid,
    ACTIONS(346), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3662] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 4,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      sym_bareid,
    ACTIONS(350), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3682] = 3,
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
  [3702] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_RBRACE,
    ACTIONS(356), 1,
      anon_sym_boot,
    ACTIONS(362), 1,
      anon_sym_property,
    ACTIONS(365), 1,
      anon_sym_LBRACK,
    STATE(149), 1,
      sym_machine_prop,
    STATE(151), 1,
      sym_sentence_config,
    STATE(154), 1,
      sym_machine_sentence,
    ACTIONS(359), 2,
      anon_sym_initially,
      anon_sym_next,
    STATE(93), 2,
      sym_machine_sentence_conf,
      aux_sym_machine_body_repeat1,
  [3735] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_boot,
    ACTIONS(342), 1,
      anon_sym_property,
    ACTIONS(344), 1,
      anon_sym_LBRACK,
    ACTIONS(368), 1,
      anon_sym_RBRACE,
    STATE(149), 1,
      sym_machine_prop,
    STATE(151), 1,
      sym_sentence_config,
    STATE(154), 1,
      sym_machine_sentence,
    ACTIONS(340), 2,
      anon_sym_initially,
      anon_sym_next,
    STATE(93), 2,
      sym_machine_sentence_conf,
      aux_sym_machine_body_repeat1,
  [3768] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 4,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      sym_bareid,
    ACTIONS(370), 7,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3787] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(204), 1,
      sym_bareid,
    ACTIONS(206), 1,
      anon_sym_LBRACK,
    ACTIONS(374), 1,
      anon_sym_RBRACE,
    STATE(193), 1,
      sym_sentence_config,
    STATE(225), 1,
      sym_step,
    STATE(247), 1,
      sym_id,
    STATE(307), 1,
      sym_trans_steps,
    STATE(366), 1,
      sym_step_or_update_lhs,
    STATE(101), 2,
      sym_trans_step_config,
      aux_sym_trans_steps_repeat1,
  [3822] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_SLASH,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    ACTIONS(376), 1,
      anon_sym_is,
    ACTIONS(218), 8,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [3845] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_RBRACE,
    ACTIONS(380), 1,
      anon_sym_LBRACK,
    ACTIONS(383), 1,
      sym_bareid,
    ACTIONS(386), 1,
      sym_qualid,
    STATE(193), 1,
      sym_sentence_config,
    STATE(225), 1,
      sym_step,
    STATE(247), 1,
      sym_id,
    STATE(366), 1,
      sym_step_or_update_lhs,
    STATE(98), 2,
      sym_trans_step_config,
      aux_sym_trans_steps_repeat1,
  [3877] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(389), 1,
      anon_sym_DASH,
    ACTIONS(391), 1,
      sym_digits,
    ACTIONS(395), 1,
      sym_bareid,
    STATE(239), 1,
      sym_enum_cnst,
    STATE(253), 1,
      sym_string,
    STATE(326), 1,
      sym_enum_list,
    ACTIONS(393), 3,
      sym_real,
      sym_frac,
      sym_qualid,
  [3907] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_SLASH,
    STATE(56), 1,
      sym_binop,
    ACTIONS(212), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(397), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [3929] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(204), 1,
      sym_bareid,
    ACTIONS(206), 1,
      anon_sym_LBRACK,
    ACTIONS(399), 1,
      anon_sym_RBRACE,
    STATE(193), 1,
      sym_sentence_config,
    STATE(225), 1,
      sym_step,
    STATE(247), 1,
      sym_id,
    STATE(366), 1,
      sym_step_or_update_lhs,
    STATE(98), 2,
      sym_trans_step_config,
      aux_sym_trans_steps_repeat1,
  [3961] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_SLASH,
    ACTIONS(401), 1,
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
  [3981] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_SLASH,
    STATE(56), 1,
      sym_binop,
    ACTIONS(212), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(403), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [4003] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_SLASH,
    ACTIONS(405), 1,
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
  [4023] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 3,
      anon_sym_conforms,
      sym_digits,
      sym_bareid,
    ACTIONS(370), 7,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [4041] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_SLASH,
    STATE(56), 1,
      sym_binop,
    ACTIONS(212), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(407), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [4063] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_AT,
    ACTIONS(409), 8,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [4080] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(266), 1,
      sym_qualid,
    ACTIONS(413), 1,
      anon_sym_any,
    ACTIONS(415), 1,
      sym_bareid,
    STATE(126), 1,
      sym_unncmp,
    STATE(163), 1,
      sym_typeid,
    STATE(185), 1,
      sym_field,
    STATE(202), 1,
      sym_unnbody,
    STATE(319), 1,
      sym_fields,
  [4111] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_SLASH,
    ACTIONS(417), 1,
      anon_sym_is,
    ACTIONS(226), 7,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4130] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_SLASH,
    ACTIONS(419), 1,
      anon_sym_at,
    ACTIONS(226), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4149] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(266), 1,
      sym_qualid,
    ACTIONS(413), 1,
      anon_sym_any,
    ACTIONS(415), 1,
      sym_bareid,
    STATE(126), 1,
      sym_unncmp,
    STATE(163), 1,
      sym_typeid,
    STATE(185), 1,
      sym_field,
    STATE(202), 1,
      sym_unnbody,
    STATE(281), 1,
      sym_fields,
  [4180] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym_bareid,
    STATE(217), 1,
      sym_mod_ref,
    STATE(270), 1,
      sym_mod_refs,
    ACTIONS(421), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
    ACTIONS(423), 2,
      anon_sym_includes,
      anon_sym_extends,
    STATE(128), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [4205] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(389), 1,
      anon_sym_DASH,
    ACTIONS(391), 1,
      sym_digits,
    ACTIONS(395), 1,
      sym_bareid,
    STATE(253), 1,
      sym_string,
    STATE(265), 1,
      sym_enum_cnst,
    ACTIONS(393), 3,
      sym_real,
      sym_frac,
      sym_qualid,
  [4232] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(266), 1,
      sym_qualid,
    ACTIONS(413), 1,
      anon_sym_any,
    ACTIONS(415), 1,
      sym_bareid,
    STATE(126), 1,
      sym_unncmp,
    STATE(163), 1,
      sym_typeid,
    STATE(185), 1,
      sym_field,
    STATE(202), 1,
      sym_unnbody,
    STATE(293), 1,
      sym_fields,
  [4263] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(266), 1,
      sym_qualid,
    ACTIONS(413), 1,
      anon_sym_any,
    ACTIONS(415), 1,
      sym_bareid,
    STATE(126), 1,
      sym_unncmp,
    STATE(163), 1,
      sym_typeid,
    STATE(185), 1,
      sym_field,
    STATE(202), 1,
      sym_unnbody,
    STATE(243), 1,
      sym_fields,
  [4294] = 4,
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
  [4313] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 2,
      sym_digits,
      sym_bareid,
    ACTIONS(433), 6,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [4329] = 3,
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
  [4345] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_SLASH,
    STATE(56), 1,
      sym_binop,
    ACTIONS(441), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
    ACTIONS(212), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4365] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 2,
      sym_digits,
      sym_bareid,
    ACTIONS(370), 6,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [4381] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 2,
      sym_digits,
      sym_bareid,
    ACTIONS(443), 6,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [4397] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(266), 1,
      sym_qualid,
    ACTIONS(413), 1,
      anon_sym_any,
    ACTIONS(415), 1,
      sym_bareid,
    STATE(126), 1,
      sym_unncmp,
    STATE(163), 1,
      sym_typeid,
    STATE(202), 1,
      sym_unnbody,
    STATE(224), 1,
      sym_field,
  [4425] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_SLASH,
    STATE(56), 1,
      sym_binop,
    ACTIONS(447), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
    ACTIONS(212), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4445] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_SLASH,
    STATE(56), 1,
      sym_binop,
    ACTIONS(449), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(212), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4465] = 2,
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
  [4479] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_PLUS,
    STATE(133), 1,
      aux_sym_unnbody_repeat1,
    ACTIONS(453), 5,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [4496] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [4509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 7,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [4522] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_SLASH,
    ACTIONS(461), 1,
      anon_sym_DOT,
    STATE(56), 1,
      sym_binop,
    ACTIONS(212), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4541] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      sym_bareid,
    STATE(217), 1,
      sym_mod_ref,
    STATE(264), 1,
      sym_mod_refs,
    ACTIONS(463), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
    STATE(128), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [4562] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_SLASH,
    ACTIONS(467), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      sym_binop,
    ACTIONS(212), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4581] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_COMMA,
    STATE(137), 1,
      aux_sym_func_term_list_repeat1,
    ACTIONS(469), 5,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [4598] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_PLUS,
    STATE(138), 1,
      aux_sym_unnbody_repeat1,
    ACTIONS(473), 5,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [4615] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 7,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [4628] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 7,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [4641] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(264), 1,
      sym_bareid,
    ACTIONS(266), 1,
      sym_qualid,
    ACTIONS(479), 1,
      anon_sym_any,
    STATE(126), 1,
      sym_unncmp,
    STATE(163), 1,
      sym_typeid,
    STATE(209), 1,
      sym_unnbody,
  [4666] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    STATE(137), 1,
      aux_sym_func_term_list_repeat1,
    ACTIONS(481), 5,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [4683] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_PLUS,
    STATE(138), 1,
      aux_sym_unnbody_repeat1,
    ACTIONS(486), 5,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [4700] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_SLASH,
    ACTIONS(491), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      sym_binop,
    ACTIONS(212), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4719] = 2,
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
  [4732] = 2,
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
  [4745] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_COMMA,
    STATE(132), 1,
      aux_sym_func_term_list_repeat1,
    ACTIONS(497), 5,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [4762] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      sym_bareid,
    STATE(256), 1,
      sym_mod_apply,
    STATE(317), 1,
      sym_mod_ref,
    STATE(321), 1,
      sym_choice_list,
    STATE(128), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [4782] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_PLUS,
  [4794] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(264), 1,
      sym_bareid,
    ACTIONS(266), 1,
      sym_qualid,
    STATE(126), 1,
      sym_unncmp,
    STATE(163), 1,
      sym_typeid,
    STATE(207), 1,
      sym_unnbody,
  [4816] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_COLON,
    ACTIONS(499), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_PLUS,
  [4830] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [4842] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_digits,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(72), 1,
      sym_string,
    STATE(258), 1,
      sym_constant,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [4862] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [4874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [4886] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_boot,
    ACTIONS(342), 1,
      anon_sym_property,
    STATE(149), 1,
      sym_machine_prop,
    STATE(156), 1,
      sym_machine_sentence,
    ACTIONS(340), 2,
      anon_sym_initially,
      anon_sym_next,
  [4906] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [4918] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [4930] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [4942] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [4954] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [4966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [4978] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [4990] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [5002] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [5014] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(264), 1,
      sym_bareid,
    ACTIONS(266), 1,
      sym_qualid,
    STATE(126), 1,
      sym_unncmp,
    STATE(163), 1,
      sym_typeid,
    STATE(268), 1,
      sym_unnbody,
  [5036] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 6,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [5048] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_PLUS,
  [5060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [5072] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [5084] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_PLUS,
  [5096] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      sym_bareid,
    STATE(256), 1,
      sym_mod_apply,
    STATE(304), 1,
      sym_choice_list,
    STATE(317), 1,
      sym_mod_ref,
    STATE(128), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [5128] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [5140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [5152] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [5164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [5176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_PLUS,
  [5188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 6,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [5200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [5212] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(264), 1,
      sym_bareid,
    ACTIONS(266), 1,
      sym_qualid,
    STATE(126), 1,
      sym_unncmp,
    STATE(163), 1,
      sym_typeid,
    STATE(211), 1,
      sym_unnbody,
  [5234] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      sym_bareid,
    STATE(217), 1,
      sym_mod_ref,
    STATE(278), 1,
      sym_mod_refs,
    STATE(128), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5251] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      anon_sym_RPAREN,
    ACTIONS(549), 1,
      sym_bareid,
    STATE(275), 1,
      sym_mod_ref_rename,
    STATE(276), 1,
      sym_val_or_model_program,
    STATE(303), 1,
      sym_vom_param_list,
  [5270] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      sym_bareid,
    STATE(217), 1,
      sym_mod_ref,
    STATE(245), 1,
      sym_mod_refs,
    STATE(128), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5287] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_COMMA,
    STATE(180), 1,
      aux_sym_body_repeat1,
    ACTIONS(551), 3,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [5302] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(204), 1,
      sym_bareid,
    STATE(171), 1,
      sym_update,
    STATE(247), 1,
      sym_id,
    STATE(341), 1,
      sym_step_or_update_lhs,
  [5321] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      sym_bareid,
    STATE(315), 1,
      sym_mod_apply,
    STATE(317), 1,
      sym_mod_ref,
    STATE(128), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5338] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(204), 1,
      sym_bareid,
    STATE(237), 1,
      sym_setting,
    STATE(329), 1,
      sym_id,
    STATE(355), 1,
      sym_setting_list,
  [5357] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      sym_bareid,
    STATE(317), 1,
      sym_mod_ref,
    STATE(354), 1,
      sym_mod_apply,
    STATE(128), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5374] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_COMMA,
    STATE(198), 1,
      aux_sym_fields_repeat1,
    ACTIONS(556), 3,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [5389] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(204), 1,
      sym_bareid,
    STATE(171), 1,
      sym_step,
    STATE(247), 1,
      sym_id,
    STATE(330), 1,
      sym_step_or_update_lhs,
  [5408] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(204), 1,
      sym_bareid,
    STATE(237), 1,
      sym_setting,
    STATE(329), 1,
      sym_id,
    STATE(348), 1,
      sym_setting_list,
  [5427] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_COMMA,
    STATE(192), 1,
      aux_sym_body_repeat1,
    ACTIONS(560), 3,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [5442] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      sym_bareid,
    ACTIONS(564), 1,
      anon_sym_RPAREN,
    STATE(275), 1,
      sym_mod_ref_rename,
    STATE(276), 1,
      sym_val_or_model_program,
    STATE(294), 1,
      sym_vom_param_list,
  [5461] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(204), 1,
      sym_bareid,
    STATE(237), 1,
      sym_setting,
    STATE(329), 1,
      sym_id,
    STATE(331), 1,
      sym_setting_list,
  [5480] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(264), 1,
      sym_bareid,
    ACTIONS(266), 1,
      sym_qualid,
    STATE(144), 1,
      sym_unncmp,
    STATE(163), 1,
      sym_typeid,
  [5499] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_COMMA,
    STATE(180), 1,
      aux_sym_body_repeat1,
    ACTIONS(566), 3,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [5514] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(204), 1,
      sym_bareid,
    STATE(219), 1,
      sym_step,
    STATE(247), 1,
      sym_id,
    STATE(366), 1,
      sym_step_or_update_lhs,
  [5533] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_LPAREN,
    STATE(170), 1,
      sym_transform_rest,
    STATE(235), 1,
      sym_transform_sig,
    STATE(297), 1,
      sym_trans_sig_in,
    STATE(324), 1,
      sym_transform_sig_config,
  [5552] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_LPAREN,
    STATE(175), 1,
      sym_tsystem_rest,
    STATE(235), 1,
      sym_transform_sig,
    STATE(297), 1,
      sym_trans_sig_in,
    STATE(298), 1,
      sym_transform_sig_config,
  [5571] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      sym_bareid,
    STATE(217), 1,
      sym_mod_ref,
    STATE(251), 1,
      sym_mod_refs,
    STATE(128), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5588] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(204), 1,
      sym_bareid,
    STATE(237), 1,
      sym_setting,
    STATE(329), 1,
      sym_id,
    STATE(356), 1,
      sym_setting_list,
  [5607] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_COMMA,
    STATE(199), 1,
      aux_sym_fields_repeat1,
    ACTIONS(570), 3,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [5622] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      anon_sym_COMMA,
    STATE(199), 1,
      aux_sym_fields_repeat1,
    ACTIONS(572), 3,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [5637] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(204), 1,
      sym_bareid,
    STATE(237), 1,
      sym_setting,
    STATE(329), 1,
      sym_id,
    STATE(345), 1,
      sym_setting_list,
  [5656] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      sym_bareid,
    ACTIONS(529), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_qualid,
  [5668] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [5678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5688] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_SEMI,
    STATE(204), 1,
      aux_sym_body_list_repeat1,
    ACTIONS(581), 2,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [5702] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      sym_bareid,
    STATE(213), 1,
      sym_mod_ref,
    STATE(128), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5716] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_SEMI,
    STATE(223), 1,
      aux_sym_body_list_repeat1,
    ACTIONS(586), 2,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [5730] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [5740] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(204), 1,
      sym_bareid,
    STATE(247), 1,
      sym_id,
    STATE(318), 1,
      sym_step_or_update_lhs,
  [5756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [5766] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 2,
      anon_sym_LBRACE,
      sym_qualid,
    ACTIONS(596), 2,
      anon_sym_any,
      sym_bareid,
  [5778] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [5788] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 4,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
  [5798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 4,
      anon_sym_LBRACE,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [5808] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 4,
      anon_sym_LBRACE,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [5818] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5828] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_machine,
    ACTIONS(604), 1,
      anon_sym_LBRACE,
    STATE(218), 2,
      sym_machine_sig,
      aux_sym_machine_sig_config_repeat1,
  [5842] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_COMMA,
    ACTIONS(606), 3,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LBRACK,
  [5854] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_LBRACE,
    ACTIONS(612), 1,
      anon_sym_machine,
    STATE(218), 2,
      sym_machine_sig,
      aux_sym_machine_sig_config_repeat1,
  [5868] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      sym_bareid,
    ACTIONS(615), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_qualid,
  [5880] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      sym_bareid,
    STATE(275), 1,
      sym_mod_ref_rename,
    STATE(276), 1,
      sym_val_or_model_program,
    STATE(305), 1,
      sym_vom_param_list,
  [5896] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(204), 1,
      sym_bareid,
    STATE(261), 1,
      sym_setting,
    STATE(329), 1,
      sym_id,
  [5912] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
    ACTIONS(621), 2,
      anon_sym_includes,
      anon_sym_extends,
  [5924] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_SEMI,
    STATE(204), 1,
      aux_sym_body_list_repeat1,
    ACTIONS(623), 2,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [5938] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [5948] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      sym_bareid,
    ACTIONS(625), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_qualid,
  [5960] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      sym_bareid,
    STATE(214), 1,
      sym_mod_ref,
    STATE(128), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5974] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(629), 1,
      anon_sym_LBRACE,
    STATE(328), 1,
      sym_config,
  [5987] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      sym_bareid,
    STATE(233), 1,
      sym_mod_ref_rename,
    STATE(313), 1,
      sym_model_param_list,
  [6000] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_RBRACE,
    ACTIONS(635), 1,
      anon_sym_PIPE,
    STATE(135), 1,
      sym_compr_rest,
  [6013] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_COMMA,
    ACTIONS(639), 1,
      anon_sym_RBRACK,
    STATE(238), 1,
      aux_sym_setting_list_repeat1,
  [6026] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_RPAREN,
    ACTIONS(643), 1,
      anon_sym_COMMA,
    STATE(231), 1,
      aux_sym_model_param_list_repeat1,
  [6039] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(646), 1,
      anon_sym_LBRACE,
    STATE(325), 1,
      sym_config,
  [6052] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      anon_sym_RPAREN,
    ACTIONS(650), 1,
      anon_sym_COMMA,
    STATE(234), 1,
      aux_sym_model_param_list_repeat1,
  [6065] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      anon_sym_COMMA,
    ACTIONS(652), 1,
      anon_sym_RPAREN,
    STATE(231), 1,
      aux_sym_model_param_list_repeat1,
  [6078] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(654), 1,
      anon_sym_LBRACE,
    STATE(309), 1,
      sym_config,
  [6091] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      anon_sym_RBRACE,
    ACTIONS(658), 1,
      anon_sym_COMMA,
    STATE(236), 1,
      aux_sym_enum_list_repeat1,
  [6104] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_COMMA,
    ACTIONS(661), 1,
      anon_sym_RBRACK,
    STATE(230), 1,
      aux_sym_setting_list_repeat1,
  [6117] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_COMMA,
    ACTIONS(666), 1,
      anon_sym_RBRACK,
    STATE(238), 1,
      aux_sym_setting_list_repeat1,
  [6130] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_RBRACE,
    ACTIONS(670), 1,
      anon_sym_COMMA,
    STATE(240), 1,
      aux_sym_enum_list_repeat1,
  [6143] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_COMMA,
    ACTIONS(672), 1,
      anon_sym_RBRACE,
    STATE(236), 1,
      aux_sym_enum_list_repeat1,
  [6156] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_DOT_DOT,
    ACTIONS(674), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [6167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 3,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [6176] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(111), 1,
      sym_maparrow,
    ACTIONS(678), 2,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [6187] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(204), 1,
      sym_bareid,
    STATE(360), 1,
      sym_id,
  [6200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 3,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LBRACK,
  [6209] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_COLON_COLON,
    ACTIONS(682), 1,
      anon_sym_COLON,
  [6219] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_EQ,
    ACTIONS(686), 1,
      anon_sym_COMMA,
  [6229] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      anon_sym_DOT,
    ACTIONS(690), 1,
      anon_sym_COMMA,
  [6239] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_system,
    ACTIONS(694), 1,
      sym_bareid,
  [6249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 2,
      anon_sym_DOT,
      anon_sym_COLON_DASH,
  [6257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 2,
      anon_sym_LBRACE,
      anon_sym_machine,
  [6265] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      anon_sym_LPAREN,
    STATE(296), 1,
      sym_machine_sig_in,
  [6275] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [6283] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [6291] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6299] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      anon_sym_DOT,
    ACTIONS(708), 1,
      anon_sym_SEMI,
  [6309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [6317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [6333] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(255), 1,
      sym_string,
  [6343] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6351] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(125), 1,
      sym_string,
  [6361] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(140), 1,
      sym_string,
  [6371] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [6379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [6387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [6395] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_DASH,
    ACTIONS(722), 1,
      sym_digits,
  [6405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6413] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_RPAREN,
    ACTIONS(728), 1,
      anon_sym_COMMA,
  [6423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [6431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [6439] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      sym_bareid,
    STATE(274), 1,
      sym_mod_ref_rename,
  [6449] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [6457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6473] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_RPAREN,
    ACTIONS(738), 1,
      anon_sym_COMMA,
  [6483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 2,
      anon_sym_DOT,
      anon_sym_COLON_DASH,
  [6491] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [6499] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 1,
      anon_sym_DASH,
    ACTIONS(746), 1,
      sym_digits,
  [6509] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      anon_sym_DOT,
    ACTIONS(750), 1,
      anon_sym_COMMA,
  [6519] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      anon_sym_RPAREN,
  [6526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
  [6533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 1,
      anon_sym_DOT_DOT,
  [6540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      anon_sym_LPAREN,
  [6547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_DOT,
  [6554] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_RBRACE,
  [6561] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_LPAREN,
  [6568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      anon_sym_RPAREN,
  [6575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_of,
  [6582] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_DOT,
  [6589] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_of,
  [6596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_DOT,
  [6603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_RPAREN,
  [6610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      anon_sym_RPAREN,
  [6617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      anon_sym_RBRACE,
  [6624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      anon_sym_of,
  [6631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      anon_sym_returns,
  [6638] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      anon_sym_LBRACE,
  [6645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      anon_sym_DOT,
  [6652] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_returns,
  [6659] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_RPAREN,
  [6666] = 2,
    ACTIONS(794), 1,
      aux_sym_string_token1,
    ACTIONS(796), 1,
      sym_comment,
  [6673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      anon_sym_RPAREN,
  [6680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      anon_sym_DOT,
  [6687] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      anon_sym_RPAREN,
  [6694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      sym_digits,
  [6701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_RBRACE,
  [6708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      anon_sym_LPAREN,
  [6715] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 1,
      anon_sym_LBRACE,
  [6722] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_LPAREN,
  [6729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_COLON_COLON,
  [6736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      sym_bareid,
  [6743] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_RPAREN,
  [6750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      anon_sym_DOT,
  [6757] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym_DOT,
  [6764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      anon_sym_RPAREN,
  [6771] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      anon_sym_LPAREN,
  [6778] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      anon_sym_EQ,
  [6785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      anon_sym_RPAREN,
  [6792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      sym_digits,
  [6799] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      anon_sym_DOT,
  [6806] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      anon_sym_RBRACE,
  [6813] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_DOT,
  [6820] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_LBRACE,
  [6827] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 1,
      anon_sym_LBRACE,
  [6834] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 1,
      anon_sym_RBRACE,
  [6841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_DOT,
  [6848] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_LBRACE,
  [6855] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      anon_sym_EQ,
  [6862] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(848), 1,
      anon_sym_EQ,
  [6869] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 1,
      anon_sym_RBRACK,
  [6876] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      anon_sym_returns,
  [6883] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      sym_bareid,
  [6890] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 1,
      sym_bareid,
  [6897] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_of,
  [6904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      sym_digits,
  [6911] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      sym_bareid,
  [6918] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      anon_sym_RBRACE,
  [6925] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      anon_sym_LBRACE,
  [6932] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      anon_sym_of,
  [6939] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 1,
      anon_sym_EQ,
  [6946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 1,
      anon_sym_LBRACE,
  [6953] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      anon_sym_LBRACE,
  [6960] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      anon_sym_EQ,
  [6967] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(878), 1,
      anon_sym_RBRACK,
  [6974] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(880), 1,
      ts_builtin_sym_end,
  [6981] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      sym_bareid,
  [6988] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      anon_sym_RBRACK,
  [6995] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      anon_sym_DOT,
  [7002] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(888), 1,
      anon_sym_DQUOTE,
  [7009] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      anon_sym_RPAREN,
  [7016] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(892), 1,
      anon_sym_DOT,
  [7023] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_DOT,
  [7030] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      anon_sym_DOT,
  [7037] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      anon_sym_RBRACK,
  [7044] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      anon_sym_RBRACK,
  [7051] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      anon_sym_DOT,
  [7058] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      sym_bareid,
  [7065] = 2,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(906), 1,
      aux_sym_string_token1,
  [7072] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 1,
      anon_sym_DOT,
  [7079] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(910), 1,
      anon_sym_model,
  [7086] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(912), 1,
      aux_sym_model_contract_token1,
  [7093] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 1,
      aux_sym_model_contract_token1,
  [7100] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 1,
      anon_sym_RBRACE,
  [7107] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(918), 1,
      sym_bareid,
  [7114] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(920), 1,
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
  [SMALL_STATE(12)] = 772,
  [SMALL_STATE(13)] = 837,
  [SMALL_STATE(14)] = 901,
  [SMALL_STATE(15)] = 967,
  [SMALL_STATE(16)] = 1031,
  [SMALL_STATE(17)] = 1086,
  [SMALL_STATE(18)] = 1141,
  [SMALL_STATE(19)] = 1196,
  [SMALL_STATE(20)] = 1251,
  [SMALL_STATE(21)] = 1278,
  [SMALL_STATE(22)] = 1334,
  [SMALL_STATE(23)] = 1390,
  [SMALL_STATE(24)] = 1446,
  [SMALL_STATE(25)] = 1502,
  [SMALL_STATE(26)] = 1558,
  [SMALL_STATE(27)] = 1594,
  [SMALL_STATE(28)] = 1624,
  [SMALL_STATE(29)] = 1680,
  [SMALL_STATE(30)] = 1736,
  [SMALL_STATE(31)] = 1792,
  [SMALL_STATE(32)] = 1848,
  [SMALL_STATE(33)] = 1904,
  [SMALL_STATE(34)] = 1930,
  [SMALL_STATE(35)] = 1961,
  [SMALL_STATE(36)] = 1988,
  [SMALL_STATE(37)] = 2041,
  [SMALL_STATE(38)] = 2094,
  [SMALL_STATE(39)] = 2147,
  [SMALL_STATE(40)] = 2174,
  [SMALL_STATE(41)] = 2198,
  [SMALL_STATE(42)] = 2248,
  [SMALL_STATE(43)] = 2272,
  [SMALL_STATE(44)] = 2322,
  [SMALL_STATE(45)] = 2346,
  [SMALL_STATE(46)] = 2370,
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
  [SMALL_STATE(68)] = 3175,
  [SMALL_STATE(69)] = 3196,
  [SMALL_STATE(70)] = 3217,
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
  [SMALL_STATE(81)] = 3442,
  [SMALL_STATE(82)] = 3462,
  [SMALL_STATE(83)] = 3482,
  [SMALL_STATE(84)] = 3502,
  [SMALL_STATE(85)] = 3522,
  [SMALL_STATE(86)] = 3542,
  [SMALL_STATE(87)] = 3562,
  [SMALL_STATE(88)] = 3582,
  [SMALL_STATE(89)] = 3606,
  [SMALL_STATE(90)] = 3642,
  [SMALL_STATE(91)] = 3662,
  [SMALL_STATE(92)] = 3682,
  [SMALL_STATE(93)] = 3702,
  [SMALL_STATE(94)] = 3735,
  [SMALL_STATE(95)] = 3768,
  [SMALL_STATE(96)] = 3787,
  [SMALL_STATE(97)] = 3822,
  [SMALL_STATE(98)] = 3845,
  [SMALL_STATE(99)] = 3877,
  [SMALL_STATE(100)] = 3907,
  [SMALL_STATE(101)] = 3929,
  [SMALL_STATE(102)] = 3961,
  [SMALL_STATE(103)] = 3981,
  [SMALL_STATE(104)] = 4003,
  [SMALL_STATE(105)] = 4023,
  [SMALL_STATE(106)] = 4041,
  [SMALL_STATE(107)] = 4063,
  [SMALL_STATE(108)] = 4080,
  [SMALL_STATE(109)] = 4111,
  [SMALL_STATE(110)] = 4130,
  [SMALL_STATE(111)] = 4149,
  [SMALL_STATE(112)] = 4180,
  [SMALL_STATE(113)] = 4205,
  [SMALL_STATE(114)] = 4232,
  [SMALL_STATE(115)] = 4263,
  [SMALL_STATE(116)] = 4294,
  [SMALL_STATE(117)] = 4313,
  [SMALL_STATE(118)] = 4329,
  [SMALL_STATE(119)] = 4345,
  [SMALL_STATE(120)] = 4365,
  [SMALL_STATE(121)] = 4381,
  [SMALL_STATE(122)] = 4397,
  [SMALL_STATE(123)] = 4425,
  [SMALL_STATE(124)] = 4445,
  [SMALL_STATE(125)] = 4465,
  [SMALL_STATE(126)] = 4479,
  [SMALL_STATE(127)] = 4496,
  [SMALL_STATE(128)] = 4509,
  [SMALL_STATE(129)] = 4522,
  [SMALL_STATE(130)] = 4541,
  [SMALL_STATE(131)] = 4562,
  [SMALL_STATE(132)] = 4581,
  [SMALL_STATE(133)] = 4598,
  [SMALL_STATE(134)] = 4615,
  [SMALL_STATE(135)] = 4628,
  [SMALL_STATE(136)] = 4641,
  [SMALL_STATE(137)] = 4666,
  [SMALL_STATE(138)] = 4683,
  [SMALL_STATE(139)] = 4700,
  [SMALL_STATE(140)] = 4719,
  [SMALL_STATE(141)] = 4732,
  [SMALL_STATE(142)] = 4745,
  [SMALL_STATE(143)] = 4762,
  [SMALL_STATE(144)] = 4782,
  [SMALL_STATE(145)] = 4794,
  [SMALL_STATE(146)] = 4816,
  [SMALL_STATE(147)] = 4830,
  [SMALL_STATE(148)] = 4842,
  [SMALL_STATE(149)] = 4862,
  [SMALL_STATE(150)] = 4874,
  [SMALL_STATE(151)] = 4886,
  [SMALL_STATE(152)] = 4906,
  [SMALL_STATE(153)] = 4918,
  [SMALL_STATE(154)] = 4930,
  [SMALL_STATE(155)] = 4942,
  [SMALL_STATE(156)] = 4954,
  [SMALL_STATE(157)] = 4966,
  [SMALL_STATE(158)] = 4978,
  [SMALL_STATE(159)] = 4990,
  [SMALL_STATE(160)] = 5002,
  [SMALL_STATE(161)] = 5014,
  [SMALL_STATE(162)] = 5036,
  [SMALL_STATE(163)] = 5048,
  [SMALL_STATE(164)] = 5060,
  [SMALL_STATE(165)] = 5072,
  [SMALL_STATE(166)] = 5084,
  [SMALL_STATE(167)] = 5096,
  [SMALL_STATE(168)] = 5116,
  [SMALL_STATE(169)] = 5128,
  [SMALL_STATE(170)] = 5140,
  [SMALL_STATE(171)] = 5152,
  [SMALL_STATE(172)] = 5164,
  [SMALL_STATE(173)] = 5176,
  [SMALL_STATE(174)] = 5188,
  [SMALL_STATE(175)] = 5200,
  [SMALL_STATE(176)] = 5212,
  [SMALL_STATE(177)] = 5234,
  [SMALL_STATE(178)] = 5251,
  [SMALL_STATE(179)] = 5270,
  [SMALL_STATE(180)] = 5287,
  [SMALL_STATE(181)] = 5302,
  [SMALL_STATE(182)] = 5321,
  [SMALL_STATE(183)] = 5338,
  [SMALL_STATE(184)] = 5357,
  [SMALL_STATE(185)] = 5374,
  [SMALL_STATE(186)] = 5389,
  [SMALL_STATE(187)] = 5408,
  [SMALL_STATE(188)] = 5427,
  [SMALL_STATE(189)] = 5442,
  [SMALL_STATE(190)] = 5461,
  [SMALL_STATE(191)] = 5480,
  [SMALL_STATE(192)] = 5499,
  [SMALL_STATE(193)] = 5514,
  [SMALL_STATE(194)] = 5533,
  [SMALL_STATE(195)] = 5552,
  [SMALL_STATE(196)] = 5571,
  [SMALL_STATE(197)] = 5588,
  [SMALL_STATE(198)] = 5607,
  [SMALL_STATE(199)] = 5622,
  [SMALL_STATE(200)] = 5637,
  [SMALL_STATE(201)] = 5656,
  [SMALL_STATE(202)] = 5668,
  [SMALL_STATE(203)] = 5678,
  [SMALL_STATE(204)] = 5688,
  [SMALL_STATE(205)] = 5702,
  [SMALL_STATE(206)] = 5716,
  [SMALL_STATE(207)] = 5730,
  [SMALL_STATE(208)] = 5740,
  [SMALL_STATE(209)] = 5756,
  [SMALL_STATE(210)] = 5766,
  [SMALL_STATE(211)] = 5778,
  [SMALL_STATE(212)] = 5788,
  [SMALL_STATE(213)] = 5798,
  [SMALL_STATE(214)] = 5808,
  [SMALL_STATE(215)] = 5818,
  [SMALL_STATE(216)] = 5828,
  [SMALL_STATE(217)] = 5842,
  [SMALL_STATE(218)] = 5854,
  [SMALL_STATE(219)] = 5868,
  [SMALL_STATE(220)] = 5880,
  [SMALL_STATE(221)] = 5896,
  [SMALL_STATE(222)] = 5912,
  [SMALL_STATE(223)] = 5924,
  [SMALL_STATE(224)] = 5938,
  [SMALL_STATE(225)] = 5948,
  [SMALL_STATE(226)] = 5960,
  [SMALL_STATE(227)] = 5974,
  [SMALL_STATE(228)] = 5987,
  [SMALL_STATE(229)] = 6000,
  [SMALL_STATE(230)] = 6013,
  [SMALL_STATE(231)] = 6026,
  [SMALL_STATE(232)] = 6039,
  [SMALL_STATE(233)] = 6052,
  [SMALL_STATE(234)] = 6065,
  [SMALL_STATE(235)] = 6078,
  [SMALL_STATE(236)] = 6091,
  [SMALL_STATE(237)] = 6104,
  [SMALL_STATE(238)] = 6117,
  [SMALL_STATE(239)] = 6130,
  [SMALL_STATE(240)] = 6143,
  [SMALL_STATE(241)] = 6156,
  [SMALL_STATE(242)] = 6167,
  [SMALL_STATE(243)] = 6176,
  [SMALL_STATE(244)] = 6187,
  [SMALL_STATE(245)] = 6200,
  [SMALL_STATE(246)] = 6209,
  [SMALL_STATE(247)] = 6219,
  [SMALL_STATE(248)] = 6229,
  [SMALL_STATE(249)] = 6239,
  [SMALL_STATE(250)] = 6249,
  [SMALL_STATE(251)] = 6257,
  [SMALL_STATE(252)] = 6265,
  [SMALL_STATE(253)] = 6275,
  [SMALL_STATE(254)] = 6283,
  [SMALL_STATE(255)] = 6291,
  [SMALL_STATE(256)] = 6299,
  [SMALL_STATE(257)] = 6309,
  [SMALL_STATE(258)] = 6317,
  [SMALL_STATE(259)] = 6325,
  [SMALL_STATE(260)] = 6333,
  [SMALL_STATE(261)] = 6343,
  [SMALL_STATE(262)] = 6351,
  [SMALL_STATE(263)] = 6361,
  [SMALL_STATE(264)] = 6371,
  [SMALL_STATE(265)] = 6379,
  [SMALL_STATE(266)] = 6387,
  [SMALL_STATE(267)] = 6395,
  [SMALL_STATE(268)] = 6405,
  [SMALL_STATE(269)] = 6413,
  [SMALL_STATE(270)] = 6423,
  [SMALL_STATE(271)] = 6431,
  [SMALL_STATE(272)] = 6439,
  [SMALL_STATE(273)] = 6449,
  [SMALL_STATE(274)] = 6457,
  [SMALL_STATE(275)] = 6465,
  [SMALL_STATE(276)] = 6473,
  [SMALL_STATE(277)] = 6483,
  [SMALL_STATE(278)] = 6491,
  [SMALL_STATE(279)] = 6499,
  [SMALL_STATE(280)] = 6509,
  [SMALL_STATE(281)] = 6519,
  [SMALL_STATE(282)] = 6526,
  [SMALL_STATE(283)] = 6533,
  [SMALL_STATE(284)] = 6540,
  [SMALL_STATE(285)] = 6547,
  [SMALL_STATE(286)] = 6554,
  [SMALL_STATE(287)] = 6561,
  [SMALL_STATE(288)] = 6568,
  [SMALL_STATE(289)] = 6575,
  [SMALL_STATE(290)] = 6582,
  [SMALL_STATE(291)] = 6589,
  [SMALL_STATE(292)] = 6596,
  [SMALL_STATE(293)] = 6603,
  [SMALL_STATE(294)] = 6610,
  [SMALL_STATE(295)] = 6617,
  [SMALL_STATE(296)] = 6624,
  [SMALL_STATE(297)] = 6631,
  [SMALL_STATE(298)] = 6638,
  [SMALL_STATE(299)] = 6645,
  [SMALL_STATE(300)] = 6652,
  [SMALL_STATE(301)] = 6659,
  [SMALL_STATE(302)] = 6666,
  [SMALL_STATE(303)] = 6673,
  [SMALL_STATE(304)] = 6680,
  [SMALL_STATE(305)] = 6687,
  [SMALL_STATE(306)] = 6694,
  [SMALL_STATE(307)] = 6701,
  [SMALL_STATE(308)] = 6708,
  [SMALL_STATE(309)] = 6715,
  [SMALL_STATE(310)] = 6722,
  [SMALL_STATE(311)] = 6729,
  [SMALL_STATE(312)] = 6736,
  [SMALL_STATE(313)] = 6743,
  [SMALL_STATE(314)] = 6750,
  [SMALL_STATE(315)] = 6757,
  [SMALL_STATE(316)] = 6764,
  [SMALL_STATE(317)] = 6771,
  [SMALL_STATE(318)] = 6778,
  [SMALL_STATE(319)] = 6785,
  [SMALL_STATE(320)] = 6792,
  [SMALL_STATE(321)] = 6799,
  [SMALL_STATE(322)] = 6806,
  [SMALL_STATE(323)] = 6813,
  [SMALL_STATE(324)] = 6820,
  [SMALL_STATE(325)] = 6827,
  [SMALL_STATE(326)] = 6834,
  [SMALL_STATE(327)] = 6841,
  [SMALL_STATE(328)] = 6848,
  [SMALL_STATE(329)] = 6855,
  [SMALL_STATE(330)] = 6862,
  [SMALL_STATE(331)] = 6869,
  [SMALL_STATE(332)] = 6876,
  [SMALL_STATE(333)] = 6883,
  [SMALL_STATE(334)] = 6890,
  [SMALL_STATE(335)] = 6897,
  [SMALL_STATE(336)] = 6904,
  [SMALL_STATE(337)] = 6911,
  [SMALL_STATE(338)] = 6918,
  [SMALL_STATE(339)] = 6925,
  [SMALL_STATE(340)] = 6932,
  [SMALL_STATE(341)] = 6939,
  [SMALL_STATE(342)] = 6946,
  [SMALL_STATE(343)] = 6953,
  [SMALL_STATE(344)] = 6960,
  [SMALL_STATE(345)] = 6967,
  [SMALL_STATE(346)] = 6974,
  [SMALL_STATE(347)] = 6981,
  [SMALL_STATE(348)] = 6988,
  [SMALL_STATE(349)] = 6995,
  [SMALL_STATE(350)] = 7002,
  [SMALL_STATE(351)] = 7009,
  [SMALL_STATE(352)] = 7016,
  [SMALL_STATE(353)] = 7023,
  [SMALL_STATE(354)] = 7030,
  [SMALL_STATE(355)] = 7037,
  [SMALL_STATE(356)] = 7044,
  [SMALL_STATE(357)] = 7051,
  [SMALL_STATE(358)] = 7058,
  [SMALL_STATE(359)] = 7065,
  [SMALL_STATE(360)] = 7072,
  [SMALL_STATE(361)] = 7079,
  [SMALL_STATE(362)] = 7086,
  [SMALL_STATE(363)] = 7093,
  [SMALL_STATE(364)] = 7100,
  [SMALL_STATE(365)] = 7107,
  [SMALL_STATE(366)] = 7114,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_body, 1),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(31),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(61),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(23),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(187),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(118),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(72),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(72),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(302),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(104),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(50),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(31),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(61),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(32),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(183),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(118),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(72),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(72),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(302),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(102),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(50),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dom_sentences, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_body, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(61),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(21),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(15),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(187),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(118),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(72),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(72),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(302),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(109),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(50),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(337),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(365),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(361),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(249),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(358),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 1),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term, 3),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_term, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term, 2),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_term, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term, 1),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_term, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term, 4, .production_id = 2),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_term, 4, .production_id = 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_sentence, 3),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trans_sentence, 3),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl, 4),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_decl, 4),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_sentence_config, 1),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trans_sentence_config, 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_sentence_config, 2),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trans_sentence_config, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_sentence, 1),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trans_sentence, 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 4),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_sentence, 1),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_sentence, 1),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dom_sentence, 1),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dom_sentence, 1),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_contract, 5),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_contract, 5),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dom_sentence_config, 2),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dom_sentence_config, 2),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_contract_conf, 1),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_contract_conf, 1),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_fact_list, 3),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_fact_list, 3),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_contract, 3),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_contract, 3),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_fact_list, 2),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_fact_list, 2),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dom_sentence, 3),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dom_sentence, 3),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_contract_conf, 2),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_contract_conf, 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_or_compr, 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dom_sentence_config, 1),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dom_sentence_config, 1),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_fact_list, 4),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_fact_list, 4),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_machine_body_repeat1, 2),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_machine_body_repeat1, 2), SHIFT_REPEAT(186),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_machine_body_repeat1, 2), SHIFT_REPEAT(181),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_machine_body_repeat1, 2), SHIFT_REPEAT(347),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_machine_body_repeat1, 2), SHIFT_REPEAT(200),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_body, 1),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sentence_config, 3),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sentence_config, 3),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trans_steps_repeat1, 2),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_steps_repeat1, 2), SHIFT_REPEAT(197),
  [383] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trans_steps_repeat1, 2), SHIFT_REPEAT(50),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_steps_repeat1, 2), SHIFT_REPEAT(50),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 3),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_steps, 1),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 4),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 2),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_ref_rename, 3),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain_sig, 2, .production_id = 1),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_ref_no_rename, 1),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relop, 1),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relop, 1),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unop, 1),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unop, 1),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_fact, 1),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binop, 1),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binop, 1),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_fact, 3),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_app_arg, 1),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_ref_rename, 5),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unnbody, 1),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 3),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_ref, 1),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain_sig, 3, .production_id = 1),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term_list, 2),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unnbody, 2),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compr_rest, 3),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compr, 3),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_term_list_repeat1, 2),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_term_list_repeat1, 2), SHIFT_REPEAT(38),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unnbody_repeat1, 2),
  [488] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unnbody_repeat1, 2), SHIFT_REPEAT(191),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_ref_no_rename, 3),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compr_rest, 1),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term_list, 1),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeid, 1),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine, 3),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sentence, 1),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model, 4),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform_rest, 4),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sentence_conf, 1),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain, 4),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sentence_conf, 2),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine, 4),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model, 3),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tsystem_rest, 3),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tsystem_rest, 4),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unncmp, 1),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 4),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 4),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform_rest, 3),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_prop, 5),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform, 3),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sentence, 2),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain, 3),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unncmp, 3),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tsystem, 4),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [553] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(43),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fields, 1),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fields, 2),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fields_repeat1, 2),
  [574] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fields_repeat1, 2), SHIFT_REPEAT(122),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_step, 4),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_list_repeat1, 2),
  [583] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_list_repeat1, 2), SHIFT_REPEAT(36),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_list, 1),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maparrow, 1),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_maparrow, 1),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_intro, 4),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_intro, 5),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sig_config, 1),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_refs, 1),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_machine_sig_config_repeat1, 2),
  [612] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_machine_sig_config_repeat1, 2), SHIFT_REPEAT(337),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_step_config, 2),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trans_step_config, 2),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_sig, 1),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_list, 2),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_step_config, 1),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trans_step_config, 1),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_sig_config, 1),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_list, 2),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_model_param_list_repeat1, 2),
  [643] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_param_list_repeat1, 2), SHIFT_REPEAT(272),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain_sig_config, 1),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_param_list, 1),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_param_list, 2),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform_sig_config, 1),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_list_repeat1, 2),
  [658] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_list_repeat1, 2), SHIFT_REPEAT(113),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_list, 1),
  [663] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setting_list_repeat1, 2), SHIFT_REPEAT(221),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_setting_list_repeat1, 2),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_list, 1),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_list, 2),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_cnst, 1),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_refs, 3),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_or_update_lhs, 1),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sig, 5),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_cnst, 5),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_app_arg, 3),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_list, 1),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_cnst, 4),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_apply, 4),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain_sig, 4, .production_id = 1),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_cnst, 3),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_val_or_model_program, 3),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_arg_list, 1),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform_sig, 5),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_apply, 3),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_val_or_model_program, 1),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vom_param_list, 1),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_sig, 3),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_decl, 1),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl_body, 3),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sig_in, 2),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl_body, 1),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_sig_in, 2),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [794] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [796] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_list, 3),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vom_param_list, 3),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform_sig_config, 2),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl_body, 4),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_arg_list, 3),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_or_update_lhs, 3),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain_sig_config, 2),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl_body, 6),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_sig_config, 2),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_sig_in, 3),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sig_in, 3),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [880] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [906] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_card_spec, 1),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
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
