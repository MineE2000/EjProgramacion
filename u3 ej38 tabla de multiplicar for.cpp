//Nombre: Escobedo Vargas Minerva Sarahi
//No.Control: 24041172

#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int x, tabla;
	
	cout << "Dame el número de la tabla que quieres generar: ";
	cin >> tabla;
	
	for(x=1;x<11;x++){
		cout << tabla << " x " << x << " = " << tabla*x << "\n";
	}
	
	for(x=1;x<11;x++){
		printf("%2d x %2d = %3d\n",tabla,x,tabla*x);
	}
	
	return 0;
}