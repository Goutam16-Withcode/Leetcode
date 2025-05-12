class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        auto cmp = [](ListNode*a,ListNode*b) {
            return a->val > b->val ;
        };
        priority_queue<ListNode*,vector<ListNode*>,decltype(cmp)>pq(cmp);
        for(ListNode*node:lists){
            if(node)pq.push(node);
        }
        ListNode*dummy =new ListNode(0);
        ListNode*tail = dummy;
        while(!pq.empty()){
            ListNode*minnode = pq.top();
            pq.pop();
            tail->next = minnode;
            tail = tail->next;
            if(minnode->next){
                pq.push(minnode->next);
            }
        }
        return dummy->next;
    }
};