#include <iostream>
using namespace std;
int main(){
    // int n1,n2,n3;4
    int a,b,c;
    cout<<"enter 1 ";
    cin>>a;
        cout<<"enter 2 ";
    cin>>b;
        cout<<"enter 3";
    cin>>c;
    if(a>b && a>c){
        cout<<"a is largest "<<a;
    }
    if(b>a && b>c){
    cout<<"b is largest "<<b;
    }
        if(c>b && c>a){
        cout<<"c is largest "<<c;
    }
}
