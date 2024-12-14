//Nombre: Escobedo Vargas Minerva Sarahi
//No.Control: 24041172

#include <stdio.h> //system
#include <iostream>
#include <windows.h>

using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	char c;
	char letras[20]="hexadecimal";
	int i;
	float f;
	i=10;
	f=123.45;
	c='x';
	
	printf("1. Impresión simple\n");
	printf("varchar=%c\n varint=%d\n varfloat=%f\n cadena=%s\n\n",c,i,f,letras);
	system("pause");
	
	printf("2. Impresión sin espacios\n");
	printf("%d%f%c%s\n\n",i,f,c,letras);
	
	printf("3. Impresión con etiquetas\n");
	printf(" Entero: %d\n Flotante: %f\n Carácter: %c\n Cadena: %s\n\n",i,f,c,letras);	
	system("pause");
	
	printf("Dame un entero: ");
	fflush(stdin);
	scanf("%d",&i);
	
	printf("Dame un flotante: ");
	fflush(stdin);
	scanf("%f",&f);
	
	printf("Dame un carácter: ");
	fflush(stdin);
	//scanf("%c",&c); //No acepta caracteres especiales
	//cin>>c; //No acepta caracteres especiales
	
	printf("Dame una cadena: ");
	fflush(stdin);
	scanf("%[^\n]",letras);
	
	printf(" Entero: %d\n Flotante: %f\n Carácter: %c\n Cadena: %s\n",i,f,c,letras);	
	
	i=12345;
	f=345.677;
	printf("Probando diferentes anchos en enteros: 3, 5 y 8 ");
	printf("%3d %5d %8d\n",i,i,i);
	printf("%3d %5d %8d\n",1,10,20);
	printf("%3d %5d %8d\n",i,i,i);
	printf("%d %d %d\n\n",1,10,20);
	system("pause");
	
	printf("Probando anchos en floats: 3, 10 y 13 espacios");
	printf("%3f %10f %13f\n\n",f,f,f);
	system("pause");
	
	printf("Probando anchos en exp: 3, 13 y 16 espacios");
	printf("%3e %13e %16e\n\n",f,f,f);
	system("pause");
	
	printf("Probando diferentes cantidades de cifras: 7.0, 7.3 y 7.1");
	printf("%7.0f %7.3f %7.1f\n\n",f,f,f);
	system("pause");
	
	return 0;
}