class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> v(nums.size() + 1);
        vector<int> ans;
        for(int i = 0; i < nums.size(); ++i) 
            ++v[nums[i]];
        for(int i = 1; i <= nums.size(); ++i) {
            if(!v[i])
                ans.push_back(i);
        }
        return ans;
    }
};
