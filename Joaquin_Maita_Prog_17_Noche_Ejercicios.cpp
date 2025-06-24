#include <iostream>
#include <string>
using namespace std;

// Función recursiva que imprime los caracteres en orden inverso
void imprimirReverso(const std::string& texto, int indice, int& suma) {
    if (indice < 0) return;                     // Caso base: termina la recursión
    cout << "\n" << texto[indice];              // Imprime el carácter actual
    suma += texto[indice] - '0';                // Suma el valor numérico del carácter
    imprimirReverso(texto, indice - 1, suma);   // Llamada recursiva con índice decrementado
}

int main() {
    string numero;
    cout << "Ingrese un número: ";
    cin >> numero;
    
    cout << "\nImprimiendo carácter por caracter en orden inverso:\n";
    int sumaTotal = 0;
    imprimirReverso(numero, numero.length() - 1, sumaTotal);
    
    cout << "\n\nLa suma total de los dígitos es: " << sumaTotal << endl;
    std::cout <<  "\033[33m==Joaquin Marcos Maita Flores==\033[0m" << std::endl;
    std::cout <<  "\033[33m==\"No lo descargues, tiene virus\" ==\033[0m" << std::endl;
    return 0;
}