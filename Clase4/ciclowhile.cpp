#include <iostream>
#include <string>

using namespace std; 


//while
int main () { 
	int opcion = 1; 
	int contadorCicloWhile = 0;
	int acumulador = 0;
	int ingresoAAcumular = 0;
	int ingresoPorTeclado = 0;
	cout << "Ingrese la cantidad de ciclos que desea que se itere";
	cin >> opcion;
	
	while (contadorCicloWhile < opcion ) { 
//	     cout << "Ingrese una opcion por pantalla, el ciclo se detendra cuando iingrese un valor 00" << endl;
		
		contadorCicloWhile = contadorCicloWhile + 1;
		
		acumulador = acumulador + contadorCicloWhile;
		cout << "Cantidad de veces que se repite este ciclo: "; 
		cout << contadorCicloWhile << endl ;
		cout << "Valor temporal del acumulador: " << acumulador << endl; 

		cout << "Ingrese el valor a acumular: "<< endl;
		cin>> ingresoPorTeclado; 
		
		ingresoAAcumular = ingresoAAcumular + ingresoPorTeclado;
		
		cout << "Llevo acumulados: " << ingresoAAcumular; 
		
		
	}
	
	cout << "acumulado total:"<< acumulador;
 	return 0; 


}
