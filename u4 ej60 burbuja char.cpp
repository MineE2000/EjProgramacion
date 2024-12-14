//Nombre: Escobedo Vargas Minerva Sarahi
//No.Control: 24041172

#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	char tempo, vector[11];
	int i,j,n, random;
	srand(time(0));
	
	do{
		cout<<"Dime cuantos elementos quieres ordenar? <2-10>";
		cin>>n;
	}while(n>10 or n<2);
	
	for(i=0;i<n;i++){
		random=65;
		do{
			random=rand()%91;//números entre 0 y 90
		}while(random<65);//límite inferior de 65
		vector[i]=random;// Genera numero aleatorio entre 65 y 90 (Chrs Ascii alfabéticos)
		cout<<"Vector["<<i<<"]="<<vector[i]<<"\n";
	}
	
	vector[n]='\0';//terminador de cadena
	
	for(i=0;i<n;i++){//metodo burbuja{
		for(j=i+1;j<n;j++){
			if(vector[i]>vector[j]){
				tempo=vector[j];
				vector[j]=vector[i];
				vector[i]=tempo;
			}
		}
	}
	
	cout<<"Vector hasta el terminador\n";
	i=0;
	
	do{
		cout<<"Vector["<<i<<"]="<<vector[i]<<"\n";
		i++;
	}while(vector[i]!='\0');
	
	cout<<"Vector completo\n";
	
	for(i=0;i<11;i++){
		cout<<"Vector["<<i<<"]="<<vector[i]<<"\n";
	}
	
	cout<<"Vector["<<i<<"]="<<vector[i]<<"\n";
	
	return 0;
}