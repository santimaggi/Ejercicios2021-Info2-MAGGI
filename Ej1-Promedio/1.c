#include <stdio.h>

/*Escriba un programa que calcule e imprima el promedio de varios enteros. Debe 
pedir al usuario que primero ingrese los números que desea uno a uno. Cuando 
haya ingresado los números deseados debe ingresar el valor 9999, para así 
proceder al cálculo*/
int main(){
	int i=0;
	int valor;
	float promedio;
	int suma=0;
	printf("ingrese los valores para calcular el promedio y cuando desee terminar inserte 9999\n");
	while(1){
		scanf("%d",&valor);
		if(valor==9999){
			promedio = suma/i;
			printf("el promedio es:%f",promedio);
			break;
		}
		suma = suma + valor;
		i++;
	}
	return 0;
} 
