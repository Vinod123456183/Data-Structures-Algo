/*
  Recursion Code to find Gcd Of Two Nos
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <limits>
using namespace std;

int gcd(int a, int b){
    if(b%a == 0) return a;
    return gcd(b%a,a);
}
int main(){
    cout<<gcd(8542,10000);
}
