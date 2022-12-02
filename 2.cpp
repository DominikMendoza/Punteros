// Acceso con punteros
#include <iostream>
using namespace std;

int main() {
    int var1, var2;
    int* ptr;

    ptr = &var1;

    *ptr = 37;

    var2 = *ptr;
    
    cout << "Variable 1: " << var1 << " -> " << &var1 << endl;
    cout << "Puntero -> " << ptr << endl;
    cout << "Variable 2: " << var2 << " -> " << &var2 << endl;
    return 0;
}
