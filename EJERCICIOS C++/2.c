#include <stdio.h>
#include <math.h>

int main(){
	double monto;
	double principal = 1000.0;
	double tasa; 
	int anio; 
	int k;
	
	printf("ingrese un numero:\n");
	printf("1: TASA=0,05\n2: TASA=0,06\n3: TASA=0,08\n4: TASA=0,09\n5: TASA=0,10\n");
	scanf("%d",&k);
switch(k){
	case 1:tasa=0.05;break;
	case 2:tasa=0.06;break;
	case 3:tasa=0.08;break;
	case 4:tasa=0.09;break;
	case 5:tasa=0.10;break;
	}

printf( "%4s%21s\n", "Anio", "Monto del deposito" );

for( anio = 1; anio <= 10; anio++ ) {
     monto = principal * pow( 1.0 + tasa, anio );
     printf( "%4d%21.2f\n", anio, monto );
    } 

return 0; 
}
