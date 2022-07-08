class Solution {
public:
    int dp[13][10001];
    
    int fun(vector<int>& a, int amt,int i)
    {
        if(amt==0)
            return 0;
        if(amt<0 || i==a.size())
            return 100000009;
        
        if(dp[i][amt]!=-1)
            return dp[i][amt];
        
        int left=1+fun(a,amt-a[i],i);
        int right=fun(a,amt,i+1);
        
        return dp[i][amt]=min(left,right);
    }
    
    int coinChange(vector<int>& coins, int amount) {
        memset(dp,-1,sizeof(dp));
        
        int ans=fun(coins,amount,0);
        
        if(ans>=100000009)
            return -1;
        return ans;
    }
};
