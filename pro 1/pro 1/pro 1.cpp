#include <iostream>
using namespace std;


int main() {
	float visina;
	cout << "unesi svoju visiu u metrima:";
	cin >> visina;

	int tezina;
	cout << "unesi tezinu u kilogramima:";
	cin >> tezina;

	int bmi;
	bmi = tezina / (visina * visina);

	switch (bmi) {
	case 0 ... 19:
		cout << "premalo";
		break;
	case 20 ... 25:
		cout << "normalno";
		break;
	case 26 ... 30:
		cout << "debeli";
		break;
	default:
		cout << "zeznuta prica";

		return 0;


	}
}


/*
int main() {
	int a;
	cout << "unesi neki broj od 1-7:";
	cin >> a;

	switch (a) {
	case 1:
		cout << "ponedjeljak";
		break;
	case 2:
		cout << "utorak";
		break;
	case 3:
		cout << "srijeda";
		break;
	case 4:
		cout << "četvrtak";
		break;
	case 5:
		cout << "petak";
		break;
	case 6:
		cout << "subota";
		break;
	case 7:
		cout << "nedjelja";
		break;
	default :
			cout << "broj nije u intervalu od 1 do 7";

			return 0;

	}
}
*/

/*
int main() {
	int a;
	cout << "unesi prvi broj:";
	cin >> a;
	int b;
	cout << "unesi drugi broj:";
	cin >> b;
	char o;
	cout << "unesi operaciju za racunanje:";
	cin >> o;

	switch (o) {
	case '+':
		cout << a + b;
		break;
	case '-':
		cout << a - b;
		break;
	case '*':
		cout << a * b;
		break;
	case '/':
		cout << a / b;
		break;

		return 0;
	}
}

*/

/*
int main() {
	int ocjena;
	cout << "unesi ocjenu:";
	cin >> ocjena;
	
	switch (ocjena) {
	case 1:
		cout << "nedovoljan";
		break;
	case 2:
		cout << "dovoljan";
		break;
	case 3:
		cout << "dobar";
		break;
	case 4:
		cout << "vrlo dobar";
		break;
	case 5:
		cout << "odlican";
		break;

	return 0;


	}

}
*/

/*
int main() {
	int a;
	cout << "unesi broj od 1 do 12:";
	cin >> a;

	switch (a) {
	case 1:
		cout << "sijecanj";
		break;
	case 2:
		cout << "veljaca";
		break;
	case 3:
		cout << "ozujak";
		break;
	case 4:
		cout << "travanj";
		break;
	case 5:
		cout << "svibanj";
		break;
	case 6:
		cout << "lipanj";
		break;
	case 7:
		cout << "srpanj";
		break;
	case 8:
		cout << "kolovoz";
		break;
	case 9:
		cout << "rujan";
		break;
	case 10:
		cout << "listopad";
		break;
	case 11:
		cout << "studeni";
		break;
	case 12:
		cout << "prosinac";
		break;
	default:
		cout << "taj mjeseac ne posuoji";

		return 0;

	}
}
*/