class Solution {
public:
    int compress(vector<char>& chars) {
        int cnt = 1;
        vector<char> newchars;
        for(int i = 0; i < chars.size(); ++i) {
            vector<char> charscnt;
            while(i + 1 < chars.size() && chars[i] == chars[i + 1]) {
                ++i;
                ++cnt;
            }
            if(cnt == 1) {
                newchars.push_back(chars[i]);
            } else {
                newchars.push_back(chars[i]);
                while(cnt) {
                    charscnt.push_back('0'+ cnt % 10);
                    cnt /= 10;
                }
                reverse(charscnt.begin(), charscnt.end());
                for(auto& x : charscnt)
                    newchars.push_back(x);
                cnt = 1;
            }
        }
        chars = newchars;
        return newchars.size();
    }
};
