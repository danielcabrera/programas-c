#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){

    int lado;

    system("toilet  -fblock -Fborder --gay DAMERO");
    printf("Introduce el lado: ");
    scanf(" %i", &lado);

    for (int cua_fila=0; cua_fila<lado; cua_fila++){
	int uno = 0;
	if (cua_fila % 2)
	    uno = 1;
	for(int fila=0; fila<lado; fila++){
	    for (int cua_col=0; cua_col<lado; cua_col++)
		for (int col=0; col<lado; col++)
		    if ( (cua_col + uno) % 2 == 0)
			printf("*");
		    else
			printf(".");
	    printf("\n");
	}
    }


    return EXIT_SUCCESS;
}
