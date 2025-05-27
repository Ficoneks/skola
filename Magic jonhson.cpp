#include <iostream>
using namespace std;
/*
int main() { // a e // a b c d e
 	char a;
	char b;
	

	cout << "unesi broj:";
	cin >> a;
	cout << "unesi drugi broj:";
	cin >> b;

	do {
		cout << a<< " "; // ipsisi taj broj a
		a++; // povecamo za 1
	} while (a <= b); 
	return 0;
}
*/
/*
int main() {
	int n;
	int a = 9; // denem visekratnik
	int brojac = 0; // brojalo kolko put smo napravili 
	

	cout << "unesi n:";
	cin >> n;
	do {
		
			cout << a << " " << endl; // a = 9
			a += 9; // +9
			brojac++; // brojac +1 , jer se jemput izvrsilo 
		} while (brojac < n); 
		
		
	return 0;
}
*/
/*
int main() {
	int poz = 0;
	int neg = 0;
	int broj = 0;
	int a;

	do {
		cout << "unesi broj:";
		cin >> a;
		if (a > 0) {
			poz++;
		}
		if (a < 0) {
			neg++;
		}
		if (a > 666) {
			broj++;
		}
		
	} while (a != 666);
	cout << poz << endl;
	cout << neg << endl;
	cout << broj << endl;
	return 0;
}
*/

int main() {
	int broj1;
	int broj2;
	int suma1 = 0;
	int suma2 = 0;

	cout << "unesi prvi broj:"; // 123 12
	cin >> broj1;
	cout << "unesi drugi broj:";
	cin >> broj2;

	do {
		suma1 += broj1 % 10;
		broj1 /= 10;
	} while (broj1 != 0);

	do {
		suma2 += broj2 % 10;
		broj2 /= 10;
	} while (broj2 != 0);

	cout << "suma prvoga broja je " << suma1 << endl;
	cout << "suma drugoga broja je " << suma2 << endl;

	if (suma1 > suma2) {
		cout << "prvi broj ima veci zbroj znamenaka";
	}
	if (suma2 > suma1) {
		cout << "drugi broj ima veci zbroj znamenaka";
	}
	return 0;
}