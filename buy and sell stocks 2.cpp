class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int i=0;
        int valley = prices[0];
        int peak = prices[0];
        int ans =0;
        int n = prices.size();
        while(i<n-1)
        {
            while(i<n-1&&prices[i]>=prices[i+1])
            {
                i++;
            }
            valley = prices[i];
            while(i<n-1&&prices[i]<=prices[i+1])
            {
                i++;
            }
            peak = prices[i];
            ans += peak-valley;
        }
        return ans;
    }
};