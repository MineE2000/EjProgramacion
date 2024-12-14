//Nombre: Escobedo Vargas Minerva Sarahi
//No.Control: 24041172

#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	float lado1, lado2, lado3;
	
	cout << "Dime el primer lado: ";
	cin >> lado1;
	
	cout << "Dime el segundo lado: ";
	cin >> lado2;
	
	cout << "Dime el tercer lado: ";
	cin >> lado3;
	
	if(lado1==lado2 && lado1==lado3)
		cout << "Es equilatero";
	else
		if(lado1!=lado2 && lado1!=lado3 && lado2!=lado3)
			cout << "El triángulo es escaleno";
		else 
			cout << "El triángulo es isósceles";
	
	return 0;
}
