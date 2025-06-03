class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l=1,r=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i] == nums[i-1]){
                continue;
            }
            else{
                nums[l] = nums[i];
                l++;
            }
        }
        return l;
    }
};