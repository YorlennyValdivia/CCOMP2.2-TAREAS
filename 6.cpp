#include <iostream>
using namespace std;

int main() {
    int n = 100; // Número de los primeros cien números naturales
    int suma_cuadrados = 0;
    int suma = 0;

    // Calcula la suma de los cuadrados de los primeros cien números
    for (int i = 1; i <= n; i++) {
        suma_cuadrados += i * i;
    }

    // Calcula la suma de los primeros cien números y luego la eleva al cuadrado
    for (int i = 1; i <= n; i++) {
        suma += i;
    }
    int cuadrado_suma = suma * suma;

    // Calcula la diferencia entre el cuadrado de la suma y la suma de los cuadrados
    int diferencia = cuadrado_suma - suma_cuadrados;

    cout << "La diferencia entre la suma de los cuadrados y el cuadrado de la suma de los primeros " << n << " números naturales es: " << diferencia << endl;

    return 0;
}
