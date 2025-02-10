#include <iostream>

using namespace std;

/*
int main() {
    char a;
    int b, c;
    scanf("%c %i %i", &a, &b, &c);

    if (a == 's'){
        int r;
        r = b + c;
        cout<<r<<endl;
    }
    else if (a== 'p'){
        int r1;
        r1 = (b*c)/(b+c);
        cout<<r1<<endl;

    }
    return 0;

}
*/

int main(){
    int u , r , i;
    char izbor;
    cout<<"unesi sto zelis izracunati";
    cin>>izbor;

    if(izbor == 'U'){
        int u;
        u = r * i;
        cout<<u;
    }
    else if(izbor == 'R'){
        int r;
        r = u / i;
        cout<<r;
    }
    else if (izbor == 'I'){
        int i;
        i = u / r;
        cout<<i;

    }
    return 0;
}
