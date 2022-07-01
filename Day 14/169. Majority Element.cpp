class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mp;
        
        for(auto i:nums)
            mp[i]++;
        
        int ans=0;
        
        for(auto j:mp)
        {
            if(j.second>nums.size()/2)
            {
                ans=j.first;
                break;
            }
        }
        
        return ans;
    }
};
