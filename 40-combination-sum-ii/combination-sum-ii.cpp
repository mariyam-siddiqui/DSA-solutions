class Solution {
public:
    vector<vector<int>> ans;
    vector<int> v;
    
    void f(int index, vector<int>& candidates, int target)
    {
        if(target < 0)
        {
            return;
        }
        if(target == 0)
        {
            // this subset totals to target
            ans.push_back(v);
            return;
        }
        // // number taken into considertion
        // v.push_back(candidates[index]);
        // f(index+1, candidates, target - candidates[index]);

        // v.pop_back();
        // // number not taken into consideration
        // f(index+1, candidates, target);
        for(int i=index; i<candidates.size(); i++)
        {
            // same element is repeated do not go through this loop
            if( i>index && candidates[i] == candidates[i-1])
            {
                continue;
            }
            if(candidates[i] > target)
            {
                // why continue further
                break;
            }
            v.push_back(candidates[i]);
            f(i+1, candidates, target - candidates[i]);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        f(0, candidates, target);

        return ans;
    }
};