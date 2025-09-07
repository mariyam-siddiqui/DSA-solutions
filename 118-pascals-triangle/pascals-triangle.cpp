class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v;
        v.push_back({1});
        if(numRows == 1)
        {
            return v;
        }
        v.push_back({1,1});
        if(numRows == 2)
        {
            return v;
        }
        for(int i = 2; i< numRows; i++)
        {
            vector<int> r;
            r.push_back(1);
            int c = 1;
            while(c<i)
            {
                int ele = v[i-1][c-1] + v[i-1][c];
                r.push_back(ele);
                c++;
            }
            r.push_back(1);
            v.push_back(r);
        }
        return v;
    }
};