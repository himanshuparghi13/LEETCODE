class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int p =0;
        for(int i=low; i<=high;i++){
            int x = floor(log10(i))+1;
            if(x%2 == 1) continue;
            else{
                int cnt1 =0;
                int cnt2 =0;
                string y = to_string(i);
                for(int j=0;j<x/2;j++){
                    cnt1+= int(y[j]);
                }
                for(int j=y.size()-1;j>=x/2;j--){
                    cnt2+=int(y[j]);
                }
                if(cnt1 == cnt2) p++;
            } 
        }
        return p;
    }
};