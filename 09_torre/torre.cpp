#include <stdio.h>
#include <stdlib.h>

#define N 8


void poner_presentacion(){
   system("clear");
     system("figlet Torre");
}


int main (int argc, char *argv[]){

    bool come = false;
    int fila_torre, col_torre;
    int negras[N][N] = {
	{0, 0, 0, 0, 0, 0, 0, 0 },
        {0, 0, 0, 0, 0, 0, 0, 0 },
	{0, 1, 0, 0, 1, 0, 0, 0 },
	{0, 0, 0, 0, 0, 0, 0, 0 },
	{0, 0, 0, 0, 0, 0, 1, 0 },
	{0, 0, 0, 0, 1, 0, 0, 0 },
	{0, 0, 0, 0, 0, 0, 0, 0 },
	{0, 0, 0, 0, 0, 0, 0, 0 }
     };

    poner_presentacion();
    system("toilet -f term -F border --gay Posicion de la Torre");
    printf("x, y: ");
    scanf(" %i, %i", &col_torre, &fila_torre);
    printf("\n");

    for (int col=0;col<N && !come; col++)
	if (negras[fila_torre][col])
	    come = true;

    for (int fila=0; fila<N && !come; fila++)
	if (negras[fila][col_torre])
	    come = true;
  
    for (int fila=0; fila<N; fila++){
	for(int col=0; col<N; col++)
	    if(fila == fila_torre && col == col_torre)
		printf("♖");
	    else
	        printf("%s", negras[fila][col] ? "X" : " ");
	printf("\n");
    }	

    printf("la torre %scome.\n\n", come ? "si " : "no ");


    return EXIT_SUCCESS;
}
