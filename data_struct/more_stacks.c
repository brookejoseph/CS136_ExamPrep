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
