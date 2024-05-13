/*
Tenemos una billetera que tiene 10 billetes
pedirle al usuario que ingrese el valor 
nominal de cada uno de esos billetes
al finalizar, contar cuanto dinero tiene 
el usuario
*/

#include <iostream>
#include <string>

using namespace std;


int main() {
	const int cantidadBilletes = 10; 
	int billetera [cantidadBilletes];
	/*Le pedimos al usuario que 
	llene la billetera
	
	(Ciclo de ingresao de datos al array*/
	for (int i = 0; 
		    i < cantidadBilletes; 
			i = i +1) 
	{ 
		
		/*i es la variable que usamos 
		para hacer referencia a cada uno 
		de los elementos de la billetera
		tambien nos indica la posicion del elemento 
		en el array
		*/ 	
		i; 
		/*billetera es el array entero*/
		billetera;
		/*billetera[i] hace referencia a 
		cada elemento del array */
		billetera[i];
			
		cout << "Ingrese el billete numero: " << i +1  << endl;	
		
		cin >> billetera [i];	
	}
	
	/*ciclo de procesamiento*/
	int acumulador = 0 ; 
	/*Averiguamos cuanto dinero tiene el usuuario en su billetera*/
	for (int i = 0 ; i < cantidadBilletes ; i = i + 1) { 
		acumulador = acumulador + billetera [i];
	
	}
	
	/*Mostrar resultados*/
	cout << "Billetes ingresados:" << endl;
	
	cout << "Tenés " << acumulador << " Pesos" << endl;
		
	for (int i = 0; i < cantidadBilletes; i = i +1) { 
		cout << billetera[i] << " Pesos" << endl;
	}

	return 0; 
}

