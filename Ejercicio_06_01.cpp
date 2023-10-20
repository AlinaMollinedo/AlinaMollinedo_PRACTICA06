// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 19/10/2023

// Fecha modificación: 19/10/2023

// Número de ejericio: 1

// Problema planteado: Realizar un algoritmo recursivo para calcular el máximo común divisor de dos
// números enteros aplicando el algoritmo de Euclides

#include <iostream>

using namespace std;
int MCD(int, int);

int main(){
    int n, m;
    cout << "Ingrese el numero mayor: ";
    cin >> n;
    cout << "Ingrese el numero menor: ";
    cin >> m;
    int mcd = MCD(n, m);
    cout << "El MCD es " << mcd << endl;
    return 0;
}

// Saca el MCD mediante una funcion recursiva
int MCD(int n, int m){
    int mcd;
    if(n % m == 0){
        mcd = m;
    }
    else{
        mcd = MCD(m, n % m);
    }
    return mcd;
}
