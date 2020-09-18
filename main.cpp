#include <iostream>
using namespace std;
#include "NewtonRapson.h"
/*  
	Autor: Edgard Diaz
	
	Este programa realiza  la aproximacion de las raices de una funcion utilizando del metodo de Newton - Rapson
*/

double calcula_raiz(double x0, float tolerancia, int Iteraciones);

int main(int argc, char** argv) 
{
	double x0; //Punto inicial de la evaluacion
	float tolerancia; //Tolerancia de error
	int Iteraciones = 100; //Total de iteraciones que se realizan para aproximar la raiz de la funcion
	int res;
	NewtonRapson P;
	cout<<"Punto inicial:";
	cin>>x0;
	cout<<"Tolerancia:";
	cin>>tolerancia;
	res = P.calcula_raiz(x0,tolerancia,Iteraciones); //Llama a la clase responsable de la logica del programa
	cout<<endl<<"Resultado:"<<endl;
	switch(res)
	{
		case 0:
			cout<<"El programa no convege";
			break;
		case 1:
			cout<<"iteraciones realizadas: "<<P.iteracion<<endl; //Iteraciones ralizadas para aproximar el resultado
			cout<<"Raiz aproximada: "<<P.x1<<endl; //Raiz  aprixmada por el metodo
			cout<<"Error: "<< P.error; //Error  entre la raiz verdadera y la apriximacion
			break;
	}
	
	return 0;
}
