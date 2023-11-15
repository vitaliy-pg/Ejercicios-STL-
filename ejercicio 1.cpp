#include <iostream>

namespace Matematicas {
    // Función para sumar dos números
    int suma(int a, int b) {
        return a + b;
    }

    // Función para restar dos números
    int resta(int a, int b) {
        return a - b;
    }
}

// Función principal (main)
int main() {
    // Uso de las funciones desde el espacio de nombres "Matematicas"
    int resultado_suma = Matematicas::suma(5, 3);
    int resultado_resta = Matematicas::resta(10, 4);

    // Mostrar resultados
    std::cout << "Resultado de la suma: " << resultado_suma << std::endl;
    std::cout << "Resultado de la resta: " << resultado_resta << std::endl;

    return 0;
}