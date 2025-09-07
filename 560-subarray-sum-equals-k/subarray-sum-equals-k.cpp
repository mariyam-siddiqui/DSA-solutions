class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;
        int c=0;
        map <int,int> mp;
        mp[0] = 1;
        for(int i=0; i<n; i++)
        {
            sum = sum + nums[i];
            int rem = sum - k;
            if(mp.find(rem) != mp.end())
            {
                c = c + mp[rem];
            }
            mp[sum]++;
        }
        return c;
    }
};