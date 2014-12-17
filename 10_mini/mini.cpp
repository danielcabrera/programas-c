#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv []){

    int tablero, disparo;

    printf("Introduzca tablero: ");
    scanf(" %i", &tablero);

    printf("Introduzca disparo: ");
    scanf(" %i", &disparo);

    if ((tablero & disparo) != 0)
	printf("Hundido\n");  
    else 
	printf("Tocado\n");
    
    return EXIT_SUCCESS;
    

}
