//Nombre: Escobedo Vargas Minerva Sarahi
//No.Control: 24041172

#include <iostream>
#include <windows.h>
using namespace std;

int sumar(int a, int b);

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int num1,num2;
	
	cout << "Ingrese el primer número: ";
	cin >> num1;
	cout << "Ingrese el segundo número: ";
	cin >> num2;
	
	int resultado=sumar(num1,num2);
	
	cout << "El resultado de la suma es: " << resultado << "\n";
	cout << "El resultado es: " << sumar(num1,num2) << "\n";
	
	cout << "Num1 después de la función: " << num1 << "\n";
	cout << "Num2 después de la función: " << num2 << "\n";
	
	return 0;
}

int sumar(int num1, int num2){
 	return num1+num2;
}