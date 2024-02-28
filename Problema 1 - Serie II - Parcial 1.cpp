//1. Escribe un programa en C++ que declare dos variables enteras, a y b, y calcule la suma, resta, 
//multiplicación y división de estas variables. Muestra los resultados por pantalla.




#include <iostream>

int main() {
    int opcion;

    while (true) {
        std::cout << "Seleccione una opcion:\n";
        std::cout << "1. Realizar operacion\n";
        std::cout << "2. Salir\n";
        std::cout << "Ingrese su opcion: ";
        std::cin >> opcion;

        if (opcion == 1) {
            int num1, num2;
            char operacion;
            double resultado;

            std::cout << "Ingrese el primer numero: ";
            std::cin >> num1;
            std::cout << "Ingrese el segundo numero: ";
            std::cin >> num2;
            std::cout << "Ingrese la operacion (+, -, *, /): ";
            std::cin >> operacion;

            switch (operacion) {
                case '+':
                    resultado = num1 + num2;
                    break;
                case '-':
                    resultado = num1 - num2;
                    break;
                case '*':
                    resultado = num1 * num2;
                    break;
                case '/':
                    if (num2 != 0) {
                        resultado = static_cast<double>(num1) / num2;
                    } else {
                        std::cout << "Error: Division por cero\n";
                        continue; 
                    }
                    break;
                default:
                    std::cout << "Operacion no valida\n";
                    continue; 
            }

            std::cout << "Resultado: " << resultado << "\n";
        } else if (opcion == 2) {
            std::cout << "Gracias por usar la calculadora";
            break; 
        } else {
            std::cout << "Opcion no valida\n";
        }
    }

    return 0;
}
