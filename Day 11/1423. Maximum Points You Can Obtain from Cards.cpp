class Solution {
public:
    int maxScore(vector<int>& arr, int k) {
        int sum=0;
        int n=arr.size();
        
        for(int i=0;i<n;i++)
            sum+=arr[i];
        
        if(n==k)
            return sum;
        
        int i=0,j=n-k,temp=0;
        
        for(i=0;i<j;i++)
            temp+=arr[i];
        
        i=0;
        int ans=INT_MAX;
        ans=min(ans,temp);
        
        while(j<n)
        {
            temp-=arr[i];
            i++;
            temp+=arr[j];
            j++;
            ans=min(ans,temp);
        }
        
        return sum-ans;
            
    }
};
