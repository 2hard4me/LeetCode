class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        unordered_map<int ,int>d;
        for(auto& x: nums1){
            ++d[x];
        }
         for(auto& x: nums2){
            if(d[x] > 0){
                v.push_back(x);
                --d[x];
            }
        }
        return v;
    }
};
