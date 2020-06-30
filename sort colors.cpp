class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count[3]={0};
        for(int i:nums)
            count[i]++;
        int l=0;
        for(int i=0;i<3;i++)
        {
            int k=count[i];
            while(k--)
            {
                nums[l++]=i;
            }
        }
    }
};