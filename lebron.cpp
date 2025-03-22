#include <iostream>
using namespace std;


/*
int main() {
	int a = 22;
	do {
		if (a == 77) 
			cout << "sedamdeset i sedam" << endl;
		else {
			cout << a << endl;

		}
		a += 11;

	} while (a <= 100);
		return 0;
}
*/

/*
int main() {
	int a = 13;
	int brojac = 0;
	
	do {
		brojac++;
		a += 13;

	} while (a <= 150);
	cout << brojac << endl;
	return 0;
}
*/

/*
int main() {
	int a;
	int i= 0;
	int brojac = 0;
	int zbroj = 0;
	
	do {
		cin >> a;
		if (a % 2 == 0) {
			brojac++;
			zbroj += a;
		}
		i++;

	} while (i < 10);
	cout << zbroj << endl;
	return 0;
	
}
*/

/*
int main() {
	int n;
	int zbroj= 0;
	int a;
	int i = 0;

	cout << "unesi broj n:";
	cin >> n;
	
	do {
		cin >> a;
		zbroj += a;
		i++;

	} while (i<n);
	cout <<"aritmeticka sredina je:"<< zbroj / n << endl;
	return 0;
}
*/

/*
int main() {
	int n;
	int najmanji;
	int najveci;
	int i = 0;
	int a;
	
	cout << "unesi broj n:";
	cin >> n;
	
	najmanji = n;
	najveci = n;

	do {
		cout << "unesi neko broj:";
		cin >> a;
		if (a > najveci)
			najveci = a;
		else if (a < najmanji)
			najmanji = a;
		i++;

	} while (i < n);
	cout << "najmanji broj je:" << najmanji << endl;
	cout << "najveci broj je:" << najveci << endl;
	return 0;

}
*/

/*
int main() {
	int a;
	int prvi;
	int drugi;
	int treci;
	int zbroj = 0;
	int i = 0;
	int n;

	cout << "unesi koliko brojeva zelis unijeti:";
	cin >> n;

	
	do {
		cout << "unesi troznamenkasti broj:";
		cin >> a;
		prvi = a % 10;
		drugi = (a / 10) % 10;
		treci = a / 100;

		zbroj = prvi + drugi + treci;
		if (zbroj > 8) {
			cout << a << endl;;
		}
		i++;


	} while (i < n);
	return 0;
}

*/

/*
int main() {
	int a;
	int n;
	int poz = 0;
	int neg = 0;
	int i = 0;

	cout << "unesi broj n:";
	cin >> n;

	do {
		cout << "unesi neki broj";
		cin >> a;
		if (a > 0)
			poz++;
		else if (a < 0)
			neg++;
		i++;
	} while ( i < n);
	cout << neg << endl;
	cout << poz << endl;
	return 0;
	


}

*/


// Korisnik unosi dvoznamenkasti  brojev  a zatim se učitavaju ti brojevi. Za svaki broj izračunaj zbroj njegovih znamenki te ispisi brojeve kod kojih je taj zbroj paran.

int main() {
	int a;
	int prvi;
	int drugi;
	int umnozak = 0;
	int i = 0;
	int n = 0;

	cout << "unesi broj n:";
	cin >> n;

	do {
		cout << "unesi neki broj:";
		cin >> a;
		prvi = a % 10;
		drugi = (a / 10) % 10;
		umnozak = prvi * drugi;
		if (umnozak % 2 == 0) {
			cout << "broj je paran";

		}
		i++;

	} while (n < i);
	return 0;
}
	



