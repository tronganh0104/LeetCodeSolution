class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_map<char, int>> col (9);
        vector<unordered_map<char, int>> row (9);
        vector<unordered_map<char, int>> box (9);
        for (int i = 0; i < 9; i += 1) {
            for (int j = 0; j < 9; j += 1) {
                char c = board[i][j];
                if (c == '.') continue;

                if (col[j][c] == 1) {
                    return false;
                } 
                if (row[i][c] == 1) {
                    return false;
                } 
                int box_index = (i / 3) * 3 + (j / 3);
                if (box[box_index][c] == 1) {
                    return false;
                }
                col[j][c] += 1;
                row[i][c] += 1;
                box[box_index][c] += 1;
            }
        }
        return true;
    }
};