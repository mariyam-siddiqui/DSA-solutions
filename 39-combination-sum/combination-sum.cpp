class Solution {
public:
    vector<vector<int>> res;
    vector<int> v;

    void f(int ind, int target, vector<int> nums)
    {
        if(ind == nums.size())
        {
            if(target == 0)
            {
                res.push_back(v);
            }
            return; 
        }

        if(nums[ind]<=target)
        {
            v.push_back(nums[ind]);
            f(ind, target-nums[ind], nums);
            v.pop_back();
        }

        f(ind+1, target, nums);

    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        f(0, target, candidates);
        return res;
    }
};