class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0,minprices =1e5+1;
        for(int i =0; i < prices.size(); ++i){
            if(minprices > prices[i])
                minprices = prices[i];
            else{
                if(profit < prices[i] - minprices)
                    profit = prices[i] - minprices;
            }
        }
        return profit;
    }
};
