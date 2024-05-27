#include <string>
#include <iostream>


using namespace std; 
const int filas = 4; 
const int columnas = 6;
int vector[filas][columnas];

int main() { 

	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			vector[i][j] = i + j;
			cout << i << " " << j << " | "; 
			//cout << vector[i][j] << " | "; 
			
		}
		cout <<  endl;
	}

}
