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
      vector<vector<int>> levelOrderBottom(TreeNode* root) {
            vector<vector<int>> ans;
    queue<TreeNode *> q;
    if(root)
    q.push(root);
    while(!q.empty())
    {
        int n = q.size();
        vector<int> a;
        while(n--)
        {
            TreeNode * t = q.front();
            a.push_back(t->val);
            q.pop();
            if(t->left)
            {
                q.push(t->left);
            }
            if(t->right)
            {
                q.push(t->right);
            }
        }
        ans.push_back(a);
    }
    reverse(ans.begin(),ans.end());
    return ans;

    }
};