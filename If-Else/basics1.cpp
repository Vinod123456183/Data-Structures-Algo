#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number";
    cin>>num;
    if(num>0){      //method 1
        cout<<num;    // varibale me num not changing  
    } else { 
        cout << -num;
    }

        // method 2
        //varibale me num not changing

    if(num<0){
        num = -num;
        cout<<num;
    }
    cout<<endl;
    cout<<num;
}
