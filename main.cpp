#include <iostream>
using namespace std;
/*
int main() {
    int p[5][5] , a = 1 , b = 9;
    bool s = 1;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            // p[i][j] = rand()%(b-a+1)+a;
            p[i][j] = 9 - i ;
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (p[i][j] != p[j][i]) {
                s = 0;
            }
        }
    }
    if (s == 0 ) {
        cout<<"matrica nije simetricna"<<endl;
    }
    else {
        cout<<"matrica je simetricna"<<endl;
    }
    int rot[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            rot[j][4 - i] = p[i][j];
        }
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout<<rot[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/
/*
int main() {

    int p[3][3];
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            cout<<"unesi broj: " ;
            cin>>p[i][j];

        }

    }
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
    int gd = 0, sg = 0, redak = 0 , stupac  = 0;
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            if (i == j) {
                gd+=p[i][j];
            }
            if (i + j == 2) {
                sg+=p[i][j];
            }

        }
    }
    for(int i=0;i<1;i++) {
        for(int j=0;j<3;j++) {
            redak += p[i][j];
        }
    }
    int redak2 = 0;
    for(int i=1;i<2;i++) {
        for(int j=0;j<3;j++) {
            redak2 += p[i][j];
        }
    }
    int redak3 = 0;
    for(int i=2;i<3;i++) {
        for(int j=0;j<3;j++) {
            redak3 += p[i][j];
        }
    }
    int stupac2 = 0 , stupac3 = 0;
    for(int i=0;i<1;i++) {
        for(int j=0;j<3;j++) {
            stupac += p[i][j];
        }
    }
    for(int i=1;i<2;i++) {
        for(int j=0;j<3;j++) {
            stupac2 += p[i][j];
        }
    }
    for(int i=2;i<3;i++) {
        for(int j=0;j<3;j++) {
            stupac3 += p[i][j];
        }
    }
    if (stupac == stupac2 && stupac2 == stupac3 && stupac3 == redak && redak == redak2 && redak2 == redak3 && redak3 == gd && gd == sg ) {
        cout<<"maginci kvadrat!!"<<endl;
    }
else {
    cout<<"Nije magicni  kvadrat!!"<<endl;
}
    return 0;
}
*/
/*
int main() {
    int p[30][30] , a = 1 , b = 9 ;
    for (int i = 0; i < 30; i++) {
        for (int j = 0; j < 30; j++) {
            p[i][j]= rand() % (b-a+1)+a;

        }
    }
    for (int i = 0; i < 30; i++) {
        for (int j = 0; j < 30; j++) {
            if ( i == j || i+j == 29 ) {
                p[i][j] = 0;
            }
            if ( i == 0 || i == 29 ||  j == 0 || j == 29 ) {
                p[i] [j] =0;
            }
        }
    }
    for (int i = 0; i < 30; i++) {
        for (int j = 0; j < 30; j++) {
            cout << p[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
*/
/*
int main() {
    int p[10][10];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            p[i][j] = i % 3;
            cout << p[i][j] << " ";
        }
        cout<<endl;
    }
return 0;
}
*/

int main() {
    int p[10][10] , a = 1 , b = 9 , z = 0;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            p[i][j] = rand()%(b-a+1)+a;
            cout << p[i][j] << " ";
        }
        cout<<endl;
    }
    cout<<endl;
    for (int i = 0; i < 10; i++) {
        z = 0;
        for (int j = 0; j < 10; j++) {
            z+=p[i][j];
            p[i][j] = 666;
        }
        p[i][9] = z;
    }
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {

                cout << p[i][j] << " ";
            }
            cout<<endl;
        }

        return 0;
    }


/*
bool v ;
int main() {
    int p[5][5] , a = 1 , b = 9;
    for(int i=0;i<5;i++) {
        for(int j=0;j<5;j++) {
           p[i][j] = rand()%(b-a+1)+a;
        }
    }
    for(int i=0;i<5;i++) {
        for(int j=0;j<5;j++) {
            cout<<p[i][j] <<  " ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int j=0;j<5;j++) {
        v = true ;
        for(int i=0;i<5;i++) {
            if (p[i][j] > p[i + 1][j ]) {
                v = false ;
                break;
            }

        }
        if ( v == true) {
            cout<<"rastuce u "<< j <<  " stupcu" <<  endl;
        }
        else {
            cout<<"nije rastuca u " << j <<  " stupcu" <<  endl;
        }
    }
    return 0;
}
*/