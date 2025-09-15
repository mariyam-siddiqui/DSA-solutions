class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        int n = s.length();
        string str = "";
        for(int i=0; i<n; i++)
        {
            char c = s[i];
            if(c==' ')
            {
                if(str!="") st.push(str);
                str = "";
            }
            else
            {
                str = str + c;
            }
        }
        if (str!="") st.push(str);
        string ans = "";
        while(st.size()!=1)
        {
            ans = ans + st.top() + " ";
            st.pop();
        }
        ans = ans + st.top();
        return ans;
    }
};