#include <iostream>

using namespace std;

int main() {
    char znak;
    int brojac = 0;
    int i = 0;

    cout << "Unesite 50 znakova: " << endl;

    do {
        cin >> znak;

        

        if (znak == 'a' || znak == 'e' || znak == 'i' || znak == 'o' || znak == 'u' ||
            znak == 'A' || znak == 'E' || znak == 'I' || znak == 'O' || znak == 'U') {
            brojac++;
        }

        i++; 

    } while (i < 50); 

    cout << "Ukupno samoglasnika: " << brojac << endl;

    return 0;
}