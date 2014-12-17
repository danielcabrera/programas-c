#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){

    int numero = atoi(argv[1]),
	base = atoi(argv[2]),
	resultado;

    resultado += (numero/base)%base;

	printf("%i", resultado);






	return EXIT_SUCCESS;
}
