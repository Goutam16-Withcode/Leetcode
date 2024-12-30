class Solution {
public:
    bool isValid(vector<vector<char>>& board, int row, int col, char value) {
        for (int i = 0; i < 9; i++) {
            if (board[row][i] == value)
                return false;
            if (board[i][col] == value)
                return false;

// to check if already in current grid
//3 * (row / 3), 3 * (col / 3) gets us to first box of curr grid 
//i helps to traverse the grid 
// (0,0),(0,1)...(2,2) these added to first cell of curr grid make us traverse the entire grid
            if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == value)
                return false;
        }

        //if value [$$O(n)$$]()not in curr row or col or grid 
        return true;
    }
    bool canSolve(vector<vector<char>>& board){
         for(int row=0;row<9;row++){
            for(int col=0;col<9;col++){//traverse matrix

                if(board[row][col]=='.'){

                    for(char value='1';value<='9';value++){
                        if(isValid(board,row,col,value)){//a valid value found

                            board[row][col]= value;

                            if(!canSolve(board)) 
                                board[row][col]= '.';//backtrack ,remove value i.e to intial state
                            else return true; // if not return here after loop return false will be execetuted       
                        }
                    }//no value could solve
                    return false;
                }
            }
        }//if no . found means all filled
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
       canSolve(board);
    }
};