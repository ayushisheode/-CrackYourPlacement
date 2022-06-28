class Solution {
public:
    int minDeletions(string s) {
        
        int n=s.size();
        vector<int>freq(26,0);
        
        for(int i=0;i<n;i++)
        {
            freq[s[i]-'a']++;
        }
        
       
        unordered_set<int>seen;        
       
        int cnt=0;
        
        for(int i=0;i<freq.size();i++)
        {
            while(freq[i] && (seen.find(freq[i])!=seen.end()))
            {
                freq[i]--;
                cnt++;
            }
            seen.insert(freq[i]);
        }
        return cnt;
    }
};
