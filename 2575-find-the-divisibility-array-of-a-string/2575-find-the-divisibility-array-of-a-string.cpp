class Solution {
public:
    vector<int> divisibilityArray(string word, int m) {
        long long int prev = 0;
        vector<int>v;
        for(int i=0;i<word.size();i++){
            int digit = word[i]-'0';
            long long int ans = digit + prev*10;
            int curr = ans % m;
            if(curr == 0) {
                v.emplace_back(1);
            }
            else{
                v.emplace_back(0);
            }
            prev = curr;
        }
        return v;
    }
};