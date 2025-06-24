#include <iostream>
#include <string>
#include <algorithm> // Para std::reverse (solo para comparar)

std::string invertirRecursiva(const std::string& s) {
    // std::cout << "Llamada con: \"" << s << "\"" << std::endl; // Para traza

    // Caso Base: Cadena vacía o de un solo carácter
    if (s.length() <= 1) {
        // std::cout << " Caso Base, retorna: \"" << s << "\"" << std::endl;
        return s;
    }
    // Paso Recursivo:
    else {
        char primerCaracter = s[0];
        std::string restoDeLaCadena = s.substr(1);
        // std::cout << " Primer caracter: '" << primerCaracter
        //           << "', Resto: \"" << restoDeLaCadena << "\"" << std::endl;

        std::string restoInvertido = invertirRecursiva(restoDeLaCadena); // ¡Fe recursiva!
        // std::cout << " Resto invertido: \"" << restoInvertido << "\"" << std::endl;

        return restoInvertido + primerCaracter; // Combinar
    }
}

int main() {
    std::string texto;
    std::cout << "ingresa solo una palabra"<<std::endl;
    std::cin >> texto ;
    
    std::string original = "recursividad";
    std::string invertida = invertirRecursiva(original);

    std::cout << "Original: " << original << std::endl;
    std::cout << "Invertida (Recursiva): " << invertida << std::endl;

    // Para comparar (no es parte de la solución recursiva)
    std::string comparacion = original;
    std::reverse(comparacion.begin(), comparacion.end());
    std::cout << "Invertida (con std::reverse): " << comparacion << std::endl;

    std::cout << "Probando con 'abc': " << invertirRecursiva("abc") << std::endl;
    std::cout << "Probando con 'a': " << invertirRecursiva("a") << std::endl;
    std::cout << "Probando con \"\": " << invertirRecursiva("") << std::endl;
    std::cout << "probando con ingreso de palabra desde teclado < " + texto + " > a :"  << invertirRecursiva (texto)<<std::endl;
    std::cout <<  "\033[33m==Joaquin Marcos Maita Flores==\033[0m" << std::endl;
    std::cout <<  "\033[33m==\"No lo descargues, tiene virus\" ==\033[0m" << std::endl;
    return 0;
}
