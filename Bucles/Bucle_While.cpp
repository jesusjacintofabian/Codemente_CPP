 #include <iostream>
  using namespace std;

int main() {
    string contraseña;

    cout << "Introduce tu contraseña: ";
    cin >> contraseña;

    while (contraseña != "1234") {
        cout << "Incorrecta. Intenta de nuevo: ";
        cin >> contraseña;
    }

    cout << "¡Contraseña correcta!"<< endl;
return 0;
}