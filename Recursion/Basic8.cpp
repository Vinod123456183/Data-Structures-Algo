/*
    no of ways to ride on the stairs if he can move 2 stairs at a a time
    N = 1 2 3 4 5   6    7      8   9
    V = 1 2 3 5 8   13   21

    Way To Go to n Stairs
*/
#include<iostream>
using namespace std;
int stairs(int n){
    if(n == 1) return 1;
    if(n == 2) return 2;
    return stairs(n-1) + stairs(n-2);
}
int main(){
    cout<<stairs(4);
}
