
#include <iostream>
#include <string>

using namespace std; 


int main() { 
	
	int limite = 15; 
	int nroiteracion = 0;
	int acumulador = 0;
	
	
	cout << "Instrucciones antes de entrar al ciclo for" << endl;
	for (nroiteracion; nroiteracion < limite; nroiteracion= nroiteracion+2 ) {
		
		acumulador = acumulador + nroiteracion;
		
		cout << " valordel contador" << nroiteracion << endl;
		
	}
	
	cout << "valor del acumulador" << acumulador<<endl;
	return 0; 
	
} 
