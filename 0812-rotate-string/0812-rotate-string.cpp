class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()) return false;
        s+=s;
        int j=0;
        for(int i=0;i<s.size();i++){
            if(  s[i] == goal[0]   ){
                    int k=i+1;
                    j=1;
                while(  j<goal.size()  ){
                    if(s[k] != goal[j] )break;
                    j++;
                    k++;
                }
                if(j == goal.size() ) return true; 
            }
        }
        return false;
    }
};