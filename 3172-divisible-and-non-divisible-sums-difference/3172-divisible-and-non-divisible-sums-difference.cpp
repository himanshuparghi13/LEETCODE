class Solution {
public:
    int differenceOfSums(int n, int m) {
        int num1 =0;
        int num2 =0;

        num1 = n*(n+1) /2;
        num2 = m*(((n/m)*((n/m)+1 ))/2);

        return num1-2*num2;
    }
};