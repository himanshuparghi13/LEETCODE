class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long int max_sub = LLONG_MIN;
        long long int mx = nums[0];
        long long int ans = 0;
        for (int i = 1; i < nums.size()-1; i++) {
            max_sub = fmax(max_sub, mx - nums[i]);
            mx = fmax(mx,nums[i]);
            ans = fmax(ans, max_sub * nums[i+1]);
        }
        return ans;
    }
};