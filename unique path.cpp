class Solution {
public:
    int uniquePaths(int m, int n) {
        int dp[m+1][n+1];
        memset(dp,sizeof(dp),0);
        for(int i=1;i<=m;i++)
            dp[i][1]=1;         // if we have 1 row and >1 colm then there is only 1 way
        for(int i=1;i<=n;i++)
            dp[1][i]=1;         //  if we have 1 colm and >1 row then there is only 1 way
        
        for(int i=2;i<=m;i++)
        {
            for(int j=2;j<=n;j++)
            {
                dp[i][j]=(dp[i-1][j]+dp[i][j-1]);      //just add the number of ways from prev row and prev
                                                        //colm
                
            }
        }
        return dp[m][n];
    }
};