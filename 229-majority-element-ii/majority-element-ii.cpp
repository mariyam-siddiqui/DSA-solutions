class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        
        int count1 = 0, count2 = 0;
        int element1 = 0, element2 = 0;
        
        // First Pass: Find potential candidates
        for (int it : nums) {
            if (it == element1) {
                count1++;
            } else if (it == element2) {
                count2++;
            } else if (count1 == 0) {
                element1 = it;
                count1 = 1;
            } else if (count2 == 0) {
                element2 = it;
                count2 = 1;
            } else {
                count1--;
                count2--;
            }
        }
        
        // Second Pass: Verify the counts of the candidates
        count1 = 0;
        count2 = 0;
        for (int it : nums) {
            if (it == element1) {
                count1++;
            }
            if (it == element2) {
                count2++;
            }
        }
        
        vector<int> ans;
        if (count1 > n / 3) {
            ans.push_back(element1);
        }
        if (count2 > n / 3 && element1 != element2) { // Add a check to avoid duplicates
            ans.push_back(element2);
        }
        
        return ans;
    }
};