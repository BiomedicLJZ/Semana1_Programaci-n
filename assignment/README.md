# Tarea: Tipos de Datos Primitivos y Entrada/Salida en C++

## Instrucciones Generales

Lee con atencion cada ejercicio antes de comenzar a programar. Completa los archivos `.cpp` que se encuentran en cada carpeta de ejercicio. No borres los comentarios que ya estan en las plantillas: te guiaran para saber que debes escribir.

**Fecha de entrega:** Consulta el calendario del curso en la plataforma.

---

## Objetivos de Aprendizaje

Al terminar esta tarea, el estudiante sera capaz de:

1. Declarar variables de los tipos de datos primitivos de C++: `int`, `float`, `double`, `char`, `bool` y `string`.
2. Asignar valores a variables y mostrarlos en pantalla usando `cout`.
3. Leer datos del usuario desde el teclado usando `cin`.
4. Escribir la estructura basica de un programa en C++ correctamente.
5. Realizar operaciones aritmeticas sencillas (suma, resta, multiplicacion, division).
6. Convertir valores entre unidades usando formulas matematicas simples.

---

## Descripcion de los Ejercicios

---

### Ejercicio 1 - Declaracion y Visualizacion de Variables

**Archivo:** `assignment/ejercicio1/ejercicio1.cpp`

**Descripcion:**
Declara una variable de cada tipo de dato primitivo, asignale un valor directamente en el codigo (sin pedirlo al usuario) e imprime cada variable en pantalla con una etiqueta descriptiva.

**Tipos que debes usar:**
- `int` (numero entero)
- `float` (numero decimal de precision simple)
- `double` (numero decimal de precision doble)
- `char` (un solo caracter)
- `bool` (verdadero o falso)
- `string` (cadena de texto)

**Ejemplo de salida esperada:**
```
=== Mis Variables ===
Entero:   25
Float:    3.14
Double:   2.71828
Caracter: A
Booleano: 1
Texto:    Hola Mundo
```

**Puntaje:** 20 puntos

---

### Ejercicio 2 - Lectura de Datos del Usuario

**Archivo:** `assignment/ejercicio2/ejercicio2.cpp`

**Descripcion:**
Pide al usuario que ingrese su nombre, edad, estatura en metros y si es estudiante (1 para si, 0 para no). Luego muestra un resumen formateado con todos los datos ingresados.

**Datos a leer:**
| Variable    | Tipo     | Descripcion                        |
|-------------|----------|------------------------------------|
| nombre      | `string` | Nombre del usuario                 |
| edad        | `int`    | Edad en anos                       |
| estatura    | `float`  | Estatura en metros (ej: 1.75)      |
| es_estudiante | `bool` | 1 = Es estudiante, 0 = No lo es    |

**Ejemplo de interaccion:**
```
Ingresa tu nombre: Maria
Ingresa tu edad: 19
Ingresa tu estatura en metros: 1.65
Eres estudiante? (1=Si, 0=No): 1

=== Resumen de Datos ===
Nombre:     Maria
Edad:       19 anos
Estatura:   1.65 metros
Estudiante: Si
```

**Nota:** Para leer un `string` con espacios, usa `getline(cin, nombre)` en lugar de `cin >> nombre`. Consulta el archivo de plantilla para ver como hacerlo.

**Puntaje:** 20 puntos

---

### Ejercicio 3 - Calculadora Basica

**Archivo:** `assignment/ejercicio3/ejercicio3.cpp`

**Descripcion:**
Crea una calculadora sencilla. El programa debe pedir al usuario dos numeros y la operacion que desea realizar. Luego muestra el resultado.

**Menu de operaciones:**
```
1 - Suma
2 - Resta
3 - Multiplicacion
4 - Division
```

**Ejemplo de interaccion:**
```
=== Calculadora Basica ===
Ingresa el primer numero: 10
Ingresa el segundo numero: 4

Selecciona una operacion:
1 - Suma
2 - Resta
3 - Multiplicacion
4 - Division
Tu eleccion: 2

Resultado: 10 - 4 = 6
```

