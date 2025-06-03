#include <iostream>
using namespace std;
/*
int main() {
	//Unesi i ispiši 2D polje dimenzija 3×3
	
	int p[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "unesi broj : ";
			cin >> p[i][j];
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << p[i][j] << " ";
			
		}
		cout << endl;
	}
	// Ispiši zbroj svih elemenata u polju.
	int z = 0;
    int   maksimum = p[0][0], minimum = p [0][0];
	int redak_max = 0, redak_min = 0, stupac_max= 0 , stupac_min = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			z += p[i][j];

			if (p[i][j] > maksimum) {
				maksimum = p[i][j];
				stupac_max = j ;
				redak_max = i ;
			} 
			if (p[i][j] < minimum) {
				minimum = p[i][j];
				redak_min = i  ;
				stupac_max = j;
			}
		}
	}
	cout << "najmanji broj je = " << minimum << " i nalazi se u " << redak_min << " retku  i " << stupac_min<< " stupcu " << endl;
	cout << "najveic broj je = " << maksimum << " i nalazi se u " << redak_max << " retku  i " << stupac_max << " stupcu " << endl;
	
	cout << "zbroj je " << z << endl;
	float sr = z / 9;
	//  Ispiši aritmetičku sredinu svih brojeva u polju.
	cout << "aritmeticka sredina je = " << sr << endl;

	int zbroj_retka = 0, zbroj_stupca = 0, stupac, redak, zbroj = 0;
	for (int i = 0; i < 3; i++) {
		zbroj_retka = 0;
		zbroj_stupca = 0;
		for (int j = 0; j < 3; j++) {
			zbroj_stupca+= p[j][i];
			zbroj_retka += p[i][j];
			stupac = j;
		
		;
		}
		cout << "zbroj " << i << " stupca je = " << zbroj_stupca << endl;
		cout << "zbroj " << i << " retka je = " << zbroj_retka << endl;
	}
	int parni = 0, neparni = 0;
	for (int i = 0;i < 3;i++) {
		for (int j = 0; j < 3; j++) {
			if (p[i][j] % 2 == 0) 
				parni++;
			
			if (p[i][j] % 2 != 0) 
				neparni++;
			
		}
	}
	cout << endl;
	cout << "broj parnih brojeva je = " << parni << endl;
	cout << "broj neparnih brojeva je = " << neparni << endl;


		for (int j = 0; j < 3; j++) {
			int temp = p[0][j];
			p[0][j] = p[2][j];
			p[2][j] = temp;
		}
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				cout << p[i][j] << " ";

			}
			cout << endl;
		}
	
	
	
	return 0;

}

*/
/*
int main() {
	int p[5][5], a = 1, b = 9;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			p[i][j] = rand() % (b - a + 1) + a;
			cout << p[i][j] << " ";
		}
		cout << endl;
	}
	/*
	cout << endl;
	for (int i = 0; i < 5; i++) {
		
			int t = p[i][0];
			p[i][0] = p[i][4];
			p[i][4] = t;
			
		}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << p[i][j] << " ";
		}
		cout << endl;
		}
		*/
/*
	cout << endl;
	
	

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (j <= i)
				p[i][j] = 0;
			cout << p[i][j] << " ";
			
		}
		cout << endl;
	}
	
		return 0;
}
*/
/*
int main() {
	int p[5][5], a = 1, b = 9;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			p[i][j] = rand() % (b - a + 1) + a;
			cout << p[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	
	int t[5][5];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++){
			t[i][j] = p[j][i];
			cout << t[i][j] << " ";
		}
		cout << endl;
	}
	// zbroji rubne elemente
	int zbroj = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i == 0 || j == 0 || i == 4 || j == 4) {
				zbroj += p[i][j];
			}

		}
	
	}
	cout << "zbroj rubova je = " << zbroj << endl;
	// U 5x5 matrici zamijeni glavnu dijagonalu s pomoćnom dijagonalom. 
	cout << endl;
	for (int i = 0; i < 5; i++) {
			int temp = p[i][i];
			p[i][i] = p[i][4 - i];
			p[i][4 - i] = temp;
	
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << p[i][j] << " ";
		}
		cout << endl;
	}
	int dija = 0;
	for (int i = 0;i < 5;i++) {
		for (int j = 0; j < 5; j++) {
			if (j > i) {
				dija += p[i][j];
			}
		}
	}
	cout << "zbroj  iznad dijagonale je = " << dija << endl;
	int najveci, redak;
	for (int j = 0; j < 5;j++) {
		najveci = 0;
		for (int i = 0; i < 5; i++) {
			if (p[i][j] > najveci) {
				najveci = p[i][j];
				redak = i;
			}
		}
		cout << " najveci broj " << najveci << " se nalazi u " << redak << " retku " << endl;
	}
	return 0;

}
*/

int main() {
	int p[5][5] = {
		{1, 2, 3, 4, 5},
		{6, 7, 8, 9, 10},
		{11, 12, 13, 14, 15},
		{16, 17, 18, 19, 20},
		{21, 22, 23, 24, 25}
	};
	int rot[5][5];

	// Rotacija za 90 stupnjeva u smjeru kazaljke na satu
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			rot[j][4 - i] = p[i][j];
		}
	}

	// Ispis rotirane matrice
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << rot[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}