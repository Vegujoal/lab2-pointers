#include <iostream>
using namespace std;

int main() {
    int vals[] = {4, 7, 11, 18, 25};

    cout << "Nombre del array (direccion): " << vals << endl;
    cout << "Primer elemento (*vals): " << *vals << endl;

    int *valptr = vals;   // valptr apunta al primer elemento

    cout << "\n--- Recorriendo con [] ---" << endl;
    for (int i = 0; i < 5; i++) {
        cout << valptr[i] << " ";
    }
    cout << endl;

    cout << "\n--- Recorriendo con aritmetica de punteros ---" << endl;
    for (int i = 0; i < 5; i++) {
        cout << *(valptr + i) << " ";
    }
    cout << endl;

    cout << "\n--- Usando ++ para avanzar el pointer ---" << endl;
    int *p = vals;
    for (int i = 0; i < 5; i++) {
        cout << *p << " ";
        p++;
    }
    cout << endl;
    //Ejercicio 1.  cout que imprima el último elemento del array usando aritmética de punteros
    cout << "\n--- Imprimiendo el ultimo elemento usando aritmetica de punteros." << endl;
    cout << *(valptr + 4) << endl;
    
    //Ejercicio 2. 
    int *inicio = vals;
    int *fin = vals + 4;
    int resta = fin - inicio;
    cout << "Resta de punteros: " << resta << endl;

    //Ejercicio 3. Le cambie al ultimo bloque el 5 a 7 y me salio esto.
    /*--- Usando ++ para avanzar el pointer ---
    4 7 11 18 25 0 -885484761*/
    return 0;
}