/*
Se necesita calcular una proyeccion de la cotizacion del dolar 
con respecto al peso argentino para los proximos 25 años 

se sabe el valor de este año: 860 
se sabe el valor del año que viene: 2345 

se sabe tambien que hay una depreciaciòn del 10% anual 
con respecto al año anterior. 

Calcular para cada año hasta el2049 el valor estimado de la cotizaciòn del 
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
			cout << "Cotización del año " << anioActual + i <<": " << proyeccionesDolar[i] << endl;
		}
		
		return 0;
}
