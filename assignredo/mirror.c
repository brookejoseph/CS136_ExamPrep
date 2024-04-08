
char *mirror(const char *str){
    int len = strlen(str);
    int new_len = 2 * len;
    char *arr = malloc(sizeof(char) * (new_len + 1));
    for(int i = 0; i < len; i++){
        arr[i] = str[i];
    }
    for(int i = len - 1; i >= 0; i--){
        arr[new_len - i - 1] = str[i];
    }
    arr[new_len] = '\0';
    return arr;
}
