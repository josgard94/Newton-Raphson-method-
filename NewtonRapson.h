#ifndef NEWTONRAPSON_H
#define NEWTONRAPSON_H

class NewtonRapson
{
	//Metodos  de clase publicos
	public:
		NewtonRapson();
		~NewtonRapson();
		double funcion(double x);
		double f_derivada(double x);
		double calcula_raiz(double x0, float tolerancia, int Iteraciones);
		double x1;
		int iteracion;
		float error; 
	//Variables privadas
	private:
	double x;
	double x0;
	float tolerancia;
	int Iteraciones;
};

#endif
