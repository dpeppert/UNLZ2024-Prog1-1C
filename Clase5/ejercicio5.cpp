//
#include <iostream>
#include <string>

using namespace std; 

//Desarrollar un programa que pida al usuario ingresar una contraseña, 
//y se repita hasta que ingrese la contraseña correcta.
int main() { 

string password = "atlantica";

string valorIngresado = ""; 

while (password != valorIngresado) { 
	cout << "Ingrese una contrase�a" << endl; 

	cin >> valorIngresado;
}

return 0; 


}
