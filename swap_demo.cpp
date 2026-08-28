#include <iostream>
using namespace std;

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
void duplicar(int *valor) {
    *valor *= 2;
}
void ordenarPar(int *a, int *b) {
    if (*a > *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    int num1 = 2, num2 = -3;

    cout << "Antes: num1= " << num1 << " num2= " << num2 << endl;
    swap(&num1, &num2);
    cout << "Despues: num1= " << num1 << " num2= " << num2 << endl;
    
    //Ejercicio 1.
    duplicar(&num1);
    cout << "Multiplicamos el valor num1: " << num1 << endl;

    //Ejercicio 2.
    //Sin ordenar:
    int a = 5, b = 2;
    cout << "Sin ordenar: a= " << a << " b= " << b << endl;
    ordenarPar(&a, &b);
    cout << "Despues de ordenar: a= " << a << " b= " << b << endl;

    //Ya ordenado
    a = 2;
    b = 5;
    ordenarPar(&a, &b);
    cout << "Hay swap?: a= " << a << " b= " << b << endl;

    return 0;
}