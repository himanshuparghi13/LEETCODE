class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long int count = 0;
        long long int mn = INT_MAX;
        long long int sum = 0;
        for(long long int i=0;i<matrix.size();i++){
            for(long long int j=0;j<matrix[i].size();j++){
                mn = fmin(mn,abs(matrix[i][j]));
                if(matrix[i][j] <= 0) count++;
                sum += abs(matrix[i][j]);
            }
        }
        return count % 2 == 0 ? sum : sum - ((mn)+(mn));
    }
};