//Nombre: Escobedo Vargas Minerva Sarahi
//No.Control: 24041172
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int n;
	
	cout << "Dame un número para determinar si es par o impar: ";
	cin >> n;
	
	if(n%2) //el resultado es cero y en C, cero=falso.
		cout << "El número es impar.\n";
	else 
		cout << "El número es par.\n";
	system("pause");
	
	//condición en la forma explicada.
	
	if(n%2==0)
		cout << "El número es par.\n";
	else
		cout << "El número es impar.\n";
	
	return 0;
}