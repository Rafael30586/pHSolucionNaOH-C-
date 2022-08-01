
#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;

void menu();
void gramosNaOH();
void mLSolucion();
double molesNaOH(double,double);
double molaridad(double,double);
double pOH(double);
double pH(double);
void mostrarResultado(double);

double gNaOH, mLSol, molNaOH,molarSol,pHSol,pOHSol;
double const pmNaOH = 40;
int opcionMenu;

int main(){
	cout<<"Hola usuario, esta aplicacion le permitira "<<endl;
	cout<<"calcular el pH de una solucion de NaOH conociendo "<<endl;
	cout<<"la cantidad de gramos de soluto en una cantidad de solucion"<<endl;
	cout<<"expresada en militros"<<endl;
	
	while(opcionMenu != 3){
	menu();
	
	switch(opcionMenu){
		case 1: gramosNaOH();
	            mLSolucion();
	            molNaOH = molesNaOH(gNaOH,pmNaOH);
	            molarSol = molaridad(molNaOH,mLSol);
	            pOHSol = pOH(molarSol);
	            pHSol = pH(pOHSol);
	            system("cls");
	            mostrarResultado(pHSol);break;
	            
	    case 2: system("cls");break;
		
		case 3: cout<<"Saliendo del programa"<<endl;
	            cout<<"Aplicacion desarrollada por F. Rafael Alvarez"<<endl;
			    cout<<"miniCalculadoras LightSpeed"<<endl;break;        
	}
	
	}
	
	
	system("pause");
	return 0;
}

void menu(){
	cout<<"\nElija una opcion: "<<endl;
	cout<<"\n1. Calcular"<<endl;
	cout<<"\n2. Limpiar pantalla"<<endl;
	cout<<"\n3. Salir"<<endl;
	cin>>opcionMenu;
}

void gramosNaOH(){
	cout<<"Digite la cantidad de gramos de NaOH en solucion: ";
	cin>>gNaOH;
}

void mLSolucion(){
	cout<<"Digite la cantidad de mililitros totales de la solucion: ";
	cin>>mLSol;
}

double molesNaOH(double a,double b){
	return a/b; //Reemplazar a por gNaOH en int main y asignar funcion a una variable
}

double molaridad(double a,double b){
	return (1000*a)/b;
}

double pOH(double a){
	return -log10(a); //Por ahí hay que poner duble en lugar de float
}

double pH(double a){
	return 14 - a;
}

void mostrarResultado(double a){
	cout<<"\n\npH:  "<<a<<endl;
}
