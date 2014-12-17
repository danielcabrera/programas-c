#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){

    int lado;
    int inicial;

    printf("Introduce el lado: ");
    scanf(" %i", &lado);

    for(int fila=0; fila<lado; fila++){
	for(int cuad=0; cuad<lado;cuad++){
	    if (cuad == 0)
		inicial = 0;
	    else
		inicial = 1;
	    for(int col=inicial; col<lado; col++)
		if((fila == col && cuad % 2 == 0) ||
			(fila + col == lado -1 && cuad % 2 == 1))
		    printf("*");
	        else
		    printf(" ");
	}
	printf("\n");

    }

	return EXIT_SUCCESS;
}
