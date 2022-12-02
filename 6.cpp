// Parametros por referencia
#include <iostream>
using namespace std;

void convertir(float& valor) {
    valor = valor * 1.8 + 32;
    cout << "Valor de memoria de valor: " << &valor << endl;
}

int main() {
    float grados;
    cout << "Ingrese los grados Fahrenheit: " << endl;
    //cin >> grados;
    grados = 12.0;
    cout << "Valor de memoria de grados: " << &grados << endl;

    convertir(grados);
    cout << grados;
    return 0;
}
