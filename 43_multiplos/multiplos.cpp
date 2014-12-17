#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){

    int numero;

    system("clear");
    system("figlet MULTIPLOS");

    printf("El siguiente programa muestra los multiplos del numero que has introducido del 1 al 200\n");
    printf("\nIntroduce el numero: \n");
    scanf(" %i", &numero);
    printf("los multiplos son: ");

    for(int i=1; i<=200; i++)
	if(i%numero == 0)
	    printf(" %i", i);
    printf("\n");


    



	return EXIT_SUCCESS;
}
