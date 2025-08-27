class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& d) {
        float srt = 0;
        float mx = 0;
        int ans = 0;
        float ar = 0;
        for(float i=0;i<d.size();i++){
           srt = sqrt(d[i][0]*d[i][0] + d[i][1]*d[i][1]);
           if(mx < srt ) ans = d[i][0]*d[i][1]; 
           else if(mx == srt) {
            ar = fmax(ar,d[i][0]*d[i][1]);
            ans = ar;
           }
           mx = fmax(mx,srt);
        }
        return ans;
    }
};