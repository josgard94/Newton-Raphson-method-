#include "NewtonRapson.h"
#include <cmath>
#include<iostream>
using namespace std;


	NewtonRapson::NewtonRapson(){}
		NewtonRapson::~NewtonRapson(){}


// Funcion a evaluar, cambiar para otras aproximaciones
double NewtonRapson::funcion(double x)
{
	return 2*sin(x)-x; // Retorna el resultados de la evaluacion de la funcion en un punto dado
	//return x * exp(cos(x)) / 1.5 - 1;
}

//Funcion derivada, cambie deacuerdo a la  derivada de la  funcion que desea  evaluar
double NewtonRapson::f_derivada(double x)
{
	return 2*cos(x) - 1; //retorna el resultado de evaluar  la funcion derivada en  un punto dado
	//return exp(cos(x)) * (1 - x * sin(x)) / 1.5;
}

//Logica del metodo Newton-Rapson
double NewtonRapson::calcula_raiz(double x0, float tolerancia, int Iteraciones)
{
	iteracion = 1;
	error = 0;
	x1 = 0;
	do
	{
		if(iteracion > Iteraciones) //criterio de paro si el metodo no converge de acuerdo al numero de iteraciones establecido
		{
			return 0;
		}
		else
		{
			
			x1 = x0 - (funcion(x0)/f_derivada(x0)); // Calculo de la siguiente aproximacion
			error = fabs(x1 - x0); //Error, es la diferencia entre dos aproximaciones sucesivas, entremas pequeño es el error mas exacta es la  raiz obtenida
			
			if(error <= tolerancia) //Criterio de paro, cuando el error es menor a la tolerancia se ha llegado a una aproximacion muy cercana a la raiz real
			{
				return 1;
			}
			else //Si el cirterio de paro no se cumple incrementar  el contador de iteraciones  y asignar  la nueva interacion a x0
			{
				x0 = x1;
				iteracion ++;
			}
			
		}
	}while(true);
}
