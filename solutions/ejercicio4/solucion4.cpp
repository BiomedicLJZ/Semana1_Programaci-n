// ============================================================
// SOLUCION - Ejercicio 4: Conversor de Temperatura
// Materia: Programacion 1 - UNIAT
// Archivo: solutions/ejercicio4/solucion4.cpp
// ============================================================
// USO EXCLUSIVO DEL PROFESOR
// ============================================================

#include <iostream>

using namespace std;

int main() {

    // ----------------------------------------------------------
    // Declaracion de variables
    // Usamos double para mayor precision en los calculos
    // ----------------------------------------------------------

    double celsius    = 0.0;  // Temperatura ingresada por el usuario
    double fahrenheit = 0.0;  // Resultado de la conversion a Fahrenheit
    double kelvin     = 0.0;  // Resultado de la conversion a Kelvin

    // ----------------------------------------------------------
    // Lectura de la temperatura en Celsius
    // ----------------------------------------------------------

    cout << "=== Conversor de Temperatura ===" << endl;
    cout << "Ingresa la temperatura en Celsius: ";
    cin >> celsius;

    // ----------------------------------------------------------
    // Aplicacion de las formulas de conversion
    //
    // Formula Fahrenheit: F = (C * 9.0 / 5.0) + 32.0
    //   Se escribe 9.0 y 5.0 (no 9 y 5) para que la division
    //   sea entre doubles y no entre enteros. Si escribieramos
    //   9 / 5, C++ calcularia 1 (division entera), no 1.8.
    //
    // Formula Kelvin: K = C + 273.15
    //   El cero absoluto es -273.15 grados Celsius.
    // ----------------------------------------------------------

    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    kelvin     = celsius + 273.15;

    // ----------------------------------------------------------
    // Impresion de los resultados
    // ----------------------------------------------------------

    cout << endl;
    cout << "Resultados:" << endl;
    cout << celsius << " grados Celsius equivalen a:" << endl;
    cout << "  Fahrenheit: " << fahrenheit << endl;
    cout << "  Kelvin:     " << kelvin     << endl;

    return 0;
}

// ----------------------------------------------------------
// EJEMPLOS DE INTERACCION:
//
// Ejemplo 1 (punto de ebullicion del agua):
//   Ingresa la temperatura en Celsius: 100
//   Resultados:
//   100 grados Celsius equivalen a:
//     Fahrenheit: 212
//     Kelvin:     373.15
//
// Ejemplo 2 (temperatura corporal):
//   Ingresa la temperatura en Celsius: 37
//   Resultados:
//   37 grados Celsius equivalen a:
//     Fahrenheit: 98.6
//     Kelvin:     310.15
//
// Ejemplo 3 (cero absoluto):
//   Ingresa la temperatura en Celsius: -273.15
//   Resultados:
//   -273.15 grados Celsius equivalen a:
//     Fahrenheit: -459.67
//     Kelvin:     0
// ----------------------------------------------------------
