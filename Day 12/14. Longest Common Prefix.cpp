class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res=strs[0];
        int k;
        
        for(int i=1;i<strs.size();i++)
        {
            k=0;
            for(int j=0;j<res.size();j++)
            {
                if(strs[i][j]==res[j])
                    k++;
                else
                    break;
            }
            res=res.substr(0,k);
        }
        return res;
    }
};
