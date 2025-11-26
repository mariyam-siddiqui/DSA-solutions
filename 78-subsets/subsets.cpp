class Solution {
public:
    vector<vector<int>> ans;
    vector<int> v;

    void generate(vector<int> &nums, int i)
    {
        if(i >= nums.size() )
        {
            ans.push_back(v);
            return;
        }

        v.push_back(nums[i]);
        generate(nums, i+1);

        v.pop_back();
        generate(nums,i+1);
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        generate(nums, 0);
        return ans;
    }
};