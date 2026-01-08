class Solution {
public:
    string cur = "";
    bool dfs(int i, int j, int k, vector<vector<char>>& board, string word)
    {
        if(k==word.size())
        {
            return true;
        }
        if(i<0 || j<0 || i>=board.size() || j>=board[0].size())
        {
            return false;
        }

        if(board[i][j] != word[k])
        {
            return false;
        }
        char temp = board[i][j];
        board[i][j] = '#';

        bool found = dfs(i+1, j, k+1, board, word) || 
        dfs(i, j+1, k+1, board, word) || 
        dfs(i-1, j, k+1, board, word) ||
        dfs(i, j-1, k+1, board, word);
        board[i][j] = temp;
        return found;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int r = board.size();
        int c = board[0].size();
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                if (dfs(i, j, 0, board, word))
                {
                    return true;
                }
            }
        }
        return false;
        
    }
};