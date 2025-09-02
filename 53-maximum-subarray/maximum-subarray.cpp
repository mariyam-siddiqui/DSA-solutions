class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int s = 0, maxs = INT_MIN;
        for(int i=0; i<n; i++)
        {
            s = s + nums[i];
            maxs = max(maxs, s);
            if(s<0 && n > 1)
            {
                s = 0;
            }
           
        }
        return maxs;
    }
};