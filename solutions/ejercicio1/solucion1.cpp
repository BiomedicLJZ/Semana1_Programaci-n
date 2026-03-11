// ============================================================
// SOLUCION - Ejercicio 1: Declaracion y Visualizacion de Variables
// Materia: Programacion 1 - UNIAT
// Archivo: solutions/ejercicio1/solucion1.cpp
// ============================================================
// USO EXCLUSIVO DEL PROFESOR
// ============================================================

// iostream permite usar cout y cin
#include <iostream>

// string permite usar el tipo de dato string
#include <string>

// Evita escribir "std::" antes de cout, cin, endl, string, etc.
using namespace std;

int main() {

    // ----------------------------------------------------------
    // Declaracion e inicializacion de variables de cada tipo
    // ----------------------------------------------------------

    // int: numero entero (sin decimales)
    int mi_entero = 25;

    // float: numero decimal de precision simple (~7 digitos)
    // El sufijo 'f' le indica al compilador que es un float
    float mi_float = 3.14f;

    // double: numero decimal de precision doble (~15 digitos)
    // Es el tipo decimal por defecto en C++
    double mi_double = 2.71828;

    // char: almacena exactamente un caracter
    // Se escribe entre comillas simples
    char mi_caracter = 'A';

    // bool: solo puede ser true (verdadero) o false (falso)
    // En pantalla se muestra como 1 (true) o 0 (false)
    bool mi_booleano = true;

    // string: cadena de texto de longitud variable
    // Se escribe entre comillas dobles
    string mi_texto = "Hola Mundo";

    // ----------------------------------------------------------
    // Impresion de cada variable con una etiqueta descriptiva
    // ----------------------------------------------------------

    // Encabezado decorativo
    cout << "=== Mis Variables ===" << endl;

    // Imprime el entero
    cout << "Entero:   " << mi_entero << endl;

    // Imprime el float
    cout << "Float:    " << mi_float << endl;

    // Imprime el double
    cout << "Double:   " << mi_double << endl;

    // Imprime el caracter
    cout << "Caracter: " << mi_caracter << endl;

    // Imprime el booleano (muestra 1 para true, 0 para false)
    cout << "Booleano: " << mi_booleano << endl;

    // Imprime el string
    cout << "Texto:    " << mi_texto << endl;

    // Indica al sistema operativo que el programa termino sin errores
    return 0;
}

// ----------------------------------------------------------
// SALIDA ESPERADA:
// === Mis Variables ===
// Entero:   25
// Float:    3.14
// Double:   2.71828
// Caracter: A
// Booleano: 1
// Texto:    Hola Mundo
// ----------------------------------------------------------
