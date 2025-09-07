#include <iostream>

using namespace std;

int main() {

    int kanto, johto, hoenn, novos_kanto, novos_johto, novos_hoenn;

    cin >> kanto;
    cin >> johto;
    cin >> hoenn;
    cin >> novos_kanto;
    cin >> novos_johto;
    cin >> novos_hoenn;

    cout << kanto + novos_kanto << " " << johto + novos_johto << " " << hoenn + novos_hoenn << endl;

    return 0;

}