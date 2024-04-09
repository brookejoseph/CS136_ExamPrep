/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* numSmallerByFrequency(char** queries, int queriesSize, char** words, int wordsSize, int* returnSize) {
    int acc = 0; 
    int max = 10;
    int k = 0;
    int *arr = malloc(sizeof(int) * max);
    for(int i = 0; i < queriesSize; i++){
        int len = strlen(queries[i]);
        for(int l = 0; l < wordsSize; l++){
            if(len > strlen(words[i])){
                acc++;
            }
        }
        if(k >= max){
            max = max * 2;
        }
        arr[k] = acc;
        acc = 0;
        k++;
    }
    if(k != max){
        arr = realloc(arr, sizeof(int) * k);
    }
    return arr;
}
