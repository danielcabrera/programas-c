#include <stdio.h>
#include <stdlib.h>

#define LISTA 10

int main (int argc, char *argv[]){

    char nombre[40];
    int edad;
    int enteros[LISTA];

    system("clear");
    system("figlet PRUEBA");

    printf("Dime tu nombre: \n\n");
    gets (nombre);

    printf("Hola %s.\n\n", nombre);

    printf("Introduce tu edad: \n");
    scanf (" %i", &edad);

    if(edad<0)
	printf("Tu eres tonto chaval, que haces con tu vida.\n\n");
    else if(edad>0 && edad<18)
	printf("Eres un yogurin eeeee.\n\n");
    else
	printf("Ya estas viejo.\n\n");

    printf("\nLISTA DE 10 ENTEROS:\n\n");

    for(int i=0; i<10; i++){
	enteros[i]= 2*i;
	printf("%i\n", enteros[i]);
    }

    return EXIT_SUCCESS;
}
