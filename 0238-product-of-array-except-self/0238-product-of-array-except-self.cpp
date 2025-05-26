class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>px(nums.size());
        px[0] = nums[0];
        for(int i=1;i<nums.size()-1;i++){
            px[i] = px[i-1]*nums[i];
        }
        vector<int>sx(nums.size());
        sx[nums.size()-1] = nums[nums.size()-1];
        for(int i=nums.size()-2;i>=0;i--){
            sx[i] = sx[i+1]*nums[i];
        }
        vector<int>vv(nums.size());
        vv[0] = sx[1];
        for(int i=1;i<nums.size()-1;i++){
            vv[i] = px[i-1]* sx[i+1];
        }
        vv[nums.size()-1] = px[nums.size()-2]; 
        return vv;
    }
};