//dynamic arrays
struct my_stack{
    int *data;
    int len;
    int len_max;
};


struct my_stack *create(void){
    struct my_stack *mine = malloc(sizeof(struct my_stack));
    mine->len = 0; 
    mine->len_max = 10;
    mine->data = malloc(sizeof(int) * mine->len_max);
    return  mine;
}

void destroy(struct my_stack *m){
    free(m->data);
    free(m);
}

void push(struct my_stack *m, int element){
    m->data = realloc(m->data, sizeof(int) * m->len++);
    m->data[m->len] = element; 
    m->len++;
}

int top(struct my_stack *m){
    return m->data[m->len - 1];
}

//linked lists 
struct llnode{
    int val;
    struct llnode *next;
};

struct my_stack{
    struct llnode *front;
}


struct my_stack *create(void){
    struct my_stack *mine = malloc(sizeof(struct my_stack));
    mine->front = NULL;
    return mine;
}

struct llnode *create_llnode(int val){
    struct llnode *mine = malloc(sizeof(struct llnode));
    mine->val = val;
    mine->next = NULL;
    return mine;
}

void destory(struct my_stack *mine){
    struct llnode *current = mine->front;
    struct llnode *prev = NULL
    while(current != NULL){
        prev = current;
        free(prev);
        current = current->next;
    }
    free(mine);
}

void push(struct my_stack *m, int val){
    struct llnode *new = create_llnode(val);
    struct llnode *current = m->front;
    struct llnode prev = NULL;
    while(current != NULL){
        prev = current;
        current = current->next;
    }
    prev->next = new;
}

int top(struct my_stack *m){
    struct llnode *current = m->front;
    struct llnode prev = NULL;
    while(current != NULL){
        prev = current;
        current = current->next;
    }
    return prev->val;
}

//
