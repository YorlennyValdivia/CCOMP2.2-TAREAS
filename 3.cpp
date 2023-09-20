#include <iostream>
using namespace std;

int main() {
    long long n = 600851475143; // Número que deseamos encontrar su mayor factor primo
    long long max = 0; // Variable para almacenar el mayor factor primo encontrado

    // Factorización por
    while (n % 2 == 0) {
        max = 2;
        n /= 2;
    }

    // Ahora, n es un número impar, comenzamos a buscar factores primos a partir de 3
    for (long long i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            max = i;
            n /= i;
        }
    }

    // Si n es mayor que 2 al final, entonces n mismo es un factor primo
    if (n > 2) {
        max = n;
    }

    cout << "El mayor factor primo es: " << max << endl;
    return 0;
}
