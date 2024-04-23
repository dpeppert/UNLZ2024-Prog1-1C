//
#include <iostream>
#include <string>

using namespace std; 

/*Desarrollar un programa que calcule el factorial de un 
número usando un ciclo*/
int main() { 


 /*
 3! = 1 * 2* 3; 
 4! = 1 * 2 *3* 4; 
 8! = 1 * 2* *3 *4 *5 *6 *7 *8; 
 
 
 */
 
 float numero = 0; 
 float contador = 1; 
 float factorial = 1; 
 cout << "Ingrese un valor para calcular su factorial" << endl; 
 cin >> numero; 
 
 if (numero  > 0 ) {

   while (contador <  numero)  { 
 	cout << "El valor del contador es: " << contador << endl;
 		
 	contador = contador + 1; 
	factorial = factorial * contador ;
	
   }
	cout << " el factorial es: " << factorial; 
 	
 	
 }
 
 
}
