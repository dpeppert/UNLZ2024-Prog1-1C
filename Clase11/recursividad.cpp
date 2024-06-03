/*Recursividad*/



#include <iostream>
#include <string>

using namespace std; 


int funcionRecursiva(int numero1) { 
	if (numero1 <= 1) { 
	
		return numero1; 
	} else {
		return numero1 * funcionRecursiva(numero1 -1);
	}
	
}


int main() {
	
	int resultado = 5; 
	
	 resultado = funcionRecursiva(resultado); 
	
	cout << resultado; 
}


