 #include <iostream>
  using namespace std;

int main() {
  
  string password;
  do{
      cout<<"Introduce la contrasenia: ";
      cin>>password;
  }while (password != "1234");

  cout<<"Acceso concedido";  

return 0;
}