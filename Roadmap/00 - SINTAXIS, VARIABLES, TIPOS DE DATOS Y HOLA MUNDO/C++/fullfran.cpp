/*
 * ¿Preparad@ para aprender o repasar el lenguaje de programación que tú quieras?
 * - Recuerda que todas las instrucciones de participación están en el
 *   repositorio de GitHub.
 *
 * Lo primero... ¿Ya has elegido un lenguaje?
 * - No todos son iguales, pero sus fundamentos suelen ser comunes.
 * - Este primer reto te servirá para familiarizarte con la forma de participar
 *   enviando tus propias soluciones.
 *
 * EJERCICIO:
 * - Crea un comentario en el código y coloca la URL del sitio web oficial del
 *   lenguaje de programación que has seleccionado.
 * - Representa las diferentes sintaxis que existen de crear comentarios
 *   en el lenguaje (en una línea, varias...).
 * - Crea una variable (y una constante si el lenguaje lo soporta).
 * - Crea variables representando todos los tipos de datos primitivos
 *   del lenguaje (cadenas de texto, enteros, booleanos...).
 * - Imprime por terminal el texto: "¡Hola, [y el nombre de tu lenguaje]!"
 *
 * ¿Fácil? No te preocupes, recuerda que esta es una ruta de estudio y
 * debemos comenzar por el principio.
 */

// URL del sitio web oficial de C++: https://isocpp.org/ // los comentarios en cpp se pueden hacer de dos formas, una de una sola línea y otra de varias líneas
// Comentario de una sola línea

/*
Comentario de varias líneas
*/

// Vamos a crear una variable y una constante

#include <iostream> // Incluimos la librería iostream para poder imprimir por terminal
#include <string> // Incluimos la librería string para poder usar el tipo de dato string
using namespace std; // Usamos el espacio de nombres std para no tener que escribir std:: antes de cada función

#include <cmath> // Incluimos la librería cmath para poder usar la función pow

#include <typeinfo> // Incluimos la librería typeinfo para poder usar la función typeid


// creamos una variable
int variable = 5; // Creamos una variable de tipo entero
const int constante = 10; // Creamos una constante de tipo entero

// la diferencia entre una variable y una constante es que la variable puede cambiar su valor, mientras que la constante no

// Creamos variables de todos los tipos de datos primitivos
// los datos primitivos en c++ son: int, double, float, char, string, bool
int entero = 5; // Creamos una variable de tipo entero
double decimal = 5.5; // Creamos una variable de tipo double esto son números decimales
float flotante = 5.5; // Creamos una variable de tipo float esto son números decimales se diferencia del double en la precisión (float 4 bytes, double 8 bytes)

char caracter = 'a'; // Creamos una variable de tipo char esto es un solo caracter
// string no es un tipo de dato primitivo, pero se puede usar en c++
string cadena = "Hola, mundo!"; // Creamos una variable de tipo string esto es una cadena de texto

bool booleano = true; // Creamos una variable de tipo booleano esto es un valor verdadero o falso

// Ahora vamos a imprimir por terminal el texto: "¡Hola, C++!"
int main() {
    cout << "Hola, C++" << endl; // Imprimimos por terminal el texto "Hola, C++"
    // vamos a calcular el area de un circulo
    // formula: area = pi * radio^2
    
    double radio = 5; // Creamos una variable de tipo double para el radio
    double pi = 3.1416; // Creamos una variable de tipo double para el valor de pi
    double area = pi * pow(radio, 2); // Calculamos el area del circulo

    cout << "El area del circulo es: " << area << endl; // Imprimimos por terminal el area del circulo


    // vamos a imprimir el tipo de dato de las variables que hemos creado
    // para ello vamos a usar la función typeid

        
    cout << "El tipo de dato de la variable entero es: " << typeid(entero).name() << endl; // Imprimimos por terminal el tipo de dato de la variable entero
    cout << "El tipo de dato de la variable decimal es: " << typeid(decimal).name() << endl; // Imprimimos por terminal el tipo de dato de la variable decimal
    cout << "El tipo de dato de la variable flotante es: " << typeid(flotante).name() << endl; // Imprimimos por terminal el tipo de dato de la variable flotante
    cout << "El tipo de dato de la variable caracter es: " << typeid(caracter).name() << endl; // Imprimimos por terminal el tipo de dato de la variable caracter
    cout << "El tipo de dato de la variable cadena es: " << typeid(cadena).name() << endl; // Imprimimos por terminal el tipo de dato de la variable cadena
    cout << "El tipo de dato de la variable booleano es: " << typeid(booleano).name() << endl; // Imprimimos por terminal el tipo de dato de la variable booleano
    
    
    
    return 0; // Retornamos 0

}

// vamos a imprimir el tipo de dato de las variables que hemos creado
// para ello vamos a usar la función typeid
