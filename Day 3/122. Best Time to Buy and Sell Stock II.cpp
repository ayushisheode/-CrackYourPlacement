class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0;
        int minCost=prices[0];
        
        for(int i=1;i<prices.size();i++)
        {
            minCost=min(minCost,prices[i]);
            if(prices[i]-minCost>=0)
            {
                maxProfit+=prices[i]-minCost;
                minCost=prices[i];
            }
        }
        return maxProfit;
    }
};

// int ans=0;
//         for(int i=0;i<prices.size()-1;i++)
//         {
//             if(prices[i+1]>prices[i])
//             {
//                 ans+=prices[i+1]-prices[i];
//             }
//         }
//         return ans;
