class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxLen =0;
            int cntZero = 0;
            int i =0;
        for(int right=0;right<nums.size();right = right+1){
            if(nums[right] == 0) cntZero++;
            while(cntZero > k  ){
                if(nums[i] == 0) cntZero--; 
                    i++;
            }
            if(cntZero <= k){
                maxLen = max( maxLen, right - i +1);
            }
        }
        return maxLen;
    }
}; 