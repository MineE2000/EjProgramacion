//Nombre: Escobedo Vargas Minerva Sarahi
//No.Control: 24041172

#include <iostream>
#include <windows.h>
using namespace std;

int factorial(int n);

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int num;
	
	cout << "Dime un número para calcular su factorial: ";
	cin >> num;
	
	cout << "El factorial de " << num << " es ";
	num=factorial(num);
	cout << num;
		
	return 0;
}

int factorial(int n){
	if(n==0){
		return 1;
	}else{
		return n*factorial(n-1); //recursividad
	}
}