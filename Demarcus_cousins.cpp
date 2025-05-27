#include <iostream>
using namespace std;


// Učitati polje od 10 brojeva. Izračunati zbroj brojeva djeljivih s 3 ili sa 5 i koliko ih ima!
/*
int main() {
	int brojac = 0, zbroj = 0;
	int p[10];

	for (int i = 0; i < 10; i++) {
		cout << "Unesi broj: ";
		cin >> p[i];

		if (p[i] % 3 == 0 || p[i] % 5 == 0) {
			zbroj += p[i];
			brojac++;
		}
	}

	cout << "Zbroj brojeva djeljivih s 3 ili 5 = " << zbroj << endl;
	cout << "Brojeva djeljivih s 3 ili 5 ima = " << brojac << endl;

	return 0;
}
*/

//Učitati polje od 7 brojeva. Ispisati iz polja sve parne brojeve manje od 15!
/*
int main() {
	int p[7];

	for (int i = 0; i < 7; i++) {
		cout << "unesi broj:";
		cin >> p[i];
		if (p[i] % 2 == 0 && p[i] < 15);
		cout << p[i] << endl;
	}
	return 0;
}
*/
// Učitati polje od 10 brojeva. Ispisati iz polja sve brojeve veće od aritmetičke sredine učitanih brojeva.
/*
int main() {
	int p[10];
	int zbroj = 0;
	for (int i = 0; i < 10; i++) {
		cout << "unesi broj:";
		cin >> p[i];
		zbroj += p[i];

	}
	for (int i = 0; i < 10; i++) {
		if (p[i] > (zbroj % 10))
			cout<< p[i] << endl;
	}
	return 0;
}
*/

//Učitati 5 brojeva u polje. Ispisati novo polje čiji su elementi trostruko veći (3x) od elemenata prvog polje.
/*
int main() {
	int p[5];
	int p2[5];

	for (int i = 0; i < 5; i++) {
		cout << "unesi broj:";
		cin >> p[i];
		p2[i] = p[i] * 3;

	}
	for (int i = 0; i < 5; i++) {
		cout << p2[i] << " ";
	}
	return 0;
}
*/


