#include <iostream> 
#include <string>

using namespace std;
/*
    El siguiente programa muestra cómo hacer operacions aritméticas
*/
int main() { 


    //Inicialización de Variables
   int numero1 = 0;
    
    //mostrar mensajes por pantalla con el comando cout --> "console out"
    cout <<"Ingrese un número: " << endl;

    //el  valor ingresado a continuación por teclado se guardará en la variable "numero1" usando el comando cin "console in"
    cin >> numero1;

    //La siguiente operacion debe leerse de la siguiente forma: "La variable numero1 se multiplica por sí misma y el resultado se guarda en la variable cuadradoDeNumero"
    int cuadradoDeNumero = numero1 * numero1;
    //La variable numero1 es multiplicada x 2 y el resultado se guarda en la variable 'dobleDeNumero'
    int dobleDeNumero = numero1 * 2;

    int numeroMas10 = numero1 + 10;

    int numeroMenos4 = numero1 - 4;
    
    int mitadEnteraDeNumero = numero1 / 2;

    double mitadConDecimalesDeNumero = numero1 / (double)2;

    int restoDeUnaDivisionPor2 = numero1 % 2;

    //Se muestran todos los resultados
    cout << "El cuadrado del numero es: " << cuadradoDeNumero << endl;
    cout << "El doble del numero es: " << dobleDeNumero << endl;
    cout << "El numero mas 10 es: " << numeroMas10 << endl;
    cout << "El numero menos 4 es: " << numeroMenos4 << endl;
    cout << "La mitad del numero es: " << mitadEnteraDeNumero << endl;
    cout << "La mitad con decimales del numero es: " << mitadConDecimalesDeNumero << endl;
    cout << "El resto del numero dividido por 2 es: " << restoDeUnaDivisionPor2 << endl;
    
    return 0;


}
