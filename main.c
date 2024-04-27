#include <stdio.h>
#include "tokens.h"

extern int yylex();

int main() {
    int token;
    while ((token = yylex())) {
        switch (token) {
            case IF:
                printf("IF\n");
                break;
            case ELSE:
                printf("ELSE\n");
                break;
            case FOR:
                printf("FOR\n");
                break;
            case WHILE:
                printf("WHILE\n");
                break;
            case INT:
                printf("INT\n");
                break;
            case VOID:
                printf("VOID\n");
                break;
            case RETURN:
                printf("RETURN\n");
                break;
            case LPAREN:
                printf("LPAREN\n");
                break;
            case RPAREN:
                printf("RPAREN\n");
                break;
            case LBRACE:
                printf("LBRACE\n");
                break;
            case RBRACE:
                printf("RBRACE\n");
                break;
            case SEMICOLON:
                printf("SEMICOLON\n");
                break;
            case ASSIGN:
                printf("ASSIGN\n");
                break;
            case ID:
                printf("ID\n");
                break;
            case INT_CONST:
                printf("INT_CONST\n");
                break;
            case REL_OP:
                printf("REL_OP\n");
                break;
            default:
                printf("%c\n", token);
                break;
        }
    }
    return 0;
}
