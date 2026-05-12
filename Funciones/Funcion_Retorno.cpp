#include <iostream>
using namespace std;

// Función que devuelve un valor 
int cuadrado(int numero) {
    return numero * numero;
}

int main() {
    int n= 6;
    cout<< "El cuadrado de"<<n<<" es: "<<cuadrado(n)<<endl;
   return 0;
}