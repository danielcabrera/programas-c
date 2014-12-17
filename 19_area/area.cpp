#include <stdio.h>
#include <stdlib.h>

#define PI 3.1416

int main (int argc, char *argv[]){

    int opcion;
    int dato,dato0,dato1;

    char *opciones [] = {
	"Circulo",
	"Cuadrado",
	"Triangulo"
    };

    do {
	system("clear");

	system("figlet menu");
	printf("10€\n");
	printf( "\n\n\tElige: \n\n");

	for (int i=0; i<sizeof(opciones) / sizeof(char *); i++)
	    printf("%i.- %s.\n", i+1, opciones[i]);

	printf("\nOpcion: ");

	scanf("%i", &opcion);
     } while(opcion<1 || opcion>3);


    switch(opcion){
	case 1:
	    printf("Introduce el radio del circulo: ");
	    scanf(" %i", &dato);
	    printf("El area es %.2lf metros cuadrados", PI * (dato * dato));
	    printf("\n");
	    break;
	
	case 2:
	    printf("Introduce el lado: ");
	    scanf(" %i", &dato);
	    printf("El area es %i metros cuadrados", dato * dato);
	    printf("\n");
	    break;

	case 3:
	    printf("Introduce la base del triangulo: ");
	    scanf(" %i", &dato0);
	    printf("Introduce la altura del triangulo: ");
	    scanf(" %i", &dato1);
	    printf("el area es %i metros cuadrados", (dato0 * dato1) / 2);
	    printf("\n");
	    break;    

    }

	return EXIT_SUCCESS;
}
