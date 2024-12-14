//Nombre: Escobedo Vargas Minerva Sarahi
//No.Control: 24041172

#include <iostream>
#include <windows.h>
using namespace std;

void parImpar(int numero); //función que verifica si un número es par o impar

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int numero;
	
	cout << "Ingrese un Número: ";
	cin >> numero;
	parImpar(numero);
	
	cout << "Ingrese otro Número: ";
	cin >> numero;
	parImpar(numero);
		
	return 0;
}

void parImpar(int numero){
	if(numero%2==0){
		cout << "El número es par\n";
	}else{
		cout << "El número es impar\n";
	}
}