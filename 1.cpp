#include <iostream>
using namespace std;

int main(){
    int sum = 0; // Inicializa la variable 'sum' en 0 para almacenar la suma.
    int num = 1; // Inicializa la variable 'num' en 1 para comenzar desde el número 1.

    while (num < 10){ // Comienza un bucle while que se ejecuta mientras 'num' sea menor que 10.
        if (num % 3 == 0 || num % 5 == 0){ // Comprueba si 'num' es divisible por 3 o 5.
            sum += num; // Si es divisible, agrega 'num' a la variable 'sum'.
        }
        num = num + 1; // Incrementa 'num' en 1 en cada iteración del bucle.
    }

    cout << sum<<endl;
    return 0;
}
