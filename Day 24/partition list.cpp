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
    ListNode* partition(ListNode* head, int x) {
        if(head==NULL)
            return head;
        
        ListNode* left=new ListNode(-1);
        ListNode* leftCur=left;
        
        ListNode* right=new ListNode(-1);
        ListNode* rightCur=right;
        
        ListNode* temp=head;
        while(temp!=NULL)
        {
            if(temp->val<x)
            {
                ListNode* dummy=new ListNode(temp->val);
                leftCur->next=dummy;
                leftCur=dummy;
            }
            temp=temp->next;
        }
        
        temp=head;
        
        while(temp!=NULL)
        {
            if(temp->val>=x)
            {
                ListNode* dummy=new ListNode(temp->val);
                rightCur->next=dummy;
                rightCur=dummy;
            }
            temp=temp->next;
        }
        
        leftCur->next=right->next;
        rightCur->next=NULL;
        
        return left->next;
    }
};
