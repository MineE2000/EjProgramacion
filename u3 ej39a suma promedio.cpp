//Nombre: Escobedo Vargas Minerva Sarahi
//No.Control: 24041172

#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	char otro='S';
	float cuantos, suma, x;
	float promedio;
	
	cuantos=0;
	suma=0;
	
	for(;otro=='S';){
		cout << "Dame un número: ";
		cin >> x;
		
		cuantos++;
		suma=suma+x;
		
		cout << "¿Quieres capturar otro? (S/N): ";
		cin >> otro;
		otro = toupper(otro);
	}
	
	promedio = suma / cuantos;
	
	cout << "Fueron " << cuantos << " numeros\n";
	cout << "La sumatoria es: " << suma << "\n";
	cout << "El promedio es: " << promedio << "\n";
	
	return 0;
}