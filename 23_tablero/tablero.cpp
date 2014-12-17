#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){

    int lado;

    printf("Introduce el lado: \n");
    scanf("%i", &lado);

    for (int cua_fila=0; cua_fila<lado; cua_fila++)
	for(int fila =0; fila <lado; fila ++){
	    for (int cua_col =0; cua_col<lado; cua_col++)
		for (int col=0; col<lado; col++)
		    printf("%3i", (cua_fila*lado)+cua_col);
	    printf("\n");
	}


    return EXIT_SUCCESS;
}
