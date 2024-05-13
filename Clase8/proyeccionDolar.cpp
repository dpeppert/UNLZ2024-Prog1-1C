/*
Se necesita calcular una proyeccion de la cotizacion del dolar 
con respecto al peso argentino para los proximos 25 a�os 

se sabe el valor de este a�o: 860 
se sabe el valor del a�o que viene: 2345 

se sabe tambien que hay una depreciaci�n del 10% anual 
con respecto al a�o anterior. 

Calcular para cada a�o hasta el2049 el valor estimado de la cotizaci�n del 
dolar 

*/

#include <iostream>
#include <string>

using namespace std;


int main() {
		/*declaro variables y las inicializo*/
		const int anioActual = 2024; 
		int cantidadPeriodosAProyectar = 25;
		
		int proyeccionesDolar [cantidadPeriodosAProyectar];
		
		/*carga de datos*/
		
		proyeccionesDolar[0] = 860;
		proyeccionesDolar[1] = 2345;
		
		/*Procesamiento*/
		for (int i = 2; i <cantidadPeriodosAProyectar; i = i + 1)
		{ 
		    proyeccionesDolar[i]= 	proyeccionesDolar[i-1] * 1.10;
		}
				
		/*Mostrar resultados*/
		for (int i = 0; i < cantidadPeriodosAProyectar; i = i + 1 ) {
			cout << "Cotizaci�n del a�o " << anioActual + i <<": " << proyeccionesDolar[i] << endl;
		}
		
		return 0;
}
