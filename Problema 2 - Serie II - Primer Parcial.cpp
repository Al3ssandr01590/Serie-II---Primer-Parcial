//2. Escribe un programa en C++ que solicite al usuario un número entero positivo n y muestre la suma de
//todos los números enteros desde 1 hasta n.





#include <iostream>

int main() {
    int n;
    int suma = 0;

 
    std::cout << "Ingrese un numero entero positivo: ";
    std::cin >> n;

    
    if (n <= 0) {
        std::cout << "El numero ingresado no es positivo.\n";
    } else {
      
        for (int i = 1; i <= n; ++i) {
            suma += i;
        }

      
        std::cout << "La suma de todos los numeros desde 1 hasta " << n << " es: " << suma << "\n";
    }

    return 0;
}
