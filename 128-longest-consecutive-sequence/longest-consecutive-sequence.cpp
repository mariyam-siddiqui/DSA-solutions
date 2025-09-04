class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        int n = nums.size();
        int longest = 1;

        if (n==0) return 0;
        set<int> s;

        for(int i =0; i<n; i++)
        {
            s.insert(nums[i]);
        }

        for(auto it : s)
        {
            // it is the starting element
            if(s.find(it-1) == s.end())
            {
                int c = 1;
                int ele = it;
                while(s.find(ele+1) != s.end())
                {
                    ele = ele + 1;
                    c++;
                }
                longest = max(longest, c);
            }
            
        }
        return longest;
    }
};