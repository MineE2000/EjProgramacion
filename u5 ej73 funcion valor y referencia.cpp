//Nombre: Escobedo Vargas Minerva Sarahi
//No.Control: 24041172

#include <iostream>
#include <windows.h>
using namespace std;

void cuad1(int x); //copia la direccion
void cuad2(int &x); //copia la direccion

int factorial(int n);

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int x;
	
	cout << "Dame un valor para elevar al cuadrado: ";
	cin >> x;
	
	cout << "\n x = " << x << " antes de enviarla a la función 1\n";
	system("pause");
	
	cuad1(x);
	cout << "\n x = " << x << " después de enviarla a la función 1\n";
	system("pause");
	
	cuad2(x);
	cout << "\n x = " << x << " después de enviarla a la función 2\n";

	return 0;
}

void cuad1(int x){
	x=x*x;
	cout << "\n x= " << x <<  " dentro de la funcion 1\n";
	system("pause");
}

void cuad2(int &x){
	x=x*x;
	cout << "\n x= " << x <<  " dentro de la funcion 2\n";
	system("pause");
}