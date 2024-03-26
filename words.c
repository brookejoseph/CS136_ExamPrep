int minDistance(char* word1, char* word2) {
    int len1 = strlen(word1);
    int len2 = strlen(word2);
    int acc = 0;
    for(int i = 0; i < len1; i++){
        for(int l = 0; l < len2; l++){
            if(word1[i] == word2[l]){
                acc++;
            }
        }
    }
    int frequency[256] = {0};
    
    for (int i = 0; word1[i] != '\0'; i++) {
        frequency[(int)word1[i]]++;
    }
    for (int i = 0; word2[i] != '\0'; i++) {
        frequency[(int)word2[i]]++;
    }
    
    int duplicates = 0;
    
    for (int i = 0; i < 256; i++) {
        if (frequency[i] > 1) {
            duplicates++;
        }
    }
    return acc - duplicates;
}
