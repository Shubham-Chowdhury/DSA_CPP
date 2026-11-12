/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool RNP(TreeNode *root, TreeNode *x, vector<TreeNode*> &path){
        if(root == NULL){
            return false;
        }
        path.push_back(root);
        if(root == x){
            return true;
        }
        int isLeft = RNP(root->left, x, path);
        int isRight = RNP(root->right, x, path);

        if(isLeft || isRight){
            return true;
        }

        path.pop_back();
        return false;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> path1;
        vector<TreeNode*> path2;

        RNP(root, p, path1);
        RNP(root, q, path2);

        TreeNode *ans = NULL;
        for(int i = 0; i < path1.size() && i < path2.size(); i++){

            if(path1[i] == path2[i]){
                ans = path1[i];
            }
            else{
                break;
            }
        }

        return ans;
    }
};