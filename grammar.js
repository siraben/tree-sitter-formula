// BID: [A-Za-z_]([A-Za-z_0-9]*[']*)
const bid = /[A-Za-z_](\w*'*)/;
// TID: [#][A-Za-z_]([A-Za-z_0-9]*[']*)([[][0-9]+[\]])?
const tid = /#[A-Za-z_](\w*'*)(\[\d+\])?/;
// SID: [%][A-Za-z_]([A-Za-z_0-9]*[']*)([.][A-Za-z_]([A-Za-z_0-9]*[']*))*
const sid = /%[A-Za-z_](\w*'*)(\.[A-Za-z_](\w*'*))*/;

module.exports = grammar({
    name: 'formula',
    extras: $ => [
        /\s/,
        $.comment,
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
        machine_body: $ => repeat1($._machine_sentence_conf),
        _machine_sentence_conf: $ => seq(optional($.sentence_config),$.machine_sentence,'.'),
        machine_sentence: $ => choice(
            $.machine_prop,
            seq('boot', $.step),
            seq(choice('initially','next'), $.update),
        ),
        machine_prop: $ => seq(
            'property',
            $.bareid,
            '=',
            $.func_term,
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
        model_body: $ => repeat1(seq($.model_sentence,'.')),
        model_sentence: $ => choice($.model_fact_list,$.model_contract_conf),
        model_contract_conf: $ => seq(optional($.sentence_config),$.model_contract),
        model_contract: $ => choice(
            seq('ensures',$.body_list),
            seq('requires',$.body_list),
            seq('requires',$.card_spec,/d+/,$.id),
        ),
        model_fact_list: $ => commaSep1(seq(optional($.sentence_config), $.model_fact)),
        model_fact: $ => seq(optional(seq($.bareid,'is')),$.func_term),
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
        model_intro: $ => seq(optional('partial'), 'model', $.bareid, 'of', $.mod_ref),
        tsystem: $ => seq('transform', 'system', $.bareid, $.tsystem_rest),
        tsystem_rest: $ => seq($.transform_sig_config, '{',optional($.trans_steps),'}'),
        trans_steps: $ => repeat1(seq($._trans_step_config,'.')),
        _trans_step_config: $ => seq(optional($.sentence_config), $.step),
        transform: $ => seq('transform', field('name',$.bareid), $.transform_rest),
        transform_rest: $ => seq($.transform_sig_config, '{',optional($.trans_body),'}'),
        trans_body: $ => repeat1(seq($.trans_sentence_config,'.')),
        trans_sentence_config: $ => seq(optional($.sentence_config), $.trans_sentence),
        trans_sentence: $ => choice(
            $.rule,
            $.type_decl,
            seq(choice('ensures','requires'), $.body_list),
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
        dom_sentences: $ => repeat1(seq($.dom_sentence_config, '.')),
        dom_sentence_config: $ => seq(optional($.sentence_config),$.dom_sentence),
        dom_sentence: $ => choice(
            $.rule,
            $.type_decl,
            seq('conforms',$.body_list),
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
            seq(field('name',$.bareid),':',$.unnbody),
            $.mod_ref_rename,
        ),
        vom_param_list: $ => commaSep1($.val_or_model_program),
        update: $ => seq($.step_or_update_lhs,'=',$.choice_list),
        step: $ => seq($.step_or_update_lhs,'=',$.mod_apply),
        choice_list: $ => sep1($.mod_apply,';'),
        mod_apply: $ => seq($.mod_ref, '(',optional($.mod_arg_list),')'),
        mod_arg_list: $ => commaSep1($.mod_app_arg),
        mod_app_arg: $ => choice(
            $.func_term,
            seq($.bareid,'at',$.string),
        ),
        step_or_update_lhs: $ => commaSep1($.id),
        mod_refs: $ => commaSep1($.mod_ref),
        mod_ref: $ => choice($.mod_ref_rename, $.mod_ref_no_rename),
        mod_ref_rename: $ => seq(field('name',$.bareid), '::', $.bareid,optional(seq('@',$.string))),
        mod_ref_no_rename: $ => seq($.bareid, optional(seq('@',$.string))),
        type_decl: $ => seq(field('type',$.bareid), '::=',$.type_decl_body),
        type_decl_body: $ => choice(
            $.unnbody,
            seq('(',$.fields,')'),
            seq('sub','(',$.fields,')'),
            seq('new','(',$.fields,')'),
            seq($.fun_decl,'(',$.fields,$.maparrow,$.fields,')'),
        ),
        fun_decl: $ => choice('inj','bij','sur','fun'),
        fields: $ => commaSep1($.field),
        field: $ => choice(
            $.unnbody,
            seq('any',$.unnbody),
            seq(field('name',$.bareid),':',optional('any'),$.unnbody),
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
            $.range,
        ),
        digits: $ => /\d+/,
        real: $ => /\d+\.\d+/,
        frac: $ => /\d+\/[-+]?0*[1-9]\d*/,
        string: $ => seq('"', /(?:[^"\\]|\\.)*/, '"'),
        range: $ => seq(optional('-'),$.digits,'..',optional('-'),$.digits),
        rule: $ => seq($.func_term_list, optional(seq(':-',$.body_list))),
        compr: $ => seq('{',$.func_term_list,optional(seq('|',$.body_list)),'}'),
        body_list: $ => sep1($.body,';'),
        body: $ => commaSep1($.constraint),
        constraint: $ => choice(
            // func_term, id is func_term, no id is func_term, no func_term
            seq(optional(seq(optional('no'),optional(seq($.id,'is')))),$.func_term),
            seq('no',$.compr),
            seq($.func_term,$.relop,$.func_term),
        ),
        func_term_list: $ => commaSep1($.func_or_compr),
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
        bareid: $ => choice(seq(optional('%'),bid),tid),
        qualid: $ => token(prec.right(1,choice(
            // (BID[.])+(BID|TID|SID)
            seq(repeat1(seq(bid,'.')),choice(bid,tid,sid)),
            // [%][A-Za-z_]([A-Za-z_0-9]*[']*)([.][A-Za-z_]([A-Za-z_0-9]*[']*))+
            /%[A-Za-z_]\w*'*(\.[A-Za-z_]\w*'*)+/,
        ))),
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
