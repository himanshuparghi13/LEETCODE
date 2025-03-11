class Solution {
public:
    int nn(string s, int k){
        int i = 0;
        int j =0;
        int cnt =0;
        unordered_map<char,int>mp;
        while(j < s.size()){
            mp[s[j]]++;
            while(mp.size()>k) {
                mp[s[i]]--; 
                if(mp[s[i]] == 0){
                    mp.erase(s[i]);
                    }i++;
            }
            cnt += j-i+1;
            j++;
        }
        return cnt;
    }
    int numberOfSubstrings(string s) {
        int cnt  = nn(s,3)-nn(s,2);
        return cnt;
    }
};