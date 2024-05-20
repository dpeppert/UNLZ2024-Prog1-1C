/*
Ingresar datos por teclado y luego mostrarlos por pantalla 
Definir una funcion de "IngresoDatos" donde 
habrà que escribir el còdigo para pedir los valores por Teclado
y una funcion "MostrarDatos" para mostrarlos por pantalla
cin cout 
definir funciones 

[TipoDeDato] [NombreDeVariable]([parametros])


*/

#include <iostream>
#include <string>

using namespace std; 

int IngresarDatos() { 

	int ingresoPorTeclado = 0; 
	cout << "Ingrese un numero" << endl; 
	cin >> ingresoPorTeclado; 
	
	return ingresoPorTeclado; 
	
}

void MostrarDatos(int valor) { 

	cout << "El valor ingresado es " << valor;
		

}

int main () { 
	
	int valor1 = IngresarDatos(); 
	
	MostrarDatos(valor1);
	
	int valor2 = IngresarDatos(); 
	
	MostrarDatos(valor2);
	
	
	int valor3 = IngresarDatos(); 
	
	MostrarDatos(valor3);
	
}
