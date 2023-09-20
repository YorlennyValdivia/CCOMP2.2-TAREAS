#include <iostream>
using namespace std;

int main() {
    int suma_objetivo = 1000;

    for (int a = 1; a < suma_objetivo; a++) {
        for (int b = a + 1; b < suma_objetivo; b++) {
            int c = suma_objetivo - a - b;

            // Verificar si es un triplete pitagórico
            if (a * a + b * b == c * c) {
                long long producto = a * b * c;
                cout << "El triplete pitagórico es: a = " << a << ", b = " << b << ", c = " << c << endl;
                cout << "El producto abc es: " << producto << endl;
                return 0;
            }
        }
    }

    cout << "No se encontró ningún triplete pitagórico con la suma igual a " << suma_objetivo << endl;
    return 0;
}
