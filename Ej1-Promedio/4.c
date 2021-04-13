#include <iostream>

int main(){
	long int valor1=200000;
	long int valor2;
	
	//Defina la variable ptrL para que apunte a un objeto de tipo long
	long *ptrL;
	
	//Asigne la dirección de la variable valor1 para que apunte a la variable ptrL.
	ptrL=&valor1;//ptrL=valor1==200000
	
	//Imprima el valor del objeto al que apunta ptrL.
	printf("el valor del objeto que apunta ptrL es: %d",*ptrL);
	
	//Asigne a la variable valor2 el valor del objeto al que apunta ptrL.
	valor2=*ptrL;
	
	//Imprima el valor de valor2.
	printf("\n\nel valor de valor2 es:%d",valor2);
	
	//Imprima la dirección de valor1.
	printf("\n\nla dirección de valor1 es:%X",&valor1); //%X para imprimir direcciones 
	
	//Imprima la dirección almacenada en ptrL. 
	printf("\n\nla dirección almacenada en ptrL es:%X",ptrL);
	
	//¿El valor que se imprimió es el mismo que la dirección de valor1?
	//si es el mismo el valor que imprimio tanto ptrl como &valor1.
	
	return 0;
}
