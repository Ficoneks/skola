#include <iostream>
using namespace std;
//Učitati 5 prirodnih brojeva. Ispisati sve brojeve koji su veći od najmanjeg učitanog troznamenkastog broja većeg od 400.
/*
int main() {
	int p[5];
	int min = 1001;
	for (int i = 0; i < 5; i++) {
		cout << "unesi broj:";
		cin >> p[i];
		if (p[i] > 400 && p[i] < 1000)
			if (p[i] < min)
				min = p[i];
	}
	for (int i = 0; i < 5; i++) {
		if (p[i] > min)
			cout << p[i] << endl;
	}
	return 0;
}
*/

//Učitati 5 prirodnih brojeva.Pronaći najveću znamenku desetica i ispisati sve brojeve čija je znamenka jedinica jednaka najvećoj znamenci desetica. unosimo dvoznamenkaste brojeve
/*
int main() {
	int p[5], desetica = 0, a = 0, jedinica;

	for (int i = 0; i < 5; i++) {
		cout << "unesi broj:";
		cin >> p[i];
		a = p[i] % 10;
		if (a > desetica && a < 10)
			desetica = a;
	}
	for (int i = 0; i < 5; i++) {
		jedinica = (p[i] / 10) % 10;
		if (jedinica == desetica)
			cout << p[i]<<endl;
	}
	return 0;
}
*/

// čitati 5 troznamenkastih brojeva i ispisati najmanju i najveću znamenku stotica.
/*
int main() {
	int p[5], min, max = 0, stotica, sto;
	for (int i = 0; i < 5; i++) {
		cout << "unesi troznamenkasti beoj:";
		cin >> p[i];
		stotica = (p[i]  / 100) % 10;
		if (stotica > max)
			max = stotica;
	}
	min = (p[0] / 100) % 10;
	for (int i = 0; i < 5;i++) {
		sto = (p[i] / 100) % 10;
		if (sto < min)
			min = sto;
	}
	cout << "max =" << max << endl;
	cout << "min =" << min << endl;
	return 0;

}
*/
// Učitati 5 troznamenkastih brojeva i ispisati brojeve čije su znamenke jedinica veće od aritmetičke sredine znamenki stotica.
/*
int main() {
	int p[5], sr = 0, jedinica, stotica;
	for (int i = 0; i < 5; i++) {
		cout << "unesi troznamenkasti broj:";
		cin >> p[i];
		stotica = (p[i] / 100) % 10;
		sr += stotica;
	}
	for (int i = 0; i < 5; i++) {
		jedinica = p[i] % 10;
		if (jedinica > (sr / 5))
			cout << jedinica << endl;
	}
	return 0;
}
*/
// Učitati 5 brojeva u polje i ispisati sve brojeve u polju koji su veći od aritmetičke sredine učitanih parnih brojeva.
/*
int main() {
	int p[5], sr = 0, brojac = 0;
	for (int i = 0; i < 5; i++) {
		cout << "unesi broj:";
		cin >> p[i];
		if (p[i] % 2 == 0) {
			sr += p[i];
			brojac++;
		}
	}
	for (int i = 0; i < 5; i++) {
		if (p[i] > (sr / brojac))
			cout << p[i] << endl;;
	}
	return 0;
}
*/

int main() {
	int p[100], min, max = 0,  ocjene = 0, suma = 0;
	float prosjek = 0;
	for (int i = 0;i < 100;i++) {
		cout << "unesi ocjenu:";
		cin >> p[i];
		min = p[0];
		if (p[i] == 666)
			break;

		suma += p[i];
		ocjene++;
		prosjek = suma / i;
		

	}
	cout << "prosjek = " << prosjek << endl;
	cout << " broj unesenih ocjena = " << ocjene << endl;
	cout << " najmanja ocjena je = " << min << " a najveća je = " << max << endl;
	return 0;

}