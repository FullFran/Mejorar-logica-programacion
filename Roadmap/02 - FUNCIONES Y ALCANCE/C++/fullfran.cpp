/*
 * EJERCICIO:
 * - Crea ejemplos de funciones básicas que representen las diferentes
 *   posibilidades del lenguaje:
 *   Sin parámetros ni retorno, con uno o varios parámetros, con retorno...
 * - Comprueba si puedes crear funciones dentro de funciones.
 * - Utiliza algún ejemplo de funciones ya creadas en el lenguaje.
 * - Pon a prueba el concepto de variable LOCAL y GLOBAL.
 * - Debes hacer print por consola del resultado de todos los ejemplos.
 *   (y tener en cuenta que cada lenguaje puede poseer más o menos posibilidades)
 *
 * DIFICULTAD EXTRA (opcional):
 * Crea una función que reciba dos parámetros de tipo cadena de texto y retorne un número.
 * - La función imprime todos los números del 1 al 100. Teniendo en cuenta que:
 *   - Si el número es múltiplo de 3, muestra la cadena de texto del primer parámetro.
 *   - Si el número es múltiplo de 5, muestra la cadena de texto del segundo parámetro.
 *   - Si el número es múltiplo de 3 y de 5, muestra las dos cadenas de texto concatenadas.
 *   - La función retorna el número de veces que se ha impreso el número en lugar de los textos.
 *
 * Presta especial atención a la sintaxis que debes utilizar en cada uno de los casos.
 * Cada lenguaje sigue una convenciones que debes de respetar para que el código se entienda.
 */

// incluimos la librería iostream para imprimir por terminal
#include <iostream>
// incluimos la librería string para usar el tipo de dato string
#include <string>
// incluimos la librería cmath para usar matemáticas
#include <cmath>
#include <vector> // include the vector header file
using namespace std; // para no tener que escribir std:: antes de cada función

// función que no recibe parámetros ni devuelve nada
void simple(){
    cout << "Función simple" << endl;
}

// función que recibe un parámetro y no devuelve nada
void conParametro(int a){
    cout << "Función con parámetro: " << a << endl;
}

// función que recibe dos parámetros y devuelve un valor
float division(float a, float b){
    return a / b;
}


// ademas, en c++ se pueden hacer funciones recursivas como esta que calcula el factorial de un número
int factorial(int n){
    if(n == 0){
        return 1;
    }else{
        return n * factorial(n - 1);
    }
}


// funciones ya creadas en el lenguaje: 
// - sqrt: raíz cuadrada
// - pow: potencia
// - abs: valor absoluto
// estas funciones son de la librería cmath, en c++ no hay funciones propias para esto
// ejemplos de funciones propias de c++ son 
// - cout: imprimir por consola
// - cin: leer por consola
// - endl: salto de línea

// usemos las de cmath para hacer un ejemplo
int raizCuadrada(int a){
    return sqrt(a);
}

// para definir variables locales en c++ se hace dentro de las funciones
// las variables globales se definen fuera de las funciones

int varGlobal = 5;

void variables(){
    int varLocal = 3;
    cout << "Variable local: " << varLocal << endl;
    cout << "Variable global: " << varGlobal << endl;
}

// la diferencia es que a las globales se puede acceder desde cualquier función y las locales solo desde la función donde se definen    

// función que retorna 2 valores
// en c++ no se pueden retornar varios valores, pero se pueden retornar estructuras que contengan varios valores
// o se pueden pasar por referencia
// en este caso vamos a hacer una función que reciba un número y devuelva su cuadrado y su cubo
// para esto vamos a usar referencias
// declaramos las variables cuadrado y cubo fuera de la función
int cuadrado = 0; 
int cubo = 0;
// y las pasamos por referencia a la función con el operador &
void cuadradoCubo(int a, int &cuadrado, int &cubo){
    cuadrado = pow(a, 2);
    cubo = pow(a, 3);
}
// esto se ha hecho usando referencias, que son un tipo de dato que se usa para pasar variables por referencia
// esto significa que se pasa la dirección de memoria de la variable, no una copia de su valor
// esto permite que la función pueda modificar la variable original

