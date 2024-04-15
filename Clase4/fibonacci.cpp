#include <iostream>
#include <string>

using namespace std; 


//contadores
int main () { 
	
     int contador = 0;
     int valorDeCorte = 0;
//     int antePenultimoValor = 0;
     int penultimo = 0;
     int ultimo = 1;
     int variable = 0;
     int siguiente = 0;
     cout << penultimo << endl;
     cout << ultimo << endl;
     
     cout << "Ingrese un valor de corte: "<< endl;
     cin >> valorDeCorte;
     
	while (siguiente < valorDeCorte) { 
 
		siguiente = ultimo + penultimo;
		cout << "siguiente " <<siguiente << endl; 
		ultimo = penultimo; 
        penultimo = siguiente; 
 
		cout << siguiente << endl;					
		contador = contador + 1; 
		
		
	}
	
	
	cout << "Cantidad de ciclos recorridos: " << contador;

}

