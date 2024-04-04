//find second largest value in array 
int second_largest(int *arr, int arr_len) {
    int max = INT_MIN;
    int second_max = INT_MIN; 

    for (int i = 0; i < arr_len; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    for (int i = 0; i < arr_len; i++) {
        if (arr[i] != max && arr[i] > second_max) {
            second_max = arr[i];
        }
    }

    return second_max;
}
