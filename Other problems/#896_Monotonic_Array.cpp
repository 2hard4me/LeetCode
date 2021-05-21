class Solution {
public:
    bool isMonotonic(vector<int>& a) {
        bool inc = true,decr = true;
        for(int i = 0; i < a.size() -1; ++i){
            if(a[i] > a[i+1])
                inc = false;
        }
        for(int  i = 0 ; i < a.size() - 1; ++i){
            if(a[i] < a[i+1])
                decr =false;
        }
        return inc || decr;
    }
};
