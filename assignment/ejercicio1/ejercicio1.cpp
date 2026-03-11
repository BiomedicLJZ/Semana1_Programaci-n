// ============================================================
// Ejercicio 1: Declaracion y Visualizacion de Variables
// Materia: Programacion 1 - UNIAT
// ============================================================
//
// INSTRUCCIONES:
// Declara una variable de cada tipo de dato primitivo listado
// abajo, asignale un valor y luego imprime cada variable en
// pantalla con una etiqueta descriptiva usando cout.
//
// Tipos que DEBES usar:
//   int    -> numero entero (ejemplo: 25)
//   float  -> decimal de precision simple (ejemplo: 3.14f)
//   double -> decimal de precision doble  (ejemplo: 2.71828)
//   char   -> un solo caracter (ejemplo: 'A')
//   bool   -> verdadero o falso (true / false)
//   string -> cadena de texto (ejemplo: "Hola Mundo")
//
// SALIDA ESPERADA (los valores pueden ser los que tu elijas):
//   === Mis Variables ===
//   Entero:   25
//   Float:    3.14
//   Double:   2.71828
//   Caracter: A
//   Booleano: 1
//   Texto:    Hola Mundo
// ============================================================

// --- Librerias necesarias ---
// Incluye la libreria para entrada y salida (cin y cout)
#include <iostream>

// Incluye la libreria para usar el tipo string
#include <string>

// Permite usar cout, cin, endl sin escribir "std::" cada vez
using namespace std;

// --- Funcion principal del programa ---
int main() {

    // ----------------------------------------------------
    // PASO 1: Declara e inicializa tus variables
    // ----------------------------------------------------
    // Ejemplo de como declarar e inicializar una variable:
    //   int mi_variable = 10;
    //
    // Ahora declara TU PROPIA variable de tipo int:
    int mi_entero = 0;  // <-- Cambia el 0 por el valor que quieras

    // Declara una variable de tipo float:
    // (Nota: los literales float llevan una 'f' al final, ej: 3.14f)
    float mi_float = 0.0f;  // <-- Asigna un valor decimal

    // Declara una variable de tipo double:
    double mi_double = 0.0;  // <-- Asigna un valor decimal de mayor precision

    // Declara una variable de tipo char:
    // (Nota: los caracteres van entre comillas simples: 'A')
    char mi_caracter = ' ';  // <-- Pon una letra entre comillas simples

    // Declara una variable de tipo bool:
    // (Solo puede ser true o false)
    bool mi_booleano = false;  // <-- Cambia a true o deja en false

    // Declara una variable de tipo string:
    // (El texto va entre comillas dobles: "Hola")
    string mi_texto = "";  // <-- Escribe cualquier texto entre comillas dobles

    // ----------------------------------------------------
    // PASO 2: Imprime cada variable con cout
    // ----------------------------------------------------
    // Ejemplo de como imprimir una variable con etiqueta:
    //   cout << "Etiqueta: " << mi_variable << endl;
    //
    // El operador << encadena lo que quieres imprimir.
    // endl hace un salto de linea al final.

    // Imprime un encabezado decorativo
    cout << "=== Mis Variables ===" << endl;

    // Imprime la variable entera (ya esta hecho como ejemplo):
    cout << "Entero:   " << mi_entero << endl;

    // Ahora imprime las demas variables tu mismo:

    // Imprime mi_float con la etiqueta "Float:   "
    // ESCRIBE TU CODIGO AQUI:

    // Imprime mi_double con la etiqueta "Double:  "
    // ESCRIBE TU CODIGO AQUI:

    // Imprime mi_caracter con la etiqueta "Caracter:"
    // ESCRIBE TU CODIGO AQUI:

    // Imprime mi_booleano con la etiqueta "Booleano:"
    // ESCRIBE TU CODIGO AQUI:

    // Imprime mi_texto con la etiqueta "Texto:   "
    // ESCRIBE TU CODIGO AQUI:

    // ----------------------------------------------------
    // Todo programa en C++ debe terminar con return 0
    // para indicar que termino correctamente.
    // ----------------------------------------------------
    return 0;
}
