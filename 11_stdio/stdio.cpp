#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){

    char letra;

    printf("Elege la letra que te gusta,güey: ");
    letra = getchar();
    printf("\nPues la %c es una mierda de letra.\n", letra);
    if (letra < 'a')
	printf("Por favor, escribe en minusculas.\n");

	return EXIT_SUCCESS;
}
