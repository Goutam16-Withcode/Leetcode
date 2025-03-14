class Solution
{
    public:
        ListNode* partition(ListNode *head, int x)
        {
            ListNode *lo = new ListNode(0);	// Dummy head for the 'less than x' list
            ListNode *hi = new ListNode(0);	// Dummy head for the 'greater than or equal to x' list
            ListNode *templo = lo;
            ListNode *temphi = hi;

            ListNode *temp = head;
            while (temp != nullptr)
            {
                if (temp->val < x)
                {
                    templo->next = temp;	// Add to 'less than x' list
                    templo = templo->next;
                }
                else
                {
                    temphi->next = temp;	// Add to 'greater than or equal to x' list
                    temphi = temphi->next;
                }
                temp = temp->next;	// Move to the next node
            }
            temphi->next = nullptr;	// End the 'greater than or equal to x' list
            templo->next = hi->next;	// Connect the two lists

            ListNode *result = lo->next;	// The real head of the new list
            delete lo;	// Clean up the dummy node
            delete hi;	// Clean up the dummy node

            return result;
        }
};