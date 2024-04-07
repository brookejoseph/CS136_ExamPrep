char* largestMerge(char* word1, char* word2) {
    int len = 1;
    int accword1 = 0;
    int accword2 = 0;
    int accmerg = 0;
    char* merge = malloc(sizeof(char) * len);
    if((word1 != NULL) && (word2 != NULL)){
        if(word1[accword1] > word2[accword2]){
            merge[accmerg] = word1[accword1];
            accmerg++;
            accword1++;
        }
        else if(word1[accword1] <= word2[accword2]){
            merge[accmerg] = word2[accword2];
            accmerg++;
            accword2++;
        }
    }
    return merge;
}
