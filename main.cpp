#include <iostream>
using namespace std;

/*
int main() {
    int a;
    int brojac = 0;
    int i = 0;
    int n = 0;

    cout << "unesi broj n : ";
    cin >> n;

    do{
        cout << "unesi neki broj  : ";
        cin >> a;
        if (a % 7 == 0){
            brojac++;}
        i++;
    }while(i<n);
    cout << brojac;
    return 0;

}
*/

/*
int main() {
    int a,n;
    int prvi = 0;
    int drugi = 0;
    int i = 0;
    int zbroj = 0;

    cout<<"unesi broj n:";
    cin>>n;

    do {
        cout<<"unesi dvoznamenkasti broj:";
        cin>>a;
        prvi =  a % 10;
        drugi = (a / 10) % 10;
        zbroj+=prvi;
        zbroj+=drugi;
        i++;
    }while (i<n);
        cout<<zbroj<<endl;
    return 0;

}
*/

/*
int main() {
    int a,n;
    int najmanji ;
    int najveci;
    int i = 0;

    cout<<"unesi neki broj n:";
    cin>>n;
    najmanji=n;
    najveci=n;

    do {
        cout<<"unesi broj:";
        cin>>a;
        if(a>najveci && a % 2 != 0)
            najveci=a;
        else if(a<najmanji && a % 2 != 0)
            najmanji=a;
        i++;
    }while(i<n);
    cout<<"najmanji neparni broj je "<<najmanji<<endl;
    cout<<"najveci neparni broj je "<<najveci<<endl;
    return 0;
}
*/

/*
int main() {
    int a;
    int prosti = 0;
    int n;
    int i = 0;

    cout << "Please enter a number: ";
    cin >> n;

    do {
        cout << "Please enter a number: ";
        cin >> a;
        if (a % a == 0 && a % 2!=0) {
            cout << a<<" je prosti broj" << endl;
            prosti++;
        }
        else {
            cout<<a <<" nije prosti broj"<<endl;
        }
        i++;
    }while (i<n);
    cout <<"ima "<< prosti << " prosta broja" << endl;
    return 0;
}
*/
