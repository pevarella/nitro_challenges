#include <iostream>

using namespace std;

int main() {

    int nota;
    char conceito;

    cin >> nota;

    if (nota >= 86) {
        conceito = 'A';
    } else if (nota >= 61) {
        conceito = 'B';
    } else if (nota >= 36) {
        conceito = 'C';
    } else if (nota >= 1) {
        conceito = 'D';
    } else {
        conceito = 'E';
    }

    cout << conceito << endl;
    
    return 0;

}
