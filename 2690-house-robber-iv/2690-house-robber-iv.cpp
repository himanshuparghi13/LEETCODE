class Solution {
public:

    bool check(vector<int>&nums,int mid ,int k){
        int cnt=0;
        for(int i=0;i<nums.size();){
            if(nums[i] <= mid){
                cnt++;
                i = i+2;
            }
            else i++;
            if(cnt>=k) return true;
        }
        return cnt>=k;
    }
    int minCapability(vector<int>& nums, int k) {
        int mx =INT_MIN;
        int mn =INT_MAX;

        for(int i=0;i<nums.size();i++){
            mx =max(mx,nums[i]);
            mn =min(mn,nums[i]);
        }

        int l = mn;
        int r =mx;
        int res = 0;

        while(l<=r){
            int mid = l + (r-l)/2;
            if(check(nums,mid,k)) {
                res = mid;
                r = mid -1;
            }
            else l = mid+1;
        }
        return res;
    }
};