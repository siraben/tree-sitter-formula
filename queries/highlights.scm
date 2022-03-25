[
 "domain"
 "model"
 "transform"
 "system"
 "machine"
 "partial"
 "ensures"
 "requires"
 "conforms"
 "includes"
 "extends"
 "of"
 "returns"
 "at"
 "some"
 "atleast"
 "atmost"
 "initially"
 "next"
 "property"
 "boot"
 "no"
 "is"
 "new"
 "inj"
 "bij"
 "sur"
 "fun"
 "any"
 ] @keyword

(comment) @comment

[
 (digits)
 (real)
 (frac)
 ] @number

(type_decl type: _ @type)
(typeid) @type
(func_term name: (_) @function.builtin)

[ "+" "-" "*" "/" ":-" "::=" "::" "=>" "->" ] @operator

[ "." "|" ] @punctuation.delimiter

[ "(" ")" "{" "}" "[" "]" ] @punctuation.bracket

(id) @variable.builtin

(enum_cnst) @constant.builtin

(field name: _ @attribute)
(val_or_model_program name: _ @attribute)

(domain_sig name: _ @module)
(mod_ref_rename name: _ @attribute (bareid) @module)
(mod_ref_no_rename (bareid) @module)

(transform name: (bareid) @function)

(model_intro (bareid) @constructor)
