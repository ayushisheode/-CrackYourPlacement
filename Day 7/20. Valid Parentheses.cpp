class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
        stack<char>st;
        
        for(int i=0;i<n;i++)
        {
            if(st.empty())
                st.push(s[i]);
            else if(st.top()=='(' && s[i]==')')
                st.pop();
            else if(st.top()=='{' && s[i]=='}')
                st.pop();
            else if(st.top()=='[' && s[i]==']')
                st.pop();
            else if(st.empty() && (s[i]==')' || s[i]=='}' || s[i]==']'))
                return false;            
            else
                st.push(s[i]);
        }
        
        return st.empty();
    }
};
