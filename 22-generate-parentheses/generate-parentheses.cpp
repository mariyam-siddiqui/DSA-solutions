class Solution {
public:
    vector<string> ans;
    void generate(string s, int n, int o, int c)
    {
        if(s.length() == n*2)
        {
            ans.push_back(s);
            return;
        }
        if(o < n) 
        {
            generate(s+"(", n, o+1, c);
        }
        if(c < o) 
        {
            generate(s+")", n, o, c+1);
        }
    }
    vector<string> generateParenthesis(int n) {
        // vector<string> ans;
        generate("", n, 0, 0);
        return ans;
    }
};