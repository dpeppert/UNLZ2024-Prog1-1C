#include <iostream>
#include <string>

using namespace std; 

void restar2Numeros(int numero1, int numero2) { 

	int result = numero1 - numero2; 
	  
}
int SumaDeDosNumeros( int numero1, int numero2 ) { 
 	  int result = numero1+numero2; 
 
	  return result ;
}

int main() { 

	int valor1 = 4; 
	int valor2 = 6;
	int resultado = SumaDeDosNumeros(valor1, valor2);
   
   int valor3 = 14; 
   int valor4 = 12; 
   
   int resultado2 = SumaDeDosNumeros(valor3, valor4);
   
    return 0;

}

