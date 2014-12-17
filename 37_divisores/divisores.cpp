#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){

    int numero = atoi(argv[1]);

    for (int fila=1; fila<=numero; fila++){
	if(numero%fila == 0)
	    printf(" %i", fila);
    }

    printf("\n");

	return EXIT_SUCCESS;
}
