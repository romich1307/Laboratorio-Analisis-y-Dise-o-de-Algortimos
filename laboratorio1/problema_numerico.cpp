# include<iostream> //Libreria para entrada y salida estándar
using namespace std;
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
    //Resultados
    cout<<"MCD con Euclides: "<< mcd_euclides(a, b)<< endl;
    cout<<"MCD con bucle: "<< mcd_bucle(a, b)<< endl;

    return 0;
}

