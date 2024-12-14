//Nombre: Escobedo Vargas Minerva Sarahi
//No.Control: 24041172

#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	char c;
	int opcion;
	
	cout << "Dame un valor binario 0/1: ";
	cin >> c;
	switch (c){
		case '0': 
			cout << "Falso o apagado\n";
		  break;
		case '1': 
			cout << "Cierto o encendido\n";
		  break;
		default:
			cout << "Tecleaste un valor incorrecto\n";
	}
	
	system("pause");
	system("cls");
	
	printf("1. Química\n");
	cout << "2. Física\n";
	printf("3. Matemáticas\n");
	printf("4. Recreo\n");
	printf("Selecciona una opción: ");
	cin >> opcion;
	
	switch (opcion){
		case 1: printf("Seleccionaste química");
		 break;
		case 2: printf("Seleccionaste física");
		 break;
		case 3: printf("Seleccionaste matemáticas");
		 break;
		case 4: puts("Seleccionaste recreo");
		 break;
		default: 
		printf("\aSeleccionaste una opción no válida");
	}
	
	return 0;
}