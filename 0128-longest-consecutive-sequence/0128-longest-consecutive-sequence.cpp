class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // unordered_map<int,int>mp;
        if(nums.empty() ) return 0;
        sort(nums.begin(),nums.end());
        int cnt = 1;
        int mxCnt=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]-1 == nums[i-1] ){
                cnt++;
                mxCnt = max(cnt,mxCnt);
            }
            else if(nums[i] == nums[i-1]) continue;
            else{
                cnt = 1;
            }
        }
        return mxCnt;
    }
};