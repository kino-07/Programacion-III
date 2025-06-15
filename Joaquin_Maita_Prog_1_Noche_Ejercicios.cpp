#include <iostream> // Para std::cout, std::endl

int main() {
    int var = 15;    // Una variable entera normal
    int *puntero;         // DECLARACIÓN de un puntero a un entero

    // ASIGNACIÓN: 'puntero' ahora guarda la dirección de 'var'
    puntero = &var;  

    std::cout << "--- Información de 'var' ---" << std::endl;
    std::cout << "Valor de 'var': " << var << std::endl;
    std::cout << "Direccion de 'variable' (&var): " << &var << std::endl;

    std::cout << "\n--- Informacion de 'puntero' ---" << std::endl;
    std::cout << "Contenido de 'puntero' (la direccion que guarda): " << puntero << std::endl;
    std::cout << "Direccion donde esta guardado el propio 'puntero' (&puntero): " << &puntero << std::endl;
    
    std::cout << "\n--- Accediendo al valor A TRAVES del puntero ---" << std::endl;
    std::cout << "Valor al que apunta 'puntero' (*puntero): " << *puntero << std::endl; // DEREFERENCIA

    // Modificando 'variable' A TRAVÉS del puntero
    std::cout << "\n--- Modificando a traves del puntero ---" << std::endl;
    *puntero = 30; // Ve a la dirección que guarda 'puntero' y cambia el valor allí a 30
    std::cout << "Nuevo valor de 'var' (despues de *puntero = 30): " << var << std::endl;
    std::cout << "Nuevo valor apuntado por 'puntero' (*puntero): " << *puntero << std::endl;
    
    std::cout <<  "\033[33m==Joaquin Marcos Maita Flores==\033[0m" << std::endl;

    return 0;
}