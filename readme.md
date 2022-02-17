# tree-sitter-formula
Formula grammar for
[tree-sitter](https://github.com/tree-sitter/tree-sitter).

## Building
```ShellSession
$ npm run build && tree-sitter test
```

## Contributing
You don't need to know JavaScript or specific details about
tree-sitter to help out!  Try running the parser on real Formula
programs and open an
[issue](https://github.com/siraben/tree-sitter-formula/issues) if the
parser failed where it should be succeeding.


## References
The grammar is based on the [YACC grammar for Formula](https://github.com/VUISIS/formula-dotnet/blob/e962438022350dca64335c0603c00d44cb10b528/Src/Core/API/Parser/parser.y).
