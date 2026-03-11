// ============================================================
// Ejercicio 2: Lectura de Datos del Usuario
// Materia: Programacion 1 - UNIAT
// ============================================================
//
// INSTRUCCIONES:
// Pide al usuario que ingrese los siguientes datos:
//   - Nombre       (string)
//   - Edad         (int)
//   - Estatura     (float, en metros)
//   - Es estudiante (bool: el usuario escribe 1 o 0)
//
// Despues de leer todos los datos, muestra un resumen
// formateado con la informacion ingresada.
//
// EJEMPLO DE INTERACCION:
//   Ingresa tu nombre: Maria
//   Ingresa tu edad: 19
//   Ingresa tu estatura en metros: 1.65
//   Eres estudiante? (1=Si, 0=No): 1
//
//   === Resumen de Datos ===
//   Nombre:     Maria
//   Edad:       19 anos
//   Estatura:   1.65 metros
//   Estudiante: Si
// ============================================================

// --- Librerias necesarias ---
#include <iostream>
#include <string>

using namespace std;

int main() {

    // ----------------------------------------------------
    // PASO 1: Declara las variables donde guardaras
    //         los datos que el usuario va a ingresar.
    // ----------------------------------------------------

    // Variable para el nombre del usuario (tipo string)
    string nombre = "";

    // Variable para la edad (tipo int)
    int edad = 0;

    // Variable para la estatura en metros (tipo float)
    float estatura = 0.0f;

    // Variable para saber si es estudiante (tipo bool)
    // El usuario escribe 1 (true) o 0 (false)
    bool es_estudiante = false;

    // ----------------------------------------------------
    // PASO 2: Pide al usuario que ingrese cada dato
    //         usando cout para mostrar el mensaje y
    //         cin para leer la respuesta.
    // ----------------------------------------------------

    // --- Leer el nombre ---
    // IMPORTANTE: Para leer un string que puede tener espacios,
    // usamos getline(cin, variable) en lugar de cin >> variable.
    // cin >> solo lee hasta el primer espacio.
    cout << "Ingresa tu nombre: ";
    getline(cin, nombre);  // Lee toda la linea, incluyendo espacios

    // --- Leer la edad ---
    // Para tipos numericos (int, float, double) si usamos cin >>
    cout << "Ingresa tu edad: ";
    // ESCRIBE TU CODIGO AQUI: usa cin >> para leer 'edad'

    // --- Leer la estatura ---
    cout << "Ingresa tu estatura en metros: ";
    // ESCRIBE TU CODIGO AQUI: usa cin >> para leer 'estatura'

    // --- Leer si es estudiante ---
    cout << "Eres estudiante? (1=Si, 0=No): ";
    // ESCRIBE TU CODIGO AQUI: usa cin >> para leer 'es_estudiante'

    // ----------------------------------------------------
    // PASO 3: Muestra el resumen con los datos ingresados.
    // ----------------------------------------------------

    // Imprime una linea en blanco para separar la entrada de la salida
    cout << endl;

    // Imprime el encabezado del resumen
    cout << "=== Resumen de Datos ===" << endl;

    // Imprime el nombre:
    cout << "Nombre:     " << nombre << endl;

    // Imprime la edad con la unidad "anos":
    // ESCRIBE TU CODIGO AQUI:

    // Imprime la estatura con la unidad "metros":
    // ESCRIBE TU CODIGO AQUI:

    // Imprime si es estudiante o no.
    // PISTA: no imprimas la variable bool directamente (mostraria 1 o 0).
    // En su lugar, usa un if/else para imprimir "Si" o "No":
    //
    //   if (es_estudiante) {
    //       cout << "Estudiante: Si" << endl;
    //   } else {
    //       cout << "Estudiante: No" << endl;
    //   }
    //
    // ESCRIBE TU CODIGO AQUI:

    return 0;
}
