class Solution {
public:
    vector<int> v;
    vector<int> v1;
    vector<bool> used;
    vector< vector<int> > s;
    int n;
    void rec(int idx){
        if(idx == n){
            vector<int>ans(n);
            for(int i = 0;i < n; ++i)
                ans[i] = v1[v[i]-1];
            s.push_back(ans);
            return;
        }
        for(int i = 1;i <= n; ++i){
            if(used[i])
                continue;
            v[idx] = i;
            used[i] = true;
            rec(idx+1);
            used[i] = false;
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        n = nums.size();
        v = vector<int>(n);
        v1 = nums;
        used = vector<bool>(n+1,false);
        rec(0);
        return s;
    }
};
