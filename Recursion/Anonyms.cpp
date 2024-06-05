#include<bits/stdc++.h>
using namespace std;

int F(int n)  {
    if(n == 0)
        return 1;
    if(n % 2 == 1) 
        return 1 + F(n/2);
    else if(n % 2 == 0)
        return F(n/2) + F(n-2);
    else if(n % 3 == 0)  
        return F(F(n-1)) + F(F(F(n/3)));
    else 
        return 1 + F(n-1); 
}

int main()  {
    int n = 157;
    cout << F(n);
}
