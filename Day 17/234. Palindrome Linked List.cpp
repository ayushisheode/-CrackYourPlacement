/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverse(ListNode* temp)
    {
        ListNode* prev=NULL;
        ListNode* cur=temp;
        
        while(cur!=NULL)
        {
            temp=cur->next;
            cur->next=prev;
            prev=cur;
            cur=temp;
        }
        
        return prev;
    }
    
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head,*fast=head;
        ListNode* temp=head;
        
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        
        ListNode* rev=reverse(slow);
        
        while(temp!=NULL && rev!=NULL)
        {
            if(temp->val!=rev->val)
                return false;
            temp=temp->next;
            rev=rev->next;
        }
        
        return true;
        
        
    }
};
