vector<int> v;
class Solution {
public:
    Solution(vector<int>& w) {
        for(int i = 1; i < w.size(); i++) w[i] += w[i - 1];
	v = w;
    }
    
    int pickIndex() {
        return upper_bound(begin(v), end(v), rand() % v.back()) - begin(v);
    }
};