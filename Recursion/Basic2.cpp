/*
    printing before recursive call
*/


#include <iostream>
using namespace std;

void fact(int i , int n){
    if(n == 0) return;
    cout<<n<<endl;
    fact(1 , n-i);
}
int main(){
    fact(1,5);
}



