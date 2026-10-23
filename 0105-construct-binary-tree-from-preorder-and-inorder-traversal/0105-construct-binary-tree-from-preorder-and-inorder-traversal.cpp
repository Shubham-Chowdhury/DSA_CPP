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
    TreeNode* solve(vector<int>& p, vector<int>& in, int s, int e, int &idx){
        if(s > e) return NULL;
        TreeNode *root = new TreeNode(p[idx]);
        idx++;

        int index = s;

        for(int i = index; i <= e; i++){
            if(root->val == in[i]){
                index = i;
                break;
            }
        }

        root->left = solve(p, in, s, index - 1, idx);
        root->right = solve(p, in, index + 1, e, idx);

        return root;
    }
    
    TreeNode* buildTree(vector<int>& p, vector<int>& i) {
        int idx = 0;
        return solve(p, i, 0, p.size() - 1, idx);
    }
};