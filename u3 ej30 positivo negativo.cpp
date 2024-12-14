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
	
	cout << "Dame un número para determinar si es poitivo o negativo: ";
	cin >> n;
	
	//Usando ?
	
	n>0? cout<< "El número es positivo \n": cout << "El número es negativo \n";
	system("pause");
	
	//if anidado para considerar el cero
	
	if(n>0)
		cout << "El número es positivo.\n";
	else
		if(n<0)
			cout << "El número es negativo.\n";
		else
			cout << "El número es cero.";
	
	return 0;
}