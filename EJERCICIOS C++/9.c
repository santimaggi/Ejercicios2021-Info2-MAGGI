#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/*Ej9-EstructuraSensores:
Crear una estructurallamada sensores, la cual deberá estar formada por 3 
variables: una tipo char, en la que se almacenará una letra indicativa del tipo 
de sensor; una tipo int, donde se almacenará el valor del sensor, una tipo 
unsigned long donde se almacenaráel tiempo desde la última medición.Crear una 
variable como una estructura del tipo sensory verificar el tamaño de memoria que 
ocupa.Verificar el funcionamiento de este programa tanto en computadora como 
en Arduino. ¿Qué diferencias hay?*/

struct sensores{
	char nombre;  //1 byte    
	int valor;    //4 bytes
	long tiempo;  //4 bytes 
}ldr;

struct sensoresb{
	uint32_t tiempo;   //Número entero con signo de 4 bytes 
	uint16_t valor;    //Número entero con signo de 2 bytes 
	char nombre;       //1 byte 
}temperatura;

int main(){
	
	printf("El tamano de la estructura es %d\n",sizeof(ldr));
	
	printf("El tamano de la estructura con tipos de datos estandar es %d\n",sizeof(temperatura));
	
	return 0;
}
