// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 19/10/2023

// Fecha modificación: 19/10/2023

// Número de ejericio: 3

// Problema planteado: Realizar un algoritmo recursivo, dado un vector de números enteros, retorne la
// suma de sus elementos

#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;
int suma(int*, int);

int main(){
    srand(time(NULL));
    int vsize;
    cout << "Ingrese la magnitud del vector: ";
    cin >> vsize;
    int v[vsize];
    // Llena los valores del vector con numeros al azar
    for(int i = 0; i < vsize; i++){
        v[i] = 0 + rand() % 100;
        cout << v[i] << " ";
    }
    cout << "\nLa suma de los terminos del vector es: " << suma(v, vsize - 1) << endl;
    return 0;
}

// Suma los elementos de un vector mediante una funcion recursiva
int suma(int *v, int n){
    if(n == 0){
        return v[n];
    }
    else{
        return v[n] + suma(v, n - 1);
    }
}
