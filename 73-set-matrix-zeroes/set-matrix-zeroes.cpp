class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<pair<int,int>> zero;
        for(int i=0; i< rows; i++)
        {
            for(int j=0; j<cols; j++)
            {
                if(matrix[i][j]==0)
                {
                    zero.push_back({i,j});
                }
            }
        }
        for(int k=0; k<zero.size(); k++)
        {
            int r = zero[k].first;
            int c = zero[k].second;
            for(int j=0; j<cols; j++)
            {
                matrix[r][j] = 0;
            }
            for(int i =0; i<rows; i++)
            {
                matrix[i][c] = 0;
            }
        }
        return;
    }
};