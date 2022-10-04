#include "Fibunacci.h"
#include <cstdlib>
#include <iostream>
using namespace std;

int main (int argc, char * arg[]){
	
	int Limites,opc,salir=1;
	do{
		Fibunacci Fi;
		cout<<"Programa que calcula la serie"<<endl;
		cout<<"Fibunnaci de forma Recursiva y iteravidad"<<endl;
		cout<<"Limites de la serie"<<endl;
		cin>>Limites;
		cout<<"Selecciona una de las opciones del menu por favor"<<endl;
		cout<<"1.- Recursividad"<<endl;
		cout<<"2.- Iteratividad"<<endl;
		cin>>opc;
	switch 	(opc){
		case 1:
				cout<<"Recursividad"<<endl;  
			for(int i=1;i<=Limites;i++)
    		cout<<Fi.CalcularFibunacciRecursiva (i)<<"\t";
			break;
		case 2:
			cout<<"Iteratividad"<<endl;
			Fi.CalcularFibunacciIterativa (Limites);
			break;
			default:
			cout<<"Error... Por favor seleccione una opcion correcta"<<endl;
	}
		cout<<"¿Desea seguir con el Programa?"<<endl;
		cout<<"Si es asi por favor... Presione 1"<<endl;
		cout<<"No entonces... Presione cualquier otro numero por favor"<<endl;
		cin>>salir;
	}while(salir == 1);
	
	getchar();
	system("pause");
	return 0;
		}
