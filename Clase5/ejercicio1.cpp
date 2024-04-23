#include <iostream>
#include <string>

using namespace std; 


/**Escribir un programa que cuente hacia atrás desde un 
//número dado hasta cero.
*/
int main () {

    int numero = 0; 

    cout << "Ingrese un numero";
    cin >> numero; 

 while (numero  != 0) { 
    cout << "Numero: " << numero << endl; 
	
	if (numero > 0 )
   		 numero = numero - 1; 
 	else 
 		numero = numero +1;
 
 }
 /*
 while (numero > 0) { 
 	numero --; 
 	
 }
 while (numero< 0) { 
 numero ++;
 }*/
 

return 0; 
}
