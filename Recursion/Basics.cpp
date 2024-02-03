/*
    n to 1 using recursion

*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <limits>
using namespace std;
 
void name(int n){
    if(n ==0) return;
    name(n-1);
    cout<<n<<"  ";
}


int main(){
    int n;
    cout<<"ENter n";
    cin>>n;
    name(n);
}
