class Solution{
public:
    int cnt=0;
    
    int fun(Node* root,int l,int h)
    {
        if(root==NULL)
            return 0;
         
        
        if(root->data>=l && root->data<=h)
        {
            cnt++;
        }
        
        fun(root->left,l,h);
        fun(root->right,l,h);
    }
    int getCount(Node *root, int l, int h)
    {
      // your code goes here   
      fun(root,l,h);
      return cnt;
    }
};
