#include <iostream>
#include <string>
#include <algorithm> // Para usar sort()
using namespace std;

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

    // --- Usando burbuja ---
    ordenarBurbuja(nombres1, n);
    cout << "Orden con burbuja: ";
    for (int i = 0; i < n; i++) {
        cout << nombres1[i] << " ";
    }
    cout << endl;

    // --- Usando sort() de C++ ---
    sort(nombres2, nombres2 + n); // Ordena el array de nombres
    cout << "Orden con sort(): ";
    for (int i = 0; i < n; i++) {
        cout << nombres2[i] << " ";
    }
    cout << endl;

    return 0;
}
