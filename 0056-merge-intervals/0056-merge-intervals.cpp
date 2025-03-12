class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& it) {
        sort(it.begin(),it.end());

        vector<vector<int>>v;
        v.emplace_back(it[0]);

        for(int i=1; i < it.size() ; i++ ){
            if(v.back()[1] >= it[i][0]){
                v.back()[1] = max(v.back()[1],it[i][1]);
            }
            else{
                v.emplace_back(it[i]);
            }
        }
        return v;
    }
};