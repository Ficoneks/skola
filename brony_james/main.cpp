#include <iostream>
using namespace std;

/*
int main() {
    int a;
    int brojac = 0;
    int zbroj = 0;

    do {
        cout << "unesi neki broj: ";
        cin>>a;
        zbroj+=a;
        brojac++;

    }while(a!=0);

    cout<<"zbroj brojeva je: "<< zbroj<<endl;
    cout<<"a ukupno je "<< brojac <<endl;
    return 0;
}
*/

/*
int main() {
    int broj;
    int cifra;
    int zbroj = 0;

    cout<<"unesi broj:";
    cin>>broj;
    int temp = broj;

    do {
        cifra = temp % 10;
        zbroj += cifra;
        temp /=  10;
    }while(temp > 0);
    cout << "Zbroj znamenki broja " << broj << " je: " << zbroj << endl;
}
*/

int main() {
    int pin = 1234;
    int a;

    do {
        cout<<"uensi PIN:";
        cin>>a;
        if (a == pin) {
            cout<<"tocan pin";
        }
        else {
            cout<<"krivi pin pokusaj ponovo!";
            return 1;
        }
    }while (a!=pin);
    return 0;
}