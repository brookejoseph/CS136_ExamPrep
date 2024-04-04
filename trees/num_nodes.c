int num_nodes(struct node *n){
    if(n == NULL){
        return 0;
    }
    else{
        1 + num(n->root);
    }
}

int num(struct btree *n){
    if(n == NULL){
        return 0;
    }
    else{
        int left_sum = num(n->left);
        int right_sum = num(n->right);
        return left_sum + right_sum;
    }
}
