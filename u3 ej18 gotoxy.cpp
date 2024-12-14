//Nombre: Escobedo Vargas Minerva Sarahi
//No.Control: 24041172

#include <iostream>
#include <windows.h>

using namespace std;

void gotoxy(int x, int y){
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	cout << "Hola, esta es la pruena de la función gotoxy." << endl;
	
	gotoxy(1,1); //Mueve el cursor a la columna 1, renglon 1.
	cout << "Este letrero comienza en la posición (1,1)." << endl;
	
	gotoxy(30,2); //Mueve el cursor a la columna 30, renglon 2.
	cout << "Este letrero comienza en la posición (30,2)." << endl;
	
	gotoxy(1,20); //Mueve el cursor a la columna 30, renglon 2.
	cout << "Este letrero comienza en la posición (1,20)." << endl;
	
	system ("pause");
	system ("cls");
	
	cout << "                       Impresión en las cuatro esquinas";
	
	gotoxy (0,0);
	cout << "*";
	gotoxy (80,0);
	cout << "*";
	gotoxy (0,19);
	cout << "*";
	gotoxy (80,19);
	cout << "*";
	
	return 0;
}