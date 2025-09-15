class Solution {
public:
    int check(vector<int>& bloomDay, int k, int m, int day)
    {
        int totalBqts = 0;
        int c = 0;
        
        for(int i=0; i < bloomDay.size(); i++)
        {
            if(bloomDay[i]<=day)
            {
                c++;
            }
            else
            {
                totalBqts = totalBqts + (c/k);
                c = 0;
            }
        }
                totalBqts = totalBqts + (c/k);

        if (totalBqts >= m)
                {
                    return 1;
                }
        return 0;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        // n > 3;
        int low = INT_MAX;
        long long val = m*1ll*k*1ll;
        if(n < val ) return -1;

        int high = INT_MIN;
        //To store the highest bloomDay
        for(int i=0; i<n; i++)
        {
            low = min(low, bloomDay[i]);
            high = max(high, bloomDay[i]);
        }

        while(low<=high)
        {
            int mid = (low+high) / 2 ;
            int ans = check(bloomDay, k, m, mid);
            if(ans == 1)
            {
                //eliminate the right half
                high = mid-1;
            }
            else
            {
                //eliminate the left half
                low = mid + 1;
            }
        }
        return low;
    }
};