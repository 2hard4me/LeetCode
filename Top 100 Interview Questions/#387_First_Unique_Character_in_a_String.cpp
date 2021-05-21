class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,pair<int,int>> m;
        for(int i = 0; i < s.size(); ++i) {
            if(m.find(s[i]) == m.end()){
                m[s[i]].second = i;
            }
            ++m[s[i]].first;
        }
        int ind = 1e6;
        for(auto& x: m) {
            if(x.second.first == 1) {
                if(x.second.second < ind)
                    ind = x.second.second;
            }
        }
        return (ind == 1e6) ? -1 : ind;
    }
};
