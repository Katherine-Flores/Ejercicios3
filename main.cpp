#include <iostream>
#include "metodos.h"
using namespace std;

int main() {
    int opc;

    cout<< "Bienvenido al menu Principal" << endl;
    do {
        cout << "-------------- Elija una opcion --------------" << endl;
        cout << "[1] Determinar si es mayor o menor de edad" << endl;
        cout << "[2] Determinar el numero mayor" << endl;
        cout << "[3] Determinar si un numero es par o impar" << endl;
        cout << "[4] Calcular Factorial de un numero entero" << endl;
        cout << "[5] Determinar numeros impares en un rago dado (bucle for)" << endl;
        cout << "[6] Determinar numeros impares en un rago dado (bucle while)" << endl;
        cout << "[7] Determinar un dia de la semana en base a un numero" << endl;
        cout << "[0] salir" << endl;

        cin >> opc;

        switch (opc) {
            case 1:
                cout<< "Bienvenido al ejercicio 1" << endl;
                ejercicio1();
                break;
            case 2:
                cout<< "Bienvenido al ejercicio 2" << endl;
                ejercicio2();
                break;
            case 3:
                cout<< "Bienvenido al ejercicio 3" << endl;
                ejercicio3();
                break;
            case 4:
                cout<< "Bienvenido al ejercicio 4" << endl;
                ejercicio4();
                break;
            case 5:
                cout<< "Bienvenido al ejercicio 5" << endl;
                ejercicio5();
                break;
            case 6:
                cout<< "Bienvenido al ejercicio 6" << endl;
                ejercicio6();
                break;
            case 7:
                cout<< "Bienvenido al ejercicio 7" << endl;
                ejercicio7();
                break;
            case 0:
                cout<< "saliendo..." << endl;
                break;
            default:
                cout<< "Error, el numero que ingreso es incorrecto, intentelo nuevamente" << endl;
                break;
        }
    } while (opc != 0);
    return 0;
}
