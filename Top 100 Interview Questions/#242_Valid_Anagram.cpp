class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> m;
        map<char,int> m1;
        for(auto x : s)
            ++m[x];
        for(auto x : t)
            ++m1[x];
        return (m1 == m);
    }
};
