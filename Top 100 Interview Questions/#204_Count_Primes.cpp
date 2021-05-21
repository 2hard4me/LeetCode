class Solution {
public:
    int countPrimes(int n) {
        vector<bool> prime(n, true);
        for(int i = 2; i <= (int)sqrt(n); ++i) {
            if(prime[i]) {
                    for(int j = i * i; j < n; j += i)
                        prime[j] = false;
            }
        }
        int count = 0;
        for(int i = 2; i < n; ++i)
            count += int(prime[i]);
        return count;
    }
};
