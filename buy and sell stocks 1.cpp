class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int cost =0;
        int maxcost = 0;
        if(n==0)
        {
            return 0;
        }
        int minprice = prices[0];
        for(int i=0;i<n;i++)
        {
            minprice = min(prices[i],minprice);
            cost = prices[i] - minprice;
            maxcost = max(cost,maxcost);
        }
        return maxcost;
    }
};