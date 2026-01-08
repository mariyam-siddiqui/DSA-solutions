class Solution {
public:
    vector<vector<string>> ans;
    vector<string> v;
    bool isPal(string s)
    {
        string temp = s;
        reverse(s.begin(), s.end());
        return temp == s;
    }
    void f(string s, int ind)
    {
        if(ind>=s.size())
        {
            ans.push_back(v);
            return;
        }
        for(int i=ind; i<s.size(); i++)
        {
            // substr needs string and length
            // => length here would be i-index+1
            string temp = s.substr(ind, i-ind+1);
            if( isPal(temp) )
            {
                v.push_back(temp);
                f(s, i+1);
                v.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        f(s, 0);
        return ans;
    }
};