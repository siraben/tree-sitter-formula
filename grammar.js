module.exports = grammar({
    name: 'formula',
    extras: $ => [
        /\s/,
        $.comment,
    ],
    conflicts: $ => [
        [$.bareid, $.qualid]
    ],
    rules: {
        program: $ => choice(
            $.config,
            repeat($.module),
            seq($.config, repeat1($.module)),
        ),
        module: $ => choice(
            $.domain,
            $.model,
            $.transform,
            $.tsystem,
            $.machine,
        ),
        machine: $ => seq($.machine_sig_config,'{',optional($.machine_body),'}'),
        machine_body: $ => repeat1($.machine_sentence_conf),
        machine_sentence_conf: $ => choice(
            $.machine_sentence,
            seq($.sentence_config, $.machine_sentence),
        ),
        machine_sentence: $ => choice(
            $.machine_prop,
            seq('boot', $.step),
            seq('initially', $.update),
            seq('next', $.update),
        ),
        machine_prop: $ => seq(
            'property',
            $.bareid,
            '=',
            $.func_term,
            '.',
        ),
        machine_sig_config: $ => repeat1($.machine_sig),
        machine_sig: $ => seq(
            'machine',
            $.bareid,
            $.machine_sig_in,
            'of',
            $.mod_refs,
        ),
        machine_sig_in: $ => seq('(',optional($.vom_param_list),')'),
        model: $ => seq($.model_sig_config,'{',optional($.model_body),'}'),
        model_body: $ => repeat1($.model_sentence),
        model_sentence: $ => choice($.model_fact_list,$.model_contract_conf),
        model_contract_conf: $ => seq(optional($.sentence_config),$.model_contract),
        model_contract: $ => choice(
            seq('ensures',$.body_list,'.'),
            seq('requires',$.body_list,'.'),
            seq('requires',$.card_spec,/d+/,$.id,'.'),
        ),
        model_fact_list: $ => prec.right(5,choice(
            seq($.model_fact,'.'),
            seq($.sentence_config,$.model_fact,'.'),
            seq($.model_fact,',',$.model_fact_list),
            seq($.sentence_config,$.model_fact,',',$.model_fact_list),
        )),
        model_fact: $ => choice(
            $.func_term,
            seq($.bareid,'is',$.func_term),
        ),
        card_spec: $ => choice(
            'some',
            'atmost',
            'atleast',
        ),
        model_sig_config: $ => seq($.model_sig, optional($.config)),
        model_sig: $ => choice(
            $.model_intro,
            seq($.model_intro, 'includes', $.mod_refs),
            seq($.model_intro, 'extends', $.mod_refs),
        ),
        model_intro: $ => choice(
            seq('model', $.bareid, 'of', $.mod_ref),
            seq('partial', 'model', $.bareid, 'of', $.mod_ref),
        ),
        tsystem: $ => seq('transform', 'system', $.bareid, $.tsystem_rest),
        tsystem_rest: $ => seq($.transform_sig_config, '{',optional($.trans_steps),'}'),
        trans_steps: $ => repeat1($.trans_step_config),
        trans_step_config: $ => choice(
            $.step,
            seq($.sentence_config, $.step),
        ),
        transform: $ => seq('transform', $.bareid, $.transform_rest),
        transform_rest: $ => seq($.transform_sig_config, '{',optional($.trans_body),'}'),
        trans_body: $ => repeat1($.trans_sentence_config),
        trans_sentence_config: $ => choice(
            $.trans_sentence,
            seq($.sentence_config, $.trans_sentence),
        ),
        trans_sentence: $ => choice(
            $.rule,
            $.type_decl,
            seq('ensures', $.body_list,'.'),
            seq('requires', $.body_list,'.'),
        ),
        transform_sig_config: $ => seq($.transform_sig, optional($.config)),
        transform_sig: $ => seq(
            $.trans_sig_in,
            'returns',
            '(',
            $.model_param_list,
            ')',
        ),
        trans_sig_in: $ => seq('(',optional($.vom_param_list), ')'),
        domain: $ => seq($.domain_sig_config,'{',optional($.dom_sentences),'}'),
        dom_sentences: $ => repeat1($.dom_sentence_config),
        dom_sentence_config: $ => choice(
            $.dom_sentence,
            seq($.sentence_config,$.dom_sentence),
        ),
        dom_sentence: $ => choice(
            $.rule,
            $.type_decl,
            seq('conforms',$.body_list,'.'),
        ),
        domain_sig_config: $ => seq($.domain_sig, optional($.config)),
        domain_sig: $ => seq(
            'domain',
            field('name',$.bareid),
            optional(choice('extends', 'includes')),
            optional($.mod_refs),
        ),
        config: $ => seq(
            '[',
            $.setting_list,
            ']',
        ),
        sentence_config: $ => seq(
            '[',
            $.setting_list,
            ']',
        ),
        setting_list: $ => commaSep1($.setting),
        setting: $ => seq($.id, '=', $.constant),
        model_param_list: $ => commaSep1($.mod_ref_rename),
        val_or_model_program: $ => choice(
            seq($.bareid,':',$.unnbody),
            $.mod_ref_rename,
        ),
        vom_param_list: $ => seq($.val_or_model_program, optional(seq(',',$.vom_param_list))),
        update: $ => seq($.step_or_update_lhs,'=',$.choice_list,'.'),
        step: $ => seq($.step_or_update_lhs,'=',$.mod_apply,'.'),
        choice_list: $ => seq($.mod_apply,optional(seq(';',$.choice_list))),
        mod_apply: $ => seq($.mod_ref, '(',optional($.mod_arg_list),')'),
        mod_arg_list: $ => seq($.mod_app_arg,optional(seq(',',$.mod_arg_list))),
        mod_app_arg: $ => choice(
            $.func_term,
            seq($.bareid,'at',$.string),
        ),
        step_or_update_lhs: $ => seq($.id, optional(seq(',',$.step_or_update_lhs))),
        mod_refs: $ => seq($.mod_ref, optional(seq(',',$.mod_refs))),
        mod_ref: $ => choice($.mod_ref_rename, $.mod_ref_no_rename),
        mod_ref_rename: $ => seq($.bareid, '::', $.bareid,optional(seq('@',$.string))),
        mod_ref_no_rename: $ => seq($.bareid, optional(seq('@',$.string))),
        type_decl: $ => prec.right(2,seq($.bareid, '::=',$.type_decl_body,'.')),
        type_decl_body: $ => choice(
            $.unnbody,
            seq('(',$.fields,')'),
            seq('-','(',$.fields,')'),
            seq('new','(',$.fields,')'),
            seq($.fun_decl,'(',$.fields,$.maparrow,$.fields,')'),
        ),
        fun_decl: $ => choice('inj','bij','sur','fun'),
        fields: $ => commaSep1($.field),
        field: $ => choice(
            $.unnbody,
            seq('any',$.unnbody),
            seq($.bareid,':',$.unnbody),
            seq($.bareid,':','any',$.unnbody),
        ),
        maparrow: $ => choice('->','=>'),
        unnbody: $ => prec.right(3,sep1($.unncmp,'+')),
        unncmp: $ => choice(
            $.typeid,
            seq('{',$.enum_list,'}'),
        ),
        typeid: $ => choice($.bareid,$.qualid),
        enum_list: $ => commaSep1($.enum_cnst),
        enum_cnst: $ => choice(
            $.digits,
            $.real,
            $.frac,
            $.string,
            $.bareid,
            $.qualid,
            seq(optional('-'),$.digits,'..',optional('-'),$.digits),
        ),
        digits: $ => /\d+/,
        real: $ => /\d+\.\d+/,
        frac: $ => /\d+\/[-+]?0*[1-9]\d*/,
        string: $ => seq('"', /(?:[^"\\]|\\.)*/, '"'),
        rule: $ => prec.right(1,seq($.func_term_list,
                                    optional(seq(':-',$.body_list)),
                                   '.')),
        compr: $ => seq('{',$.func_term_list,$.compr_rest),
        compr_rest: $ => choice(
            '}',
            seq('|',$.body_list,'}'),
        ),
        body_list: $ => sep1($.body,';'),
        body: $ => commaSep1($.constraint),
        constraint: $ => choice(
            $.func_term,
            seq($.id,'is',$.func_term),
            seq('no',$.compr),
            seq('no',$.func_term),
            seq('no',$.id,'is',$.func_term),
            seq($.func_term,$.relop,$.func_term),
        ),
        func_term_list: $ => prec.right(2,commaSep1($.func_or_compr)),
        func_or_compr: $ => choice($.func_term, $.compr),
        func_term: $ => choice(
            $.atom,
            prec.right(4,seq($.unop, $.func_term)), // precedence uminus
            prec.right(3,seq($.func_term,$.binop,$.func_term)),
            seq(field('name',$.id),'(',$.func_term_list,')'),
            // include quoting?
            // seq($.qstart,$.quotelist,$.qend)
            seq('(',$.func_term,')'),
        ),
        atom: $ => choice($.id,$.constant),
        id: $ => choice($.bareid,$.qualid),
        constant: $ => choice($.digits,$.real,$.frac,$.string),
        unop: $ => '-',
        binop: $ => choice('*','/','%','+','-'),
        relop: $ => choice('=','!=','<','<=','>','>=',':'),
        // BAREID: ([%]?BID | TID) ;
        bareid: $ => choice(seq(optional('%'),$.bid),$.tid),
        qualid: $ => prec.right(4,choice(
            // (BID[.])+(BID|TID|SID)
            seq(repeat1(seq($.bid,'.')),choice($.bid,$.tid,$.sid)),
            // [%][A-Za-z_]([A-Za-z_0-9]*[']*)([.][A-Za-z_]([A-Za-z_0-9]*[']*))+
            /%[A-Za-z_]\w*'*(\.[A-Za-z_]\w*'*)+/,
        )),
        // BID: [A-Za-z_]([A-Za-z_0-9]*[']*)
        bid: $ => /[A-Za-z_](\w*'*)/,
        // TID: [#][A-Za-z_]([A-Za-z_0-9]*[']*)([[][0-9]+[\]])?
        tid: $ => /#[A-Za-z_](\w*'*)(\[\d+\])?/,
        // SID: [%][A-Za-z_]([A-Za-z_0-9]*[']*)([.][A-Za-z_]([A-Za-z_0-9]*[']*))*
        sid: $ => /%[A-Za-z_](\w*'*)(\.[A-Za-z_](\w*'*))*/,
        comment: $ => token(choice(
            seq('//', /.*/),
            seq(
                '/*',
                repeat(choice(
                    /[^*]/,
                    /\*[^/]/,
                )),
                '*/'
            ))),

    }
});

function sep(rule, separator) {
    return optional(sep1(rule, separator));
}

function sep1(rule, separator) {
    return seq(rule, repeat(seq(separator, rule)));
}

function commaSep1(rule) {
    return sep1(rule, ',');
}

function commaSep(rule) {
    return optional(commaSep1(rule));
}
