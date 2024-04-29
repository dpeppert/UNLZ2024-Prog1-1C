/*
Contador de pares y contador de impares 

Esperar por pantalla N  numerows 

Contar cantidad de pares ingresados ç

contar cantidad de impares ingresados 

Cortar ciclo cuando se ingrese un 0 

Mostrar valor de contador por pantalla 

*/

#include <iostream>
#include <string>

using namespace std; 


int main() { 

	int contadorPares = 0; 
	int contadorImpares = 0; 
	
	int numero = 0; 
	
	do{ 
		cout << "Ingrese un numero" << endl; 
		cin >> numero; 
		
		if (numero != 0) { 
			if (numero % 2 == 0) { //Esta es la forma de preguntar si es par
				contadorPares = contadorPares + 1 ; 
			}else { 
			
				contadorImpares = contadorImpares + 1 ; 
			}
	}
	}while (numero != 0);

		cout << "Cant Numeros Pares = " << contadorPares << endl; 
	
	cout << "Cant Numeros Impares = " << contadorImpares << endl;
	
} 


