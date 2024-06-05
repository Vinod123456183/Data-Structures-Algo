#include<bits/stdc++.h>
using namespace std;

int F(int n)  {
    if(n == 0)
        return 1;


    cout << " -     " << n << endl;
    F(n/2);
    cout << "Pre    " << n << endl;
    F(n/3);
    cout << "In     " << n << endl;
    F(n/4);
    cout << "Post   " << n << endl;


    
    return -1;
}

int main()  {
    int n = 94;
    cout << F(n);
}
