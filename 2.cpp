#include <iostream>
using namespace std;

int main() {
    int sum = 0;   // Inicializa la suma de términos pares en 0
    int num1 = 1;  // Primer número de Fibonacci
    int num2 = 1;  // Segundo número de Fibonacci

    while (num2 < 4000000) {  // Continúa mientras el segundo número sea menor que 4 millones
        if (num2 % 2 == 0) {  // Comprueba si el segundo número es par
            sum += num2;      // Si es par, agrega el valor a la suma
        }
        
        // Calcula el siguiente número de Fibonacci
        int num3 = num1 + num2;
        num1 = num2;
        num2 = num3;
    }

    cout << "La suma de los términos pares de Fibonacci que no superan los cuatro millones es: " << sum << endl;

    return 0;
}
