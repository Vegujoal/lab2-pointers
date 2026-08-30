#include <iostream>
#include <memory>
using namespace std;

unique_ptr<int> triplicar(int valor) {
    unique_ptr<int> resultado(new int);
    *resultado = valor * 3;
    return resultado;
}

int main() {
    unique_ptr<int> ptr = triplicar(5);
    cout << "Resultado: " << *ptr << endl; //sin usar delete
    return 0;
    //Es un buen candidato usar el unique_ptr en el caso 5 porque evitamos usar "delete y nullptr" y el puntero se libera automáticamente al salir del scope, evitando fugas de memoria.
}