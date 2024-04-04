struct node{
    struct strtree *m;
}

struct strtree{
    char *str;
    struct strtree ***next;
    int cap;
}

struct node *create(void){
    struct node *mine = malloc(sizeof(struct node));
    assert(mine);
    mine->m = malloc(sizeof(struct strtree));
    assert(mine->m);
    mine->m->cap = 10;
    mine->m->str = NULL;
    assert(mine->m-str);
    mine->m->next = malloc(sizeof(struct strtree *) * mine->m->cap);
    assert(mine->m->next);
    return mine;
}
