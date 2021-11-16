class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        unordered_set<char> row[9];
        unordered_set<char> col[9];
        unordered_set<char> grid[3][3];
        
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                
                char found = board[i][j];
                
                if(found != '.'){
                    if(row[i].count(found) || col[j].count(found) || grid[i/3][j/3].count(found))
                        return false;
                }
                col[j].insert(found);
                row[i].insert(found);
                grid[i/3][j/3].insert(found);
            }
        }
        return true;
    }
};