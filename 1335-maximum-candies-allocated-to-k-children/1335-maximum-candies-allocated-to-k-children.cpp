class Solution {
public:
    bool check(vector<int>& candies, int mid, long long k) {
        long long cnt = 0;
        for (int i = 0; i < candies.size(); i++) {
            cnt += candies[i] / mid;
            if (cnt >= k) return true;
        }
        return false;
    }
    int maximumCandies(vector<int>& candies, long long k) {
        long long  mx = 0;
        long long  total =0;
        for (int i = 0; i < candies.size(); i++) {
            total += candies[i];
            mx = fmax(mx, candies[i]);
        }
        if (total < k)
            return 0;

        long long l = 1;
        long long  r = mx;
        long long  res = 0;
        while (l <= r) {
        long long  mid = l + (r - l) / 2;
            if (check(candies, mid, k)) {
                res = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        return res;
    }
};