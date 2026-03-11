// ============================================================
// Ejercicio 3: Calculadora Basica
// Materia: Programacion 1 - UNIAT
// ============================================================
//
// INSTRUCCIONES:
// Crea una calculadora que:
//   1. Lea dos numeros del usuario (tipo double)
//   2. Muestre un menu con 4 operaciones
//   3. Lea la eleccion del usuario (tipo int)
//   4. Calcule y muestre el resultado de la operacion elegida
//
// MENU:
//   1 - Suma
//   2 - Resta
//   3 - Multiplicacion
//   4 - Division
//
// EJEMPLO DE INTERACCION:
//   === Calculadora Basica ===
//   Ingresa el primer numero: 10
//   Ingresa el segundo numero: 4
//
//   Selecciona una operacion:
//   1 - Suma
//   2 - Resta
//   3 - Multiplicacion
//   4 - Division
//   Tu eleccion: 2
//
//   Resultado: 10 - 4 = 6
//
// PISTA: Usa if / else if para revisar cual operacion eligio
//        el usuario y calcular el resultado correspondiente.
// ============================================================

// --- Librerias necesarias ---
#include <iostream>
#include <string>

using namespace std;

int main() {

    // ----------------------------------------------------
    // PASO 1: Declara las variables necesarias
    // ----------------------------------------------------

    // Dos numeros para operar (usamos double para admitir decimales)
    double numero1 = 0.0;
    double numero2 = 0.0;

    // Variable para guardar el resultado de la operacion
    double resultado = 0.0;

    // Variable para la eleccion del menu (numero entero del 1 al 4)
    int eleccion = 0;

    // ----------------------------------------------------
    // PASO 2: Muestra el titulo y pide los dos numeros
    // ----------------------------------------------------

    cout << "=== Calculadora Basica ===" << endl;

    // Pide el primer numero
    cout << "Ingresa el primer numero: ";
    // ESCRIBE TU CODIGO AQUI: lee numero1 con cin >>

    // Pide el segundo numero
    cout << "Ingresa el segundo numero: ";
    // ESCRIBE TU CODIGO AQUI: lee numero2 con cin >>

    // ----------------------------------------------------
    // PASO 3: Muestra el menu de operaciones y lee
    //         la eleccion del usuario
    // ----------------------------------------------------

    cout << endl;
    cout << "Selecciona una operacion:" << endl;
    cout << "1 - Suma" << endl;
    cout << "2 - Resta" << endl;
    cout << "3 - Multiplicacion" << endl;
    cout << "4 - Division" << endl;
    cout << "Tu eleccion: ";
    // ESCRIBE TU CODIGO AQUI: lee 'eleccion' con cin >>

    // ----------------------------------------------------
    // PASO 4: Calcula el resultado segun la eleccion
    //
    // Usa if / else if de la siguiente forma:
    //
    //   if (eleccion == 1) {
    //       resultado = numero1 + numero2;
    //   } else if (eleccion == 2) {
    //       resultado = numero1 - numero2;
    //   } else if (...) {
    //       ...
    //   }
    //
    // Recuerda: == es para comparar, = es para asignar.
    // ----------------------------------------------------

    // ESCRIBE TU CODIGO AQUI: el bloque if / else if completo

    // ----------------------------------------------------
    // PASO 5: Muestra el resultado
    //
    // Ejemplo de salida para la suma:
    //   cout << "Resultado: " << numero1 << " + " << numero2
    //        << " = " << resultado << endl;
    //
    // Necesitas un cout diferente para cada operacion,
    // dentro de cada bloque if correspondiente.
    // O puedes calcularlo primero y mostrar el resultado al final.
    // ----------------------------------------------------

    // ESCRIBE TU CODIGO AQUI: muestra el resultado con cout

    return 0;
}
