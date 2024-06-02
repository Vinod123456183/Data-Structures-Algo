// Longest Palindromic String ;k/

#include<bits/stdc++.h>
using namespace std;

int LPS(string x , string y , int n , int m)  {
    if(n == 0 || m == 0) 

        return 0;

    if(x[n-1]  ==  y[m - 1])

        return 1 + LPS(x , y , n - 1 , m - 1);

    else  
        return max(LPS(x , y , n - 1 , m ) , LPS(x , y , n , m - 1)); 

}

int main()  {
    string x = "abcdasaxx";
    string y = x;
    reverse(x.begin(),x.end());
    int n = x.size() ;
    int m = y.size() ;


    cout << LPS(x , y , n , m);
}
