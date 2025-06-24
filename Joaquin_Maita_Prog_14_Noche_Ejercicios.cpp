#include <iostream>
using namespace std;
int fibonacci(int n) {
    // std::cout << "Calculando fibonacci(" << n << ")" << std::endl;
    // Descomentar para traza detallada

    // Casos Base
    if (n <= 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    // Paso Recursivo
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int terminos = 7; // Calcular hasta F(6)

    std::cout << "Secuencia de Fibonacci (primeros " << terminos << " terminos):" << std::endl;

    for (int i = 0; i < terminos; ++i) {//inicializa el conteo para ir sumando asi formando la serie fiboasi 
        std::cout << fibonacci(i) << " ";
    }

    std::cout << std::endl;

    cout << "F(7) es: " << fibonacci(7) << endl; // Probar con un número un poco más grande
    
    cout<< "\nJoaquin Marcos Maita Flores"<<endl;
    cout<< "derechos solo los abogados"<<endl;

    return 0;
}
