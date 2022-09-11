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
    int depth(TreeNode* root){
        if(root==NULL) return 0;
        return 1+max(depth(root->left),depth(root->right));
    }
    TreeNode* deep(TreeNode* root,int s,int d){
        if(root==NULL or s==d) return root;
        
        TreeNode* a1=deep(root->left,s+1,d);
        TreeNode* a2=deep(root->right,s+1,d);
        
        if(a1!=NULL and a2!=NULL) return root;
        if(a1!=NULL) return a1;
        if(a2!=NULL) return a2;
        return NULL;
    }
    
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        if(root==NULL) return root;
        
        int d=depth(root);
        return deep(root,1,d);
      
    }
};


//    int depth(TreeNode* root){
//           if(root == NULL) return 0;
//           return 1 + max(depth(root->left) , depth(root->right));
//    } 
//    TreeNode* helper(TreeNode*root , int s , int d){
    
//      if(root == NULL || s == d) return root;
   
//     TreeNode*ans1 =  helper(root->left , s+ 1 , d) ;
//     TreeNode* ans2 =  helper(root->right , s + 1 , d);
  
//     if(ans1 != NULL && ans2 != NULL)return root;
//     if(ans1!= NULL) return ans1 ; 
//     if(ans2 != NULL)return ans2;
//     return NULL;
// }

// TreeNode* lcaDeepestLeaves(TreeNode* root) {
  
//      if(root == NULL) return root;
//      int d = depth(root);
//      return helper(root , 1 , d);
// }