#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){

    int vector1x,
	vector1y,
	vector1z;
    int vector2x,
	vector2y,
	vector2z;
    int producto;

    system("clear");
    system("figlet PRODUCTO ESCALAR.");

    printf("\nIntroduce el primer vector: \n\n");
    scanf (" %i, %i, %i", &vector1x, &vector1y, &vector1z);

    printf("\nIntroduce el segundo vector: \n\n");
    scanf (" %i, %i, %i", &vector2x, &vector2y, &vector2z);

    producto = (vector1x*vector2x) + (vector1y*vector2y) + (vector1z*vector2z);

    printf("\nEl producto escalar de los dos vectores es %i.\n\n", producto);

	return EXIT_SUCCESS;
}
