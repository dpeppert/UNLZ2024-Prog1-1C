#include <string>
#include <iostream>


using namespace std; 
const int filas = 4; 
const int columnas = 6;
int vector[filas][columnas];

int main () { 
		
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
		
			vector[i][j] = i + 10 ;	
		}
	}
	
	

	
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			cout << "valor de I (filas)" << i << endl;
			cout << "valor de J (columnas)" << j<< endl;
			
			cout << "Valor de Vector" << vector[i][j] << endl;
		}
	}
	
	return 0; 
}
