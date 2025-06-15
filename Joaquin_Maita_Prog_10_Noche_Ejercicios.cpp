#include <iostream>  
using namespace std; // Permite usar cout y endl sin escribir std::

// Plantilla para intercambiar valores de cualquier tipo
template <typename T>  // T representa un tipo genérico (int, string, bool, etc.)
void intercambiar(T a, T b) {  // Recibe referencias para modificar los originales
    T temp = a;  // Guardamos el valor de 'a' en una variable temporal
    a = b;       // Asignamos el valor de 'b' a 'a'
    b = temp;    // Asignamos el valor original de 'a' (temp) a 'b'
    // Mostramos los valores ya intercambiados
    cout << "Dentro de la función: " << a << ", " << b << endl;
}
int main ()
{
    cout<<"\nIntercambio de datos"<<endl;
    cout<<"Datos originales\n"<<endl;
    cout<<"int = 10, 15"<<endl;
    cout<<"string = aqui, alla"<<endl;
    cout<<"bool = trues = 1,false= 0"<<endl;
    
    
    intercambiar ( 10 , 15 );
    intercambiar ( string(" aqui ") ,string ("alla"));
    intercambiar ( true , false); // 1 , 0
    cout<<" \nJoaquin Marcos Maita Flores -- Derechos Reservados\n"<<endl;
    return 0;
}