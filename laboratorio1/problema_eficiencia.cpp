#include <iostream>   // Librería para entrada y salida estándar
#include <chrono>     // Librería para medir tiempos
using namespace std;
using namespace std::chrono; // Para simplificar el uso de chrono

// -----------------------------------------------------------
// Función que calcula la suma con bucle
// -----------------------------------------------------------
long long sumaBucle(int n) {
    long long suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += i;
    }
    return suma;
}

// -----------------------------------------------------------
// Función que calcula la suma con fórmula
// -----------------------------------------------------------
long long sumaFormula(int n) {
    return (long long)n * (n + 1) / 2;
}

// -----------------------------------------------------------
// Programa principal
// -----------------------------------------------------------
int main() {
    int n;
    cout << "Ingrese un numero n: ";
    cin >> n;

    // ===== Suma con bucle =====
    auto start1 = high_resolution_clock::now();   // Tiempo de inicio
    long long resultadoBucle = sumaBucle(n);      // Ejecutamos función
    auto end1 = high_resolution_clock::now();     // Tiempo de fin
    auto duracion1 = duration_cast<nanoseconds>(end1 - start1); // Diferencia en ns

    cout << "Suma con bucle: " << resultadoBucle 
         << " (tiempo: " << duracion1.count() << " ns)" << endl;

    // ===== Suma con fórmula =====
    auto start2 = high_resolution_clock::now();
    long long resultadoFormula = sumaFormula(n);
    auto end2 = high_resolution_clock::now();
    auto duracion2 = duration_cast<nanoseconds>(end2 - start2);

    cout << "Suma con formula: " << resultadoFormula 
         << " (tiempo: " << duracion2.count() << " ns)" << endl;

    return 0;
}