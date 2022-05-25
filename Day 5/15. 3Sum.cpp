class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>>res;
        
        if(nums.size()<3)
            return res;
        
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size()-2;)
        {
            int a=nums[i];
            int j=i+1,k=nums.size()-1;
            while(j<k)
            {
                int b=nums[j],c=nums[k];
                int sum=a+b+c;
                if(sum==0)
                {
                    
                    res.push_back({a,b,c});
                    
                    while(j<nums.size() && b==nums[j])
                        j++;
                    
                    while(k>=0 && c==nums[k])
                        k--;
                }
                else if(sum<0)
                    j++;
                else
                    k--;
            }
            while(i<nums.size() && a==nums[i])
                i++;
        }
        
        return res;
    }
};
