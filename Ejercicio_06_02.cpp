// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 19/10/2023

// Fecha modificación: 19/10/2023

// Número de ejericio: 2

// Problema planteado: Realizar un algoritmo para generar la secuencia: 1, 1, 2, 4, 8, 16, 23, 28, 38,
// 49,..., para n términos.

#include <iostream>

using namespace std;
int digits(int);
int sec(int);

int main(){
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    // Imprime n terminos de la secuencia
    for(int i = 0; i < n; i++){
       cout << sec(i) << "\t";
    }
    return 0;
}

// Saca la suma de los digitos de un numero mediante una funcion recursiva
int digits(int n){
    if(n / 10 == 0){
        return n % 10;
    }
    else{
        return n % 10 + digits(n / 10);
    }
}

// Saca la posicion (numero ingresado) en la secuencia pedida mediante una funcion recursiva
int sec(int n){
    if(n <= 1){
        return 1;
    }
    else{
        return sec(n - 1) + digits(sec(n - 1));
    }
}
