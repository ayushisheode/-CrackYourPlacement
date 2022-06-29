class Solution {
public:
    bool canJump(vector<int>& nums) {
        int jumps=nums[0];
        
        for(int i=1;i<nums.size();i++)
        {
            if(i>jumps)
                return false;
            else
                jumps=max(jumps,i+nums[i]);
        }
        return true;
    }
};
