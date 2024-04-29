//
#include <iostream>
#include <string>

using namespace std; 

//Implementar un juego de adivinanzas en el que el usuario tenga que adivinar un número secreto. 
//El ciclo while se repetirá hasta que el usuario adivine el número correcto
int main() { 

	int numeroAAdivinar = 45; 
	
	int valorIngresado = 0; 
	
	while (valorIngresado != numeroAAdivinar) {
		cout << "Ingrese un numero" << endl;
			
			cin >> valorIngresado; 
			
	}
	
	return 0; 
	
	

}
