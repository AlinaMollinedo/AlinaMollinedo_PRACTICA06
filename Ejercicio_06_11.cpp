// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 20/10/2023

// Fecha modificación: 20/10/2023

// Número de ejericio: 11

// Problema planteado: Realizar un algoritmo recursivo para elaborar un programa en el que dado un
// entero n > 1, calcule e imprima los elementos correspondientes a la conjetura
// de Ullman (en honor al matemático Ullman) que consiste en lo siguiente:
// • Empiece con cualquier entero positivo.
// • Si es par, divídalo entre 2; si es impar multiplíquelo por 3 y agréguele 1.
// • Obtenga enteros sucesivamente repitiendo el proceso.
// Al final se obtendrá el número 1, independientemente del entero inicial. Por
// ejemplo, cuando el entero inicial es 26, la secuencia será:
// 26 13 40 20 10 5 16 8 4 2 1

#include <iostream>

using namespace std;
int Ullman(int);

int main(){
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    cout << Ullman(n) << endl;
    return 0;
}

// Funcion recursiva que imprime los elementos de la conjetura de Ullman
int Ullman(int n){
    if(n == 1){
        return n;
    }
    else{
        cout << n << " ";
        if(n % 2 == 0){
            return Ullman(n / 2);
        }
        else{
            return Ullman((n * 3) + 1);
        }
    }
}