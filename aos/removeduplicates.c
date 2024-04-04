void removedup(char **aos, int size){
    char **mine = malloc(sizeof(char *) * size + 1);
    int acc = 0;
    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){
            if(strcmp(aos[i], aos[j]) != 0){
                strcpy(aos[i], mine[acc]);
                acc++;
            }
            else{
                continue;
            }
        }
    }
    for(int i = 0; i < size; i++){
        free(mine[i]);
    }
    mine[size] = NULL;
    free(mine)
}
