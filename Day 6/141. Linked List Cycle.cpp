class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow=head,*fast=head;
        
        do
        {
            if(fast==NULL || fast->next==NULL)
                return false;
            fast=fast->next->next;
            slow=slow->next;
        }while(fast!=slow);
        
        return true;
    }
};
