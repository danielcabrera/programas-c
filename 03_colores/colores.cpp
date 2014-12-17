#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
    int rojo, amarillo, azul;

    printf("mira un color.\n");
    printf("tu color tiene rojo (1=si/0=no) ?");
    scanf(" %i", &rojo);
    printf("tu color tiene amarillo (1=si/0=no) ?");
    scanf(" %i", &amarillo);
    printf("tu color tiene azul (1=si/0=no) ?");
    scanf(" %i", &azul);

    if (rojo && amarillo && azul)
	printf("estas viendo blanco.\n");
    else if (rojo && amarillo)
	printf("estas viendo naranja.\n");
    else if (rojo && azul)
	printf("estas viendo morado.\n");
    else if (amarillo && azul)
	printf("estas viendo verde.\n");
    else if(rojo)
	printf("estas viendo rojo.\n");
    else if(amarillo)
	printf("estas viendo amarillo.\n");
    else if(azul)
	printf("estas viendo azul.\n");
    else
       printf("estas viendo negro.\n");	
    
	return EXIT_SUCCESS;
}
