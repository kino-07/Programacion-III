#include <iostream>
#include <string>
#include <stdexcept> // Para manejo de excepciones (opcional)

class Estudiante {
private:
    std::string nombre;
    int edad;
    std::string matricula;
    double promedio;
    std::string carrera; // NUEVO atributo
    std::string correo;  // NUEVO atributo

public:
    // Constructor: se ejecuta al crear un nuevo objeto Estudiante
    // Permite asignar valores iniciales al objeto
    Estudiante(std::string nom, int ed, std::string matr, std::string carr = "", std::string mail = "") {
        setNombre(nom);
        setEdad(ed);
        matricula = matr;
        promedio = 0.0;
        setCarrera(carr);
        setCorreo(mail);
        std::cout << "Estudiante '" << nombre << "' creado." << std::endl;
    }

    // Getters
    // Métodos para obtener los valores privados desde fuera
    std::string getNombre() const { return nombre; }
    int getEdad() const { return edad; }
    std::string getMatricula() const { return matricula; }
    double getPromedio() const { return promedio; }
    std::string getCarrera() const { return carrera; }
    std::string getCorreo() const { return correo; }

    // Setters con validación
    // Métodos para modificar valores privados de forma segura (con validaciones)
    void setNombre(const std::string& nuevoNombre) {
        if (!nuevoNombre.empty()) {
            nombre = nuevoNombre;
        } else {
            std::cout << "Error: El nombre no puede estar vacío." << std::endl;
        }
    }

    void setEdad(int nuevaEdad) {
        if (nuevaEdad >= 5 && nuevaEdad <= 100) {// Rango válido de edad
            edad = nuevaEdad;
        } else {
            std::cout << "Error: Edad '" << nuevaEdad << "' inválida para el estudiante " << nombre << "." << std::endl;
        }
    }

    void setPromedio(double nuevoPromedio) {
        if (nuevoPromedio >= 0.0 && nuevoPromedio <= 10.0) {
            promedio = nuevoPromedio;
        } else {
            std::cout << "Error: Promedio '" << nuevoPromedio << "' inválido para " << nombre << "." << std::endl;
        }
    }

    void setCarrera(const std::string& nuevaCarrera) {
        if (!nuevaCarrera.empty()) {
            carrera = nuevaCarrera;
        } else {
            carrera = "No especificada";
        }
    }

    void setCorreo(const std::string& nuevoCorreo) {
        // Validamos que contenga al menos un '@'
        if (nuevoCorreo.find('@') != std::string::npos) {
            correo = nuevoCorreo;
        } else {
            std::cout << "Error: Correo electrónico inválido." << std::endl;
        }
    }
      // Método para mostrar todos los datos del estudiante

    void mostrarInformacion() const {
        std::cout << "-----------------------------" << std::endl;
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Edad: " << edad << " años" << std::endl;
        std::cout << "Matrícula: " << matricula << std::endl;
        std::cout << "Promedio: " << promedio << std::endl;
        std::cout << "Carrera: " << carrera << std::endl;
        std::cout << "Correo: " << correo << std::endl;
        std::cout << "-----------------------------" << std::endl;
    }
};

int main() {
    Estudiante estudiante1("Juaquin Soliz", 20, "A123", "Ingeniería", "juaquin@upds.edu");
    estudiante1.mostrarInformacion();

    std::cout << "\nIntentando actualizar edad, promedio y correo..." << std::endl;
    estudiante1.setEdad(21); // Edad válida
    estudiante1.setPromedio(8.5); // Promedio válido
    estudiante1.setCorreo("correo-invalido"); // Prueba de validación (falta '@')
    estudiante1.setEdad(150); // Edad inválida (fuera de rango)
    estudiante1.setPromedio(-2.0); // Promedio inválido

    std::cout << "\nInformación actualizada de " << estudiante1.getNombre() << ":" << std::endl;
    estudiante1.mostrarInformacion();

     //Descomentar estas líneas para observar los errores de compilador por acceso indebido:
     //estudiante1.edad = 25; // ERROR: 'edad' es privado
     //std::cout << estudiante1.promedio; // ERROR: 'promedio' también es privado

    // Cómo observar los errores:
    std::cout << "\nSi descomentas las líneas anteriores y compilas, verás errores como:" << std::endl;
    std::cout << "'int Estudiante::edad' is private within this context" << std::endl;
    std::cout << "Esto enseña a respetar el encapsulamiento y a usar setters/getters." << std::endl;

    // Estudiante con datos inválidos al inicio
    Estudiante estudiante2("Priscila Vaca", -10, "B456", "", "pvaca.com");
    estudiante2.mostrarInformacion();
    std::cout << "\033[33mJoaquin Marcos Maita Flores.\033[0m" << std::endl;
    std::cout << "\033[33mSIN ERRORES.\033[0m" << std::endl;

    return 0;
}