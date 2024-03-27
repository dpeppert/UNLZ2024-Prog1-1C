#include <iostream> 
#include <string>

//se define la constante PI para no escribirla en todos lados
#define PI = 3.1415;


using namespace std;
/*
    El siguiente programa muestra cómo mostrar mensajes por pantalla y como solitar valores por pantalla
*/
int main() { 


    //Inicialización de Variables
    /*
        Las variables se declaran de la siguiente manera: 
            [TipoDatoVariable] [NombreVariable] = [ValorInicialVariable];


        ejemplos: 
            bool bandera = false;
            int numero1 = 0; 
            short numeroChico = 4;
            long numeroGrande = 3;
            float numeroConDecimales = 10.45;
            char caracter = 'C';
    */
   int numero1 = 0;
    
    //mostrar mensajes por pantalla con el comando cout --> "console out"
    cout <<"Ingrese un número: " << endl;

    //el  valor ingresado a continuación por teclado se guardará en la variable "numero1" usando el comando cin "console in"
    cin >> numero1;

    //Mostrar un mensaje por pantalla con el valor ingresado previamente y guardado en la variable "numero1"
    cout << "El numero ingresado fue: " << numero1 << endl;

    return 0;

}
