#include <iostream>
using namespace std;

/*
int main() {
    int a;
    int n = 0;
    int brojac = 0;
    int i = 0;

    cout<<"unesi broj n:";
    cin>>n;

    do {
        cout<<"unesi neki broj:";
        cin>>a;

        if (a % 5 ==0) {
            brojac++;
        }
        i++;
    }while (i<n);
    cout<<endl<<brojac;
    return 0;
}
*/

int main() {
    int a;
    int n = 0;
    int i = 0;
    int zbroja = 0;
    int brojac = 0;

    cout << "Enter the number of elements n: ";
    cin >> n;

    do {
        cout << "Unesi neki broj: ";
        cin >> a;

        if (a % 2 != 0) {
            zbroja += a;
            brojac++;
        }
        i++;
    } while (i < n);

    cout << "Prosjek neparnih brojeva: " << zbroja / brojac << endl;
    return 0;
}



