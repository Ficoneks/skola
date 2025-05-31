#include <iostream>
using namespace std;
// Ispiši najveći element svakog retka matrice i njegov položaj (redak i stupac).
/*
int main() {
	int p[5][5], a = 1, b = 20;
	int redak = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			p[i][j] = rand() % (b - a + 1) + a;
			cout << p[i][j] << " ";

		}
		cout << endl;
	}
	int stupac = 0 ;
	for (int i = 0; i < 5; i++) {
		redak = 0;
		for (int j = 0; j < 5; j++) {
			if (p[i][j] > redak) {
				redak = p[i][j];
				stupac = j;
			}

		}
		cout << "najveci broj u retku je = " << redak << " i nalazi se u " << i << " retku i " << stupac << " stupcu " << endl;
	}
	return 0;
}
*/
/*
int main() {
	int p[5][5], a = 1, b = 20;
	int redak = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			p[i][j] = rand() % (b - a + 1) + a;
			cout << p[i][j] << " ";

		}
		cout << endl;
	}
	bool s = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (p[i][j] != p[j][i])
				s = 1;
		}
	}
	if (s = 1) {
		cout << "polje nije simetricno" << endl;
	}
	else {
		cout << "polje je simetricno";
	}
	return  0;
}
*/
/*
int main() {
	int p[5][5], a = 1, b = 20;
	int redak = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			p[i][j] = rand() % (b - a + 1) + a;
			cout << p[i][j] << " ";

		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5;j++) {
			p[0][j] = p[4][j];
			p[i][0] = p[i][4];
			cout << p[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
*/


