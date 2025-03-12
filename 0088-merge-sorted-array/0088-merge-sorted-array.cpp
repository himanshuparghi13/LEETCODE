class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>v(m+n);
        int left =0;
        int right =0;
        int index =0;

        while(left<m&& right <n){
            if(nums1[left] <=nums2[right]){
                v[index] = nums1[left];
                left++;
                index++;
            }
            else{
                v[index] = nums2[right];
                right++;
                index++;
            }
        }

        while(left < m){
            v[index] = nums1[left];
                left++;
                index++;
        }

        while(right < n){
             v[index] = nums2[right];
                right++;
                index++;
        }
        nums1 =v;
    }
};