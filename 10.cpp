#include <iostream>
using namespace std;

// Función para verificar si un número es primo
bool esPrimo(int num) {
    if (num <= 1) {
        return false; // 1 y números negativos no son primos
    }
    if (num <= 3) {
        return true; // 2 y 3 son primos
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false; // Los múltiplos de 2 y 3 no son primos
    }
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false; // Si es divisible por i o i + 2, no es primo
        }
    }
    return true; // Si no se encontraron divisores, es primo
}

int main() {
    long long limite = 2000000; // Dos millones
    long long suma = 0;

    // Iterar a través de los números y sumar los primos
    for (int i = 2; i < limite; i++) {
        if (esPrimo(i)) {
            suma += i; // Si es primo, agregarlo a la suma
        }
    }

    cout << "La suma de todos los números primos menores de " << limite << " es: " << suma << endl;

    return 0;
}
