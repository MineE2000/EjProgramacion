//Nombre: Escobedo Vargas Minerva Sarahi
//No.Control: 24041172

#include <iostream>
#include <windows.h>
using namespace std;

int potencia(int n, int e);

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int num, exponente;
	
	cout << "Dame el número a elevar: ";
	cin >> num;
	
	cout << "Dame la potencia: ";
	cin >> exponente;
	
	cout << num << " elevado a la " << exponente << " = " << potencia(num, exponente);
	
	return 0;
}

int potencia(int n, int e){
	int i=1;
	int resultado=n;
	for(i=1;i<e;i++){
		resultado=resultado*n;
	}
	
	return resultado;
}