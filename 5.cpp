#include <iostream>
using namespace std;

// Función para calcular el máximo común divisor (MCD) usando el algoritmo de Euclides
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

// Función para calcular el mínimo común múltiplo (MCM) utilizando el MCD
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int result = 1;

    // Calcular el MCM de todos los números desde 2 hasta 20
    for (int i = 2; i <= 20; i++) {
        result = lcm(result, i);
    }

    cout << "El entero positivo más pequeño es " << result << endl;

    return 0;
}
