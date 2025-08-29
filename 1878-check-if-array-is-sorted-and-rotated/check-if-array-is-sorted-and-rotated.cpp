class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        if(n==0 || n==1)
        {
            return true;
        }
        int k = 0; //this is to keep track of rotation
        for (int i=0; i<n-1; i++)
        {
            if(nums[i+1]<nums[i])
            {
                k++;
            }
        }
        if(nums[n-1] > nums[0])
        {
            k++;
        }
        if(k>1) return false;
        else return true;
    }
};