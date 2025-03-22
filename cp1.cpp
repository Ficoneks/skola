#include <iostream>
using namespace std;

/*
int main() {
    char uneseni;
    char prijasnji;
    cin >> uneseni;
    int brojUnesenih = 0;
    do {
        prijasnji = uneseni;
        cin >> uneseni;
        brojUnesenih++;
    } while (uneseni >= prijasnji);

    return 0;
}
*/


/*
int main() {
    int a;
    cout << "unesi broj:";
    cin >> a;
    int brojac = 0;


    do {
      
        
        brojac++;
        a /=10;

    } while (a !=0);
        
    cout << brojac;
    return 0;

}

*/


int main() {
    int main() {
        int broj, najveci;
        int ponovi;

        
        cout << "Unesite broj: ";
        cin >> broj;
        najveci = broj; 

        do {
            cout << "Unesite broj: ";
            cin >> broj;

            if (broj > najveci) {
                najveci = broj; 
            }

            cout << "Zelite li ponoviti unos? (1 - da, 0 - ne): ";
            cin >> ponovi;
        } while (ponovi == 1); 

        cout << "Najveci uneseni broj je: " << najveci << endl;
        return 0;
    }
}
