//1 
bool containsNearbyDuplicate(int* nums, int numsSize, int k) {
    for(int i = 0; i < numsSize; i++){
        for(int j = 0; j < numsSize - 1; j++){
            if((nums[i] == nums[j]) && abs(i - j) <= k){
                return true;
            }
        }
    }
    return false;
}

//2
bool isIsomorphic(char* s, char* t) {
    assert(strlen(s) == strlen(t));
    int cap1 = 1;
    int cap2 = 1;
    int acc1 = 0;
    int acc2 = 0;
    int *arrays = malloc(cap1 * sizeof(int));
    int *arrayt = malloc(cap2 * sizeof(int));
    for(int i = 0; i < strlen(s); i++){
        for(int k = i + 1; k < strlen(s); k++){
            if(s[k] == s[i]){
                cap1 *= 2;
                arrays = realloc(arrays, cap1 * sizeof(int));
                arrays[acc1] = k;
                arrays[acc1++] = i;
            }
        }
    }
    for(int i = 0; i < strlen(s) / 2; i++){
        for(int k = i + 1; k < strlen(s); k++){
            if(t[k] == t[i]){
                cap2 *= 2;
                arrayt = realloc(arrayt, cap2 * sizeof(int));
                arrayt[acc2] = k;
                arrayt[acc2++] = i;
            }
        }
    }
    if(acc1 != acc2){
        free(arrays);
        free(arrayt);
        return false;
    }
    for(int i = 0; i < acc1; i++){
        if(arrays[i] != arrayt[i]){
            return false;
        }
    }
    free(arrays);
    free(arrayt);
    return true;
}

