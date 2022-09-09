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
    
    void dfs(TreeNode* root,vector<int>&ds,int l){
        if(!root) return;
        
        if(l==ds.size()) ds.push_back(root->val);
        dfs(root->right,ds,l+1);
        dfs(root->left,ds,l+1);
        
    }
    
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ds;
        dfs(root,ds,0);
        return ds;
    }
};