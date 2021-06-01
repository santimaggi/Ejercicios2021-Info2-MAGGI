#include <iostream>

int main(){
	
struct cliente{
	char apellido[15];
	char nombre[15];
	int numerocCliente;
	struct{
		char numeroTelefonico[11];
		char direccion[50];
		char ciudad[15];
		char estado[3];
		char codigoPostal[6];
	}personal;
}registroCliente, *ptrCliente;

ptrCliente=&registroCliente;
//a) Al miembro apellido de la estructura registroCliente.
printf("apellido \n");
scanf("%s",registroCliente.apellido);
printf("Su apellido es: %s\n",registroCliente.apellido);

//b) Al miembro apellido de la estructura apuntada por ptrCliente.
printf("apellido \n");
scanf("%s",ptrCliente->apellido);
printf("Su apellido es: %s\n",ptrCliente->apellido);

//c) Al miembro nombre de la estructura registroCliente.
printf("nombre \n");
scanf("%s",registroCliente.nombre);
printf("Su nombre es: %s\n",registroCliente.nombre);

//d) Al miembro nombre de la estructura apuntada por ptrCliente.
printf("nombre \n");
scanf("%s",ptrCliente->nombre);
printf("Su nombre es: %s\n",ptrCliente->nombre);

//e) Al miembro numeroCliente de la estructura registroCliente.
printf("numero de cliente \n");
scanf("%d",&registroCliente.numerocCliente);
printf("Su numero de cliente es es: %d\n",registroCliente.numerocCliente);

//f) Al miembro numeroCliente de la estructura apuntada por ptrCliente.
printf("numero de cliente \n");
scanf("%d",&ptrCliente->numerocCliente);
printf("Su numero de cliente es es: %d\n",ptrCliente->numerocCliente);

//g) Al miembro numeroTelefonico del miembro personal de la estructura registroCliente.
printf("numero telefonico\n");
scanf("%s",registroCliente.personal.numeroTelefonico);
printf("Su numero telefonico es: %s\n",registroCliente.personal.numeroTelefonico);

//h) Almiembro numeroTelefonico del miembro personal de la estructura apuntada por ptrCliente.
printf("numero telefonico\n");
scanf("%s",ptrCliente->personal.numeroTelefonico);
printf("Su numero telefonico es: %s\n",ptrCliente->personal.numeroTelefonico);

//i) Al miembro direccion del miembro personal de la estructura registroCliente.
printf("direccion\n");
scanf("%s",registroCliente.personal.direccion);
printf("Su direccion es: %s\n",registroCliente.personal.direccion);

//j) Al miembro direccion del miembro personal de la estructura apuntada por ptrCliente.
printf("direccion\n");
scanf("%s",ptrCliente->personal.direccion);
printf("Su direccion es: %s\n",ptrCliente->personal.direccion);

//k) Al miembro ciudad del miembro personal de la estructura registroCliente.
printf("ciudad\n");
scanf("%s",registroCliente.personal.ciudad);
printf("Su ciudad es: %s\n",registroCliente.personal.ciudad);

//l) Al miembro ciudad del miembro personal de la estructura apuntada por ptrCliente.
printf("ciudad\n");
scanf("%s",ptrCliente->personal.ciudad);
printf("Su ciudad es: %s\n",ptrCliente->personal.ciudad);

//m) Al miembro estado del miembro personal de la estructura registroCliente.
printf("estado\n");
scanf("%s",registroCliente.personal.estado);
printf("Su estado es: %s\n",registroCliente.personal.estado);

//n) Al miembro estado del miembro personal de la estructura apuntada por ptrCliente.
printf("estado\n");
scanf("%s",ptrCliente->personal.estado);
printf("Su estado es: %s\n",ptrCliente->personal.estado);

//o) Al miembro codigoPostal del miembro personal de la estructura registroCliente.
printf("codigoPostal\n");
scanf("%s",registroCliente.personal.codigoPostal);
printf("Su codigoPostal es: %s\n",registroCliente.personal.codigoPostal);

//p) Al miembro codigoPostal del miembro personal de la estructura apuntada por ptrCliente.
printf("codigoPostal\n");
scanf("%s",ptrCliente->personal.codigoPostal);
printf("Su codigoPostal es: %s\n",ptrCliente->personal.codigoPostal);

	return 0;
}