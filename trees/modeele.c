int* findMode(struct TreeNode* root, int* returnSize) {
    int *arr = makearr(root, returnSize);
    return mode(arr, *returnSize);
}

int *makearr(struct TreeNode *root){
    int len = 1;
    int *arr = malloc(sizeof(int) * len);
    int index = 0; 
    arr[index] = root->val;
    index++;
    findMode(root->left);
    findMode(root->right);
    return arr;
}

int mode(int *arr, int arr_len) {
    int most = 0;
    int most_acc = 0;
    for(int i = 0; i < arr_len; i++){
        int acc = 0;
        for(int k = 0; k < arr_len; k++){
            if(arr[i] == arr[k]){
                acc++;
            }
        }
        if(acc > most_acc){
            most = arr[i];
            most_acc = acc;
        }
    }
    return most;
}
