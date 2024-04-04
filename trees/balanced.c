#include <stdbool.h>
#include <stdlib.h>
int sum(struct btree *tree){
    if(n = NULL){
        return 0;
    }
    else{
        int left = sum(tree->left);
        int right = sum(tree->right);
        return 1 + left + right;
    }
}


bool balanced(struct btree *tree) {
    if (tree == NULL) {
        return true;
    } else {
        int left_height = sum(tree->left);
        int right_height = sum(tree->right);
        if (abs(left_height - right_height) <= 1 && balanced(tree->left) && balanced(tree->right)) {
            return true;
        } else {
            return false;
        }
    }
}

bool balanced_node(struct node *n) {
    if (n == NULL) {
        return true;
    } else {
        return balanced(n->root);
    }
}
