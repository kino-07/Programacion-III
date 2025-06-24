#include <iostream> 
#include <string> 
using namespace std; 

// Definición de la clase Punto para representar coordenadas en un plano 2D
class Punto {
private:
    double x;  // Coordenada x (horizontal) - miembro privado
    double y;  // Coordenada y (vertical) - miembro privado

public:
    // CONSTRUCTORES:
    
    // 1. Constructor por defecto (sin parámetros)
    Punto() : x(0.0), y(0.0) {
        // Inicializa x e y a 0.0 usando lista de inicialización
        cout << "Constructor por defecto llamado. x = " << x << ", y = " << y << endl;
        // Mensaje para demostrar cuándo se llama este constructor
    }

    // 2. Constructor con parámetros
    Punto(double xVal, double yVal) : x(xVal), y(yVal) {
        // Recibe valores para x e y y los asigna a los miembros de la clase
        cout << "Constructor con parámetros llamado. x = " << x << ", y = " << y << endl;
        // Mensaje para mostrar los valores recibidos
    }

    // 3. Constructor copia
    Punto(const Punto& otro) : x(otro.x), y(otro.y) {
        // Recibe una referencia constante a otro objeto Punto
        // Copia los valores de x e y del objeto recibido
        cout << "Constructor copia llamado. Copiando punto: x = " << x << ", y = " << y << endl;
        // Mensaje para mostrar que se está copiando un objeto
    }

    // MÉTODOS:
    
    // Método para mostrar las coordenadas del punto
    void mostrar() {
        // Imprime las coordenadas en formato (x, y)
        cout << "Punto en coordenadas: (" << x << ", " << y << ")" << endl;
    }
};

// Función principal del programa
int main() {
    // DEMOSTRACIÓN DE CONSTRUCTORES:
    
    // 1. Uso del constructor por defecto
    Punto p1;  // Crea objeto usando constructor sin parámetros
    p1.mostrar();  // Muestra las coordenadas (0.0, 0.0)

    // 2. Uso del constructor con parámetros
    Punto p2(5.5, 7.3);  // Crea objeto con valores específicos
    p2.mostrar();  // Muestra las coordenadas (5.5, 7.3)

    // 3. Uso del constructor copia
    Punto p3(p2);  // Crea nuevo objeto copiando p2
    p3.mostrar();  // Muestra las coordenadas (5.5, 7.3) - igual a p2
    

    std::cout << "\033[33mJoaquin Marcos Maita Flores.\033[0m" << std::endl;
 

    return 0;  // Indica que el programa terminó correctamente
}