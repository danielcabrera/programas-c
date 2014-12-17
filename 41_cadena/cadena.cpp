#include <stdio.h>
#include <stdlib.h>

/*
 * Imprimimos una lista de cadena de caracteres.
 *
 */

int main(int argc, char *argv[]) {

    const char * lista [] = {"Pablo", "Carlos", "Jorge", "Javi", "Adri", NULL};

    system("clear");
    system("figlet Lista");

    for (int i=0; lista[i]; i++){
	printf("%s\n", lista[i]);
    }

    return EXIT_SUCCESS;
}
