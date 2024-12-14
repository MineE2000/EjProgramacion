// Nombre: Escobedo Vargas Minerva Sarahi
// No.Control: 24041172

#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int matriz[10][10]; //declara una matriz
	int i,j,n;
	
	srand(time(0));
	
	do{
		cout << "Dime cuantos elementos por lado tiene una matriz? <2-10>";
		cin >> n;
	}while(n>10 or n<2);
	
	for(i=0;i<n;i++){ //ciclo para columnas
		for(j=0;j<n;j++){//ciclo para renglones
		matriz[i][j]=rand()%100; //genera número aleatorio
		}
	}
	cout << "Impresión de la matriz\n";
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%3d", matriz[i][j]);
		}
		cout << "\n";
	}
	
	cout << "Impresión con diágonal\n";
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j){
				printf("%3d",matriz[i][j]);
			}else{
				printf("	");
			}
		}
		cout << "\n";
	}
	
	return 0;
}