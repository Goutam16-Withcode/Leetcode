class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int leftmost_value;
        while(!q.empty()){
            TreeNode*temp = q.front();
            q.pop();
            leftmost_value = temp->val;
            if (temp->right) {
                q.push(temp->right);
            }
            if (temp->left) {
                q.push(temp->left);
            }
        }
        return leftmost_value;
    }
};