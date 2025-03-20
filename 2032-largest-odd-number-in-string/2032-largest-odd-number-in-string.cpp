class Solution {
public:
    string largestOddNumber(string num) {
        int c = 0;
        string st="";
        for(int i=num.size()-1;i>=0;i--){
            if(int(num[i]) %2 != 0) {c = i+1; break;}
            num.pop_back();
        }
        return num;
    }
};