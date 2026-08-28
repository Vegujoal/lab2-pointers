#include <iostream>
using namespace std;

int main() {
    int num = 25;

    //1. Dirección de memoria
    cout << "Direccion de num: " << &num << endl;

    // Declarar y asignar un pointer
    int *ptr = nullptr;
    ptr = &num;

    cout << "ptr apunta a: " << ptr << endl;
    cout << "Valor apuntado (*ptr): " << *ptr << endl;

    // Modificar el valor original a traves del pointer
    *ptr = 100;
    cout << "num despues de *ptr = 100: " << num << endl;
    
    //Ejercicio numero 1:
    double precio = 19.99;
    double *pptr = &precio;
    cout << "Direccion de precio: " << &precio << endl;
    cout << "pptr apunta a: " << pptr << endl;
    cout << "Valor apuntado (*pptr): " << *pptr << endl;

    //2. A continuacion, se intenta asignar un puntero de tipo double a un puntero de tipo int, lo cual genera un error de compilación (int *malPtr = &precio;).
    /*direcciones.cpp: In function 'int main()':
direcciones.cpp:23:19: error: cannot convert 'double*' to 'int*' in initialization
   23 |     int *malPtr = &precio;
      |                   ^~~~~~~
      |                   |
      |                   double*
direcciones.cpp:25:34: error: 'pptr' was not declared in this scope; did you mean 'ptr'?
   25 |     cout << "pptr apunta a: " << pptr << endl;
      |                                  ^~~~
      |                                  ptr */
    //3. Ne parecio bastante predecible que haya impreso un numero random.
    return 0;
}