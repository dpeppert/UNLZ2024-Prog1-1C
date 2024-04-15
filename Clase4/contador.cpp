#include <iostream>
#include <string>

using namespace std; 


//contadores
int main () { 
	int opcion = 1; 
	int contadorCicloWhile = 0;
	cout << "Ingrese la cantidad de ciclos que desea que se itere";
	cin >> opcion;
	
	while (contadorCicloWhile < opcion ) { 

		
		contadorCicloWhile = contadorCicloWhile + 1;
		
		cout << "Cantidad de veces que se repite este ciclo: " << endl; 
		
	   cout << 	 contadorCicloWhile << endl;
	}
	
	

}
