bool isInterleave(char* s1, char* s2, char* s3) {
    int len3 = strlen(s3);
    int len2 = strlen(s2);
    int len1 = strlen(s1);
    int acc = 0;
    for(int i = 0; i < len3; i++){
        for(int k = 0; k < len2; k++){
            if(s1[k] == s3[i]){
                acc++;
                s1[k] = '*';
                s3[i] = '*';
            }
        }
        for(int k = 0; k < len1; k++){
            if(s1[k] == s3[i]){
                acc++;
                s1[k] = '*';
                s3[i] = '*';
            }
        }
    }
    if(acc == len3){
        return true;
    }
    return false;
}
