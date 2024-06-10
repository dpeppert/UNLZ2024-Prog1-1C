/*
Busqueda de un numero en un array 

La definicion de un array que contenga enteros 

Que este array sea cargado por el usuario 

Que se le solicite al usuario buscar 
uno de los valores ingresados 

Informar si el valor fue encontrado, 
y en caso de ser asi indicar su ubicacion 


*/

#include <iostream>
#include <string>

using namespace std;




int seleccionElemento () {

	int len = 5 ;
	int arreglo[len]; 
	
	for (int i = 0 ; i < len; i++) { 
		cout << "Ingrese un numero paa la posicion " << i<< endl; 
		cin >> arreglo[i];
	}
	
	for (int i = 0 ; i < len; i++) { 
		cout << arreglo[i] <<" | " ;
	}
	
	int valorABuscar = 0;
	cout << "Ingrese un valor a Buscar: " ;
	
	cin >> valorABuscar;
	
	bool encontreValor = false; //la bandera esta abajo 
	int iAuxiliar = 0; 
	for (int i = 0 ; i < len; i++) { 
		
 	if (arreglo[i]== valorABuscar){  
 		
 		encontreValor = true; //la bandera esta arriba
	 	iAuxiliar = i; 
	 		cout << "El valor fue encontrado y esta en la posicion " << iAuxiliar<< endl;
			}
			else { 
				cout << "El valor fue encontrado";
			
			}
		
		
	}
 
 	if (encontreValor == true ) { 
				cout << "El valor fue encontrado y esta en la posicion " << iAuxiliar<< endl;
			}
			else { 
				cout << "El valor fue encontrado";
			
			}
	return 0; 
}
/*Ordenar un array. 
Solicitarle al usuario la carga de un array 
ordernarlo de forma ascendente 
mostrar por pantalla el array ordenado 
*/
int ordenarArray() { 

	int len = 5 ;
	int arreglo[len]; 
	
	for (int i = 0 ; i < len; i++) { 
		cout << "Ingrese un numero paa la posicion " << i<< endl; 
		cin >> arreglo[i];
	}
	
	
	/*ordenamiento por burbuja*/
	int aux = 0; 
	for (int i = 0; i < len ; i++) { 
		for (int j = 0; j  < len; j++) { 
			
			if (arreglo[j] > arreglo[i] ){ 
			
				aux = arreglo[i]; 
				arreglo[i] = arreglo[j];
				arreglo[j] = aux; 
			}
		}
	}
	
	
	for (int i = 0 ; i < len; i++) { 
		cout << arreglo[i] <<" | " ;
	}
	
	
	
	return 0 ; 
	
	
}

int main() { 

	/*invertir un array: 
		si me dan 5 4 8 9 6 
		
		que el programa  
		muesrte por pantalla 
		6 9 8 4 5
	 */
	 
	int len = 5 ;
	int arreglo[len]; 
	
	for (int i = 0 ; i < len; i++) { 
		cout << "Ingrese un numero paa la posicion " << i<< endl; 
		cin >> arreglo[i];
	}
	int arrayCopia[len] ; 
	int jAuxiliar = 0; 
	
	for (int i = len-1 ; i >=0; i--) { 
	
		arrayCopia[jAuxiliar] = arreglo[i]; 
		jAuxiliar++;
	//	cout << arreglo[i] <<" | " ;
	
	
	}
	for (int i = 0 ; i < len; i++) { 
	cout << arrayCopia[i] <<" | " ;
	
	}
	
	 
}
