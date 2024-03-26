char** letterCombinations(char* digits, int* returnSize) {
    int n = 1;
    char *letters = malloc(n * sizeof(int))
    int acc = 0;
    while(n > 10){
        if((n % 10) == 1){
            acc++;
            continue;
        }
        if(((n % 10) > 1) && ((n % 10) < 7)){
            for(int i = 3 * (n % 10); i > 0; i--){
                letters[acc] = 'a' + i;
                acc++
            }
        }
        if((n % 10) == 7){
            
        }
        n /= 10;
    }
}
