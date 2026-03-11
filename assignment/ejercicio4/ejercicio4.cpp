// ============================================================
// Ejercicio 4: Conversor de Temperatura
// Materia: Programacion 1 - UNIAT
// ============================================================
//
// INSTRUCCIONES:
// Escribe un programa que:
//   1. Le pida al usuario una temperatura en grados Celsius
//   2. Calcule su equivalente en Fahrenheit y en Kelvin
//   3. Muestre los tres valores en pantalla con sus unidades
//
// FORMULAS:
//   Fahrenheit = (Celsius * 9.0 / 5.0) + 32.0
//   Kelvin     = Celsius + 273.15
//
// EJEMPLO DE INTERACCION:
//   === Conversor de Temperatura ===
//   Ingresa la temperatura en Celsius: 100
//
//   Resultados:
//   100 grados Celsius equivalen a:
//     Fahrenheit: 212
//     Kelvin:     373.15
//
// PISTA:
//   Usa el tipo double para todas las variables de temperatura.
//   Escribe la formula directamente con los operadores:
//     *  multiplicacion
//     /  division
//     +  suma
//
//   Ejemplo de como escribir la formula en C++:
//     fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
//
//   Nota: es importante escribir 9.0 y 5.0 (con punto decimal)
//   en lugar de 9 y 5 (enteros), para que el resultado
//   incluya decimales correctamente.
// ============================================================

// --- Librerias necesarias ---
#include <iostream>

using namespace std;

int main() {

    // ----------------------------------------------------
    // PASO 1: Declara las variables de temperatura
    // ----------------------------------------------------

    // Variable para la temperatura en Celsius (ingresada por el usuario)
    double celsius = 0.0;

    // Variable para el resultado en Fahrenheit
    double fahrenheit = 0.0;

    // Variable para el resultado en Kelvin
    double kelvin = 0.0;

    // ----------------------------------------------------
    // PASO 2: Muestra el titulo y pide la temperatura
    // ----------------------------------------------------

    cout << "=== Conversor de Temperatura ===" << endl;
    cout << "Ingresa la temperatura en Celsius: ";

    // ESCRIBE TU CODIGO AQUI: lee 'celsius' con cin >>

    // ----------------------------------------------------
    // PASO 3: Aplica las formulas de conversion
    //
    // Formula Fahrenheit: fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    // Formula Kelvin:     kelvin     = celsius + 273.15;
    // ----------------------------------------------------

    // ESCRIBE TU CODIGO AQUI: calcula fahrenheit

    // ESCRIBE TU CODIGO AQUI: calcula kelvin

    // ----------------------------------------------------
    // PASO 4: Muestra los resultados con sus etiquetas
    // ----------------------------------------------------

    cout << endl;
    cout << "Resultados:" << endl;
    cout << celsius << " grados Celsius equivalen a:" << endl;

    // Imprime Fahrenheit:
    // ESCRIBE TU CODIGO AQUI:

    // Imprime Kelvin:
    // ESCRIBE TU CODIGO AQUI:

    return 0;
}
