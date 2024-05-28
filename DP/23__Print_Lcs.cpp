#include <bits/stdc++.h  > 
using namespace std;

void F(string x , string y , int n , int m , int dp[][100])  {

    for(int i = 0 ; i <= n; i++)  {

        for(int j = 0 ; j <= m; j++)  {

            if(i == 0 || j == 0)  {

                dp[i][j] = 0;

            }

            else if(x[i-1] == y[j-1])  {    // note To compare string x , y here

                dp[i][j] = 1 + dp[i-1][j-1];

            }

            else {

                dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);

            }

        }

    }


    int i = n;
    int j = m;

    string ans ;
    
    while(i > 0  and j > 0)  {

        if(x[i - 1] == y[ j - 1])  {      // note To compare string x , y here

            ans = x[i-1] + ans;

            i--; j--;

        }   
        // we cannot compare strings here bec it will difficult to 
          
        else if(dp[i-1][j]  <  dp[i][j-1])  

            j--;

        else 

            i--;
    }


    cout << ans;

}



int main ()  {

    string x = "ABCDA";
    string y = "BCDAA";

    int n = x.size();

    int m = y.size();
    
    int dp[n+1][100];

    F(x , y , n , m ,dp);

}
