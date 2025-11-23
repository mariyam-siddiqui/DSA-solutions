class Solution {
public:
    int getNum( string s, int i, long long result, int sign)
    {
        if(i >= s.size() || !isdigit(s[i]) )
        {
            return sign * result;
        }
    
        result = result * 10 + (s[i] - '0');

        // check if number is greater than INTMAX || less than INTMIN
        if (sign * result >= INT_MAX) return INT_MAX;
        if (sign * result <= INT_MIN) return INT_MIN;

        return getNum(s, i+1, result, sign);
    }
    int myAtoi(string s) {
        long long ans = 0L;

        int i=0, sign = 1;

        //check for trailing whitespaces
        while(i<s.size() && s[i] == ' ')
        {
            i++;
        }

        //check for sign
        if(s[i] == '-' || s[i] == '+')
        {
            sign = (s[i] == '-') ? -1 : 1 ;
            i++;
        }

        //check for trailing zeroes after sign
        while(i<s.size() && s[i] == '0')
        {
            i++;
        }

        return getNum(s, i, ans, sign);
    }
};