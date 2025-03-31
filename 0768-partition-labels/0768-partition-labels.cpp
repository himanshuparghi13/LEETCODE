class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> pr;
        vector<int> v(26);
        for (int i = 0; i < s.size(); i++)
            v[s[i] - 'a'] = i;
        int ch = 0, i = 0;
        vector<bool> mp(26, false);
        for (int j = 0; j < s.size(); j++) {
            if (!mp[s[j] - 'a']) {
                mp[s[j] - 'a'] = true;
                ch++;
            }
            if (j == v[s[j] - 'a']) {
                ch--;
            }
            if (ch == 0) {
                pr.push_back(j - i + 1);
                i = j + 1;
            }
        }
        return pr;
    }
};