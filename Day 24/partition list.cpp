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
                leftCur->next=temp;
                leftCur=leftCur->next;
                temp=temp->next;
                leftCur->next=NULL;
            }
            else
            {
                rightCur->next=temp;
                rightCur=rightCur->next;
                temp=temp->next;
                rightCur->next=NULL;
            }            
        }
        
        leftCur->next=right->next;
        
        return left->next;
        
        
    }
};
