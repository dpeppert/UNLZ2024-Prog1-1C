/*Escribir un programa que pida el ingreso por teclado 
de 10 valores dentro de un array, y ordenarlo usando el 
mètodo de ordenamiento por burbuja*/
#include <iostream>
#include <string>
using namespace std; 
const int len = 10; 
int vector[len];

void ordenar() {
	
	int aux = 0; 
	for (int i = 0 ; i < len; i = i + 1) { 
	//	cout << "i=" << i << " ; vector[i]=" << vector[i]<< endl;
		for (int j = 0; j < len; j = j + 1) { 
	//		cout << "comparar con j=" << j << " ; vector[j]=" << vector[j]<< endl;
			if (vector[i] < vector[j]) { 
	//			cout << "Intercambiamos posiciones"<<endl; 
				aux = vector[i];
				vector[i] = vector[j]; 
				vector[j] = aux;

			}
		} 
	}
}

void mostrarVector() { 

	for (int i = 0 ; i < len; i = i +1) { 
		cout << vector[i] << endl;
	}
}

void guardarDatosEnArray() { 
	for (int i = 0; i < len ; i = i +1) { 
		cout << "Ingrese el valor para la posicion " << i<< endl; 
		cin >> vector[i];
	}
}

int main() { 
	guardarDatosEnArray(); 
	cout << "Array ingresado" << endl;
	mostrarVector(); 
	ordenar(); 
	cout << "Array ordenado" << endl;
	mostrarVector();
}
