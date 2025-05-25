class Solution {
public:
    int findSize(ListNode* head) {
        int size = 0;
        while (head) {
            size++;
            head = head->next;
        }
        return size;
    }
    
    ListNode* globalHead;

    TreeNode* helper(int left, int right) {
        if (left > right) return nullptr;

        int mid = left + (right - left) / 2;
        TreeNode* leftChild = helper(left, mid - 1);
        TreeNode* root = new TreeNode(globalHead->val);
        root->left = leftChild;
        globalHead = globalHead->next;
        root->right = helper(mid + 1, right);
        return root;
    }

    TreeNode* sortedListToBST(ListNode* head) {
        int size = findSize(head);
        globalHead = head;
        return helper(0, size - 1);
    }
};
