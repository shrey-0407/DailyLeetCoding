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
    
    void solve(TreeNode* &root,int val,int d,int c){
        if(root==NULL) return ;
        
        if(c==d-1){
            TreeNode* temp=new TreeNode(val);
            temp->left=root->left;
            root->left=temp;
     
            temp=new TreeNode(val);
            temp->right=root->right;
            root->right=temp;
            return;
        }
        solve(root->left,val,d,c+1);
        solve(root->right,val,d,c+1);
        
    }
    
    TreeNode* addOneRow(TreeNode* root, int val, int d) {
        if(d==1){
            TreeNode* temp=new TreeNode(val);
            temp->left=root;
            return temp;
        }
        solve(root,val,d,1);
        return root;
    }
};