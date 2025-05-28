#include <iostream>
using namespace std;
/*
int main() {
    int p[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> p[i][j];
        }
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
int main() {
    char p[100][20];
    bool bv = 0;

    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 20; j++) {
            cout<<"unesi slovo: ";
            cin>>p[i][j];
            if (p[i][j] == '0')
                break;
            if (p[i][j] == '1' && j == 0) {
                bv = 1;
                break;
            }

        }
        if (bv == 1)
            break;
    }
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 20; j++) {
            if (p[i][j] == '1'  || p[i][j] == 0) {
                break;
            }

            cout<<p[i][j - 1];
        }
cout<<endl;
    }
    return 0;

}