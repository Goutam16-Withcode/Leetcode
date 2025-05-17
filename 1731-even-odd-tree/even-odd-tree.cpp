class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
        if (!root) return true;

        queue<TreeNode*> q;
        q.push(root);
        bool isEvenLevel = true;

        while (!q.empty()) {
            int size = q.size();
            int prev = isEvenLevel ? INT_MIN : INT_MAX;

            for (int i = 0; i < size; ++i) {
                TreeNode* node = q.front(); q.pop();
                int val = node->val;

                // Check value parity
                if (isEvenLevel && (val % 2 == 0)) return false;
                if (!isEvenLevel && (val % 2 != 0)) return false;

                // Check order constraint
                if (isEvenLevel && val <= prev) return false;
                if (!isEvenLevel && val >= prev) return false;

                prev = val;

                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }

            isEvenLevel = !isEvenLevel;  // Flip level
        }

        return true;
    }
};
