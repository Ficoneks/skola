#include <iostream>
using namespace std;
/*
//napiši program koji učitava broj.
//broj spremi kao binarnu vrijednost u polje.
//maksimalno je 10 brojeva
// brojevi su pozitivni, < 64
int main() {
	int p[10][8] = { 0 };
	int broj;
	for (int i = 0;i < 10; i++) {
		// for (int j = 0; j < 8; j++) 
			cin >> broj;
			if (broj == 0)
				break;
			int stupac = 7;
			while (broj > 0) {
			bool bit;
			bit = broj % 2;
			broj /= 2;
			cout << bit << endl;
			p[i][stupac] = bit;
			stupac--;
			}

		
	}
	//napisi program koji ispise sve brojeve (u binarnom obliku)
    //koji imaju više od prosječnog broja znamenki jedinica
    //u binarnom obliku
	int brojJedinica = 0;
	int redak = 0;
	int brojbrojeva = 0;
	for (int i = 0; i < 10; i++) {
		redak = 0;
		for (int j = 0; j < 8; j++) {
			redak += p[i][j];

		}
		brojJedinica += redak;
		if (redak == 0) {
			break;
			brojbrojeva++;
		}

	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 8; j++)
			cout << p[i][j];
		cout << endl;
	}
	cout << "broj jedinca = " << brojJedinica;
	
	for (int i = 0; i < 10; i++) {
		redak = 0;
		for (int j = 0; j < 8; j++) {
			redak += p[i][j];
			if (redak >= (brojJedinica / brojbrojeva))
				cout << broj << endl;
		}
	}
	return 0;
}
*/
/*
int main() {
	int p[5][5];
	int a = 1, b = 20;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			p[i][j] = rand() % (b - a + 1) + a;
		}
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << p[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	int t[5][5];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			t[i][j] = p[j][i];
			cout << t[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	int stupac = 0;
	for (int i = 0; i < 5; i++) {
		stupac = 0;
		for (int j = 0; j < 5; j++) {
			stupac += p[j][i];
		}
		cout << "zbroh stupca " << i << " je " << stupac << endl;
	}
	cout << endl;
	int redak = 0;
	for (int i = 0; i < 5; i++) {
		redak  = 0;
		for (int j = 0; j < 5; j++) {
			redak += p[i][j];
		}
		cout << "zbroh retka  " << i << " je " << redak << endl;
	}
	int zbroj = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i != j && i + j != 4)
				p[i][j] = 0;
			if (i == j)
				zbroj += p[i][j];
			if (i + j == 4)
				zbroj += p[i][j];
			cout << p[i][j] << " ";	
		}
		cout << endl;
		
	}
	cout << "zbroj dijagonala je = " << zbroj << endl;
	/*
	int t[5][5];
	for (int i = 0; i < 5 ; i++){
		for (int j = 0; j < 5; j++) {
			t[i][j] = p[j][i];
			cout << t[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;

}
*/

int main() {
	int p[4][4];
	int suma = 0;

	
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << "Unesi broj: ";
			cin >> p[i][j];
			suma += p[i][j];
		}
	}

	float prosjek = suma / 16.0;


	for (int i = 0; i < 4; i++) {
		int zbrojRetka = 0;
		for (int j = 0; j < 4; j++) {
			zbrojRetka += p[i][j];
		}

		if (zbrojRetka > prosjek) {
	
			for (int j = 0; j < 4; j++) {
				cout << p[i][j] << " ";
			}
			cout << "(zbroj = " << zbrojRetka << ")" << endl;
		}
	}

	return 0;
}