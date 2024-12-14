//Nombre: Escobedo vargas Minerva Sarahi
// No.Control: 24041172

#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int m1[10][10], m2[10][10], m3[10][10];
	int v1[10], v2[10], v3[10];
	int i,j,n;
	
	srand(time(0));
	
	do{
		cout << "¿Cuántos elementos por lado tiene la matriz y el vector? <2-10>";
		cin >> n;
	} while(n>10 or n<2);
	
	//Llenado de aleatorio de la primera matriz
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			m1[i][j]=rand()%10;
		}
	}
	
	//Llenado manual de la segunda matriz
	for(i=0;i<n;i++){ //Ciclo para renglones
		for(j=0;j<n;j++){ //Ciclo para columnas
			cout << "Dame el valor de m2[" << i << "][" << j << "]:  ";
			cin >> m2[i][j];
		}
	}
	
	//Impresión de la primera matriz
	cout << "\n";
	cout << "Matriz 1\n";
	
	for(i=0;i<n;i++){ //Ciclo para renglones
		for(j=0;j<n;j++){ //Ciclo para columnas
			printf("[%2d]", m1[i][j]);
		}
		printf("\n\n");
	}
	
	//Impresión de la segunda matriz
	cout << "\n";
	cout << "Matriz 2\n";
	
	for(i=0;i<n;i++){ //Ciclo para renglones
		for(j=0;j<n;j++){ //Ciclo para columnas
			printf("[%2d]", m2[i][j]);
		}
		printf("\n\n");
	}
	
	//Impresión de la tercer matriz
	cout << "\n";
	cout << "Matriz 3\n";
	
	for(i=0;i<n;i++){ //Ciclo para renglones
		for(j=0;j<n;j++){ //Ciclo para columnas
			m3[i][j]=m1[i][j]+m2[i][j];
			printf("[%2d]", m3[i][j]);
		}
		printf("\n\n");
	}
	
	system("pause");
	system("cls");
	
	//Llenado aleatorio de los vectores, impresión y suma
	cout << "V1  V2  V3\n\n";
	
	for(i=0;i<n;i++){
		v1[i]=rand()%10;
		v2[i]=rand()%10;
		v3[i]=rand()%10;
		printf("%d + %d = %d\n", v1[i],v2[i],v3[i]);
	}
	
	return 0;
}