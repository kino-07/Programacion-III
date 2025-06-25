#include <iostream> 
#include <string>
#define PI 3.14159
class Figura {
protected:
    std::string color;
    std::string nombreFigura;
public:
    Figura(std::string c, std::string nf) : color(c), nombreFigura(nf) {
        std::cout << "  CONSTRUCTOR Figura: '" << nombreFigura << "' de color " << color << std::endl;
    }

    // Ahora es virtual para permitir override real
    virtual void dibujar() const {
        std::cout << "Figura '" << nombreFigura << "': Dibujando una figura geometrica generica de color " 
                  << color << "." << std::endl;
    }

    virtual ~Figura() {

        std::cout << "  DESTRUCTOR Figura: '" << nombreFigura << "'" << std::endl;
        
    }
    
};
// SOBRESCRITURA del método dibujar()
// Misma firma que Figura::dibujar()
// Añadimos 'override' (C++11+) para seguridad del compilador
class Circulo : public Figura {
private:
    double radio;
public:
    Circulo(std::string c, double r) : Figura(c, "Circulo"), radio(r) {
        std::cout << "    CONSTRUCTOR Circulo: Radio " << radio << std::endl;
    }

    void dibujar() const override {
        std::cout << "Circulo '" << nombreFigura << "': Dibujando un circulo perfecto de color " << color 
                  << " y radio " << radio << "." << std::endl;
        std::cout << "       Area: " << (PI * radio * radio) << std::endl;
    }
    ~Circulo() override {
        std::cout << "    DESTRUCTOR Circulo: Radio " << radio << std::endl;
    }
};

   class Rectangulo : public Figura {
private:
    double base, altura;
public:
    Rectangulo(std::string c, double b, double h) : Figura(c, "Rectangulo"), base(b), altura(h) {
        std::cout << "    CONSTRUCTOR Rectangulo: Base " << b << ", Altura " << h << std::endl;
    }

    void dibujar() const override {
        std::cout << "Rectangulo '" << nombreFigura << "': Dibujando un rectangulo de color " << color 
                  << " con base " << base << " y altura " << altura << "." << std::endl;
        std::cout << "       Area: " << (base * altura) << std::endl;
    }

    ~Rectangulo() override {
        std::cout << "    DESTRUCTOR Rectangulo: Base " << base << ", Altura " << altura << std::endl;
    }
};

   class Triangulo : public Figura {
private:
    double bas, altu;
public:
    Triangulo(std::string c, double j, double k) : Figura(c, "Triangulo"), bas(j), altu(k) {
        std::cout << "    CONSTRUCTOR Rectangulo: Base " << j << ", Altura " << k << std::endl;
    }

    void dibujar() const override {
        std::cout << "Triangulo '" << nombreFigura << "': Dibujando un Triangulo de color " << color 
                  << " con base " << bas << " y altura " << altu << "." << std::endl;
        std::cout << "       Area: " << (bas * altu)/2 << std::endl;
    }

    ~Triangulo() override {
        std::cout << "    DESTRUCTOR Triangulo: Base " << bas << ", Altura " << altu << std::endl;
    }
};



int main() {
    double  a ,b ,c, d,e;
    std::cout << "--- ingrese el radio para el circulo ---" << std::endl;
    std::cin >> a;
    std::cout << "--- ingrese la base para el rectangulo ---" << std::endl;
    std::cin >> b;
    std::cout << "--- ingrese la altura para el rectangulo ---" << std::endl;
    std::cin >> c;
    std::cout << "--- ingrese la base para el triangulo ---" << std::endl;
    std::cin >> d;
    std::cout << "--- ingrese la altura para el triangulo ---" << std::endl;
    std::cin >> e;
    
    std::cout << "--- Creando y dibujando una Figura generica ---" << std::endl;
    Figura fig("Azul", "Figura Misteriosa");
    fig.dibujar();

    std::cout << "\n--- Creando y dibujando un Circulo ---" << std::endl;
    Circulo circ("Rojo", a);
    circ.dibujar();

    std::cout << "\n--- Creando y dibujando un Rectangulo ---" << std::endl;
    Rectangulo rect("Verde", b, c);
    rect.dibujar();
    
    std::cout << "\n--- Creando y dibujando un Triangulo ---" << std::endl;
    Triangulo tri("amarillo", d, e);
    rect.dibujar();
    
    std::cout << "\033[33mJoaquin Marcos Maita Flores.\033[0m" << std::endl;
    std::cout << "\033[33mrealizado por IA ( insomnio y la ansiedad).\033[0m" << std::endl;
    
    std::cout << "\n--- Fin de main ---" << std::endl;
    return 0;
}



