// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 19/10/2023

// Fecha modificación: 19/10/2023

// Número de ejericio: 10

// Problema planteado: Realizar un algoritmo recursivo para calcular el coeficiente binomial a partir de
// la lectura de dos números enteros, a partir de la relación:


#include <iostream>

using namespace std;
unsigned int factorial(unsigned int);

int main(){
    unsigned int n, m, nfact, mfact, nmfact, coebin;;
    cout << "Ingrese un numero: ";
    cin >> n;
    cout << "Ingrese otro numero: ";
    cin >> m;

    // Calcula los factoriales necesarios para sacar el coeficiente binomial
    nfact = factorial(n);
    mfact = factorial(m);
    nmfact = factorial(n - m);

    coebin = nfact / mfact / nmfact; // Calcula el coeficiente binomial
    cout << "El coeficiente binomial de los numeros es: " << coebin << endl;
    return 0;
}
// Saca el factorial del numero ingresado
unsigned int factorial(unsigned int n){
    if(n == 0){
        n = 1;
    }
    else{
        n = n * factorial(n - 1);
    }
    return n;
}
