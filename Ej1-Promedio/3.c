#include <stdio.h>

int main(){
	//Despliegue el valor del séptimo elemento del arreglo de caracteres f.
	char f[10];
	f[6]='z';
	printf("%c\n\n",f[6]);
	
	//Introduzca un valor en el elemento 4 del arreglo de punto flotante con un solo subíndice, b.
	float b[20];
	b[4]=2.7;
	printf("%1.2f\n\n",b[4]);
	
	//Inicialice en 8 cada uno de los 5 elementos del arreglo entero g.
	int g[5];
	for(int k=0;k<5;k++){
		g[k]=8;
		printf("%d\n",g[k]);
	}
	printf("\n");
    
	//Sume los elementos del arreglo de punto flotante c, el cual contiene 100 elementos.
	int c[100];
	int sumadetodoc=0;
	
	for(int k=0;k<100;k++){
		sumadetodoc=sumadetodoc + c[k];
	}
	
	//copie el arreglo a en la primera porción del arreglo b. Suponga que double a[ 11 ], b[ 34 ];
	double a[11];
	double b[34];
	
	for(int k=0;k<11;k++){
		b[k]=a[k];
	}
	
	return 0;
}
