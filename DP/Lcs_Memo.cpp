// function to find longest common subsequence

class Solution {
  public:
    int LCS(string x , string y , int n , int m , vector<vector<int>>&dp)  {
    
            if(n == 0 || m == 0) 
                return 0;
    
            if(dp[m][n] != -1)
                return dp[m][n];
    
            if(x[n-1] == y[m-1])
                dp[m][n] = 1 + LCS(x , y , n - 1 , m - 1 , dp);
            else
                dp[m][n] = max(LCS(x , y , n -1 , m , dp) , LCS(x , y , n , m - 1 , dp));
    
            return dp[m][n];
    }
    int lcs(int n, int m, string x, string y) {
        
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, -1));

        return LCS(x , y , n , m , dp);

    }
};
