struct llist{
    struct lltasks *front;
};

struct lltasks{
    int priority;
    char **task;
    int *next;
};

struct lltasks *create(int priority, int task){
    struct lltasks *mine = malloc(sizeof(struct lltasks));
    assert(mine);
    mine->priority = priority;
    mine->task = task;
    mine->next = NULL;
    return mine;
}

void insert(struct llist *m, int priority, int task){
    struct lltasks *current = m->front;
    struct lltasks *prev = NULL;
    struct lltasks *new = create(priority, task);
    while(current != NULL){
        if(current->priority > priority){
            prev = current;
            current = current->next;
            continue;
        }
        else{
            prev->next = new;
            new->next = current;
            return;
        }
    }
}

int highest(struct llist *m){
    return (m->front)->task;
}

int num_tasks(struct llist *m){
    struct lltasks *current = m->front;
    if(current == NULL){
        return 0;
    
    int acc = 0;
    while(current != NULL){
        acc++;
    }
    return acc;
}

