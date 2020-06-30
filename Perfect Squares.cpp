class Solution {
public:
    int coinchangeplus(vector <int> arr,  int N)
{
  int n = arr.size();
  int W = N;
  int dp[n + 1][W + 1];
    dp[0][0]=INT_MAX-1;
  for (int i = 1; i <= n; i++)
    dp[i][0] = 0;
  for (int i = 1; i <= W; i++)
    dp[0][i] = INT_MAX-1;
for(int i=1,j=1;j<W+1;j++)
{
    if(j%arr[0]==0)
        dp[i][j]=j/arr[0];
    else
        dp[i][j]=INT_MAX-1;
}
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= W; j++)
    {
      if (arr[i - 1] <= j)
      {
        dp[i][j] = min(dp[i - 1][j],dp[i][j - arr[i - 1]]+1) ;
      }
      else

        dp[i][j] = dp[i - 1][j];

    }
  }

  return dp[n][W];
}

    int numSquares(int n) {
        vector <int> arr;
        int x=sqrt(n);
        for(int i=1;i<=x;i++)
            arr.push_back(i*i);
        return coinchangeplus(arr,n);
    }
};