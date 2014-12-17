#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argv[]){
    char command[60] = "figlet ";
    char nombre[20];
    char instruction[100] = "figlet ";

    printf("Nombre:");
    scanf(" %s", nombre);
    system("clear");
    strcpy(instruction, command);
    strcat(instruction, nombre);
    system("command");
    printf("\nes gilipollas.\n");

	return EXIT_SUCCESS;
}
