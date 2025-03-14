class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mx = INT_MIN;
        int pr = 1;
        int sf = 1;

        for(int i=0;i<nums.size();i++){
            if(pr == 0) pr =1;
            if(sf == 0) sf =1;
            pr = pr * nums[i];
            sf = sf * nums[nums.size()-i-1];
            mx = max(mx , max(pr,sf));
        }
        return mx;
    }
};