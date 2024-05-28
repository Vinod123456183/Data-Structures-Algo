// function to find longest common subsequence

class Solution {
  public:
    // Function to find the length of longest common subsequence in two strings.
    
    int LCS(string x , string y , int n , int m)  {
    
        if(n == 0 || m == 0) 
            return 0;
    
        if(x[n-1] == y[m-1])
          
            return 1 + LCS(x , y , n - 1 , m - 1);
    
        return max(LCS(x , y , n - 1 , m) , LCS(x , y , n , m - 1 ));
    
    }
    int lcs(int n, int m, string x, string y) {
        
        return LCS(x , y , n , m);

    }
};
