//Nombre: Escobedo Vargas Minerva Sarahi
//No.Control: 24041172

#include <iostream> 
using namespace std;

int main( ){
	char c[11]={' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','\0'};
	int i=0;
	
	puts("Captura de una cadena");
	
	for(i=0;i<11;i++){
		printf("Dame el elemento No. %d\n ",i);
		fflush(stdin);
		c[i]=getchar();
	}
	
	puts("Impresion de la cadena");
	for(i=0;i<11;i++){
		printf("%c",c[i]);
	}
	
	system("PAUSE");
	system("CLS");
	puts("Conversion a mayusculas");
	
	for(i=0;i<11;i++){
		c[i]=toupper(c[i]);
		printf("%c",c[i]);
	}
	
	puts("\nConversion a minusculas");
	for(i=0;i<11;i++){
		c[i]=tolower(c[i]);
		printf("%c",c[i]);
	}
	
	return 0;
}
