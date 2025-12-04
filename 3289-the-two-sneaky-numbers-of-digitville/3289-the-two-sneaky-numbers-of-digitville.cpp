class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int>v(nums.size());
        for(int i=0;i<nums.size();i++){
            v[nums[i]]++;
        }
        int x = 0,y =0;
        bool flag = 0;
        for(int i=0;i<v.size();i++){
            if(v[i] >=2 && flag == 0) {x = i; flag = 1;}
            if(v[i] >= 2 && flag == 1){
                y = i;
            }
        }
        return {x,y};
    }
};