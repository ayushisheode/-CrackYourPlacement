class Solution {
public:
    int maxArea(vector<int>& h) {
        int i=0,j=h.size()-1;
        int ans=INT_MIN;
        
        int area=1;
        while(i<=j)
        {
            area=(j-i)*(min(h[i],h[j]));
            ans=max(ans,area);
            if(h[i]<=h[j])
                i++;
            else
                j--;
        }
        return ans;
    }
};
