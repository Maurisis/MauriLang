//#include <stdlib.h>
#include <unistd.h>
//#include <string.h>
#include <stdio.h>
#include "lexer.h"

// typedef enum{
//     TEOF,
//     TNUMBER,
//     TSTRING,
//     TIDENTIFIER,
//
//     TALLAVE,
//     TCLLAVE,
//     TAPARENTESIS,
//     TCPARENTESIS,
//     TACORCHETE,
//     TCCORCHETE,
//     TCOMA,
//     TPUNTO,
//     TDOSPUNTOS,
//
//     TASSIGNMENT, // =
//     TIGUAL, // ==
//     TNO, // !
//     TNOIGUAL, // !=
//
//     TY, // and
//     TO, // or
//
//     TMAS,
//     TMENOS,
//     TDIV,
//     TMULT,
//     TRESTO,
//
//     TCONST,
//     TCLASS,
//     TIMPORT,
//     TIF,
//     TELSE,
//     TWHILE,
//     TFOR,
//     TEXPORT,
//     TTYPEOF,
//     TIN
//
// }tokenTipo;
//
//
// typedef struct {
//     tokenTipo tipo;
//     char *valor;
// }Token;
//
char* tokenTypeString(tokenTipo tipo){
    switch (tipo) {
	case TEOF:         return "EOF";
        case TNUMBER:      return "NUMBER";
        case TSTRING:      return "STRING";
        case TIDENTIFIER:  return "IDENTIFIER";

        case TALLAVE:      return "ALLAVE";
        case TCLLAVE:      return "CLLAVE";
        case TAPARENTESIS: return "APARENTESIS";
        case TCPARENTESIS: return "CPARENTESIS";
        case TACORCHETE:   return "ACORCHETE";
        case TCCORCHETE:   return "CCORCHETE";
        case TCOMA:        return "COMA";
        case TPUNTO:       return "PUNTO";
        case TDOSPUNTOS:   return "DOSPUNTOS";

        case TASSIGNMENT:  return "ASSIGNMENT";
        case TIGUAL:       return "IGUAL";
        case TNO:          return "NO";
        case TNOIGUAL:     return "NOIGUAL";

        case TY:           return "Y";
        case TO:           return "O";

        case TMAS:         return "MAS";
        case TMENOS:       return "MENOS";
        case TDIV:         return "DIV";
        case TMULT:        return "MULT";
        case TRESTO:       return "RESTO";

        case TCONST:       return "CONST";
        case TCLASS:       return "CLASS";
        case TIMPORT:      return "IMPORT";
        case TIF:          return "IF";
        case TELSE:        return "ELSE";
        case TWHILE:       return "WHILE";
        case TFOR:         return "FOR";
        case TEXPORT:      return "EXPORT";
        case TTYPEOF:      return "TYPEOF";
        case TIN:          return "IN";
    }
}



void debug(Token token){
	if (token.tipo == TNUMBER || token.tipo == TSTRING || token.tipo == TIDENTIFIER){
	    printf("tipo: %s valor: %s/n", tokenTypeString(token.tipo), token.valor);
	} else {
	    printf("tipo: %s valor: ?/n", tokenTypeString(token.tipo));
	}
}

Token tokeNuevo(tokenTipo tipo){
    // para devolver un struct tenemos que definir un struct adentro de la funcion
    
    Token t;
    t.tipo = 2;
    t.valor = "y";

    return t;
}




