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
