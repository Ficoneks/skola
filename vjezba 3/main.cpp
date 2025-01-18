#include <iostream>
using namespace std;

int main(){
    char a;
    printf("Unsesi neki znak: ");
    cin>>a;
    printf(" ASCII vrijednost slova je: %i ", a);
    cout<<endl;
    a = a - 32;
    printf("A njegovo veliko slovo je: %i", a);
    return 0;
}
