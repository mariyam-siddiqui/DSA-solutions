class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        if (n==1) return nums[0];
        int prefixProd = 1;
        int suffixProd = 1;
        int maxprod = INT_MIN;
        for(int i=0; i<n; i++)
        {
            if(prefixProd == 0) prefixProd = 1;
            if(suffixProd == 0) suffixProd = 1;
            prefixProd = prefixProd * nums[i];
            suffixProd = suffixProd * nums[n-1-i];
            maxprod = max(max(prefixProd, suffixProd), maxprod);
        }
        return maxprod;
    }
};