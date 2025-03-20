#include<bits/stdc++.h>
class Solution {
public:

    string reverseWords(string s) {
        for(int i=0;i<s.size()/2;i++){
            swap(s[i] , s[s.size()-1-i]);
        }
        int c=0;
        string st="";
        for(int i=0;i<s.size();i++){
            if(s[i] == char(32)){
                reverse(s.begin()+c,s.begin()+i);
                c= i+1;
            }
        }
        reverse(s.begin()+c,s.end());
        if(s[0] != int(32)) st.push_back(s[0]); 
        for(int i=1;i<s.size();i++){
            if(s[i] == int(32) && s[i-1] == int(32)) continue;
            else st.push_back(s[i]);
        }
        if(st[st.size()-1] == int(32)) st.pop_back();
        return st;
    }
};