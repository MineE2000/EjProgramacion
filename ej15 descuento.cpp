//Nombre: Escobedo Vargas Minerva Sarahi
//No.Control: 24041172

#include <iostream>
#include <windows.h>

using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	float precio, pct, multi, desc;
	
	cout << "Precio: ";
	cin >> precio;
	
	cout << "Descuento a aplicar: ";
	cin >> pct;
	
	multi = precio * (pct/100);
	desc = precio - multi;

	cout << "Precio sin descuento: " << precio << "\n";
	cout << "Precio con descuento: " << desc << "\n";
	
	
	return 0;
}
	
