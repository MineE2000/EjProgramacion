//Nombre: Escobedo Vargas Minerva Sarahi
//No.Control: 24041172

#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	string nombre;
	int cal1,cal2,cal3,prom;
	
	cout << "Dime tu nombre: ";
	cin >> nombre;
	
	cout << "Dame la primer calificación: ";
	cin >> cal1;
	
	cout << "Dame la segunda calificación: ";
	cin >> cal2;
	
	cout << "Dame la tercer calificación: ";
	cin >> cal3;
	
	prom=(cal1+cal2+cal3)/3;
	
	cout << nombre << ", tu promedio es: " << prom << ", y tu calificación final es: ";
	
	if(prom>=9){
		cout << "A";
	}else{
		if(prom>=80){
			cout << "B";
		}else{
			if(prom>=70){
				cout << "C";
			}else{
				if(prom>=60){
					cout << "D";
				}else{
					cout << "NA";
				}
			}
		}
	}
	
	return 0;
}