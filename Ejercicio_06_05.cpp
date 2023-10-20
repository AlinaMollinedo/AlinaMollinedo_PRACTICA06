// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 20/10/2023

// Fecha modificación: 20/10/2023

// Número de ejericio: 5

// Problema planteado: Realizar un algoritmo recursivo para comparar si dos vectores son iguales.

#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;
void fillv(int*, int);
bool compare(int*, int*, int);

int main(){
    srand(time(NULL));
    int vsize;
    cout << "Ingrese la magnitud de los vectores: ";
    cin >> vsize;
    int v1[vsize], v2[vsize];
    fillv(v1, vsize); // Llena los valores del vector 1 con numeros al azar
    cout << endl;
    fillv(v2, vsize); // Llena los valores del vector 2 con numeros al azar

    bool flag = compare(v1, v2, vsize - 1);
    // Imprime el mensaje correspondiente dependiendo de los resultados de la comparacion
    if(flag == 0){
        cout << "\nLos vectores no son iguales." << endl;
    }
    else{
        cout << "\nLos vectores son iguales." << endl;
    }
    return 0;
}

// Llena los valores un vector con numeros al azar
void fillv(int *v, int vsize){
    for(int i = 0; i < vsize; i++){
        v[i] = 0 + rand() % 2;
        cout << v[i] << " ";
    }
}

// Compara los valores de dos vectores y verifica si son iguales o no mediante una funcion recursiva
bool compare(int *v1, int *v2, int n){
    if(v1[n] == v2[n]){
        if(n == 0){
            return true;
        }
        else{
            return compare(v1, v2, n - 1);
        }
    }
    else{
        return false;
    }
}