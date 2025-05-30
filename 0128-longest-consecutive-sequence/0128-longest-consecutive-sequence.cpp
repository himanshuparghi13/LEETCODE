class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        long long mx = 1;
        unordered_set<int> s(nums.begin(), nums.end());
        int cnt = 0;
        for (int i : s) {
            if (s.find(i - 1) == s.end()) {
                cnt = 1;
                int x = i;
                while (s.find(x + 1) != s.end()) {
                    cnt = cnt+1;
                    x =x+1;
                }
            }
            mx = fmax(mx , cnt);
        }
        return mx;
    }
};