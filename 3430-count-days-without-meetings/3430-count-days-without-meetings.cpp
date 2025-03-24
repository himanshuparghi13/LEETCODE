class Solution {
public:
    int countDays(int days, vector<vector<int>>& ms) {
        sort(ms.begin(),ms.end());
        // vector<int>v = {  ms[ms.size()-1][1]  , days};
        // ms.push_back(v);
        int cnt = ms[0][0] - 1;
        int mx = max( ms[0][0] , ms[0][1]);
        for(int i=1;i<ms.size();i++){
            int c = ms[i][0] - mx;
            if(c > 0 ) cnt += c - 1 ;
            mx = max( mx , max( ms[i][0] , ms[i][1]));
        }
        cnt += days - mx;
        return cnt;
    }
};