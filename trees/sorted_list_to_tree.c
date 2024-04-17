
//turning sorted array into bst
//[4, 7, 1, 2, 6, 9] -> [1, 2, 4, 6, 7, 9]
//[4, 7, 1, 2, 6, 9] -> [1, 2, 6, 7, 9]

struct bst{
    struct btnode *root;
};

struct btnode{
    int val;
    struct btnode *left;
    struct btnode *right;
};

struct TNode* sortedArrayToBST(int arr[], int start, int end){
    if (start > end)
        return NULL;

    int mid = (start + end) / 2;
    struct TNode* root = newNode(arr[mid]);
 
    root->left = sortedArrayToBST(arr, start, mid - 1);
    root->right = sortedArrayToBST(arr, mid + 1, end);
 
    return root;
}
 
struct TNode* newNode(int data){
    struct TNode* node = (struct TNode*)malloc(sizeof(struct TNode));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}
