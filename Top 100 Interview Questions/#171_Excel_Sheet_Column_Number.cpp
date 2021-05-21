class Solution {
public:
    int titleToNumber(string columnTitle) {
        int cnt = 0,j = 0;
        for(int  i = columnTitle.size()-1;i>=0; --i){
            cnt += pow(26,j) *(columnTitle[i] - 'A' + 1);
            ++j;
        }
        return cnt;
    }
};
