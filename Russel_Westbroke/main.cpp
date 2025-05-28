#include <iostream>
using namespace std;
// /popuni polje slucajnim brojevima [1,50]
/*
int main() {
    int p[5][5];
    int a = 1, b = 50;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            p[i][j]=rand()%(b-a+1)+a;

        }
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout<<p[i][j]<<" ";

        }
        cout<<endl;
    }
}
*/
//     //ispisi ZBROJEVE pojedinih redaka na ekran
/*
int main() {
    int p[5][5];
    int z = 0;
    int min = 9990, max = 0;
    int a = 1, b = 50;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            p[i][j]=rand()%(b-a+1)+a;

        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout<<p[i][j]<<" ";

        }
        cout<<endl;
    }


    for (int i = 0; i < 5; i++) {
        z = 0;
        for (int j = 0; j < 5; j++) {
            z +=p[i][j];
        }
        cout<<"zbroj reda " << i + 1 << " : " << z << endl;
    }
    for (int i = 0; i < 5; i++) {
        z = 0;
        for (int j = 0; j < 5; j++) {
            z += p[i][j];
            if (z > max)
                max = z;
            if ( z < min && z != 6 )
                min = z;
        }
    }
    cout<<"redak s najmanjim zbrojom je :"<< min << endl;
    cout<<"redak s najvecim zbrojom je :"<< max << endl;

    return 0;
}
*/
/*
int main() {
    int a = 1 , b = 10, zbroj = 0;
    int n = 0;
    cout<< "unesi broj n:";
    cin >> n;
    int p[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            p[i][j] = rand()%(b-a+1)+a;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout<<p[i][j]<<" ";

        }
        cout<<endl;
    }



    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j )
               zbroj+= p[i][j];
        }
    }
    cout<<"zbroj = " << zbroj;
    return 0;
}
*/
/*
int main() {
    int a = 1, b = 100;
    int n = 0;
    cout<<"unesi n:";
    cin>>n;
    int p[n][n];

    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            p[i][j] = rand() % (b-a+1)+a;
        }
    }

    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if ( j > i)
                cout<<p[i][j]<<" ";

        }

    }
    return 0;

}
*/
/*
int main() {
    int m = 0 , n = 0 , a = -10 , b = 10 , neg = 0;
    cout<<"unesi broj redaka :";
    cin>>m;
    cout<<"unesi broj stupaca :";
    cin>>n;
    int p[m][n];
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            p[i][j]=rand()%(b-a+1)+a;
        }
    }
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            if (  p[i][j] < 0) {
                neg++;
                cout<<p[i][j]<< " " ;
            }

        }

    }
    cout<<endl;
    cout<<"negatie :"<<neg;
    return 0;


}
*/
/*
int main() {
    int  a = 1 , b = 10 ;

    int p[5][5];
    for(int i=0;i<5;i++) {
        for(int j=0;j<5;j++) {
            p[i][j]=rand()%(b-a+1)+a;
        }
    }
    for(int i=0;i<5;i++) {
        for(int j=0;j<5;j++) {
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<5;i++) {
        for(int j=0;j<5;j++) {
            if ( i != 4 && j != 4)
                p[i][j] = 0;

        }
        cout<<endl;
    }
    for(int i=0;i<5;i++) {
        for(int j=0;j<5;j++) {
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/

int main() {

    int p[10][10];
    for(int i=0;i<10;i++) {
        for(int j=0;j<10;j++) {
            p[i][j]= i  ;

        }
    }
    for(int i=0;i<10;i++) {
        for(int j=0;j<10;j++) {
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<10;i++) {
        for(int j=0;j<10;j++) {
            if (i = 0)
                p[i][j] = 9;

        }
    }
    for(int i=0;i<10;i++) {
        for(int j=0;j<10;j++) {
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}