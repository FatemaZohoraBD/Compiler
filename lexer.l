%{
#include <stdio.h>
#include "tokens.h"
%}

%%

"if"        { return IF; }
"else"      { return ELSE; }
"for"       { return FOR; }
"while"     { return WHILE; }
"int"       { return INT; }
"void"      { return VOID; }
"return"    { return RETURN; }
"("         { return LPAREN; }
")"         { return RPAREN; }
"{"         { return LBRACE; }
"}"         { return RBRACE; }
";"         { return SEMICOLON; }
"="         { return ASSIGN; }
[ \t\n]     ; // Skip whitespace
[a-zA-Z][a-zA-Z0-9]*   { return ID; }
[0-9]+                  { return INT_CONST; }
"+" | "-" | "*" | "/"   { return yytext[0]; } // Arithmetic operators
"==" | "!=" | "<=" | ">=" | "<" | ">" { return REL_OP; } // Relational operators
.           { return yytext[0]; } // Return single characters as tokens

%%

int yywrap() {
    return 1; // Indicate end of input
}
