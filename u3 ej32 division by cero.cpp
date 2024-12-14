//Nombre: Escobedo Vargas Minerva Sarahi
//No.Control: 24041172

#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	float numerador, denominador;
	
	cout << "Dame el numerador (dividendo): ";
	cin >> numerador;
	
	cout << "Dame el denominador (divisor): ";
	cin >> denominador;
	
	if(denominador)//si denominador  es !=0 entonces es cierto.
		cout << numerador << " / " << denominador << " = " << numerador/denominador << "\n";
	else 
		cout << "La división sobre cero no se permiten\n";
		
	system("pause");
	
	//preguntando si es cero de namera explícita.
	
	if(denominador!=0) //si denominador es !=0 entonces es cierto.
	cout << numerador << " / " << denominador << " = " << numerador/denominador << "\n";
	else
		cout << "La división sobre cero no se permite\n";
	
	system("pause");

	//preguntando por la negación de un número diferente de cero.
	
	if(!denominador)
		cout << "La división sobre cero no se permite\n";
	else 
		cout << numerador << " / " << denominador << " = " << numerador/denominador << "\n";
	
	return 0;
}