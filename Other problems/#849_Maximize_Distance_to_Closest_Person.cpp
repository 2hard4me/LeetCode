class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int ans = 0, cnt = 0, j = 0;
        while(!seats[j] && j < seats.size())
            ++j;
        ans = max(ans, j);
        j = seats.size() - 1;
        while(!seats[j] && j >= 0)
            --j;
        j = seats.size() - j - 1;
        ans = max(ans, j);
        
        for(int i = 0; i < seats.size(); ++i) {
            if(seats[i] == 0)
                ++cnt;
            else {
                ans = max(ans, (cnt+1)/2);
                cnt = 0;
            }
        }
        return ans ;
    }
};
