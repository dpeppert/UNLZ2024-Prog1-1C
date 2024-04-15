#include <iostream>
#include <string>

using namespace std; 


//acumulador
int main () { 
	int cien = 100;  
	int acumulador = 0;
	int ingresoAAcumular = 0;
	int ingresoPorTeclado = 0;
	cout << "Este programa va a acumular hasta que llegues a 100";

	
	while (ingresoAAcumular < cien ) { 
//	     cout << "Ingrese una opcion por pantalla, el ciclo se detendra cuando iingrese un valor 00" << endl;
 
 		cout << "Ingrese el valor a acumular: "<< endl;
		cin>> ingresoPorTeclado; 
		
		ingresoAAcumular = ingresoAAcumular + ingresoPorTeclado;
		
		cout << "Llevo acumulados: " << ingresoAAcumular << endl; 
				
	}
	
	cout << "acumulado total:"<< acumulador << endl;
 	return 0; 


}
