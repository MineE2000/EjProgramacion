//Nombre: Escobedo Vargas Minerva Sarahi
//No.Control: 24041172

#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
	char letra;
	cout <<"Dame una letra y te dire si es mayuscula o no: ";
	cin>>letra;
	
	switch(letra)
	{
		case 'A':
		case 'B':
		case 'C':
		case 'D':
		case 'E':
		case 'F':
		case 'G':
		case 'H':
		case 'I':
		case 'J':
		case 'K':
		case 'L':
		case 'M':
		case 'N':
		case 'Ñ':
		case 'O':
		case 'P':
		case 'Q':
		case 'R':
		case 'S':
		case 'T':
		case 'U':
		case 'V':
		case 'W':
		case 'X':
		case 'Y':
		case 'Z':
			cout<<"Es mayuscula";
			break;
		default:
			cout<<"No es mayuscula";
	}
	
	return 0;
}