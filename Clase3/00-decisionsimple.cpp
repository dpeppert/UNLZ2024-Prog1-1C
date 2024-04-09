#include <iostream>
#include <string>

using namespace std; 

//El siguiente programa es un ejemplo de estructura de decisión simple
int main() { 

    //declaración de variables
    int valor = 0;
    bool valorPositivo = false;
    bool valorPar = false;

    cout << "Ingrese un número:" << endl;

    cin >> valor;

    valorPositivo = (valor > 0);
    valorPar = (valor % 2 == 0);
    
    if (valorPar){ 
        cout << "El número ingresado es par"  << endl;
    }else {
        cout << "El número ingresado es impar"  << endl;
    }

    if (valorPositivo){ 
        cout << "El número ingresado es positivo" << endl;
    } else if (valor == 0) { 
        cout << "El número ingrsado es 0" << endl;
    } else {
        cout << "El número ingresado es negativo" << endl;
    }



    return 0;
}