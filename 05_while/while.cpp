#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
    int numero=0,
	veces=0,
	resultado=0,
	media=0;

    printf("introduce un numero.\n");
    scanf("%i", &numero);
    resultado += numero; 

    while(numero>0){
	printf("introduce otro numero.\n");
	scanf("%i", &numero);
	resultado += numero;
	veces++;
    }

    media= resultado/veces;

    printf("tu media %i/%i es %i",resultado, veces, media);
    printf("\n");

	return EXIT_SUCCESS;
}
