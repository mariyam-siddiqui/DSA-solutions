class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        
        int low = 0; int high = n-1;
        while(low<=high)
        {
            int mid = (low+high) / 2;
            if(target == nums[mid])
            {
                return mid;
            }
            else if (nums[low] == nums[mid] && nums[mid]==nums[high] )
            {
                low = low+1;
                high = high - 1;
                continue;
            }
            else if(nums[low]<=nums[mid])
            {
                if(target >= nums[low] && target <= nums[mid]) // in left half
                {
                    high = mid - 1;
                }
                else
                {
                    low = mid+1;
                }  
            }
            else if(nums[high] >= nums[mid])
            {
                if(target >= nums[mid] && target <= nums[high] )
                {
                    low = mid+1;
                }
                else
                {
                    high = mid-1;
                }
            }
        }
        return -1;
    }
};