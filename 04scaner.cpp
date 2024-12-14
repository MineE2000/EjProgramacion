//Nombre: Escobedo Vargas Minerva Sarahi.
//No.Control: 24041172

 #include <stdio.h>
 #include <iostream>
 #include <windows.h> //necesario para configurar
 
 using namespace std;
 
 int main(){
 	SetConsoleOutputCP(CP_UTF8);
 	SetConsoleCP(CP_UTF8);
	char cad[80];
	int i,j,k;
	
	puts("Usando scanf con juegos de inspección\n");
	puts("Dame una cadena con espacios");
	scanf("%s",cad);
	cout<<cad<<"\n";
	fflush(stdin);
	
	puts("Dame una cadena de mayúsculas y espacios");
	scanf("%[ ABCDEFGHIJKLMNOPQRSTUVWXYZ]",cad);
	puts(cad);
	
	puts("Dame una cadena de mayúsculas,minúsculas y espacios");
	fflush(stdin);
	scanf("%[a-zA-Z]",cad);
	cout<<cad<<"\n";
	
	puts("Dame una cadena con cualquier caracter y termina con un enter");
	fflush(stdin);
	scanf("%[^\n]",cad);
	puts(cad);
	
	puts("Dame 3 números enteros de máximo 3 cifras");
	scanf("%3d %3d %3d",&i,&j,&k);
	printf("%d %d %d",i,j,k);
	printf("\a");
 	return 0;
 }
