#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){

    int numero;

    system("clear");
    system("figlet cuadrado de posiciones");

    printf("\nNota:pon un numero entre el 0 y el 10.\n\n");

    printf("Introduce el numero del cuadradado: \n");
    scanf(" %i", &numero);

    if (numero>=0 && numero<=10)
        for(int fila=0; fila<numero; fila++){
	    for(int col=0; col<numero; col++)
	        printf("%4i",(fila*numero)+col);
	    printf("\n\n");
    }

    else
	printf("Error al introducir el numero.\n\n");

	return EXIT_SUCCESS;
}
