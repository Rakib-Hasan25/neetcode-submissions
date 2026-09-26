class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        

        int row = board.size();
        int col = board[0].size();

        unordered_set<char>hash;
        //row 

        for(int i = 0; i<row; i++){
            for(int j = 0 ; j<col ; j++){
                if(board[i][j]=='.')continue; 
                if(hash.find(board[i][j])!=hash.end()){
                    return false;
                }
                else{
                    hash.insert(board[i][j]);
                }
                
            }
            hash.clear();
        }





        //col

        for(int i = 0; i<col; i++){
            for(int j = 0 ; j<row ; j++){
                if(board[j][i]=='.')continue; 
                if(hash.find(board[j][i])!=hash.end()){
                    return false;
                }
                else{
                    hash.insert(board[j][i]);
                }
                
            }
            hash.clear();
        }



        //subgroup
        for(int group = 0 ; group <9 ; group++) {
            for(int i = 0; i<3; i++){
                for(int j= 0 ; j<3; j++){
                    int k = (group / 3 )* 3 + i ; 
                    int l = (group % 3) * 3 + j ; 
                    if(board[k][l]=='.')continue; 
                    if(hash.find(board[k][l])!=hash.end()){
                        return false;
                    }
                    else{
                        hash.insert(board[k][l]);
                    }

                }
            }
            hash.clear();
        }

        return true ; 
   
    }
};



