#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){

    int i,numero;

    printf("Introduce un numero: \n");
    scanf(" %i", &numero);

    for(i = numero+1; i<=numero+100; i++)
	printf("\n%i\n", i);

	return EXIT_SUCCESS;
}
