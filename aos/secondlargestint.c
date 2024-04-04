//find second largest value in array 
int second_largest(int *arr, int arr_len){
    int max = INT_MIN;
    int second_max = INT_MIN; 
    for(int i = 0; i < arr_len; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    int temp[arr_len - 2] = {0};
    int acc = 0;
    for(int i = 0; i < arr_len; i++){
        if(arr[i] == max){
            continue;
        }
        else{
            temp[acc] = arr[i];
            acc++;
        }
    }
    for(int i = 0; i < arr_len - 1; i++){
       if(arr[i] > max){
            second_max = arr[i];
        } 
    }
    return second_max;
}
