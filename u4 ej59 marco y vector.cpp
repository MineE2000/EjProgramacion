//Nombre: Escobedo Vargas Minerva Sarahi
//No.Control: 24041172

#include <iostream>
#include <windows.h>
#include <time.h>
#include <conio.h>

using namespace std;

void gotoxy(int x, int y){
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int r,vec[10];
	srand(time(0));
	printf("Maximice la pantalla y precione una tecla");
	getche();
	system("cls");
	
	for(r=0;r<=165;r++){ //165 o 79 ciclo para dibujar las lineas horizontales
		gotoxy(r,0); //linea superior
		printf("*");
		gotoxy(r,40);//40 o 18 linea inferior
		printf("*");
	}
	
	for(r=0;r<40;r++){ // 40 o 18 ciclo para las lineas verticales
		gotoxy(0,r); //linea izquierda
		printf("*");
		gotoxy(165,r);//165 o 79 linea derecha
		printf("*");
	}
	
	gotoxy(72,17); //(40,2)
	
	cout << "Impresión del vector\n";
	for(r=0;r<10;r++){
		vec[r]=rand()%100;
		gotoxy(80,r+17);//(40,r+3)
		printf("%d",vec[r]);
	}
	
	
	gotoxy (5,13); //40
	getche();
	return 0;
}
