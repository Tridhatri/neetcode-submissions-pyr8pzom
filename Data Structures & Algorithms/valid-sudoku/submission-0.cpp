class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        std::map<pair<int, int>, unordered_set<char>> squares;
       for(int i = 0; i < board.size(); i++) {
        std::unordered_set<char> r_sett;
        std::unordered_set<char> c_sett;
            for(int j = 0; j < board.size(); j++){
                pair<int, int> squarekey = {i/3, j/3};
                if(board[i][j] != '.'){
                    if(r_sett.find(board[i][j]) != r_sett.end()){
                        return false;
                    }
                    else{
                        r_sett.insert(board[i][j]);
                    }
                if(squares[squarekey].count(board[i][j])){
                        return false;
                    }
                    else{
                        squares[squarekey].insert(board[i][j]);
                    }
                }

                if(board[j][i] != '.'){
                    if(c_sett.find(board[j][i]) != c_sett.end()){
                        return false;
                   }
                    else{
                        c_sett.insert(board[j][i]);
                    }
                }

            }
       } 
       return true;
    }
};
