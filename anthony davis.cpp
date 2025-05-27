#include <iostream>
using namespace std;
// 	Izračunati aritmetičku sredinu prirodnih brojeva od 1 do n koji su djeljivi sa 7.
/*
int main() {
    int n;
    int i = 0;
    double sredina = 0;
    int a = 1;

    cout << "unesi broj n:";
    cin >> n;

    do {
        if (a % 7 == 0) {
            sredina += a;
            i++;
        }
        a++;
    } while (a <= n);
    cout << sredina / i << endl;
    return 0;

}
*/

// 	Izračunati aritmetičku sredinu prirodnih brojeva od 1 do n koji su djeljivi sa a.
/*
int main() {
    int  a,n;
    int b = 1;
    int i = 0;
    int sredina = 0;

    cout << "unesi broj a:";
    cin >> a;
    cout << "unesi broj n:";
    cin >> n;

    do {
        if (b % a == 0) {
            sredina += b;
            i++;
        }
        b++;
    } while (b <= n);
    cout <<"aritmeticka sredina je :"<< sredina / i << endl;
    return 0;

}
*/

// Izračunati aritmetičku sredinu prirodnih brojeva od k do n.
/*
int main() {
    int k,n;
    int i = 0;
    int sredina = 0;
    int brojac = 0;
    cout << "unesi broj k:";
    cin >> k;
    cout << "unesi broj n:";
    cin >> n;
    
    i = k;
    do {
        sredina += i;
        brojac++;
        i++;

    } while (i <= n);
    
    cout << (float)sredina / brojac << endl;
    return 0;
}
*/

//	Izračunati aritmetičku sredinu parnih brojeva od k do n.
/*
int main() {
    int k, n;
    int i;
    int sredina = 0;
    int brojac = 0;

    cout << "unesi broj k:";
    cin >> k;
    cout << "unesi broj n:";
    cin >> n;

    i = k;
    do {
        if (i % 2 == 0) {
            sredina += i;
            brojac++;
        }
        i++;

    } while (i <= n);
    cout << (float)sredina / brojac;
    return 0;
       
}
*/

// Izračunati aritmetičku sredinu neparnih brojeva od k do n.
/*
int main() {
    int n, k;
    int brojac = 0;
    int sredina = 0;

    cout << "unesi broj k:";
    cin >> k;
    cout << "unesi broj n:";
    cin >> n;

    do {
        if (k % 2 != 0) {
            sredina += k;
            brojac++;
        }
        k++;
    } while (k <= n);
    cout << (float)sredina / brojac << endl;
    return 0;
}
*/

// 	Izračunati aritmetičku sredinu prirodnih brojeva od k do n koji nisu djeljivi sa 3.
/*
int main() {
    int n, k;
    int brojac = 0;
    int sredina = 0;

    cout << "unesi broj k:";
    cin >> k;
    cout << "unesi broj n:";
    cin >> n;

    do {
        if (k % 3 != 0) {
            sredina += k;
            brojac++;
        }
        k++;

    } while (k <= n);
    cout << (float)sredina / brojac << endl;
    return 0;
}
*/

// unesi broj n i unesi kolik je broj n i izracunaj sumu
/*
int main() {
    int n, a;
    int brojac = 0;
    int suma = 0;

    cout << "unesi broj n:";
    cin >> n;

    do {
        cout << "unesi broj :";
        cin >> a;
        suma += a;
        brojac++;
    } while (brojac < n);
    cout << suma << endl;
    return 0;
}
*/

// 	Napisati program za učitavanje 10 brojeva i ispis koliko je učitano negativnih, nula i pozitivnih brojeva. 
/*
int main() {
    int a = 10;
    int b;
    int poz = 0;
    int nula = 0;
    int neg = 0;
    int i = 0;

    do {
        cout << "unesi broj:";
        cin >> b;
        if (b == 0)
            nula++;
        else if (b < 0)
            neg++;
        else if (b > 0)
            poz++;
        i++;

    } while (i <= a);
    cout << "ima " << poz << " pozitivnih brojeva" << endl;
    cout << "ima " << neg << " negativnih brojeva" << endl;
    cout << "ima " << nula << " nule" << endl;
    return 0;
}
*/