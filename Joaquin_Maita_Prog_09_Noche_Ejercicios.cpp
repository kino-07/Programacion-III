#include <iostream>

using namespace std;

template <typename T>  // Plantilla genérica (T puede ser int, double, string, etc.)
void imprimir(T a) {   // Función que acepta cualquier tipo de dato
    cout << a << endl; // Imprime el valor, sin importar si es un número, texto o booleano.
}

int main() {
    std::cout<<" \nPlantillas, uso del templete para varios datos\n"<<std::endl;
    imprimir(10);          // int o enteros
    imprimir(5.5);         // double o decimales
    imprimir("adios mundo"); // string o caracteres
    imprimir(true);        // bool (se imprime como 1 o "true" según el compilador)
    std::cout<<" \nJoaquin Marcos Maita Flores -- Derechos Reservados\n"<<std::endl;
    
    return 0;
}
