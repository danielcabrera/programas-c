#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){

   char *dedo = argv[1];

   system("clear");
   system("figlet invierte cadena");

   while (*dedo++ != '\0');

   while(dedo>=argv[1]){
       printf("%c", *--dedo);
   }

   printf("\n");


	return EXIT_SUCCESS;
}
