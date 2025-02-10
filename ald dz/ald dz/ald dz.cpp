#include <iostream>
using namespace std;

int main() {

	int a;
	printf("unesi neki dvoznamenkasti broj:");
	cin >> a;

	if (a < 10 && a>99) {
		cout << "uneseni broj nije dvoznamenkasti:" << endl;
	}

	if (a > 10 && a < 100) {
		int b;
		cin >> b;
		int c;
		cin >> c;
		int r;
		r = b + c;
		printf("%i", r);
		
	}

	return 0;
}




