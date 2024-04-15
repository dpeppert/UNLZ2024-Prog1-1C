#include <iostream>
#include <string>

using namespace std; 

int main () { 



	int cantSegundos = 0; 
	int distancia = 0;
 	const int velocidadSonido = 343;
	
	
	cout << "Ingrese la cantidad de segundos cronometrada" <<endl; 
	cin >> cantSegundos ;
	
	distancia = cantSegundos * velocidadSonido; 
	
	cout  << "La distancia hasta el rayo es  " << distancia <<  " metros";  
	
	return 0; 
	
 }
