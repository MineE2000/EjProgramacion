//Nombre: Escobedo Vargas Minerva Sarahi
//No.Control: 24041172

#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;

int cuantos(void);
void captura(int arreglo[], int n);
void ordena(int arreglo[], int n);
void imprime(int arreglo[], int n);
void intercambia(int &x,int &y);

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
    int num, arreglo[100];
    srand(time(0));
    num=cuantos();
    
    cout<<"El arreglo sera de "<<num<<" elementos\n";
    captura(arreglo,num);
    
    cout<<"El arreglo original es: \n";
    imprime(arreglo,num);
    
    cout<<"El arreglo ordenado es: \n";
    ordena(arreglo,num);
    
    imprime(arreglo,num);
    return 0;
}

int cuantos(void){
    int n=0;
    
	do{
		cout<<"Dime cuantos elementos quieres ordenar? <2-10>";
		cin>>n;
	}while(n>10 or n<2);
	
	return n;
}

void captura(int arreglo[],int n){
	int i;
	
    for(i=0;i<n;i++){
        arreglo[i]=rand()%10;
	}
}

void imprime(int arreglo[],int n){
    for(int i=0;i<n;i++) {
        cout<<"Arreglo["<<i<<"]="<<arreglo[i]<<"\n";
    }
}

void ordena(int arreglo[],int n){
    int i,j;
    
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if (arreglo[i]>arreglo[j]) {
                intercambia(arreglo[j],arreglo[i]);
            }
        }
    }
}

void intercambia(int &x,int &y){
	int tempo;
	tempo=y;
    y=x;
    x=tempo;
}