class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char , char>mp;
        map<char,char>mp2;
        for(int i=0;i<s.size();i++){
            if(mp.find(s[i])!=mp.end()){
                if(mp[s[i]]  != t[i]) return false;
            }
            if(mp2.find(t[i]) != mp2.end()){
                if(mp2[t[i]] != s[i]) return false;
            }
            else{
                mp[s[i]] = t[i];
                mp2[t[i]] = s[i];
            }
        }
        return true;
    }
};