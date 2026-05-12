#include <iostream>
using namespace std;

int main() {
    int variable = 1;

    switch (variable) {
        case 1:
            // Código si variable == 1
            cout << "Caso 1" << endl;
            break;

        case 2:
            // Código si variable == 2
            cout << "Caso 2" << endl;
            break;

        default:
            // Código si no coincide con ningún caso
            cout << "Ningun caso coincide" << endl;
    }

    return 0;
}