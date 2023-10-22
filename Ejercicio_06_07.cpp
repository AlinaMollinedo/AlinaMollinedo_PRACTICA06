// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 20/10/2023

// Fecha modificación: 20/10/2023

// Número de ejericio: 7

// Problema planteado: Realizar un algoritmo recursivo para el siguiente problema: un granjero ha
// comprado una pareja de conejos para criarlos y luego venderlos. Si la pareja de
// conejos produce una nueva pareja cada mes y la nueva pareja tarda un mes
// más en ser también productiva, ¿cuántos pares de conejos podrá poner a la
// venta el granjero al cabo de un año?

#include <iostream>

using namespace std;
int fibonacci(int);

int main(){
    int n;
    cout << "Ingrese la cantidad de meses que habran pasado: ";
    cin >> n;
    cout << "\nTendran " << fibonacci(n) << " pares de conejos a la venta al cabo de " << n << " meses." << endl;
    return 0;
}

// Funcion recursiva que da el enesimo termino de la secuencia Fibonacci
int fibonacci(int n){
    if(n <= 2){
        return 1;
    }
    else{
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}