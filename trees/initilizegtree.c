struct node{
    struct gtree *root;
}
struct gtree{
    int data;
    struct gtree **children;
    int cap;
}

//general tree create 
struct node *create(void){
    struct node *mine = malloc(sizeof(struct node));
    assert(mine);
    mine->root->data = 0;
    mine->root->cap = 10;
    mine->root->children = malloc(sizeof(struct gtree *) * mine->root->cap);
    assert(mine->root->children);
    for(int i = 0; i < mine->root->cap; i++){
        mine->root->children[i] = NULL;
    }
    return mine;
}
