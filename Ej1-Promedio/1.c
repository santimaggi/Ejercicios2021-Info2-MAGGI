#include <stdio.h>
/*Escriba un programa que calcule e imprima el promedio de varios enteros. Debe pedir al usuario que primero ingrese
 los números que desea uno a uno. Cuando haya ingresado los números deseados debe ingresar el valor 9999, para así proceder al cálculo.*/
int main(void){
	char entero[100];
    float promediofinal;
    int d=0;
    int k;

    do{
		printf("introduzca numeros para realizar el promedio y cuando quieras finalizar introduzca 9999");
        scanf("%d",entero);
        d++;
		k++;
	} while(k=9999);
    promediofinal=entero/d;
    printf("el promedio final es:%f",promediofinal);
    
    return 0;
}