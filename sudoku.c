bool isValidSudoku(char** board, int boardSize, int* boardColSize) {
    int **arr[*boardColSize] = {0}
    int acc = 0;
    int true_tracker = 0;
    for(int i = 0; i < boardSize; i++){
        for(int k = *board[i]; k < *boardColSize; k++){
            if((**board[k] < 10) && (**board[k] > 0)){
                if(*board[k] != "."){
                    *arr[acc] = **board[k];
                    acc++;
                }
                acc++;
            }
        }
    }
    for(int i = 0; i < boardSize; i++){
        if(*arr[i] != *arr[i + 1]){
            true_tracker = 1;
        }
        else{
            continue;
        }
    }
}
