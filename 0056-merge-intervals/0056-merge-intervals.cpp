class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        sort(arr.begin(),arr.end());
        int j = 0;
        for(int i=1; i < arr.size() ; i++ ){
            if(arr[j][1] >= arr[i][0]){
                arr[j][1] = max(arr[j][1],arr[i][1]);
            }
            else{
                j++;
                arr[j][0] = arr[i][0];
                arr[j][1] = arr[i][1];
            }
        }
        arr.resize(j+1);
        return arr;
    }
};