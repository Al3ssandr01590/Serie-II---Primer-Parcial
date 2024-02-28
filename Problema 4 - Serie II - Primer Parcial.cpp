// Escribe un programa en C++ que calcule la raíz cuadrada de un número ingresado por el usuario
//utilizando la función sqrt() de la biblioteca cmath. Asegúrate de incluir la biblioteca correspondiente.






#include <iostream>
#include <cmath> 

int main() {
    double numero;

   
    std::cout << "Ingrese un numero: ";
    std::cin >> numero;

   
    if (numero < 0) {
        std::cout << "No se puede calcular la raiz cuadrada de un numero negativo.\n";
    } else {
     
        double raiz = sqrt(numero);

     
        std::cout << "La raiz cuadrada de " << numero << " es: " << raiz << "\n";
    }

    return 0;
}
