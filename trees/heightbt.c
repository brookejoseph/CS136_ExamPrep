struct btree{
    int data;
    struct btree *left;
    struct btree *right;
}
struct node{
    struct btree *root;
}

int height(struct btree *tree) {
    if (tree == NULL) {
        return 0; 
    } 
    else {
        int left_height = height(tree->left);
        int right_height = height(tree->right);

    if (left_height > right_height) {
        return left_height + 1;
    } 
    else {
        return right_height + 1;
    }
    }
}

int node_height(struct node *n) {
    if (n == NULL || n->root == NULL) {
        return 0; 
    } 
    else {
        return height(n->root);
    }
}
