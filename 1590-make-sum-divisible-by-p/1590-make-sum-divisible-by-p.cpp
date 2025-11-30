class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int sum =0;
        for(int &i:nums){
            sum =(sum + i) % p;
        }
        int target = sum % p;
        if(target == 0){
            return 0;
        }
        unordered_map<int,int>mp;
        int result = nums.size();
        int curr = 0;
        mp[0] = -1;

        for(int i=0;i<nums.size();i++){
            curr = (curr + nums[i] ) % p; 

            int search = (curr - target + p ) % p;
            if(mp.find(search) != mp.end()){
                result = min(result ,(i - mp[search])) ;
            }
            mp[curr] = i;
        }
        return result == nums.size() ? -1 : result;
    }
};