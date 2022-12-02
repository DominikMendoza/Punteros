// Recorrido de una cadena con punteros
#include <iostream>
using namespace std;

void imprime(char* cadena) {
    while (*cadena) {
        cout << *cadena++<< ' ';
    }
    cout << endl;
}
int main() {
    char str[] = "Una cadena simple";
    imprime(str);
    return 0;
}
