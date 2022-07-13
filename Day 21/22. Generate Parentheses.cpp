class Solution {
public:
    vector<string>res;
    
    void fun(int open,int close,string op)
    {
        if(open==0 && close==0)
        {
            res.push_back(op);
            return;
        }
        
        string op1=op;
        string op2=op;
        
        if(open==close)
        {
            op1+='(';
            fun(open-1,close,op1);
        }
        
        else if(open==0 && close!=0)
        {
            op1+=')';
            fun(open,close-1,op1);
        }
        
        else if(open<close)
        {
            op1+='(';
            fun(open-1,close,op1);
            
            op2+=')';
            fun(open,close-1,op2);
        }
    }
    
    vector<string> generateParenthesis(int n) {
        string op="";
        fun(n,n,op);
        return res;
    }
};
