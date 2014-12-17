#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int numero1 = 0,
	numero2 = 0,
	resultado = 0;

    printf("introduce un numero.\n"),
	scanf("%i", &numero1);

    printf("introduce otro numero.\n"),
	scanf("%i", &numero2);

    resultado= numero1+numero2;

    printf("el resultado de %i + %i es igual a %i",numero1, numero2, resultado);
    printf("\n");

    return EXIT_SUCCESS;

}
