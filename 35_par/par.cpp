#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){

    int numero;

    printf("Introduce un numero: ");

    scanf(" %i", &numero);

    if (numero %2 ==0)

	printf("el numero es par, bribon\n");

    else
	printf("tu numero es impar pelele\n");

	return EXIT_SUCCESS;
}
