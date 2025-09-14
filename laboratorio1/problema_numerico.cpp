# include<iostream> //Libreria para entrada y salida estándar
#include <chrono>     // Librería para medir tiempos
using namespace std;
using namespace std::chrono; // Para no escribir std::chrono:: en cada uso
//-----------------------------------------------------------
// Algoritmo de Euclides para el MCD
// Utiliza el método de divisiones sucesivas
int mcd_euclides(int dividendo, int divisor){
    while(divisor!=0){ //mientras el divisor no sea cero
        int residuo= dividendo % divisor; //Calculamos el resto de dividir el dividendo con el divisor
        dividendo = divisor; //ahora el nuevo dividendo sería mi divisor
        divisor = residuo;  //el residuo pasa a ser el divisor 
    }
    return dividendo; //cuando el divisor es 0, el dividendo es el MCD
}
//-----------------------------------------------------------
// Algoritmos con bucles
// Buscar el mayor número que divida a ambos
int mcd_bucle(int a, int b){
    int menor = (a < b)? a:b;  // Tomamos el menor de los dos números
    for(int i = menor; i > 0; i--){ // Recorremos desde el menor hacia abajo
        if(a%i == 0 && b % i == 0){ // Si i divide a ambos números
            return i; // Ese es el MCD
        }
    }
    return 1;
}
//-----------------------------------------------------------
int main() {
    int a,b;
    //Entrada de datos
    cout << "Ingresar dos números:";
    cin>> a >> b;

    // ===== Euclides =====
    auto start1 = high_resolution_clock::now();     // Tiempo inicio
    int resultado1 = mcd_euclides(a, b);            // Ejecuta el método
    auto end1 = high_resolution_clock::now();       // Tiempo fin
    auto duracion1 = duration_cast<nanoseconds>(end1 - start1); // Diferencia en nanosegundos

    // ===== Bucle =====
    auto start2 = high_resolution_clock::now();
    int resultado2 = mcd_bucle(a, b);
    auto end2 = high_resolution_clock::now();
    auto duracion2 = duration_cast<nanoseconds>(end2 - start2);


    //Resultados
    cout << "MCD con Euclides: " << resultado1 << " (tiempo: " 
         << duracion1.count() << " ns)" << endl;

    cout << "MCD con bucle: " << resultado2 << " (tiempo: " 
         << duracion2.count() << " ns)" << endl;

    return 0;
}

