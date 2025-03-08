#include<bits/stdc++.h>
class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int cnt =0,mn;
        for(int i=0;i<k;i++){
            if(blocks[i] == 'W')  cnt++;
        }
        mn = cnt;

        for(int i=k;i<blocks.size();i++){
            if(blocks[i-k] == 'W') cnt--;
            if(blocks[i] == 'W' ) cnt++;
            cout<<cnt<<" "<<endl;
            mn = min(cnt,mn);
        }
        return mn;
    }
};