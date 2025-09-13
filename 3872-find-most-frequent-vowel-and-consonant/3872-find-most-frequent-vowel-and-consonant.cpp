class Solution {
public:
    int maxFreqSum(string s) {
        vector<int> v(26);
        for (int i = 0; i < s.size(); i++) {
            v[s[i] - 'a']++;
        }
        int i = 0;
        int mx = v[0];
        int mxx = v[1];
        for (; i < v.size();){
            if (i == 0 || i == 4 || i == 8 || i == 14 || i == 20) {
                if (v[i] > mx)
                    mx = v[i];
            } else {
                if (v[i] > mxx)
                    mxx = v[i];
            }
            i++;
        }
        return mx + mxx;
    }
};