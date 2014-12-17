#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){

    FILE *pf;
    char letra;

    pf = fopen("fich.txt", "r");

    if (pf == NULL){
	fprintf( stderr, "No se ha podido abrir el fichero. \n");
    	return EXIT_FAILURE;
    }
    
    while ((letra = fgetc(pf)) != EOF){
	if (letra == '#'){
	    printf ("\n");
	    while ((letra = fgetc(pf)) != '\n')
    		fprintf (stderr, "%c", letra); 		
	}
		    
    	printf ("%c", letra); 
    
    }

    fclose (pf);


    return EXIT_SUCCESS;
}
