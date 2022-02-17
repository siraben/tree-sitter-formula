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
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

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
  anon_sym_mod = 59,
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
  [anon_sym_mod] = "mod",
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
  [anon_sym_mod] = anon_sym_mod,
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
  [anon_sym_mod] = {
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
      if (eof) ADVANCE(168);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(241);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == ')') ADVANCE(182);
      if (lookahead == '*') ADVANCE(252);
      if (lookahead == '+') ADVANCE(235);
      if (lookahead == ',') ADVANCE(188);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == '.') ADVANCE(178);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == ';') ADVANCE(212);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(176);
      if (lookahead == '>') ADVANCE(258);
      if (lookahead == '@') ADVANCE(217);
      if (lookahead == 'B') ADVANCE(47);
      if (lookahead == '[') ADVANCE(207);
      if (lookahead == ']') ADVANCE(208);
      if (lookahead == 'a') ADVANCE(99);
      if (lookahead == 'b') ADVANCE(82);
      if (lookahead == 'c') ADVANCE(111);
      if (lookahead == 'd') ADVANCE(187);
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == 'f') ADVANCE(153);
      if (lookahead == 'i') ADVANCE(101);
      if (lookahead == 'm') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(78);
      if (lookahead == 'p') ADVANCE(53);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead == 's') ADVANCE(113);
      if (lookahead == 't') ADVANCE(122);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '|') ADVANCE(249);
      if (lookahead == '}') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '*') ADVANCE(244);
      if (lookahead != 0) ADVANCE(243);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(241);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == ')') ADVANCE(182);
      if (lookahead == '*') ADVANCE(252);
      if (lookahead == '+') ADVANCE(235);
      if (lookahead == ',') ADVANCE(188);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == '.') ADVANCE(178);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == ';') ADVANCE(212);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(176);
      if (lookahead == '>') ADVANCE(258);
      if (lookahead == '@') ADVANCE(217);
      if (lookahead == 'B') ADVANCE(47);
      if (lookahead == '[') ADVANCE(207);
      if (lookahead == ']') ADVANCE(208);
      if (lookahead == 'a') ADVANCE(99);
      if (lookahead == 'b') ADVANCE(82);
      if (lookahead == 'c') ADVANCE(111);
      if (lookahead == 'd') ADVANCE(187);
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == 'f') ADVANCE(153);
      if (lookahead == 'i') ADVANCE(101);
      if (lookahead == 'm') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(78);
      if (lookahead == 'p') ADVANCE(53);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead == 's') ADVANCE(113);
      if (lookahead == 't') ADVANCE(122);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '|') ADVANCE(249);
      if (lookahead == '}') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(241);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == ')') ADVANCE(182);
      if (lookahead == '*') ADVANCE(252);
      if (lookahead == '+') ADVANCE(235);
      if (lookahead == ',') ADVANCE(188);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == '.') ADVANCE(178);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == ';') ADVANCE(212);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(176);
      if (lookahead == '>') ADVANCE(258);
      if (lookahead == '@') ADVANCE(217);
      if (lookahead == 'B') ADVANCE(47);
      if (lookahead == '[') ADVANCE(207);
      if (lookahead == ']') ADVANCE(208);
      if (lookahead == 'a') ADVANCE(99);
      if (lookahead == 'b') ADVANCE(82);
      if (lookahead == 'c') ADVANCE(111);
      if (lookahead == 'd') ADVANCE(187);
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == 'f') ADVANCE(153);
      if (lookahead == 'i') ADVANCE(101);
      if (lookahead == 'm') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(78);
      if (lookahead == 'p') ADVANCE(53);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead == 's') ADVANCE(113);
      if (lookahead == 't') ADVANCE(122);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '|') ADVANCE(249);
      if (lookahead == '}') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(315);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(315);
      if (lookahead == '.') ADVANCE(43);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '"') ADVANCE(241);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == ',') ADVANCE(188);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(211);
      if (lookahead == '=') ADVANCE(175);
      if (lookahead == 'B') ADVANCE(263);
      if (lookahead == '[') ADVANCE(207);
      if (lookahead == 'e') ADVANCE(281);
      if (lookahead == 'r') ADVANCE(265);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '}') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '"') ADVANCE(241);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == ',') ADVANCE(188);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(211);
      if (lookahead == '=') ADVANCE(175);
      if (lookahead == 'B') ADVANCE(263);
      if (lookahead == '[') ADVANCE(207);
      if (lookahead == 'e') ADVANCE(281);
      if (lookahead == 'r') ADVANCE(265);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '}') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '"') ADVANCE(241);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == 'B') ADVANCE(263);
      if (lookahead == '[') ADVANCE(207);
      if (lookahead == 'c') ADVANCE(287);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '}') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '"') ADVANCE(241);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == 'B') ADVANCE(263);
      if (lookahead == '[') ADVANCE(207);
      if (lookahead == 'c') ADVANCE(287);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '}') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"') ADVANCE(241);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == 'B') ADVANCE(263);
      if (lookahead == '[') ADVANCE(207);
      if (lookahead == 'e') ADVANCE(281);
      if (lookahead == 'n') ADVANCE(286);
      if (lookahead == 'r') ADVANCE(265);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '}') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"') ADVANCE(241);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == 'B') ADVANCE(263);
      if (lookahead == '[') ADVANCE(207);
      if (lookahead == 'e') ADVANCE(281);
      if (lookahead == 'n') ADVANCE(286);
      if (lookahead == 'r') ADVANCE(265);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '}') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead == '"') ADVANCE(241);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == 'B') ADVANCE(263);
      if (lookahead == 'a') ADVANCE(303);
      if (lookahead == 'n') ADVANCE(286);
      if (lookahead == 's') ADVANCE(289);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead == '"') ADVANCE(241);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == 'B') ADVANCE(263);
      if (lookahead == 'a') ADVANCE(303);
      if (lookahead == 'n') ADVANCE(286);
      if (lookahead == 's') ADVANCE(289);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '"') ADVANCE(241);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == 'B') ADVANCE(263);
      if (lookahead == '[') ADVANCE(207);
      if (lookahead == 'c') ADVANCE(287);
      if (lookahead == 'n') ADVANCE(286);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '}') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '"') ADVANCE(241);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == 'B') ADVANCE(263);
      if (lookahead == '[') ADVANCE(207);
      if (lookahead == 'c') ADVANCE(287);
      if (lookahead == 'n') ADVANCE(286);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '}') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(16);
      if (lookahead == '"') ADVANCE(241);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == ')') ADVANCE(182);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == 'B') ADVANCE(263);
      if (lookahead == '[') ADVANCE(207);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '}') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(16);
      if (lookahead == '"') ADVANCE(241);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == ')') ADVANCE(182);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == 'B') ADVANCE(263);
      if (lookahead == '[') ADVANCE(207);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '}') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '"') ADVANCE(241);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == 'B') ADVANCE(263);
      if (lookahead == 'n') ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '"') ADVANCE(241);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == 'B') ADVANCE(263);
      if (lookahead == 'n') ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == 'B') ADVANCE(263);
      if (lookahead == 'b') ADVANCE(273);
      if (lookahead == 'f') ADVANCE(310);
      if (lookahead == 'i') ADVANCE(285);
      if (lookahead == 'n') ADVANCE(268);
      if (lookahead == 's') ADVANCE(309);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == 'B') ADVANCE(263);
      if (lookahead == 'b') ADVANCE(273);
      if (lookahead == 'f') ADVANCE(310);
      if (lookahead == 'i') ADVANCE(285);
      if (lookahead == 'n') ADVANCE(268);
      if (lookahead == 's') ADVANCE(309);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == ')') ADVANCE(182);
      if (lookahead == '+') ADVANCE(235);
      if (lookahead == ',') ADVANCE(188);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(209);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == 'B') ADVANCE(263);
      if (lookahead == 'a') ADVANCE(284);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(23)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == ')') ADVANCE(182);
      if (lookahead == '+') ADVANCE(235);
      if (lookahead == ',') ADVANCE(188);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(209);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == 'B') ADVANCE(263);
      if (lookahead == 'a') ADVANCE(284);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(23)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 24:
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == '*') ADVANCE(252);
      if (lookahead == '+') ADVANCE(235);
      if (lookahead == ',') ADVANCE(188);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == '.') ADVANCE(177);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ':') ADVANCE(209);
      if (lookahead == ';') ADVANCE(212);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(175);
      if (lookahead == '>') ADVANCE(258);
      if (lookahead == 'i') ADVANCE(131);
      if (lookahead == 'm') ADVANCE(112);
      if (lookahead == '}') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      END_STATE();
    case 25:
      if (lookahead == '\'') ADVANCE(25);
      if (lookahead == '.') ADVANCE(165);
      END_STATE();
    case 26:
      if (lookahead == '\'') ADVANCE(25);
      if (lookahead == '.') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == ')') ADVANCE(182);
      if (lookahead == '*') ADVANCE(252);
      if (lookahead == '+') ADVANCE(235);
      if (lookahead == ',') ADVANCE(188);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == '.') ADVANCE(177);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == ';') ADVANCE(212);
      if (lookahead == '=') ADVANCE(175);
      if (lookahead == '[') ADVANCE(207);
      if (lookahead == ']') ADVANCE(208);
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead == 'i') ADVANCE(106);
      if (lookahead == 'm') ADVANCE(50);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '|') ADVANCE(249);
      if (lookahead == '}') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      END_STATE();
    case 28:
      if (lookahead == ')') ADVANCE(182);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 29:
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '/') ADVANCE(319);
      END_STATE();
    case 30:
      if (lookahead == '*') ADVANCE(35);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(248);
      if (lookahead == ':') ADVANCE(215);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(248);
      if (lookahead == ':') ADVANCE(40);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(236);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(43);
      END_STATE();
    case 35:
      if (lookahead == '/') ADVANCE(318);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 36:
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == 's') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 37:
      if (lookahead == '0') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(38);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(240);
      END_STATE();
    case 38:
      if (lookahead == '0') ADVANCE(38);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(240);
      END_STATE();
    case 39:
      if (lookahead == '=') ADVANCE(255);
      END_STATE();
    case 40:
      if (lookahead == '=') ADVANCE(218);
      END_STATE();
    case 41:
      if (lookahead == '>') ADVANCE(233);
      END_STATE();
    case 42:
      if (lookahead == '>') ADVANCE(234);
      END_STATE();
    case 43:
      if (lookahead == 'B') ADVANCE(48);
      if (lookahead == 'S') ADVANCE(49);
      if (lookahead == 'T') ADVANCE(49);
      END_STATE();
    case 44:
      if (lookahead == 'D') ADVANCE(34);
      END_STATE();
    case 45:
      if (lookahead == 'D') ADVANCE(5);
      END_STATE();
    case 46:
      if (lookahead == 'D') ADVANCE(4);
      END_STATE();
    case 47:
      if (lookahead == 'I') ADVANCE(44);
      END_STATE();
    case 48:
      if (lookahead == 'I') ADVANCE(45);
      END_STATE();
    case 49:
      if (lookahead == 'I') ADVANCE(46);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(61);
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(61);
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(129);
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(92);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead == 'j') ADVANCE(223);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(81);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(254);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(133);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(75);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(74);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(158);
      if (lookahead == 'o') ADVANCE(250);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 78:
      if (lookahead == 'f') ADVANCE(180);
      END_STATE();
    case 79:
      if (lookahead == 'f') ADVANCE(118);
      END_STATE();
    case 80:
      if (lookahead == 'f') ADVANCE(119);
      END_STATE();
    case 81:
      if (lookahead == 'h') ADVANCE(85);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(88);
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 88:
      if (lookahead == 'j') ADVANCE(225);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(199);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(198);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(162);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(154);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 94:
      if (lookahead == 'm') ADVANCE(201);
      END_STATE();
    case 95:
      if (lookahead == 'm') ADVANCE(200);
      END_STATE();
    case 96:
      if (lookahead == 'm') ADVANCE(68);
      END_STATE();
    case 97:
      if (lookahead == 'm') ADVANCE(57);
      END_STATE();
    case 98:
      if (lookahead == 'm') ADVANCE(135);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(160);
      if (lookahead == 't') ADVANCE(214);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(138);
      if (lookahead == 'x') ADVANCE(150);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(60);
      if (lookahead == 's') ADVANCE(189);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(229);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(206);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(59);
      if (lookahead == 's') ADVANCE(189);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(96);
      if (lookahead == 'u') ADVANCE(123);
      if (lookahead == 'y') ADVANCE(141);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 120:
      if (lookahead == 'p') ADVANCE(77);
      END_STATE();
    case 121:
      if (lookahead == 'q') ADVANCE(155);
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 131:
      if (lookahead == 's') ADVANCE(189);
      END_STATE();
    case 132:
      if (lookahead == 's') ADVANCE(183);
      END_STATE();
    case 133:
      if (lookahead == 's') ADVANCE(197);
      END_STATE();
    case 134:
      if (lookahead == 's') ADVANCE(203);
      END_STATE();
    case 135:
      if (lookahead == 's') ADVANCE(204);
      END_STATE();
    case 136:
      if (lookahead == 's') ADVANCE(196);
      END_STATE();
    case 137:
      if (lookahead == 's') ADVANCE(185);
      END_STATE();
    case 138:
      if (lookahead == 's') ADVANCE(156);
      END_STATE();
    case 139:
      if (lookahead == 's') ADVANCE(146);
      END_STATE();
    case 140:
      if (lookahead == 's') ADVANCE(147);
      END_STATE();
    case 141:
      if (lookahead == 's') ADVANCE(151);
      END_STATE();
    case 142:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(192);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(213);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 153:
      if (lookahead == 'u') ADVANCE(102);
      END_STATE();
    case 154:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 155:
      if (lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 156:
      if (lookahead == 'u') ADVANCE(126);
      END_STATE();
    case 157:
      if (lookahead == 'u') ADVANCE(128);
      END_STATE();
    case 158:
      if (lookahead == 'w') ADVANCE(221);
      if (lookahead == 'x') ADVANCE(145);
      END_STATE();
    case 159:
      if (lookahead == 'x') ADVANCE(150);
      END_STATE();
    case 160:
      if (lookahead == 'y') ADVANCE(231);
      END_STATE();
    case 161:
      if (lookahead == 'y') ADVANCE(174);
      END_STATE();
    case 162:
      if (lookahead == 'y') ADVANCE(172);
      END_STATE();
    case 163:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      END_STATE();
    case 164:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 165:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 166:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 167:
      if (eof) ADVANCE(168);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == ')') ADVANCE(182);
      if (lookahead == '+') ADVANCE(235);
      if (lookahead == ',') ADVANCE(188);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '.') ADVANCE(177);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == ';') ADVANCE(212);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '@') ADVANCE(217);
      if (lookahead == '[') ADVANCE(207);
      if (lookahead == 'd') ADVANCE(117);
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead == 'i') ADVANCE(105);
      if (lookahead == 'm') ADVANCE(51);
      if (lookahead == 'p') ADVANCE(52);
      if (lookahead == 't') ADVANCE(122);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '|') ADVANCE(249);
      if (lookahead == '}') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(167)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_boot);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_initially);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_next);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_property);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(234);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(236);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_machine);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_ensures);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_ensures);
      if (lookahead == '\'') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_requires);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_requires);
      if (lookahead == '\'') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_model_contract_token1);
      if (lookahead == 'd') ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_some);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_some);
      if (lookahead == '\'') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_atmost);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_atmost);
      if (lookahead == '\'') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_atleast);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_atleast);
      if (lookahead == '\'') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_includes);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_model);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_partial);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_transform);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_system);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_system);
      if (lookahead == '\'') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_returns);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_conforms);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_conforms);
      if (lookahead == '\'') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_domain);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(216);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(215);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_at);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_at);
      if (lookahead == 'l') ADVANCE(71);
      if (lookahead == 'm') ADVANCE(116);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead == '=') ADVANCE(218);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_EQ);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(233);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '\'') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_inj);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_inj);
      if (lookahead == '\'') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_bij);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_bij);
      if (lookahead == '\'') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_sur);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_sur);
      if (lookahead == '\'') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_fun);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_fun);
      if (lookahead == '\'') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_any);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_any);
      if (lookahead == '\'') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_digits);
      if (lookahead == '.') ADVANCE(163);
      if (lookahead == '/') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_digits);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_real);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_frac);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(240);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(247);
      if (lookahead == '"') ADVANCE(319);
      if (lookahead == '\\') ADVANCE(320);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '*') ADVANCE(244);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(243);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(243);
      if (lookahead == '/') ADVANCE(242);
      if (lookahead == '\\') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(247);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(245);
      if (lookahead == '\\') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(247);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == '\'') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '/') ADVANCE(319);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(257);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(259);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == '.') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == 'D') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == 'I') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == 'a') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == 'e') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == 'e') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == 'e') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == 'e') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == 'e') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == 'e') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == 'e') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == 'f') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == 'i') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == 'i') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == 'j') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == 'j') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == 'l') ADVANCE(266);
      if (lookahead == 'm') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == 'm') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == 'm') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == 'm') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == 'n') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == 'n') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == 'n') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == 'n') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == 'n') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == 'o') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == 'o') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == 'o') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == 'o') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == 'o') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == 'q') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == 'r') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == 'r') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == 'r') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == 'r') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == 's') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == 's') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == 's') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == 's') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == 's') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == 's') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == 's') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == 't') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == 't') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == 't') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == 't') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == 'u') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == 'u') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == 'u') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == 'u') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == 'w') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == 'y') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == 'y') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(260);
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
      if (lookahead == '.') ADVANCE(165);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_qualid);
      if (lookahead == '\'') ADVANCE(316);
      if (lookahead == '.') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(319);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(242);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 167},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 13},
  [15] = {.lex_state = 15},
  [16] = {.lex_state = 167},
  [17] = {.lex_state = 167},
  [18] = {.lex_state = 167},
  [19] = {.lex_state = 167},
  [20] = {.lex_state = 27},
  [21] = {.lex_state = 24},
  [22] = {.lex_state = 17},
  [23] = {.lex_state = 17},
  [24] = {.lex_state = 24},
  [25] = {.lex_state = 17},
  [26] = {.lex_state = 17},
  [27] = {.lex_state = 17},
  [28] = {.lex_state = 19},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 24},
  [31] = {.lex_state = 19},
  [32] = {.lex_state = 19},
  [33] = {.lex_state = 19},
  [34] = {.lex_state = 17},
  [35] = {.lex_state = 19},
  [36] = {.lex_state = 24},
  [37] = {.lex_state = 24},
  [38] = {.lex_state = 24},
  [39] = {.lex_state = 17},
  [40] = {.lex_state = 17},
  [41] = {.lex_state = 24},
  [42] = {.lex_state = 24},
  [43] = {.lex_state = 19},
  [44] = {.lex_state = 24},
  [45] = {.lex_state = 24},
  [46] = {.lex_state = 17},
  [47] = {.lex_state = 24},
  [48] = {.lex_state = 24},
  [49] = {.lex_state = 27},
  [50] = {.lex_state = 17},
  [51] = {.lex_state = 21},
  [52] = {.lex_state = 21},
  [53] = {.lex_state = 17},
  [54] = {.lex_state = 17},
  [55] = {.lex_state = 17},
  [56] = {.lex_state = 17},
  [57] = {.lex_state = 17},
  [58] = {.lex_state = 17},
  [59] = {.lex_state = 17},
  [60] = {.lex_state = 17},
  [61] = {.lex_state = 17},
  [62] = {.lex_state = 17},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 27},
  [67] = {.lex_state = 27},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 27},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 27},
  [73] = {.lex_state = 7},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 9},
  [76] = {.lex_state = 9},
  [77] = {.lex_state = 27},
  [78] = {.lex_state = 7},
  [79] = {.lex_state = 27},
  [80] = {.lex_state = 7},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 27},
  [83] = {.lex_state = 7},
  [84] = {.lex_state = 9},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 7},
  [87] = {.lex_state = 9},
  [88] = {.lex_state = 27},
  [89] = {.lex_state = 27},
  [90] = {.lex_state = 9},
  [91] = {.lex_state = 9},
  [92] = {.lex_state = 7},
  [93] = {.lex_state = 7},
  [94] = {.lex_state = 17},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 27},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 17},
  [99] = {.lex_state = 27},
  [100] = {.lex_state = 27},
  [101] = {.lex_state = 17},
  [102] = {.lex_state = 27},
  [103] = {.lex_state = 27},
  [104] = {.lex_state = 27},
  [105] = {.lex_state = 9},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 27},
  [108] = {.lex_state = 167},
  [109] = {.lex_state = 27},
  [110] = {.lex_state = 23},
  [111] = {.lex_state = 17},
  [112] = {.lex_state = 23},
  [113] = {.lex_state = 23},
  [114] = {.lex_state = 23},
  [115] = {.lex_state = 27},
  [116] = {.lex_state = 17},
  [117] = {.lex_state = 17},
  [118] = {.lex_state = 27},
  [119] = {.lex_state = 17},
  [120] = {.lex_state = 27},
  [121] = {.lex_state = 17},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 17},
  [124] = {.lex_state = 23},
  [125] = {.lex_state = 27},
  [126] = {.lex_state = 27},
  [127] = {.lex_state = 167},
  [128] = {.lex_state = 167},
  [129] = {.lex_state = 167},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 23},
  [132] = {.lex_state = 167},
  [133] = {.lex_state = 167},
  [134] = {.lex_state = 167},
  [135] = {.lex_state = 167},
  [136] = {.lex_state = 167},
  [137] = {.lex_state = 27},
  [138] = {.lex_state = 167},
  [139] = {.lex_state = 167},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 28},
  [143] = {.lex_state = 167},
  [144] = {.lex_state = 167},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 167},
  [147] = {.lex_state = 167},
  [148] = {.lex_state = 167},
  [149] = {.lex_state = 17},
  [150] = {.lex_state = 167},
  [151] = {.lex_state = 167},
  [152] = {.lex_state = 167},
  [153] = {.lex_state = 17},
  [154] = {.lex_state = 167},
  [155] = {.lex_state = 23},
  [156] = {.lex_state = 167},
  [157] = {.lex_state = 167},
  [158] = {.lex_state = 167},
  [159] = {.lex_state = 167},
  [160] = {.lex_state = 167},
  [161] = {.lex_state = 17},
  [162] = {.lex_state = 167},
  [163] = {.lex_state = 167},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 28},
  [167] = {.lex_state = 167},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 167},
  [174] = {.lex_state = 167},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 167},
  [177] = {.lex_state = 17},
  [178] = {.lex_state = 17},
  [179] = {.lex_state = 17},
  [180] = {.lex_state = 17},
  [181] = {.lex_state = 28},
  [182] = {.lex_state = 17},
  [183] = {.lex_state = 17},
  [184] = {.lex_state = 167},
  [185] = {.lex_state = 28},
  [186] = {.lex_state = 167},
  [187] = {.lex_state = 28},
  [188] = {.lex_state = 167},
  [189] = {.lex_state = 28},
  [190] = {.lex_state = 167},
  [191] = {.lex_state = 17},
  [192] = {.lex_state = 28},
  [193] = {.lex_state = 28},
  [194] = {.lex_state = 17},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 167},
  [197] = {.lex_state = 28},
  [198] = {.lex_state = 17},
  [199] = {.lex_state = 28},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 28},
  [203] = {.lex_state = 167},
  [204] = {.lex_state = 17},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 28},
  [208] = {.lex_state = 167},
  [209] = {.lex_state = 167},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 17},
  [214] = {.lex_state = 23},
  [215] = {.lex_state = 17},
  [216] = {.lex_state = 167},
  [217] = {.lex_state = 167},
  [218] = {.lex_state = 17},
  [219] = {.lex_state = 167},
  [220] = {.lex_state = 167},
  [221] = {.lex_state = 167},
  [222] = {.lex_state = 167},
  [223] = {.lex_state = 167},
  [224] = {.lex_state = 17},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 28},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 167},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 17},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 167},
  [241] = {.lex_state = 7},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 28},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 167},
  [248] = {.lex_state = 167},
  [249] = {.lex_state = 7},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 36},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 167},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 7},
  [262] = {.lex_state = 167},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 167},
  [270] = {.lex_state = 167},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 28},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 167},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 167},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 7},
  [283] = {.lex_state = 28},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 246},
  [289] = {.lex_state = 167},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 167},
  [292] = {.lex_state = 167},
  [293] = {.lex_state = 167},
  [294] = {.lex_state = 167},
  [295] = {.lex_state = 28},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 7},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 167},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 167},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 167},
  [310] = {.lex_state = 7},
  [311] = {.lex_state = 7},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 7},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 167},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 28},
  [322] = {.lex_state = 28},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 28},
  [325] = {.lex_state = 167},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 167},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 28},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 167},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 167},
  [345] = {.lex_state = 167},
  [346] = {.lex_state = 167},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 167},
  [350] = {.lex_state = 167},
  [351] = {.lex_state = 246},
  [352] = {.lex_state = 167},
  [353] = {.lex_state = 28},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 7},
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
    [anon_sym_mod] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [sym_qualid] = ACTIONS(1),
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
      sym_bareid,
    ACTIONS(39), 1,
      sym_qualid,
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
      sym_bareid,
    ACTIONS(39), 1,
      sym_qualid,
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
      sym_bareid,
    ACTIONS(72), 1,
      sym_qualid,
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
      sym_qualid,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    ACTIONS(77), 1,
      anon_sym_conforms,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      sym_bareid,
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
      sym_qualid,
    ACTIONS(77), 1,
      anon_sym_conforms,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      sym_bareid,
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
      sym_bareid,
    ACTIONS(114), 1,
      sym_qualid,
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
      sym_qualid,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    ACTIONS(119), 1,
      anon_sym_ensures,
    ACTIONS(121), 1,
      anon_sym_requires,
    ACTIONS(123), 1,
      sym_bareid,
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
      sym_bareid,
    ACTIONS(154), 1,
      sym_qualid,
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
      sym_qualid,
    ACTIONS(119), 1,
      anon_sym_ensures,
    ACTIONS(121), 1,
      anon_sym_requires,
    ACTIONS(123), 1,
      sym_bareid,
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
      sym_bareid,
    ACTIONS(39), 1,
      sym_qualid,
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
      sym_bareid,
    ACTIONS(175), 1,
      sym_qualid,
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
      sym_qualid,
    ACTIONS(77), 1,
      anon_sym_conforms,
    ACTIONS(81), 1,
      sym_bareid,
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
      sym_bareid,
    ACTIONS(175), 1,
      sym_qualid,
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
      sym_bareid,
    ACTIONS(175), 1,
      sym_qualid,
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
      anon_sym_mod,
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
      anon_sym_mod,
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
      sym_qualid,
    ACTIONS(208), 1,
      sym_bareid,
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
      sym_qualid,
    ACTIONS(123), 1,
      sym_bareid,
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
      anon_sym_mod,
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
      sym_qualid,
    ACTIONS(123), 1,
      sym_bareid,
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
      sym_qualid,
    ACTIONS(208), 1,
      sym_bareid,
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
      sym_qualid,
    ACTIONS(208), 1,
      sym_bareid,
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
      sym_bareid,
    ACTIONS(175), 1,
      sym_qualid,
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
      sym_qualid,
    ACTIONS(119), 1,
      anon_sym_ensures,
    ACTIONS(121), 1,
      anon_sym_requires,
    ACTIONS(123), 1,
      sym_bareid,
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
      anon_sym_mod,
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
      sym_bareid,
    ACTIONS(175), 1,
      sym_qualid,
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
      sym_bareid,
    ACTIONS(175), 1,
      sym_qualid,
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
      sym_bareid,
    ACTIONS(175), 1,
      sym_qualid,
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
      sym_qualid,
    ACTIONS(230), 1,
      anon_sym_RPAREN,
    ACTIONS(232), 1,
      sym_bareid,
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
      sym_bareid,
    ACTIONS(175), 1,
      sym_qualid,
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
  [2036] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_SLASH,
    STATE(56), 1,
      sym_binop,
    ACTIONS(236), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(216), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(234), 9,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2067] = 4,
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
      anon_sym_mod,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2094] = 6,
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
      anon_sym_mod,
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
  [2125] = 17,
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
    ACTIONS(208), 1,
      sym_bareid,
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
  [2178] = 16,
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
    ACTIONS(208), 1,
      sym_bareid,
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
  [2228] = 3,
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
      anon_sym_mod,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2252] = 3,
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
      anon_sym_mod,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2276] = 16,
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
  [2326] = 3,
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
      anon_sym_mod,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2350] = 3,
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
      anon_sym_mod,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2374] = 16,
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
  [2424] = 3,
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
      anon_sym_mod,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2448] = 3,
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
      anon_sym_mod,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2472] = 3,
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
      anon_sym_mod,
  [2495] = 15,
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
  [2542] = 13,
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
  [2585] = 13,
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
  [2628] = 14,
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
  [2672] = 14,
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
    ACTIONS(208), 1,
      sym_bareid,
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
  [2716] = 14,
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
    ACTIONS(208), 1,
      sym_bareid,
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
  [2760] = 14,
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
  [2804] = 14,
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
    ACTIONS(208), 1,
      sym_bareid,
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
  [2848] = 14,
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
    ACTIONS(208), 1,
      sym_bareid,
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
  [2892] = 14,
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
    ACTIONS(208), 1,
      sym_bareid,
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
  [2936] = 14,
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
    ACTIONS(208), 1,
      sym_bareid,
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
  [2980] = 14,
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
    ACTIONS(208), 1,
      sym_bareid,
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
  [3024] = 14,
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
    ACTIONS(208), 1,
      sym_bareid,
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
  [3068] = 3,
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
  [3089] = 3,
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
  [3110] = 3,
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
  [3131] = 5,
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
      anon_sym_mod,
    ACTIONS(234), 7,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [3156] = 5,
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
      anon_sym_mod,
    ACTIONS(238), 7,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [3181] = 3,
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
  [3202] = 3,
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
  [3223] = 3,
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
      anon_sym_mod,
  [3244] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 4,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      sym_bareid,
    ACTIONS(288), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3265] = 4,
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
      anon_sym_mod,
  [3288] = 3,
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
  [3308] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 4,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      sym_bareid,
    ACTIONS(298), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3328] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 3,
      anon_sym_conforms,
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
  [3348] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 3,
      anon_sym_conforms,
      sym_digits,
      sym_bareid,
    ACTIONS(288), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3368] = 3,
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
      anon_sym_mod,
  [3388] = 3,
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
  [3408] = 3,
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
      anon_sym_mod,
  [3428] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 4,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      sym_bareid,
    ACTIONS(306), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3448] = 11,
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
  [3484] = 3,
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
      anon_sym_mod,
  [3504] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 4,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      sym_bareid,
    ACTIONS(320), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3524] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 3,
      anon_sym_conforms,
      sym_digits,
      sym_bareid,
    ACTIONS(324), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3544] = 3,
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
  [3564] = 3,
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
  [3584] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 3,
      anon_sym_conforms,
      sym_digits,
      sym_bareid,
    ACTIONS(336), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3604] = 5,
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
      anon_sym_mod,
    ACTIONS(340), 6,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [3628] = 3,
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
      anon_sym_mod,
  [3648] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 3,
      anon_sym_conforms,
      sym_digits,
      sym_bareid,
    ACTIONS(342), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3668] = 3,
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
  [3688] = 3,
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
  [3708] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 4,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      sym_bareid,
    ACTIONS(354), 7,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3727] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(208), 1,
      sym_bareid,
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
  [3762] = 10,
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
  [3795] = 5,
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
      anon_sym_mod,
  [3818] = 10,
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
  [3851] = 10,
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
  [3883] = 4,
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
      anon_sym_mod,
  [3903] = 4,
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
      anon_sym_mod,
  [3923] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(208), 1,
      sym_bareid,
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
  [3955] = 5,
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
      anon_sym_mod,
    ACTIONS(395), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [3977] = 5,
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
      anon_sym_mod,
    ACTIONS(397), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [3999] = 5,
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
      anon_sym_mod,
    ACTIONS(399), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [4021] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 3,
      anon_sym_conforms,
      sym_digits,
      sym_bareid,
    ACTIONS(354), 7,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [4039] = 3,
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
  [4056] = 4,
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
      anon_sym_mod,
  [4075] = 4,
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
  [4094] = 4,
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
      anon_sym_mod,
  [4113] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(266), 1,
      sym_qualid,
    ACTIONS(415), 1,
      anon_sym_any,
    ACTIONS(417), 1,
      sym_bareid,
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
  [4144] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(419), 1,
      sym_digits,
    ACTIONS(423), 1,
      sym_bareid,
    STATE(244), 1,
      sym_enum_cnst,
    STATE(259), 1,
      sym_string,
    STATE(320), 1,
      sym_enum_list,
    ACTIONS(421), 3,
      sym_real,
      sym_frac,
      sym_qualid,
  [4171] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(266), 1,
      sym_qualid,
    ACTIONS(415), 1,
      anon_sym_any,
    ACTIONS(417), 1,
      sym_bareid,
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
  [4202] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(266), 1,
      sym_qualid,
    ACTIONS(415), 1,
      anon_sym_any,
    ACTIONS(417), 1,
      sym_bareid,
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
  [4233] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(266), 1,
      sym_qualid,
    ACTIONS(415), 1,
      anon_sym_any,
    ACTIONS(417), 1,
      sym_bareid,
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
  [4264] = 5,
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
      anon_sym_mod,
  [4284] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 2,
      sym_digits,
      sym_bareid,
    ACTIONS(427), 6,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [4300] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(419), 1,
      sym_digits,
    ACTIONS(423), 1,
      sym_bareid,
    STATE(259), 1,
      sym_string,
    STATE(264), 1,
      sym_enum_cnst,
    ACTIONS(421), 3,
      sym_real,
      sym_frac,
      sym_qualid,
  [4324] = 5,
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
      anon_sym_mod,
  [4344] = 3,
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
  [4360] = 5,
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
      anon_sym_mod,
  [4380] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 2,
      sym_digits,
      sym_bareid,
    ACTIONS(439), 6,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [4396] = 2,
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
  [4410] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 2,
      sym_digits,
      sym_bareid,
    ACTIONS(354), 6,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [4426] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(266), 1,
      sym_qualid,
    ACTIONS(415), 1,
      anon_sym_any,
    ACTIONS(417), 1,
      sym_bareid,
    STATE(127), 1,
      sym_unncmp,
    STATE(147), 1,
      sym_typeid,
    STATE(203), 1,
      sym_unnbody,
    STATE(222), 1,
      sym_field,
  [4454] = 5,
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
      anon_sym_mod,
  [4473] = 5,
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
      anon_sym_mod,
  [4492] = 4,
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
  [4509] = 2,
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
  [4522] = 2,
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
  [4535] = 2,
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
  [4548] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(264), 1,
      sym_bareid,
    ACTIONS(266), 1,
      sym_qualid,
    ACTIONS(459), 1,
      anon_sym_any,
    STATE(127), 1,
      sym_unncmp,
    STATE(147), 1,
      sym_typeid,
    STATE(221), 1,
      sym_unnbody,
  [4573] = 2,
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
  [4586] = 4,
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
  [4603] = 4,
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
  [4620] = 2,
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
  [4633] = 4,
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
  [4650] = 5,
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
      anon_sym_mod,
  [4669] = 4,
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
  [4686] = 4,
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
  [4703] = 2,
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
  [4716] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [4728] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym_bareid,
    STATE(275), 1,
      sym_mod_apply,
    STATE(293), 1,
      sym_choice_list,
    STATE(304), 1,
      sym_mod_ref,
    STATE(140), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [4748] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [4760] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [4772] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [4784] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 6,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [4796] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_PLUS,
  [4808] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_PLUS,
  [4820] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(264), 1,
      sym_bareid,
    ACTIONS(266), 1,
      sym_qualid,
    STATE(127), 1,
      sym_unncmp,
    STATE(147), 1,
      sym_typeid,
    STATE(209), 1,
      sym_unnbody,
  [4842] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 6,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [4854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [4866] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [4878] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(264), 1,
      sym_bareid,
    ACTIONS(266), 1,
      sym_qualid,
    STATE(127), 1,
      sym_unncmp,
    STATE(147), 1,
      sym_typeid,
    STATE(208), 1,
      sym_unnbody,
  [4900] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_PLUS,
  [4912] = 3,
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
  [4926] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [4938] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [4950] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_PLUS,
  [4962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [4974] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [4986] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(264), 1,
      sym_bareid,
    ACTIONS(266), 1,
      sym_qualid,
    STATE(127), 1,
      sym_unncmp,
    STATE(147), 1,
      sym_typeid,
    STATE(252), 1,
      sym_unnbody,
  [5008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [5020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [5032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [5044] = 6,
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
  [5064] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym_bareid,
    STATE(275), 1,
      sym_mod_apply,
    STATE(302), 1,
      sym_choice_list,
    STATE(304), 1,
      sym_mod_ref,
    STATE(140), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5084] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [5096] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [5108] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [5120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [5132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [5144] = 6,
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
  [5164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [5176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 6,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      anon_sym_domain,
  [5188] = 6,
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
  [5207] = 4,
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
  [5222] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(208), 1,
      sym_bareid,
    STATE(237), 1,
      sym_setting,
    STATE(282), 1,
      sym_id,
    STATE(347), 1,
      sym_setting_list,
  [5241] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(208), 1,
      sym_bareid,
    STATE(164), 1,
      sym_update,
    STATE(261), 1,
      sym_id,
    STATE(311), 1,
      sym_step_or_update_lhs,
  [5260] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(208), 1,
      sym_bareid,
    STATE(218), 1,
      sym_step,
    STATE(261), 1,
      sym_id,
    STATE(358), 1,
      sym_step_or_update_lhs,
  [5279] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(208), 1,
      sym_bareid,
    STATE(164), 1,
      sym_step,
    STATE(261), 1,
      sym_id,
    STATE(315), 1,
      sym_step_or_update_lhs,
  [5298] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym_bareid,
    STATE(304), 1,
      sym_mod_ref,
    STATE(346), 1,
      sym_mod_apply,
    STATE(140), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5315] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(208), 1,
      sym_bareid,
    STATE(237), 1,
      sym_setting,
    STATE(282), 1,
      sym_id,
    STATE(348), 1,
      sym_setting_list,
  [5334] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(208), 1,
      sym_bareid,
    STATE(237), 1,
      sym_setting,
    STATE(282), 1,
      sym_id,
    STATE(340), 1,
      sym_setting_list,
  [5353] = 4,
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
  [5368] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym_bareid,
    STATE(210), 1,
      sym_mod_ref,
    STATE(274), 1,
      sym_mod_refs,
    STATE(140), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5385] = 4,
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
  [5400] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym_bareid,
    STATE(210), 1,
      sym_mod_ref,
    STATE(265), 1,
      sym_mod_refs,
    STATE(140), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5417] = 4,
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
  [5432] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_RPAREN,
    ACTIONS(556), 1,
      sym_bareid,
    STATE(250), 1,
      sym_val_or_model_program,
    STATE(253), 1,
      sym_mod_ref_rename,
    STATE(354), 1,
      sym_vom_param_list,
  [5451] = 4,
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
  [5466] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(208), 1,
      sym_bareid,
    STATE(237), 1,
      sym_setting,
    STATE(282), 1,
      sym_id,
    STATE(308), 1,
      sym_setting_list,
  [5485] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym_bareid,
    STATE(210), 1,
      sym_mod_ref,
    STATE(255), 1,
      sym_mod_refs,
    STATE(140), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5502] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym_bareid,
    STATE(210), 1,
      sym_mod_ref,
    STATE(239), 1,
      sym_mod_refs,
    STATE(140), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5519] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(264), 1,
      sym_bareid,
    ACTIONS(266), 1,
      sym_qualid,
    STATE(147), 1,
      sym_typeid,
    STATE(154), 1,
      sym_unncmp,
  [5538] = 6,
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
  [5557] = 4,
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
  [5572] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      sym_bareid,
    ACTIONS(565), 1,
      anon_sym_RPAREN,
    STATE(250), 1,
      sym_val_or_model_program,
    STATE(253), 1,
      sym_mod_ref_rename,
    STATE(337), 1,
      sym_vom_param_list,
  [5591] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(208), 1,
      sym_bareid,
    STATE(237), 1,
      sym_setting,
    STATE(282), 1,
      sym_id,
    STATE(286), 1,
      sym_setting_list,
  [5610] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym_bareid,
    STATE(304), 1,
      sym_mod_ref,
    STATE(325), 1,
      sym_mod_apply,
    STATE(140), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5627] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
    ACTIONS(569), 2,
      anon_sym_includes,
      anon_sym_extends,
  [5639] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 4,
      anon_sym_LBRACE,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [5649] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      sym_bareid,
    STATE(250), 1,
      sym_val_or_model_program,
    STATE(253), 1,
      sym_mod_ref_rename,
    STATE(355), 1,
      sym_vom_param_list,
  [5665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [5675] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      sym_bareid,
    ACTIONS(531), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_qualid,
  [5687] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 4,
      anon_sym_LBRACE,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [5697] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_machine,
    ACTIONS(579), 1,
      anon_sym_LBRACE,
    STATE(211), 2,
      sym_machine_sig,
      aux_sym_machine_sig_config_repeat1,
  [5711] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym_bareid,
    STATE(205), 1,
      sym_mod_ref,
    STATE(140), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5725] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [5735] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [5745] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_COMMA,
    ACTIONS(585), 3,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LBRACK,
  [5757] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_LBRACE,
    ACTIONS(591), 1,
      anon_sym_machine,
    STATE(211), 2,
      sym_machine_sig,
      aux_sym_machine_sig_config_repeat1,
  [5771] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
    ACTIONS(596), 2,
      anon_sym_includes,
      anon_sym_extends,
  [5783] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(208), 1,
      sym_bareid,
    STATE(261), 1,
      sym_id,
    STATE(297), 1,
      sym_step_or_update_lhs,
  [5799] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 2,
      anon_sym_LBRACE,
      sym_qualid,
    ACTIONS(600), 2,
      anon_sym_any,
      sym_bareid,
  [5811] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(208), 1,
      sym_bareid,
    STATE(256), 1,
      sym_setting,
    STATE(282), 1,
      sym_id,
  [5827] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_SEMI,
    STATE(220), 1,
      aux_sym_body_list_repeat1,
    ACTIONS(602), 2,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [5841] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_SEMI,
    STATE(216), 1,
      aux_sym_body_list_repeat1,
    ACTIONS(606), 2,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [5855] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      sym_bareid,
    ACTIONS(608), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_qualid,
  [5867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5877] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      anon_sym_SEMI,
    STATE(220), 1,
      aux_sym_body_list_repeat1,
    ACTIONS(612), 2,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [5891] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [5901] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [5911] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5921] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      sym_bareid,
    ACTIONS(619), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_qualid,
  [5933] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 4,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
  [5943] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym_bareid,
    STATE(201), 1,
      sym_mod_ref,
    STATE(140), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5957] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_RPAREN,
    ACTIONS(625), 1,
      anon_sym_COMMA,
    STATE(227), 1,
      aux_sym_model_param_list_repeat1,
  [5970] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(628), 1,
      anon_sym_LBRACE,
    STATE(336), 1,
      sym_config,
  [5983] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(630), 1,
      anon_sym_LBRACE,
    STATE(281), 1,
      sym_config,
  [5996] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(632), 1,
      anon_sym_LBRACE,
    STATE(278), 1,
      sym_config,
  [6009] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      anon_sym_COMMA,
    ACTIONS(637), 1,
      anon_sym_RBRACK,
    STATE(231), 1,
      aux_sym_setting_list_repeat1,
  [6022] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      anon_sym_RPAREN,
    ACTIONS(641), 1,
      anon_sym_COMMA,
    STATE(245), 1,
      aux_sym_model_param_list_repeat1,
  [6035] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      anon_sym_RBRACE,
    ACTIONS(645), 1,
      anon_sym_COMMA,
    STATE(233), 1,
      aux_sym_enum_list_repeat1,
  [6048] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(112), 1,
      sym_maparrow,
    ACTIONS(648), 2,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [6059] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      anon_sym_RBRACE,
    ACTIONS(652), 1,
      anon_sym_PIPE,
    STATE(132), 1,
      sym_compr_rest,
  [6072] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      anon_sym_RBRACE,
    ACTIONS(656), 1,
      anon_sym_COMMA,
    STATE(233), 1,
      aux_sym_enum_list_repeat1,
  [6085] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_COMMA,
    ACTIONS(660), 1,
      anon_sym_RBRACK,
    STATE(242), 1,
      aux_sym_setting_list_repeat1,
  [6098] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(208), 1,
      sym_bareid,
    STATE(349), 1,
      sym_id,
  [6111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 3,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LBRACK,
  [6120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 3,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [6129] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_DOT_DOT,
    ACTIONS(664), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [6140] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_COMMA,
    ACTIONS(668), 1,
      anon_sym_RBRACK,
    STATE(231), 1,
      aux_sym_setting_list_repeat1,
  [6153] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      sym_bareid,
    STATE(232), 1,
      sym_mod_ref_rename,
    STATE(326), 1,
      sym_model_param_list,
  [6166] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      anon_sym_COMMA,
    ACTIONS(672), 1,
      anon_sym_RBRACE,
    STATE(236), 1,
      aux_sym_enum_list_repeat1,
  [6179] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_COMMA,
    ACTIONS(674), 1,
      anon_sym_RPAREN,
    STATE(227), 1,
      aux_sym_model_param_list_repeat1,
  [6192] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_LPAREN,
    STATE(303), 1,
      sym_machine_sig_in,
  [6202] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      anon_sym_DOT,
    ACTIONS(680), 1,
      anon_sym_COMMA,
  [6212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 2,
      anon_sym_DOT,
      anon_sym_COLON_DASH,
  [6220] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_COLON_COLON,
    ACTIONS(684), 1,
      anon_sym_COLON,
  [6230] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      anon_sym_RPAREN,
    ACTIONS(688), 1,
      anon_sym_COMMA,
  [6240] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      anon_sym_system,
    ACTIONS(692), 1,
      sym_bareid,
  [6250] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6266] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 2,
      anon_sym_DOT,
      anon_sym_COLON_DASH,
  [6274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [6282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6290] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(122), 1,
      sym_string,
  [6300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6308] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [6316] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6324] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      anon_sym_EQ,
    ACTIONS(708), 1,
      anon_sym_COMMA,
  [6334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [6342] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(260), 1,
      sym_string,
  [6352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [6360] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 2,
      anon_sym_LBRACE,
      anon_sym_machine,
  [6368] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(130), 1,
      sym_string,
  [6378] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6386] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [6394] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      anon_sym_DOT,
    ACTIONS(718), 1,
      anon_sym_COMMA,
  [6404] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [6412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [6420] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      sym_bareid,
    STATE(267), 1,
      sym_mod_ref_rename,
  [6430] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_RPAREN,
    ACTIONS(726), 1,
      anon_sym_COMMA,
  [6440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [6448] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      anon_sym_DOT,
    ACTIONS(732), 1,
      anon_sym_SEMI,
  [6458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_RBRACE,
  [6465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_DOT,
  [6472] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_LBRACE,
  [6479] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_LBRACE,
  [6486] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_returns,
  [6493] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 1,
      anon_sym_LBRACE,
  [6500] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      anon_sym_EQ,
  [6507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      sym_bareid,
  [6514] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_RBRACE,
  [6521] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      anon_sym_returns,
  [6528] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      anon_sym_RBRACK,
  [6535] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 1,
      anon_sym_of,
  [6542] = 2,
    ACTIONS(758), 1,
      aux_sym_string_token1,
    ACTIONS(760), 1,
      sym_comment,
  [6549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      sym_digits,
  [6556] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_RBRACE,
  [6563] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      anon_sym_DOT,
  [6570] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_DOT,
  [6577] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_DOT,
  [6584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_DOT,
  [6591] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      sym_bareid,
  [6598] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_RPAREN,
  [6605] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      anon_sym_EQ,
  [6612] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      anon_sym_DQUOTE,
  [6619] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      aux_sym_model_contract_token1,
  [6626] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      anon_sym_RPAREN,
  [6633] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      aux_sym_model_contract_token1,
  [6640] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      anon_sym_DOT,
  [6647] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_of,
  [6654] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_LPAREN,
  [6661] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_RBRACE,
  [6668] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      anon_sym_of,
  [6675] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      anon_sym_DOT,
  [6682] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      anon_sym_RBRACK,
  [6689] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      anon_sym_DOT,
  [6696] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_EQ,
  [6703] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      anon_sym_EQ,
  [6710] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 1,
      anon_sym_LPAREN,
  [6717] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_RPAREN,
  [6724] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_LPAREN,
  [6731] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_EQ,
  [6738] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      anon_sym_RPAREN,
  [6745] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym_RPAREN,
  [6752] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      anon_sym_RPAREN,
  [6759] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      anon_sym_DOT,
  [6766] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      anon_sym_RBRACE,
  [6773] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      sym_bareid,
  [6780] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      sym_bareid,
  [6787] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      anon_sym_of,
  [6794] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      sym_bareid,
  [6801] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_DOT,
  [6808] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_RPAREN,
  [6815] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 1,
      anon_sym_LBRACE,
  [6822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 1,
      anon_sym_RBRACE,
  [6829] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_COLON_COLON,
  [6836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_LBRACE,
  [6843] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_LBRACE,
  [6850] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      anon_sym_LPAREN,
  [6857] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(848), 1,
      ts_builtin_sym_end,
  [6864] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 1,
      anon_sym_LPAREN,
  [6871] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      sym_bareid,
  [6878] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      anon_sym_LBRACE,
  [6885] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 1,
      anon_sym_RPAREN,
  [6892] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_returns,
  [6899] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_DOT,
  [6906] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_RBRACK,
  [6913] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      anon_sym_LBRACE,
  [6920] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      anon_sym_DQUOTE,
  [6927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      anon_sym_RPAREN,
  [6934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 1,
      anon_sym_DOT,
  [6941] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 1,
      anon_sym_DOT,
  [6948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      anon_sym_DOT,
  [6955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      anon_sym_RBRACK,
  [6962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(878), 1,
      anon_sym_RBRACK,
  [6969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(880), 1,
      anon_sym_DOT,
  [6976] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      anon_sym_DOT,
  [6983] = 2,
    ACTIONS(760), 1,
      sym_comment,
    ACTIONS(884), 1,
      aux_sym_string_token1,
  [6990] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      anon_sym_model,
  [6997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(888), 1,
      sym_bareid,
  [7004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      anon_sym_RPAREN,
  [7011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(892), 1,
      anon_sym_RPAREN,
  [7018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_RBRACE,
  [7025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      anon_sym_of,
  [7032] = 2,
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
  [SMALL_STATE(37)] = 2067,
  [SMALL_STATE(38)] = 2094,
  [SMALL_STATE(39)] = 2125,
  [SMALL_STATE(40)] = 2178,
  [SMALL_STATE(41)] = 2228,
  [SMALL_STATE(42)] = 2252,
  [SMALL_STATE(43)] = 2276,
  [SMALL_STATE(44)] = 2326,
  [SMALL_STATE(45)] = 2350,
  [SMALL_STATE(46)] = 2374,
  [SMALL_STATE(47)] = 2424,
  [SMALL_STATE(48)] = 2448,
  [SMALL_STATE(49)] = 2472,
  [SMALL_STATE(50)] = 2495,
  [SMALL_STATE(51)] = 2542,
  [SMALL_STATE(52)] = 2585,
  [SMALL_STATE(53)] = 2628,
  [SMALL_STATE(54)] = 2672,
  [SMALL_STATE(55)] = 2716,
  [SMALL_STATE(56)] = 2760,
  [SMALL_STATE(57)] = 2804,
  [SMALL_STATE(58)] = 2848,
  [SMALL_STATE(59)] = 2892,
  [SMALL_STATE(60)] = 2936,
  [SMALL_STATE(61)] = 2980,
  [SMALL_STATE(62)] = 3024,
  [SMALL_STATE(63)] = 3068,
  [SMALL_STATE(64)] = 3089,
  [SMALL_STATE(65)] = 3110,
  [SMALL_STATE(66)] = 3131,
  [SMALL_STATE(67)] = 3156,
  [SMALL_STATE(68)] = 3181,
  [SMALL_STATE(69)] = 3202,
  [SMALL_STATE(70)] = 3223,
  [SMALL_STATE(71)] = 3244,
  [SMALL_STATE(72)] = 3265,
  [SMALL_STATE(73)] = 3288,
  [SMALL_STATE(74)] = 3308,
  [SMALL_STATE(75)] = 3328,
  [SMALL_STATE(76)] = 3348,
  [SMALL_STATE(77)] = 3368,
  [SMALL_STATE(78)] = 3388,
  [SMALL_STATE(79)] = 3408,
  [SMALL_STATE(80)] = 3428,
  [SMALL_STATE(81)] = 3448,
  [SMALL_STATE(82)] = 3484,
  [SMALL_STATE(83)] = 3504,
  [SMALL_STATE(84)] = 3524,
  [SMALL_STATE(85)] = 3544,
  [SMALL_STATE(86)] = 3564,
  [SMALL_STATE(87)] = 3584,
  [SMALL_STATE(88)] = 3604,
  [SMALL_STATE(89)] = 3628,
  [SMALL_STATE(90)] = 3648,
  [SMALL_STATE(91)] = 3668,
  [SMALL_STATE(92)] = 3688,
  [SMALL_STATE(93)] = 3708,
  [SMALL_STATE(94)] = 3727,
  [SMALL_STATE(95)] = 3762,
  [SMALL_STATE(96)] = 3795,
  [SMALL_STATE(97)] = 3818,
  [SMALL_STATE(98)] = 3851,
  [SMALL_STATE(99)] = 3883,
  [SMALL_STATE(100)] = 3903,
  [SMALL_STATE(101)] = 3923,
  [SMALL_STATE(102)] = 3955,
  [SMALL_STATE(103)] = 3977,
  [SMALL_STATE(104)] = 3999,
  [SMALL_STATE(105)] = 4021,
  [SMALL_STATE(106)] = 4039,
  [SMALL_STATE(107)] = 4056,
  [SMALL_STATE(108)] = 4075,
  [SMALL_STATE(109)] = 4094,
  [SMALL_STATE(110)] = 4113,
  [SMALL_STATE(111)] = 4144,
  [SMALL_STATE(112)] = 4171,
  [SMALL_STATE(113)] = 4202,
  [SMALL_STATE(114)] = 4233,
  [SMALL_STATE(115)] = 4264,
  [SMALL_STATE(116)] = 4284,
  [SMALL_STATE(117)] = 4300,
  [SMALL_STATE(118)] = 4324,
  [SMALL_STATE(119)] = 4344,
  [SMALL_STATE(120)] = 4360,
  [SMALL_STATE(121)] = 4380,
  [SMALL_STATE(122)] = 4396,
  [SMALL_STATE(123)] = 4410,
  [SMALL_STATE(124)] = 4426,
  [SMALL_STATE(125)] = 4454,
  [SMALL_STATE(126)] = 4473,
  [SMALL_STATE(127)] = 4492,
  [SMALL_STATE(128)] = 4509,
  [SMALL_STATE(129)] = 4522,
  [SMALL_STATE(130)] = 4535,
  [SMALL_STATE(131)] = 4548,
  [SMALL_STATE(132)] = 4573,
  [SMALL_STATE(133)] = 4586,
  [SMALL_STATE(134)] = 4603,
  [SMALL_STATE(135)] = 4620,
  [SMALL_STATE(136)] = 4633,
  [SMALL_STATE(137)] = 4650,
  [SMALL_STATE(138)] = 4669,
  [SMALL_STATE(139)] = 4686,
  [SMALL_STATE(140)] = 4703,
  [SMALL_STATE(141)] = 4716,
  [SMALL_STATE(142)] = 4728,
  [SMALL_STATE(143)] = 4748,
  [SMALL_STATE(144)] = 4760,
  [SMALL_STATE(145)] = 4772,
  [SMALL_STATE(146)] = 4784,
  [SMALL_STATE(147)] = 4796,
  [SMALL_STATE(148)] = 4808,
  [SMALL_STATE(149)] = 4820,
  [SMALL_STATE(150)] = 4842,
  [SMALL_STATE(151)] = 4854,
  [SMALL_STATE(152)] = 4866,
  [SMALL_STATE(153)] = 4878,
  [SMALL_STATE(154)] = 4900,
  [SMALL_STATE(155)] = 4912,
  [SMALL_STATE(156)] = 4926,
  [SMALL_STATE(157)] = 4938,
  [SMALL_STATE(158)] = 4950,
  [SMALL_STATE(159)] = 4962,
  [SMALL_STATE(160)] = 4974,
  [SMALL_STATE(161)] = 4986,
  [SMALL_STATE(162)] = 5008,
  [SMALL_STATE(163)] = 5020,
  [SMALL_STATE(164)] = 5032,
  [SMALL_STATE(165)] = 5044,
  [SMALL_STATE(166)] = 5064,
  [SMALL_STATE(167)] = 5084,
  [SMALL_STATE(168)] = 5096,
  [SMALL_STATE(169)] = 5108,
  [SMALL_STATE(170)] = 5120,
  [SMALL_STATE(171)] = 5132,
  [SMALL_STATE(172)] = 5144,
  [SMALL_STATE(173)] = 5164,
  [SMALL_STATE(174)] = 5176,
  [SMALL_STATE(175)] = 5188,
  [SMALL_STATE(176)] = 5207,
  [SMALL_STATE(177)] = 5222,
  [SMALL_STATE(178)] = 5241,
  [SMALL_STATE(179)] = 5260,
  [SMALL_STATE(180)] = 5279,
  [SMALL_STATE(181)] = 5298,
  [SMALL_STATE(182)] = 5315,
  [SMALL_STATE(183)] = 5334,
  [SMALL_STATE(184)] = 5353,
  [SMALL_STATE(185)] = 5368,
  [SMALL_STATE(186)] = 5385,
  [SMALL_STATE(187)] = 5400,
  [SMALL_STATE(188)] = 5417,
  [SMALL_STATE(189)] = 5432,
  [SMALL_STATE(190)] = 5451,
  [SMALL_STATE(191)] = 5466,
  [SMALL_STATE(192)] = 5485,
  [SMALL_STATE(193)] = 5502,
  [SMALL_STATE(194)] = 5519,
  [SMALL_STATE(195)] = 5538,
  [SMALL_STATE(196)] = 5557,
  [SMALL_STATE(197)] = 5572,
  [SMALL_STATE(198)] = 5591,
  [SMALL_STATE(199)] = 5610,
  [SMALL_STATE(200)] = 5627,
  [SMALL_STATE(201)] = 5639,
  [SMALL_STATE(202)] = 5649,
  [SMALL_STATE(203)] = 5665,
  [SMALL_STATE(204)] = 5675,
  [SMALL_STATE(205)] = 5687,
  [SMALL_STATE(206)] = 5697,
  [SMALL_STATE(207)] = 5711,
  [SMALL_STATE(208)] = 5725,
  [SMALL_STATE(209)] = 5735,
  [SMALL_STATE(210)] = 5745,
  [SMALL_STATE(211)] = 5757,
  [SMALL_STATE(212)] = 5771,
  [SMALL_STATE(213)] = 5783,
  [SMALL_STATE(214)] = 5799,
  [SMALL_STATE(215)] = 5811,
  [SMALL_STATE(216)] = 5827,
  [SMALL_STATE(217)] = 5841,
  [SMALL_STATE(218)] = 5855,
  [SMALL_STATE(219)] = 5867,
  [SMALL_STATE(220)] = 5877,
  [SMALL_STATE(221)] = 5891,
  [SMALL_STATE(222)] = 5901,
  [SMALL_STATE(223)] = 5911,
  [SMALL_STATE(224)] = 5921,
  [SMALL_STATE(225)] = 5933,
  [SMALL_STATE(226)] = 5943,
  [SMALL_STATE(227)] = 5957,
  [SMALL_STATE(228)] = 5970,
  [SMALL_STATE(229)] = 5983,
  [SMALL_STATE(230)] = 5996,
  [SMALL_STATE(231)] = 6009,
  [SMALL_STATE(232)] = 6022,
  [SMALL_STATE(233)] = 6035,
  [SMALL_STATE(234)] = 6048,
  [SMALL_STATE(235)] = 6059,
  [SMALL_STATE(236)] = 6072,
  [SMALL_STATE(237)] = 6085,
  [SMALL_STATE(238)] = 6098,
  [SMALL_STATE(239)] = 6111,
  [SMALL_STATE(240)] = 6120,
  [SMALL_STATE(241)] = 6129,
  [SMALL_STATE(242)] = 6140,
  [SMALL_STATE(243)] = 6153,
  [SMALL_STATE(244)] = 6166,
  [SMALL_STATE(245)] = 6179,
  [SMALL_STATE(246)] = 6192,
  [SMALL_STATE(247)] = 6202,
  [SMALL_STATE(248)] = 6212,
  [SMALL_STATE(249)] = 6220,
  [SMALL_STATE(250)] = 6230,
  [SMALL_STATE(251)] = 6240,
  [SMALL_STATE(252)] = 6250,
  [SMALL_STATE(253)] = 6258,
  [SMALL_STATE(254)] = 6266,
  [SMALL_STATE(255)] = 6274,
  [SMALL_STATE(256)] = 6282,
  [SMALL_STATE(257)] = 6290,
  [SMALL_STATE(258)] = 6300,
  [SMALL_STATE(259)] = 6308,
  [SMALL_STATE(260)] = 6316,
  [SMALL_STATE(261)] = 6324,
  [SMALL_STATE(262)] = 6334,
  [SMALL_STATE(263)] = 6342,
  [SMALL_STATE(264)] = 6352,
  [SMALL_STATE(265)] = 6360,
  [SMALL_STATE(266)] = 6368,
  [SMALL_STATE(267)] = 6378,
  [SMALL_STATE(268)] = 6386,
  [SMALL_STATE(269)] = 6394,
  [SMALL_STATE(270)] = 6404,
  [SMALL_STATE(271)] = 6412,
  [SMALL_STATE(272)] = 6420,
  [SMALL_STATE(273)] = 6430,
  [SMALL_STATE(274)] = 6440,
  [SMALL_STATE(275)] = 6448,
  [SMALL_STATE(276)] = 6458,
  [SMALL_STATE(277)] = 6465,
  [SMALL_STATE(278)] = 6472,
  [SMALL_STATE(279)] = 6479,
  [SMALL_STATE(280)] = 6486,
  [SMALL_STATE(281)] = 6493,
  [SMALL_STATE(282)] = 6500,
  [SMALL_STATE(283)] = 6507,
  [SMALL_STATE(284)] = 6514,
  [SMALL_STATE(285)] = 6521,
  [SMALL_STATE(286)] = 6528,
  [SMALL_STATE(287)] = 6535,
  [SMALL_STATE(288)] = 6542,
  [SMALL_STATE(289)] = 6549,
  [SMALL_STATE(290)] = 6556,
  [SMALL_STATE(291)] = 6563,
  [SMALL_STATE(292)] = 6570,
  [SMALL_STATE(293)] = 6577,
  [SMALL_STATE(294)] = 6584,
  [SMALL_STATE(295)] = 6591,
  [SMALL_STATE(296)] = 6598,
  [SMALL_STATE(297)] = 6605,
  [SMALL_STATE(298)] = 6612,
  [SMALL_STATE(299)] = 6619,
  [SMALL_STATE(300)] = 6626,
  [SMALL_STATE(301)] = 6633,
  [SMALL_STATE(302)] = 6640,
  [SMALL_STATE(303)] = 6647,
  [SMALL_STATE(304)] = 6654,
  [SMALL_STATE(305)] = 6661,
  [SMALL_STATE(306)] = 6668,
  [SMALL_STATE(307)] = 6675,
  [SMALL_STATE(308)] = 6682,
  [SMALL_STATE(309)] = 6689,
  [SMALL_STATE(310)] = 6696,
  [SMALL_STATE(311)] = 6703,
  [SMALL_STATE(312)] = 6710,
  [SMALL_STATE(313)] = 6717,
  [SMALL_STATE(314)] = 6724,
  [SMALL_STATE(315)] = 6731,
  [SMALL_STATE(316)] = 6738,
  [SMALL_STATE(317)] = 6745,
  [SMALL_STATE(318)] = 6752,
  [SMALL_STATE(319)] = 6759,
  [SMALL_STATE(320)] = 6766,
  [SMALL_STATE(321)] = 6773,
  [SMALL_STATE(322)] = 6780,
  [SMALL_STATE(323)] = 6787,
  [SMALL_STATE(324)] = 6794,
  [SMALL_STATE(325)] = 6801,
  [SMALL_STATE(326)] = 6808,
  [SMALL_STATE(327)] = 6815,
  [SMALL_STATE(328)] = 6822,
  [SMALL_STATE(329)] = 6829,
  [SMALL_STATE(330)] = 6836,
  [SMALL_STATE(331)] = 6843,
  [SMALL_STATE(332)] = 6850,
  [SMALL_STATE(333)] = 6857,
  [SMALL_STATE(334)] = 6864,
  [SMALL_STATE(335)] = 6871,
  [SMALL_STATE(336)] = 6878,
  [SMALL_STATE(337)] = 6885,
  [SMALL_STATE(338)] = 6892,
  [SMALL_STATE(339)] = 6899,
  [SMALL_STATE(340)] = 6906,
  [SMALL_STATE(341)] = 6913,
  [SMALL_STATE(342)] = 6920,
  [SMALL_STATE(343)] = 6927,
  [SMALL_STATE(344)] = 6934,
  [SMALL_STATE(345)] = 6941,
  [SMALL_STATE(346)] = 6948,
  [SMALL_STATE(347)] = 6955,
  [SMALL_STATE(348)] = 6962,
  [SMALL_STATE(349)] = 6969,
  [SMALL_STATE(350)] = 6976,
  [SMALL_STATE(351)] = 6983,
  [SMALL_STATE(352)] = 6990,
  [SMALL_STATE(353)] = 6997,
  [SMALL_STATE(354)] = 7004,
  [SMALL_STATE(355)] = 7011,
  [SMALL_STATE(356)] = 7018,
  [SMALL_STATE(357)] = 7025,
  [SMALL_STATE(358)] = 7032,
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
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term, 4),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_term, 4),
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
