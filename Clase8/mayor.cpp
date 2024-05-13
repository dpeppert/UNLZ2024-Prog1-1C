/*
En un array de 5 elementos, 
pedirle al usuario que los cargue

cuando el usuario finalice la carga, 
indicar cual es el mayor numero inrgesado 
y la posición en la que se ingresó 
*/


#include <iostream>
#include <string>

using namespace std;


int main() {

	const int cantElementos = 5; 
	int elementos[cantElementos]; 
	
	/*Carga de datos*/
	for (int i = 0 ; i < cantElementos; i = i+1)  {
		cout << "Ingrese un numero"<< endl;		
		cin >> elementos[i];
			 	
	}
	
	/*Procesamiento*/
	int mayor = elementos[0]; 
	int posicion = 0;
	for (int i = 0; i < cantElementos; i = i + 1){ 
		if (elementos[i] > mayor) { 
			mayor = elementos[i];
			posicion = i;
		} 
	}
	
	cout << "El numero mayor ingresado es " << mayor << " y se encuentra en la posiciòn " << posicion << endl;

return 0; 	
} 
