#include <iostream>
#include <string>

using namespace std; 

int suma(int numero1, int numero2 ); 



int main() { 


	int num1 = 2; 
	int num2 = 4; 
	
    int resultado = suma(num1, num2);
     int resultado2 = suma(num1, num1);
    int resultado3 = suma(num2, num2);
    int resultado4 = suma(num2, num1);
   
    cout << resultado<< resultado2<< resultado3 << resultado4; 
	return 0; 

}


int suma(int numero1, int numero2 ) { 

	return numero1 + numero2; 

}
