class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int cnt=0,sum=0;
        map<int,int>mp;
        mp[0]=1;
        
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            int val=sum%k;
            
            if(val<0) 
                val+=k;
            
            if(mp.find(val)!=mp.end())
            {
                cnt+=mp[val];
            }
            mp[val]++;
        }
        
        return cnt;
    }
};
