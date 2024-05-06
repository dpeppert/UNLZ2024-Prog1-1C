/*
Definir un vector de strings para almacenar una 
lista de 3 nombres 

mostrar la lista de nombres por pantalla 

Mostrar aquellos nombres que tengan una letra en este caso la B 

*/


#include <iostream>
#include <string>

using namespace std; 


int main() { 

	const int cantNombres = 10;
	string nombres[cantNombres];
	/*ciclo de ingreso de datos en un array*/
	for (int i = 0; i < cantNombres ; i++) { 
		cout << "Ingrese un nombre para la posiciòn " << i << endl; 
		cin >> nombres[i]; 
		
	}
	
	/*segundo for de procesamiento*/
	for (int i = 0; i < cantNombres; i ++) { 
	 		/*accedenis ak vakir de cada uno de los elementos */
			 cout << nombres[i] << endl;
			 
			 for (int j = 0; j < nombres[i].length(); j++) { 
			 	/*accedemos a cada uno de los caracteres de la palabra 
				 almacenada en el elemento del vector*/

			     if (nombres[i][j] == 'b' || nombres[i][j] == 'B') { 
			     	cout << "Tiene una B" << endl;
			     	break; 
				 }
			 }
			   
			 
	} 
	
} 
