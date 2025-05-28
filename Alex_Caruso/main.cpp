#include <iostream>
using namespace std;

int main() {
    int p[5][5] , zbroj = 0;
    int a = 1 , b = 10, m = 0 , n = 0 , red = 0, stupac = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            p[i][j] = rand()%(b-a+1)+a;

        }
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << p[i][j] << " ";
            zbroj+=p[i][j];
        }
        cout << endl;
    }
    cout << "zbroj je = "  <<  zbroj << endl;

    for (int i = 0; i < 5; i++) {
        zbroj=0;
        for (int j = 0; j < 5; j++) {
            zbroj+=p[i][j];
        }
        cout << "zbroj na retku " << i << " je = " << zbroj << endl;
    }
    bool s = true;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if ( p[i][j] != p[j][i] ) {
                s = false;
                break;
            }
        }
    }
    if (s)
        cout << "matrica je simetricna " << endl;
    else {
        cout << "matrica nije simetricna " << endl;
    }

    for (int i = 0; i < 5; i++) {
        zbroj=0;
        for (int j = 0; j < 5; j++) {
            if ( p[i][j] > m) {
                m = p[i][j];
                red = i;
                stupac = j;
            }
        }

    }
    cout << endl;
    cout << m << " je najveci broj i nalazi se u retku " << red << " i stupcu " << stupac << endl;
    int t[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            t[j][i] = p[i][j];
        }
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << t[i][j] << " ";
        }
        cout << endl;
    }

    for ( int i = 0; i < 5; i++) {
        for ( int j = 0; j < 5; j++) {
                if ( i == j || i + j == 4 ) {
                }
            else {
                p[i][j] = 0;
            }


        }
    }
    cout << endl;


    for ( int i = 0; i < 5; i++) {
        for ( int j = 0; j < 5; j++) {
            cout << p[i][j] << " ";

        }
        cout << endl;
    }

    for ( int j = 0; j < 5; j++) {
        zbroj=0;
        for ( int i = 0; i < 5; i++) {
            zbroj+=p[i][j];
        }
        cout << " zbroj stupca " <<  j << " je = " << zbroj << endl;
    }

    return 0;

}
