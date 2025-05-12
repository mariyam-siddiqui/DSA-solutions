class Solution {
public:
    void mergeSort(vector<int>& nums, int l, int h)
    {
        if(l>=h)
        {
            return;
        }
        if(l<h)
        {
            int m = (l+h) /2;
            mergeSort(nums, l, m);
            mergeSort(nums, m+1, h);
            merge(nums, l, m, h);
        }
    };
    void merge(vector<int>& nums, int l, int m, int h)
    {
        //left array l to m
        int left = l;
        //right array m+1 to h
        int right = m+1;
        vector<int> temp;

        //gets the smaller element 
        while(left<= m && right<=h)
        {
            if(nums[left] >= nums[right])
            {
                temp.push_back(nums[right]);
                right++;
            }
            else if (nums[left] < nums[right])
            {
                temp.push_back(nums[left]);
                left++;
            }
        }
        //for the rest of the array
        while (left <= m)
        {
            temp.push_back(nums[left]);
            left++;
        }
        while(right <= h)
        {
            temp.push_back(nums[right]);
            right++;
        }

        //copy the temp array to actual array
        for(int i=l; i<=h; i++)
        {
            nums[i] = temp[i-l];
        }
    };
    
    vector<int> sortArray(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;
        mergeSort(nums, low,high);
        return nums;
    }
};