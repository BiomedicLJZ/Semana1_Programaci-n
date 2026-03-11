// ============================================================
// SOLUCION - Ejercicio 2: Lectura de Datos del Usuario
// Materia: Programacion 1 - UNIAT
// Archivo: solutions/ejercicio2/solucion2.cpp
// ============================================================
// USO EXCLUSIVO DEL PROFESOR
// ============================================================

#include <iostream>
#include <string>

using namespace std;

int main() {

    // ----------------------------------------------------------
    // Declaracion de variables donde se guardaran los datos
    // ----------------------------------------------------------

    string nombre = "";
    int    edad = 0;
    float  estatura = 0.0f;
    bool   es_estudiante = false;

    // ----------------------------------------------------------
    // Lectura de datos del usuario
    // ----------------------------------------------------------

    // Leemos el nombre con getline para admitir nombres con espacios.
    // Si usaramos "cin >> nombre", solo leeria la primera palabra.
    cout << "Ingresa tu nombre: ";
    getline(cin, nombre);

    // Para tipos numericos usamos el operador >> de cin
    cout << "Ingresa tu edad: ";
    cin >> edad;

    cout << "Ingresa tu estatura en metros: ";
    cin >> estatura;

    // bool puede leerse con cin >>: el usuario escribe 1 o 0
    cout << "Eres estudiante? (1=Si, 0=No): ";
    cin >> es_estudiante;

    // ----------------------------------------------------------
    // Impresion del resumen
    // ----------------------------------------------------------

    // Linea en blanco para separar la entrada de la salida
    cout << endl;
    cout << "=== Resumen de Datos ===" << endl;

    cout << "Nombre:     " << nombre << endl;
    cout << "Edad:       " << edad << " anos" << endl;
    cout << "Estatura:   " << estatura << " metros" << endl;

    // Para mostrar "Si" o "No" en vez de 1 o 0, usamos un if/else
    cout << "Estudiante: ";
    if (es_estudiante) {
        cout << "Si" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}

// ----------------------------------------------------------
// EJEMPLO DE INTERACCION:
//
// Ingresa tu nombre: Maria Garcia
// Ingresa tu edad: 19
// Ingresa tu estatura en metros: 1.65
// Eres estudiante? (1=Si, 0=No): 1
//
// === Resumen de Datos ===
// Nombre:     Maria Garcia
// Edad:       19 anos
// Estatura:   1.65 metros
// Estudiante: Si
// ----------------------------------------------------------
