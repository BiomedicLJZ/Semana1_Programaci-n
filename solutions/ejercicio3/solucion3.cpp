// ============================================================
// SOLUCION - Ejercicio 3: Calculadora Basica
// Materia: Programacion 1 - UNIAT
// Archivo: solutions/ejercicio3/solucion3.cpp
// ============================================================
// USO EXCLUSIVO DEL PROFESOR
// ============================================================

#include <iostream>

using namespace std;

int main() {

    // ----------------------------------------------------------
    // Declaracion de variables
    // ----------------------------------------------------------

    // Usamos double para los numeros, asi soportamos decimales
    double numero1 = 0.0;
    double numero2 = 0.0;
    double resultado = 0.0;

    // Entero para la eleccion del menu
    int eleccion = 0;

    // ----------------------------------------------------------
    // Lectura de los dos numeros
    // ----------------------------------------------------------

    cout << "=== Calculadora Basica ===" << endl;

    cout << "Ingresa el primer numero: ";
    cin >> numero1;

    cout << "Ingresa el segundo numero: ";
    cin >> numero2;

    // ----------------------------------------------------------
    // Menu de operaciones
    // ----------------------------------------------------------

    cout << endl;
    cout << "Selecciona una operacion:" << endl;
    cout << "1 - Suma" << endl;
    cout << "2 - Resta" << endl;
    cout << "3 - Multiplicacion" << endl;
    cout << "4 - Division" << endl;
    cout << "Tu eleccion: ";
    cin >> eleccion;

    cout << endl;

    // ----------------------------------------------------------
    // Calculo y presentacion del resultado segun la eleccion
    //
    // Usamos if / else if para verificar cual opcion eligio
    // el usuario y ejecutar la operacion correspondiente.
    // El operador == compara si dos valores son iguales.
    // ----------------------------------------------------------

    if (eleccion == 1) {
        // Suma: se usa el operador +
        resultado = numero1 + numero2;
        cout << "Resultado: " << numero1 << " + " << numero2
             << " = " << resultado << endl;

    } else if (eleccion == 2) {
        // Resta: se usa el operador -
        resultado = numero1 - numero2;
        cout << "Resultado: " << numero1 << " - " << numero2
             << " = " << resultado << endl;

    } else if (eleccion == 3) {
        // Multiplicacion: se usa el operador *
        resultado = numero1 * numero2;
        cout << "Resultado: " << numero1 << " * " << numero2
             << " = " << resultado << endl;

    } else if (eleccion == 4) {
        // Division: se usa el operador /
        // Nota: si numero2 es 0, la division no esta definida.
        // Para este ejercicio asumimos que el usuario no divide entre cero.
        resultado = numero1 / numero2;
        cout << "Resultado: " << numero1 << " / " << numero2
             << " = " << resultado << endl;

    } else {
        // Si el usuario escribe un numero fuera del rango 1-4
        cout << "Opcion invalida. Por favor elige un numero del 1 al 4." << endl;
    }

    return 0;
}

// ----------------------------------------------------------
// EJEMPLO DE INTERACCION (opcion 2 - Resta):
//
// === Calculadora Basica ===
// Ingresa el primer numero: 10
// Ingresa el segundo numero: 4
//
// Selecciona una operacion:
// 1 - Suma
// 2 - Resta
// 3 - Multiplicacion
// 4 - Division
// Tu eleccion: 2
//
// Resultado: 10 - 4 = 6
// ----------------------------------------------------------
