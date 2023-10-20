// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 19/10/2023

// Fecha modificación: 19/10/2023

// Número de ejericio: 4

// Problema planteado: Realizar un algoritmo recursivo que escriba al revés una cadena.

#include <iostream>
#include <string>

using namespace std;
string invert(string, int);

int main(){
    string c;
    cout << "Ingrese una cadena de caracteres: ";
    cin >> c;
    int csize = c.length(); // Saca la magnitud de la cadena
    cout << "La cadena invertida es: " << invert(c, csize - 1) << endl;
    return 0;
}

// Invierte una cadena mediante una funcion recursiva
string invert(string c, int s){
    if(s < 0){
        return "";
    }
    else{
        return c[s] + invert(c, s - 1);
    }
}