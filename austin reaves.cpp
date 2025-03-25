#include <iostream>
using namespace std;

/*
int main() {
	char slovo = 'A';  // napisi program koji ispise sva slova A do Z

		do {
			cout << slovo << " ";
			slovo++;

		} while (slovo <= 'Z');
			cout << endl;
		return 0;
}
*/

/*
int main() {  // napisi program koji ispis sva mala slova a do z, tako da svako slovo bude ispisano u novom redu
	char slovo = 'a';

		do {
			cout << slovo << "";
			slovo++;
			cout << endl;
		} while (slovo < 'z');
	return 0;
}
*/

/*
int main() {  // napisi program koji ispise sva mala slova a do z, tako da su slova odvojena zarezom i razmakom
	char slovo = 'a';

	do {
		cout << slovo;
		if (slovo < 'z') {
			cout << " , ";
		}
		slovo++;
	} while (slovo <= 'z');
	
	return 0;
}
*/

/*
int main() {  // ispisi sve cetveroznamenkaste parne brojeve
	int a = 1000;

	do {
		if (a % 2 == 0) {
			cout << a << endl;
		}
		a++;
	} while (a < 10000);
		return 0;
}
*/

/*
* 
int main() {  // ispisi sve cetveroznamenkaste brojeve koji imaju posljednju znamenku 4
	int a = 1000;
	int prvi;

	do {
		prvi = a % 10;
		if (prvi == 4) {
			cout << a << endl;
		}
		a++;
		

	} while (a < 10000);
	return 0;
}
*/

/*
int main() { // ispisi sumu svih neparnih brojeva do broja n (n unosi korisnik)
	int a = 0;
	int n;
	int suma = 0;
	
	cout << "unesi broj n:";
	cin >> n;

	do {
		if ( a % 2 != 0) {
			suma += a;
		}
		a++;
	} while (a < n);
	cout << "suma je " << suma << endl;
	return 0;

}
*/

// ispisi umnozak svbih parnih brojeva do n koji pri djeljenju sa 7 daju ostatak 4
/*
int main() {
	int n;
	int a = 0;
	int umnozak = 1;

	cout << "unesi broj n:";
	cin >> n;

	do {
		if ( a % 7 == 4) {
			umnozak *= a;

		}
		a++;

	} while (a < n);
	cout << umnozak << endl;
	return 0;


}
*/

// ispisi aritmetičku sredinu prvih n brojeva cija je posljednja znamenka 3. n unosi korisnik
/*
int main() {
	int a = 0;
	int n ;
	int sredina = 0;
	int prvi;
	int i = 0;

	cout << "unesi broj n:";
	cin >> n;

	do {
		prvi = a % 10;
		if (prvi == 3) {
			sredina += a;
			i++;
		}
		a++;
	} while (a < n);
	cout << sredina / i << endl;
	return 0;
}
*/