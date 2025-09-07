#include <iostream>

using namespace std;

int main() {

    int x, modulo_x;

    cin >> x;

    if (x < 0) {
        modulo_x = x * -1;
    } else {
        modulo_x = x;
    }

    cout << modulo_x << endl;

    return 0;

}