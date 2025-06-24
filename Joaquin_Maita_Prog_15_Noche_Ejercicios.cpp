#include <iostream>
#include <vector>
using namespace std;
// Suma los elementos de 'arr' desde el índice 'idx' hasta el final
int sumarArreglo(const vector<int>& arr, int idx) {
    // Caso Base: Si el índice está fuera de los límites del vector,
    // significa que no hay más elementos que sumar.
    if (idx >= arr.size()) {
        return 0;
    }
    // Paso Recursivo: Suma el elemento actual (arr[idx])
    // con la suma del resto del arreglo (desde idx + 1).
    else {
        return arr[idx] + sumarArreglo(arr, idx + 1);
    }
}

int main() {
    vector<int> misNumeros = {10, 5, 15, 20, 50}; // Suma = 100
    int sumaTotal = sumarArreglo(misNumeros, 0);       // Empezar desde el índice 0

    cout << "La suma recursiva del arreglo es: " << sumaTotal << endl;
    cout <<  "\033[33m==Joaquin Marcos Maita Flores==\033[0m" << endl;

    return 0;
}
