// Generador de tablas de multiplicar

//ingresar un numero del 1 al 9, mostrar cada uno de los renglones ç
//de su tabla de multiplicar 

/*Ejemplo: 

Ingreso el 2

Mostrar por pantalla: 

2 * 1 = 2 
2 * 2 = 4 
2 * 3 = 6 
...
2 * 10 = 20 

usandi ciclo while 

*/

#include <iostream>
#include <string>

using namespace std; 


int main() { 

	int contador = 0; 
	int numero = 0; 
	int resultado22 = 0; 
	cout << "Ingrese un numero" << endl; 
	cin >> numero; 
	
	while (contador < 10) {
		
		contador = contador + 1; 
	//	resultado22 = numero * contador; 
		cout << numero << " * " << contador << " = " << numero * contador << endl;
	}
	return 0; 
} 
