#define endl "\n";
class Solution {
public:
    int upperBound(const vector<int>& arr, int x) {
    int left = 0, right = arr.size();
    
    while (left < right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] > x) {
            right = mid;  
        } else {
            left = mid + 1;
        }
    }
    return left; 
    } 

    int lowerBound(const vector<int>& arr, int x) {
    int left = 0, right = arr.size();
    
    while (left < right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] >= x) {
            right = mid;  
        } else {
            left = mid + 1;  
        }
    }
    return left;  
}
public:
    int maximumCount(vector<int>& nums) {
        int x = upperBound(nums,0);
        int y = lowerBound(nums,0);
        return fmax(y,nums.size()-x);
    }
};