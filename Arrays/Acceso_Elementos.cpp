#include <iostream>
using namespace std;

int main() {
    int numeros[5] = {10,20,30,40,50};

    numeros[0] = 100; // cambia valor en la posicion 0
    numeros[4] = 500; // cambia valor en la posicion 4

    cout << numeros[1] << endl; // muestra el valor del indice 1

    return 0;
}