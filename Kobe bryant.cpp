#include <iostream>
using namespace std;

// ispisi prvih n brojeva višekratnika broja 4
/*
int main() {
    int n;
    int i = 1;  

    cout << "Unesi broj n: ";
    cin >> n;

    
    do {
        cout << 4 * i << " ";  
        i++;  
    } while (i <= n);  

    cout << endl;

    return 0;
}
*/

// ispisi trostruke vrijednosti prvih n brojeva. n unosi korisnik
/*
int main() {
    int a = 0;
    int n;
    int trostruki;

    cout << "unesi broj:";
    cin >> n;

    do {
        trostruki = a * 3;
        cout << trostruki<<endl;
        a++;
    } while (a <= n);
    return 0;
}
*/


// ispis prvih n brojeva i njihovih kvadrata... npr:
//1 = > 1
//2 = > 4
//3 = > 9
//4 = > 16
/*
int main() {
    int a = 0;
    int kvadrat;
    int n;

    cout << "unesi broj n:";
    cin >> n;

    do {
        if (a != 0) {
            kvadrat = a * a;
            cout << a << " = > " << kvadrat << endl;
        }
        a++;
    }while(a <= n);
    return 0;
}
*/

// robot slaze jabuke u sanduke. Prosjecna masa jednog sanduka mora biti jednaka ili manja 1000g. Masa svake jabuke je drukcija. Na traku je doslo n jabuka. 
//U program se upisuje n(broj jabuka) i za svaku jabuku tezinu(decimale, u kilogramima).
//Program ispise koliko sanduka je potrebno za skladistenje n jabuka.
/*
int main() {
    float jabuka;
    int n;
    float sanduk = 0.0;
    int sanducic = 0;
    int i = 0;

    cout << "unesi broj n:";
    cin >> n;

    do {
        cout << "unesi teziku jabuke:";
        cin >> jabuka;
        sanduk += jabuka;
        if (sanduk > 1.0) {
            sanducic++;
            sanduk = jabuka;
        }
        i++;
    } while (i < n);
    if (sanduk > 0) {
        sanducic++;
    }
    cout << "potreno je " << sanducic << " sanduka " << endl;
    return 0;
}
*/

//napisi program koji ispise: prosjecan broj bodova, maksimalan broj bodova, minimalan broj bodova.
//Program ucitava 10 vrijednosti koji predstavljaju bodove.
//Potrebno je ispisati koji unos je bio najmanji i koliko on iznosi, koji unos je bio najveci i koliko on iznosi te prosjecan broj bodova.
/*
int main() {
    int broj = 10;
    int najmanji = 0;
    int najveci = 0;
    int prosjecan = 0;
    int a;
    int pros = 0;

    cout << "unesi broj bodova:";
    cin >> najmanji;
    najveci = najmanji;

    do {
        cout << "unesi broj bodova:";
        cin >> a;
        if (a > 100) {
            cout << "ne mozes imati toliko bodova!!";
            cout << endl;
        }
        if (a > najveci) {
            najveci = a;
        }
        if (a < najmanji) {
            najmanji = a;
        }
        prosjecan += a;
        pros++;
    } while (pros < broj);
    cout << "najmanji broj je: " << najmanji << endl;
    cout << "najveci broj je: " << najveci << endl;
    cout << "prosjek brojeva je: " << prosjecan / pros << endl;
    return 0;
}
*/