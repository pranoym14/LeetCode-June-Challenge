class Solution {
public:
    int numTrees(int num) {
        long long int n=1,d=1;
        for(int k=2;k<=num;k++)
        {
             n*=(num+k);
            d*=k;
            if(n%d==0)
            {
                n=n/d;
                d=1;
            }
        }
        return n/d;
    }
};