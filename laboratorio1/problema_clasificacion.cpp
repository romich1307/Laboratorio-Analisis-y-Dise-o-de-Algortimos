#include <iostream>
#include <string>
#include <algorithm> // Para usar sort()
#include <chrono>    // Para medir tiempos
using namespace std;
using namespace std::chrono; // Evitar std::chrono::

// -----------------------------------------------------------
// Ordenamiento burbuja (manual)
// -----------------------------------------------------------
void ordenarBurbuja(string lista[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (lista[j] > lista[j + 1]) {
                // Intercambiamos elementos
                string temp = lista[j];
                lista[j] = lista[j + 1];
                lista[j + 1] = temp;
            }
        }
    }
}

int main() {
    // Lista de nombres
    string nombres1[] = {"Maria", "Ana", "Carlos", "Pedro", "Beatriz"};
    string nombres2[] = {"Maria", "Ana", "Carlos", "Pedro", "Beatriz"};
    int n = 5;

    // ===== Ordenamiento Burbuja =====
    auto start1 = high_resolution_clock::now();
    ordenarBurbuja(nombres1, n);
    auto end1 = high_resolution_clock::now();
    auto duracion1 = duration_cast<nanoseconds>(end1 - start1);

    cout << "Orden con burbuja: ";
    for (int i = 0; i < n; i++) {
        cout << nombres1[i] << " ";
    }
    cout << "(tiempo: " << duracion1.count() << " ns)" << endl;

    // ===== Ordenamiento sort() =====
    auto start2 = high_resolution_clock::now();
    sort(nombres2, nombres2 + n);
    auto end2 = high_resolution_clock::now();
    auto duracion2 = duration_cast<nanoseconds>(end2 - start2);

    cout << "Orden con sort(): ";
    for (int i = 0; i < n; i++) {
        cout << nombres2[i] << " ";
    }
    cout << "(tiempo: " << duracion2.count() << " ns)" << endl;

    return 0;
}
