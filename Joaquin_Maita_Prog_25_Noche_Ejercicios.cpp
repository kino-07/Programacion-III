#include <iostream>
#include <string>

// [1] Clase que representa una parte del automóvil: el Motor
class Motor {
private:
    int caballosDeFuerza;  // [2] Atributo: potencia del motor
    bool encendido;        // [3] Atributo: estado del motor (on/off)

public:
    // [4] Constructor con valor por defecto (150 HP)
    Motor(int hp = 150) : caballosDeFuerza(hp), encendido(false) {
        std::cout << "  CONSTRUCTOR Motor: Creado motor de " << caballosDeFuerza << " HP." << std::endl;
    }

    // [5] Destructor
    ~Motor() {
        std::cout << "  DESTRUCTOR Motor: Destruido motor de " << caballosDeFuerza << " HP." << std::endl;
        std::cout <<  "\033[33m==Joaquin Marcos Maita Flores==\033[0m" << std::endl;
    }

    // [6] Método para encender el motor
    void arrancar() {
        if (!encendido) { 
            encendido = true; 
            std::cout << "  Motor: ¡BRUM! Encendido." << std::endl;
        }
        else { 
            std::cout << "  Motor: Ya estaba encendido." << std::endl; 
        }
    }

    // [7] Método para apagar el motor
    void detener() {
        if (encendido) { 
            encendido = false; 
            std::cout << "  Motor: ...silencio. Apagado." << std::endl;
        }
        else { 
            std::cout << "  Motor: Ya estaba apagado." << std::endl; 
        }
    }

    // [8] Método para mostrar estado actual
    void mostrarEstado() const {
         std::cout << "  Estado del Motor: " << (encendido ? "Encendido" : "Apagado") 
                   << ", HP: " << caballosDeFuerza << std::endl;
    }
};

// [9] Clase que representa el automóvil completo (contiene un Motor)
class Automovil {
private:
    std::string marca;     // [10] Atributo: marca del auto
    std::string modelo;    // [11] Atributo: modelo del auto
    Motor motorInterno;    // [12] Objeto Motor como miembro (COMPOSICIÓN)

public:
    // [13] Constructor que inicializa todos los miembros
    Automovil(std::string ma, std::string mo, int hpDelMotor) 
        : marca(ma), modelo(mo), motorInterno(hpDelMotor) {
        std::cout << "CONSTRUCTOR Automovil: Ensamblado un " << marca << " " << modelo 
                  << " con un motor." << std::endl;
    }

    // [14] Destructor
    ~Automovil() {
        std::cout << "DESTRUCTOR Automovil: Desguazando el " << marca << " " << modelo << "." << std::endl;
        // [15] Nota: motorInterno se destruye automáticamente después
    }
    
    // [16] Método para encender el auto (delega al Motor)
    void encender() {
        std::cout << modelo << ": Intentando encender..." << std::endl;
        motorInterno.arrancar();
    }

    // [17] Método para apagar el auto (delega al Motor)
    void apagar() {
        std::cout << modelo << ": Intentando apagar..." << std::endl;
        motorInterno.detener();
    }

    // [18] Método para mostrar diagnóstico completo
    void verDiagnostico() const {
        std::cout << "Diagnostico del " << modelo << ":" << std::endl;
        motorInterno.mostrarEstado();
    }
};

int main() {
    // [19] Creación de objeto Automovil en el stack
    std::cout << "--- Creando un Automovil en el Stack ---" << std::endl;
    Automovil miAuto("SuperMarca", "ModeloX", 200);

    // [20] Operaciones con el auto
    miAuto.verDiagnostico();
    miAuto.encender();
    miAuto.verDiagnostico();
    miAuto.apagar();

    // [21] Fin del ámbito - se destruyen objetos automáticamente
    std::cout << "\n--- Saliendo de main (miAuto se destruira) ---" << std::endl;
    return 0;
}