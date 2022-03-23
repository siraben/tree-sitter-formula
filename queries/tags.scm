(domain (domain_sig_config (domain_sig name: (_) @name))) @definition.domain
(model (model_sig_config (model_sig (model_intro (bareid) @name)))) @definition.model
(model (model_sig_config (model_sig (model_intro (_) (mod_ref) @name)))) @reference.domain
(rule (func_term_list (func_or_compr (func_term (atom (id (_) @name)))))) @definition.rule
(func_term name: _ @name) @reference.call
