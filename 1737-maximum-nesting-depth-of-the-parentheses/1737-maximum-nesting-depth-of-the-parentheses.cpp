class Solution {
public:
    int maxDepth(string nums) {
        int mx = INT_MIN;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == '(') cnt++;
            else if(nums[i] == ')') cnt--;
            mx  = max(mx,cnt);
        }
        return mx;
    }
};