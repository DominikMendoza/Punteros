// Arreglos definidos y notaciones de punteros
#include <iostream>
using namespace std;

int main() {
    char str1[] = "Una cadena definida";
    char* str2 = (char*)"Cadena definida con notación de puntero";

    //str2 += 7;
    
    cout << str1 << endl;
    cout << str2 << endl;
    return 0;
}
