char *mirror(const char *str){
    int len = strlen(str);
    char *newstr = malloc((2 * len + 1)* sizeof(int));
    strcpy(newstr, str);
    for(int i = 0; i < len; i++){
        newstr[len + i] = str[len - i - 1];
    }
    newstr[2 * len] = '\0';
    return newstr;
}
