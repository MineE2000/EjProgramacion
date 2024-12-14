//Nombre: Escobedo Vargas Minerva Sarahi
//No.Control: 24041172

#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int matriz[5][5]; //obtiene una matriz de 5 por 5
	int i,j;
	
	srand(time(0)); //Inicializar la semilla de números aleatorios
	
	for(i=0;i<5;i++){ //Ciclo para renglones
		for(j=0;j<5;j++){ //Ciclo para columnas
			//cout << "Dame el valor del renglón " << i << " columna " << j;
			//cin >> matriz[i][j];
			matriz[i][j]=rand()%100; // Genera números alatorios entre 0 y 99
		}
	}
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%3d", matriz[i][j]);		
			}
		cout << "\n";
	}
	
	return 0;
}