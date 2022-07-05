class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        Node* temp=head;
        
        Node* one=new Node(-1);
        Node* zero=new Node(-1);
        Node* two=new Node(-1);
        
        Node* oneCur=one,*zeroCur=zero,*twoCur=two;
        
        while(temp!=NULL)
        {
            if(temp->data==1)
            {
                oneCur->next=temp;
                oneCur=oneCur->next;
            }
            else if(temp->data==0)
            {
              zeroCur->next=temp;
              zeroCur=zeroCur->next;
            }
            else
            {
                twoCur->next=temp;
                twoCur=twoCur->next;
            }
            temp=temp->next;
        }
        
        zeroCur->next = (one->next!=NULL) ? one->next : two->next ;
        
        oneCur->next=two->next;
        
        twoCur->next=NULL;
        
        head=zero->next;
        
        return head;
    }
};
