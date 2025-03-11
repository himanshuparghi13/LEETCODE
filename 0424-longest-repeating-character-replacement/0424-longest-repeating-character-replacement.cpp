class Solution {
public:
    int characterReplacement(string s, int k) {
        int left =0;
        int right =0;
        int maxLen =0;
        int maxFreq =0;
        map<char,int>mp;
        while( right < s.size()){
            mp[s[right]]++;
            maxFreq = max(maxFreq, mp[s[right]]);
            while((right-left+1) - maxFreq > k ){
                mp[s[left]]--;
                if(mp[s[left]] == 0) {
                    mp.erase(s[left]);
                }
                left++;
            }
            maxLen = max(maxLen , right-left+1);
            right++;
        }
        return maxLen;
    }
};