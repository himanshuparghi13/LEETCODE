class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < board.size(); i++) {
            map<char, int> mp;
            for (int j = 0; j < board[i].size(); j++) {
                if (board[i][j] != '.') {
                    if (mp.find(board[i][j]) != mp.end())
                        return false;
                    mp[board[i][j]]++;
                }
            }
        }
        for (int i = 0; i < board.size(); i++) {
            map<char, int> mp;
            for (int j = 0; j < board[i].size(); j++) {
                if (board[j][i] != '.') {
                    if (mp.find(board[j][i]) != mp.end())
                        return false;
                    mp[board[j][i]]++;
                }
            }
        }

        for (int i = 0; i < board.size(); i = i + 3) {
            for (int j = 0; j < board[i].size(); j = j + 3) {
                map<char, int> mp;
                for (int k = 0; k < 3; k++) {
                    for (int l = 0; l < 3; l++) {
                        char c = board[k + i][j + l];
                        if (c != '.') {
                            if (mp.find(c) != mp.end())
                                return false;
                            mp[c]++;
                        }
                    }
                }
            }
        }
        return true;
    }
};