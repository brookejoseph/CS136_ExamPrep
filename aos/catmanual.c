char *cat(char *str1, char *str2){
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    char *temp = malloc(sizeof(char) * (len1 + len2 + 1));
    strcpy(temp, str1);
    for(int i = len1; i < len2 + len1; i++){
        temp[i] = str2[i - len1]; 
    }
    temp[len1 + len2] = NULL;
    return temp;
}
