class Solution {
public:
    vector<vector<int>>res;
        
    void fun(int i,int n,int k,vector<int>&v)
    {
        if(i>n)
        {
            if(v.size()==k)
            {
                res.push_back(v);
                return;
            }
            return;
        }
            
        if(v.size()==k)
        {
            res.push_back(v);
            return;
        }
        
        v.push_back(i);              
        fun(i+1,n,k,v);
        
        v.pop_back();
        fun(i+1,n,k,v);
        
    }
    
    vector<vector<int>> combine(int n, int k) {        
        
        vector<int>v;        
              
        fun(1,n,k,v);
        
        return res;
    }
};
