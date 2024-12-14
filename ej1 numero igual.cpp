//Nombre: Escobedo Vargas Minerva Sarahi
//No.Control: 24041172

#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int x, igual;
	char respuesta;
		
	cout << "Dame un número: ";
	cin >> x;
	
	system("pause");
	system("cls");
	
	do{
		cout << "Ingrese otro número: ";
		cin >> igual;
		if(igual==x){
			cout << "Correcto\n";
			}else{
			cout << "Error\n";
		}
		cout << "¿Desea continuar?(s/n): ";
		cin >> respuesta;
	} while(respuesta=='s'||respuesta=='S');
	
	return 0;
}