// en c++ no se pueden hacer funciones dentro de funciones, pero se pueden hacer funciones anidadas
// esto significa que se pueden definir funciones dentro de otras funciones, pero solo se pueden usar dentro de la función en la que se han definido
// esto se hace para encapsular la función y que no se pueda usar fuera de la función en la que se ha definido
// esto se hace con la siguiente sintaxis
// void funcionExterna(){
//     void funcionInterna(){
//         // código de la función interna
//     }
//     // código de la función externa
// }
// la función interna solo se puede usar dentro de la función externa

// estructuras de c++ que admiten varios valores son los arrays, las tuplas y las estructuras
// en este caso hemos usado referencias para devolver varios valores, pero se podría haber usado una estructura 
// o un array para devolver varios valores

// array:
int array1[] = {1, 2, 3};

// estructura:
struct valores{
    int cuadrado;
    int cubo;
};

// podemos operar con el array y la estructura de la misma forma que con las variables normales
// para acceder a los valores del array se usa el índice array1[0], array1[1], array1[2] ... 
// para acceder a los valores de la estructura se usa el operador punto valores1.cuadrado, valores1.cubo ...
// las estructuras son parecidas a los diccionarios en python, pero solo admiten valores de un tipo de dato concreto








// ahora vamos a hacer el ejercicio extra en el que se nos pide
// crear una función que reciba dos parámetros de tipo cadena de texto y retorne un número
// la función imprime todos los números del 1 al 100. Teniendo en cuenta que:
// - Si el número es múltiplo de 3, muestra la cadena de texto del primer parámetro.
// - Si el número es múltiplo de 5, muestra la cadena de texto del segundo parámetro.
// - Si el número es múltiplo de 3 y de 5, muestra las dos cadenas de texto concatenadas.
// - La función retorna el número de veces que se ha impreso el número en lugar de los textos.

// este ejercicio es el clásico fizzbuzz

int ejercicioExtra(string a, string b){
    // vamos a hacer el ejercicio extra pero usando end cluses para evitar anidaciones de if
    int contador = 0;
    for (int i = 1; i <= 100; i++){
        if(i % 3 == 0 && i % 5 != 0){
            cout << i << " " << a << endl;
        contador++;
        }
        
        if(i % 5 == 0 && i % 3 != 0){
            cout << i << " " << b << endl;
        contador++;
        }
        
        if(i % 3 == 0 && i % 5 == 0){
            cout << i << " " << a + b << endl;
        
        contador++;
        }
    }
    return contador;
}





int main(){
    // vamos a empezar a imprimir los resultados de las funciones que hemos creado
    simple();
    conParametro(5);
    cout << "División: " << division(10, 2) << endl;
    cout << "Factorial: " << factorial(5) << endl;
    cout << "Raíz cuadrada: " << raizCuadrada(25) << endl;
    variables();
    int a = 10;
    // ahora vamos a probar la función que retorna 2 valores
    cuadradoCubo(a, cuadrado, cubo);
    cout << "Cuadrado de " << a << " : " << cuadrado << endl;
    cout << "Cubo de " << a << ": " << cubo << endl;

    cout << "Ejercicio extra: " << endl << ejercicioExtra("Chanchito ", "Feliz")  << endl;
    // el código imprime al final un 1 

    // vamos a imprimir el array y la estructura
    cout << "Array: " << array1[0] << " " << array1[1] << " " << array1[2] << endl;
    valores valores1;
    valores1.cuadrado = 4;
    valores1.cubo = 8;
    cout << "Estructura: " << valores1.cuadrado << " " << valores1.cubo << endl;

    return 0;
}

