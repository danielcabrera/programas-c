#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){

    int numero;

    system ("clear");
    system ("figlet triangulo de asteriscos.");

    printf("Introduce un numero: ");
    scanf("%i", &numero);

    if(numero > 0)
       for (int fila=0; fila<numero; fila++ ){
	   for (int col=0; col<numero; col++)
	       if(fila >= col)
		   printf("*");
	       else
		   printf(" ");
	    printf("\n");
    }
    
    else
	printf("Mete un numero mayor que 0.\n");
    


	return EXIT_SUCCESS;
}
