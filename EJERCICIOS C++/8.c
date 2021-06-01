#include <stdio.h>

/*Ej8-EstructuraComplejo:
Definir una estructura complejo que conste de dos miembros en coma flotante 
llamados real e imaginario.Declarar una variable x como una estructura del tipo 
complejo y asignar los valores iniciales 1.3 y -2.2 a los miembros x.real y 
x.imaginario, respectivamente.Declarar una variable puntero, px, que apunte a 
una estructura del tipo complejo. Escribir expresiones para los miembros de la 
estructura en términos de la variable puntero.Declarar un array unidimensional de 
100 elementos, llamado cx, cuyos elementos sean estructuras del tipo complejo. 
Escribir expresiones para los miembros del elemento decimoctavo del array.*/

struct complejo {
	float real;
	float imaginario;
}x,*px,cx[100];

int main (){
	
	x = { 1.3, -2.2};
	px = &x;
	
	px->real += 10;
	px->imaginario -=5;
	
	printf("El numero complejo es %.2f + (%.2f) i \n",px->real,px->imaginario);
	
	cx[17].real = 5;
	cx[17].imaginario = 3;
	
	printf("El decimoctavo numero complejo es %.2f + (%.2f) i \n",cx[17].real,cx[17].imaginario);
	
	return 0;
}
