class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=0;
        int p =0;
        int el;
        for(int i =0;i<nums.size();i++){
            if(cnt ==0) el = nums[i];
            cnt +=( nums[i]==el? 1:-1);
        }
        return el;
    }
};