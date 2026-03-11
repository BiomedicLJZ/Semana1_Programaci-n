# Como Entregar Tu Tarea (Guia Paso a Paso)

Esta guia te explica como hacer fork del repositorio, clonar el codigo en tu computadora, completar los ejercicios y subir tu tarea para entregarla.

---

## Requisitos Previos

Antes de comenzar, asegurate de tener instalado:

1. **Git** - Descargalo en [https://git-scm.com/](https://git-scm.com/)
2. **Una cuenta de GitHub** - Registrate gratis en [https://github.com/](https://github.com/)
3. **Un compilador de C++** - Recomendamos g++ (viene con MinGW en Windows)
4. **Un editor de texto o IDE** - Visual Studio Code, Code::Blocks, o Dev-C++

---

## Paso 1: Hacer Fork del Repositorio

Un "fork" es tu copia personal del repositorio donde podras guardar tus cambios.

1. Abre el repositorio del profesor en GitHub.
2. Haz clic en el boton **"Fork"** que esta en la esquina superior derecha.
3. Selecciona tu cuenta de GitHub como destino.
4. Espera a que GitHub cree tu copia del repositorio.

Al terminar, tendras un repositorio en tu cuenta con la misma estructura que el del profesor.

---

## Paso 2: Clonar Tu Fork en Tu Computadora

"Clonar" significa descargar el repositorio a tu computadora para poder editarlo.

1. En tu fork de GitHub, haz clic en el boton verde **"Code"**.
2. Copia la URL que aparece (empieza con `https://github.com/tu-usuario/...`).
3. Abre una terminal (Command Prompt, PowerShell o Git Bash en Windows).
4. Navega a la carpeta donde quieres guardar el proyecto:
   ```bash
   cd Documentos
   ```
5. Clona el repositorio:
   ```bash
   git clone https://github.com/TU-USUARIO/TiposDatosyCpp.git
   ```
6. Entra a la carpeta del proyecto:
   ```bash
   cd TiposDatosyCpp
   ```

---

## Paso 3: Leer las Instrucciones de la Tarea

Antes de programar, lee el archivo con las instrucciones:

```
assignment/README.md
```

Ahi encontraras la descripcion completa de cada ejercicio, los ejemplos de salida esperada y los criterios de evaluacion.

---

## Paso 4: Completar los Ejercicios

Abre cada archivo de plantilla y escribe tu codigo donde se indica:

| Ejercicio | Archivo a Editar                          |
|-----------|-------------------------------------------|
| 1         | `assignment/ejercicio1/ejercicio1.cpp`    |
| 2         | `assignment/ejercicio2/ejercicio2.cpp`    |
| 3         | `assignment/ejercicio3/ejercicio3.cpp`    |
| 4         | `assignment/ejercicio4/ejercicio4.cpp`    |

### Como compilar y probar tu codigo

Desde la terminal, navega a la carpeta del ejercicio y compila:

```bash
# Ejemplo para el Ejercicio 1
cd assignment/ejercicio1
g++ ejercicio1.cpp -o ejercicio1

# Ejecutar en Windows
ejercicio1.exe

# Ejecutar en Linux o Mac
./ejercicio1
```

Repite el proceso para cada ejercicio. Asegurate de que el programa compile sin errores y que la salida sea la esperada.

---

## Paso 5: Guardar Tus Cambios con Git

Una vez que hayas completado y probado un ejercicio, guarda tus cambios:

```bash
# Ver que archivos cambiaste
git status

# Agregar los archivos modificados al "area de preparacion"
git add assignment/ejercicio1/ejercicio1.cpp

# Crear un commit (un punto de guardado) con un mensaje descriptivo
git commit -m "Completo ejercicio 1: declaracion de variables"
```

Puedes hacer un commit despues de cada ejercicio o uno solo al final con todos:

```bash
# Agregar todos los archivos modificados de una vez
git add assignment/

# Commit con todos los ejercicios
git commit -m "Completo todos los ejercicios de la tarea"
```

---

## Paso 6: Subir Tu Codigo a GitHub

Despues de hacer commit, sube tus cambios a GitHub con:

```bash
git push
```

Si es la primera vez, es posible que Git te pida tu usuario y contrasena de GitHub (o un token de acceso personal).

---

## Paso 7: Entregar en la Plataforma del Curso

1. Ve a tu fork en GitHub y copia la URL de tu repositorio.
   - Ejemplo: `https://github.com/tu-usuario/TiposDatosyCpp`
2. En la plataforma del curso, abre la entrega de esta tarea.
3. Pega la URL de tu repositorio en el campo indicado.
4. Envia tu entrega antes de la fecha limite.

---

## Comandos de Git Mas Usados (Resumen Rapido)

| Comando                        | Que hace                                          |
|--------------------------------|---------------------------------------------------|
| `git status`                   | Muestra que archivos cambiaron                    |
| `git add nombre_archivo.cpp`   | Prepara un archivo para el commit                 |
| `git add .`                    | Prepara TODOS los archivos cambiados              |
| `git commit -m "mensaje"`      | Guarda los cambios con una descripcion            |
| `git push`                     | Sube los commits a GitHub                         |
| `git pull`                     | Descarga cambios nuevos desde GitHub              |
| `git log --oneline`            | Muestra el historial de commits                   |

---

## Preguntas Frecuentes

**P: Me sale un error al compilar, que hago?**
R: Lee el mensaje de error con atencion: te dice la linea exacta del problema. Los errores mas comunes son: punto y coma faltante, nombre de variable mal escrito, o un parentesis que no cierra.

**P: Puedo ver las soluciones?**
R: La carpeta `solutions/` es de uso exclusivo del profesor. No intentes acceder a ella para copiar el codigo, ya que el objetivo de la tarea es que tu practiques.

**P: Puedo modificar los archivos fuera de la carpeta `assignment/`?**
R: No es necesario. Solo debes modificar los cuatro archivos `.cpp` dentro de `assignment/`.

**P: Mi programa compila pero los resultados son incorrectos, que hago?**
R: Revisa tus formulas y compara tu salida con el ejemplo de interaccion en las instrucciones. Prueba con los valores del ejemplo para verificar que tu resultado coincide.
