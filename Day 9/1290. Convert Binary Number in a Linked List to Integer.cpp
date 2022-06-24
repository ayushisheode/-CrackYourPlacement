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
    
    ListNode* rev(ListNode* head)
    {
        ListNode* prev=NULL;
        ListNode* cur=head;
        while(cur!=NULL)
        {
            cur=cur->next;
            head->next=prev;
            prev=head;
            head=cur;
        }
        return prev;
    }
    
    int getDecimalValue(ListNode* head) {
        int num=0,i=0;
        
        ListNode* temp=rev(head);
        
        while(temp!=NULL)
        {
            num+=pow(2,i)*temp->val;
            i++;
            temp=temp->next;
        }
        return num;
    }
};
