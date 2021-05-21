class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int ans = 0;
        for(int i = 0 ; i < nums.size(); ++i) {
            int cnt = 0;
            while(i  < nums.size() && nums[i]){
                ++cnt;
                ++i;
            }
            if(cnt && i < nums.size() - 1 && nums[i+1]){
                int j = i+1;
                while(j < nums.size() && nums[j]){
                    ++cnt;
                    ++j;
                }
            }
            ans = max(ans, cnt);
        }
        return ((ans == nums.size()) ?  ans - 1 : ans);
    }
};
