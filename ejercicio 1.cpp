#include <iostream>
#include <cmath> // Necesario para la función sqrt (raíz cuadrada)

// Definición del espacio de nombres "Matematicas"
namespace Matematicas {
    // Función para sumar dos números
    int suma(int a, int b) {
        return a + b;
    }

    // Función para restar dos números
    int resta(int a, int b) {
        return a - b;
    }

    // Función para multiplicar dos números
    int multiplicacion(int a, int b) {
        return a * b;
    }

    // Función para dividir dos números
    double division(int a, int b) {
        // Asegurarse de no dividir por cero
        if (b != 0) {
            return static_cast<double>(a) / b;
        } else {
            std::cerr << "Error: División por cero." << std::endl;
            return 0; // Manejo de error
        }
    }

    // Función para elevar un número a una potencia
    double potencia(int base, int exponente) {
        return std::pow(base, exponente);
    }

    // Función para calcular la raíz cuadrada de un número
    double raizCuadrada(int numero) {
        // Asegurarse de que el número sea no negativo
        if (numero >= 0) {
            return std::sqrt(numero);
        } else {
            std::cerr << "Error: No se puede calcular la raíz cuadrada de un número negativo." << std::endl;
            return 0; // Manejo de error
        }
    }
}

// Función principal (main)
int main() {
    // Uso de las funciones desde el espacio de nombres "Matematicas"
    int resultado_suma = Matematicas::suma(5, 3);
    int resultado_resta = Matematicas::resta(10, 4);
    int resultado_multiplicacion = Matematicas::multiplicacion(3, 4);
    double resultado_division = Matematicas::division(8, 2);
    double resultado_potencia = Matematicas::potencia(2, 3);
    double resultado_raiz = Matematicas::raizCuadrada(9);

    // Mostrar resultados
    std::cout << "Resultado de la suma: " << resultado_suma << std::endl;
    std::cout << "Resultado de la resta: " << resultado_resta << std::endl;
    std::cout << "Resultado de la multiplicación: " << resultado_multiplicacion << std::endl;
    std::cout << "Resultado de la división: " << resultado_division << std::endl;
    std::cout << "Resultado de la potencia: " << resultado_potencia << std::endl;
    std::cout << "Resultado de la raíz cuadrada: " << resultado_raiz << std::endl;

    return 0;
}