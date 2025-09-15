class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int low = 0;
        int high = arr.size() - 1;

        while(low<=high)
        {
            int mid = (low+high) / 2;

            int miss = arr[mid] - (mid+1);
            if(miss < k)
            {
                low = mid + 1;
            }
            else
            {
                high = mid-1;
            }
        }
        // we have the range now.
        // to find missing number. 
        // arr[high] + more
        // arr[high] + (k - missing at high)
        // arr[high] + (k - (arr[high] - (high + 1))
        // arr[high] + k - arr[high] + (high+1)
        // k + high + 1;
        // this can also be written as k + low; 
        return low + k;
    }
};