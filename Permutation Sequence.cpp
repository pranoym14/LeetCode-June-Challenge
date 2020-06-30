class Solution {
public:
    // string getPermutation(int n, int k) {
    //   string s;
    //     for(int i=0;i<n;i++)
    //         s+=to_string(i+1);
    //     string h;
    //     do
    //     {
    //         k--;
    //         h=s;
    //     }
    //     while(next_permutation(s.begin(),s.end()) && k>0);
    //     return h;
    // }   //STL passed
    string getPermutation(int n, int k) {               //efficient
        string res;
        string nums = "123456789";
        int f[10] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
        --k;
        for (int i = n; i >= 1; --i) {
            int j = k / f[i - 1];
            k %= f[i - 1];
            res.push_back(nums[j]);
            nums.erase(nums.begin() + j);
        }
        return res;
    }
};

