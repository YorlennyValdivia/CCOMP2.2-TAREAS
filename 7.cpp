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
    int i = 5;
    while (i * i <= num) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false; // Si es divisible por i o i + 2, no es primo
        }
        i += 6; // Avanzamos en pasos de 6 (para evitar verificar múltiplos innecesarios)
    }
    return true; // Si no se encontraron divisores, es primo
}

// Función para encontrar el n-ésimo número primo
int encontrarPrimoNumero(int n) {
    if (n == 1) {
        return 2; // El primer número primo es 2
    }

    int contador = 1; // Inicializamos el contador en 1 (ya que 2 es el primer primo)
    int numero = 3; // Comenzamos desde el número 3 y avanzamos de 2 en 2 (saltando pares)

    while (contador < n) {
        if (esPrimo(numero)) {
            contador++; // Si encontramos un primo, incrementamos el contador
        }
        numero += 2; // Avanzamos al siguiente número impar
    }

    return numero; // Devolvemos el n-ésimo número primo encontrado
}

int main() {
    int n = 10001; // Encuentra el décimo primer número primo
    int resultado = encontrarPrimoNumero(n);

    cout << "El " << n << "º número primo es: " << resultado << endl;

    return 0;
}
