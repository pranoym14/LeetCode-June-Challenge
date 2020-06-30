/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void preorder(TreeNode* root,vector <vector <int>>& res,vector <int> ans)
    {
        if(!root)
            return;
        
        if(!root->left && !root->right){
            ans.push_back(root->val);
            res.push_back(ans);
            ans.pop_back();
        }
           
        else
            ans.push_back(root->val);
        preorder(root->left,res,ans);
        preorder(root->right,res,ans);
    }
    int sumNumbers(TreeNode* root) {
        vector <vector <int>> res;
        vector <int> l;int result=0;
        preorder(root,res,l);
        for(auto u:res)
        {
            string s;
            for(auto y:u)
                s+=to_string(y);
            int b = atoi(s.c_str());
            // cout<<b;
            result+=b;
            // cout<<endl;
            
        }
        return result;
        
    }
};