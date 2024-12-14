//Nombre: Escobedo Vargas Minerva Sarahi
//No.Control: 24041172

#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int x, y, sum;
	char respuesta;
	
	do{
		cout << "Agrega un número: ";
		cin >> x;
		cout << "Agrega otro número: ";
		cin >> y;
		if(x>=0){
			sum=x+y;
			cout << "El número es: " << sum << "\n";
			sum++;
			cout << sum++;
		}
		cout << "¿Desea continuar? <<s/S>> ";
		cin >> respuesta;
	} while(respuesta=='s' or respuesta=='S');
	
	return 0;
}