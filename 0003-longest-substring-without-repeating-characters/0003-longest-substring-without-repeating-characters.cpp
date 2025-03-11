class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        long long cnt=0;
        long long mx=0;
        int left = 0;
        vector<char>mp(256 , 0);
        for(int i=0;i<s.size();i++){
           mp[s[i]]++;
            while(mp[s[i]] >1) {
                mp[s[left] ]--;
                left++;
            }
           mx=fmax(mx,i-left+1);
        }
        return mx;
    }
};