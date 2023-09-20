#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"ingrese el numero de 5 digitos: "<<endl;
    cin>>x;
// Extraer cada cifra individualmente
    int c5 = x % 10;
    int c4 = (x / 10) % 10;
    int c3 = (x / 100) % 10;
    int c2 = (x / 1000) % 10;
    int c1 = (x / 10000) % 10;

    // Verificar si x es un palíndromo
    if (c5 == c1 && c4 == c2) {
        cout << x << " es palíndromo" << endl;
    } else {
        cout << x << " no es palíndromo" << endl;
    }

    return 0;
}
