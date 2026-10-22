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
    bool solve(TreeNode *root, int t, int c){
        if(root == NULL) return false;

        c += root->val;

        if(root->left == NULL && root->right == NULL){
            return c == t;
        }

        return solve(root->left, t, c) || solve(root->right, t, c);
    }
    bool hasPathSum(TreeNode* root, int t) {
        return solve(root, t, 0);
    }
};