/*
Crear un array de 2 dimensiones. de 4 filas 
y 4 columnas. 

Crear la matriz identidad. 

Una matriz identidad es aquella que tiene 
1 en su diagonal principal 
y 0 en el resto de las casillas. 

*/
#include <string>
#include <iostream>


using namespace std; 
const int filas = 4; 
const int columnas = 4;
int vector[filas][columnas];

int main () { 

		for (int i = 0; i < filas; i++) {
			for (int j = 0; j < columnas; j++) {
				
			if (i == j ) { 
					vector[i][j] = 1;
			}else { 
					vector[i][j] = 0;
			}
		 		//cout << vector[i][j] << " | "; 
				
			}
			cout <<  endl;
		}
		
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
				cout << vector[i][j]<<  " | "; 
				
		}
		cout << endl;
}

		

}
