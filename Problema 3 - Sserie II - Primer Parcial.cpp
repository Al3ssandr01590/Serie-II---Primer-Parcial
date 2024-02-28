// Escribe una función en C++ llamada esPrimo que reciba un número entero como parámetro y devuelva
// true si es primo y false si no lo es. Luego, en el main(), pide al usuario un número y muestra si es primo o no.




#include <iostream>


bool esPrimo(int numero) {
  
    if (numero <= 1) {
        return false;
    }

    
    for (int i = 2; i * i <= numero; ++i) {
        if (numero % i == 0) {
            return false; 
        }
    }
    return true; 
}

int main() {
    int numero;

    
    std::cout << "Ingrese un numero entero: ";
    std::cin >> numero;

   
    if (esPrimo(numero)) {
        std::cout << numero << " es un numero primo.\n";
    } else {
        std::cout << numero << " no es un numero primo.\n";
    }

    return 0;
}
