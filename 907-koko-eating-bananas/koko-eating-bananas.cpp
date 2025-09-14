class Solution {
public:
    long long TotalTimeTaken(vector<int>& piles, int k)
    {
        long long total_time_taken = 0;
        for(int i=0; i<piles.size(); i++)
        {
            total_time_taken = total_time_taken + ceil(double(piles[i])/double(k));
        }
        return total_time_taken;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        // Max Element  
        int maxi = INT_MIN;
            //find the maximum:
        for (int i = 0; i < piles.size(); i++) {
            maxi = max(maxi, piles[i]);
        }

        int low = 1, high = maxi;
        while(low <= high)
        {
            int mid = (low+high) / 2;
            long long total_time_taken = TotalTimeTaken(piles, mid);
            if( total_time_taken <= h )
            {
                high = mid - 1;

            }
            else
            {
                low = mid + 1;

            }
        }
        return low;
    }
};