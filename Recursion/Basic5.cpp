#include<iostream>
using namespace std;
void preinpost(int n){
    if(n == 0) return;
    cout<<"PRE "<<n<<endl;
    preinpost(n-1);
    cout<<endl;
    cout<<"IN "<<n<<endl;
    preinpost(n-1);

    cout<<endl;
    cout<<"POST "<<n<<endl;
}
int main(){
    preinpost(3);
}
