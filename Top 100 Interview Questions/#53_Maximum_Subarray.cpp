class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int minp = 0, maxsum = nums[0],pref = 0;
        for(int i = 0; i < nums.size(); ++i) {
            pref += nums[i];
            maxsum = max(maxsum,pref - minp);
             minp = min(pref,minp);
        }
        return maxsum;
    }
};
