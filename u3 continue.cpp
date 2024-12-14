//Nombre: Escobedo Vargas Minerva Sarahi
//No.Control: 24041172

#include <windows.h>
#include <iostream>

using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int x,y=1;
	
	cout << "Lectura de 5 números enteros usando do while\n";
	
	do{
		cout << "Dame un número que no sea 0 (intento #" << y <<")\n";
		cin >> x;
		if(x==0)
			continue;
			y++;
	}while(y<6);
	
	system("pause");
	system("cls");
	
	cout << "Lectura de 5 números enteros usando for estándar\n";
	
	for(y=1;y<6;y++){
		cout << "Dame un número que no sea 0 (intento #" << y <<")\n";
		cin >> x;
		if(x==0)
			continue;
		cout << "Por aquí pasa solo cuando el número es diferente de 0\n";
	}
	
	return 0;
}