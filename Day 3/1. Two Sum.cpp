class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans(2,-1);
        map<int,int>mp;
        
        
        for(int i=0;i<nums.size();i++)
        {
            int x=target-nums[i];
            if(mp.find(x)!=mp.end())
            {
                ans[0]=i;
                ans[1]=mp[x];
                return ans;
            }
            else
            {
                mp[nums[i]]=i;
            }
        }
        
        return ans;
    }
};
