#include <iostream> 
#include <string>

using namespace std;


/*
    El siguiente programa muestra cómo utilizar un operador lógico
    Al momento de ingresar 2 datos, controla que ambos numeros sean pares o positivos
*/
int main() { 


    //Inicialización de Variables
    int numero1 = 0; 
    //mostrar mensajes por pantalla con el comando cout --> "console out"
    cout <<"Ingrese un número: " << endl;

    //el  valor ingresado a continuación por teclado se guardará en la variable "numero1" usando el comando cin "console in"
    cin >> numero1;

    bool esPar = (numero1 % 2 == 0); //guardo el valor de la premisa "El resto de numero1 / 2 es 0" en la variable "esPar"
    
    bool esPositivo = (numero1 > 0); //guardo el valor de la premisa "numero1 es mayor que 0" en la variable "esPositivo"

    /* Operador lógico AND (&&): El resultado de esta operación es verdadero si todas las premisas comprendidas  son verdaderas, 
                                de lo contrario es Falso*/

                                
    if (esPositivo && esPar) { 
        //Si es positivo y es par, muestro el mensaje;
        cout << "El numero ingresado es positivo y es par" << endl;
    }

    /* Operador lógico OR (||): El resultado de esta operación es Verdadero si al menos una de todas las premisas comprendidas es verdadera, 
                                de lo contrario es Falso */
    if (esPar || esPositivo) { 
        cout << "El numero ingresado es par o es positivo";
    }

    /* Operador lógico NOT (!): También llamado "operador negador". El resultado de este operador es invertir el valor de verdad de la variable comprometida */
    if (!esPositivo) { 
        cout << "El numero NO es positivo";
    }

    //Las operaciones relacionales son aquellas que al utilizarse, el valor devuelto es un booleano:
    /*
        Operaciones relacionales:
            numero1 == numero2  <--- consulta por la igualdad de dos variables, en caso que sea cierto, el valor devuelto es "True", de lo contrario, es false
            numero1 < numero2   <--- pregunta si numero1 es menor a numero2
            numero1 > numero2   <--- pregunta si numero1 es mayor a numero2
            numero1 <= numero2  <--- pregunta si numero1 es menor o igual a numero2
            numero1 >= numero2  <--- pregunta si numero1 es mayor o igual a numero2
            numero1 != numero2  <--- pregunta si numero1 es distinto a numero2 
    */
     
  

    return 0;


}
