struct queue{
    int *elements;
    int len;
}

struct queue *createq(void){
    struct queue *q = malloc(sizeof(struct queue));
    q->elements = NULL;
    q->len = 0;
    return q;
}

struct queue destroy(void){
    free(q->len);
    free(q->elements);
}

void enqeue(struct queue *s, int val){
    s->size++;
    q->elements = realloc(q->elements, q->len * sizeof(int));
    q->elements[s->size--] = val;
}

void deqeue(struct queue *s){
    int len = s->len;
    for(int i = 0; i < len; i++){
        s->str[i - 1] = s->str[i];
    }
    q->elements = realloc(q->elements, q->len * sizeof(int));
    s->len--;
}

