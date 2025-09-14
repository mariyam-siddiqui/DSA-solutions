class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int maxi = nums[0];
        int ind = 0;
        for(int i=1; i<n; i++)
        {
            if(nums[i] > nums[i-1])
            {
                if(maxi < nums[i])
                {
                    maxi = nums[i];
                    ind = i;
                }
            }
        }
        return ind;
    }
};