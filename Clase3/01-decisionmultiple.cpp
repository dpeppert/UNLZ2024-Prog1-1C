#include <iostream>
#include <string>

using namespace std;

//El siguiente programa ejemplifica la estructura de una decisión múltiple
int main(){

    //Declaración de Variables
    int valor = 0;
    int opcionSeleccionada = 0;
        
    int resultadoOpcion1 = 0;
    int resultadoOpcion2 = 0;
    float resultadoOpcion3 = 0;
    bool resultadoOpcion4 = 0;


    cout << "Ingrese un valor" << endl;
    cin >> valor; 

    cout << "Ahora Seleccione una opción" << endl << endl;

    cout << "1. Multiplicar el valor por sí mismo" << endl;
    cout << "2. Sumar el valor a sí mismo" << endl;
    cout << "3. Dividir el valor por 2" << endl;
    cout << "4. Consultar si el número es par" << endl;
    cout << "5. Salir" << endl;
    cout << "Cualquier otra opción: Salir" << endl;
    cin >> opcionSeleccionada;

    switch (opcionSeleccionada)
    {
        case 1:
            /* code */
            resultadoOpcion1 = valor * valor;
            cout << "El resultado es: " << resultadoOpcion1;
        break;
        case 2:
            resultadoOpcion2 = valor + valor; 
            cout << "El resultado es: " << resultadoOpcion2;

        break;    
        case 3:    
            //Observar las conversiones de tipos de dato para obtener un resultado del tipo Float 
            resultadoOpcion3 = (float)valor / (float) 2;
            cout << "El resultado es: " << resultadoOpcion3;
        break;
        case 4: 
            resultadoOpcion4 = (valor % 2 == 0);

            /*dentro de cada bloque, se pueden usar decisiones simples también*/
            if (resultadoOpcion4 == true) { 
                cout << "El valor ingresado es par";
            }else {
                cout << "El valor ingresado es impar";
            }
        case 5:
            return 0; 
        break;
        default:
            cout << "Opción ingresada incorrecta";
        break;
    }

}