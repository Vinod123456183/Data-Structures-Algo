#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    int count=0;
    while(n>0){
        n=n/10;
        count++;
    }
    if(count==1) cout<<1;
    else cout<<count<<endl;
}
