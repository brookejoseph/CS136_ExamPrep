///redoing session slides 


struct llnode{
    int val;
    struct llnode *next;
};

struct llist{
    struct llnode *front;
};


//creating 

struct llist *create(void){
    struct llist *mine = malloc(sizeof(struct llist));
    mine->front = NULL;
}

struct llnode *create(int val){
    struct llnode *new = malloc(sizeof(struct llnode));
    assert(new);
    new->next = NULL:
    new->val = val; 
    return new;
}

void *insert_few(struct llist *m, int val){
    struct llnode *new = create(val);
    new->next = m->front;
    m->front = new;
}

int ll_length(struct llist *m){
    struct llnode *current = m->front;
    int acc = 0;
    while(current != NULL){
        acc++;
        current = current->next;
    }
    return acc;
}

int ll_len(struct llist *m){
    return val(m->front);
}

int val(struct llnode *m){
    int acc = 0; 
    if(m == NULL){
        return acc;
    }
    else{
        acc++;
        val(m->next);
    }
    return acc;
}

void destory(struct llist *mine){
    struct llnode *current = mine->front;
    struct llnode *prev = NULL
    while(current != NULL){
        prev = current;
        free(prev);
        current = current->next;
    }
    free(mine);
}

void insert_back(struct llist *mine, int val){
    struct llnode *current = mine->front;
    struct llnode *new = create(val);
    while(current != NULL){
        current = current->next;
    }
    current->next = new;
}

void insert_arb(struct llist *mine, int val, int pos){
    struct llnode *current = mine->front;
    struct llnode *prev = NULL;
    struct llnode *new = create(val);
    int acc = 0; 
    while(current != NULL){
        if(acc == pos){
            new->next = current;
            prev->next = new;
            return;
        }
        else{
            prev = current;
            current = current->next;
        }
        acc++;
    }
}

void remove(struct llist *m, int pos){
    int acc = 0; 
    struct llnode *current = m->front;
    struct llnode *prev = NULL;
    if(pos == 0){
        m->front = current->next;
        current->next = NULL;
    }
    while(current != NULL){
        if(acc == pos){
            prev->next = current->next;
            current->next = NULL;
            return;
        }
        else{
            prev = current;
            current = current->next;
        }
        acc++;
    }
}
