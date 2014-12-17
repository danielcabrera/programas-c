#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argv[]){

    system("clear");
    system("figlet sprintf");

    const char *yo = "Daniel";
    char mi_nombre[10];
    sprintf(mi_nombre, "%s", yo);

    printf("%s\n", mi_nombre);

	return EXIT_SUCCESS;
}
