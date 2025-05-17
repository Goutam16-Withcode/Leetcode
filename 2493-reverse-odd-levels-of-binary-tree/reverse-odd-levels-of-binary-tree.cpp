class Solution {
public:
    void helper(TreeNode* left,TreeNode* right,int level) {
        if (!left || !right) return;
        if (level % 2 == 1) {
           swap(left->val,right->val);
        }
        helper(left->left,right->right,level+1);
        helper(left->right,right->left,level+1);
    }
    TreeNode* reverseOddLevels(TreeNode* root) {
        if (!root) return root;
        helper(root->left,root->right,1);
        return root;
    }
};