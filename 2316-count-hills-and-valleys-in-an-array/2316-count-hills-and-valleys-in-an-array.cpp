class Solution {
public:
    int countHillValley(vector<int>& nums) {
        vector<int>v;
        int cnt =0;
        v.emplace_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(nums[i] == nums[i-1]) {
                continue;
            }
            else{
                v.emplace_back(nums[i]);
            }
        }
        for(int i:v) cout<<i<<endl;
        
        for(int i=1;i<v.size()-1;i++){
            if(v[i] > v[i-1] && v[i] > v[i+1]) cnt++;
            else if(v[i] < v[i-1] && v[i] < v[i+1]) cnt++;
        }
        return cnt;
    }
};