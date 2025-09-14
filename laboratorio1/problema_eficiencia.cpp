#include <iostream>   // Librería para entrada y salida estándar (cout, cin)
using namespace std;  // Para no escribir std:: en cada uso de cout y cin

// -----------------------------------------------------------
// Función que calcula la suma de los primeros n números
// naturales usando un bucle (iterativo).
// -----------------------------------------------------------
long long sumaBucle(int n) {
    long long suma = 0;             // Inicializamos la suma en 0
    for (int i = 1; i <= n; i++) {  // Recorremos desde 1 hasta n
        suma += i;                  // Sumamos cada número a la variable suma
    }
    return suma;                    // Devolvemos la suma total
}

// -----------------------------------------------------------
// Función que calcula la suma de los primeros n números
// naturales usando la fórmula matemática n(n+1)/2.
// -----------------------------------------------------------
long long sumaFormula(int n) {
    return (long long)n * (n + 1) / 2; // Multiplica, suma y divide
}

// -----------------------------------------------------------
// Programa principal
// -----------------------------------------------------------
int main() {
    int n;  // Variable para guardar el número ingresado por el usuario
    cout << "Ingrese un numero n: "; // Pedimos un número n
    cin >> n;                        // Leemos n desde teclado

    // Llamamos a ambas funciones y mostramos resultados
    cout << "Suma con bucle: " << sumaBucle(n) << endl;
    cout << "Suma con formula: " << sumaFormula(n) << endl;

    return 0; // Fin del programa
}