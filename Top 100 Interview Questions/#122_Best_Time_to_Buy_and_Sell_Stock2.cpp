class Solution {
public:
    int maxProfit(vector<int>& a) {
        int profit = 0;;
        for(int i = 0;i < a.size() - 1; ++i){
            if(a[i]  < a[i+1])
               profit +=a[i+1] - a[i];
         } 
        return profit;
    }
};
