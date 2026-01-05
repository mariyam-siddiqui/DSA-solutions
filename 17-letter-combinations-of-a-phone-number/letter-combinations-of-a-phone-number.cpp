class Solution {
public:
    vector<string> nums = {"","",
        "abc",
        "def",
        "ghi",
        "jkl",
        "mno",
        "pqrs",
        "tuv",
        "wxyz"
    };

    vector<string> ans;

    void letters(int index, string digits, string current)
    {
        if(current.size() == digits.size())
        {
            ans.push_back(current);
            return;
        }
        for(char c:nums[digits[index] - '0'])
        {
            letters(index+1, digits, current+c);
        }
        
    }
    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return ans;
        letters(0, digits, "");
        return ans;
    }
};