#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){

    int respuestas = 0;
    double suma = 0, nuevo_numero = 0;

    printf("\nintroduce numeros mayores que 0"
	    "\npara calcular la media."
	    "\nnegativos para terminar.");

    //mientras (el numero que introduzca el usuario sea mayor que 0)
    while( nuevo_numero >= 0) {
	//preguntar un nuevo numero al usuario
	printf("Numero: ");
	scanf(" %lf", &nuevo_numero);
	//acumular en suma el numero que ha introducido
	suma += nuevo_numero;

	//contar que hay una respuesta mas
	respuestas++;
    }
    
    //informar del cociente entre la suma y el numero de respuestas
    printf("\nla media es %lf \n", suma/respuestas);

    return EXIT_SUCCESS;
}
