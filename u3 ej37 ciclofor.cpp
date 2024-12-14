//Nombre: Escobedo Vargas Minerva Sarahi
//No.Control: 24041172

#include <iostream>
#include <windows.h>
#include <math.h>

using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int x,y;
	float z;
	
	//Imprime numeros de 1 en 1 hasta el 100 mientras x<=100,
	//Variacion; incrementos de 1 en 1 y 2 en 2.
	/*for(x=0;x<=100;x+=1){
		cout << x << ",\n";
	}
	
	cout << "\n";
	system("pause");*/
	
	/*for(x=100;x!=65;x-=5){
		z=sqrt(x);
		cout << "La raíz cuadrada de " << x << " es " << z << "\n";
	}
	
	system ("pause");*/
	
	/*x=10;
	for(y=10;y!=x;++y){ //poner 9 para que el ciclo pueda entrar
		cout << y << "Dentro del ciclo (nunca entra)\n";
		cout << y << "Fuera del ciclo\n";
	}
	
	system("pause");*/
	
	/*for(x=0,y=0;x+y<10;++x){
		cout << "Dame el valor de y: ";
		cin >> y;
		cout << x << " + " << y << " = " << x+y << "El ciclo continúa mientras la suma sea <10";
	}
	
	cout << x << " + " << y << " = " << x+y << "Fuera del ciclo\n" ;
	system("pause");*/
	
	/*for(x=0;x!=123;){
		cout << "Dame el valor de x, 123 para terminar el ciclo: ";
		cin >> x;
	}
	
	system("pause");*/
	
	/*x=1;
	for(;x<=10;){
		printf("%d\n",x);
		++x; //variacion dentro del cuerpo
	}
	system("pause");*/
	
	cout << "Hola, mundo \n";
	for(x=0;x<100000;x++);
	cout << "Hola mundo después de unos cuantos segundos";
	
	return 0;
}