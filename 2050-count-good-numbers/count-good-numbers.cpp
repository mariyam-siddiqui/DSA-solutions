class Solution {
public:
    int M = 1e9+7;

    long long power(long long x, long long n)
    {
        if(n==0) return 1;
        long long half = power(x, n/2);

        if(n%2==0) return half * half % M;
        return half * half * x % M;
    }

    int countGoodNumbers(long long n) {

        long long even = (n+1)/2;
        long long odd = n/2;

        long long even_count = power(5, even);
        long long odd_count = power(4, odd);

        return even_count * odd_count % M;
    }
};