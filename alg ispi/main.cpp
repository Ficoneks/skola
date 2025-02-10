#include <iostream>

using namespace std;

int main(){
    int a,b,c,d,e;
    cout<<"unesi 5 brojeva:";
    cin>>a>>b>>c>>d>>e;
    int najveci = a;

    if (b>najveci){
        najveci = b;
    }
    else if(c>najveci){
        najveci = c;
    }
    else if(d>najveci){
        najveci = d;
    }
    else if(e>najveci){
        najveci = e;
    }
    else{
        najveci = a;
    }
    cout<<"najveci broj je = "<<najveci<<endl;

    return 0;


}


