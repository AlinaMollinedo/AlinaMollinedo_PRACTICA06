// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 19/10/2023

// Fecha modificación: 19/10/2023

// Número de ejericio: 6

// Problema planteado: Realizar un algoritmo recursivo para la siguiente función: Q(n) = 1^2 + 2^2 + 3^2 + ... + n^2

#include <iostream>

using namespace std;
int Q(int);

int main(){
    int n, result;
    cout << "Ingrese un numero: ";
    cin >> n;
    result = Q(n);
    cout << "El resultado es: " << result << endl;
    return 0;
}

// Realiza la funcion mediante una funcion recursiva
int Q(int n){
    if(n == 1){
        return 1;
    }
    else{
        return n*n + Q(n - 1);
    }
}
