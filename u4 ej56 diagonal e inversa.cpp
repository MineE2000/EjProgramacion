//Nombre: Escobedo Vargas Minerva Sarahi
//No.Control: 24041172

#include <iostream>
#include <windows.h>
#include <time.h> //random

using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int matriz[10][10],diags[2][10]; // declara dos matrices
	int i,j,n;
	
	srand(time(0)); //Inicializar la semilla de números aleatorios
	
	do{
		cout << "Dime cuantos elementos por lado tiene la matriz? <2-10>";
		cin >> n;
	}while(n>10 or n<2);
	
	for(i=0;i<n;i++){ //Ciclo para renglones
		for(j=0;j<n;j++){ //Ciclo para columnas
			matriz[i][j]=rand()%100; //Genera números aleatorios entre 0 y 99
		}
	}
	
	cout << "Impresión de la matriz\n";
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%3d", matriz[i][j]);
		}
		cout << "\n";
	}
	
	cout << "Obtención diágonal normal\n";
	
	for(i=0;i<n;i++){
		diags[0][i]=matriz[i][j];
		printf("%3d",diags[0][i]);
	}
	
	cout << "\n Obtención diágonal inversa\n";
	
	j=0;
	
	for(i=n-1;i>=0;i--){
		diags[1][j]=matriz[j][i];
		printf("%3d",diags[1][j]);
		j++;
	}
	
	return 0;
}