#include <stdio.h>
#include <stdlib.h>

#define TAM(x) (sizeof(x)/sizeof(int))

/*
 * Ordenamos un array de enteros.
 *
 */

int main(int argc, char *argv[]) {

    int A [] = {3, 1, 5, 9, 34, 12, -3, -3};

    system("clear");
    system("figlet Lista ordenada");

    for (int i=0; i< TAM(A); i++){
	for (int j= i+1, aux=0; j< TAM(A); j++){
	    if(A[j]<A[i]){
		aux= A[j];
		A[j]= A[i];
		A[i] = aux;
	    }
	}
    }

    for (int i=0; i< TAM(A); i++){
	printf("%i ", A[i]);
    }
    printf("\n");

    return EXIT_SUCCESS;
}
