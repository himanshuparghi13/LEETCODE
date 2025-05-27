class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>px(nums.size());
        vector<int>sx(nums.size());
        px[0] = nums[0];
        sx[nums.size()-1] = nums[nums.size()-1];
        for(int i=1;i<nums.size()-1;i++){
            px[i] = px[i-1]* nums[i];
            sx[nums.size()-i-1] = sx[nums.size()-i]*nums[nums.size()-i-1]; 
        }
        px[nums.size()-1] = px[nums.size()-2]*nums[nums.size()-1];
        sx[0] = sx[1]*nums[1];
        vector<int>v(nums.size());
        v[0]= sx[1];
        v[nums.size()-1] = px[nums.size()-2];
        for(int i=1;i<nums.size()-1;i++){
            v[i] = px[i-1]*sx[i+1];
        }
        return v;
    }
};