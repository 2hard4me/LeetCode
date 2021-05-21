class Solution {
public:
    int sum(int n){
        int sum = 0;
        while(n){
            sum += (n%10)*(n%10);
            n /= 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int i = 0;
        while(i < 100){
            if(sum(n) == 1)
                return true;
            n = sum(n);
            ++i;
        }
        return false;
    }
};
