#include<iostream>
using namespace std;
int main(){
    int n;
    int ld;
    cout<<"enter n";
    cin>>n;
    int sum=0;
    while(n > 0){  //WE Can Write (n != 0) also
        ld=n%10; //To find last digit
        sum=sum+ld;
        n/=10;
    }
    cout<<sum<<endl;
}
