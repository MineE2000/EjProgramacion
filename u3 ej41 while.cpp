//Nombre: Escobedo Vargas Minerva Sarahi
//No.Control: 24041172

#include <iostream>
#include <windows.h>

using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int x, c=0;
	float sueldo, total;
	char opcion, nombre [10];
	
	while(c!=0){ //La condición nunca se cumple, ¡Cuidado!
	cout << "Esto nunca se imprime";
	c=0;
	}
	/*while se puede usar en situaciones en las que se sabe de antemano el numero de vueltas que se habrá de ejecutar,
	y debe constar de inicialización, condición y modificación*/
	x=1; // inicialización
	
	while(x<11)
	{
		cout << x << "\n";
		x++;
	}
	
	system ("pause");
	
	//o bien, cuando no se sabe cuantas vueltas debe dar
	
	opcion ='s';
	
	while(opcion=='s' or opcion=='S'){
		system("cls");
		
		cout << "Dame tu nombre: "; 
		fflush(stdin); 
		gets (nombre);
		
		cout << "Dame tu sueldo: "; 
		cin >> sueldo;
		
		total + sueldo; // es lo mismo que total=total+sueldo
		
		printf("Deseas capturar otro empleado <<s/n>>? ");
		cin >> opcion;//variacion
	}
	
	printf("Total de salarios = %5.2f\n", total);
	cout << "Después de la pausa el programa se cicla\n";
	system("pause");
	
	//cuidado con poner ; después de un while
	
	x=0;
	
	while(x<10); //se cicla
	{
		cout << x << "\n";
		x++;
	}

	return 0;
}