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
#define STATE_COUNT 359
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 167
#define ALIAS_COUNT 0
#define TOKEN_COUNT 68
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 2

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
  sym__bareid = 65,
  sym__qualid = 66,
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
  [sym__bareid] = "_bareid",
  [sym__qualid] = "_qualid",
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
  [sym__bareid] = sym__bareid,
  [sym__qualid] = sym__qualid,
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
  [sym__bareid] = {
    .visible = false,
    .named = true,
  },
  [sym__qualid] = {
    .visible = false,
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
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
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
  [15] = 12,
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
  [27] = 22,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
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
  [44] = 20,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 21,
  [50] = 50,
  [51] = 51,
  [52] = 51,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 58,
  [60] = 60,
  [61] = 56,
  [62] = 53,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 36,
  [67] = 38,
  [68] = 68,
  [69] = 69,
  [70] = 47,
  [71] = 71,
  [72] = 37,
  [73] = 73,
  [74] = 74,
  [75] = 63,
  [76] = 71,
  [77] = 48,
  [78] = 78,
  [79] = 45,
  [80] = 80,
  [81] = 81,
  [82] = 41,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 42,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 99,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 93,
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
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 93,
  [124] = 124,
  [125] = 125,
  [126] = 125,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
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
  [182] = 177,
  [183] = 177,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 177,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 181,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 171,
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
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 93,
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
  [254] = 248,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
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
  [340] = 308,
  [341] = 341,
  [342] = 298,
  [343] = 317,
  [344] = 277,
  [345] = 345,
  [346] = 325,
  [347] = 308,
  [348] = 308,
  [349] = 349,
  [350] = 345,
  [351] = 288,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 315,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(162);
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(235);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == '(') ADVANCE(175);
      if (lookahead == ')') ADVANCE(176);
      if (lookahead == '*') ADVANCE(246);
      if (lookahead == '+') ADVANCE(229);
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '-') ADVANCE(214);
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == ':') ADVANCE(204);
      if (lookahead == ';') ADVANCE(206);
      if (lookahead == '<') ADVANCE(250);
      if (lookahead == '=') ADVANCE(170);
      if (lookahead == '>') ADVANCE(252);
      if (lookahead == '@') ADVANCE(211);
      if (lookahead == '[') ADVANCE(201);
      if (lookahead == ']') ADVANCE(202);
      if (lookahead == 'a') ADVANCE(93);
      if (lookahead == 'b') ADVANCE(76);
      if (lookahead == 'c') ADVANCE(104);
      if (lookahead == 'd') ADVANCE(181);
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead == 'f') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == 'm') ADVANCE(46);
      if (lookahead == 'n') ADVANCE(60);
      if (lookahead == 'o') ADVANCE(72);
      if (lookahead == 'p') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(61);
      if (lookahead == 's') ADVANCE(105);
      if (lookahead == 't') ADVANCE(114);
      if (lookahead == '{') ADVANCE(163);
      if (lookahead == '|') ADVANCE(243);
      if (lookahead == '}') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '*') ADVANCE(238);
      if (lookahead != 0) ADVANCE(237);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(314);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(314);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '.') ADVANCE(31);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(314);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == 'D') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(314);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == 'I') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(314);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '.') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(314);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == ']') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(314);
      if (lookahead == '\'') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(314);
      if (lookahead == '\'') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == '"') ADVANCE(235);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '%') ADVANCE(156);
      if (lookahead == '(') ADVANCE(175);
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '-') ADVANCE(213);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == ':') ADVANCE(205);
      if (lookahead == '[') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(271);
      if (lookahead == 'r') ADVANCE(257);
      if (lookahead == '{') ADVANCE(163);
      if (lookahead == '}') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == '"') ADVANCE(235);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '%') ADVANCE(159);
      if (lookahead == '(') ADVANCE(175);
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '-') ADVANCE(213);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == ':') ADVANCE(205);
      if (lookahead == '[') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(271);
      if (lookahead == 'r') ADVANCE(257);
      if (lookahead == '{') ADVANCE(163);
      if (lookahead == '}') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == '"') ADVANCE(235);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '%') ADVANCE(156);
      if (lookahead == '(') ADVANCE(175);
      if (lookahead == '-') ADVANCE(213);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '[') ADVANCE(201);
      if (lookahead == 'c') ADVANCE(277);
      if (lookahead == '{') ADVANCE(163);
      if (lookahead == '}') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == '"') ADVANCE(235);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '%') ADVANCE(159);
      if (lookahead == '(') ADVANCE(175);
      if (lookahead == '-') ADVANCE(213);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '[') ADVANCE(201);
      if (lookahead == 'c') ADVANCE(277);
      if (lookahead == '{') ADVANCE(163);
      if (lookahead == '}') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '"') ADVANCE(235);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '%') ADVANCE(156);
      if (lookahead == '(') ADVANCE(175);
      if (lookahead == '-') ADVANCE(213);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '[') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(271);
      if (lookahead == 'n') ADVANCE(276);
      if (lookahead == 'r') ADVANCE(257);
      if (lookahead == '{') ADVANCE(163);
      if (lookahead == '}') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '"') ADVANCE(235);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '%') ADVANCE(159);
      if (lookahead == '(') ADVANCE(175);
      if (lookahead == '-') ADVANCE(213);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '[') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(271);
      if (lookahead == 'n') ADVANCE(276);
      if (lookahead == 'r') ADVANCE(257);
      if (lookahead == '{') ADVANCE(163);
      if (lookahead == '}') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == '"') ADVANCE(235);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '%') ADVANCE(156);
      if (lookahead == '(') ADVANCE(175);
      if (lookahead == '-') ADVANCE(213);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == 'a') ADVANCE(292);
      if (lookahead == 'n') ADVANCE(276);
      if (lookahead == 's') ADVANCE(279);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == '"') ADVANCE(235);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '%') ADVANCE(159);
      if (lookahead == '(') ADVANCE(175);
      if (lookahead == '-') ADVANCE(213);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == 'a') ADVANCE(292);
      if (lookahead == 'n') ADVANCE(276);
      if (lookahead == 's') ADVANCE(279);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '"') ADVANCE(235);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '%') ADVANCE(156);
      if (lookahead == '(') ADVANCE(175);
      if (lookahead == '-') ADVANCE(213);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '[') ADVANCE(201);
      if (lookahead == 'c') ADVANCE(277);
      if (lookahead == 'n') ADVANCE(276);
      if (lookahead == '{') ADVANCE(163);
      if (lookahead == '}') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '"') ADVANCE(235);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '%') ADVANCE(159);
      if (lookahead == '(') ADVANCE(175);
      if (lookahead == '-') ADVANCE(213);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '[') ADVANCE(201);
      if (lookahead == 'c') ADVANCE(277);
      if (lookahead == 'n') ADVANCE(276);
      if (lookahead == '{') ADVANCE(163);
      if (lookahead == '}') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '"') ADVANCE(235);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '%') ADVANCE(156);
      if (lookahead == '(') ADVANCE(175);
      if (lookahead == ')') ADVANCE(176);
      if (lookahead == '-') ADVANCE(213);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '[') ADVANCE(201);
      if (lookahead == '{') ADVANCE(163);
      if (lookahead == '}') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '"') ADVANCE(235);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '%') ADVANCE(159);
      if (lookahead == '(') ADVANCE(175);
      if (lookahead == ')') ADVANCE(176);
      if (lookahead == '-') ADVANCE(213);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '[') ADVANCE(201);
      if (lookahead == '{') ADVANCE(163);
      if (lookahead == '}') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '"') ADVANCE(235);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '%') ADVANCE(156);
      if (lookahead == '(') ADVANCE(175);
      if (lookahead == '-') ADVANCE(213);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == 'n') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(22)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '"') ADVANCE(235);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '%') ADVANCE(159);
      if (lookahead == '(') ADVANCE(175);
      if (lookahead == '-') ADVANCE(213);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == 'n') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(22)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '%') ADVANCE(156);
      if (lookahead == '(') ADVANCE(175);
      if (lookahead == '-') ADVANCE(213);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == 'b') ADVANCE(264);
      if (lookahead == 'f') ADVANCE(298);
      if (lookahead == 'i') ADVANCE(275);
      if (lookahead == 'n') ADVANCE(260);
      if (lookahead == 's') ADVANCE(297);
      if (lookahead == '{') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '%') ADVANCE(159);
      if (lookahead == '(') ADVANCE(175);
      if (lookahead == '-') ADVANCE(213);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == 'b') ADVANCE(264);
      if (lookahead == 'f') ADVANCE(298);
      if (lookahead == 'i') ADVANCE(275);
      if (lookahead == 'n') ADVANCE(260);
      if (lookahead == 's') ADVANCE(297);
      if (lookahead == '{') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(27);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '%') ADVANCE(156);
      if (lookahead == ')') ADVANCE(176);
      if (lookahead == '+') ADVANCE(229);
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '.') ADVANCE(171);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == 'a') ADVANCE(274);
      if (lookahead == '{') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(26)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(27);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '%') ADVANCE(159);
      if (lookahead == ')') ADVANCE(176);
      if (lookahead == '+') ADVANCE(229);
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '.') ADVANCE(171);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == 'a') ADVANCE(274);
      if (lookahead == '{') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(26)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 28:
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == '(') ADVANCE(175);
      if (lookahead == '*') ADVANCE(246);
      if (lookahead == '+') ADVANCE(229);
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '-') ADVANCE(213);
      if (lookahead == '.') ADVANCE(171);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == ':') ADVANCE(205);
      if (lookahead == ';') ADVANCE(206);
      if (lookahead == '<') ADVANCE(250);
      if (lookahead == '=') ADVANCE(169);
      if (lookahead == '>') ADVANCE(252);
      if (lookahead == '@') ADVANCE(211);
      if (lookahead == '[') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(150);
      if (lookahead == 'i') ADVANCE(99);
      if (lookahead == 'm') ADVANCE(45);
      if (lookahead == '{') ADVANCE(163);
      if (lookahead == '}') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '%') ADVANCE(156);
      if (lookahead == ')') ADVANCE(176);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '%') ADVANCE(156);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == 's') ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(157);
      if (lookahead == 'S') ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 32:
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '/') ADVANCE(318);
      END_STATE();
    case 33:
      if (lookahead == '*') ADVANCE(36);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == ':') ADVANCE(40);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(230);
      END_STATE();
    case 36:
      if (lookahead == '/') ADVANCE(317);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 37:
      if (lookahead == '0') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(38);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(234);
      END_STATE();
    case 38:
      if (lookahead == '0') ADVANCE(38);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(234);
      END_STATE();
    case 39:
      if (lookahead == '=') ADVANCE(249);
      END_STATE();
    case 40:
      if (lookahead == '=') ADVANCE(212);
      END_STATE();
    case 41:
      if (lookahead == '>') ADVANCE(227);
      END_STATE();
    case 42:
      if (lookahead == '>') ADVANCE(228);
      END_STATE();
    case 43:
      if (lookahead == ']') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 44:
      if (lookahead == ']') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(122);
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(86);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead == 'i') ADVANCE(135);
      if (lookahead == 'j') ADVANCE(217);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(75);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(69);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(149);
      if (lookahead == 'o') ADVANCE(244);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 72:
      if (lookahead == 'f') ADVANCE(174);
      END_STATE();
    case 73:
      if (lookahead == 'f') ADVANCE(110);
      END_STATE();
    case 74:
      if (lookahead == 'f') ADVANCE(111);
      END_STATE();
    case 75:
      if (lookahead == 'h') ADVANCE(78);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 82:
      if (lookahead == 'j') ADVANCE(219);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(192);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(193);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(153);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 88:
      if (lookahead == 'm') ADVANCE(195);
      END_STATE();
    case 89:
      if (lookahead == 'm') ADVANCE(194);
      END_STATE();
    case 90:
      if (lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 91:
      if (lookahead == 'm') ADVANCE(52);
      END_STATE();
    case 92:
      if (lookahead == 'm') ADVANCE(126);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(151);
      if (lookahead == 't') ADVANCE(208);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(129);
      if (lookahead == 'x') ADVANCE(141);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(55);
      if (lookahead == 's') ADVANCE(183);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(223);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(200);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead == 's') ADVANCE(183);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(90);
      if (lookahead == 'u') ADVANCE(115);
      if (lookahead == 'y') ADVANCE(132);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 112:
      if (lookahead == 'p') ADVANCE(71);
      END_STATE();
    case 113:
      if (lookahead == 'q') ADVANCE(145);
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(221);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 123:
      if (lookahead == 's') ADVANCE(177);
      END_STATE();
    case 124:
      if (lookahead == 's') ADVANCE(191);
      END_STATE();
    case 125:
      if (lookahead == 's') ADVANCE(197);
      END_STATE();
    case 126:
      if (lookahead == 's') ADVANCE(198);
      END_STATE();
    case 127:
      if (lookahead == 's') ADVANCE(190);
      END_STATE();
    case 128:
      if (lookahead == 's') ADVANCE(179);
      END_STATE();
    case 129:
      if (lookahead == 's') ADVANCE(146);
      END_STATE();
    case 130:
      if (lookahead == 's') ADVANCE(137);
      END_STATE();
    case 131:
      if (lookahead == 's') ADVANCE(138);
      END_STATE();
    case 132:
      if (lookahead == 's') ADVANCE(142);
      END_STATE();
    case 133:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(186);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 144:
      if (lookahead == 'u') ADVANCE(96);
      END_STATE();
    case 145:
      if (lookahead == 'u') ADVANCE(81);
      END_STATE();
    case 146:
      if (lookahead == 'u') ADVANCE(119);
      END_STATE();
    case 147:
      if (lookahead == 'u') ADVANCE(120);
      END_STATE();
    case 148:
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 149:
      if (lookahead == 'w') ADVANCE(215);
      if (lookahead == 'x') ADVANCE(136);
      END_STATE();
    case 150:
      if (lookahead == 'x') ADVANCE(141);
      END_STATE();
    case 151:
      if (lookahead == 'y') ADVANCE(225);
      END_STATE();
    case 152:
      if (lookahead == 'y') ADVANCE(168);
      END_STATE();
    case 153:
      if (lookahead == 'y') ADVANCE(166);
      END_STATE();
    case 154:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(233);
      END_STATE();
    case 155:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 156:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 157:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 158:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 159:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 160:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(241);
      END_STATE();
    case 161:
      if (eof) ADVANCE(162);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == '(') ADVANCE(175);
      if (lookahead == ')') ADVANCE(176);
      if (lookahead == '*') ADVANCE(246);
      if (lookahead == '+') ADVANCE(229);
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '-') ADVANCE(213);
      if (lookahead == '.') ADVANCE(171);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == ';') ADVANCE(206);
      if (lookahead == '=') ADVANCE(169);
      if (lookahead == '[') ADVANCE(201);
      if (lookahead == ']') ADVANCE(202);
      if (lookahead == 'a') ADVANCE(139);
      if (lookahead == 'd') ADVANCE(109);
      if (lookahead == 'e') ADVANCE(150);
      if (lookahead == 'i') ADVANCE(99);
      if (lookahead == 'm') ADVANCE(46);
      if (lookahead == 'p') ADVANCE(47);
      if (lookahead == 't') ADVANCE(114);
      if (lookahead == '{') ADVANCE(163);
      if (lookahead == '|') ADVANCE(243);
      if (lookahead == '}') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(161)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_boot);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_initially);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_next);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_property);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(228);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(230);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_machine);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_ensures);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_ensures);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '.') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_requires);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_requires);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '.') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_model_contract_token1);
      if (lookahead == 'd') ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_some);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_some);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '.') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_atmost);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_atmost);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '.') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_atleast);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_atleast);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '.') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_includes);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_model);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_partial);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_transform);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_system);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_system);
      if (lookahead == '\'') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_returns);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_conforms);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_conforms);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '.') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_domain);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(210);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(209);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_at);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_at);
      if (lookahead == 'l') ADVANCE(65);
      if (lookahead == 'm') ADVANCE(108);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead == '=') ADVANCE(212);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_EQ);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(227);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '.') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_inj);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_inj);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '.') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_bij);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_bij);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '.') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_sur);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_sur);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '.') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_fun);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_fun);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '.') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_any);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_any);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '.') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_digits);
      if (lookahead == '.') ADVANCE(154);
      if (lookahead == '/') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_digits);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_real);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_frac);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(241);
      if (lookahead == '"') ADVANCE(318);
      if (lookahead == '\\') ADVANCE(319);
      if (lookahead != 0) ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '*') ADVANCE(238);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '/') ADVANCE(241);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(237);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(237);
      if (lookahead == '/') ADVANCE(236);
      if (lookahead == '\\') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(241);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(239);
      if (lookahead == '\\') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(241);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '.') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '/') ADVANCE(318);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(251);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(253);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__bareid);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__bareid);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '.') ADVANCE(31);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__bareid);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == 'a') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__bareid);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == 'e') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__bareid);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == 'e') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__bareid);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == 'e') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__bareid);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == 'e') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__bareid);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == 'e') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__bareid);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == 'e') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__bareid);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == 'f') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__bareid);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__bareid);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__bareid);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == 'j') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__bareid);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == 'j') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__bareid);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == 'l') ADVANCE(258);
      if (lookahead == 'm') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__bareid);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == 'm') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__bareid);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == 'm') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__bareid);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == 'n') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__bareid);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == 'n') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__bareid);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == 'n') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__bareid);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == 'n') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__bareid);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == 'n') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__bareid);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__bareid);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__bareid);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__bareid);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__bareid);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__bareid);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == 'q') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__bareid);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == 'r') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__bareid);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == 'r') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__bareid);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == 'r') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__bareid);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == 'r') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__bareid);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == 's') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__bareid);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == 's') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__bareid);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == 's') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__bareid);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == 's') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__bareid);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == 's') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__bareid);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == 's') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__bareid);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == 't') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__bareid);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == 't') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__bareid);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == 't') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__bareid);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == 'u') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__bareid);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == 'u') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__bareid);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == 'u') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__bareid);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == 'u') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__bareid);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == 'w') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__bareid);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == 'y') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__bareid);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '.') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__bareid);
      if (lookahead == '\'') ADVANCE(304);
      if (lookahead == ']') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(302);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__bareid);
      if (lookahead == '\'') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(302);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__bareid);
      if (lookahead == '\'') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__bareid);
      if (lookahead == '\'') ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__bareid);
      if (lookahead == '\'') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__bareid);
      if (lookahead == '\'') ADVANCE(305);
      if (lookahead == 'm') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__bareid);
      if (lookahead == '\'') ADVANCE(305);
      if (lookahead == 's') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__bareid);
      if (lookahead == '\'') ADVANCE(305);
      if (lookahead == 't') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__bareid);
      if (lookahead == '\'') ADVANCE(305);
      if (lookahead == 'y') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__bareid);
      if (lookahead == '\'') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__bareid);
      if (lookahead == '\'') ADVANCE(312);
      if (lookahead == '.') ADVANCE(158);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__bareid);
      if (lookahead == '\'') ADVANCE(312);
      if (lookahead == '.') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__qualid);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__qualid);
      if (lookahead == '\'') ADVANCE(315);
      if (lookahead == '.') ADVANCE(158);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__qualid);
      if (lookahead == '\'') ADVANCE(315);
      if (lookahead == '.') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(318);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(236);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 161},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 12},
  [6] = {.lex_state = 12},
  [7] = {.lex_state = 12},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 14},
  [13] = {.lex_state = 12},
  [14] = {.lex_state = 16},
  [15] = {.lex_state = 18},
  [16] = {.lex_state = 161},
  [17] = {.lex_state = 161},
  [18] = {.lex_state = 161},
  [19] = {.lex_state = 161},
  [20] = {.lex_state = 161},
  [21] = {.lex_state = 28},
  [22] = {.lex_state = 20},
  [23] = {.lex_state = 20},
  [24] = {.lex_state = 28},
  [25] = {.lex_state = 20},
  [26] = {.lex_state = 20},
  [27] = {.lex_state = 20},
  [28] = {.lex_state = 22},
  [29] = {.lex_state = 10},
  [30] = {.lex_state = 28},
  [31] = {.lex_state = 22},
  [32] = {.lex_state = 22},
  [33] = {.lex_state = 22},
  [34] = {.lex_state = 20},
  [35] = {.lex_state = 22},
  [36] = {.lex_state = 28},
  [37] = {.lex_state = 28},
  [38] = {.lex_state = 28},
  [39] = {.lex_state = 20},
  [40] = {.lex_state = 20},
  [41] = {.lex_state = 28},
  [42] = {.lex_state = 28},
  [43] = {.lex_state = 22},
  [44] = {.lex_state = 28},
  [45] = {.lex_state = 28},
  [46] = {.lex_state = 20},
  [47] = {.lex_state = 28},
  [48] = {.lex_state = 28},
  [49] = {.lex_state = 161},
  [50] = {.lex_state = 20},
  [51] = {.lex_state = 24},
  [52] = {.lex_state = 24},
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
  [64] = {.lex_state = 10},
  [65] = {.lex_state = 10},
  [66] = {.lex_state = 161},
  [67] = {.lex_state = 161},
  [68] = {.lex_state = 10},
  [69] = {.lex_state = 10},
  [70] = {.lex_state = 161},
  [71] = {.lex_state = 10},
  [72] = {.lex_state = 161},
  [73] = {.lex_state = 10},
  [74] = {.lex_state = 10},
  [75] = {.lex_state = 12},
  [76] = {.lex_state = 12},
  [77] = {.lex_state = 161},
  [78] = {.lex_state = 10},
  [79] = {.lex_state = 161},
  [80] = {.lex_state = 10},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 161},
  [83] = {.lex_state = 10},
  [84] = {.lex_state = 12},
  [85] = {.lex_state = 10},
  [86] = {.lex_state = 10},
  [87] = {.lex_state = 12},
  [88] = {.lex_state = 161},
  [89] = {.lex_state = 161},
  [90] = {.lex_state = 12},
  [91] = {.lex_state = 12},
  [92] = {.lex_state = 10},
  [93] = {.lex_state = 10},
  [94] = {.lex_state = 20},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 161},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 20},
  [99] = {.lex_state = 161},
  [100] = {.lex_state = 161},
  [101] = {.lex_state = 20},
  [102] = {.lex_state = 161},
  [103] = {.lex_state = 161},
  [104] = {.lex_state = 161},
  [105] = {.lex_state = 12},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 161},
  [108] = {.lex_state = 28},
  [109] = {.lex_state = 161},
  [110] = {.lex_state = 26},
  [111] = {.lex_state = 20},
  [112] = {.lex_state = 26},
  [113] = {.lex_state = 26},
  [114] = {.lex_state = 26},
  [115] = {.lex_state = 161},
  [116] = {.lex_state = 20},
  [117] = {.lex_state = 20},
  [118] = {.lex_state = 161},
  [119] = {.lex_state = 20},
  [120] = {.lex_state = 161},
  [121] = {.lex_state = 20},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 20},
  [124] = {.lex_state = 26},
  [125] = {.lex_state = 161},
  [126] = {.lex_state = 161},
  [127] = {.lex_state = 26},
  [128] = {.lex_state = 161},
  [129] = {.lex_state = 161},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 26},
  [132] = {.lex_state = 161},
  [133] = {.lex_state = 161},
  [134] = {.lex_state = 161},
  [135] = {.lex_state = 161},
  [136] = {.lex_state = 26},
  [137] = {.lex_state = 161},
  [138] = {.lex_state = 26},
  [139] = {.lex_state = 161},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 29},
  [143] = {.lex_state = 161},
  [144] = {.lex_state = 161},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 161},
  [147] = {.lex_state = 26},
  [148] = {.lex_state = 26},
  [149] = {.lex_state = 20},
  [150] = {.lex_state = 161},
  [151] = {.lex_state = 161},
  [152] = {.lex_state = 161},
  [153] = {.lex_state = 20},
  [154] = {.lex_state = 26},
  [155] = {.lex_state = 26},
  [156] = {.lex_state = 161},
  [157] = {.lex_state = 161},
  [158] = {.lex_state = 26},
  [159] = {.lex_state = 161},
  [160] = {.lex_state = 161},
  [161] = {.lex_state = 20},
  [162] = {.lex_state = 161},
  [163] = {.lex_state = 161},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 29},
  [167] = {.lex_state = 161},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 161},
  [174] = {.lex_state = 161},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 26},
  [177] = {.lex_state = 20},
  [178] = {.lex_state = 20},
  [179] = {.lex_state = 20},
  [180] = {.lex_state = 20},
  [181] = {.lex_state = 29},
  [182] = {.lex_state = 20},
  [183] = {.lex_state = 20},
  [184] = {.lex_state = 161},
  [185] = {.lex_state = 29},
  [186] = {.lex_state = 161},
  [187] = {.lex_state = 29},
  [188] = {.lex_state = 161},
  [189] = {.lex_state = 29},
  [190] = {.lex_state = 26},
  [191] = {.lex_state = 20},
  [192] = {.lex_state = 29},
  [193] = {.lex_state = 29},
  [194] = {.lex_state = 20},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 26},
  [197] = {.lex_state = 29},
  [198] = {.lex_state = 20},
  [199] = {.lex_state = 29},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 29},
  [203] = {.lex_state = 26},
  [204] = {.lex_state = 20},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 29},
  [208] = {.lex_state = 26},
  [209] = {.lex_state = 26},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 20},
  [214] = {.lex_state = 26},
  [215] = {.lex_state = 20},
  [216] = {.lex_state = 161},
  [217] = {.lex_state = 161},
  [218] = {.lex_state = 20},
  [219] = {.lex_state = 161},
  [220] = {.lex_state = 161},
  [221] = {.lex_state = 26},
  [222] = {.lex_state = 26},
  [223] = {.lex_state = 161},
  [224] = {.lex_state = 20},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 29},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 26},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 20},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 161},
  [241] = {.lex_state = 10},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 29},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 161},
  [248] = {.lex_state = 161},
  [249] = {.lex_state = 10},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 30},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 161},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 161},
  [262] = {.lex_state = 161},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 161},
  [270] = {.lex_state = 161},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 29},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 161},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 161},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 161},
  [283] = {.lex_state = 29},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 240},
  [289] = {.lex_state = 161},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 161},
  [292] = {.lex_state = 161},
  [293] = {.lex_state = 161},
  [294] = {.lex_state = 161},
  [295] = {.lex_state = 29},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 161},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 161},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 161},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 161},
  [310] = {.lex_state = 161},
  [311] = {.lex_state = 161},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 161},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 161},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 29},
  [322] = {.lex_state = 29},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 29},
  [325] = {.lex_state = 161},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 10},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 29},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 161},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 161},
  [345] = {.lex_state = 161},
  [346] = {.lex_state = 161},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 161},
  [350] = {.lex_state = 161},
  [351] = {.lex_state = 240},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 29},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 161},
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
    [sym_program] = STATE(333),
    [sym_module] = STATE(17),
    [sym_machine] = STATE(157),
    [sym_machine_sig_config] = STATE(331),
    [sym_machine_sig] = STATE(206),
    [sym_model] = STATE(157),
    [sym_model_sig_config] = STATE(330),
    [sym_model_sig] = STATE(229),
    [sym_model_intro] = STATE(200),
    [sym_tsystem] = STATE(157),
    [sym_transform] = STATE(157),
    [sym_domain] = STATE(157),
    [sym_domain_sig_config] = STATE(327),
    [sym_domain_sig] = STATE(230),
    [sym_config] = STATE(19),
    [aux_sym_program_repeat1] = STATE(17),
    [aux_sym_machine_sig_config_repeat1] = STATE(206),
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
      sym__bareid,
    ACTIONS(39), 1,
      sym__qualid,
    STATE(11), 1,
      sym_sentence_config,
    STATE(62), 1,
      sym_unop,
    STATE(65), 1,
      sym_trans_sentence,
    STATE(70), 1,
      sym_string,
    STATE(72), 1,
      sym_id,
    STATE(77), 1,
      sym_atom,
    STATE(79), 1,
      sym_constant,
    STATE(88), 1,
      sym_func_term,
    STATE(133), 1,
      sym_func_or_compr,
    STATE(150), 1,
      sym_compr,
    STATE(254), 1,
      sym_func_term_list,
    STATE(276), 1,
      sym_trans_body,
    ACTIONS(25), 2,
      anon_sym_ensures,
      anon_sym_requires,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    STATE(3), 2,
      sym_trans_sentence_config,
      aux_sym_trans_body_repeat1,
    STATE(64), 2,
      sym_type_decl,
      sym_rule,
  [83] = 25,
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
      sym__bareid,
    ACTIONS(39), 1,
      sym__qualid,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(11), 1,
      sym_sentence_config,
    STATE(62), 1,
      sym_unop,
    STATE(65), 1,
      sym_trans_sentence,
    STATE(70), 1,
      sym_string,
    STATE(72), 1,
      sym_id,
    STATE(77), 1,
      sym_atom,
    STATE(79), 1,
      sym_constant,
    STATE(88), 1,
      sym_func_term,
    STATE(133), 1,
      sym_func_or_compr,
    STATE(150), 1,
      sym_compr,
    STATE(254), 1,
      sym_func_term_list,
    ACTIONS(25), 2,
      anon_sym_ensures,
      anon_sym_requires,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    STATE(4), 2,
      sym_trans_sentence_config,
      aux_sym_trans_body_repeat1,
    STATE(64), 2,
      sym_type_decl,
      sym_rule,
  [163] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(46), 1,
      anon_sym_RBRACE,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      anon_sym_LBRACK,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(60), 1,
      sym_digits,
    ACTIONS(66), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      sym__bareid,
    ACTIONS(72), 1,
      sym__qualid,
    STATE(11), 1,
      sym_sentence_config,
    STATE(62), 1,
      sym_unop,
    STATE(65), 1,
      sym_trans_sentence,
    STATE(70), 1,
      sym_string,
    STATE(72), 1,
      sym_id,
    STATE(77), 1,
      sym_atom,
    STATE(79), 1,
      sym_constant,
    STATE(88), 1,
      sym_func_term,
    STATE(133), 1,
      sym_func_or_compr,
    STATE(150), 1,
      sym_compr,
    STATE(254), 1,
      sym_func_term_list,
    ACTIONS(51), 2,
      anon_sym_ensures,
      anon_sym_requires,
    ACTIONS(63), 2,
      sym_real,
      sym_frac,
    STATE(4), 2,
      sym_trans_sentence_config,
      aux_sym_trans_body_repeat1,
    STATE(64), 2,
      sym_type_decl,
      sym_rule,
  [243] = 26,
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
      sym__qualid,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    ACTIONS(77), 1,
      anon_sym_conforms,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      sym__bareid,
    STATE(13), 1,
      sym_sentence_config,
    STATE(62), 1,
      sym_unop,
    STATE(70), 1,
      sym_string,
    STATE(72), 1,
      sym_id,
    STATE(77), 1,
      sym_atom,
    STATE(79), 1,
      sym_constant,
    STATE(88), 1,
      sym_func_term,
    STATE(91), 1,
      sym_dom_sentence,
    STATE(133), 1,
      sym_func_or_compr,
    STATE(150), 1,
      sym_compr,
    STATE(248), 1,
      sym_func_term_list,
    STATE(305), 1,
      sym_dom_sentences,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    STATE(6), 2,
      sym_dom_sentence_config,
      aux_sym_dom_sentences_repeat1,
    STATE(90), 2,
      sym_type_decl,
      sym_rule,
  [325] = 25,
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
      sym__qualid,
    ACTIONS(77), 1,
      anon_sym_conforms,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      sym__bareid,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      sym_sentence_config,
    STATE(62), 1,
      sym_unop,
    STATE(70), 1,
      sym_string,
    STATE(72), 1,
      sym_id,
    STATE(77), 1,
      sym_atom,
    STATE(79), 1,
      sym_constant,
    STATE(88), 1,
      sym_func_term,
    STATE(91), 1,
      sym_dom_sentence,
    STATE(133), 1,
      sym_func_or_compr,
    STATE(150), 1,
      sym_compr,
    STATE(248), 1,
      sym_func_term_list,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    STATE(7), 2,
      sym_dom_sentence_config,
      aux_sym_dom_sentences_repeat1,
    STATE(90), 2,
      sym_type_decl,
      sym_rule,
  [404] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    ACTIONS(88), 1,
      anon_sym_RBRACE,
    ACTIONS(90), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_conforms,
    ACTIONS(96), 1,
      anon_sym_LBRACK,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(102), 1,
      sym_digits,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      sym__bareid,
    ACTIONS(114), 1,
      sym__qualid,
    STATE(13), 1,
      sym_sentence_config,
    STATE(62), 1,
      sym_unop,
    STATE(70), 1,
      sym_string,
    STATE(72), 1,
      sym_id,
    STATE(77), 1,
      sym_atom,
    STATE(79), 1,
      sym_constant,
    STATE(88), 1,
      sym_func_term,
    STATE(91), 1,
      sym_dom_sentence,
    STATE(133), 1,
      sym_func_or_compr,
    STATE(150), 1,
      sym_compr,
    STATE(248), 1,
      sym_func_term_list,
    ACTIONS(105), 2,
      sym_real,
      sym_frac,
    STATE(7), 2,
      sym_dom_sentence_config,
      aux_sym_dom_sentences_repeat1,
    STATE(90), 2,
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
      sym__qualid,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    ACTIONS(119), 1,
      anon_sym_ensures,
    ACTIONS(121), 1,
      anon_sym_requires,
    ACTIONS(123), 1,
      sym__bareid,
    STATE(29), 1,
      sym_sentence_config,
    STATE(62), 1,
      sym_unop,
    STATE(70), 1,
      sym_string,
    STATE(72), 1,
      sym_id,
    STATE(77), 1,
      sym_atom,
    STATE(78), 1,
      sym_model_contract,
    STATE(79), 1,
      sym_constant,
    STATE(115), 1,
      sym_func_term,
    STATE(269), 1,
      sym_model_fact,
    STATE(290), 1,
      sym_model_body,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    STATE(10), 2,
      sym_model_sentence,
      aux_sym_model_body_repeat1,
    STATE(80), 2,
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
      sym__bareid,
    ACTIONS(154), 1,
      sym__qualid,
    STATE(29), 1,
      sym_sentence_config,
    STATE(62), 1,
      sym_unop,
    STATE(70), 1,
      sym_string,
    STATE(72), 1,
      sym_id,
    STATE(77), 1,
      sym_atom,
    STATE(78), 1,
      sym_model_contract,
    STATE(79), 1,
      sym_constant,
    STATE(115), 1,
      sym_func_term,
    STATE(269), 1,
      sym_model_fact,
    ACTIONS(145), 2,
      sym_real,
      sym_frac,
    STATE(9), 2,
      sym_model_sentence,
      aux_sym_model_body_repeat1,
    STATE(80), 2,
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
      sym__qualid,
    ACTIONS(119), 1,
      anon_sym_ensures,
    ACTIONS(121), 1,
      anon_sym_requires,
    ACTIONS(123), 1,
      sym__bareid,
    ACTIONS(157), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      sym_sentence_config,
    STATE(62), 1,
      sym_unop,
    STATE(70), 1,
      sym_string,
    STATE(72), 1,
      sym_id,
    STATE(77), 1,
      sym_atom,
    STATE(78), 1,
      sym_model_contract,
    STATE(79), 1,
      sym_constant,
    STATE(115), 1,
      sym_func_term,
    STATE(269), 1,
      sym_model_fact,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    STATE(9), 2,
      sym_model_sentence,
      aux_sym_model_body_repeat1,
    STATE(80), 2,
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
      sym__bareid,
    ACTIONS(39), 1,
      sym__qualid,
    STATE(62), 1,
      sym_unop,
    STATE(68), 1,
      sym_trans_sentence,
    STATE(70), 1,
      sym_string,
    STATE(72), 1,
      sym_id,
    STATE(77), 1,
      sym_atom,
    STATE(79), 1,
      sym_constant,
    STATE(88), 1,
      sym_func_term,
    STATE(133), 1,
      sym_func_or_compr,
    STATE(150), 1,
      sym_compr,
    STATE(254), 1,
      sym_func_term_list,
    ACTIONS(25), 2,
      anon_sym_ensures,
      anon_sym_requires,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    STATE(64), 2,
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
      sym__bareid,
    ACTIONS(175), 1,
      sym__qualid,
    STATE(24), 1,
      sym_func_term,
    STATE(30), 1,
      sym_id,
    STATE(45), 1,
      sym_constant,
    STATE(47), 1,
      sym_string,
    STATE(48), 1,
      sym_atom,
    STATE(53), 1,
      sym_unop,
    STATE(186), 1,
      sym_constraint,
    STATE(217), 1,
      sym_body,
    STATE(345), 1,
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
  [837] = 21,
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
      sym__qualid,
    ACTIONS(77), 1,
      anon_sym_conforms,
    ACTIONS(81), 1,
      sym__bareid,
    STATE(62), 1,
      sym_unop,
    STATE(70), 1,
      sym_string,
    STATE(72), 1,
      sym_id,
    STATE(77), 1,
      sym_atom,
    STATE(79), 1,
      sym_constant,
    STATE(84), 1,
      sym_dom_sentence,
    STATE(88), 1,
      sym_func_term,
    STATE(133), 1,
      sym_func_or_compr,
    STATE(150), 1,
      sym_compr,
    STATE(248), 1,
      sym_func_term_list,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    STATE(90), 2,
      sym_type_decl,
      sym_rule,
  [903] = 20,
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
      sym__bareid,
    ACTIONS(175), 1,
      sym__qualid,
    STATE(24), 1,
      sym_func_term,
    STATE(30), 1,
      sym_id,
    STATE(45), 1,
      sym_constant,
    STATE(47), 1,
      sym_string,
    STATE(48), 1,
      sym_atom,
    STATE(53), 1,
      sym_unop,
    STATE(186), 1,
      sym_constraint,
    STATE(217), 1,
      sym_body,
    STATE(299), 1,
      sym_card_spec,
    STATE(307), 1,
      sym_body_list,
    ACTIONS(167), 2,
      sym_real,
      sym_frac,
    ACTIONS(177), 3,
      anon_sym_some,
      anon_sym_atmost,
      anon_sym_atleast,
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
      sym__bareid,
    ACTIONS(175), 1,
      sym__qualid,
    STATE(24), 1,
      sym_func_term,
    STATE(30), 1,
      sym_id,
    STATE(45), 1,
      sym_constant,
    STATE(47), 1,
      sym_string,
    STATE(48), 1,
      sym_atom,
    STATE(53), 1,
      sym_unop,
    STATE(186), 1,
      sym_constraint,
    STATE(217), 1,
      sym_body,
    STATE(350), 1,
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
    STATE(200), 1,
      sym_model_intro,
    STATE(229), 1,
      sym_model_sig,
    STATE(230), 1,
      sym_domain_sig,
    STATE(327), 1,
      sym_domain_sig_config,
    STATE(330), 1,
      sym_model_sig_config,
    STATE(331), 1,
      sym_machine_sig_config,
    STATE(16), 2,
      sym_module,
      aux_sym_program_repeat1,
    STATE(206), 2,
      sym_machine_sig,
      aux_sym_machine_sig_config_repeat1,
    STATE(157), 5,
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
    STATE(200), 1,
      sym_model_intro,
    STATE(229), 1,
      sym_model_sig,
    STATE(230), 1,
      sym_domain_sig,
    STATE(327), 1,
      sym_domain_sig_config,
    STATE(330), 1,
      sym_model_sig_config,
    STATE(331), 1,
      sym_machine_sig_config,
    STATE(16), 2,
      sym_module,
      aux_sym_program_repeat1,
    STATE(206), 2,
      sym_machine_sig,
      aux_sym_machine_sig_config_repeat1,
    STATE(157), 5,
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
    STATE(200), 1,
      sym_model_intro,
    STATE(229), 1,
      sym_model_sig,
    STATE(230), 1,
      sym_domain_sig,
    STATE(327), 1,
      sym_domain_sig_config,
    STATE(330), 1,
      sym_model_sig_config,
    STATE(331), 1,
      sym_machine_sig_config,
    STATE(16), 2,
      sym_module,
      aux_sym_program_repeat1,
    STATE(206), 2,
      sym_machine_sig,
      aux_sym_machine_sig_config_repeat1,
    STATE(157), 5,
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
    ACTIONS(196), 1,
      ts_builtin_sym_end,
    STATE(200), 1,
      sym_model_intro,
    STATE(229), 1,
      sym_model_sig,
    STATE(230), 1,
      sym_domain_sig,
    STATE(327), 1,
      sym_domain_sig_config,
    STATE(330), 1,
      sym_model_sig_config,
    STATE(331), 1,
      sym_machine_sig_config,
    STATE(18), 2,
      sym_module,
      aux_sym_program_repeat1,
    STATE(206), 2,
      sym_machine_sig,
      aux_sym_machine_sig_config_repeat1,
    STATE(157), 5,
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
  [1278] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(204), 15,
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
  [1304] = 18,
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
      sym__qualid,
    ACTIONS(208), 1,
      sym__bareid,
    STATE(62), 1,
      sym_unop,
    STATE(70), 1,
      sym_string,
    STATE(72), 1,
      sym_id,
    STATE(77), 1,
      sym_atom,
    STATE(79), 1,
      sym_constant,
    STATE(88), 1,
      sym_func_term,
    STATE(133), 1,
      sym_func_or_compr,
    STATE(150), 1,
      sym_compr,
    STATE(343), 1,
      sym_func_term_list,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [1360] = 18,
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
      sym__qualid,
    ACTIONS(123), 1,
      sym__bareid,
    ACTIONS(210), 1,
      anon_sym_LBRACK,
    STATE(50), 1,
      sym_sentence_config,
    STATE(62), 1,
      sym_unop,
    STATE(70), 1,
      sym_string,
    STATE(72), 1,
      sym_id,
    STATE(74), 1,
      sym_model_fact_list,
    STATE(77), 1,
      sym_atom,
    STATE(79), 1,
      sym_constant,
    STATE(115), 1,
      sym_func_term,
    STATE(269), 1,
      sym_model_fact,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [1416] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_SLASH,
    STATE(55), 1,
      sym_relop,
    STATE(56), 1,
      sym_binop,
    ACTIONS(220), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(212), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(216), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(214), 5,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1452] = 18,
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
      sym__qualid,
    ACTIONS(123), 1,
      sym__bareid,
    ACTIONS(210), 1,
      anon_sym_LBRACK,
    STATE(50), 1,
      sym_sentence_config,
    STATE(62), 1,
      sym_unop,
    STATE(70), 1,
      sym_string,
    STATE(72), 1,
      sym_id,
    STATE(77), 1,
      sym_atom,
    STATE(79), 1,
      sym_constant,
    STATE(92), 1,
      sym_model_fact_list,
    STATE(115), 1,
      sym_func_term,
    STATE(269), 1,
      sym_model_fact,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [1508] = 18,
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
      sym__qualid,
    ACTIONS(208), 1,
      sym__bareid,
    STATE(62), 1,
      sym_unop,
    STATE(70), 1,
      sym_string,
    STATE(72), 1,
      sym_id,
    STATE(77), 1,
      sym_atom,
    STATE(79), 1,
      sym_constant,
    STATE(88), 1,
      sym_func_term,
    STATE(133), 1,
      sym_func_or_compr,
    STATE(150), 1,
      sym_compr,
    STATE(235), 1,
      sym_func_term_list,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [1564] = 18,
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
      sym__qualid,
    ACTIONS(208), 1,
      sym__bareid,
    STATE(62), 1,
      sym_unop,
    STATE(70), 1,
      sym_string,
    STATE(72), 1,
      sym_id,
    STATE(77), 1,
      sym_atom,
    STATE(79), 1,
      sym_constant,
    STATE(88), 1,
      sym_func_term,
    STATE(133), 1,
      sym_func_or_compr,
    STATE(150), 1,
      sym_compr,
    STATE(317), 1,
      sym_func_term_list,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [1620] = 18,
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
      sym__bareid,
    ACTIONS(175), 1,
      sym__qualid,
    STATE(24), 1,
      sym_func_term,
    STATE(30), 1,
      sym_id,
    STATE(45), 1,
      sym_constant,
    STATE(47), 1,
      sym_string,
    STATE(48), 1,
      sym_atom,
    STATE(53), 1,
      sym_unop,
    STATE(186), 1,
      sym_constraint,
    STATE(217), 1,
      sym_body,
    STATE(291), 1,
      sym_body_list,
    ACTIONS(167), 2,
      sym_real,
      sym_frac,
  [1676] = 18,
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
      sym__qualid,
    ACTIONS(119), 1,
      anon_sym_ensures,
    ACTIONS(121), 1,
      anon_sym_requires,
    ACTIONS(123), 1,
      sym__bareid,
    STATE(62), 1,
      sym_unop,
    STATE(70), 1,
      sym_string,
    STATE(72), 1,
      sym_id,
    STATE(77), 1,
      sym_atom,
    STATE(79), 1,
      sym_constant,
    STATE(83), 1,
      sym_model_contract,
    STATE(115), 1,
      sym_func_term,
    STATE(247), 1,
      sym_model_fact,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [1732] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(226), 1,
      anon_sym_is,
    ACTIONS(228), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(222), 13,
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
  [1762] = 18,
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
      sym__bareid,
    ACTIONS(175), 1,
      sym__qualid,
    STATE(24), 1,
      sym_func_term,
    STATE(30), 1,
      sym_id,
    STATE(45), 1,
      sym_constant,
    STATE(47), 1,
      sym_string,
    STATE(48), 1,
      sym_atom,
    STATE(53), 1,
      sym_unop,
    STATE(186), 1,
      sym_constraint,
    STATE(217), 1,
      sym_body,
    STATE(307), 1,
      sym_body_list,
    ACTIONS(167), 2,
      sym_real,
      sym_frac,
  [1818] = 18,
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
      sym__bareid,
    ACTIONS(175), 1,
      sym__qualid,
    STATE(24), 1,
      sym_func_term,
    STATE(30), 1,
      sym_id,
    STATE(45), 1,
      sym_constant,
    STATE(47), 1,
      sym_string,
    STATE(48), 1,
      sym_atom,
    STATE(53), 1,
      sym_unop,
    STATE(186), 1,
      sym_constraint,
    STATE(217), 1,
      sym_body,
    STATE(328), 1,
      sym_body_list,
    ACTIONS(167), 2,
      sym_real,
      sym_frac,
  [1874] = 18,
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
      sym__bareid,
    ACTIONS(175), 1,
      sym__qualid,
    STATE(24), 1,
      sym_func_term,
    STATE(30), 1,
      sym_id,
    STATE(45), 1,
      sym_constant,
    STATE(47), 1,
      sym_string,
    STATE(48), 1,
      sym_atom,
    STATE(53), 1,
      sym_unop,
    STATE(186), 1,
      sym_constraint,
    STATE(217), 1,
      sym_body,
    STATE(292), 1,
      sym_body_list,
    ACTIONS(167), 2,
      sym_real,
      sym_frac,
  [1930] = 17,
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
      sym__qualid,
    ACTIONS(230), 1,
      anon_sym_RPAREN,
    ACTIONS(232), 1,
      sym__bareid,
    STATE(62), 1,
      sym_unop,
    STATE(70), 1,
      sym_string,
    STATE(72), 1,
      sym_id,
    STATE(77), 1,
      sym_atom,
    STATE(79), 1,
      sym_constant,
    STATE(120), 1,
      sym_func_term,
    STATE(273), 1,
      sym_mod_app_arg,
    STATE(300), 1,
      sym_mod_arg_list,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [1983] = 17,
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
      sym__bareid,
    ACTIONS(175), 1,
      sym__qualid,
    STATE(24), 1,
      sym_func_term,
    STATE(30), 1,
      sym_id,
    STATE(45), 1,
      sym_constant,
    STATE(47), 1,
      sym_string,
    STATE(48), 1,
      sym_atom,
    STATE(53), 1,
      sym_unop,
    STATE(186), 1,
      sym_constraint,
    STATE(240), 1,
      sym_body,
    ACTIONS(167), 2,
      sym_real,
      sym_frac,
  [2036] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(56), 1,
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
  [2063] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(228), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(222), 13,
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
  [2090] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_SLASH,
    STATE(56), 1,
      sym_binop,
    ACTIONS(240), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(216), 4,
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
  [2121] = 17,
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
      sym__qualid,
    ACTIONS(208), 1,
      sym__bareid,
    STATE(62), 1,
      sym_unop,
    STATE(70), 1,
      sym_string,
    STATE(72), 1,
      sym_id,
    STATE(77), 1,
      sym_atom,
    STATE(79), 1,
      sym_constant,
    STATE(88), 1,
      sym_func_term,
    STATE(146), 1,
      sym_func_or_compr,
    STATE(150), 1,
      sym_compr,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
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
      sym__qualid,
    ACTIONS(208), 1,
      sym__bareid,
    STATE(62), 1,
      sym_unop,
    STATE(70), 1,
      sym_string,
    STATE(77), 1,
      sym_atom,
    STATE(79), 1,
      sym_constant,
    STATE(96), 1,
      sym_id,
    STATE(104), 1,
      sym_func_term,
    STATE(223), 1,
      sym_compr,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2224] = 3,
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
  [2248] = 3,
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
      sym__bareid,
    ACTIONS(175), 1,
      sym__qualid,
    STATE(24), 1,
      sym_func_term,
    STATE(30), 1,
      sym_id,
    STATE(45), 1,
      sym_constant,
    STATE(47), 1,
      sym_string,
    STATE(48), 1,
      sym_atom,
    STATE(53), 1,
      sym_unop,
    STATE(219), 1,
      sym_constraint,
    ACTIONS(167), 2,
      sym_real,
      sym_frac,
  [2322] = 3,
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
  [2346] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(222), 13,
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
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      sym_digits,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym__qualid,
    ACTIONS(232), 1,
      sym__bareid,
    STATE(62), 1,
      sym_unop,
    STATE(70), 1,
      sym_string,
    STATE(72), 1,
      sym_id,
    STATE(77), 1,
      sym_atom,
    STATE(79), 1,
      sym_constant,
    STATE(120), 1,
      sym_func_term,
    STATE(273), 1,
      sym_mod_app_arg,
    STATE(318), 1,
      sym_mod_arg_list,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2420] = 3,
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
  [2468] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_SLASH,
    ACTIONS(204), 14,
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
  [2491] = 15,
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
      sym__qualid,
    ACTIONS(123), 1,
      sym__bareid,
    STATE(62), 1,
      sym_unop,
    STATE(70), 1,
      sym_string,
    STATE(72), 1,
      sym_id,
    STATE(77), 1,
      sym_atom,
    STATE(79), 1,
      sym_constant,
    STATE(115), 1,
      sym_func_term,
    STATE(247), 1,
      sym_model_fact,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2538] = 13,
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
      sym__bareid,
    ACTIONS(266), 1,
      sym__qualid,
    STATE(127), 1,
      sym_unncmp,
    STATE(147), 1,
      sym_typeid,
    STATE(277), 1,
      sym_type_decl_body,
    STATE(332), 1,
      sym_fun_decl,
    STATE(339), 1,
      sym_unnbody,
    ACTIONS(262), 4,
      anon_sym_inj,
      anon_sym_bij,
      anon_sym_sur,
      anon_sym_fun,
  [2581] = 13,
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
      sym__bareid,
    ACTIONS(266), 1,
      sym__qualid,
    STATE(127), 1,
      sym_unncmp,
    STATE(147), 1,
      sym_typeid,
    STATE(332), 1,
      sym_fun_decl,
    STATE(339), 1,
      sym_unnbody,
    STATE(344), 1,
      sym_type_decl_body,
    ACTIONS(262), 4,
      anon_sym_inj,
      anon_sym_bij,
      anon_sym_sur,
      anon_sym_fun,
  [2624] = 14,
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
      sym__bareid,
    ACTIONS(175), 1,
      sym__qualid,
    STATE(36), 1,
      sym_func_term,
    STATE(37), 1,
      sym_id,
    STATE(45), 1,
      sym_constant,
    STATE(47), 1,
      sym_string,
    STATE(48), 1,
      sym_atom,
    STATE(53), 1,
      sym_unop,
    ACTIONS(167), 2,
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
      sym__qualid,
    ACTIONS(208), 1,
      sym__bareid,
    STATE(62), 1,
      sym_unop,
    STATE(70), 1,
      sym_string,
    STATE(72), 1,
      sym_id,
    STATE(77), 1,
      sym_atom,
    STATE(79), 1,
      sym_constant,
    STATE(137), 1,
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
      sym__qualid,
    ACTIONS(208), 1,
      sym__bareid,
    STATE(62), 1,
      sym_unop,
    STATE(70), 1,
      sym_string,
    STATE(72), 1,
      sym_id,
    STATE(77), 1,
      sym_atom,
    STATE(79), 1,
      sym_constant,
    STATE(103), 1,
      sym_func_term,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2756] = 14,
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
      sym__bareid,
    ACTIONS(175), 1,
      sym__qualid,
    STATE(37), 1,
      sym_id,
    STATE(38), 1,
      sym_func_term,
    STATE(45), 1,
      sym_constant,
    STATE(47), 1,
      sym_string,
    STATE(48), 1,
      sym_atom,
    STATE(53), 1,
      sym_unop,
    ACTIONS(167), 2,
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
      sym__qualid,
    ACTIONS(208), 1,
      sym__bareid,
    STATE(62), 1,
      sym_unop,
    STATE(70), 1,
      sym_string,
    STATE(72), 1,
      sym_id,
    STATE(77), 1,
      sym_atom,
    STATE(79), 1,
      sym_constant,
    STATE(118), 1,
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
      sym__qualid,
    ACTIONS(208), 1,
      sym__bareid,
    STATE(62), 1,
      sym_unop,
    STATE(70), 1,
      sym_string,
    STATE(72), 1,
      sym_id,
    STATE(77), 1,
      sym_atom,
    STATE(79), 1,
      sym_constant,
    STATE(126), 1,
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
      sym__qualid,
    ACTIONS(208), 1,
      sym__bareid,
    STATE(62), 1,
      sym_unop,
    STATE(70), 1,
      sym_string,
    STATE(72), 1,
      sym_id,
    STATE(77), 1,
      sym_atom,
    STATE(79), 1,
      sym_constant,
    STATE(125), 1,
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
      sym__qualid,
    ACTIONS(208), 1,
      sym__bareid,
    STATE(62), 1,
      sym_unop,
    STATE(70), 1,
      sym_string,
    STATE(72), 1,
      sym_id,
    STATE(77), 1,
      sym_atom,
    STATE(79), 1,
      sym_constant,
    STATE(102), 1,
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
      sym__qualid,
    ACTIONS(208), 1,
      sym__bareid,
    STATE(62), 1,
      sym_unop,
    STATE(67), 1,
      sym_func_term,
    STATE(70), 1,
      sym_string,
    STATE(72), 1,
      sym_id,
    STATE(77), 1,
      sym_atom,
    STATE(79), 1,
      sym_constant,
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
      sym__qualid,
    ACTIONS(208), 1,
      sym__bareid,
    STATE(62), 1,
      sym_unop,
    STATE(66), 1,
      sym_func_term,
    STATE(70), 1,
      sym_string,
    STATE(72), 1,
      sym_id,
    STATE(77), 1,
      sym_atom,
    STATE(79), 1,
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
      sym__bareid,
    ACTIONS(268), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym__qualid,
  [3085] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 4,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      sym__bareid,
    ACTIONS(272), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym__qualid,
  [3106] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 4,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      sym__bareid,
    ACTIONS(276), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym__qualid,
  [3127] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_SLASH,
    STATE(61), 1,
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
  [3150] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_SLASH,
    STATE(61), 1,
      sym_binop,
    ACTIONS(216), 4,
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
  [3175] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 4,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      sym__bareid,
    ACTIONS(280), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym__qualid,
  [3196] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 4,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      sym__bareid,
    ACTIONS(284), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym__qualid,
  [3217] = 3,
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
  [3238] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 4,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      sym__bareid,
    ACTIONS(288), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym__qualid,
  [3259] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_SLASH,
    ACTIONS(292), 1,
      anon_sym_LPAREN,
    ACTIONS(222), 11,
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
  [3282] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 4,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      sym__bareid,
    ACTIONS(294), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym__qualid,
  [3302] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 4,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      sym__bareid,
    ACTIONS(298), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym__qualid,
  [3322] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 3,
      anon_sym_conforms,
      sym_digits,
      sym__bareid,
    ACTIONS(268), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym__qualid,
  [3342] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 3,
      anon_sym_conforms,
      sym_digits,
      sym__bareid,
    ACTIONS(288), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym__qualid,
  [3362] = 3,
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
  [3382] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 4,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      sym__bareid,
    ACTIONS(302), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym__qualid,
  [3402] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_SLASH,
    ACTIONS(222), 11,
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
  [3422] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 4,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      sym__bareid,
    ACTIONS(306), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym__qualid,
  [3442] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_RBRACE,
    ACTIONS(312), 1,
      anon_sym_boot,
    ACTIONS(316), 1,
      anon_sym_property,
    ACTIONS(318), 1,
      anon_sym_LBRACK,
    STATE(165), 1,
      sym_sentence_config,
    STATE(168), 1,
      sym_machine_prop,
    STATE(170), 1,
      sym_machine_sentence,
    STATE(284), 1,
      sym_machine_body,
    ACTIONS(314), 2,
      anon_sym_initially,
      anon_sym_next,
    STATE(97), 2,
      sym_machine_sentence_conf,
      aux_sym_machine_body_repeat1,
  [3478] = 3,
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
  [3498] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 4,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      sym__bareid,
    ACTIONS(320), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym__qualid,
  [3518] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 3,
      anon_sym_conforms,
      sym_digits,
      sym__bareid,
    ACTIONS(324), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym__qualid,
  [3538] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 4,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      sym__bareid,
    ACTIONS(328), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym__qualid,
  [3558] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 4,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      sym__bareid,
    ACTIONS(332), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym__qualid,
  [3578] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 3,
      anon_sym_conforms,
      sym_digits,
      sym__bareid,
    ACTIONS(336), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym__qualid,
  [3598] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_SLASH,
    STATE(61), 1,
      sym_binop,
    ACTIONS(216), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(340), 6,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [3622] = 3,
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
  [3642] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 3,
      anon_sym_conforms,
      sym_digits,
      sym__bareid,
    ACTIONS(342), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym__qualid,
  [3662] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 3,
      anon_sym_conforms,
      sym_digits,
      sym__bareid,
    ACTIONS(346), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym__qualid,
  [3682] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 4,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      sym__bareid,
    ACTIONS(350), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym__qualid,
  [3702] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 4,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      sym__bareid,
    ACTIONS(354), 7,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym__qualid,
  [3721] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym__qualid,
    ACTIONS(208), 1,
      sym__bareid,
    ACTIONS(210), 1,
      anon_sym_LBRACK,
    ACTIONS(358), 1,
      anon_sym_RBRACE,
    STATE(179), 1,
      sym_sentence_config,
    STATE(224), 1,
      sym_step,
    STATE(261), 1,
      sym_id,
    STATE(356), 1,
      sym_trans_steps,
    STATE(358), 1,
      sym_step_or_update_lhs,
    STATE(101), 2,
      sym_trans_step_config,
      aux_sym_trans_steps_repeat1,
  [3756] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_RBRACE,
    ACTIONS(362), 1,
      anon_sym_boot,
    ACTIONS(368), 1,
      anon_sym_property,
    ACTIONS(371), 1,
      anon_sym_LBRACK,
    STATE(165), 1,
      sym_sentence_config,
    STATE(168), 1,
      sym_machine_prop,
    STATE(170), 1,
      sym_machine_sentence,
    ACTIONS(365), 2,
      anon_sym_initially,
      anon_sym_next,
    STATE(95), 2,
      sym_machine_sentence_conf,
      aux_sym_machine_body_repeat1,
  [3789] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_SLASH,
    ACTIONS(292), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_is,
    ACTIONS(222), 8,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [3812] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_boot,
    ACTIONS(316), 1,
      anon_sym_property,
    ACTIONS(318), 1,
      anon_sym_LBRACK,
    ACTIONS(376), 1,
      anon_sym_RBRACE,
    STATE(165), 1,
      sym_sentence_config,
    STATE(168), 1,
      sym_machine_prop,
    STATE(170), 1,
      sym_machine_sentence,
    ACTIONS(314), 2,
      anon_sym_initially,
      anon_sym_next,
    STATE(95), 2,
      sym_machine_sentence_conf,
      aux_sym_machine_body_repeat1,
  [3845] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_RBRACE,
    ACTIONS(380), 1,
      anon_sym_LBRACK,
    ACTIONS(383), 1,
      sym__bareid,
    ACTIONS(386), 1,
      sym__qualid,
    STATE(179), 1,
      sym_sentence_config,
    STATE(224), 1,
      sym_step,
    STATE(261), 1,
      sym_id,
    STATE(358), 1,
      sym_step_or_update_lhs,
    STATE(98), 2,
      sym_trans_step_config,
      aux_sym_trans_steps_repeat1,
  [3877] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_SLASH,
    ACTIONS(389), 1,
      anon_sym_COLON_COLON_EQ,
    ACTIONS(204), 8,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_COLON_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [3897] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_SLASH,
    ACTIONS(391), 1,
      anon_sym_COLON_COLON_EQ,
    ACTIONS(204), 8,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_COLON_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [3917] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym__qualid,
    ACTIONS(208), 1,
      sym__bareid,
    ACTIONS(210), 1,
      anon_sym_LBRACK,
    ACTIONS(393), 1,
      anon_sym_RBRACE,
    STATE(179), 1,
      sym_sentence_config,
    STATE(224), 1,
      sym_step,
    STATE(261), 1,
      sym_id,
    STATE(358), 1,
      sym_step_or_update_lhs,
    STATE(98), 2,
      sym_trans_step_config,
      aux_sym_trans_steps_repeat1,
  [3949] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_SLASH,
    STATE(61), 1,
      sym_binop,
    ACTIONS(216), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(395), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [3971] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_SLASH,
    STATE(61), 1,
      sym_binop,
    ACTIONS(216), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(397), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [3993] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_SLASH,
    STATE(61), 1,
      sym_binop,
    ACTIONS(216), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(399), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [4015] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 3,
      anon_sym_conforms,
      sym_digits,
      sym__bareid,
    ACTIONS(354), 7,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym__qualid,
  [4033] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_AT,
    ACTIONS(401), 8,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [4050] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_SLASH,
    ACTIONS(405), 1,
      anon_sym_at,
    ACTIONS(204), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4069] = 4,
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
  [4088] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_SLASH,
    ACTIONS(413), 1,
      anon_sym_is,
    ACTIONS(204), 7,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4107] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(266), 1,
      sym__qualid,
    ACTIONS(415), 1,
      anon_sym_any,
    ACTIONS(417), 1,
      sym__bareid,
    STATE(127), 1,
      sym_unncmp,
    STATE(147), 1,
      sym_typeid,
    STATE(176), 1,
      sym_field,
    STATE(203), 1,
      sym_unnbody,
    STATE(313), 1,
      sym_fields,
  [4138] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(419), 1,
      sym_digits,
    ACTIONS(423), 1,
      sym__bareid,
    STATE(244), 1,
      sym_enum_cnst,
    STATE(259), 1,
      sym_string,
    STATE(320), 1,
      sym_enum_list,
    ACTIONS(421), 3,
      sym_real,
      sym_frac,
      sym__qualid,
  [4165] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(266), 1,
      sym__qualid,
    ACTIONS(415), 1,
      anon_sym_any,
    ACTIONS(417), 1,
      sym__bareid,
    STATE(127), 1,
      sym_unncmp,
    STATE(147), 1,
      sym_typeid,
    STATE(176), 1,
      sym_field,
    STATE(203), 1,
      sym_unnbody,
    STATE(316), 1,
      sym_fields,
  [4196] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(266), 1,
      sym__qualid,
    ACTIONS(415), 1,
      anon_sym_any,
    ACTIONS(417), 1,
      sym__bareid,
    STATE(127), 1,
      sym_unncmp,
    STATE(147), 1,
      sym_typeid,
    STATE(176), 1,
      sym_field,
    STATE(203), 1,
      sym_unnbody,
    STATE(296), 1,
      sym_fields,
  [4227] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(266), 1,
      sym__qualid,
    ACTIONS(415), 1,
      anon_sym_any,
    ACTIONS(417), 1,
      sym__bareid,
    STATE(127), 1,
      sym_unncmp,
    STATE(147), 1,
      sym_typeid,
    STATE(176), 1,
      sym_field,
    STATE(203), 1,
      sym_unnbody,
    STATE(234), 1,
      sym_fields,
  [4258] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_SLASH,
    STATE(61), 1,
      sym_binop,
    ACTIONS(425), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
    ACTIONS(216), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4278] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 2,
      sym_digits,
      sym__bareid,
    ACTIONS(427), 6,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym__qualid,
  [4294] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(419), 1,
      sym_digits,
    ACTIONS(423), 1,
      sym__bareid,
    STATE(259), 1,
      sym_string,
    STATE(264), 1,
      sym_enum_cnst,
    ACTIONS(421), 3,
      sym_real,
      sym_frac,
      sym__qualid,
  [4318] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_SLASH,
    STATE(61), 1,
      sym_binop,
    ACTIONS(431), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
    ACTIONS(216), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4338] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 2,
      sym_digits,
      sym__bareid,
    ACTIONS(433), 6,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym__qualid,
  [4354] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_SLASH,
    STATE(61), 1,
      sym_binop,
    ACTIONS(437), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(216), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4374] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 2,
      sym_digits,
      sym__bareid,
    ACTIONS(439), 6,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym__qualid,
  [4390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 8,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [4404] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 2,
      sym_digits,
      sym__bareid,
    ACTIONS(354), 6,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym__qualid,
  [4420] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(266), 1,
      sym__qualid,
    ACTIONS(415), 1,
      anon_sym_any,
    ACTIONS(417), 1,
      sym__bareid,
    STATE(127), 1,
      sym_unncmp,
    STATE(147), 1,
      sym_typeid,
    STATE(203), 1,
      sym_unnbody,
    STATE(222), 1,
      sym_field,
  [4448] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_SLASH,
    ACTIONS(445), 1,
      anon_sym_RPAREN,
    STATE(61), 1,
      sym_binop,
    ACTIONS(216), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4467] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_SLASH,
    ACTIONS(447), 1,
      anon_sym_RPAREN,
    STATE(61), 1,
      sym_binop,
    ACTIONS(216), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4486] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_PLUS,
    STATE(138), 1,
      aux_sym_unnbody_repeat1,
    ACTIONS(449), 5,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [4503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 7,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [4516] = 2,
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
  [4529] = 2,
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
  [4542] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(264), 1,
      sym__bareid,
    ACTIONS(266), 1,
      sym__qualid,
    ACTIONS(459), 1,
      anon_sym_any,
    STATE(127), 1,
      sym_unncmp,
    STATE(147), 1,
      sym_typeid,
    STATE(221), 1,
      sym_unnbody,
  [4567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 7,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [4580] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_COMMA,
    STATE(139), 1,
      aux_sym_func_term_list_repeat1,
    ACTIONS(463), 5,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [4597] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_COMMA,
    STATE(134), 1,
      aux_sym_func_term_list_repeat1,
    ACTIONS(467), 5,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [4614] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [4627] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_PLUS,
    STATE(136), 1,
      aux_sym_unnbody_repeat1,
    ACTIONS(474), 5,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [4644] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_SLASH,
    ACTIONS(479), 1,
      anon_sym_DOT,
    STATE(61), 1,
      sym_binop,
    ACTIONS(216), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4663] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_PLUS,
    STATE(136), 1,
      aux_sym_unnbody_repeat1,
    ACTIONS(481), 5,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [4680] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_COMMA,
    STATE(134), 1,
      aux_sym_func_term_list_repeat1,
    ACTIONS(483), 5,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [4697] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 7,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [4710] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [4722] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym__bareid,
    STATE(275), 1,
      sym_mod_apply,
    STATE(293), 1,
      sym_choice_list,
    STATE(304), 1,
      sym_mod_ref,
    STATE(140), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [4742] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [4754] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [4766] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [4778] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 6,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [4790] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_PLUS,
  [4802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_PLUS,
  [4814] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(264), 1,
      sym__bareid,
    ACTIONS(266), 1,
      sym__qualid,
    STATE(127), 1,
      sym_unncmp,
    STATE(147), 1,
      sym_typeid,
    STATE(209), 1,
      sym_unnbody,
  [4836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 6,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [4848] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [4860] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [4872] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(264), 1,
      sym__bareid,
    ACTIONS(266), 1,
      sym__qualid,
    STATE(127), 1,
      sym_unncmp,
    STATE(147), 1,
      sym_typeid,
    STATE(208), 1,
      sym_unnbody,
  [4894] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_PLUS,
  [4906] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_COLON,
    ACTIONS(499), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_PLUS,
  [4920] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [4932] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [4944] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_PLUS,
  [4956] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [4968] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [4980] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(264), 1,
      sym__bareid,
    ACTIONS(266), 1,
      sym__qualid,
    STATE(127), 1,
      sym_unncmp,
    STATE(147), 1,
      sym_typeid,
    STATE(252), 1,
      sym_unnbody,
  [5002] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [5014] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [5026] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [5038] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_boot,
    ACTIONS(316), 1,
      anon_sym_property,
    STATE(145), 1,
      sym_machine_sentence,
    STATE(168), 1,
      sym_machine_prop,
    ACTIONS(314), 2,
      anon_sym_initially,
      anon_sym_next,
  [5058] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym__bareid,
    STATE(275), 1,
      sym_mod_apply,
    STATE(302), 1,
      sym_choice_list,
    STATE(304), 1,
      sym_mod_ref,
    STATE(140), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [5090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [5102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [5114] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [5126] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [5138] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_digits,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(70), 1,
      sym_string,
    STATE(258), 1,
      sym_constant,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [5158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [5170] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [5182] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_LPAREN,
    STATE(156), 1,
      sym_tsystem_rest,
    STATE(228), 1,
      sym_transform_sig,
    STATE(280), 1,
      sym_trans_sig_in,
    STATE(341), 1,
      sym_transform_sig_config,
  [5201] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym_COMMA,
    STATE(190), 1,
      aux_sym_fields_repeat1,
    ACTIONS(539), 3,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [5216] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym__qualid,
    ACTIONS(208), 1,
      sym__bareid,
    STATE(237), 1,
      sym_setting,
    STATE(282), 1,
      sym_id,
    STATE(347), 1,
      sym_setting_list,
  [5235] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym__qualid,
    ACTIONS(208), 1,
      sym__bareid,
    STATE(164), 1,
      sym_update,
    STATE(261), 1,
      sym_id,
    STATE(311), 1,
      sym_step_or_update_lhs,
  [5254] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym__qualid,
    ACTIONS(208), 1,
      sym__bareid,
    STATE(218), 1,
      sym_step,
    STATE(261), 1,
      sym_id,
    STATE(358), 1,
      sym_step_or_update_lhs,
  [5273] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym__qualid,
    ACTIONS(208), 1,
      sym__bareid,
    STATE(164), 1,
      sym_step,
    STATE(261), 1,
      sym_id,
    STATE(315), 1,
      sym_step_or_update_lhs,
  [5292] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym__bareid,
    STATE(304), 1,
      sym_mod_ref,
    STATE(346), 1,
      sym_mod_apply,
    STATE(140), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5309] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym__qualid,
    ACTIONS(208), 1,
      sym__bareid,
    STATE(237), 1,
      sym_setting,
    STATE(282), 1,
      sym_id,
    STATE(348), 1,
      sym_setting_list,
  [5328] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym__qualid,
    ACTIONS(208), 1,
      sym__bareid,
    STATE(237), 1,
      sym_setting,
    STATE(282), 1,
      sym_id,
    STATE(340), 1,
      sym_setting_list,
  [5347] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_COMMA,
    STATE(184), 1,
      aux_sym_body_repeat1,
    ACTIONS(543), 3,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [5362] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym__bareid,
    STATE(210), 1,
      sym_mod_ref,
    STATE(274), 1,
      sym_mod_refs,
    STATE(140), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5379] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_COMMA,
    STATE(188), 1,
      aux_sym_body_repeat1,
    ACTIONS(548), 3,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [5394] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym__bareid,
    STATE(210), 1,
      sym_mod_ref,
    STATE(265), 1,
      sym_mod_refs,
    STATE(140), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5411] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_COMMA,
    STATE(184), 1,
      aux_sym_body_repeat1,
    ACTIONS(552), 3,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [5426] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_RPAREN,
    ACTIONS(556), 1,
      sym__bareid,
    STATE(250), 1,
      sym_val_or_model_program,
    STATE(253), 1,
      sym_mod_ref_rename,
    STATE(354), 1,
      sym_vom_param_list,
  [5445] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym_COMMA,
    STATE(196), 1,
      aux_sym_fields_repeat1,
    ACTIONS(558), 3,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [5460] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym__qualid,
    ACTIONS(208), 1,
      sym__bareid,
    STATE(237), 1,
      sym_setting,
    STATE(282), 1,
      sym_id,
    STATE(308), 1,
      sym_setting_list,
  [5479] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym__bareid,
    STATE(210), 1,
      sym_mod_ref,
    STATE(255), 1,
      sym_mod_refs,
    STATE(140), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5496] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym__bareid,
    STATE(210), 1,
      sym_mod_ref,
    STATE(239), 1,
      sym_mod_refs,
    STATE(140), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5513] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(264), 1,
      sym__bareid,
    ACTIONS(266), 1,
      sym__qualid,
    STATE(147), 1,
      sym_typeid,
    STATE(154), 1,
      sym_unncmp,
  [5532] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_LPAREN,
    STATE(162), 1,
      sym_transform_rest,
    STATE(228), 1,
      sym_transform_sig,
    STATE(279), 1,
      sym_transform_sig_config,
    STATE(280), 1,
      sym_trans_sig_in,
  [5551] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_COMMA,
    STATE(196), 1,
      aux_sym_fields_repeat1,
    ACTIONS(560), 3,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [5566] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      sym__bareid,
    ACTIONS(565), 1,
      anon_sym_RPAREN,
    STATE(250), 1,
      sym_val_or_model_program,
    STATE(253), 1,
      sym_mod_ref_rename,
    STATE(337), 1,
      sym_vom_param_list,
  [5585] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym__qualid,
    ACTIONS(208), 1,
      sym__bareid,
    STATE(237), 1,
      sym_setting,
    STATE(282), 1,
      sym_id,
    STATE(286), 1,
      sym_setting_list,
  [5604] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym__bareid,
    STATE(304), 1,
      sym_mod_ref,
    STATE(325), 1,
      sym_mod_apply,
    STATE(140), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5621] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
    ACTIONS(569), 2,
      anon_sym_includes,
      anon_sym_extends,
  [5633] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 4,
      anon_sym_LBRACE,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [5643] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      sym__bareid,
    STATE(250), 1,
      sym_val_or_model_program,
    STATE(253), 1,
      sym_mod_ref_rename,
    STATE(355), 1,
      sym_vom_param_list,
  [5659] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [5669] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      sym__bareid,
    ACTIONS(531), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym__qualid,
  [5681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 4,
      anon_sym_LBRACE,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [5691] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_machine,
    ACTIONS(579), 1,
      anon_sym_LBRACE,
    STATE(211), 2,
      sym_machine_sig,
      aux_sym_machine_sig_config_repeat1,
  [5705] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym__bareid,
    STATE(205), 1,
      sym_mod_ref,
    STATE(140), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5719] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [5729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [5739] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_COMMA,
    ACTIONS(585), 3,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LBRACK,
  [5751] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_LBRACE,
    ACTIONS(591), 1,
      anon_sym_machine,
    STATE(211), 2,
      sym_machine_sig,
      aux_sym_machine_sig_config_repeat1,
  [5765] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
    ACTIONS(596), 2,
      anon_sym_includes,
      anon_sym_extends,
  [5777] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym__qualid,
    ACTIONS(208), 1,
      sym__bareid,
    STATE(261), 1,
      sym_id,
    STATE(297), 1,
      sym_step_or_update_lhs,
  [5793] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 2,
      anon_sym_LBRACE,
      sym__qualid,
    ACTIONS(600), 2,
      anon_sym_any,
      sym__bareid,
  [5805] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym__qualid,
    ACTIONS(208), 1,
      sym__bareid,
    STATE(256), 1,
      sym_setting,
    STATE(282), 1,
      sym_id,
  [5821] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_SEMI,
    STATE(220), 1,
      aux_sym_body_list_repeat1,
    ACTIONS(602), 2,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [5835] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_SEMI,
    STATE(216), 1,
      aux_sym_body_list_repeat1,
    ACTIONS(606), 2,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [5849] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      sym__bareid,
    ACTIONS(608), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym__qualid,
  [5861] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5871] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      anon_sym_SEMI,
    STATE(220), 1,
      aux_sym_body_list_repeat1,
    ACTIONS(612), 2,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [5885] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [5895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [5905] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5915] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      sym__bareid,
    ACTIONS(619), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym__qualid,
  [5927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 4,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
  [5937] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym__bareid,
    STATE(201), 1,
      sym_mod_ref,
    STATE(140), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5951] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_RPAREN,
    ACTIONS(625), 1,
      anon_sym_COMMA,
    STATE(227), 1,
      aux_sym_model_param_list_repeat1,
  [5964] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(628), 1,
      anon_sym_LBRACE,
    STATE(336), 1,
      sym_config,
  [5977] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(630), 1,
      anon_sym_LBRACE,
    STATE(281), 1,
      sym_config,
  [5990] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(632), 1,
      anon_sym_LBRACE,
    STATE(278), 1,
      sym_config,
  [6003] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      anon_sym_COMMA,
    ACTIONS(637), 1,
      anon_sym_RBRACK,
    STATE(231), 1,
      aux_sym_setting_list_repeat1,
  [6016] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      anon_sym_RPAREN,
    ACTIONS(641), 1,
      anon_sym_COMMA,
    STATE(245), 1,
      aux_sym_model_param_list_repeat1,
  [6029] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      anon_sym_RBRACE,
    ACTIONS(645), 1,
      anon_sym_COMMA,
    STATE(233), 1,
      aux_sym_enum_list_repeat1,
  [6042] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(112), 1,
      sym_maparrow,
    ACTIONS(648), 2,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [6053] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      anon_sym_RBRACE,
    ACTIONS(652), 1,
      anon_sym_PIPE,
    STATE(132), 1,
      sym_compr_rest,
  [6066] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      anon_sym_RBRACE,
    ACTIONS(656), 1,
      anon_sym_COMMA,
    STATE(233), 1,
      aux_sym_enum_list_repeat1,
  [6079] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_COMMA,
    ACTIONS(660), 1,
      anon_sym_RBRACK,
    STATE(242), 1,
      aux_sym_setting_list_repeat1,
  [6092] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym__qualid,
    ACTIONS(208), 1,
      sym__bareid,
    STATE(349), 1,
      sym_id,
  [6105] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 3,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LBRACK,
  [6114] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 3,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [6123] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_DOT_DOT,
    ACTIONS(664), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [6134] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_COMMA,
    ACTIONS(668), 1,
      anon_sym_RBRACK,
    STATE(231), 1,
      aux_sym_setting_list_repeat1,
  [6147] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      sym__bareid,
    STATE(232), 1,
      sym_mod_ref_rename,
    STATE(326), 1,
      sym_model_param_list,
  [6160] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      anon_sym_COMMA,
    ACTIONS(672), 1,
      anon_sym_RBRACE,
    STATE(236), 1,
      aux_sym_enum_list_repeat1,
  [6173] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_COMMA,
    ACTIONS(674), 1,
      anon_sym_RPAREN,
    STATE(227), 1,
      aux_sym_model_param_list_repeat1,
  [6186] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_LPAREN,
    STATE(303), 1,
      sym_machine_sig_in,
  [6196] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      anon_sym_DOT,
    ACTIONS(680), 1,
      anon_sym_COMMA,
  [6206] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 2,
      anon_sym_DOT,
      anon_sym_COLON_DASH,
  [6214] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_COLON_COLON,
    ACTIONS(684), 1,
      anon_sym_COLON,
  [6224] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      anon_sym_RPAREN,
    ACTIONS(688), 1,
      anon_sym_COMMA,
  [6234] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      anon_sym_system,
    ACTIONS(692), 1,
      sym__bareid,
  [6244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6252] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 2,
      anon_sym_DOT,
      anon_sym_COLON_DASH,
  [6268] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [6276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6284] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(122), 1,
      sym_string,
  [6294] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [6310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6318] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      anon_sym_EQ,
    ACTIONS(708), 1,
      anon_sym_COMMA,
  [6328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [6336] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(260), 1,
      sym_string,
  [6346] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [6354] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 2,
      anon_sym_LBRACE,
      anon_sym_machine,
  [6362] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(130), 1,
      sym_string,
  [6372] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [6388] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      anon_sym_DOT,
    ACTIONS(718), 1,
      anon_sym_COMMA,
  [6398] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [6406] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [6414] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      sym__bareid,
    STATE(267), 1,
      sym_mod_ref_rename,
  [6424] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_RPAREN,
    ACTIONS(726), 1,
      anon_sym_COMMA,
  [6434] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [6442] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      anon_sym_DOT,
    ACTIONS(732), 1,
      anon_sym_SEMI,
  [6452] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_RBRACE,
  [6459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_DOT,
  [6466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_LBRACE,
  [6473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_LBRACE,
  [6480] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_returns,
  [6487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 1,
      anon_sym_LBRACE,
  [6494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      anon_sym_EQ,
  [6501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      sym__bareid,
  [6508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_RBRACE,
  [6515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      anon_sym_returns,
  [6522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      anon_sym_RBRACK,
  [6529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 1,
      anon_sym_of,
  [6536] = 2,
    ACTIONS(758), 1,
      aux_sym_string_token1,
    ACTIONS(760), 1,
      sym_comment,
  [6543] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      sym_digits,
  [6550] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_RBRACE,
  [6557] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      anon_sym_DOT,
  [6564] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_DOT,
  [6571] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_DOT,
  [6578] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_DOT,
  [6585] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      sym__bareid,
  [6592] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_RPAREN,
  [6599] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      anon_sym_EQ,
  [6606] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      anon_sym_DQUOTE,
  [6613] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      aux_sym_model_contract_token1,
  [6620] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      anon_sym_RPAREN,
  [6627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      aux_sym_model_contract_token1,
  [6634] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      anon_sym_DOT,
  [6641] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_of,
  [6648] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_LPAREN,
  [6655] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_RBRACE,
  [6662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      anon_sym_of,
  [6669] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      anon_sym_DOT,
  [6676] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      anon_sym_RBRACK,
  [6683] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      anon_sym_DOT,
  [6690] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_EQ,
  [6697] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      anon_sym_EQ,
  [6704] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 1,
      anon_sym_LPAREN,
  [6711] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_RPAREN,
  [6718] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_LPAREN,
  [6725] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_EQ,
  [6732] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      anon_sym_RPAREN,
  [6739] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym_RPAREN,
  [6746] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      anon_sym_RPAREN,
  [6753] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      anon_sym_DOT,
  [6760] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      anon_sym_RBRACE,
  [6767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      sym__bareid,
  [6774] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      sym__bareid,
  [6781] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      anon_sym_of,
  [6788] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      sym__bareid,
  [6795] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_DOT,
  [6802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_RPAREN,
  [6809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 1,
      anon_sym_LBRACE,
  [6816] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 1,
      anon_sym_RBRACE,
  [6823] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_COLON_COLON,
  [6830] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_LBRACE,
  [6837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_LBRACE,
  [6844] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      anon_sym_LPAREN,
  [6851] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(848), 1,
      ts_builtin_sym_end,
  [6858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 1,
      anon_sym_LPAREN,
  [6865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      sym__bareid,
  [6872] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      anon_sym_LBRACE,
  [6879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 1,
      anon_sym_RPAREN,
  [6886] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_returns,
  [6893] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_DOT,
  [6900] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_RBRACK,
  [6907] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      anon_sym_LBRACE,
  [6914] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      anon_sym_DQUOTE,
  [6921] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      anon_sym_RPAREN,
  [6928] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 1,
      anon_sym_DOT,
  [6935] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 1,
      anon_sym_DOT,
  [6942] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      anon_sym_DOT,
  [6949] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      anon_sym_RBRACK,
  [6956] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(878), 1,
      anon_sym_RBRACK,
  [6963] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(880), 1,
      anon_sym_DOT,
  [6970] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      anon_sym_DOT,
  [6977] = 2,
    ACTIONS(760), 1,
      sym_comment,
    ACTIONS(884), 1,
      aux_sym_string_token1,
  [6984] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      anon_sym_model,
  [6991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(888), 1,
      sym__bareid,
  [6998] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      anon_sym_RPAREN,
  [7005] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(892), 1,
      anon_sym_RPAREN,
  [7012] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_RBRACE,
  [7019] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      anon_sym_of,
  [7026] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 83,
  [SMALL_STATE(4)] = 163,
  [SMALL_STATE(5)] = 243,
  [SMALL_STATE(6)] = 325,
  [SMALL_STATE(7)] = 404,
  [SMALL_STATE(8)] = 483,
  [SMALL_STATE(9)] = 559,
  [SMALL_STATE(10)] = 632,
  [SMALL_STATE(11)] = 705,
  [SMALL_STATE(12)] = 772,
  [SMALL_STATE(13)] = 837,
  [SMALL_STATE(14)] = 903,
  [SMALL_STATE(15)] = 967,
  [SMALL_STATE(16)] = 1031,
  [SMALL_STATE(17)] = 1086,
  [SMALL_STATE(18)] = 1141,
  [SMALL_STATE(19)] = 1196,
  [SMALL_STATE(20)] = 1251,
  [SMALL_STATE(21)] = 1278,
  [SMALL_STATE(22)] = 1304,
  [SMALL_STATE(23)] = 1360,
  [SMALL_STATE(24)] = 1416,
  [SMALL_STATE(25)] = 1452,
  [SMALL_STATE(26)] = 1508,
  [SMALL_STATE(27)] = 1564,
  [SMALL_STATE(28)] = 1620,
  [SMALL_STATE(29)] = 1676,
  [SMALL_STATE(30)] = 1732,
  [SMALL_STATE(31)] = 1762,
  [SMALL_STATE(32)] = 1818,
  [SMALL_STATE(33)] = 1874,
  [SMALL_STATE(34)] = 1930,
  [SMALL_STATE(35)] = 1983,
  [SMALL_STATE(36)] = 2036,
  [SMALL_STATE(37)] = 2063,
  [SMALL_STATE(38)] = 2090,
  [SMALL_STATE(39)] = 2121,
  [SMALL_STATE(40)] = 2174,
  [SMALL_STATE(41)] = 2224,
  [SMALL_STATE(42)] = 2248,
  [SMALL_STATE(43)] = 2272,
  [SMALL_STATE(44)] = 2322,
  [SMALL_STATE(45)] = 2346,
  [SMALL_STATE(46)] = 2370,
  [SMALL_STATE(47)] = 2420,
  [SMALL_STATE(48)] = 2444,
  [SMALL_STATE(49)] = 2468,
  [SMALL_STATE(50)] = 2491,
  [SMALL_STATE(51)] = 2538,
  [SMALL_STATE(52)] = 2581,
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
  [SMALL_STATE(66)] = 3127,
  [SMALL_STATE(67)] = 3150,
  [SMALL_STATE(68)] = 3175,
  [SMALL_STATE(69)] = 3196,
  [SMALL_STATE(70)] = 3217,
  [SMALL_STATE(71)] = 3238,
  [SMALL_STATE(72)] = 3259,
  [SMALL_STATE(73)] = 3282,
  [SMALL_STATE(74)] = 3302,
  [SMALL_STATE(75)] = 3322,
  [SMALL_STATE(76)] = 3342,
  [SMALL_STATE(77)] = 3362,
  [SMALL_STATE(78)] = 3382,
  [SMALL_STATE(79)] = 3402,
  [SMALL_STATE(80)] = 3422,
  [SMALL_STATE(81)] = 3442,
  [SMALL_STATE(82)] = 3478,
  [SMALL_STATE(83)] = 3498,
  [SMALL_STATE(84)] = 3518,
  [SMALL_STATE(85)] = 3538,
  [SMALL_STATE(86)] = 3558,
  [SMALL_STATE(87)] = 3578,
  [SMALL_STATE(88)] = 3598,
  [SMALL_STATE(89)] = 3622,
  [SMALL_STATE(90)] = 3642,
  [SMALL_STATE(91)] = 3662,
  [SMALL_STATE(92)] = 3682,
  [SMALL_STATE(93)] = 3702,
  [SMALL_STATE(94)] = 3721,
  [SMALL_STATE(95)] = 3756,
  [SMALL_STATE(96)] = 3789,
  [SMALL_STATE(97)] = 3812,
  [SMALL_STATE(98)] = 3845,
  [SMALL_STATE(99)] = 3877,
  [SMALL_STATE(100)] = 3897,
  [SMALL_STATE(101)] = 3917,
  [SMALL_STATE(102)] = 3949,
  [SMALL_STATE(103)] = 3971,
  [SMALL_STATE(104)] = 3993,
  [SMALL_STATE(105)] = 4015,
  [SMALL_STATE(106)] = 4033,
  [SMALL_STATE(107)] = 4050,
  [SMALL_STATE(108)] = 4069,
  [SMALL_STATE(109)] = 4088,
  [SMALL_STATE(110)] = 4107,
  [SMALL_STATE(111)] = 4138,
  [SMALL_STATE(112)] = 4165,
  [SMALL_STATE(113)] = 4196,
  [SMALL_STATE(114)] = 4227,
  [SMALL_STATE(115)] = 4258,
  [SMALL_STATE(116)] = 4278,
  [SMALL_STATE(117)] = 4294,
  [SMALL_STATE(118)] = 4318,
  [SMALL_STATE(119)] = 4338,
  [SMALL_STATE(120)] = 4354,
  [SMALL_STATE(121)] = 4374,
  [SMALL_STATE(122)] = 4390,
  [SMALL_STATE(123)] = 4404,
  [SMALL_STATE(124)] = 4420,
  [SMALL_STATE(125)] = 4448,
  [SMALL_STATE(126)] = 4467,
  [SMALL_STATE(127)] = 4486,
  [SMALL_STATE(128)] = 4503,
  [SMALL_STATE(129)] = 4516,
  [SMALL_STATE(130)] = 4529,
  [SMALL_STATE(131)] = 4542,
  [SMALL_STATE(132)] = 4567,
  [SMALL_STATE(133)] = 4580,
  [SMALL_STATE(134)] = 4597,
  [SMALL_STATE(135)] = 4614,
  [SMALL_STATE(136)] = 4627,
  [SMALL_STATE(137)] = 4644,
  [SMALL_STATE(138)] = 4663,
  [SMALL_STATE(139)] = 4680,
  [SMALL_STATE(140)] = 4697,
  [SMALL_STATE(141)] = 4710,
  [SMALL_STATE(142)] = 4722,
  [SMALL_STATE(143)] = 4742,
  [SMALL_STATE(144)] = 4754,
  [SMALL_STATE(145)] = 4766,
  [SMALL_STATE(146)] = 4778,
  [SMALL_STATE(147)] = 4790,
  [SMALL_STATE(148)] = 4802,
  [SMALL_STATE(149)] = 4814,
  [SMALL_STATE(150)] = 4836,
  [SMALL_STATE(151)] = 4848,
  [SMALL_STATE(152)] = 4860,
  [SMALL_STATE(153)] = 4872,
  [SMALL_STATE(154)] = 4894,
  [SMALL_STATE(155)] = 4906,
  [SMALL_STATE(156)] = 4920,
  [SMALL_STATE(157)] = 4932,
  [SMALL_STATE(158)] = 4944,
  [SMALL_STATE(159)] = 4956,
  [SMALL_STATE(160)] = 4968,
  [SMALL_STATE(161)] = 4980,
  [SMALL_STATE(162)] = 5002,
  [SMALL_STATE(163)] = 5014,
  [SMALL_STATE(164)] = 5026,
  [SMALL_STATE(165)] = 5038,
  [SMALL_STATE(166)] = 5058,
  [SMALL_STATE(167)] = 5078,
  [SMALL_STATE(168)] = 5090,
  [SMALL_STATE(169)] = 5102,
  [SMALL_STATE(170)] = 5114,
  [SMALL_STATE(171)] = 5126,
  [SMALL_STATE(172)] = 5138,
  [SMALL_STATE(173)] = 5158,
  [SMALL_STATE(174)] = 5170,
  [SMALL_STATE(175)] = 5182,
  [SMALL_STATE(176)] = 5201,
  [SMALL_STATE(177)] = 5216,
  [SMALL_STATE(178)] = 5235,
  [SMALL_STATE(179)] = 5254,
  [SMALL_STATE(180)] = 5273,
  [SMALL_STATE(181)] = 5292,
  [SMALL_STATE(182)] = 5309,
  [SMALL_STATE(183)] = 5328,
  [SMALL_STATE(184)] = 5347,
  [SMALL_STATE(185)] = 5362,
  [SMALL_STATE(186)] = 5379,
  [SMALL_STATE(187)] = 5394,
  [SMALL_STATE(188)] = 5411,
  [SMALL_STATE(189)] = 5426,
  [SMALL_STATE(190)] = 5445,
  [SMALL_STATE(191)] = 5460,
  [SMALL_STATE(192)] = 5479,
  [SMALL_STATE(193)] = 5496,
  [SMALL_STATE(194)] = 5513,
  [SMALL_STATE(195)] = 5532,
  [SMALL_STATE(196)] = 5551,
  [SMALL_STATE(197)] = 5566,
  [SMALL_STATE(198)] = 5585,
  [SMALL_STATE(199)] = 5604,
  [SMALL_STATE(200)] = 5621,
  [SMALL_STATE(201)] = 5633,
  [SMALL_STATE(202)] = 5643,
  [SMALL_STATE(203)] = 5659,
  [SMALL_STATE(204)] = 5669,
  [SMALL_STATE(205)] = 5681,
  [SMALL_STATE(206)] = 5691,
  [SMALL_STATE(207)] = 5705,
  [SMALL_STATE(208)] = 5719,
  [SMALL_STATE(209)] = 5729,
  [SMALL_STATE(210)] = 5739,
  [SMALL_STATE(211)] = 5751,
  [SMALL_STATE(212)] = 5765,
  [SMALL_STATE(213)] = 5777,
  [SMALL_STATE(214)] = 5793,
  [SMALL_STATE(215)] = 5805,
  [SMALL_STATE(216)] = 5821,
  [SMALL_STATE(217)] = 5835,
  [SMALL_STATE(218)] = 5849,
  [SMALL_STATE(219)] = 5861,
  [SMALL_STATE(220)] = 5871,
  [SMALL_STATE(221)] = 5885,
  [SMALL_STATE(222)] = 5895,
  [SMALL_STATE(223)] = 5905,
  [SMALL_STATE(224)] = 5915,
  [SMALL_STATE(225)] = 5927,
  [SMALL_STATE(226)] = 5937,
  [SMALL_STATE(227)] = 5951,
  [SMALL_STATE(228)] = 5964,
  [SMALL_STATE(229)] = 5977,
  [SMALL_STATE(230)] = 5990,
  [SMALL_STATE(231)] = 6003,
  [SMALL_STATE(232)] = 6016,
  [SMALL_STATE(233)] = 6029,
  [SMALL_STATE(234)] = 6042,
  [SMALL_STATE(235)] = 6053,
  [SMALL_STATE(236)] = 6066,
  [SMALL_STATE(237)] = 6079,
  [SMALL_STATE(238)] = 6092,
  [SMALL_STATE(239)] = 6105,
  [SMALL_STATE(240)] = 6114,
  [SMALL_STATE(241)] = 6123,
  [SMALL_STATE(242)] = 6134,
  [SMALL_STATE(243)] = 6147,
  [SMALL_STATE(244)] = 6160,
  [SMALL_STATE(245)] = 6173,
  [SMALL_STATE(246)] = 6186,
  [SMALL_STATE(247)] = 6196,
  [SMALL_STATE(248)] = 6206,
  [SMALL_STATE(249)] = 6214,
  [SMALL_STATE(250)] = 6224,
  [SMALL_STATE(251)] = 6234,
  [SMALL_STATE(252)] = 6244,
  [SMALL_STATE(253)] = 6252,
  [SMALL_STATE(254)] = 6260,
  [SMALL_STATE(255)] = 6268,
  [SMALL_STATE(256)] = 6276,
  [SMALL_STATE(257)] = 6284,
  [SMALL_STATE(258)] = 6294,
  [SMALL_STATE(259)] = 6302,
  [SMALL_STATE(260)] = 6310,
  [SMALL_STATE(261)] = 6318,
  [SMALL_STATE(262)] = 6328,
  [SMALL_STATE(263)] = 6336,
  [SMALL_STATE(264)] = 6346,
  [SMALL_STATE(265)] = 6354,
  [SMALL_STATE(266)] = 6362,
  [SMALL_STATE(267)] = 6372,
  [SMALL_STATE(268)] = 6380,
  [SMALL_STATE(269)] = 6388,
  [SMALL_STATE(270)] = 6398,
  [SMALL_STATE(271)] = 6406,
  [SMALL_STATE(272)] = 6414,
  [SMALL_STATE(273)] = 6424,
  [SMALL_STATE(274)] = 6434,
  [SMALL_STATE(275)] = 6442,
  [SMALL_STATE(276)] = 6452,
  [SMALL_STATE(277)] = 6459,
  [SMALL_STATE(278)] = 6466,
  [SMALL_STATE(279)] = 6473,
  [SMALL_STATE(280)] = 6480,
  [SMALL_STATE(281)] = 6487,
  [SMALL_STATE(282)] = 6494,
  [SMALL_STATE(283)] = 6501,
  [SMALL_STATE(284)] = 6508,
  [SMALL_STATE(285)] = 6515,
  [SMALL_STATE(286)] = 6522,
  [SMALL_STATE(287)] = 6529,
  [SMALL_STATE(288)] = 6536,
  [SMALL_STATE(289)] = 6543,
  [SMALL_STATE(290)] = 6550,
  [SMALL_STATE(291)] = 6557,
  [SMALL_STATE(292)] = 6564,
  [SMALL_STATE(293)] = 6571,
  [SMALL_STATE(294)] = 6578,
  [SMALL_STATE(295)] = 6585,
  [SMALL_STATE(296)] = 6592,
  [SMALL_STATE(297)] = 6599,
  [SMALL_STATE(298)] = 6606,
  [SMALL_STATE(299)] = 6613,
  [SMALL_STATE(300)] = 6620,
  [SMALL_STATE(301)] = 6627,
  [SMALL_STATE(302)] = 6634,
  [SMALL_STATE(303)] = 6641,
  [SMALL_STATE(304)] = 6648,
  [SMALL_STATE(305)] = 6655,
  [SMALL_STATE(306)] = 6662,
  [SMALL_STATE(307)] = 6669,
  [SMALL_STATE(308)] = 6676,
  [SMALL_STATE(309)] = 6683,
  [SMALL_STATE(310)] = 6690,
  [SMALL_STATE(311)] = 6697,
  [SMALL_STATE(312)] = 6704,
  [SMALL_STATE(313)] = 6711,
  [SMALL_STATE(314)] = 6718,
  [SMALL_STATE(315)] = 6725,
  [SMALL_STATE(316)] = 6732,
  [SMALL_STATE(317)] = 6739,
  [SMALL_STATE(318)] = 6746,
  [SMALL_STATE(319)] = 6753,
  [SMALL_STATE(320)] = 6760,
  [SMALL_STATE(321)] = 6767,
  [SMALL_STATE(322)] = 6774,
  [SMALL_STATE(323)] = 6781,
  [SMALL_STATE(324)] = 6788,
  [SMALL_STATE(325)] = 6795,
  [SMALL_STATE(326)] = 6802,
  [SMALL_STATE(327)] = 6809,
  [SMALL_STATE(328)] = 6816,
  [SMALL_STATE(329)] = 6823,
  [SMALL_STATE(330)] = 6830,
  [SMALL_STATE(331)] = 6837,
  [SMALL_STATE(332)] = 6844,
  [SMALL_STATE(333)] = 6851,
  [SMALL_STATE(334)] = 6858,
  [SMALL_STATE(335)] = 6865,
  [SMALL_STATE(336)] = 6872,
  [SMALL_STATE(337)] = 6879,
  [SMALL_STATE(338)] = 6886,
  [SMALL_STATE(339)] = 6893,
  [SMALL_STATE(340)] = 6900,
  [SMALL_STATE(341)] = 6907,
  [SMALL_STATE(342)] = 6914,
  [SMALL_STATE(343)] = 6921,
  [SMALL_STATE(344)] = 6928,
  [SMALL_STATE(345)] = 6935,
  [SMALL_STATE(346)] = 6942,
  [SMALL_STATE(347)] = 6949,
  [SMALL_STATE(348)] = 6956,
  [SMALL_STATE(349)] = 6963,
  [SMALL_STATE(350)] = 6970,
  [SMALL_STATE(351)] = 6977,
  [SMALL_STATE(352)] = 6984,
  [SMALL_STATE(353)] = 6991,
  [SMALL_STATE(354)] = 6998,
  [SMALL_STATE(355)] = 7005,
  [SMALL_STATE(356)] = 7012,
  [SMALL_STATE(357)] = 7019,
  [SMALL_STATE(358)] = 7026,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_body, 1),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(26),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(59),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(33),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(183),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(119),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(70),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(70),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(288),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(99),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(49),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dom_sentences, 1),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(26),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(59),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(28),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(177),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(119),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(70),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(70),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(288),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(100),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(49),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(59),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(31),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(14),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(183),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(119),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(70),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(70),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(288),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(109),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(49),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_body, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(324),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(353),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(352),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(251),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(335),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 1),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 1),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term, 2),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_term, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term, 3),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_term, 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term, 4, .production_id = 1),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_term, 4, .production_id = 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term, 1),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_term, 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl, 4),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_decl, 4),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_sentence, 1),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trans_sentence, 1),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_sentence_config, 1),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trans_sentence_config, 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_sentence_config, 2),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trans_sentence_config, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_sentence, 3),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trans_sentence, 3),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 4),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_contract, 5),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_contract, 5),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_fact_list, 4),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_fact_list, 4),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_contract_conf, 1),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_contract_conf, 1),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_sentence, 1),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_sentence, 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_contract_conf, 2),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_contract_conf, 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dom_sentence_config, 2),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dom_sentence_config, 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_fact_list, 2),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_fact_list, 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_contract, 3),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_contract, 3),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dom_sentence, 3),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dom_sentence, 3),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_or_compr, 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dom_sentence, 1),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dom_sentence, 1),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dom_sentence_config, 1),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dom_sentence_config, 1),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_fact_list, 3),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_fact_list, 3),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sentence_config, 3),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sentence_config, 3),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_machine_body_repeat1, 2),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_machine_body_repeat1, 2), SHIFT_REPEAT(180),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_machine_body_repeat1, 2), SHIFT_REPEAT(178),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_machine_body_repeat1, 2), SHIFT_REPEAT(283),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_machine_body_repeat1, 2), SHIFT_REPEAT(191),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_body, 1),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trans_steps_repeat1, 2),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_steps_repeat1, 2), SHIFT_REPEAT(182),
  [383] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trans_steps_repeat1, 2), SHIFT_REPEAT(49),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_steps_repeat1, 2), SHIFT_REPEAT(49),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_steps, 1),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 4),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 3),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 2),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_ref_rename, 3),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_ref_no_rename, 1),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_fact, 1),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binop, 1),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binop, 1),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_fact, 3),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unop, 1),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unop, 1),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_app_arg, 1),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relop, 1),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relop, 1),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_ref_rename, 5),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unnbody, 1),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compr_rest, 1),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compr_rest, 3),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_ref_no_rename, 3),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compr, 3),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term_list, 1),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_term_list_repeat1, 2),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_term_list_repeat1, 2), SHIFT_REPEAT(39),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 3),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unnbody_repeat1, 2),
  [476] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unnbody_repeat1, 2), SHIFT_REPEAT(194),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unnbody, 2),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term_list, 2),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_ref, 1),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_prop, 5),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tsystem_rest, 3),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine, 4),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sentence_conf, 2),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unncmp, 1),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeid, 1),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model, 4),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain, 3),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tsystem, 4),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unncmp, 3),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain, 4),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model, 3),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform, 3),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform_rest, 4),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sentence, 2),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform_rest, 3),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sentence, 1),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 4),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sentence_conf, 1),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 4),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine, 3),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tsystem_rest, 4),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fields, 1),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [545] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(43),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fields, 2),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fields_repeat1, 2),
  [562] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fields_repeat1, 2), SHIFT_REPEAT(124),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_sig, 1),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_intro, 4),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_step, 4),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_intro, 5),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sig_config, 1),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_refs, 1),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_machine_sig_config_repeat1, 2),
  [591] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_machine_sig_config_repeat1, 2), SHIFT_REPEAT(324),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain_sig, 2),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maparrow, 1),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_maparrow, 1),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_list, 2),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_list, 1),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_step_config, 2),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trans_step_config, 2),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_list_repeat1, 2),
  [614] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_list_repeat1, 2), SHIFT_REPEAT(35),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_step_config, 1),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trans_step_config, 1),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_model_param_list_repeat1, 2),
  [625] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_param_list_repeat1, 2), SHIFT_REPEAT(272),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform_sig_config, 1),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_sig_config, 1),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain_sig_config, 1),
  [634] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setting_list_repeat1, 2), SHIFT_REPEAT(215),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_setting_list_repeat1, 2),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_param_list, 1),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_list_repeat1, 2),
  [645] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_list_repeat1, 2), SHIFT_REPEAT(117),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_list, 2),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_list, 1),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_refs, 3),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_cnst, 1),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_list, 2),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_list, 1),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_param_list, 2),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vom_param_list, 1),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_val_or_model_program, 3),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_val_or_model_program, 1),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain_sig, 4),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_app_arg, 3),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_or_update_lhs, 1),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_apply, 4),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sig, 5),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_cnst, 3),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_apply, 3),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform_sig, 5),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_arg_list, 1),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_sig, 3),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_list, 1),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain_sig_config, 2),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_sig_config, 2),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_sig_in, 3),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sig_in, 3),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [760] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl_body, 3),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_or_update_lhs, 3),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_card_spec, 1),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_list, 3),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl_body, 4),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_decl, 1),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_arg_list, 3),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl_body, 6),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [848] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform_sig_config, 2),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_sig_in, 2),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl_body, 1),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [884] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vom_param_list, 3),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sig_in, 2),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
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
