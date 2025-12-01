class Solution {
public:
    int fillCups(vector<int>& amount) {
        int cnt = 0;
        if(amount[0] == 0 && amount[1] == 0 && amount[2] == 0) return 0;
        while(1){
            sort(amount.rbegin(),amount.rend());
            int a = amount[0]-1;
            int b = amount[1]-1;
            if(a >= 0){
                amount[0]--;
            }
            if( b >= 0){
                amount[1]--;
            }
            cnt++;
            if(amount[0] == 0 && amount[1] == 0 && amount[2] == 0){
                return cnt;
            }
        }
        return cnt;
    }
};