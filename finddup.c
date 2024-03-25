int* findDuplicates(int* nums, int numsSize, int* returnSize) {
    int *array = malloc(numsSize * sizeof(int));
    int acc = 0;
    for(int i = 0; i < numsSize; i++){
        if(nums[i] == nums[i + 1]){
            array[acc] == nums;
            acc++;
        }
        else{
            continue;
        }
    }
    if(acc != nums){
        realloc(array, acc * sizeof(int));
    }
    *returnSize = acc;
    return array;
}
