 struct TreeNode {
     int val;
    struct TreeNode *left;
     struct TreeNode *right;
 };
struct TreeNode* invertTree(struct TreeNode* root) {
    if (root == NULL) {
        return NULL;
    }

    struct TreeNode *newRoot = malloc(sizeof(struct TreeNode));
    newRoot->val = root->val;
    newRoot->left = invertTree(root->right);
    newRoot->right = invertTree(root->left);

    return newRoot;
}
