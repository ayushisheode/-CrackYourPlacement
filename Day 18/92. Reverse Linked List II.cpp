class Solution {
public:
    ListNode* reverse(ListNode* temp)
    {
        ListNode* cur=temp;
        ListNode* prev=NULL;
        
        while(cur!=NULL)
        {
            temp=temp->next;
            cur->next=prev;
            prev=cur;
            cur=temp;
        }
        
        return prev;

    }
    
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right)
            return head;
        
              
        
        ListNode* dummy=new ListNode(-1,head);
        
        ListNode* start=dummy;
        
        ListNode* leftNode=head,*rightNode=head;
        
        while(left!=1)
        {
            left--;
            leftNode=leftNode->next;
        }
        
        while(right!=1)
        {
            right--;
            rightNode=rightNode->next;
        }
                
        while(start->next!=leftNode)
            start=start->next;
        
        ListNode* end=rightNode->next;        
        rightNode->next=NULL;
        
        leftNode=reverse(leftNode);        
        start->next=leftNode;
        
        ListNode* temp=start;
        while(temp->next!=NULL)
            temp=temp->next;
        
        temp->next=end;
        
        return dummy->next;
                
    }
};
