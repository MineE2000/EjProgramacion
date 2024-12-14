//Nombre: Escobedo Vargas Minerva Sarahi
//No.Control: 24041172

#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
int main()
{
	int entera;
	float flotante;
	char letra,palabra[50];
	cout << "Lectura de datos usando scanf\n";
	cout << "Dame un valor entero: ";
	fflush(stdin);
	scanf("%d",&entera);
	cout << "Dame un valor flotante: ";
	fflush(stdin);
	scanf("%f",&flotante);
	cout << "Dame un valor char: ";
	fflush(stdin);
	scanf("%c",&letra);
	cout << "Dame una cadena sin espacios: ";
	fflush(stdin);
	scanf("%s",palabra);/*sin espacios*/
	puts("Impresion de los valores\n");
	cout << entera << "\n";
	cout << flotante << "\n";
	putchar(letra);
	putchar('\n');
	puts(palabra);
	system("pause");
	cout << "Dame un entero, un flotante, un char y una cadena sin espacios";
	fflush(stdin);
	scanf("%d %f %c %s",&entera,&flotante,&letra,palabra);/*sin espacios*/
	puts("Impresion de los valores\n");
	cout << entera << "\n";
	cout << flotante << "\n";
	putchar(letra);
	putchar('\n');
	puts(palabra);
	cout<<fixed;
	cout.precision(4);
	cout << "Impresion con precision. El valor flotante a 4 decimales: " << flotante;
	return 0;
}