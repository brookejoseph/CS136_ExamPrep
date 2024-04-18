bool isMirror(struct TreeNode *leftSubtree, struct TreeNode *rightSubtree) {
    if (leftSubtree == NULL && rightSubtree == NULL) {
        return true;
    }
    if (leftSubtree == NULL || rightSubtree == NULL) {
        return false;
    }
    if (leftSubtree->val != rightSubtree->val) {
        return false;
    }
    return isMirror(leftSubtree->left, rightSubtree->right) && isMirror(leftSubtree->right, rightSubtree->left);
}

bool isSymmetric(struct TreeNode* root) {
    if (root == NULL) {
        return true;
    }
    return isMirror(root->left, root->right);
}
