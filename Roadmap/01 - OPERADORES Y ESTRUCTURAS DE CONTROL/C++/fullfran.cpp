/*
 * EJERCICIO:
 * - Crea ejemplos utilizando todos los tipos de operadores de tu lenguaje:
 *   Aritméticos, lógicos, de comparación, asignación, identidad, pertenencia, bits...
 *   (Ten en cuenta que cada lenguaje puede poseer unos diferentes)
 * - Utilizando las operaciones con operadores que tú quieras, crea ejemplos
 *   que representen todos los tipos de estructuras de control que existan
 *   en tu lenguaje:
 *   Condicionales, iterativas, excepciones...
 * - Debes hacer print por consola del resultado de todos los ejemplos.
 *
 * DIFICULTAD EXTRA (opcional):
 * Crea un programa que imprima por consola todos los números comprendidos
 * entre 10 y 55 (incluidos), pares, y que no son ni el 16 ni múltiplos de 3.
 *
 * Seguro que al revisar detenidamente las posibilidades has descubierto algo nuevo.
 */

#include <iostream> // para imprimir por terminal
#include <string> // para usar el tipo de dato string
using namespace std; // para no tener que escribir std:: antes de cada función


int main(){
    // Operadores aritméticos
    int prueba = 5;
    cout << "Operadores aritméticos" << endl;
    cout << "Suma: " << 5 + 3 << endl; // en c++ se usa << para imprimir por terminal
    // se puede hacer un salto de linea con endl
    cout << "multiplicación: " << 5 * 3 << endl;
    // para hacer una potencia se usa la función pow de la librería cmath no está definida por defecto
    cout << "operador incremento ++" << prueba++ << endl;       
    cout << "operador decremento --" << prueba-- << endl;

    // Operadores lógicos
    cout << "Operadores lógicos" << endl;
    cout << "AND: " << (true && false) << endl;
    cout << "OR: " << (true || false) << endl;
    cout << "NOT: " << !true << endl;
    // nota: en c++ se devuelve 1 para true y 0 para false 
    // no se devuelve true o false como en otros lenguajes

    // Operadores de comparación
    cout << "Operadores de comparación" << endl;
    cout << "Igualdad: " << (5 == 3) << endl;
    cout << "Mayor que: " << (5 > 3) << endl;
    cout << "Menor que: " << (5 < 3) << endl;

    // Operadores de asignación
    cout << "Operadores de asignación" << endl;
    int a = 5;
    cout << "a: " << a << endl;
    cout << "a += 3: " << (a += 3) << endl; // está el +=, -=, *=, /=, %=
    // el %= es el módulo, que devuelve el resto de la división

    // Operadores de identidad
    cout << "Operadores de identidad" << endl;
    cout << "Igualdad: " << (5 == 3) << endl;
    cout << "Diferencia: " << (5 != 3) << endl;

    // Operadores de pertenencia
    cout << "Operadores de pertenencia" << endl;
    string s = "hola";
    cout << "hola: " << (s == "hola") << endl;

    // Operadores de bits
    cout << "Operadores de bits" << endl;
    cout << "AND: " << (5 & 3) << endl;
    cout << "OR: " << (5 | 3) << endl;
    cout << "NOT: " << ~5 << endl;

    // Estructuras de control
    cout << "Estructuras de control" << endl;
    // Condicionales
    if (5 > 3){
        cout << "5 es mayor que 3" << endl;
    }
    if (3 < 5){
        cout << "3 es menor que 5" << endl;
    }
    // Iterativas
    for (int i = 0; i <= 5; i++){
        cout << i << endl;
    }
    for (int i = 4; i >= 0; i--){
        cout << i << endl;
    }
    // Excepciones
    try {
        throw 20;
    } catch (int e){
        cout << "Excepción: " << e << endl;
    }

    // DIFICULTAD EXTRA
    cout << "DIFICULTAD EXTRA" << endl;
    for (int i = 10; i <= 55; i++){
        if (i % 2 == 0 && i != 16 && i % 3 != 0){
            cout << i << endl;
        }
    }

/*
en resumen: 
- se han utilizado todos los tipos de operadores
- se han utilizado todos los tipos de estructuras de control
- se ha hecho un programa que imprime los números pares entre 10 y 55 que no son el 16 ni múltiplos de 3

hemos visto que en c++ para hacer una estructura se hace
if (condición){
    // código
}

osea 

estructura (condición){
    // código
}

para ejecutar las cosas hay que meterlo en una función main

se pueden crear otras funciones pero hay que declararlas antes del main
y después se ejecutan en el main por ejemplo una función saludar:

void saludar(){
    cout << "hola" << endl;
}

int main(){
    saludar();
    return 0;
}

ESto daría un código que imprime hola por terminal

para imprimir por terminal se usa cout << "texto" << endl;
para declarar variables se hace tipo nombre = valor; y hay que tiparlas (int, string, etc)
la primera vez que se asigna un valor a una variable se pone el tipo y después solo el nombre y el valor sin el tipo
pero si se quiere cambiar el valor de una variable hay que poner el tipo (c++ es un lenguaje fuertemente tipado)
para hacer un bucle for se hace 

for (int i = 0; i <= 5; i++){
    // código
}

*/

// también existe la estructura switch case que se usa así:

cout << "Estructura switch case" << endl;
int option = 2;
switch (option){
    case 1:
        cout << "option es 1" << endl;
        break;

    case 2: 
        cout << "option es 2" << endl;
        break;
    default:
        cout << "option no es ni 1 ni 2" << endl;
        break;
    }

// el switch case se usa para comparar una variable con varios valores posibles y ejecutar un código en función de eso

// también está el while:
cout << "Estructura while" << endl;
int i = 0;
while (i < 5){
    i++;
    cout << i << endl;
    }

// y el do while que no está en python por ejemplo
// se ejecuta al menos una vez y después comprueba la condición
// se usa así:

cout << "Estructura do while" << endl;
i = 0;
do {
    i++;
    cout << i << endl;
} while (i < 5);

    return 0;
}

