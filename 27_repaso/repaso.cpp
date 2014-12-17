#include <stdio.h>
#include <stdlib.h>

#define C 10
#define L C

int main (int argc, char *argv[]){

    system ("clear");
    system ("figlet cuadrado de asteriscos");

    for(int fila=0; fila<L; fila++){

	for(int col=0; col<C; col++){

	    printf("%4i", fila*C+col);
	}

	printf("\n");

    }

	return EXIT_SUCCESS;
}
