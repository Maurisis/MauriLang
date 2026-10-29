#include <stdio.h>
#include <stdlib.h>
// #include <string.h>
#include <unistd.h>
#include "lexer.h"

int pos = 0;
int posf = 0;
int *Ppos = &pos;

char avanzar(char *buffer){
    return buffer[pos++];
}
char avanzarFalso(char *buffer){
    return buffer[posf++];
}
void retroceder(int i){
    for (int ii = 0; ii < i; ii++){
    Ppos--;}
}

Token nuevoToken(tokenTipo tipo){
	Token error;
	error.tipo = EOF;
	error.valor = "error"; 
    switch (tipo){
	case TMAS:
	    ;
	    Token t;
	    t.tipo = TMAS;
	    t.valor = tokenTypeString(TMAS);
	    return t;
	    break;
	
	default:
	    return error; 

    }
}

int main(int argc, char *argv[]){

    if (argc > 1){
	FILE *file = fopen(argv[1], "r");

	if (file != NULL){

	fseek(file, 1, SEEK_END);
	int tamano = ftell(file);
	rewind(file);

	char *buffer = malloc(tamano);

	fread(buffer, 1, tamano, file);

	for (int f= 0; f < tamano; f++){
	    switch (buffer[pos]){
		case '/':
		    if (buffer[pos++] == '/'){
			posf = pos;
			while (buffer[posf] != '\n'){
			    posf++;
			}
			pos = posf;
		    } //ignorador de comentarios
		    break;
		case '+':
		    printf("mas");
		    nuevoToken(TMAS);
		    pos++;
		    break;
		default:
		    printf("%c", buffer[pos]);
		    pos++;
		    break;

		    }
	}

	



	free(buffer);
	fclose(file);
	file = NULL;
	return 0;

	}//file!=NULL

	else{
	printf("file no encontrada\n");
    }
    }//argc<1
    else{
	printf("mauscript 'File.mau'\n");
    }
}
