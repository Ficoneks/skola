#include <iostream>

using namespace std;

int main() {
	char a;
	int r, i, u;

	cout << "unesi velicinu zelis izracunati:";
	cin >> a;

	if (a == 'R') {
		cout << "unesi napon:";
		cin >> u;
		cout<<"unesi struju:";
		cin>>i;
		int R;
		R = u/i;
		cout<<R;
	}

	else if (a=='U'){
        cout<<"unesi otpor:";
        cin>>r;
        cout<<"unesi  struju:";
        cin>>i;
        int U;
        U = r*i;
        cout<<U;
	}

	else if(a == 'I'){
        cout<<"unesi otpor:";
        cin>>r;
        cout<<"unesi napon";
        cin>>u;
        int I;
        I = u / r;
        cout<<I;

	}
	return 0;

	}
