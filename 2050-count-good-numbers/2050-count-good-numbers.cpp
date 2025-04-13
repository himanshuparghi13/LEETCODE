class Solution {
public:
    const long long mod = 1e9 + 7;
    long long pow(long long base, long long exp){
        long long res = 1;
        
        while(exp > 0){
            if(exp % 2 == 1) res = (res * base) % mod;
            base = (base*base)%mod;
            exp /= 2;
        }
        return res;
    }
    long long int countGoodNumbers(long long n) {
        if(n%2 == 0) 
            return (pow(5,n/2)*pow(4,n/2))%mod;
        return (pow(4,n/2)*pow(5,(n/2)+1))%mod;
    }
};