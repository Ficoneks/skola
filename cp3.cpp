#include <iostream>
using namespace std;



int main() {
	int a;
	int poz = 0;
	int neg = 0;
	int par = 0;
	int nepar = 0;
	int dj = 0;
	
	do  {
		cin >> a;
		if (a > 0)
			poz++;
		if (a < 0)
			neg++;
		if (a % 2 == 0 && a>0)
			par++;
		if (a % 2 == !0 && a > 0)
			nepar++;
		if (a % 2 == 0)
			dj++;

	} while (a != 0);
	cout << "paran broj "<< par << endl;
	cout << "neparan broj "<<nepar << endl;
	cout << "pozitivni broj "<<poz << endl;
	cout << "negativan broj "<<neg << endl;
	cout << "djeljiv je s  3 "<<dj << endl;
	return 0;
}




