//Nombre: Escobedo Vargas Minerva Sarahi
//No.Control: 24041172

#include <iostream>
#include <windows.h> 
 
using namespace std;
 
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	char cadena[10];
	int len,i;
 	
	cout << "Dame una palabra en minúculas: ";
	gets(cadena);
 	
	len=strlen(cadena);//obtiene la longitud de la cadena
 	
 	for(i=0;i<len;i++)
 		cadena[i]=toupper(cadena[i]); //convierte a mayusculas
 		cout << "Impresión de la cadena completa: " << cadena << "\n";
 		cout << "La cadena en mayusculas es: " << cadena << endl;
 		cout << "Impresión de elemento por elemento\n";
 		
 	for(int i=0;i<len;i++)
 		cout << "cadena[" << i << "] = " << cadena[i] << "\n";
 		
 	return 0;
}