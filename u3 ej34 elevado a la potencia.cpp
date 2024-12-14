//Nombre: Escobedo Vargas Minerva Sarahi
//No.Control: 24041172
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	float exponente,numero, resultado;
	
	cout << "Dame el valor del número: ";
	cin >> numero;
	
	cout << "Dame el valor del exponente: ";
	cin >> exponente;
	
	if(exponente == 0)
		resultado = 1;
	else
		if(exponente > 0)
			resultado = pow(numero,exponente);
		else
			resultado = 1/pow(numero,abs(exponente));
	
	printf("El resultado es: %5.5f\n",resultado);
	cout << "El resultado es: " << resultado;
	
	return 0;
}