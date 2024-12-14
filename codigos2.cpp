//Nombre: Escobedo Vargas Minerva Sarahi
//No.Control: 24041172

#include <iostream>
#include <windows.h> //Configurar la consola para que use UTF-8
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	double valor = 123.456789;
	cout << fixed;
	cout.precision(2);
	cout << "Con 2 decimales: " <<valor << endl;

	cout.precision(4);
	cout << "Con 4 decimales: " << valor << endl;
	
	cout.precision(6);
	cout << "Con 6 decimales: " << valor << endl;
	
	cout.unsetf(ios::fixed); //Desactiva fixed
	cout.precision(2);
	cout << "Con 2 dígitos significativos: " << valor << endl;
	cout << "prueba de áéíóúñ#";
	return 0;
}