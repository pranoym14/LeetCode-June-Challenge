class Solution {
public:
   int coinchange(vector <int> arr,  int N)
{
  //  if(n==0 || W==0)
  //      return 0;
  // if( dp[n][W]!=-1)
  //     return dp[n][W];
  //  if(wt[n-1]<W)
  //      return dp[n][W]=max(val[n-1]+knapsack(wt,val,W-wt[n-1],n-1),knapsack(wt,val,W,n-1));
  //  else
  //      return dp[n][W]=knapsack(wt,val,W,n-1);
  int n = arr.size();
  int W = N;
  int dp[n + 1][W + 1];
    dp[0][0]=1;
  for (int i = 1; i <= n; i++)
    dp[i][0] = 1;
  for (int i = 1; i <= W; i++)
    dp[0][i] = 0;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= W; j++)
    {
      if (arr[i - 1] <= j)
      {
        dp[i][j] = dp[i - 1][j]+dp[i][j - arr[i - 1]] ;
      }
      else

        dp[i][j] = dp[i - 1][j];

    }
  }
  


  return dp[n][W];
}


    int change(int amount, vector<int>& coins) {
        return coinchange(coins,amount);
    }
};