**Consideraciones importantes:**
- Usa variables de tipo `double` para los numeros, asi puedes trabajar con decimales.
- Para el menu, usa una variable de tipo `int`.
- Para mostrar distintos resultados segun la eleccion, usa `if` / `else if`.
- No es necesario manejar el caso de division entre cero para esta tarea (pero es buena practica).

**Puntaje:** 30 puntos

---

### Ejercicio 4 - Conversor de Temperatura

**Archivo:** `assignment/ejercicio4/ejercicio4.cpp`

**Descripcion:**
Escribe un programa que lea una temperatura en grados Celsius e imprima su equivalente en Fahrenheit y en Kelvin.

**Formulas a usar:**

```
Fahrenheit = (Celsius * 9.0 / 5.0) + 32.0
Kelvin     = Celsius + 273.15
```

**Ejemplo de interaccion:**
```
=== Conversor de Temperatura ===
Ingresa la temperatura en Celsius: 100

Resultados:
100 grados Celsius equivalen a:
  Fahrenheit: 212
  Kelvin:     373.15
```

**Puntaje:** 30 puntos

---

## Criterios de Evaluacion

| Criterio                                         | Puntaje |
|--------------------------------------------------|---------|
| Ejercicio 1: Variables y salida correcta         | 20 pts  |
| Ejercicio 2: Entrada de datos y resumen          | 20 pts  |
| Ejercicio 3: Calculadora con operaciones         | 30 pts  |
| Ejercicio 4: Conversor de temperatura            | 30 pts  |
| **Total**                                        | **100 pts** |

### Penalizaciones

- Codigo que no compila: **-10 puntos por ejercicio**
- Resultados incorrectos: **-5 a -15 puntos segun la gravedad**
- No seguir las instrucciones del ejercicio: **-5 puntos**
- Entregar despues de la fecha limite: **-10 puntos por dia de retraso**

---

## Instrucciones de Entrega

1. Asegurate de que todos tus archivos `.cpp` compilan sin errores.
2. Guarda tus cambios con `git add` y `git commit`.
3. Sube tu codigo a tu fork con `git push`.
4. En la plataforma del curso, entrega el enlace a tu repositorio de GitHub.

Consulta el archivo `CONTRIBUTING.md` en la raiz del repositorio para una guia detallada paso a paso.

---

## Consejos y Errores Comunes

### Consejos generales
- **Compila frecuentemente.** No escribas todo el codigo de una vez; compila y prueba cada parte pequena.
- **Lee el error del compilador.** El mensaje de error te dice exactamente que linea tiene el problema.
- **Usa comentarios.** Anota que hace cada parte de tu codigo mientras lo escribes.

### Errores comunes a evitar

| Error                              | Como evitarlo                                                       |
|------------------------------------|---------------------------------------------------------------------|
| Olvidar el punto y coma `;`        | Cada instruccion termina con `;` en C++                             |
| Usar `=` en vez de `==` al comparar | `=` asigna, `==` compara. Usa `==` dentro de `if`                  |
| Dividir enteros y perder decimales  | Usa `double` o escribe `9.0 / 5.0` en lugar de `9 / 5`             |
| `cin >>` no lee espacios en strings | Usa `getline(cin, variable)` para leer frases completas             |
| Olvidar `#include <string>`        | Necesitas este include para usar el tipo `string`                   |
| Variables no inicializadas         | Siempre asigna un valor inicial a tus variables                     |
| Confundir `char` con `string`      | `char` es un solo caracter (`'A'`), `string` es texto (`"Hola"`)   |

### Sobre el tipo `bool`
Cuando imprimes un `bool` con `cout`, C++ muestra `1` para `true` y `0` para `false`. Si quieres mostrar "Si" o "No", usa un `if`:
```cpp
if (es_estudiante) {
    cout << "Si" << endl;
} else {
    cout << "No" << endl;
}
```
