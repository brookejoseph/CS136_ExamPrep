//trees
struct btnode {
    int data;
    struct btnode *left;
    struct btnode *right;
};

struct bst {
    struct btnode *root;
};

struct bst *create(void){
    struct bst *mine = malloc(sizeof(struct bst));
    assert(mine);
    mine->root = NULL;
    return mine;
}

struct btnode *create_node(int val){
    struct btnode *mine = malloc(sizeof(struct btnode));
    assert(mine);
    mine->data = val;
    mine->left = NULL;
    mine-right = NULL;
    return mine;
}

void insert(struct bst *m, int val){
    struct btnode *mine = m->root;
    insert_node(mine);
}

void insert_node(struct btnode *new, int val){
    if(new->val > val){
        if(new == NULL){
            create_node(val);
        }
        else{
            new->left = insert_node(new->left);
        }
    }
    else if(new->val < val){
        if(new == NULL){
            create_node(val);
        }
        else{
            new->right = insert_node(new->right);
        }
    }
} 
