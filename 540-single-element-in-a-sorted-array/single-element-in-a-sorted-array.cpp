class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int low = 0, high = n-1;
        if(n==1) return nums[0];
        if(nums[low] != nums[low+1])
        {
            return nums[low];
        }
        if(nums[high] != nums[high-1])
        {
            return nums[high];
        }
        while(low<=high)
        {
            int mid = (low+high)/2;
            
            if(nums[mid] != nums[mid+1] && nums[mid] != nums[mid-1])
            {
                return nums[mid];
            }
            else
            {
                if( (mid%2==0 && nums[mid+1]==nums[mid]) || (mid%2 == 1 && nums[mid-1] == nums[mid]) )
                { 
                    // current even && next odd == even
                    // current odd && prev even == odd
                    // left half
                    low = mid + 1;
                } 
                else if( (mid%2==1 && nums[mid+1] == nums[mid]) || (mid%2==0 && nums[mid] == nums[mid-1]) )
                {
                    // current odd & equal to next even
                    // current even & equal to prev odd
                    // right half
                    high = mid - 1;
                }
            }
        }
        return -1;
    }
};