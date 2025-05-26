class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            int x = target-nums[i];
            if(mp.find(x)!=mp.end()) {
                return { mp[target-nums[i]],i};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};