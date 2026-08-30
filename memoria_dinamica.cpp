#include <iostream>
using namespace std;

int main() {
    int tamano;

    cout << "Cuantas notas vas a ingresar por examen? ";
    cin >> tamano;

    // 1. Reserva de memoria dinámica para dos arrays de double
    double *notas1 = new double[tamano];
    double *notas2 = new double[tamano];

    // 2. Lectura de las notas del Examen 1
    cout << "\n--- Notas del Examen 1 ---\n";
    for (int i = 0; i < tamano; i++) {
        cout << "Nota " << i + 1 << ": ";
        cin >> notas1[i];
    }

    // 3. Lectura de las notas del Examen 2
    cout << "\n--- Notas del Examen 2 ---\n";
    for (int i = 0; i < tamano; i++) {
        cout << "Nota " << i + 1 << ": ";
        cin >> notas2[i];
    }

    // 4. Mostrar las notas ingresadas
    cout << "\n=== RESULTADOS ===" << endl;
    cout << "Examen 1: ";
    for (int i = 0; i < tamano; i++) {
        cout << notas1[i] << " ";
    }
    cout << endl;

    cout << "Examen 2: ";
    for (int i = 0; i < tamano; i++) {
        cout << notas2[i] << " ";
    }
    cout << endl;

    // 5. Liberar correctamente la memoria de los arrays
    delete[] notas1;
    notas1 = nullptr;

    delete[] notas2;
    notas2 = nullptr;

    return 0;
}