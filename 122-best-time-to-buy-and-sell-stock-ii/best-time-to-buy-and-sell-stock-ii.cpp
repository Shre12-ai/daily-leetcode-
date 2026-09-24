class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int profit=0;
        int curr=0;
        for(int i=0;i<n-1;i++)
        {
               if(prices[i]<prices[i+1])
                {
                   curr=prices[i];
                   profit+=(prices[i+1]-curr);
                }
            }
            return profit;

        }
};