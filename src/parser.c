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
#define SYMBOL_COUNT 164
#define ALIAS_COUNT 0
#define TOKEN_COUNT 67
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_ = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_boot = 4,
  anon_sym_initially = 5,
  anon_sym_next = 6,
  anon_sym_property = 7,
  anon_sym_EQ = 8,
  anon_sym_DOT = 9,
  anon_sym_machine = 10,
  anon_sym_of = 11,
  anon_sym_LPAREN = 12,
  anon_sym_RPAREN = 13,
  anon_sym_ensures = 14,
  anon_sym_requires = 15,
  aux_sym_model_contract_token1 = 16,
  anon_sym_COMMA = 17,
  anon_sym_is = 18,
  anon_sym_some = 19,
  anon_sym_atmost = 20,
  anon_sym_atleast = 21,
  anon_sym_includes = 22,
  anon_sym_extends = 23,
  anon_sym_model = 24,
  anon_sym_partial = 25,
  anon_sym_transform = 26,
  anon_sym_system = 27,
  anon_sym_returns = 28,
  anon_sym_conforms = 29,
  anon_sym_LBRACK = 30,
  anon_sym_RBRACK = 31,
  anon_sym_COLON = 32,
  anon_sym_SEMI = 33,
  anon_sym_AT = 34,
  anon_sym_renames = 35,
  anon_sym_COLON_COLON_EQ = 36,
  anon_sym_DASH = 37,
  anon_sym_new = 38,
  anon_sym_inj = 39,
  anon_sym_bij = 40,
  anon_sym_sur = 41,
  anon_sym_fun = 42,
  anon_sym_any = 43,
  anon_sym_DASH_GT = 44,
  anon_sym_EQ_GT = 45,
  anon_sym_PLUS = 46,
  anon_sym_DOT_DOT = 47,
  sym_digits = 48,
  sym_real = 49,
  sym_frac = 50,
  anon_sym_DQUOTE = 51,
  aux_sym_string_token1 = 52,
  anon_sym_COLON_DASH = 53,
  anon_sym_PIPE = 54,
  anon_sym_no = 55,
  anon_sym_STAR = 56,
  anon_sym_SLASH = 57,
  anon_sym_mod = 58,
  anon_sym_BANG_EQ = 59,
  anon_sym_LT = 60,
  anon_sym_LT_EQ = 61,
  anon_sym_GT = 62,
  anon_sym_GT_EQ = 63,
  sym_bareid = 64,
  sym_qualid = 65,
  sym_comment = 66,
  sym_program = 67,
  sym_module = 68,
  sym_machine = 69,
  sym_machine_body = 70,
  sym_machine_sentence_conf = 71,
  sym_machine_sentence = 72,
  sym_machine_prop = 73,
  sym_machine_sig_config = 74,
  sym_machine_sig = 75,
  sym_machine_sig_in = 76,
  sym_model = 77,
  sym_model_body = 78,
  sym_model_sentence = 79,
  sym_model_contract_conf = 80,
  sym_model_contract = 81,
  sym_model_fact_list = 82,
  sym_model_fact = 83,
  sym_card_spec = 84,
  sym_model_sig_config = 85,
  sym_model_sig = 86,
  sym_model_intro = 87,
  sym_tsystem = 88,
  sym_tsystem_rest = 89,
  sym_trans_steps = 90,
  sym_trans_step_config = 91,
  sym_transform = 92,
  sym_transform_rest = 93,
  sym_trans_body = 94,
  sym_trans_sentence_config = 95,
  sym_trans_sentence = 96,
  sym_transform_sig_config = 97,
  sym_transform_sig = 98,
  sym_trans_sig_in = 99,
  sym_domain = 100,
  sym_dom_sentences = 101,
  sym_dom_sentence_config = 102,
  sym_dom_sentence = 103,
  sym_domain_sig_config = 104,
  sym_domain_sig = 105,
  sym_config = 106,
  sym_sentence_config = 107,
  sym_setting_list = 108,
  sym_setting = 109,
  sym_model_param_list = 110,
  sym_val_or_model_program = 111,
  sym_vom_param_list = 112,
  sym_update = 113,
  sym_step = 114,
  sym_choice_list = 115,
  sym_mod_apply = 116,
  sym_mod_arg_list = 117,
  sym_mod_app_arg = 118,
  sym_step_or_update_lhs = 119,
  sym_mod_refs = 120,
  sym_mod_ref = 121,
  sym_mod_ref_rename = 122,
  sym_mod_ref_no_rename = 123,
  sym_type_decl = 124,
  sym_type_decl_body = 125,
  sym_fun_decl = 126,
  sym_fields = 127,
  sym_field = 128,
  sym_maparrow = 129,
  sym_unnbody = 130,
  sym_unncmp = 131,
  sym_typeid = 132,
  sym_enum_list = 133,
  sym_enum_cnst = 134,
  sym_string = 135,
  sym_rule = 136,
  sym_compr = 137,
  sym_compr_rest = 138,
  sym_body_list = 139,
  sym_body = 140,
  sym_constraint = 141,
  sym_func_term_list = 142,
  sym_func_or_compr = 143,
  sym_func_term = 144,
  sym_atom = 145,
  sym_id = 146,
  sym_constant = 147,
  sym_unop = 148,
  sym_binop = 149,
  sym_relop = 150,
  aux_sym_program_repeat1 = 151,
  aux_sym_machine_body_repeat1 = 152,
  aux_sym_machine_sig_config_repeat1 = 153,
  aux_sym_model_body_repeat1 = 154,
  aux_sym_trans_steps_repeat1 = 155,
  aux_sym_trans_body_repeat1 = 156,
  aux_sym_dom_sentences_repeat1 = 157,
  aux_sym_fields_repeat1 = 158,
  aux_sym_unnbody_repeat1 = 159,
  aux_sym_enum_list_repeat1 = 160,
  aux_sym_body_list_repeat1 = 161,
  aux_sym_body_repeat1 = 162,
  aux_sym_func_term_list_repeat1 = 163,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_] = "",
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
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON] = ":",
  [anon_sym_SEMI] = ";",
  [anon_sym_AT] = "@",
  [anon_sym_renames] = "renames",
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
  [aux_sym_fields_repeat1] = "fields_repeat1",
  [aux_sym_unnbody_repeat1] = "unnbody_repeat1",
  [aux_sym_enum_list_repeat1] = "enum_list_repeat1",
  [aux_sym_body_list_repeat1] = "body_list_repeat1",
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym_func_term_list_repeat1] = "func_term_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_] = anon_sym_,
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
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_renames] = anon_sym_renames,
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
  [anon_sym_] = {
    .visible = true,
    .named = false,
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
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_renames] = {
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
  [27] = 27,
  [28] = 28,
  [29] = 24,
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
  [41] = 21,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 30,
  [50] = 50,
  [51] = 51,
  [52] = 50,
  [53] = 53,
  [54] = 53,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 55,
  [61] = 57,
  [62] = 62,
  [63] = 63,
  [64] = 34,
  [65] = 38,
  [66] = 66,
  [67] = 67,
  [68] = 42,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 36,
  [73] = 73,
  [74] = 74,
  [75] = 44,
  [76] = 69,
  [77] = 46,
  [78] = 43,
  [79] = 79,
  [80] = 80,
  [81] = 40,
  [82] = 82,
  [83] = 66,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
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
  [100] = 98,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 93,
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
  [117] = 93,
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
  [131] = 131,
  [132] = 132,
  [133] = 126,
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
  [174] = 170,
  [175] = 170,
  [176] = 170,
  [177] = 173,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
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
  [201] = 186,
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
  [212] = 147,
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
  [225] = 225,
  [226] = 226,
  [227] = 93,
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
  [259] = 249,
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
  [318] = 187,
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
  [337] = 281,
  [338] = 338,
  [339] = 322,
  [340] = 340,
  [341] = 304,
  [342] = 282,
  [343] = 271,
  [344] = 274,
  [345] = 333,
  [346] = 322,
  [347] = 322,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 293,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 327,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(169);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(242);
      if (lookahead == '(') ADVANCE(184);
      if (lookahead == ')') ADVANCE(185);
      if (lookahead == '*') ADVANCE(253);
      if (lookahead == '+') ADVANCE(236);
      if (lookahead == ',') ADVANCE(191);
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == '.') ADVANCE(180);
      if (lookahead == '/') ADVANCE(254);
      if (lookahead == ':') ADVANCE(215);
      if (lookahead == ';') ADVANCE(216);
      if (lookahead == '<') ADVANCE(257);
      if (lookahead == '=') ADVANCE(178);
      if (lookahead == '>') ADVANCE(259);
      if (lookahead == '@') ADVANCE(217);
      if (lookahead == 'B') ADVANCE(47);
      if (lookahead == '[') ADVANCE(212);
      if (lookahead == ']') ADVANCE(213);
      if (lookahead == 'a') ADVANCE(101);
      if (lookahead == 'b') ADVANCE(84);
      if (lookahead == 'c') ADVANCE(113);
      if (lookahead == 'd') ADVANCE(190);
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead == 'f') ADVANCE(153);
      if (lookahead == 'i') ADVANCE(103);
      if (lookahead == 'm') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(80);
      if (lookahead == 'p') ADVANCE(53);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead == 's') ADVANCE(115);
      if (lookahead == 't') ADVANCE(122);
      if (lookahead == '{') ADVANCE(171);
      if (lookahead == '|') ADVANCE(250);
      if (lookahead == '}') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '*') ADVANCE(245);
      if (lookahead != 0) ADVANCE(244);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(242);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == '(') ADVANCE(184);
      if (lookahead == ')') ADVANCE(185);
      if (lookahead == '*') ADVANCE(253);
      if (lookahead == '+') ADVANCE(236);
      if (lookahead == ',') ADVANCE(191);
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == '.') ADVANCE(180);
      if (lookahead == '/') ADVANCE(254);
      if (lookahead == ':') ADVANCE(215);
      if (lookahead == ';') ADVANCE(216);
      if (lookahead == '<') ADVANCE(257);
      if (lookahead == '=') ADVANCE(178);
      if (lookahead == '>') ADVANCE(259);
      if (lookahead == '@') ADVANCE(217);
      if (lookahead == 'B') ADVANCE(47);
      if (lookahead == '[') ADVANCE(212);
      if (lookahead == ']') ADVANCE(213);
      if (lookahead == 'a') ADVANCE(101);
      if (lookahead == 'b') ADVANCE(84);
      if (lookahead == 'c') ADVANCE(113);
      if (lookahead == 'd') ADVANCE(190);
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead == 'f') ADVANCE(153);
      if (lookahead == 'i') ADVANCE(103);
      if (lookahead == 'm') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(80);
      if (lookahead == 'p') ADVANCE(53);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead == 's') ADVANCE(115);
      if (lookahead == 't') ADVANCE(122);
      if (lookahead == '{') ADVANCE(171);
      if (lookahead == '|') ADVANCE(250);
      if (lookahead == '}') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(242);
      if (lookahead == '(') ADVANCE(184);
      if (lookahead == ')') ADVANCE(185);
      if (lookahead == '*') ADVANCE(253);
      if (lookahead == '+') ADVANCE(236);
      if (lookahead == ',') ADVANCE(191);
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == '.') ADVANCE(180);
      if (lookahead == '/') ADVANCE(254);
      if (lookahead == ':') ADVANCE(215);
      if (lookahead == ';') ADVANCE(216);
      if (lookahead == '<') ADVANCE(257);
      if (lookahead == '=') ADVANCE(178);
      if (lookahead == '>') ADVANCE(259);
      if (lookahead == '@') ADVANCE(217);
      if (lookahead == 'B') ADVANCE(47);
      if (lookahead == '[') ADVANCE(212);
      if (lookahead == ']') ADVANCE(213);
      if (lookahead == 'a') ADVANCE(101);
      if (lookahead == 'b') ADVANCE(84);
      if (lookahead == 'c') ADVANCE(113);
      if (lookahead == 'd') ADVANCE(190);
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead == 'f') ADVANCE(153);
      if (lookahead == 'i') ADVANCE(103);
      if (lookahead == 'm') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(80);
      if (lookahead == 'p') ADVANCE(53);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead == 's') ADVANCE(115);
      if (lookahead == 't') ADVANCE(122);
      if (lookahead == '{') ADVANCE(171);
      if (lookahead == '|') ADVANCE(250);
      if (lookahead == '}') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(339);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(339);
      if (lookahead == '.') ADVANCE(43);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '"') ADVANCE(242);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == '(') ADVANCE(184);
      if (lookahead == ')') ADVANCE(185);
      if (lookahead == ',') ADVANCE(191);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == '.') ADVANCE(179);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == ';') ADVANCE(216);
      if (lookahead == '=') ADVANCE(177);
      if (lookahead == 'B') ADVANCE(264);
      if (lookahead == '[') ADVANCE(212);
      if (lookahead == 'e') ADVANCE(297);
      if (lookahead == 'r') ADVANCE(272);
      if (lookahead == '{') ADVANCE(171);
      if (lookahead == '|') ADVANCE(250);
      if (lookahead == '}') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '"') ADVANCE(242);
      if (lookahead == '(') ADVANCE(184);
      if (lookahead == ')') ADVANCE(185);
      if (lookahead == ',') ADVANCE(191);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == '.') ADVANCE(179);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == ';') ADVANCE(216);
      if (lookahead == '=') ADVANCE(177);
      if (lookahead == 'B') ADVANCE(264);
      if (lookahead == '[') ADVANCE(212);
      if (lookahead == 'e') ADVANCE(297);
      if (lookahead == 'r') ADVANCE(272);
      if (lookahead == '{') ADVANCE(171);
      if (lookahead == '|') ADVANCE(250);
      if (lookahead == '}') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '"') ADVANCE(242);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == '(') ADVANCE(184);
      if (lookahead == ',') ADVANCE(191);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == 'B') ADVANCE(264);
      if (lookahead == '[') ADVANCE(212);
      if (lookahead == 'c') ADVANCE(305);
      if (lookahead == '{') ADVANCE(171);
      if (lookahead == '}') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '"') ADVANCE(242);
      if (lookahead == '(') ADVANCE(184);
      if (lookahead == ',') ADVANCE(191);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == 'B') ADVANCE(264);
      if (lookahead == '[') ADVANCE(212);
      if (lookahead == 'c') ADVANCE(305);
      if (lookahead == '{') ADVANCE(171);
      if (lookahead == '}') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"') ADVANCE(242);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == '(') ADVANCE(184);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == 'B') ADVANCE(264);
      if (lookahead == '[') ADVANCE(212);
      if (lookahead == 'e') ADVANCE(297);
      if (lookahead == 'n') ADVANCE(304);
      if (lookahead == 'r') ADVANCE(272);
      if (lookahead == '{') ADVANCE(171);
      if (lookahead == '}') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"') ADVANCE(242);
      if (lookahead == '(') ADVANCE(184);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == 'B') ADVANCE(264);
      if (lookahead == '[') ADVANCE(212);
      if (lookahead == 'e') ADVANCE(297);
      if (lookahead == 'n') ADVANCE(304);
      if (lookahead == 'r') ADVANCE(272);
      if (lookahead == '{') ADVANCE(171);
      if (lookahead == '}') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead == '"') ADVANCE(242);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == '(') ADVANCE(184);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == 'B') ADVANCE(264);
      if (lookahead == 'a') ADVANCE(326);
      if (lookahead == 'n') ADVANCE(304);
      if (lookahead == 's') ADVANCE(307);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead == '"') ADVANCE(242);
      if (lookahead == '(') ADVANCE(184);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == 'B') ADVANCE(264);
      if (lookahead == 'a') ADVANCE(326);
      if (lookahead == 'n') ADVANCE(304);
      if (lookahead == 's') ADVANCE(307);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '"') ADVANCE(242);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == '(') ADVANCE(184);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == 'B') ADVANCE(264);
      if (lookahead == '[') ADVANCE(212);
      if (lookahead == 'c') ADVANCE(305);
      if (lookahead == 'n') ADVANCE(304);
      if (lookahead == '{') ADVANCE(171);
      if (lookahead == '}') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '"') ADVANCE(242);
      if (lookahead == '(') ADVANCE(184);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == 'B') ADVANCE(264);
      if (lookahead == '[') ADVANCE(212);
      if (lookahead == 'c') ADVANCE(305);
      if (lookahead == 'n') ADVANCE(304);
      if (lookahead == '{') ADVANCE(171);
      if (lookahead == '}') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(16);
      if (lookahead == '"') ADVANCE(242);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == '(') ADVANCE(184);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == 'B') ADVANCE(264);
      if (lookahead == 'n') ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(16);
      if (lookahead == '"') ADVANCE(242);
      if (lookahead == '(') ADVANCE(184);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == 'B') ADVANCE(264);
      if (lookahead == 'n') ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '"') ADVANCE(242);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == '(') ADVANCE(184);
      if (lookahead == ')') ADVANCE(185);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == 'B') ADVANCE(264);
      if (lookahead == '[') ADVANCE(212);
      if (lookahead == '{') ADVANCE(171);
      if (lookahead == '}') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '"') ADVANCE(242);
      if (lookahead == '(') ADVANCE(184);
      if (lookahead == ')') ADVANCE(185);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == 'B') ADVANCE(264);
      if (lookahead == '[') ADVANCE(212);
      if (lookahead == '{') ADVANCE(171);
      if (lookahead == '}') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == '(') ADVANCE(184);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == 'B') ADVANCE(264);
      if (lookahead == 'b') ADVANCE(284);
      if (lookahead == 'f') ADVANCE(334);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == 'n') ADVANCE(275);
      if (lookahead == 's') ADVANCE(333);
      if (lookahead == '{') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '(') ADVANCE(184);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == 'B') ADVANCE(264);
      if (lookahead == 'b') ADVANCE(284);
      if (lookahead == 'f') ADVANCE(334);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == 'n') ADVANCE(275);
      if (lookahead == 's') ADVANCE(333);
      if (lookahead == '{') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == 'B') ADVANCE(264);
      if (lookahead == 'a') ADVANCE(300);
      if (lookahead == '{') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(23)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == 'B') ADVANCE(264);
      if (lookahead == 'a') ADVANCE(300);
      if (lookahead == '{') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(23)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 24:
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '(') ADVANCE(184);
      if (lookahead == '*') ADVANCE(253);
      if (lookahead == '+') ADVANCE(236);
      if (lookahead == ',') ADVANCE(191);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == '.') ADVANCE(179);
      if (lookahead == '/') ADVANCE(254);
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == ';') ADVANCE(216);
      if (lookahead == '<') ADVANCE(257);
      if (lookahead == '=') ADVANCE(177);
      if (lookahead == '>') ADVANCE(259);
      if (lookahead == 'i') ADVANCE(131);
      if (lookahead == 'm') ADVANCE(114);
      if (lookahead == '}') ADVANCE(172);
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
      if (lookahead == '(') ADVANCE(184);
      if (lookahead == ')') ADVANCE(185);
      if (lookahead == '*') ADVANCE(253);
      if (lookahead == '+') ADVANCE(236);
      if (lookahead == ',') ADVANCE(191);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == '.') ADVANCE(179);
      if (lookahead == '/') ADVANCE(254);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == ';') ADVANCE(216);
      if (lookahead == '=') ADVANCE(177);
      if (lookahead == '@') ADVANCE(217);
      if (lookahead == '[') ADVANCE(212);
      if (lookahead == ']') ADVANCE(213);
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead == 'i') ADVANCE(106);
      if (lookahead == 'm') ADVANCE(50);
      if (lookahead == '{') ADVANCE(171);
      if (lookahead == '|') ADVANCE(250);
      if (lookahead == '}') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      END_STATE();
    case 28:
      if (lookahead == ')') ADVANCE(185);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '[') ADVANCE(212);
      if (lookahead == '{') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 29:
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '/') ADVANCE(343);
      END_STATE();
    case 30:
      if (lookahead == '*') ADVANCE(35);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(249);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == ':') ADVANCE(40);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(237);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(43);
      END_STATE();
    case 35:
      if (lookahead == '/') ADVANCE(342);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 36:
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == 's') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 37:
      if (lookahead == '0') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(38);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(241);
      END_STATE();
    case 38:
      if (lookahead == '0') ADVANCE(38);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(241);
      END_STATE();
    case 39:
      if (lookahead == '=') ADVANCE(256);
      END_STATE();
    case 40:
      if (lookahead == '=') ADVANCE(219);
      END_STATE();
    case 41:
      if (lookahead == '>') ADVANCE(234);
      END_STATE();
    case 42:
      if (lookahead == '>') ADVANCE(235);
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
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(94);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'i') ADVANCE(145);
      if (lookahead == 'j') ADVANCE(224);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(83);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(255);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(133);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(77);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(74);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(158);
      if (lookahead == 'o') ADVANCE(251);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(96);
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
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 80:
      if (lookahead == 'f') ADVANCE(183);
      END_STATE();
    case 81:
      if (lookahead == 'f') ADVANCE(119);
      END_STATE();
    case 82:
      if (lookahead == 'f') ADVANCE(120);
      END_STATE();
    case 83:
      if (lookahead == 'h') ADVANCE(86);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 89:
      if (lookahead == 'j') ADVANCE(226);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(203);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(201);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(71);
      if (lookahead == 'm') ADVANCE(118);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(162);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(154);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 96:
      if (lookahead == 'm') ADVANCE(207);
      END_STATE();
    case 97:
      if (lookahead == 'm') ADVANCE(205);
      END_STATE();
    case 98:
      if (lookahead == 'm') ADVANCE(68);
      END_STATE();
    case 99:
      if (lookahead == 'm') ADVANCE(76);
      END_STATE();
    case 100:
      if (lookahead == 'm') ADVANCE(136);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(160);
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(139);
      if (lookahead == 'x') ADVANCE(150);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(60);
      if (lookahead == 's') ADVANCE(192);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(230);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(59);
      if (lookahead == 's') ADVANCE(192);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(57);
      if (lookahead == 'q') ADVANCE(155);
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(98);
      if (lookahead == 'u') ADVANCE(123);
      if (lookahead == 'y') ADVANCE(142);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 121:
      if (lookahead == 'p') ADVANCE(79);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(228);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 131:
      if (lookahead == 's') ADVANCE(192);
      END_STATE();
    case 132:
      if (lookahead == 's') ADVANCE(186);
      END_STATE();
    case 133:
      if (lookahead == 's') ADVANCE(200);
      END_STATE();
    case 134:
      if (lookahead == 's') ADVANCE(218);
      END_STATE();
    case 135:
      if (lookahead == 's') ADVANCE(209);
      END_STATE();
    case 136:
      if (lookahead == 's') ADVANCE(210);
      END_STATE();
    case 137:
      if (lookahead == 's') ADVANCE(199);
      END_STATE();
    case 138:
      if (lookahead == 's') ADVANCE(188);
      END_STATE();
    case 139:
      if (lookahead == 's') ADVANCE(156);
      END_STATE();
    case 140:
      if (lookahead == 's') ADVANCE(147);
      END_STATE();
    case 141:
      if (lookahead == 's') ADVANCE(148);
      END_STATE();
    case 142:
      if (lookahead == 's') ADVANCE(151);
      END_STATE();
    case 143:
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(195);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(197);
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
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 153:
      if (lookahead == 'u') ADVANCE(104);
      END_STATE();
    case 154:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 155:
      if (lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 156:
      if (lookahead == 'u') ADVANCE(126);
      END_STATE();
    case 157:
      if (lookahead == 'u') ADVANCE(128);
      END_STATE();
    case 158:
      if (lookahead == 'w') ADVANCE(222);
      if (lookahead == 'x') ADVANCE(146);
      END_STATE();
    case 159:
      if (lookahead == 'x') ADVANCE(150);
      END_STATE();
    case 160:
      if (lookahead == 'y') ADVANCE(232);
      END_STATE();
    case 161:
      if (lookahead == 'y') ADVANCE(176);
      END_STATE();
    case 162:
      if (lookahead == 'y') ADVANCE(174);
      END_STATE();
    case 163:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(240);
      END_STATE();
    case 164:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 165:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 166:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(248);
      END_STATE();
    case 167:
      if (eof) ADVANCE(169);
      if (lookahead == ')') ADVANCE(185);
      if (lookahead == '+') ADVANCE(236);
      if (lookahead == ',') ADVANCE(191);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '.') ADVANCE(179);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == 'm') ADVANCE(51);
      if (lookahead == 'p') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(75);
      if (lookahead == 't') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(167)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      END_STATE();
    case 168:
      if (eof) ADVANCE(169);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == 'm') ADVANCE(265);
      if (lookahead == 'p') ADVANCE(267);
      if (lookahead == 't') ADVANCE(315);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(168)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_boot);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_initially);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_next);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_property);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(235);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(237);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_machine);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_machine);
      if (lookahead == '\'') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_ensures);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_ensures);
      if (lookahead == '\'') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_requires);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_requires);
      if (lookahead == '\'') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_model_contract_token1);
      if (lookahead == 'd') ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_some);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_some);
      if (lookahead == '\'') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_atmost);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_atmost);
      if (lookahead == '\'') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_atleast);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_atleast);
      if (lookahead == '\'') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_includes);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_model);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_model);
      if (lookahead == '\'') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_partial);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_partial);
      if (lookahead == '\'') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_transform);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_transform);
      if (lookahead == '\'') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_system);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_system);
      if (lookahead == '\'') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_returns);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_conforms);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_conforms);
      if (lookahead == '\'') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(40);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_renames);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_EQ);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(234);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '\'') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_inj);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_inj);
      if (lookahead == '\'') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_bij);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_bij);
      if (lookahead == '\'') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_sur);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_sur);
      if (lookahead == '\'') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_fun);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_fun);
      if (lookahead == '\'') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_any);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_any);
      if (lookahead == '\'') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_digits);
      if (lookahead == '.') ADVANCE(163);
      if (lookahead == '/') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_digits);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_real);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(240);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_frac);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(248);
      if (lookahead == '"') ADVANCE(343);
      if (lookahead == '\\') ADVANCE(344);
      if (lookahead != 0) ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '*') ADVANCE(245);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '/') ADVANCE(248);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(244);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(244);
      if (lookahead == '/') ADVANCE(243);
      if (lookahead == '\\') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(248);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(246);
      if (lookahead == '\\') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(248);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == '\'') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '/') ADVANCE(343);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(258);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(260);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == '.') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'D') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'I') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'a') ADVANCE(270);
      if (lookahead == 'o') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'a') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'a') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'a') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'a') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'c') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'd') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'e') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'e') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'e') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'e') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'e') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'e') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'e') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'e') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'e') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'f') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'f') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'h') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'i') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'i') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'i') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'i') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'j') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'j') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'l') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'l') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'l') ADVANCE(273);
      if (lookahead == 'm') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'm') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'm') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'm') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'm') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'n') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'n') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'n') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'n') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'n') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'n') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'n') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'o') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'o') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'o') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'o') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'o') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'o') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'q') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'r') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'r') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'r') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'r') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'r') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'r') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'r') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 's') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 's') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 's') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 's') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 's') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 's') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 's') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 's') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 't') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 't') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 't') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 't') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 't') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'u') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'u') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'u') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'u') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'w') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'y') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == 'y') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_bareid);
      if (lookahead == '\'') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_qualid);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_qualid);
      if (lookahead == '\'') ADVANCE(340);
      if (lookahead == '.') ADVANCE(165);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_qualid);
      if (lookahead == '\'') ADVANCE(340);
      if (lookahead == '.') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(343);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(243);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 170},
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
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 167},
  [18] = {.lex_state = 167},
  [19] = {.lex_state = 167},
  [20] = {.lex_state = 167},
  [21] = {.lex_state = 27},
  [22] = {.lex_state = 17},
  [23] = {.lex_state = 17},
  [24] = {.lex_state = 19},
  [25] = {.lex_state = 19},
  [26] = {.lex_state = 24},
  [27] = {.lex_state = 17},
  [28] = {.lex_state = 19},
  [29] = {.lex_state = 19},
  [30] = {.lex_state = 24},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 24},
  [33] = {.lex_state = 17},
  [34] = {.lex_state = 24},
  [35] = {.lex_state = 17},
  [36] = {.lex_state = 24},
  [37] = {.lex_state = 19},
  [38] = {.lex_state = 24},
  [39] = {.lex_state = 19},
  [40] = {.lex_state = 24},
  [41] = {.lex_state = 24},
  [42] = {.lex_state = 24},
  [43] = {.lex_state = 24},
  [44] = {.lex_state = 24},
  [45] = {.lex_state = 19},
  [46] = {.lex_state = 24},
  [47] = {.lex_state = 19},
  [48] = {.lex_state = 17},
  [49] = {.lex_state = 27},
  [50] = {.lex_state = 21},
  [51] = {.lex_state = 19},
  [52] = {.lex_state = 21},
  [53] = {.lex_state = 19},
  [54] = {.lex_state = 19},
  [55] = {.lex_state = 19},
  [56] = {.lex_state = 19},
  [57] = {.lex_state = 19},
  [58] = {.lex_state = 19},
  [59] = {.lex_state = 19},
  [60] = {.lex_state = 19},
  [61] = {.lex_state = 19},
  [62] = {.lex_state = 19},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 27},
  [65] = {.lex_state = 27},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 27},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 27},
  [73] = {.lex_state = 7},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 27},
  [76] = {.lex_state = 9},
  [77] = {.lex_state = 27},
  [78] = {.lex_state = 27},
  [79] = {.lex_state = 27},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 27},
  [82] = {.lex_state = 7},
  [83] = {.lex_state = 9},
  [84] = {.lex_state = 7},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 9},
  [87] = {.lex_state = 7},
  [88] = {.lex_state = 9},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 9},
  [91] = {.lex_state = 9},
  [92] = {.lex_state = 7},
  [93] = {.lex_state = 7},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 19},
  [97] = {.lex_state = 27},
  [98] = {.lex_state = 27},
  [99] = {.lex_state = 19},
  [100] = {.lex_state = 27},
  [101] = {.lex_state = 27},
  [102] = {.lex_state = 27},
  [103] = {.lex_state = 27},
  [104] = {.lex_state = 9},
  [105] = {.lex_state = 19},
  [106] = {.lex_state = 23},
  [107] = {.lex_state = 23},
  [108] = {.lex_state = 27},
  [109] = {.lex_state = 27},
  [110] = {.lex_state = 23},
  [111] = {.lex_state = 19},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 23},
  [115] = {.lex_state = 19},
  [116] = {.lex_state = 27},
  [117] = {.lex_state = 19},
  [118] = {.lex_state = 19},
  [119] = {.lex_state = 27},
  [120] = {.lex_state = 19},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 27},
  [123] = {.lex_state = 19},
  [124] = {.lex_state = 23},
  [125] = {.lex_state = 167},
  [126] = {.lex_state = 27},
  [127] = {.lex_state = 7},
  [128] = {.lex_state = 7},
  [129] = {.lex_state = 7},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 7},
  [132] = {.lex_state = 7},
  [133] = {.lex_state = 27},
  [134] = {.lex_state = 23},
  [135] = {.lex_state = 7},
  [136] = {.lex_state = 167},
  [137] = {.lex_state = 28},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 167},
  [140] = {.lex_state = 27},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 167},
  [144] = {.lex_state = 19},
  [145] = {.lex_state = 7},
  [146] = {.lex_state = 167},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 168},
  [149] = {.lex_state = 167},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 19},
  [152] = {.lex_state = 28},
  [153] = {.lex_state = 7},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 167},
  [157] = {.lex_state = 168},
  [158] = {.lex_state = 168},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 19},
  [162] = {.lex_state = 167},
  [163] = {.lex_state = 28},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 167},
  [166] = {.lex_state = 28},
  [167] = {.lex_state = 167},
  [168] = {.lex_state = 167},
  [169] = {.lex_state = 167},
  [170] = {.lex_state = 19},
  [171] = {.lex_state = 167},
  [172] = {.lex_state = 7},
  [173] = {.lex_state = 28},
  [174] = {.lex_state = 19},
  [175] = {.lex_state = 19},
  [176] = {.lex_state = 19},
  [177] = {.lex_state = 28},
  [178] = {.lex_state = 28},
  [179] = {.lex_state = 19},
  [180] = {.lex_state = 28},
  [181] = {.lex_state = 19},
  [182] = {.lex_state = 167},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 167},
  [185] = {.lex_state = 19},
  [186] = {.lex_state = 19},
  [187] = {.lex_state = 167},
  [188] = {.lex_state = 7},
  [189] = {.lex_state = 167},
  [190] = {.lex_state = 167},
  [191] = {.lex_state = 19},
  [192] = {.lex_state = 19},
  [193] = {.lex_state = 167},
  [194] = {.lex_state = 167},
  [195] = {.lex_state = 28},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 167},
  [198] = {.lex_state = 7},
  [199] = {.lex_state = 167},
  [200] = {.lex_state = 28},
  [201] = {.lex_state = 19},
  [202] = {.lex_state = 167},
  [203] = {.lex_state = 167},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 28},
  [206] = {.lex_state = 23},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 7},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 19},
  [212] = {.lex_state = 19},
  [213] = {.lex_state = 28},
  [214] = {.lex_state = 167},
  [215] = {.lex_state = 19},
  [216] = {.lex_state = 167},
  [217] = {.lex_state = 28},
  [218] = {.lex_state = 7},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 167},
  [221] = {.lex_state = 167},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 7},
  [224] = {.lex_state = 19},
  [225] = {.lex_state = 7},
  [226] = {.lex_state = 7},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 19},
  [229] = {.lex_state = 28},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 7},
  [233] = {.lex_state = 28},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 9},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 167},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 7},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 167},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 7},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 36},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 7},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 7},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 7},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 7},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 7},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 7},
  [272] = {.lex_state = 7},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 7},
  [275] = {.lex_state = 7},
  [276] = {.lex_state = 7},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 167},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 28},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 7},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 247},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 7},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 28},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 7},
  [300] = {.lex_state = 7},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 7},
  [303] = {.lex_state = 7},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 7},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 7},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 7},
  [317] = {.lex_state = 28},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 28},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 7},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 7},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 7},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 7},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 7},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 7},
  [344] = {.lex_state = 7},
  [345] = {.lex_state = 7},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 167},
  [351] = {.lex_state = 247},
  [352] = {.lex_state = 28},
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
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_renames] = ACTIONS(1),
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
    [sym_program] = STATE(331),
    [sym_module] = STATE(19),
    [sym_machine] = STATE(202),
    [sym_machine_sig_config] = STATE(329),
    [sym_machine_sig] = STATE(222),
    [sym_model] = STATE(202),
    [sym_model_sig_config] = STATE(328),
    [sym_model_sig] = STATE(236),
    [sym_model_intro] = STATE(210),
    [sym_tsystem] = STATE(202),
    [sym_transform] = STATE(202),
    [sym_domain] = STATE(157),
    [sym_domain_sig_config] = STATE(324),
    [sym_domain_sig] = STATE(231),
    [sym_config] = STATE(18),
    [aux_sym_program_repeat1] = STATE(19),
    [aux_sym_machine_sig_config_repeat1] = STATE(222),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_machine] = ACTIONS(7),
    [anon_sym_model] = ACTIONS(9),
    [anon_sym_partial] = ACTIONS(11),
    [anon_sym_transform] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [sym_comment] = ACTIONS(17),
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
    STATE(61), 1,
      sym_unop,
    STATE(68), 1,
      sym_string,
    STATE(71), 1,
      sym_trans_sentence,
    STATE(72), 1,
      sym_id,
    STATE(77), 1,
      sym_atom,
    STATE(78), 1,
      sym_constant,
    STATE(79), 1,
      sym_func_term,
    STATE(129), 1,
      sym_func_or_compr,
    STATE(153), 1,
      sym_compr,
    STATE(249), 1,
      sym_func_term_list,
    STATE(288), 1,
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
    STATE(70), 2,
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
    STATE(61), 1,
      sym_unop,
    STATE(68), 1,
      sym_string,
    STATE(71), 1,
      sym_trans_sentence,
    STATE(72), 1,
      sym_id,
    STATE(77), 1,
      sym_atom,
    STATE(78), 1,
      sym_constant,
    STATE(79), 1,
      sym_func_term,
    STATE(129), 1,
      sym_func_or_compr,
    STATE(153), 1,
      sym_compr,
    STATE(249), 1,
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
    STATE(70), 2,
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
    STATE(61), 1,
      sym_unop,
    STATE(68), 1,
      sym_string,
    STATE(71), 1,
      sym_trans_sentence,
    STATE(72), 1,
      sym_id,
    STATE(77), 1,
      sym_atom,
    STATE(78), 1,
      sym_constant,
    STATE(79), 1,
      sym_func_term,
    STATE(129), 1,
      sym_func_or_compr,
    STATE(153), 1,
      sym_compr,
    STATE(249), 1,
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
    STATE(70), 2,
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
    STATE(61), 1,
      sym_unop,
    STATE(68), 1,
      sym_string,
    STATE(72), 1,
      sym_id,
    STATE(77), 1,
      sym_atom,
    STATE(78), 1,
      sym_constant,
    STATE(79), 1,
      sym_func_term,
    STATE(91), 1,
      sym_dom_sentence,
    STATE(129), 1,
      sym_func_or_compr,
    STATE(153), 1,
      sym_compr,
    STATE(259), 1,
      sym_func_term_list,
    STATE(308), 1,
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
    STATE(61), 1,
      sym_unop,
    STATE(68), 1,
      sym_string,
    STATE(72), 1,
      sym_id,
    STATE(77), 1,
      sym_atom,
    STATE(78), 1,
      sym_constant,
    STATE(79), 1,
      sym_func_term,
    STATE(91), 1,
      sym_dom_sentence,
    STATE(129), 1,
      sym_func_or_compr,
    STATE(153), 1,
      sym_compr,
    STATE(259), 1,
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
    STATE(61), 1,
      sym_unop,
    STATE(68), 1,
      sym_string,
    STATE(72), 1,
      sym_id,
    STATE(77), 1,
      sym_atom,
    STATE(78), 1,
      sym_constant,
    STATE(79), 1,
      sym_func_term,
    STATE(91), 1,
      sym_dom_sentence,
    STATE(129), 1,
      sym_func_or_compr,
    STATE(153), 1,
      sym_compr,
    STATE(259), 1,
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
    STATE(31), 1,
      sym_sentence_config,
    STATE(61), 1,
      sym_unop,
    STATE(68), 1,
      sym_string,
    STATE(72), 1,
      sym_id,
    STATE(73), 1,
      sym_model_contract,
    STATE(77), 1,
      sym_atom,
    STATE(78), 1,
      sym_constant,
    STATE(119), 1,
      sym_func_term,
    STATE(261), 1,
      sym_model_fact,
    STATE(294), 1,
      sym_model_body,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    STATE(10), 2,
      sym_model_sentence,
      aux_sym_model_body_repeat1,
    STATE(89), 2,
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
    STATE(31), 1,
      sym_sentence_config,
    STATE(61), 1,
      sym_unop,
    STATE(68), 1,
      sym_string,
    STATE(72), 1,
      sym_id,
    STATE(73), 1,
      sym_model_contract,
    STATE(77), 1,
      sym_atom,
    STATE(78), 1,
      sym_constant,
    STATE(119), 1,
      sym_func_term,
    STATE(261), 1,
      sym_model_fact,
    ACTIONS(145), 2,
      sym_real,
      sym_frac,
    STATE(9), 2,
      sym_model_sentence,
      aux_sym_model_body_repeat1,
    STATE(89), 2,
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
    STATE(31), 1,
      sym_sentence_config,
    STATE(61), 1,
      sym_unop,
    STATE(68), 1,
      sym_string,
    STATE(72), 1,
      sym_id,
    STATE(73), 1,
      sym_model_contract,
    STATE(77), 1,
      sym_atom,
    STATE(78), 1,
      sym_constant,
    STATE(119), 1,
      sym_func_term,
    STATE(261), 1,
      sym_model_fact,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    STATE(9), 2,
      sym_model_sentence,
      aux_sym_model_body_repeat1,
    STATE(89), 2,
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
    STATE(61), 1,
      sym_unop,
    STATE(67), 1,
      sym_trans_sentence,
    STATE(68), 1,
      sym_string,
    STATE(72), 1,
      sym_id,
    STATE(77), 1,
      sym_atom,
    STATE(78), 1,
      sym_constant,
    STATE(79), 1,
      sym_func_term,
    STATE(129), 1,
      sym_func_or_compr,
    STATE(153), 1,
      sym_compr,
    STATE(249), 1,
      sym_func_term_list,
    ACTIONS(25), 2,
      anon_sym_ensures,
      anon_sym_requires,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    STATE(70), 2,
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
    STATE(32), 1,
      sym_id,
    STATE(42), 1,
      sym_string,
    STATE(43), 1,
      sym_constant,
    STATE(46), 1,
      sym_atom,
    STATE(57), 1,
      sym_unop,
    STATE(198), 1,
      sym_constraint,
    STATE(218), 1,
      sym_body,
    STATE(344), 1,
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
    STATE(61), 1,
      sym_unop,
    STATE(68), 1,
      sym_string,
    STATE(72), 1,
      sym_id,
    STATE(77), 1,
      sym_atom,
    STATE(78), 1,
      sym_constant,
    STATE(79), 1,
      sym_func_term,
    STATE(86), 1,
      sym_dom_sentence,
    STATE(129), 1,
      sym_func_or_compr,
    STATE(153), 1,
      sym_compr,
    STATE(259), 1,
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
    STATE(26), 1,
      sym_func_term,
    STATE(32), 1,
      sym_id,
    STATE(42), 1,
      sym_string,
    STATE(43), 1,
      sym_constant,
    STATE(46), 1,
      sym_atom,
    STATE(57), 1,
      sym_unop,
    STATE(198), 1,
      sym_constraint,
    STATE(218), 1,
      sym_body,
    STATE(305), 1,
      sym_card_spec,
    STATE(312), 1,
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
    STATE(26), 1,
      sym_func_term,
    STATE(32), 1,
      sym_id,
    STATE(42), 1,
      sym_string,
    STATE(43), 1,
      sym_constant,
    STATE(46), 1,
      sym_atom,
    STATE(57), 1,
      sym_unop,
    STATE(198), 1,
      sym_constraint,
    STATE(218), 1,
      sym_body,
    STATE(274), 1,
      sym_body_list,
    ACTIONS(167), 2,
      sym_real,
      sym_frac,
    ACTIONS(159), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
  [1031] = 20,
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
    ACTIONS(179), 1,
      anon_sym_RBRACE,
    ACTIONS(183), 1,
      anon_sym_LBRACK,
    STATE(51), 1,
      sym_sentence_config,
    STATE(61), 1,
      sym_unop,
    STATE(68), 1,
      sym_string,
    STATE(72), 1,
      sym_id,
    STATE(77), 1,
      sym_atom,
    STATE(78), 1,
      sym_constant,
    STATE(92), 1,
      sym_model_fact_list,
    STATE(119), 1,
      sym_func_term,
    STATE(261), 1,
      sym_model_fact,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
    ACTIONS(181), 2,
      anon_sym_ensures,
      anon_sym_requires,
  [1094] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
    ACTIONS(187), 1,
      anon_sym_machine,
    ACTIONS(189), 1,
      anon_sym_model,
    ACTIONS(191), 1,
      anon_sym_partial,
    ACTIONS(193), 1,
      anon_sym_transform,
    STATE(157), 1,
      sym_domain,
    STATE(210), 1,
      sym_model_intro,
    STATE(231), 1,
      sym_domain_sig,
    STATE(236), 1,
      sym_model_sig,
    STATE(324), 1,
      sym_domain_sig_config,
    STATE(328), 1,
      sym_model_sig_config,
    STATE(329), 1,
      sym_machine_sig_config,
    STATE(20), 2,
      sym_module,
      aux_sym_program_repeat1,
    STATE(222), 2,
      sym_machine_sig,
      aux_sym_machine_sig_config_repeat1,
    STATE(202), 4,
      sym_machine,
      sym_model,
      sym_tsystem,
      sym_transform,
  [1148] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_machine,
    ACTIONS(189), 1,
      anon_sym_model,
    ACTIONS(191), 1,
      anon_sym_partial,
    ACTIONS(193), 1,
      anon_sym_transform,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    STATE(157), 1,
      sym_domain,
    STATE(210), 1,
      sym_model_intro,
    STATE(231), 1,
      sym_domain_sig,
    STATE(236), 1,
      sym_model_sig,
    STATE(324), 1,
      sym_domain_sig_config,
    STATE(328), 1,
      sym_model_sig_config,
    STATE(329), 1,
      sym_machine_sig_config,
    STATE(17), 2,
      sym_module,
      aux_sym_program_repeat1,
    STATE(222), 2,
      sym_machine_sig,
      aux_sym_machine_sig_config_repeat1,
    STATE(202), 4,
      sym_machine,
      sym_model,
      sym_tsystem,
      sym_transform,
  [1202] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_machine,
    ACTIONS(189), 1,
      anon_sym_model,
    ACTIONS(191), 1,
      anon_sym_partial,
    ACTIONS(193), 1,
      anon_sym_transform,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    STATE(157), 1,
      sym_domain,
    STATE(210), 1,
      sym_model_intro,
    STATE(231), 1,
      sym_domain_sig,
    STATE(236), 1,
      sym_model_sig,
    STATE(324), 1,
      sym_domain_sig_config,
    STATE(328), 1,
      sym_model_sig_config,
    STATE(329), 1,
      sym_machine_sig_config,
    STATE(20), 2,
      sym_module,
      aux_sym_program_repeat1,
    STATE(222), 2,
      sym_machine_sig,
      aux_sym_machine_sig_config_repeat1,
    STATE(202), 4,
      sym_machine,
      sym_model,
      sym_tsystem,
      sym_transform,
  [1256] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
    ACTIONS(199), 1,
      anon_sym_machine,
    ACTIONS(202), 1,
      anon_sym_model,
    ACTIONS(205), 1,
      anon_sym_partial,
    ACTIONS(208), 1,
      anon_sym_transform,
    STATE(157), 1,
      sym_domain,
    STATE(210), 1,
      sym_model_intro,
    STATE(231), 1,
      sym_domain_sig,
    STATE(236), 1,
      sym_model_sig,
    STATE(324), 1,
      sym_domain_sig_config,
    STATE(328), 1,
      sym_model_sig_config,
    STATE(329), 1,
      sym_machine_sig_config,
    STATE(20), 2,
      sym_module,
      aux_sym_program_repeat1,
    STATE(222), 2,
      sym_machine_sig,
      aux_sym_machine_sig_config_repeat1,
    STATE(202), 4,
      sym_machine,
      sym_model,
      sym_tsystem,
      sym_transform,
  [1310] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_SLASH,
    ACTIONS(211), 18,
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
  [1337] = 18,
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
    STATE(32), 1,
      sym_id,
    STATE(42), 1,
      sym_string,
    STATE(43), 1,
      sym_constant,
    STATE(46), 1,
      sym_atom,
    STATE(57), 1,
      sym_unop,
    STATE(198), 1,
      sym_constraint,
    STATE(218), 1,
      sym_body,
    STATE(312), 1,
      sym_body_list,
    ACTIONS(167), 2,
      sym_real,
      sym_frac,
  [1393] = 18,
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
    STATE(32), 1,
      sym_id,
    STATE(42), 1,
      sym_string,
    STATE(43), 1,
      sym_constant,
    STATE(46), 1,
      sym_atom,
    STATE(57), 1,
      sym_unop,
    STATE(198), 1,
      sym_constraint,
    STATE(218), 1,
      sym_body,
    STATE(355), 1,
      sym_body_list,
    ACTIONS(167), 2,
      sym_real,
      sym_frac,
  [1449] = 18,
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
    ACTIONS(215), 1,
      sym_bareid,
    STATE(61), 1,
      sym_unop,
    STATE(68), 1,
      sym_string,
    STATE(72), 1,
      sym_id,
    STATE(77), 1,
      sym_atom,
    STATE(78), 1,
      sym_constant,
    STATE(79), 1,
      sym_func_term,
    STATE(129), 1,
      sym_func_or_compr,
    STATE(153), 1,
      sym_compr,
    STATE(342), 1,
      sym_func_term_list,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [1505] = 18,
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
    ACTIONS(215), 1,
      sym_bareid,
    STATE(61), 1,
      sym_unop,
    STATE(68), 1,
      sym_string,
    STATE(72), 1,
      sym_id,
    STATE(77), 1,
      sym_atom,
    STATE(78), 1,
      sym_constant,
    STATE(79), 1,
      sym_func_term,
    STATE(129), 1,
      sym_func_or_compr,
    STATE(153), 1,
      sym_compr,
    STATE(241), 1,
      sym_func_term_list,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [1561] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_SLASH,
    STATE(55), 1,
      sym_binop,
    STATE(58), 1,
      sym_relop,
    ACTIONS(225), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(217), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(221), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(219), 5,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1597] = 18,
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
    STATE(32), 1,
      sym_id,
    STATE(42), 1,
      sym_string,
    STATE(43), 1,
      sym_constant,
    STATE(46), 1,
      sym_atom,
    STATE(57), 1,
      sym_unop,
    STATE(198), 1,
      sym_constraint,
    STATE(218), 1,
      sym_body,
    STATE(302), 1,
      sym_body_list,
    ACTIONS(167), 2,
      sym_real,
      sym_frac,
  [1653] = 18,
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
    ACTIONS(183), 1,
      anon_sym_LBRACK,
    STATE(51), 1,
      sym_sentence_config,
    STATE(61), 1,
      sym_unop,
    STATE(68), 1,
      sym_string,
    STATE(72), 1,
      sym_id,
    STATE(77), 1,
      sym_atom,
    STATE(78), 1,
      sym_constant,
    STATE(85), 1,
      sym_model_fact_list,
    STATE(119), 1,
      sym_func_term,
    STATE(261), 1,
      sym_model_fact,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [1709] = 18,
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
    ACTIONS(215), 1,
      sym_bareid,
    STATE(61), 1,
      sym_unop,
    STATE(68), 1,
      sym_string,
    STATE(72), 1,
      sym_id,
    STATE(77), 1,
      sym_atom,
    STATE(78), 1,
      sym_constant,
    STATE(79), 1,
      sym_func_term,
    STATE(129), 1,
      sym_func_or_compr,
    STATE(153), 1,
      sym_compr,
    STATE(282), 1,
      sym_func_term_list,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [1765] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(227), 15,
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
  [1791] = 18,
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
    STATE(61), 1,
      sym_unop,
    STATE(68), 1,
      sym_string,
    STATE(72), 1,
      sym_id,
    STATE(77), 1,
      sym_atom,
    STATE(78), 1,
      sym_constant,
    STATE(82), 1,
      sym_model_contract,
    STATE(119), 1,
      sym_func_term,
    STATE(303), 1,
      sym_model_fact,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [1847] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_is,
    ACTIONS(237), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(231), 13,
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
  [1877] = 18,
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
    STATE(32), 1,
      sym_id,
    STATE(42), 1,
      sym_string,
    STATE(43), 1,
      sym_constant,
    STATE(46), 1,
      sym_atom,
    STATE(57), 1,
      sym_unop,
    STATE(198), 1,
      sym_constraint,
    STATE(218), 1,
      sym_body,
    STATE(295), 1,
      sym_body_list,
    ACTIONS(167), 2,
      sym_real,
      sym_frac,
  [1933] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(55), 1,
      sym_binop,
    ACTIONS(241), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(239), 13,
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
  [1960] = 17,
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
    STATE(32), 1,
      sym_id,
    STATE(42), 1,
      sym_string,
    STATE(43), 1,
      sym_constant,
    STATE(46), 1,
      sym_atom,
    STATE(57), 1,
      sym_unop,
    STATE(198), 1,
      sym_constraint,
    STATE(232), 1,
      sym_body,
    ACTIONS(167), 2,
      sym_real,
      sym_frac,
  [2013] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(231), 13,
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
  [2040] = 17,
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
    ACTIONS(215), 1,
      sym_bareid,
    STATE(61), 1,
      sym_unop,
    STATE(68), 1,
      sym_string,
    STATE(72), 1,
      sym_id,
    STATE(77), 1,
      sym_atom,
    STATE(78), 1,
      sym_constant,
    STATE(79), 1,
      sym_func_term,
    STATE(145), 1,
      sym_func_or_compr,
    STATE(153), 1,
      sym_compr,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2093] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_SLASH,
    STATE(55), 1,
      sym_binop,
    ACTIONS(245), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(221), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(243), 9,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2124] = 17,
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
    ACTIONS(247), 1,
      anon_sym_RPAREN,
    ACTIONS(249), 1,
      sym_bareid,
    STATE(61), 1,
      sym_unop,
    STATE(68), 1,
      sym_string,
    STATE(72), 1,
      sym_id,
    STATE(77), 1,
      sym_atom,
    STATE(78), 1,
      sym_constant,
    STATE(116), 1,
      sym_func_term,
    STATE(264), 1,
      sym_mod_app_arg,
    STATE(298), 1,
      sym_mod_arg_list,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2177] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(243), 13,
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
  [2201] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(211), 13,
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
  [2225] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(251), 13,
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
  [2249] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(231), 13,
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
  [2273] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(255), 13,
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
  [2297] = 16,
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
    ACTIONS(215), 1,
      sym_bareid,
    STATE(61), 1,
      sym_unop,
    STATE(68), 1,
      sym_string,
    STATE(77), 1,
      sym_atom,
    STATE(78), 1,
      sym_constant,
    STATE(97), 1,
      sym_id,
    STATE(101), 1,
      sym_func_term,
    STATE(226), 1,
      sym_compr,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2347] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(259), 13,
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
  [2371] = 16,
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
    ACTIONS(249), 1,
      sym_bareid,
    STATE(61), 1,
      sym_unop,
    STATE(68), 1,
      sym_string,
    STATE(72), 1,
      sym_id,
    STATE(77), 1,
      sym_atom,
    STATE(78), 1,
      sym_constant,
    STATE(116), 1,
      sym_func_term,
    STATE(264), 1,
      sym_mod_app_arg,
    STATE(315), 1,
      sym_mod_arg_list,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2421] = 16,
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
    STATE(32), 1,
      sym_id,
    STATE(42), 1,
      sym_string,
    STATE(43), 1,
      sym_constant,
    STATE(46), 1,
      sym_atom,
    STATE(57), 1,
      sym_unop,
    STATE(208), 1,
      sym_constraint,
    ACTIONS(167), 2,
      sym_real,
      sym_frac,
  [2471] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_SLASH,
    ACTIONS(227), 14,
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
  [2494] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_DASH,
    ACTIONS(269), 1,
      anon_sym_new,
    ACTIONS(273), 1,
      sym_bareid,
    ACTIONS(275), 1,
      sym_qualid,
    STATE(125), 1,
      sym_unncmp,
    STATE(146), 1,
      sym_typeid,
    STATE(276), 1,
      sym_unnbody,
    STATE(277), 1,
      sym_fun_decl,
    STATE(343), 1,
      sym_type_decl_body,
    ACTIONS(271), 4,
      anon_sym_inj,
      anon_sym_bij,
      anon_sym_sur,
      anon_sym_fun,
  [2537] = 15,
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
    STATE(61), 1,
      sym_unop,
    STATE(68), 1,
      sym_string,
    STATE(72), 1,
      sym_id,
    STATE(77), 1,
      sym_atom,
    STATE(78), 1,
      sym_constant,
    STATE(119), 1,
      sym_func_term,
    STATE(303), 1,
      sym_model_fact,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2584] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_DASH,
    ACTIONS(269), 1,
      anon_sym_new,
    ACTIONS(273), 1,
      sym_bareid,
    ACTIONS(275), 1,
      sym_qualid,
    STATE(125), 1,
      sym_unncmp,
    STATE(146), 1,
      sym_typeid,
    STATE(271), 1,
      sym_type_decl_body,
    STATE(276), 1,
      sym_unnbody,
    STATE(277), 1,
      sym_fun_decl,
    ACTIONS(271), 4,
      anon_sym_inj,
      anon_sym_bij,
      anon_sym_sur,
      anon_sym_fun,
  [2627] = 14,
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
    ACTIONS(215), 1,
      sym_bareid,
    STATE(61), 1,
      sym_unop,
    STATE(68), 1,
      sym_string,
    STATE(72), 1,
      sym_id,
    STATE(77), 1,
      sym_atom,
    STATE(78), 1,
      sym_constant,
    STATE(126), 1,
      sym_func_term,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2671] = 14,
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
    ACTIONS(215), 1,
      sym_bareid,
    STATE(61), 1,
      sym_unop,
    STATE(68), 1,
      sym_string,
    STATE(72), 1,
      sym_id,
    STATE(77), 1,
      sym_atom,
    STATE(78), 1,
      sym_constant,
    STATE(133), 1,
      sym_func_term,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2715] = 14,
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
      sym_id,
    STATE(38), 1,
      sym_func_term,
    STATE(42), 1,
      sym_string,
    STATE(43), 1,
      sym_constant,
    STATE(46), 1,
      sym_atom,
    STATE(57), 1,
      sym_unop,
    ACTIONS(167), 2,
      sym_real,
      sym_frac,
  [2759] = 14,
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
    ACTIONS(215), 1,
      sym_bareid,
    STATE(61), 1,
      sym_unop,
    STATE(68), 1,
      sym_string,
    STATE(72), 1,
      sym_id,
    STATE(77), 1,
      sym_atom,
    STATE(78), 1,
      sym_constant,
    STATE(140), 1,
      sym_func_term,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2803] = 14,
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
    STATE(36), 1,
      sym_id,
    STATE(42), 1,
      sym_string,
    STATE(43), 1,
      sym_constant,
    STATE(46), 1,
      sym_atom,
    STATE(57), 1,
      sym_unop,
    ACTIONS(167), 2,
      sym_real,
      sym_frac,
  [2847] = 14,
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
    ACTIONS(215), 1,
      sym_bareid,
    STATE(61), 1,
      sym_unop,
    STATE(68), 1,
      sym_string,
    STATE(72), 1,
      sym_id,
    STATE(77), 1,
      sym_atom,
    STATE(78), 1,
      sym_constant,
    STATE(102), 1,
      sym_func_term,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2891] = 14,
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
    ACTIONS(215), 1,
      sym_bareid,
    STATE(61), 1,
      sym_unop,
    STATE(68), 1,
      sym_string,
    STATE(72), 1,
      sym_id,
    STATE(77), 1,
      sym_atom,
    STATE(78), 1,
      sym_constant,
    STATE(122), 1,
      sym_func_term,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2935] = 14,
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
    ACTIONS(215), 1,
      sym_bareid,
    STATE(61), 1,
      sym_unop,
    STATE(65), 1,
      sym_func_term,
    STATE(68), 1,
      sym_string,
    STATE(72), 1,
      sym_id,
    STATE(77), 1,
      sym_atom,
    STATE(78), 1,
      sym_constant,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [2979] = 14,
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
    ACTIONS(215), 1,
      sym_bareid,
    STATE(61), 1,
      sym_unop,
    STATE(64), 1,
      sym_func_term,
    STATE(68), 1,
      sym_string,
    STATE(72), 1,
      sym_id,
    STATE(77), 1,
      sym_atom,
    STATE(78), 1,
      sym_constant,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [3023] = 14,
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
    ACTIONS(215), 1,
      sym_bareid,
    STATE(61), 1,
      sym_unop,
    STATE(68), 1,
      sym_string,
    STATE(72), 1,
      sym_id,
    STATE(77), 1,
      sym_atom,
    STATE(78), 1,
      sym_constant,
    STATE(103), 1,
      sym_func_term,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [3067] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 4,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      sym_bareid,
    ACTIONS(277), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3088] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_SLASH,
    STATE(60), 1,
      sym_binop,
    ACTIONS(239), 11,
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
  [3111] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_SLASH,
    STATE(60), 1,
      sym_binop,
    ACTIONS(221), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(243), 7,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [3136] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 4,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      sym_bareid,
    ACTIONS(281), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3157] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 4,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      sym_bareid,
    ACTIONS(285), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3178] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_SLASH,
    ACTIONS(251), 12,
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
  [3199] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 4,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      sym_bareid,
    ACTIONS(289), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3220] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 4,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      sym_bareid,
    ACTIONS(293), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3241] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 4,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      sym_bareid,
    ACTIONS(297), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3262] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_SLASH,
    ACTIONS(301), 1,
      anon_sym_LPAREN,
    ACTIONS(231), 11,
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
  [3285] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 4,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      sym_bareid,
    ACTIONS(303), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3305] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 4,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      sym_bareid,
    ACTIONS(307), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3325] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_SLASH,
    ACTIONS(255), 11,
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
  [3345] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 3,
      anon_sym_conforms,
      sym_digits,
      sym_bareid,
    ACTIONS(289), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3365] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_SLASH,
    ACTIONS(259), 11,
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
  [3385] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_SLASH,
    ACTIONS(231), 11,
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
  [3405] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_SLASH,
    STATE(60), 1,
      sym_binop,
    ACTIONS(221), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(311), 6,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [3429] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_RBRACE,
    ACTIONS(315), 1,
      anon_sym_boot,
    ACTIONS(319), 1,
      anon_sym_property,
    ACTIONS(321), 1,
      anon_sym_LBRACK,
    STATE(141), 1,
      sym_machine_sentence,
    STATE(160), 1,
      sym_machine_prop,
    STATE(164), 1,
      sym_sentence_config,
    STATE(287), 1,
      sym_machine_body,
    ACTIONS(317), 2,
      anon_sym_initially,
      anon_sym_next,
    STATE(94), 2,
      sym_machine_sentence_conf,
      aux_sym_machine_body_repeat1,
  [3465] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_SLASH,
    ACTIONS(243), 11,
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
  [3485] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 4,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      sym_bareid,
    ACTIONS(323), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3505] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 3,
      anon_sym_conforms,
      sym_digits,
      sym_bareid,
    ACTIONS(281), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3525] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 4,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      sym_bareid,
    ACTIONS(327), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3545] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 4,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      sym_bareid,
    ACTIONS(179), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3565] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 3,
      anon_sym_conforms,
      sym_digits,
      sym_bareid,
    ACTIONS(331), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3585] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 4,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      sym_bareid,
    ACTIONS(335), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3605] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 3,
      anon_sym_conforms,
      sym_digits,
      sym_bareid,
    ACTIONS(339), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3625] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 4,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      sym_bareid,
    ACTIONS(343), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3645] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 3,
      anon_sym_conforms,
      sym_digits,
      sym_bareid,
    ACTIONS(347), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3665] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 3,
      anon_sym_conforms,
      sym_digits,
      sym_bareid,
    ACTIONS(351), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3685] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 4,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      sym_bareid,
    ACTIONS(355), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3705] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 4,
      anon_sym_ensures,
      anon_sym_requires,
      sym_digits,
      sym_bareid,
    ACTIONS(359), 7,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [3724] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_boot,
    ACTIONS(319), 1,
      anon_sym_property,
    ACTIONS(321), 1,
      anon_sym_LBRACK,
    ACTIONS(363), 1,
      anon_sym_RBRACE,
    STATE(141), 1,
      sym_machine_sentence,
    STATE(160), 1,
      sym_machine_prop,
    STATE(164), 1,
      sym_sentence_config,
    ACTIONS(317), 2,
      anon_sym_initially,
      anon_sym_next,
    STATE(95), 2,
      sym_machine_sentence_conf,
      aux_sym_machine_body_repeat1,
  [3757] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_RBRACE,
    ACTIONS(367), 1,
      anon_sym_boot,
    ACTIONS(373), 1,
      anon_sym_property,
    ACTIONS(376), 1,
      anon_sym_LBRACK,
    STATE(141), 1,
      sym_machine_sentence,
    STATE(160), 1,
      sym_machine_prop,
    STATE(164), 1,
      sym_sentence_config,
    ACTIONS(370), 2,
      anon_sym_initially,
      anon_sym_next,
    STATE(95), 2,
      sym_machine_sentence_conf,
      aux_sym_machine_body_repeat1,
  [3790] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(183), 1,
      anon_sym_LBRACK,
    ACTIONS(215), 1,
      sym_bareid,
    ACTIONS(379), 1,
      anon_sym_RBRACE,
    STATE(191), 1,
      sym_sentence_config,
    STATE(211), 1,
      sym_step,
    STATE(254), 1,
      sym_id,
    STATE(301), 1,
      sym_trans_steps,
    STATE(358), 1,
      sym_step_or_update_lhs,
    STATE(99), 2,
      sym_trans_step_config,
      aux_sym_trans_steps_repeat1,
  [3825] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_SLASH,
    ACTIONS(301), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_is,
    ACTIONS(231), 8,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_mod,
  [3848] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_SLASH,
    ACTIONS(383), 1,
      anon_sym_COLON_COLON_EQ,
    ACTIONS(227), 8,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_COLON_DASH,
      anon_sym_STAR,
      anon_sym_mod,
  [3868] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(183), 1,
      anon_sym_LBRACK,
    ACTIONS(215), 1,
      sym_bareid,
    ACTIONS(385), 1,
      anon_sym_RBRACE,
    STATE(191), 1,
      sym_sentence_config,
    STATE(211), 1,
      sym_step,
    STATE(254), 1,
      sym_id,
    STATE(358), 1,
      sym_step_or_update_lhs,
    STATE(105), 2,
      sym_trans_step_config,
      aux_sym_trans_steps_repeat1,
  [3900] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_SLASH,
    ACTIONS(387), 1,
      anon_sym_COLON_COLON_EQ,
    ACTIONS(227), 8,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_COLON_DASH,
      anon_sym_STAR,
      anon_sym_mod,
  [3920] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_SLASH,
    STATE(60), 1,
      sym_binop,
    ACTIONS(221), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(389), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [3942] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_SLASH,
    STATE(60), 1,
      sym_binop,
    ACTIONS(221), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(391), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [3964] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_SLASH,
    STATE(60), 1,
      sym_binop,
    ACTIONS(221), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(393), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [3986] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 3,
      anon_sym_conforms,
      sym_digits,
      sym_bareid,
    ACTIONS(359), 7,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [4004] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_RBRACE,
    ACTIONS(397), 1,
      anon_sym_LBRACK,
    ACTIONS(400), 1,
      sym_bareid,
    ACTIONS(403), 1,
      sym_qualid,
    STATE(191), 1,
      sym_sentence_config,
    STATE(211), 1,
      sym_step,
    STATE(254), 1,
      sym_id,
    STATE(358), 1,
      sym_step_or_update_lhs,
    STATE(105), 2,
      sym_trans_step_config,
      aux_sym_trans_steps_repeat1,
  [4036] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(275), 1,
      sym_qualid,
    ACTIONS(406), 1,
      anon_sym_any,
    ACTIONS(408), 1,
      sym_bareid,
    STATE(125), 1,
      sym_unncmp,
    STATE(146), 1,
      sym_typeid,
    STATE(168), 1,
      sym_field,
    STATE(220), 1,
      sym_unnbody,
    STATE(313), 1,
      sym_fields,
  [4067] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(275), 1,
      sym_qualid,
    ACTIONS(406), 1,
      anon_sym_any,
    ACTIONS(408), 1,
      sym_bareid,
    STATE(125), 1,
      sym_unncmp,
    STATE(146), 1,
      sym_typeid,
    STATE(168), 1,
      sym_field,
    STATE(220), 1,
      sym_unnbody,
    STATE(240), 1,
      sym_fields,
  [4098] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_SLASH,
    ACTIONS(410), 1,
      anon_sym_is,
    ACTIONS(227), 7,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_mod,
  [4117] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_SLASH,
    ACTIONS(412), 1,
      anon_sym_AT,
    ACTIONS(227), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_mod,
  [4136] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(275), 1,
      sym_qualid,
    ACTIONS(406), 1,
      anon_sym_any,
    ACTIONS(408), 1,
      sym_bareid,
    STATE(125), 1,
      sym_unncmp,
    STATE(146), 1,
      sym_typeid,
    STATE(168), 1,
      sym_field,
    STATE(220), 1,
      sym_unnbody,
    STATE(326), 1,
      sym_fields,
  [4167] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(414), 1,
      sym_digits,
    ACTIONS(418), 1,
      sym_bareid,
    STATE(238), 1,
      sym_enum_cnst,
    STATE(250), 1,
      sym_string,
    STATE(338), 1,
      sym_enum_list,
    ACTIONS(416), 3,
      sym_real,
      sym_frac,
      sym_qualid,
  [4194] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_AT,
    ACTIONS(420), 8,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [4211] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_AT,
    ACTIONS(428), 1,
      anon_sym_renames,
    ACTIONS(424), 7,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [4230] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(275), 1,
      sym_qualid,
    ACTIONS(406), 1,
      anon_sym_any,
    ACTIONS(408), 1,
      sym_bareid,
    STATE(125), 1,
      sym_unncmp,
    STATE(146), 1,
      sym_typeid,
    STATE(168), 1,
      sym_field,
    STATE(220), 1,
      sym_unnbody,
    STATE(292), 1,
      sym_fields,
  [4261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 2,
      sym_digits,
      sym_bareid,
    ACTIONS(430), 6,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [4277] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_SLASH,
    STATE(60), 1,
      sym_binop,
    ACTIONS(434), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(221), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_mod,
  [4297] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 2,
      sym_digits,
      sym_bareid,
    ACTIONS(359), 6,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [4313] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 2,
      sym_digits,
      sym_bareid,
    ACTIONS(436), 6,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [4329] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_SLASH,
    STATE(60), 1,
      sym_binop,
    ACTIONS(440), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
    ACTIONS(221), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_mod,
  [4349] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(414), 1,
      sym_digits,
    ACTIONS(418), 1,
      sym_bareid,
    STATE(250), 1,
      sym_string,
    STATE(262), 1,
      sym_enum_cnst,
    ACTIONS(416), 3,
      sym_real,
      sym_frac,
      sym_qualid,
  [4373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 8,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [4387] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_SLASH,
    STATE(60), 1,
      sym_binop,
    ACTIONS(444), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
    ACTIONS(221), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_mod,
  [4407] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 2,
      sym_digits,
      sym_bareid,
    ACTIONS(446), 6,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_real,
      sym_frac,
      anon_sym_DQUOTE,
      sym_qualid,
  [4423] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(275), 1,
      sym_qualid,
    ACTIONS(406), 1,
      anon_sym_any,
    ACTIONS(408), 1,
      sym_bareid,
    STATE(125), 1,
      sym_unncmp,
    STATE(146), 1,
      sym_typeid,
    STATE(216), 1,
      sym_field,
    STATE(220), 1,
      sym_unnbody,
  [4451] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_PLUS,
    STATE(139), 1,
      aux_sym_unnbody_repeat1,
    ACTIONS(450), 5,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [4468] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_SLASH,
    ACTIONS(454), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      sym_binop,
    ACTIONS(221), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_mod,
  [4487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 7,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [4500] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_COMMA,
    STATE(135), 1,
      aux_sym_func_term_list_repeat1,
    ACTIONS(458), 5,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [4517] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_COMMA,
    STATE(128), 1,
      aux_sym_func_term_list_repeat1,
    ACTIONS(462), 5,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [4534] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 7,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [4547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 7,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [4560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 7,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [4573] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_SLASH,
    ACTIONS(470), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      sym_binop,
    ACTIONS(221), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_mod,
  [4592] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(273), 1,
      sym_bareid,
    ACTIONS(275), 1,
      sym_qualid,
    ACTIONS(472), 1,
      anon_sym_any,
    STATE(125), 1,
      sym_unncmp,
    STATE(146), 1,
      sym_typeid,
    STATE(214), 1,
      sym_unnbody,
  [4617] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_COMMA,
    STATE(135), 1,
      aux_sym_func_term_list_repeat1,
    ACTIONS(474), 5,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [4634] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      anon_sym_PLUS,
    STATE(136), 1,
      aux_sym_unnbody_repeat1,
    ACTIONS(479), 5,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [4651] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_bareid,
    STATE(209), 1,
      sym_mod_ref,
    STATE(266), 1,
      sym_mod_refs,
    ACTIONS(484), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
    STATE(138), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [4672] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 7,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [4685] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_PLUS,
    STATE(136), 1,
      aux_sym_unnbody_repeat1,
    ACTIONS(490), 5,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [4702] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_SLASH,
    ACTIONS(492), 1,
      anon_sym_DOT,
    STATE(60), 1,
      sym_binop,
    ACTIONS(221), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_mod,
  [4721] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [4733] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_digits,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(68), 1,
      sym_string,
    STATE(253), 1,
      sym_constant,
    ACTIONS(33), 2,
      sym_real,
      sym_frac,
  [4753] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_COLON,
    ACTIONS(496), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_PLUS,
  [4767] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(273), 1,
      sym_bareid,
    ACTIONS(275), 1,
      sym_qualid,
    STATE(125), 1,
      sym_unncmp,
    STATE(146), 1,
      sym_typeid,
    STATE(221), 1,
      sym_unnbody,
  [4789] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 6,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [4801] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_PLUS,
  [4813] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [4825] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      ts_builtin_sym_end,
    ACTIONS(506), 5,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      sym_bareid,
  [4839] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_PLUS,
  [4851] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [4863] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(273), 1,
      sym_bareid,
    ACTIONS(275), 1,
      sym_qualid,
    STATE(125), 1,
      sym_unncmp,
    STATE(146), 1,
      sym_typeid,
    STATE(203), 1,
      sym_unnbody,
  [4885] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_bareid,
    STATE(263), 1,
      sym_mod_apply,
    STATE(299), 1,
      sym_choice_list,
    STATE(330), 1,
      sym_mod_ref,
    STATE(138), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [4905] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 6,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_DASH,
      anon_sym_PIPE,
  [4917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [4929] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [4941] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_PLUS,
  [4953] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      ts_builtin_sym_end,
    ACTIONS(518), 1,
      sym_bareid,
    ACTIONS(516), 4,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
  [4969] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      ts_builtin_sym_end,
    ACTIONS(522), 5,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
      sym_bareid,
  [4983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [4995] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 6,
      anon_sym_RBRACE,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
      anon_sym_LBRACK,
  [5007] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(273), 1,
      sym_bareid,
    ACTIONS(275), 1,
      sym_qualid,
    STATE(125), 1,
      sym_unncmp,
    STATE(146), 1,
      sym_typeid,
    STATE(265), 1,
      sym_unnbody,
  [5029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_PLUS,
  [5041] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_bareid,
    STATE(263), 1,
      sym_mod_apply,
    STATE(272), 1,
      sym_choice_list,
    STATE(330), 1,
      sym_mod_ref,
    STATE(138), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5061] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_boot,
    ACTIONS(319), 1,
      anon_sym_property,
    STATE(159), 1,
      sym_machine_sentence,
    STATE(160), 1,
      sym_machine_prop,
    ACTIONS(317), 2,
      anon_sym_initially,
      anon_sym_next,
  [5081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 5,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
  [5092] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_bareid,
    STATE(209), 1,
      sym_mod_ref,
    STATE(269), 1,
      sym_mod_refs,
    STATE(138), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 5,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
  [5120] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COMMA,
    STATE(190), 1,
      aux_sym_fields_repeat1,
    ACTIONS(534), 3,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [5135] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_COMMA,
    STATE(169), 1,
      aux_sym_fields_repeat1,
    ACTIONS(538), 3,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [5150] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(215), 1,
      sym_bareid,
    STATE(243), 1,
      sym_setting,
    STATE(275), 1,
      sym_id,
    STATE(346), 1,
      sym_setting_list,
  [5169] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 5,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
  [5180] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      anon_sym_COMMA,
    STATE(172), 1,
      aux_sym_body_repeat1,
    ACTIONS(545), 3,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [5195] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_bareid,
    STATE(330), 1,
      sym_mod_ref,
    STATE(345), 1,
      sym_mod_apply,
    STATE(138), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5212] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(215), 1,
      sym_bareid,
    STATE(243), 1,
      sym_setting,
    STATE(275), 1,
      sym_id,
    STATE(347), 1,
      sym_setting_list,
  [5231] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(215), 1,
      sym_bareid,
    STATE(243), 1,
      sym_setting,
    STATE(275), 1,
      sym_id,
    STATE(322), 1,
      sym_setting_list,
  [5250] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(215), 1,
      sym_bareid,
    STATE(243), 1,
      sym_setting,
    STATE(275), 1,
      sym_id,
    STATE(339), 1,
      sym_setting_list,
  [5269] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_bareid,
    STATE(330), 1,
      sym_mod_ref,
    STATE(333), 1,
      sym_mod_apply,
    STATE(138), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5286] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_RPAREN,
    ACTIONS(552), 1,
      sym_bareid,
    STATE(245), 1,
      sym_val_or_model_program,
    STATE(248), 1,
      sym_mod_ref_rename,
    STATE(354), 1,
      sym_vom_param_list,
  [5305] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(215), 1,
      sym_bareid,
    STATE(155), 1,
      sym_update,
    STATE(254), 1,
      sym_id,
    STATE(325), 1,
      sym_step_or_update_lhs,
  [5324] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_bareid,
    STATE(209), 1,
      sym_mod_ref,
    STATE(260), 1,
      sym_mod_refs,
    STATE(138), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5341] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(215), 1,
      sym_bareid,
    STATE(155), 1,
      sym_step,
    STATE(254), 1,
      sym_id,
    STATE(327), 1,
      sym_step_or_update_lhs,
  [5360] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 5,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
  [5371] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_LPAREN,
    STATE(194), 1,
      sym_transform_rest,
    STATE(230), 1,
      sym_transform_sig,
    STATE(283), 1,
      sym_transform_sig_config,
    STATE(285), 1,
      sym_trans_sig_in,
  [5390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 5,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
  [5401] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(215), 1,
      sym_bareid,
    STATE(243), 1,
      sym_setting,
    STATE(275), 1,
      sym_id,
    STATE(332), 1,
      sym_setting_list,
  [5420] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(215), 1,
      sym_bareid,
    STATE(243), 1,
      sym_setting,
    STATE(275), 1,
      sym_id,
    STATE(337), 1,
      sym_setting_list,
  [5439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 5,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
  [5450] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    STATE(172), 1,
      aux_sym_body_repeat1,
    ACTIONS(562), 3,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [5465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 5,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
  [5476] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COMMA,
    STATE(169), 1,
      aux_sym_fields_repeat1,
    ACTIONS(568), 3,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [5491] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(215), 1,
      sym_bareid,
    STATE(215), 1,
      sym_step,
    STATE(254), 1,
      sym_id,
    STATE(358), 1,
      sym_step_or_update_lhs,
  [5510] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(273), 1,
      sym_bareid,
    ACTIONS(275), 1,
      sym_qualid,
    STATE(146), 1,
      sym_typeid,
    STATE(156), 1,
      sym_unncmp,
  [5529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 5,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
  [5540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 5,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
  [5551] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      sym_bareid,
    ACTIONS(574), 1,
      anon_sym_RPAREN,
    STATE(245), 1,
      sym_val_or_model_program,
    STATE(248), 1,
      sym_mod_ref_rename,
    STATE(336), 1,
      sym_vom_param_list,
  [5570] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_LPAREN,
    STATE(197), 1,
      sym_tsystem_rest,
    STATE(230), 1,
      sym_transform_sig,
    STATE(285), 1,
      sym_trans_sig_in,
    STATE(348), 1,
      sym_transform_sig_config,
  [5589] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 5,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
  [5600] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    STATE(188), 1,
      aux_sym_body_repeat1,
    ACTIONS(578), 3,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [5615] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 5,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
  [5626] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_bareid,
    STATE(209), 1,
      sym_mod_ref,
    STATE(239), 1,
      sym_mod_refs,
    STATE(138), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5643] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(215), 1,
      sym_bareid,
    STATE(243), 1,
      sym_setting,
    STATE(275), 1,
      sym_id,
    STATE(281), 1,
      sym_setting_list,
  [5662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 5,
      ts_builtin_sym_end,
      anon_sym_machine,
      anon_sym_model,
      anon_sym_partial,
      anon_sym_transform,
  [5673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [5683] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_LBRACE,
    ACTIONS(586), 1,
      anon_sym_machine,
    STATE(204), 2,
      sym_machine_sig,
      aux_sym_machine_sig_config_repeat1,
  [5697] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      sym_bareid,
    STATE(245), 1,
      sym_val_or_model_program,
    STATE(248), 1,
      sym_mod_ref_rename,
    STATE(273), 1,
      sym_vom_param_list,
  [5713] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 2,
      anon_sym_LBRACE,
      sym_qualid,
    ACTIONS(591), 2,
      anon_sym_any,
      sym_bareid,
  [5725] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 4,
      anon_sym_LBRACE,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [5735] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5745] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_COMMA,
    ACTIONS(595), 3,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LBRACK,
  [5757] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
    ACTIONS(601), 2,
      anon_sym_includes,
      anon_sym_extends,
  [5769] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      sym_bareid,
    ACTIONS(603), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_qualid,
  [5781] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      sym_bareid,
    ACTIONS(502), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_qualid,
  [5793] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_bareid,
    STATE(219), 1,
      sym_mod_ref,
    STATE(138), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5807] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [5817] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      sym_bareid,
    ACTIONS(611), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_qualid,
  [5829] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [5839] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_bareid,
    STATE(207), 1,
      sym_mod_ref,
    STATE(138), 2,
      sym_mod_ref_rename,
      sym_mod_ref_no_rename,
  [5853] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_SEMI,
    STATE(225), 1,
      aux_sym_body_list_repeat1,
    ACTIONS(615), 2,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [5867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 4,
      anon_sym_LBRACE,
      anon_sym_includes,
      anon_sym_extends,
      anon_sym_LBRACK,
  [5877] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [5887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [5897] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_machine,
    ACTIONS(625), 1,
      anon_sym_LBRACE,
    STATE(204), 2,
      sym_machine_sig,
      aux_sym_machine_sig_config_repeat1,
  [5911] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_SEMI,
    STATE(223), 1,
      aux_sym_body_list_repeat1,
    ACTIONS(627), 2,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [5925] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(215), 1,
      sym_bareid,
    STATE(254), 1,
      sym_id,
    STATE(321), 1,
      sym_step_or_update_lhs,
  [5941] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_SEMI,
    STATE(223), 1,
      aux_sym_body_list_repeat1,
    ACTIONS(632), 2,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [5955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5965] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 4,
      anon_sym_boot,
      anon_sym_initially,
      anon_sym_next,
      anon_sym_property,
  [5975] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_qualid,
    ACTIONS(215), 1,
      sym_bareid,
    STATE(300), 1,
      sym_id,
  [5988] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      sym_bareid,
    STATE(252), 1,
      sym_mod_ref_rename,
    STATE(349), 1,
      sym_model_param_list,
  [6001] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_LBRACE,
    ACTIONS(638), 1,
      anon_sym_LBRACK,
    STATE(335), 1,
      sym_config,
  [6014] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 1,
      anon_sym_LBRACK,
    ACTIONS(640), 1,
      anon_sym_LBRACE,
    STATE(356), 1,
      sym_config,
  [6027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 3,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [6036] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      sym_bareid,
    STATE(252), 1,
      sym_mod_ref_rename,
    STATE(296), 1,
      sym_model_param_list,
  [6049] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      anon_sym_RBRACE,
    ACTIONS(644), 1,
      anon_sym_COMMA,
    STATE(234), 1,
      aux_sym_enum_list_repeat1,
  [6062] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_RBRACE,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    STATE(234), 1,
      aux_sym_enum_list_repeat1,
  [6075] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 1,
      anon_sym_LBRACK,
    ACTIONS(651), 1,
      anon_sym_LBRACE,
    STATE(314), 1,
      sym_config,
  [6088] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      anon_sym_DOT_DOT,
    ACTIONS(653), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [6099] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(657), 1,
      anon_sym_RBRACE,
    STATE(235), 1,
      aux_sym_enum_list_repeat1,
  [6112] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 3,
      anon_sym_LBRACE,
      anon_sym_machine,
      anon_sym_LBRACK,
  [6121] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(106), 1,
      sym_maparrow,
    ACTIONS(661), 2,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [6132] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_RBRACE,
    ACTIONS(665), 1,
      anon_sym_PIPE,
    STATE(132), 1,
      sym_compr_rest,
  [6145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [6153] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      anon_sym_COMMA,
    ACTIONS(671), 1,
      anon_sym_RBRACK,
  [6163] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_renames,
    ACTIONS(673), 1,
      anon_sym_COLON,
  [6173] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      anon_sym_RPAREN,
    ACTIONS(677), 1,
      anon_sym_COMMA,
  [6183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 2,
      anon_sym_includes,
      anon_sym_extends,
  [6191] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(121), 1,
      sym_string,
  [6201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 2,
      anon_sym_DOT,
      anon_sym_COLON_DASH,
  [6217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [6225] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      anon_sym_system,
    ACTIONS(687), 1,
      sym_bareid,
  [6235] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 1,
      anon_sym_RPAREN,
    ACTIONS(691), 1,
      anon_sym_COMMA,
  [6245] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6253] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      anon_sym_EQ,
    ACTIONS(697), 1,
      anon_sym_COMMA,
  [6263] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_LPAREN,
    STATE(311), 1,
      sym_machine_sig_in,
  [6273] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [6289] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(256), 1,
      sym_string,
  [6299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 2,
      anon_sym_DOT,
      anon_sym_COLON_DASH,
  [6307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [6315] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      anon_sym_DOT,
    ACTIONS(711), 1,
      anon_sym_COMMA,
  [6325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [6333] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      anon_sym_DOT,
    ACTIONS(715), 1,
      anon_sym_SEMI,
  [6343] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      anon_sym_RPAREN,
    ACTIONS(719), 1,
      anon_sym_COMMA,
  [6353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6361] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [6369] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(130), 1,
      sym_string,
  [6379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [6387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 2,
      anon_sym_LBRACE,
      anon_sym_machine,
  [6395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [6403] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      anon_sym_DOT,
  [6410] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      anon_sym_DOT,
  [6417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 1,
      anon_sym_RPAREN,
  [6424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      anon_sym_DOT,
  [6431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      anon_sym_EQ,
  [6438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      anon_sym_DOT,
  [6445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      anon_sym_LPAREN,
  [6452] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      anon_sym_LPAREN,
  [6459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      anon_sym_LPAREN,
  [6466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      anon_sym_of,
  [6473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      anon_sym_RBRACK,
  [6480] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 1,
      anon_sym_RPAREN,
  [6487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      anon_sym_LBRACE,
  [6494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 1,
      sym_digits,
  [6501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      anon_sym_returns,
  [6508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      sym_bareid,
  [6515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 1,
      anon_sym_RBRACE,
  [6522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 1,
      anon_sym_RBRACE,
  [6529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      anon_sym_returns,
  [6536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      anon_sym_DOT,
  [6543] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_of,
  [6550] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      anon_sym_RPAREN,
  [6557] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(775), 1,
      aux_sym_string_token1,
  [6564] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 1,
      anon_sym_RBRACE,
  [6571] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 1,
      anon_sym_DOT,
  [6578] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_RPAREN,
  [6585] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      sym_bareid,
  [6592] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 1,
      anon_sym_RPAREN,
  [6599] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 1,
      anon_sym_DOT,
  [6606] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 1,
      anon_sym_DOT,
  [6613] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 1,
      anon_sym_RBRACE,
  [6620] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      anon_sym_DOT,
  [6627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 1,
      anon_sym_DOT,
  [6634] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      anon_sym_DQUOTE,
  [6641] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      aux_sym_model_contract_token1,
  [6648] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_DOT,
  [6655] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      aux_sym_model_contract_token1,
  [6662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      anon_sym_RBRACE,
  [6669] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
  [6676] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_renames,
  [6683] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 1,
      anon_sym_of,
  [6690] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 1,
      anon_sym_DOT,
  [6697] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 1,
      anon_sym_RPAREN,
  [6704] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_LBRACE,
  [6711] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_RPAREN,
  [6718] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(817), 1,
      anon_sym_DOT,
  [6725] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 1,
      sym_bareid,
  [6732] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_LBRACE,
  [6739] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      sym_bareid,
  [6746] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_of,
  [6753] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_EQ,
  [6760] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_RBRACK,
  [6767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 1,
      anon_sym_EQ,
  [6774] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_LBRACE,
  [6781] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 1,
      anon_sym_EQ,
  [6788] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_RPAREN,
  [6795] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_EQ,
  [6802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      anon_sym_LBRACE,
  [6809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 1,
      anon_sym_LBRACE,
  [6816] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_LPAREN,
  [6823] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      ts_builtin_sym_end,
  [6830] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      anon_sym_RBRACK,
  [6837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 1,
      anon_sym_DOT,
  [6844] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      anon_sym_LPAREN,
  [6851] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(853), 1,
      anon_sym_LBRACE,
  [6858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      anon_sym_RPAREN,
  [6865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      anon_sym_RBRACK,
  [6872] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_RBRACE,
  [6879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(861), 1,
      anon_sym_RBRACK,
  [6886] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_returns,
  [6893] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_DQUOTE,
  [6900] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 1,
      anon_sym_RPAREN,
  [6907] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      anon_sym_DOT,
  [6914] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 1,
      anon_sym_DOT,
  [6921] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      anon_sym_DOT,
  [6928] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(875), 1,
      anon_sym_RBRACK,
  [6935] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      anon_sym_RBRACK,
  [6942] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      anon_sym_LBRACE,
  [6949] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      anon_sym_RPAREN,
  [6956] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      anon_sym_model,
  [6963] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(885), 1,
      aux_sym_string_token1,
  [6970] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(887), 1,
      sym_bareid,
  [6977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 1,
      sym_bareid,
  [6984] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 1,
      anon_sym_RPAREN,
  [6991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 1,
      anon_sym_RBRACE,
  [6998] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 1,
      anon_sym_LBRACE,
  [7005] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_of,
  [7012] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 1,
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
  [SMALL_STATE(17)] = 1094,
  [SMALL_STATE(18)] = 1148,
  [SMALL_STATE(19)] = 1202,
  [SMALL_STATE(20)] = 1256,
  [SMALL_STATE(21)] = 1310,
  [SMALL_STATE(22)] = 1337,
  [SMALL_STATE(23)] = 1393,
  [SMALL_STATE(24)] = 1449,
  [SMALL_STATE(25)] = 1505,
  [SMALL_STATE(26)] = 1561,
  [SMALL_STATE(27)] = 1597,
  [SMALL_STATE(28)] = 1653,
  [SMALL_STATE(29)] = 1709,
  [SMALL_STATE(30)] = 1765,
  [SMALL_STATE(31)] = 1791,
  [SMALL_STATE(32)] = 1847,
  [SMALL_STATE(33)] = 1877,
  [SMALL_STATE(34)] = 1933,
  [SMALL_STATE(35)] = 1960,
  [SMALL_STATE(36)] = 2013,
  [SMALL_STATE(37)] = 2040,
  [SMALL_STATE(38)] = 2093,
  [SMALL_STATE(39)] = 2124,
  [SMALL_STATE(40)] = 2177,
  [SMALL_STATE(41)] = 2201,
  [SMALL_STATE(42)] = 2225,
  [SMALL_STATE(43)] = 2249,
  [SMALL_STATE(44)] = 2273,
  [SMALL_STATE(45)] = 2297,
  [SMALL_STATE(46)] = 2347,
  [SMALL_STATE(47)] = 2371,
  [SMALL_STATE(48)] = 2421,
  [SMALL_STATE(49)] = 2471,
  [SMALL_STATE(50)] = 2494,
  [SMALL_STATE(51)] = 2537,
  [SMALL_STATE(52)] = 2584,
  [SMALL_STATE(53)] = 2627,
  [SMALL_STATE(54)] = 2671,
  [SMALL_STATE(55)] = 2715,
  [SMALL_STATE(56)] = 2759,
  [SMALL_STATE(57)] = 2803,
  [SMALL_STATE(58)] = 2847,
  [SMALL_STATE(59)] = 2891,
  [SMALL_STATE(60)] = 2935,
  [SMALL_STATE(61)] = 2979,
  [SMALL_STATE(62)] = 3023,
  [SMALL_STATE(63)] = 3067,
  [SMALL_STATE(64)] = 3088,
  [SMALL_STATE(65)] = 3111,
  [SMALL_STATE(66)] = 3136,
  [SMALL_STATE(67)] = 3157,
  [SMALL_STATE(68)] = 3178,
  [SMALL_STATE(69)] = 3199,
  [SMALL_STATE(70)] = 3220,
  [SMALL_STATE(71)] = 3241,
  [SMALL_STATE(72)] = 3262,
  [SMALL_STATE(73)] = 3285,
  [SMALL_STATE(74)] = 3305,
  [SMALL_STATE(75)] = 3325,
  [SMALL_STATE(76)] = 3345,
  [SMALL_STATE(77)] = 3365,
  [SMALL_STATE(78)] = 3385,
  [SMALL_STATE(79)] = 3405,
  [SMALL_STATE(80)] = 3429,
  [SMALL_STATE(81)] = 3465,
  [SMALL_STATE(82)] = 3485,
  [SMALL_STATE(83)] = 3505,
  [SMALL_STATE(84)] = 3525,
  [SMALL_STATE(85)] = 3545,
  [SMALL_STATE(86)] = 3565,
  [SMALL_STATE(87)] = 3585,
  [SMALL_STATE(88)] = 3605,
  [SMALL_STATE(89)] = 3625,
  [SMALL_STATE(90)] = 3645,
  [SMALL_STATE(91)] = 3665,
  [SMALL_STATE(92)] = 3685,
  [SMALL_STATE(93)] = 3705,
  [SMALL_STATE(94)] = 3724,
  [SMALL_STATE(95)] = 3757,
  [SMALL_STATE(96)] = 3790,
  [SMALL_STATE(97)] = 3825,
  [SMALL_STATE(98)] = 3848,
  [SMALL_STATE(99)] = 3868,
  [SMALL_STATE(100)] = 3900,
  [SMALL_STATE(101)] = 3920,
  [SMALL_STATE(102)] = 3942,
  [SMALL_STATE(103)] = 3964,
  [SMALL_STATE(104)] = 3986,
  [SMALL_STATE(105)] = 4004,
  [SMALL_STATE(106)] = 4036,
  [SMALL_STATE(107)] = 4067,
  [SMALL_STATE(108)] = 4098,
  [SMALL_STATE(109)] = 4117,
  [SMALL_STATE(110)] = 4136,
  [SMALL_STATE(111)] = 4167,
  [SMALL_STATE(112)] = 4194,
  [SMALL_STATE(113)] = 4211,
  [SMALL_STATE(114)] = 4230,
  [SMALL_STATE(115)] = 4261,
  [SMALL_STATE(116)] = 4277,
  [SMALL_STATE(117)] = 4297,
  [SMALL_STATE(118)] = 4313,
  [SMALL_STATE(119)] = 4329,
  [SMALL_STATE(120)] = 4349,
  [SMALL_STATE(121)] = 4373,
  [SMALL_STATE(122)] = 4387,
  [SMALL_STATE(123)] = 4407,
  [SMALL_STATE(124)] = 4423,
  [SMALL_STATE(125)] = 4451,
  [SMALL_STATE(126)] = 4468,
  [SMALL_STATE(127)] = 4487,
  [SMALL_STATE(128)] = 4500,
  [SMALL_STATE(129)] = 4517,
  [SMALL_STATE(130)] = 4534,
  [SMALL_STATE(131)] = 4547,
  [SMALL_STATE(132)] = 4560,
  [SMALL_STATE(133)] = 4573,
  [SMALL_STATE(134)] = 4592,
  [SMALL_STATE(135)] = 4617,
  [SMALL_STATE(136)] = 4634,
  [SMALL_STATE(137)] = 4651,
  [SMALL_STATE(138)] = 4672,
  [SMALL_STATE(139)] = 4685,
  [SMALL_STATE(140)] = 4702,
  [SMALL_STATE(141)] = 4721,
  [SMALL_STATE(142)] = 4733,
  [SMALL_STATE(143)] = 4753,
  [SMALL_STATE(144)] = 4767,
  [SMALL_STATE(145)] = 4789,
  [SMALL_STATE(146)] = 4801,
  [SMALL_STATE(147)] = 4813,
  [SMALL_STATE(148)] = 4825,
  [SMALL_STATE(149)] = 4839,
  [SMALL_STATE(150)] = 4851,
  [SMALL_STATE(151)] = 4863,
  [SMALL_STATE(152)] = 4885,
  [SMALL_STATE(153)] = 4905,
  [SMALL_STATE(154)] = 4917,
  [SMALL_STATE(155)] = 4929,
  [SMALL_STATE(156)] = 4941,
  [SMALL_STATE(157)] = 4953,
  [SMALL_STATE(158)] = 4969,
  [SMALL_STATE(159)] = 4983,
  [SMALL_STATE(160)] = 4995,
  [SMALL_STATE(161)] = 5007,
  [SMALL_STATE(162)] = 5029,
  [SMALL_STATE(163)] = 5041,
  [SMALL_STATE(164)] = 5061,
  [SMALL_STATE(165)] = 5081,
  [SMALL_STATE(166)] = 5092,
  [SMALL_STATE(167)] = 5109,
  [SMALL_STATE(168)] = 5120,
  [SMALL_STATE(169)] = 5135,
  [SMALL_STATE(170)] = 5150,
  [SMALL_STATE(171)] = 5169,
  [SMALL_STATE(172)] = 5180,
  [SMALL_STATE(173)] = 5195,
  [SMALL_STATE(174)] = 5212,
  [SMALL_STATE(175)] = 5231,
  [SMALL_STATE(176)] = 5250,
  [SMALL_STATE(177)] = 5269,
  [SMALL_STATE(178)] = 5286,
  [SMALL_STATE(179)] = 5305,
  [SMALL_STATE(180)] = 5324,
  [SMALL_STATE(181)] = 5341,
  [SMALL_STATE(182)] = 5360,
  [SMALL_STATE(183)] = 5371,
  [SMALL_STATE(184)] = 5390,
  [SMALL_STATE(185)] = 5401,
  [SMALL_STATE(186)] = 5420,
  [SMALL_STATE(187)] = 5439,
  [SMALL_STATE(188)] = 5450,
  [SMALL_STATE(189)] = 5465,
  [SMALL_STATE(190)] = 5476,
  [SMALL_STATE(191)] = 5491,
  [SMALL_STATE(192)] = 5510,
  [SMALL_STATE(193)] = 5529,
  [SMALL_STATE(194)] = 5540,
  [SMALL_STATE(195)] = 5551,
  [SMALL_STATE(196)] = 5570,
  [SMALL_STATE(197)] = 5589,
  [SMALL_STATE(198)] = 5600,
  [SMALL_STATE(199)] = 5615,
  [SMALL_STATE(200)] = 5626,
  [SMALL_STATE(201)] = 5643,
  [SMALL_STATE(202)] = 5662,
  [SMALL_STATE(203)] = 5673,
  [SMALL_STATE(204)] = 5683,
  [SMALL_STATE(205)] = 5697,
  [SMALL_STATE(206)] = 5713,
  [SMALL_STATE(207)] = 5725,
  [SMALL_STATE(208)] = 5735,
  [SMALL_STATE(209)] = 5745,
  [SMALL_STATE(210)] = 5757,
  [SMALL_STATE(211)] = 5769,
  [SMALL_STATE(212)] = 5781,
  [SMALL_STATE(213)] = 5793,
  [SMALL_STATE(214)] = 5807,
  [SMALL_STATE(215)] = 5817,
  [SMALL_STATE(216)] = 5829,
  [SMALL_STATE(217)] = 5839,
  [SMALL_STATE(218)] = 5853,
  [SMALL_STATE(219)] = 5867,
  [SMALL_STATE(220)] = 5877,
  [SMALL_STATE(221)] = 5887,
  [SMALL_STATE(222)] = 5897,
  [SMALL_STATE(223)] = 5911,
  [SMALL_STATE(224)] = 5925,
  [SMALL_STATE(225)] = 5941,
  [SMALL_STATE(226)] = 5955,
  [SMALL_STATE(227)] = 5965,
  [SMALL_STATE(228)] = 5975,
  [SMALL_STATE(229)] = 5988,
  [SMALL_STATE(230)] = 6001,
  [SMALL_STATE(231)] = 6014,
  [SMALL_STATE(232)] = 6027,
  [SMALL_STATE(233)] = 6036,
  [SMALL_STATE(234)] = 6049,
  [SMALL_STATE(235)] = 6062,
  [SMALL_STATE(236)] = 6075,
  [SMALL_STATE(237)] = 6088,
  [SMALL_STATE(238)] = 6099,
  [SMALL_STATE(239)] = 6112,
  [SMALL_STATE(240)] = 6121,
  [SMALL_STATE(241)] = 6132,
  [SMALL_STATE(242)] = 6145,
  [SMALL_STATE(243)] = 6153,
  [SMALL_STATE(244)] = 6163,
  [SMALL_STATE(245)] = 6173,
  [SMALL_STATE(246)] = 6183,
  [SMALL_STATE(247)] = 6191,
  [SMALL_STATE(248)] = 6201,
  [SMALL_STATE(249)] = 6209,
  [SMALL_STATE(250)] = 6217,
  [SMALL_STATE(251)] = 6225,
  [SMALL_STATE(252)] = 6235,
  [SMALL_STATE(253)] = 6245,
  [SMALL_STATE(254)] = 6253,
  [SMALL_STATE(255)] = 6263,
  [SMALL_STATE(256)] = 6273,
  [SMALL_STATE(257)] = 6281,
  [SMALL_STATE(258)] = 6289,
  [SMALL_STATE(259)] = 6299,
  [SMALL_STATE(260)] = 6307,
  [SMALL_STATE(261)] = 6315,
  [SMALL_STATE(262)] = 6325,
  [SMALL_STATE(263)] = 6333,
  [SMALL_STATE(264)] = 6343,
  [SMALL_STATE(265)] = 6353,
  [SMALL_STATE(266)] = 6361,
  [SMALL_STATE(267)] = 6369,
  [SMALL_STATE(268)] = 6379,
  [SMALL_STATE(269)] = 6387,
  [SMALL_STATE(270)] = 6395,
  [SMALL_STATE(271)] = 6403,
  [SMALL_STATE(272)] = 6410,
  [SMALL_STATE(273)] = 6417,
  [SMALL_STATE(274)] = 6424,
  [SMALL_STATE(275)] = 6431,
  [SMALL_STATE(276)] = 6438,
  [SMALL_STATE(277)] = 6445,
  [SMALL_STATE(278)] = 6452,
  [SMALL_STATE(279)] = 6459,
  [SMALL_STATE(280)] = 6466,
  [SMALL_STATE(281)] = 6473,
  [SMALL_STATE(282)] = 6480,
  [SMALL_STATE(283)] = 6487,
  [SMALL_STATE(284)] = 6494,
  [SMALL_STATE(285)] = 6501,
  [SMALL_STATE(286)] = 6508,
  [SMALL_STATE(287)] = 6515,
  [SMALL_STATE(288)] = 6522,
  [SMALL_STATE(289)] = 6529,
  [SMALL_STATE(290)] = 6536,
  [SMALL_STATE(291)] = 6543,
  [SMALL_STATE(292)] = 6550,
  [SMALL_STATE(293)] = 6557,
  [SMALL_STATE(294)] = 6564,
  [SMALL_STATE(295)] = 6571,
  [SMALL_STATE(296)] = 6578,
  [SMALL_STATE(297)] = 6585,
  [SMALL_STATE(298)] = 6592,
  [SMALL_STATE(299)] = 6599,
  [SMALL_STATE(300)] = 6606,
  [SMALL_STATE(301)] = 6613,
  [SMALL_STATE(302)] = 6620,
  [SMALL_STATE(303)] = 6627,
  [SMALL_STATE(304)] = 6634,
  [SMALL_STATE(305)] = 6641,
  [SMALL_STATE(306)] = 6648,
  [SMALL_STATE(307)] = 6655,
  [SMALL_STATE(308)] = 6662,
  [SMALL_STATE(309)] = 6669,
  [SMALL_STATE(310)] = 6676,
  [SMALL_STATE(311)] = 6683,
  [SMALL_STATE(312)] = 6690,
  [SMALL_STATE(313)] = 6697,
  [SMALL_STATE(314)] = 6704,
  [SMALL_STATE(315)] = 6711,
  [SMALL_STATE(316)] = 6718,
  [SMALL_STATE(317)] = 6725,
  [SMALL_STATE(318)] = 6732,
  [SMALL_STATE(319)] = 6739,
  [SMALL_STATE(320)] = 6746,
  [SMALL_STATE(321)] = 6753,
  [SMALL_STATE(322)] = 6760,
  [SMALL_STATE(323)] = 6767,
  [SMALL_STATE(324)] = 6774,
  [SMALL_STATE(325)] = 6781,
  [SMALL_STATE(326)] = 6788,
  [SMALL_STATE(327)] = 6795,
  [SMALL_STATE(328)] = 6802,
  [SMALL_STATE(329)] = 6809,
  [SMALL_STATE(330)] = 6816,
  [SMALL_STATE(331)] = 6823,
  [SMALL_STATE(332)] = 6830,
  [SMALL_STATE(333)] = 6837,
  [SMALL_STATE(334)] = 6844,
  [SMALL_STATE(335)] = 6851,
  [SMALL_STATE(336)] = 6858,
  [SMALL_STATE(337)] = 6865,
  [SMALL_STATE(338)] = 6872,
  [SMALL_STATE(339)] = 6879,
  [SMALL_STATE(340)] = 6886,
  [SMALL_STATE(341)] = 6893,
  [SMALL_STATE(342)] = 6900,
  [SMALL_STATE(343)] = 6907,
  [SMALL_STATE(344)] = 6914,
  [SMALL_STATE(345)] = 6921,
  [SMALL_STATE(346)] = 6928,
  [SMALL_STATE(347)] = 6935,
  [SMALL_STATE(348)] = 6942,
  [SMALL_STATE(349)] = 6949,
  [SMALL_STATE(350)] = 6956,
  [SMALL_STATE(351)] = 6963,
  [SMALL_STATE(352)] = 6970,
  [SMALL_STATE(353)] = 6977,
  [SMALL_STATE(354)] = 6984,
  [SMALL_STATE(355)] = 6991,
  [SMALL_STATE(356)] = 6998,
  [SMALL_STATE(357)] = 7005,
  [SMALL_STATE(358)] = 7012,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_body, 1),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(25),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(53),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(27),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(176),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(118),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(68),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(68),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(293),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(100),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_body_repeat1, 2), SHIFT_REPEAT(49),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dom_sentences, 1),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(25),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(53),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(33),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(170),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(118),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(68),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(68),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(293),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(98),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dom_sentences_repeat1, 2), SHIFT_REPEAT(49),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(53),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(22),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(14),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(176),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(118),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(68),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(68),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(293),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(108),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2), SHIFT_REPEAT(49),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_body, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_fact_list, 3),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_fact_list, 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(353),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(352),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(350),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(251),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 1),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term, 2),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_term, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term, 3),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_term, 3),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term, 4),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_term, 4),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term, 1),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_term, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_sentence, 3),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trans_sentence, 3),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 4),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_sentence_config, 2),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trans_sentence_config, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl, 4),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_decl, 4),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_sentence, 1),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trans_sentence, 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_sentence_config, 1),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trans_sentence_config, 1),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_contract_conf, 1),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_contract_conf, 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_contract, 3),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_contract, 3),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_or_compr, 1),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_contract_conf, 2),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_contract_conf, 2),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_fact_list, 2),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_fact_list, 2),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dom_sentence_config, 2),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dom_sentence_config, 2),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_contract, 5),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_contract, 5),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dom_sentence, 3),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dom_sentence, 3),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_sentence, 1),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_sentence, 1),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dom_sentence, 1),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dom_sentence, 1),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dom_sentence_config, 1),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dom_sentence_config, 1),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_fact_list, 4),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_fact_list, 4),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sentence_config, 3),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sentence_config, 3),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_body, 1),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_machine_body_repeat1, 2),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_machine_body_repeat1, 2), SHIFT_REPEAT(181),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_machine_body_repeat1, 2), SHIFT_REPEAT(179),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_machine_body_repeat1, 2), SHIFT_REPEAT(286),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_machine_body_repeat1, 2), SHIFT_REPEAT(175),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_steps, 1),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 2),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 3),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 4),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trans_steps_repeat1, 2),
  [397] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_steps_repeat1, 2), SHIFT_REPEAT(174),
  [400] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trans_steps_repeat1, 2), SHIFT_REPEAT(49),
  [403] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trans_steps_repeat1, 2), SHIFT_REPEAT(49),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_ref_rename, 3),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_ref_no_rename, 1),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binop, 1),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binop, 1),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_app_arg, 1),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unop, 1),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unop, 1),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_fact, 1),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_ref_rename, 5),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_fact, 3),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relop, 1),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relop, 1),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unnbody, 1),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compr_rest, 3),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term_list, 2),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_term_list, 1),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_ref_no_rename, 3),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compr_rest, 1),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compr, 3),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_term_list_repeat1, 2),
  [476] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_term_list_repeat1, 2), SHIFT_REPEAT(37),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unnbody_repeat1, 2),
  [481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unnbody_repeat1, 2), SHIFT_REPEAT(192),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain_sig, 3),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_ref, 1),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unnbody, 2),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sentence_conf, 1),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeid, 1),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unncmp, 1),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 4),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain, 3),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_domain, 3),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 4),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_prop, 5),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sentence, 2),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module, 1),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain, 4),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_domain, 4),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sentence_conf, 2),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sentence, 1),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unncmp, 3),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tsystem_rest, 4),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model, 3),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fields, 1),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fields_repeat1, 2),
  [540] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fields_repeat1, 2), SHIFT_REPEAT(124),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform_rest, 3),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(48),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform_rest, 4),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine, 3),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 3),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine, 4),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fields, 2),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tsystem_rest, 3),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform, 3),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tsystem, 4),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model, 4),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_machine_sig_config_repeat1, 2),
  [586] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_machine_sig_config_repeat1, 2), SHIFT_REPEAT(353),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maparrow, 1),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_maparrow, 1),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_intro, 5),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_refs, 1),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_sig, 1),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_step_config, 1),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trans_step_config, 1),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_step, 4),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_step_config, 2),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trans_step_config, 2),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_list, 1),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_intro, 4),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sig_config, 1),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_list_repeat1, 2),
  [629] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_list_repeat1, 2), SHIFT_REPEAT(35),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_list, 2),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform_sig_config, 1),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain_sig_config, 1),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_list_repeat1, 2),
  [644] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_list_repeat1, 2), SHIFT_REPEAT(120),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_list, 2),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_sig_config, 1),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_cnst, 1),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_list, 1),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_refs, 3),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_apply, 3),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_list, 1),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vom_param_list, 1),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_val_or_model_program, 1),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_param_list, 1),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_or_update_lhs, 1),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_app_arg, 3),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_apply, 4),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_sig, 3),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_list, 1),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_arg_list, 1),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_val_or_model_program, 3),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain_sig, 4),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform_sig, 5),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sig, 5),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_cnst, 3),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vom_param_list, 3),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl_body, 1),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_decl, 1),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_sig_in, 3),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl_body, 3),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sig_in, 3),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_param_list, 3),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_list, 3),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl_body, 4),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_card_spec, 1),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_sig_config, 2),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_arg_list, 3),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl_body, 6),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_or_update_lhs, 3),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [845] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_list, 3),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform_sig_config, 2),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_sig_in, 2),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [885] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain_sig_config, 2),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_sig_in, 2),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
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
