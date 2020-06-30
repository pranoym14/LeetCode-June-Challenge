#define loop(x,k,n) for(int x = k; x < n; x++)
#define revLoop(q,w) for (int q = w;q>=0 ;q--)
#define ll long long int
#define minMod 1000000001
#define strInp(a) cin.getline(a,2001);
#define mp(a,b) make_pair(a,b)
#define init(a,n) memset(a,n,sizeof(a));
#define pb(i) push_back(i);
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define tc int t; cin >> t; while(t--)
#define arrInp(a,n)  int a[n];for (int i=0;i<n;i++) cin >> a[i];
class Solution {
public:
    int LCS_BU(string x, string y, int n, int m)
{
	int dp[m + 1][n + 1];
	loop(i, 0, m + 1)
	dp[i][0] = 0;
	loop(i, 0, n + 1)
	dp[0][i] = 0;
	loop(i, 1, m + 1)
	{
		loop(j, 1, n + 1)
		{
			if (x[i - 1] == y[j - 1])
				dp[i][j] = dp[i - 1][j - 1] + 1;
			else
				dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
		}
	}
	return dp[m][n];

}
    bool isSubsequence(string s, string t) {
        return LCS_BU(s,t,t.length(),s.length())==s.length();
    }
};