class Solution {
public:
    ListNode* merge(ListNode* a, ListNode* b) {
        ListNode* c = new ListNode(100); // Corrected "node" to "ListNode"
        ListNode* temp = c;
        
        while (a != NULL && b != NULL) {
            if (a->val <= b->val) {
                temp->next = a;
                a = a->next; // Fixed logic error (moved the pointer forward correctly)
            } else {
                temp->next = b;
                b = b->next; // Fixed logic error (moved the pointer forward correctly)
            }
            temp = temp->next; // Fixed logic error (moved temp pointer correctly)
        }
        
        if (a == NULL) temp->next = b; 
        else temp->next = a;

        return c->next; // Correct return statement
    }

    ListNode* sortList(ListNode* head) {
        if (head == NULL || head->next == NULL) return head;

        ListNode* slow = head;
        ListNode* fast = head;
        while (fast->next != NULL && fast->next->next != NULL) { // Fixed condition
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* left = head;
        ListNode* right = slow->next;
        slow->next = NULL; // Split the list into two halves

        left = sortList(left);
        right = sortList(right);

        ListNode* a = merge(left, right); // Fixed variable name
        return a;
    }
};