class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        
        int n = costs.size(), ans=0, i;
        
        vector<pair<int, int>>vec;
        for(i=0; i<n ;i++){
            vec.push_back({costs[i][0]-costs[i][1], i});
        }
        sort(vec.begin(), vec.end());
        
        for(i=0; i<n/2; i++){
            ans+=costs[vec[i].second][0];
        }
        
        for(i=n/2; i<n; i++){
            ans+= costs[vec[i].second][1];
        }
        
        return ans;
        
    }
};