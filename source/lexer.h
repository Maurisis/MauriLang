#ifndef TOKENS
#define TOKENS

typedef enum{
    TEOF,
    TNUMBER,
    TSTRING,
    TIDENTIFIER,

    TALLAVE,
    TCLLAVE,
    TAPARENTESIS,
    TCPARENTESIS,
    TACORCHETE,
    TCCORCHETE,
    TCOMA,
    TPUNTO,
    TDOSPUNTOS,

    TASSIGNMENT, // =
    TIGUAL, // ==
    TNO, // !
    TNOIGUAL, // !=

    TY, // and
    TO, // or

    TMAS,
    TMENOS,
    TDIV,
    TMULT,
    TRESTO,

    TCONST,
    TCLASS,
    TIMPORT,
    TIF,
    TELSE,
    TWHILE,
    TFOR,
    TEXPORT,
    TTYPEOF,
    TIN

}tokenTipo;


typedef struct {
    tokenTipo tipo;
    char *valor;
}Token;

char* tokenTypeString(tokenTipo);

void debug(Token token);

Token tokeNuevo(tokenTipo tipo);

#endif
