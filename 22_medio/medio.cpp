#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
    int numero = 0;

    printf("introduce un numero: \n");
    scanf (" %i", &numero);

    while(numero<5 || numero>10){
	printf("Introduce otro numero: \n");
	scanf (" %i", &numero);
	numero++;
    }

    printf("se acabo por hoy.\n");


	return EXIT_SUCCESS;
}
