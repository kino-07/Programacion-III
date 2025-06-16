#include <iostream> 

// Función recursiva para calcular el factorial de un número
long long factorial(int n) {
    std::cout << "Calculando factorial(" << n << ")..." << std::endl;

    // Caso Base: cuando n es 0 o 1, se retorna 1 porque el factorial de 0 y 1 es 1
    if (n == 0 || n == 1) {
        std::cout << " factorial(" << n << ") -> Caso Base! Retorna 1." << std::endl;
        return 1;
    }
    // Paso Recursivo: si n > 1, la función se llama a sí misma con (n - 1)
    else {
        std::cout << " factorial(" << n << ") -> Paso Recursivo. Llama a factorial(" << n - 1 << ")." << std::endl;

        // Llamada recursiva
        long long resultadoRecursion = factorial(n - 1); // Calcula factorial(n-1)

        // Multiplica n por el resultado de factorial(n-1)
        long long resultadoFinal = n * resultadoRecursion;

        // Muestra el resultado parcial
        std::cout << " factorial(" << n << ") -> Retornando " << n << " * "
                  << resultadoRecursion << " = " << resultadoFinal << std::endl;

        // Retorna el resultado final
        return resultadoFinal;
    }
}

int main() {
    int numero = 4; // Número del cual queremos calcular el factorial (puedes cambiarlo por otro valor)

    std::cout << "Iniciando calculo del factorial de " << numero << "." << std::endl;
    // Llama a la función factorial y guarda el resultado
    long long resultado = factorial(numero);
    std::cout << "\nEl factorial de " << numero << " es: " << resultado << std::endl;
    std::cout << "\nJoaquin Marcos Maita Flores -- todos los derechos reservados " << std::endl;

    return 0; 
}
