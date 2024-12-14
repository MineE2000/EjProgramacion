//Nombre: Escobedo Vargas Minerva Sarahi
//No.Control: 24041172

#include <iostream>
#include <windows.h>
using namespace std;

//Convierte de C a F
double ctof(double centi);

//Convierte de F a C
double ftoc(double fahr);

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	double temperatura;
	int opcion;
	
	cout << "Ingrese una temperatura: ";
	cin >> temperatura;

	cout << "Seleccione la Opción Deseada: \n";
	cout << "1. Centígrados a Fahrenheit\n";
	cout << "2. Fahrenheit a Centígrados\n";
	cin >> opcion;
	
	switch(opcion){
		case 1:
			cout << temperatura << " grados Centígrados son " << ctof(temperatura) << " grados Fahrenheit.\n";
			break;
		case 2:
			cout << temperatura << " grados Fahrenheit son " << ftoc(temperatura) << " grados Centígrados.\n";
			break;
		default:
			cout << "Opción no válida.\n";
			break;
	}
		
	return 0;
}

double ctof(double centi){
	return (centi*9/5)+32;
}

double ftoc(double fahr){
	return (fahr-32)*5/9;
}