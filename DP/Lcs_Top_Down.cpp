#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int F(string x, string y, int n, int m, int dp[][100]) {
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            if (i == 0 || j == 0) {    //setting first row and column zero 
                dp[i][j] = 0;
            } else if (x[i - 1] == y[j - 1]) {    //if equal
                dp[i][j] = 1 + dp[i - 1][j - 1];
            } else {
                dp[i][j] = std::max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    return dp[n][m]; // Return the length of the LCS
}

int main() {
    string x = "ABCDA";
    string y = "BCDAA";
    int n = x.size();
    int m = y.size();
    int dp[n + 1][100]; 

    int longest_common_subsequence_length = F(x, y, n, m, dp);
    cout << "Length of Longest Common Subsequence: " << longest_common_subsequence_length << endl;
}
