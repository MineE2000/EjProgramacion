//Nombre: Escobedo Vargas Minerva Sarahi
//No.Control: 24041172

#include <iostream>
#include <windows.h>

using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	long int r, y[5], x[ ]={50,30,-1,0-32768};
	int i=0;
	
	puts("Impresión de los arreglos antes de la asignación de uno a otro");
	
	for(i=0;i<5;i++){
		cout << "x[" << i << "]=" << x[i] << "		y[" << i << "]=" << y[i] << "\n";
	}
	
	puts("Impresión de los arreglos después de la asignación");
	
	for(i=0;i<5;i++){
		printf("");
	}
	
	
	return 0;
}