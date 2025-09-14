#include <iostream>
#include <string>
using namespace std;

bool esPalindromo(int numero) {
    string s = to_string(numero);  // Convertimos el número a cadena
    int d = s.length();            // Cantidad de dígitos

    for (int i = 0; i < d / 2; i++) {  // Solo recorremos hasta la mitad
        if (s[i] != s[d - 1 - i]) {    // Comparamos extremos
            return false;              // Si hay diferencia → no es palíndromo
        }
    }
    return true;                       // Si todas coinciden → sí es palíndromo
}

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    if (esPalindromo(n))
        cout << n << " es palindromo" << endl;
    else
        cout << n << " no es palindromo" << endl;

    return 0;
}
