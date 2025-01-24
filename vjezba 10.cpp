#include <iostream>
using namespace std;

int main() {
	int a;
	cout << "unesi neki peteroznamnasti broj:";
	cin >> a;
	int b = (a / 10000) % 10;
	int c = (a / 10) % 10;
	int r = 0;
	r = c - b;
	cout << r;
	return 0;
}