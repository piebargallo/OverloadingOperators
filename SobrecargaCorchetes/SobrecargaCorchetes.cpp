#include <iostream>

class MiClase {
private:
    // Array with 10 integers
    int datos[10]; 

public:
    MiClase() {
        // Initialization array
        for (int i = 0; i < 10; ++i) {
            datos[i] = i * 10;
        }
    }

    // Overloading operator []
    int& operator [] (size_t) {
        int indice{ 0 };
        if (indice < 0 || indice >= 10) {
            std::cerr << "Índice fuera de rango" << std::endl;
            // Aquí deberías manejar el error adecuadamente
            exit(EXIT_FAILURE);
        }
        return datos[indice];
    }
};

int main() {
    setlocale(LC_ALL, "es-Es.utf8");
    MiClase obj;
    std::cout << "Elemento en el índice 3: " << obj[3] << std::endl; 
    obj[3] = 100; 
    std::cout << "Nuevo valor en el índice 3: " << obj[3] << std::endl;  
    return 0;
}
