class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        

        int row = board.size();
        int col = board[0].size();

        unordered_map<int, unordered_set<char>>row_hash,col_hash;
        map<pair<int,int>,unordered_set<char>>group_hash;

        for(int i = 0 ; i< row ; i++){

            for(int j = 0 ; j<col ; j++){
                if(board[i][j]=='.')continue ; 
                if(row_hash[i].find(board[i][j])!= row_hash[i].end()){
                    return false;
                }
                else if (col_hash[j].find(board[i][j])!= col_hash[j].end()){
                    return false ; 
                }
                else if (group_hash[{i/3,j/3}].find(board[i][j])!= group_hash[{i/3,j/3}].end()){
                    return false ; 
                }
                row_hash[i].insert(board[i][j]);
                col_hash[j].insert(board[i][j]);
                group_hash[{i/3,j/3}].insert(board[i][j]);

            }
        }

        return true; 

       
   
    }
};



