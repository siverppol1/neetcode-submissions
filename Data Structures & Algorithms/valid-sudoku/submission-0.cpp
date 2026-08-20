class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            unordered_map<char, int> elements;
            for (int j = 0; j < 9; j++) {
                if (board[i][j]!='.') {
                    if (elements.count(board[i][j]) > 0) {
                        return false;
                    } else {
                        elements[board[i][j]] = 1;
                    }
                }
            }
        }
        for (int i=0;i<9;i++) {
            unordered_map<char, int> elements;
            for (int j=0;j<9;j++) {
                if (board[j][i]!='.') {
                    if (elements.count(board[j][i])>0) {
                        return false;
                    } else{
                        elements[board[j][i]] = 1;
                    }
                }
            }
        }
        for (int i = 0; i <= 8; i += 3) {
            for (int j = 0; j <= 8; j += 3) {
                unordered_map<char, int> elements;
                for (int K = 0; K <= 2; K++) {
                    for (int L = 0; L <= 2; L++) {
                        if (board[K + i][L + j] != '.') {
                            if (elements.count(board[K + i][L + j]) > 0) {
                                return false;
                            } else {
                                elements[board[K+i][L + j]] = 1;
                            }
                        }
                    }
                }
            }
        }return true;
    }
        
    
};
