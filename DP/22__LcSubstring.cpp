#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int longestCommonSubstr(string x, string y, int n, int m) {
    int count = 0;
    int dp[n + 1][m + 1];
    
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            if (i == 0 || j == 0) {
                dp[i][j] = 0;
            } else if (x[i - 1] == y[j - 1]) {
                dp[i][j] = 1 + dp[i - 1][j - 1];
                count = max(count, dp[i][j]);
            } else {
                dp[i][j] = 0;
            }
        }
    }
    
    return count;
}

int main() {
    string x = "ABCDA";
    string y = "BCDAA";
    int n = x.size();
    int m = y.size();

    int result = longestCommonSubstr(x, y, n, m);
    cout << "Length of the longest common substring: " << result << endl;

    return 0;
}
