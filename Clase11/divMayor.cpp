/*
Armar un programa que solicite al usuario 2 numerosç
invocar a una funcion que detecte el mayor de los dos numeros, 
y al mayor dividirlo por el menor 

*/
#include <iostream>
#include <string>

using namespace std; 

//la firma de la funciòn 

float divMayor(int num1, int num2){
 	float resultado = 0; 
	if (num1 > num2) { 
		resultado = (float) num1 / (float)num2; 
	} else { 
		resultado = (float)num2/(float)num1;
	}
	 
	return resultado; 
}

int main() { 
	cout << "Ingrese un numero"; 
	int numero1 = 0; 
	cin >> numero1; 
	
	cout << endl << "ingrese el siguiente numero: ";
	int numero2 = 0; 
	cin >> numero2; 
	
	float resultado = divMayor(numero1, numero2);
	
	cout <<  endl<< "El resultado es " << resultado; 
	
} 


