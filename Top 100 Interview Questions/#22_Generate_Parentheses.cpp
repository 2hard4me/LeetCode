class Solution {
public:
    vector<string> generateParenthesis(int n) {
        if(n == 0)
            return {""};
        vector<string> ans;
        for(int  i = 0; i < n ; ++i) {
            for(auto& first : generateParenthesis(i)) {
                for(auto& second : generateParenthesis(n - i -1)) {
                    ans.push_back("(" + first +")"+ second);
                }
            }
        }
        return ans; 
    }
};
