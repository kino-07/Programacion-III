#include <iostream>

// Área de un círculo
double calcularArea(double radio) {
    std::cout << "Calculando área de CÍRCULO..." << std::endl;
    return 3.14159 * radio * radio;
}

// Área de un rectángulo
double calcularArea(double base, double altura) {
    std::cout << "Calculando área de RECTÁNGULO..." << std::endl;
    return base * altura;
}

// Área de un cuadrado
double calcularArea(int lado) {
    std::cout << "Calculando área de CUADRADO..." << std::endl;
    return lado * lado;
}
// Área de un triangulo si esque sale como debe de salir 
double calcularArea(double b, int a) { //double e int para evitar conflicto con el rectangulo 
    std::cout << "Calculando área de TRIANGULO..." << std::endl;
    return (b * a)/2.0;
}

int main() { //Guarda los resultados en variables (areaCirc, areaRect, areaCuad, areaTrica).
    double areaCirc = calcularArea(5.0);          // Llama a la función de círculo
    double areaRect = calcularArea(4.0, 6.0);     // Llama a la función de rectángulo
    double areaCuad = calcularArea(7);            // Llama a la función de cuadrado
    double areaTrica = calcularArea (5.0,5);      // aca se coloca en 5.0 para el double y el 5 para el int para evitar conflictos de forumula 

    std::cout << "Área del círculo: " << areaCirc << std::endl;
    std::cout << "Área del rectángulo: " << areaRect << std::endl;
    std::cout << "Área del cuadrado: " << areaCuad << std::endl;
    std::cout << "Area del triangulo es : " << areaTrica << std::endl;
    std::cout<<"\n Joaquin Marcos Maita Flores -- Todos los derechos Reservados"<< std::endl;
    return 0;
}
