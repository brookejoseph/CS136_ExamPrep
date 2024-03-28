struct queue *mine{
    int len;
    int *data;
}

int front(struct queue *q){
    return q->data[0];
}

void enqueue(struct queue *q, int val){
    q->len++;
    q->data = realloc(q->data, sizeof(int) * (q->len));
    assert(q->data);
    q->data[q->len - 1] = val;
}

void dequeue(struct queue *q){
    for(int i = 1; i < q->len; i++){
        q->data[i - 1] = q->data[i];
    }
    q->len--;
    q->data = realloc(q->data, sizeof(struct queue) * q->len);
}

struct queue rev(struct queue *q){
    dequeue(q);
    for(int i = 0; i < q->len; i++){
        enqueue(q, q->data[i]);
    }

    return q;
}
