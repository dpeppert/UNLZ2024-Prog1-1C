#include <iostream>
#include <string>

using namespace std; 

int main () { 
		
	string nombre = "";
	cout << "Ingrese su nombre: " << endl; 
	
	getline(cin, nombre);
	
	cout << "Su nombre es: " << nombre;
	
	return 0;
} 
