class Solution {
public:
    int levels(TreeNode *root) {
        if (root == NULL) return 0;
        return 1 + max(levels(root->left), levels(root->right));
    }

    void orderLevel(TreeNode *root, vector<vector<int>> &ans, int level) {
        if (root == NULL) return;

        ans[level].push_back(root->val);
        orderLevel(root->left, ans, level + 1);
        orderLevel(root->right, ans, level + 1);
    }

    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        int n = levels(root);
        vector<vector<int>> ans(n);
        orderLevel(root, ans, 0);

        // Apply zigzag: reverse every odd level
        for (int i = 0; i < n; ++i) {
            if (i % 2 != 0) {
                reverse(ans[i].begin(), ans[i].end());
            }
        }

        return ans;
    }
};
