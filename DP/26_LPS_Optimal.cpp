#include <bits/stdc++.h>

using namespace std;

int LPS(string x , string y ,  int n , int m) {

    int dp[n + 1][m + 1];

    for (int i = 0; i <= n; i++) {

        for (int j = 0; j <= m; j++) {
        
            if (i == 0 || j == 0)
        
                dp[i][j] = 0;
        
            else if (x[i - 1] == y[j - 1])

                dp[i][j] = 1 + dp[i - 1][j - 1];

            else

                dp[i][j] = max(dp[i - 1][j] , dp[i][j - 1]);
        }
    }

    return dp[n][m];
    
}

int main() {

    string x = "abcdasaxx";
    
    string y = x;
    
    reverse(y.begin(), y.end());
    
    int n = x.size();
    
    int m = y.size();
    
    cout << LPS(x, y ,  n , m);
    
}
