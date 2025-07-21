class Solution {
public:
    string makeFancyString(string s) {
        string ss ="";
        ss.push_back(s[0]);
        ss.push_back(s[1]);

        if(s.size() <3) return s;
        for(int i=2;i<s.size();i++){
            if(s[i] == s[i-1] && s[i-1] == s[i-2]) {
                continue;
            }
            else{
                ss.push_back(s[i]);
            }
        }
        return ss;
    }
};