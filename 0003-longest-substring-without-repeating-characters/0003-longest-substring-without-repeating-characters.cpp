class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        long long cnt=0;
        long long mx=0;
        int left = 0;
        vector<int>mp(256 , -1);
        int i = 0;
        while(i<s.size()){
            if(mp[s[i]] != -1 && mp[s[i]] >= left) {
                left = max(mp[s[i]] + 1, left);
            }
           mp[s[i]] = i;
           mx=fmax(mx,i-left+1);
           i++;
        }
        return mx;
    }
};