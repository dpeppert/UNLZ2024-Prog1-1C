#include <iostream> 
#include <string>

using namespace std;


/*
    El siguiente programa muestra cómo utilizar un operador relacional, en este caso el igual: 
    La aplicación solicita el ingreso por teclado de dos valores, si son iguales muestra un mensaje indicándolo, de lo contrario informa 
    si el primer valor ingresado es menor o mayor respecto al segundo valor
*/
int main() { 


    //Inicialización de Variables
    int numero1 = 0;
    int numero2 = 0;
    //mostrar mensajes por pantalla con el comando cout --> "console out"
    cout <<"Ingrese un número: " << endl;

    //el  valor ingresado a continuación por teclado se guardará en la variable "numero1" usando el comando cin "console in"
    cin >> numero1;

    cout <<"Ingrese un segundo número: " << endl;

    //el  valor ingresado a continuación por teclado se guardará en la variable "numero1" usando el comando cin "console in"
    cin >> numero2;

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
    
    if (numero1 == numero2) { 
        cout << "Los números son iguales";
    }else { 
        if (numero1 < numero2) { 
           cout << "el primer número (" << numero1<< ") es menor que el segundo ("<< numero2 <<")";
        }else {
            cout << "el primer número (" << numero1<< ") es mayor que el segundo ("<< numero2 <<")";
        }
    }


    return 0;


}
