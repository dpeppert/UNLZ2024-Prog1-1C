//
#include <iostream>
#include <string>

using namespace std; 
/*
//Crear un programa que pida al usuario ingresar 
números enteros positivos y sumarlos, terminando cuando 
ingrese un número negativo.
*/

int main() { 
	int numero = 0; 
	int acumulador = 0; 
	
	 do {
		
		cout << "Ingrese un numero " << endl; 
		cin >> numero; 
		
		if (numero > 0) {
			acumulador = acumulador + numero;
		}
		
		cout << "El numero acumulado es " << acumulador;
	}while(numero  > 0 );
	
	return 0; 
}
