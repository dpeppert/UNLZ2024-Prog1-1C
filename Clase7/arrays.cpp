
#include <iostream>
#include <string>

using namespace std; 


int main() { 
	/*
	int vector [5] ; 
	
	cout << "Ingrese un valor para ña primer posicion" << endl;
	cin >> vector[0]; 
	
	cout << "Ingrese un valor para ña segunda posicion" << endl;
	cin >> vector[1];
	cout << "Ingrese un valor para ña tercera posicion" << endl;
	cin >> vector[2];
	cout << "Ingrese un valor para ña cuarta posicion" << endl;
	cin >> vector [3];
	cout << "Ingrese un valor para ña quinta posicion" << endl;
	cin >> vector[4];	

	cout << "Valor de la primer posicion" << vector[0] << endl;
	cout << "Valor de la segunda posicion" << vector[1] << endl;
	cout << "Valor de la tercera posicion" << vector[2] << endl;
	cout << "Valor de la cuarta posicion" << vector[3] << endl;
	cout << "Valor de la quinta posicion" << vector[4] << endl;
*/
	int segundoVector[4];
	
	int cantidadPosiciones = 4;
	for (int i = 0; i < cantidadPosiciones; i++) {
		
		cout << "Ingrese un valor para la posiciòn " << i << endl; 
		cin >> segundoVector[i]; 
		
	}
	
	for (int i = 0; i < cantidadPosiciones; i++)

		cout << "Valor de la posicion" << i << " : " << segundoVector[i] << endl;


 }
