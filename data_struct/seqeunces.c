struct sequences{
    int len;
    int *data;
}

struct sequences *creates(int len, int *data){
    struct sequences *mine = malloc(sizeof(struct sequences));
    mine->len = len;
    mine->data = data;
    return mine;
}

struct sequences destroy(struct sequences *m){
    free(m->data);
    free(m);
}

int length(struct sequences *m){
    return m->len;
}

void insert(struct sequences *m, int val, int pos) {
    m->data = realloc(m->data, sizeof(int) * (m->len + 1));
    for (int i = m->len; i > pos; i--) {
        m->data[i] = m->data[i - 1];
    }
    m->data[pos] = val;
    m->len++;
}

void remove_elem(struct sequences *m, int pos) {
    for (int i = pos; i < m->len - 1; i++) {
        m->data[i] = m->data[i + 1];
    }
    m->len--;
}
