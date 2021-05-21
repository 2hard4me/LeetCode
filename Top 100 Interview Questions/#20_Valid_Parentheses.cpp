class Solution {
public:
    bool isValid(string s) {
        stack<char> valid;
        int bal = 0;
        for(int i = 0; i < s.size(); ++i) {
            if(s[i] == '{' || s[i] == '(' || s[i] == '['){
                valid.push(s[i]);
                ++bal;
            } else {
                --bal;
                if(valid.empty())
                    return false;
                if(valid.top() == '(' && s[i] == '}' || valid.top() == '(' && s[i] == ']' || 
                   valid.top() == '[' && s[i] == ')' || valid.top() == '[' && s[i] == '}' ||
                   valid.top() == '{' && s[i] == ')' || valid.top() == '{' && s[i] == ']')
                    return false;
                valid.pop();
            }
        }
        return bal == 0;
    }
};
