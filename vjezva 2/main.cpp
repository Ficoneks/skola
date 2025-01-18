#include <iostream>

using namespace std;

int main()
{
    int a;
    printf("unesi prvi broj:");
    cin>> a;
    int b;
    printf("unesi drugi broj:");
    cin>>b;
    int r = 0;
    r= a + b;
    printf("%i + %i = %i", a, b, r);
    cout << endl;
    int r1 = 0;
    r1 = a - b;
    printf("%i - %i = %i", a, b, r1);
    cout << endl;
    int r2 = 0;
    r2 = a / b;
    printf("%i / %i = %i", a, b, r2);
     cout << endl;
    int r3  = 0;
    r3 = a * b;
    printf("%i * %i = %i", a, b, r3);
     cout << endl;

    return 0;


}
