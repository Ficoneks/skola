#include <iostream>
using namespace std;
/*
int main() {
	int a = 1;
	cin >> a;
	while (a > 11) {
		cout << a << endl;
		a += 1;
	}
	return 0 ;
}
*/

int main() {
	int a;
	cin >> a;
	int zbroj = 0;
	int koliko = 0;
	zbroj += a;
	koliko += 1;
	while (a != 0) {
		cin >> a;
		zbroj += a;
		koliko += 1;

	}
	cout << zbroj / koliko << endl;
	return 0;
}