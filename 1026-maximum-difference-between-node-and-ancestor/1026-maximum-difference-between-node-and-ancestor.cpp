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
    int diff=INT_MIN;
    void help(TreeNode* root,int mx,int mn){
        if(root==NULL) return ;
        
        mx=max(mx,root->val);
        mn=min(mn,root->val);
        
        diff=max(diff,mx-mn);
        help(root->left,mx,mn);
        help(root->right,mx,mn);
        
    
    }
    
    int maxAncestorDiff(TreeNode* root) {
        if(!root) return 0;
        int mx=INT_MIN,mn=INT_MAX;
        
        help(root,mx,mn);
        return diff;
        
        
    }
};