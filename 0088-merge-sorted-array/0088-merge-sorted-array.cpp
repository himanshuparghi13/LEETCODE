class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) {
        if(m == 0) {a= b;return;}
        else if( n ==0) return;
        int left = m-1;
        int right = 0;
        
        while (left>=0 && right < n && a[left] > b[right] ) {
            swap(a[left], b[right]);
            left--;
            right++;
        }
        int j=0;
        for(int i = m;i<a.size();i++){
            a[i] = b[j];
            j++;
        }
        sort(a.begin(),a.end());
    }
};