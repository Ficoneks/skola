#include <iostream>
using namespace std;
/*
int main() {
	int p[100], min = 5, max = 0,  ocjene = 0, suma = 0;
	float prosjek = 0;
	for (int i = 0;i < 100;i++) {
		cout << "unesi ocjenu:";
		cin >> p[i];
		if (p[i] == 666)
			break;

		suma += p[i];
		ocjene++;
		prosjek = (float)suma / ocjene;
		if (p[i] > max)
			max = p[i];
		if (p[i] < min)
			min = p[i];


	}
	cout << "prosjek = " << prosjek << endl;
	cout << " broj unesenih ocjena = " << ocjene << endl;
	cout << " najmanja ocjena je = " << min << " a najveca je = " << max << endl;
	return 0;

}
*/
// Učitati n dvoznamenkastih brojeva u polje dok korisnik ne unese 0.
//Ispisati sve brojeve čija je znamenka desetica jednaka znamenki jedinica

/*
int main() {
	int p[1000],brojevi[1000],  desetica , jedinica ;
	int n = 0;
	for (int i = 0; i < 1000; i++) {
		cout<<"Enter dvoznamenkasti number: ";
		cin>>p[i];
		if (p[i] == 0)
			break;

		jedinica = p[i] % 10;
		desetica = (p[i] / 10) % 10;
		if (jedinica == desetica) {
			brojevi[n] = p[i];
			n++;
		}
	}
	for (int i = 0; i < n; i++) {
		cout<<brojevi[i]<<" ";
	}
	return 0;
}
*/

// Izračunati aritmetičku sredinu znamenki . troznamenkasti brojevi maks 1000 polja
// desetica svih unesenih brojeva i ispisati sve brojeve čija je znamenka jedinica veća od te sredine.
// sve dok korisnik ne unese 0
/*
int main() {
	int p[1000], suma = 0,  n = 0, desetica , jedinica;
	float sr = 0;
	for (int i = 0; i < 1000; i++) {
		cout<<"unesi broj :";
		cin>>p[i];
		if (p[i] == 0)
			break;
		desetica = (p[i] / 10) % 10 ;
		suma+=desetica;
		n++;
		jedinica = p[i] % 10;
		sr = (float)suma /n;
		if (jedinica > suma)
			cout<<p[i]<<endl;

	}

	return 0;
}
*/
//Učitati 5 troznamenkastih brojeva.
//Ispisati sve brojeve koji imaju sve tri znamenke različite

/*
int main() {
	int p[5], sto, des,jen;
	for (int i = 0; i < 5; i++) {
		cout << "napisi troznamenkasti broj : ";
		cin >> p[i];
	}
	for (int i = 0; i < 5; i++) {
		jen = p[i] % 10;
		des = (p[i] / 10) % 10;
		sto = (p[i] / 100) % 10;

		if ( jen != des && jen != sto && des != sto)
			cout<<p[i]<< endl;
	}
return 0;
	}
*/

// Učitati 5 troznamenkastih brojeva.
//Ispisati sve brojeve u kojima je znamenka desetica najveća znamenka tog broja
/*
int main() {
	int p[5],jen = 0,des = 0,sto = 0;
	for(int i=0;i<5;i++) {
		cout<<"Enter number: ";
		cin>>p[i];

	}
	for(int i=0;i<5;i++) {
		jen =p[i] % 10;
		des = (p[i] / 10) % 10;
		sto = (p[i] / 100) % 10;
		if (des > jen && des > sto) {
			cout<<p[i]<<endl;
		}
	}
	return 0;
}
*/
/*
int main() {
	int p[10];
	int a =1 , b = 10 ,suma = 0;
	for (int i = 0; i < 10; i++) {
		p[i] = rand()%(b-a + 1) + a ;
		suma+=p[i];
		cout<<"polje na " << " [ "<< i << " ] "  << " = "<< p[i]<<endl;
	}
	for (int i = 0; i < 10; i++) {
		if (p[i] > ( suma / 10))
			cout << p[i] << " ";
	}
	return 0;
}
*/
// Učitati 10 cijelih brojeva i ispisati ih suprotnim redoslijedom od posljedenjeg do prvog.
/*
int main() {
	int p[10];
	for (int i = 0; i < 10; i++) {
		cout << "Enter number: ";
		cin >> p[i];
	}

	for (int i = 9; i >= 0; i--) {
		cout << p[i] << " ";
	}
	return 0;
}*/