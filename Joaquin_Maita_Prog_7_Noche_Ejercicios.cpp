#include <iostream> // Â¡Esta lÃ­nea es la que faltaba!

class Punto {
public:
    double x, y;
    
    // Constructor 1: Por defecto (en el origen)
    Punto() : x(0.0), y(0.0) {
        std::cout << "Punto creado en el origen (0,0) por constructor por defecto." << std::endl;
    }
    
    // Constructor 2: Con coordenadas especÃ­ficas
    Punto(double coord_x, double coord_y) : x(coord_x), y(coord_y   ) {
        std::cout << "Punto creado en (" << x << "," << y << ") por constructor con coords." << std::endl;
    }
    
    // Constructor 3: Copia (se genera uno por defecto, pero podemos hacerlo explÃ­cito)
    Punto(const Punto& otroPunto) : x(otroPunto.x), y(otroPunto.y) {
        std::cout << "Punto copiado de (" << otroPunto.x << "," << otroPunto.y << ")." << std::endl;
    }
    
    // Destructor (opcional, para demostrar el ciclo de vida)
    ~Punto() {
        std::cout << "Punto en (" << x << "," << y << ") destruido." << std::endl;
    }
    
    // MÃ©todo para mostrar las coordenadas
    void mostrar() const {
        std::cout << "Punto(" << x << ", " << y << ")" << std::endl;
    }
    

};





// FunciÃ³n main para probar la clase
int main() {
    std::cout << "=== Demostrando constructores ===" << std::endl;
    
    // Constructor por defecto
    Punto p1;
    
    // Constructor con coordenadas
    Punto p2(5.0, 3.0);
    
    // Constructor de copia
    Punto p3(p2);
    
    //intentar crear un puntero, funcionara, pues pongamoslo a prueba 
    Punto p4(6.0, 7.0);
    
    std::cout << "\n=== Mostrando puntos ===" << std::endl;
    p1.mostrar();
    p2.mostrar();
    p3.mostrar();
    p4.mostrar();
    
    std::cout<<" \nJoaquin Marcos Maita Flores -- Derechos Reservados\n"<<std::endl;
    
    return 0;
}