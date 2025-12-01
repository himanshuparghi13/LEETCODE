class Solution {
public:
    long long maxRunTime(int n, vector<int>& batteries) {
        long sumP = 0;
        for( int power : batteries){
            sumP += power;
        }
        long l = 1;
        long r = sumP/n;

        while(l < r){
            long target = r - (r-l)/2;
            long ex = 0;

            for(int p:batteries){
                ex += fmin(p,target);
            } 
            if(ex >= 1ll*(n*target)){
                l = target;
            }
            else{
                r = target -1;
            }
        }
        return l;
    }
};