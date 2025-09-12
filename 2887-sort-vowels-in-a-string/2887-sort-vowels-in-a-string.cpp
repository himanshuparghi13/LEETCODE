class Solution {
public:
    string sortVowels(string s) {
        string st = "";
        string sp = ""; 
        for(int i=0;i<s.size();i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] =='i' || s[i] == 'o' || s[i] == 'u') {
                st.push_back(s[i]);
            }
            else if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
                sp.push_back(s[i]);
            }
        }
        sort(sp.begin(),sp.end());
        sort(st.begin(),st.end());
        sp = sp+st;
        int k=0;

        for(int i=0;i<s.size();i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                s[i] = sp[k]; k++;
            }
            else if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I'|| s[i] == 'O' || s[i] == 'U'){
                s[i] = sp[k]; k++;
            }
        }
        return s;
    }
};