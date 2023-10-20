// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 20/10/2023

// Fecha modificación: 20/10/2023

// Número de ejericio: 8

// Problema planteado: Realizar un algoritmo recursivo que nos diga si una cadena de caracteres es
// simétrica.

#include <iostream>
#include <string>

using namespace std;
bool compare(string, int, int);

int main(){
    string c;
    cout << "Ingrese una cadena de caracteres: ";
    cin >> c;
    int csize = c.length(); // Saca el largo de la cadena
    bool flag = compare(c, 0, csize - 1);

    // Imprime el mensaje correspondiente dependiendo de los resultados de la comparacion
    if(flag == 0){
        cout << "\nLa cadena no es palindroma." << endl;
    }
    else{
        cout << "\nLa cadena es palindroma." << endl;
    }
    return 0;
}

// Verifica si una cadena es palindroma o no mediante una funcion recursiva
bool compare(string c, int i, int j){
    if(c[i] == c[j]){
        if(j == 0){
            return true;
        }
        else{
            return compare(c, i + 1, j - 1);
        }
    }
    else{
        return false;
    }

}