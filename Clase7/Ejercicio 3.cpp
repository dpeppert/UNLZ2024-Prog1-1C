/*
	Pedir por pantalla 5 valores enteros 
	y guardarlos en un array
	
	Mostrar por pantalla 
	la posici�n que corresponde a los 
	numeros impares 
		
	Mostrar por pantalla 
	los numeros que sean 
	divisibles por 3 
		
*/


#include <iostream>
#include <string>

using namespace std; 


int main() { 

 int cantidadValores = 0; 
 cout << "Ingrese la cantidad de Valores: ";
 cin >> cantidadValores;  
 
int valores [cantidadValores]; 

for (int i = 0 ;  i < cantidadValores; i ++ ){
	
	cout << "Ingrese el valor que corresponde a la posici�n " << i << endl; 
	cin >> valores[i]; 
	
}

for ( int i = 0; i < cantidadValores; i ++ ) { 
	if ( valores [i] % 2 != 0) { 
	 	cout << "El valor que se encuentra en la posici�n  " << i ; 
		 cout << "("<< valores[i] << ") es impar" << endl<< endl; 
	}
	
	
	if ( valores [i] % 3 == 0) { 
	 	cout << "El valor que se encuentra en la posici�n  " << i ; 
		 cout << "("<< valores[i] << ") es multiplo de 3" << endl<< endl; ; 
	}
	
	/*i corresponde a la posici�n del vector
	valores[i] corresponde al valor que est� en esa posici�n
	*/
}

return 0;
}
