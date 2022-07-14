class Solution {
public:
    bool check(int i,int j,string s)
    {
        while(i<j)
        {
            if(s[i]!=s[j])
                return false;
            i++;j--;
        }
        return true;
    }
    
    bool validPalindrome(string s) {
        int n=s.size();
       
        int i=0,j=n-1;
        
        int cnt=0;
        
        while(i<j)
        {
            if(s[i]!=s[j])
            {
                return (check(i,j-1,s) || check(i+1,j,s));
            }
            i++;
            j--;
        }
        
       
        return true;
    }
};
