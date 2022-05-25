class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>res;
        int n=nums.size();
        if(n<4)
            return res;
        
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n;)
        {
            int a=nums[i];
            for(int j=i+1;j<n;)
            {
                int b=nums[j];
                int k=target-(a+b);
                int l=j+1,h=n-1;
                while(l<h)
                {
                    int c=nums[l],d=nums[h];
                    if(c+d==k)
                    {
                        res.push_back({a,b,c,d});
                        
                        while(l<n && c==nums[l]) l++;
                        while(h>=0 && d==nums[h]) h--;
                    }
                    else if(c+d<k)
                        l++;
                    else
                        h--;
                }
                while(j<n && nums[j]==b) j++;
            }
            while(i<n && nums[i]==a) i++;
        }
        
        return res;
    }
};
