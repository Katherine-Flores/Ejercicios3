//
// Created by kathe on 24/03/2023.
//
#include <iostream>
using namespace std;

int edad, num1, num2, resultado;

void ejercicio1(){
    cout << "Ingrese su edad" << endl;
    cin >> edad;

    if (edad >= 0) {
        if (edad >= 18) {
            cout << "Usted es MAYOR de edad" << endl;
        } else {
            cout << "Usted es MENOR de edad" << endl;
        }
    } else {
        cout << "Error, no puede ingresar numeros negativos" << endl;
    }
}

void ejercicio2(){
    cout << "Ingrese el primer numero entero" << endl;
    cin >> num1;
    cout << "Ingrese el segundo numero entero" << endl;
    cin >> num2;

    if (num1 < num2){
        cout << num2 << " es el numero mayor de los dos numeros ingresados" << endl;
    }if(num2 < num1){
        cout << num1 << " es el numero mayor de los dos numeros ingresados" << endl;
    }else{
        cout << "Los dos numeros ingresados son iguales" << endl;
    }
}

void ejercicio3(){
    cout << "Ingrese un numero entero" << endl;
    cin >> num1;

    resultado = num1 % 2;

    if(resultado == 0){
        cout << "El numero ingresado es PAR" << endl;
    }else{
        cout << "El numero ingresado es IMPAR" << endl;
    }
}

void ejercicio4(){
    int i = 1, factorial = 1;
    cout << "Ingrese un numero entero" << endl;
    cin >> num1;

    while (i <= num1){
        factorial = factorial * i;
        i = i + 1;
    }
    cout << "El resultado de " << num1 << "! es de: " << factorial << endl;
}

void ejercicio5(){
    cout << "Ingrese un numero MAYOR a 10 y MENOR que 30" << endl;
    cin >> num1;

    if (num1 > 10 && num1 < 30){
        cout << "Los numeros impares del 1 al " << num1 << " son: ";
        for (int i = 1; i <= num1; ++i) {
            resultado = i % 2;
            if (resultado != 0){
                cout << i << ", ";
            }
        }
        cout << "\n";
    } else{
        cout << "Error, solo puede ingresar numeros MAYORES que 10 y MENORES que 30" << endl;
    }
}

void ejercicio6(){
    int i = 1;
    cout << "Ingrese un numero MAYOR a 10 y MENOR que 30" << endl;
    cin >> num1;

    if (num1 > 10 && num1 < 30){
        cout << "Los numeros impares del 1 al " << num1 << " son: ";
        while (i <= num1){
            resultado = i % 2;
            if (resultado != 0){
                cout << i << ", ";
            }
            i = i + 1;
        }
        cout << "\n";
    } else{
        cout << "Error, solo puede ingresar numeros MAYORES que 10 y MENORES que 30" << endl;
    }
}

void ejercicio7(){
    cout << "Ingrese un numero entero entre el 1 y el 5" << endl;
    cin >> num1;

    switch (num1) {
        case 1:
            cout << "El numero ingresado representa a LUNES" << endl;
            break;
        case 2:
            cout << "El numero ingresado representa a MARTES" << endl;
            break;
        case 3:
            cout << "El numero ingresado representa a MIERCOLES" << endl;
            break;
        case 4:
            cout << "El numero ingresado representa a JUEVES" << endl;
            break;
        case 5:
            cout << "El numero ingresado representa a VIERNES" << endl;
            break;
        default:
            cout << "Error, solo puede ingresar numeros entre el 1 y el 5" << endl;
            break;
    }
}
