//Nombre: Escobedo Vargas Minerva Sarahi
//No.Control: 24041172

#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	//calcule área y circunferencia
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	//Definir vareables
	float radio, area=0.0, circunferencia=0.0;
	const float PI=3.1416;
	
	cout<< "PI=" << PI << "\n" ;
	//PI=0; //no se puede modificar una constante
	cout<< fixed ;
	
	cout.precision(4);
	cout<< "Dame el radio de una circulo: ";
	
	cin>>radio;
	//Solución
	area=PI*radio*radio;
	circunferencia=PI*radio*2;
	
	cout<< "Usando precisión a cuatro decimales con fixed\n";
	cout<< "Para un circulo de radio: " <<radio<<"\n";
	cout<< "El área es: "<<area<<"\n";
	cout<< "La circunferencia es: "<<circunferencia<<"\n";
	
	cout<< "Usando precisión a dos decimales con printf\n";
	printf("Para un circulo de radio: %5.2f \n",radio);
	printf("El área es: %5.2 \n",area);
	printf("La circunferencia es: %5.2f \n",circunferencia);
	
	return 0;
}