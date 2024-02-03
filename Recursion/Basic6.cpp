/*
fibonacii sereis 
*/
#include<iostream>
using namespace std;
int fibb(int n){
    if(n == 1 || n == 2) return 1;
    return fibb(n-1) + fibb(n-2);
}
int main(){
    int n=4;
    cout<<fibb(n);
}
