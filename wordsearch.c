bool exist(char** board, int boardSize, int* boardColSize, char* word) {
    int acc = 0;
    for(int i = 0; i < boardSize; i++){
        for(int k = 0; k < *boardColSize; k++){
            if(board[i][k] == word[acc]){
                if(board[i + 1][k] != word[acc + 1]|| board[i + 1][k]!= word[acc + 1]|| board[i][k + 1]!= word[acc + 1]|| board[i][k - 1] != word[acc + 1]){
                    continue;
                }
                acc++;
            }
        }
    }
    if(acc == strlen(word)){
        return true;
    }
    return false;
}
