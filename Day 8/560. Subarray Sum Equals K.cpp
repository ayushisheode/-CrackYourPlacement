class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int>mp;
        int sum=0,cnt=0;
        
        mp[0]++;
        
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            cnt+=mp[sum-k];
            mp[sum]++;
        }
        
        return cnt;
    }
};
