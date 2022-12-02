// Punteros y tipos de datos
#include <iostream>
using namespace std;

int main() {
    int variableInt = 4;
    float variableFloat = 0.92;

    int* ptrInt;
    float* ptrFloat;

    ptrInt = &variableInt;
    ptrFloat = &variableFloat;

    cout << "Variable entera: " << *ptrInt << endl;
    cout << "Variabel flotante: " << *ptrFloat << endl;
    return 0;
}
