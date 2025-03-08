class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1 = 0, cnt2 = 0;
        int el1 = 0, el2 = 0;

        for (int num : nums) {
            if (num == el1) {
                cnt1++;
            } else if (num == el2) {
                cnt2++;
            } else if (cnt1 == 0) {
                el1 = num;
                cnt1 = 1;
            } else if (cnt2 == 0) {
                el2 = num;
                cnt2 = 1;
            } else {
                cnt1--;
                cnt2--;
            }
        }
        int cn1 = 0, cn2 = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == el1)
                cn1++;
            else if (nums[i] == el2)
                cn2++;
        }

        return (cn1 > nums.size() / 3 && cn2 > nums.size() / 3) ? vector<int>{el1, el2}
               : (cn1 > nums.size() / 3)              ? vector<int>{el1}
               : (cn2 > nums.size() / 3)              ? vector<int>{el2}
                                            : vector<int>{};
    }
};