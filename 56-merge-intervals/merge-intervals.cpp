class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> v;
        stack<vector<int>> s;
        int n = intervals.size();
        s.push(intervals[0]);
        for(int i=1; i<n; i++)
        {
            if(!s.empty())
            {
                vector<int> top = s.top();
                if(top[1] >= intervals[i][0])
                {
                    s.pop();
                    int mx = max(top[1], intervals[i][1]);
                    s.push({top[0],mx});
                }
                else
                {
                    s.push(intervals[i]);
                }
            }
            
        }
        while(!s.empty())
        {
            v.push_back(s.top());
            s.pop();
        }
        reverse(v.begin(), v.end());
        return v;
    }
};