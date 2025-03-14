class Solution {
public:
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
        if (!a) return b;
        if (!b) return a;

        ListNode* temp;  // Temporary pointer for merging
        if (a->val <= b->val) {
            temp = a;
            a = a->next;
        } else {
            temp = b;
            b = b->next;
        }

        ListNode* c = new ListNode(100);  // Dummy node for starting the merged list
        ListNode* t = c;  // Pointer for traversing the merged list
        t->next = temp;

        while (a != nullptr && b != nullptr) {
            if (a->val <= b->val) {
                temp->next = a;
                a = a->next;
            } else {
                temp->next = b;
                b = b->next;
            }
            temp = temp->next;
        }

        if (a == nullptr) temp->next = b;
        else temp->next = a;

        return c->next;  // Return the merged list starting from the correct node
    }
};
