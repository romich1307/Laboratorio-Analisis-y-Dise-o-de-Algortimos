#include <iostream> //Libreria para entrada y salida estándar
#include <string>   //Libreria para manipulación de cadenas
using namespace std; // Evitar usar std:: en cada uso de cin, cout, string
//-----------------------------------------------------------
// Bùsqueda de cadena de texto(fuerza bruta)
bool buscarEnTexto(string texto, string palabra){
    int n = texto.length(); // Longitud del texto
    int m = palabra.length(); // Longitud de la palabra a buscar

    if(m > n) return false; // Si la palabra es más larga que el texto, no puede estar presente

    for(int i = 0; i <= n - m; i++){ // Recorremos el texto hasta donde la palabra puede caber
        int j; // Índice para la palabra
        for(j = 0; j < m; j++){ // Recorremos la palabra
            if(texto[i + j] != palabra[j]){ // Si hay una diferencia, rompemos
                break;
            }
        }
        if(j == m){ // Si j llegó al final de la palabra, la encontramos
            return true;
        }
    }
    return false; // Si no se encontró la palabra en el texto
}

// -----------------------------------------------------------
// Búsqueda binaria en lista ordenada
// -----------------------------------------------------------
bool busquedaBinaria(string lista[], int n, string palabra) {
    int izquierda = 0;       // inicio del rango
    int derecha = n - 1;     // final del rango

    // Mientras el rango sea válido
    while (izquierda <= derecha) {
        int medio = (izquierda + derecha) / 2; // posición central

        if (lista[medio] == palabra) {
            return true;  // palabra encontrada en la posición medio
        }
        else if (lista[medio] < palabra) {
            // Si la palabra está "después" alfabéticamente
            izquierda = medio + 1; // mover el rango a la derecha
        }
        else {
            // Si la palabra está "antes"
            derecha = medio - 1; // mover el rango a la izquierda
        }
    }
    // Si salimos del bucle → la palabra no está en la lista
    return false;
}

// -----------------------------------------------------------
// Programa principal
// -----------------------------------------------------------
int main() {
    // Texto donde vamos a buscar
    string texto = "algoritmos de busqueda en texto simple con palabra repetida palabra palabra";
    string palabra; // aquí guardaremos la palabra que ingrese el usuario

    // Pedir palabra al usuario
    cout << "Ingrese la palabra a buscar: ";
    cin >> palabra;

    // --- Buscar en el texto ---
    bool encontradoTexto = buscarEnTexto(texto, palabra);
    cout << "Resultado en texto: "
         << (encontradoTexto ? "Encontrada" : "No encontrada") << endl;

    // --- Lista de palabras (no está ordenada al inicio) ---
    string lista[] = {"algoritmos", "binaria", "busqueda", "palabra", "palabra", "texto"};
    int n = 6; // número de elementos en la lista

    // Ordenamos la lista con burbuja
    ordenarBurbuja(lista, n);

    // Buscamos la palabra en la lista ya ordenada con binaria
    bool encontradoLista = busquedaBinaria(lista, n, palabra);
    cout << "Resultado en lista ordenada: "
         << (encontradoLista ? "Encontrada" : "No encontrada") << endl;

    return 0; // Fin del programa
}