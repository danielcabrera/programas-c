#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){

    char nombre[9];

    fgets(nombre, sizeof(nombre), stdin);
    printf("Hola ");
    puts(nombre);

    return EXIT_SUCCESS;
}
