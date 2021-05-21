class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> d;
        for(auto i : nums)
            ++d[i];
        for(auto x :  d)
            if(x.second == 1)
                return x.first;
        return -1;
    }
};
