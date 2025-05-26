class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> vs(strs.begin(), strs.end());
        map<string, vector<string>> mp;
        for (int i = 0; i < strs.size(); i++) {
            sort(strs[i].begin(), strs[i].end());
            mp[strs[i]].push_back(vs[i]);
        }

        vector<vector<string>> st;

        for (auto i : mp) {
            st.push_back(i.second);
        }

        return st;
    }
};