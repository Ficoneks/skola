#include <iostream>
using namespace std;

//napisi program koji ispise koliko je parnih brojeva u polju
int main() {
    int brojac = 0;
    int a = 1;
    int b = 10;
    int polje[10];
    for ( int i = 0; i<10; i++) {
        polje[i] = rand() % (b-a+1)+a;
    }
    for ( int i = 0; i<10; i++) {
        if (polje[i] % 2 == 0) {
            brojac++;
        }
    }
    cout << brojac << endl;
    return 0;
}
