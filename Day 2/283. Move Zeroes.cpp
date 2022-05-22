class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        
        while(i<nums.size() && nums[i]!=0)
            i++;
        
        int j=0;
        
        if(i<nums.size()-1)
            j=i+1;
        else
            return;
        
        while(j<nums.size())
        {
            if(nums[j]!=0 && nums[i]==0)
            {
                swap(nums[i++],nums[j++]);
            }
            else if(nums[j]==0)
                j++;
        }
    }
};
