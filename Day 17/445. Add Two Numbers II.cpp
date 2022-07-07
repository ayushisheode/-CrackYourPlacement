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
    ListNode * reverse(ListNode* temp)
    {
        ListNode* prev=NULL;
        ListNode* cur=temp;
        
        while(cur!=NULL)
        {
            temp=temp->next;
            cur->next=prev;
            prev=cur;
            cur=temp;
        }
        
        return prev;
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        l1=reverse(l1);
        l2=reverse(l2);
        
        ListNode* naya=new ListNode(-1);
        ListNode* temp=naya;
        
        int carry=0;
        
        while(l1 && l2)
        {
            int x=l1->val+l2->val+carry;
            carry=x/10;
            x=x%10;
            ListNode* dummy=new ListNode(x);
            temp->next=dummy;
            temp=dummy;
            l1=l1->next;
            l2=l2->next;
        }
        
        while(l1)
        {
            int x=l1->val+carry;
            carry=x/10;
            x=x%10;
            ListNode* dummy=new ListNode(x);
            temp->next=dummy;
            temp=dummy;
            l1=l1->next;
        }
        
        while(l2)
        {
            int x=l2->val+carry;
            carry=x/10;
            x=x%10;
            ListNode* dummy=new ListNode(x);
            temp->next=dummy;
            temp=dummy;
            l2=l2->next;
            
        }
        
        if(carry!=0)
        {
            ListNode *cry=new ListNode(carry);
            temp->next=cry;
            temp=cry;
        }
        
        return reverse(naya->next);
    }
};
