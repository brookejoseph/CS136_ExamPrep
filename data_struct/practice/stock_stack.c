struct stack{
    int len;
    int *data;
}

struct stack *stock(struct stack *s){
    int acc = 0;
    int arr_len = s->len
    int *array = malloc(sizeof(int) * arr_len);
    struct stack *mine = malloc(sizeof(struct queue) *arr_len);
    for(int i = 0; i < arr_len; i++){
        for(int l = 1; l < arr_len; l++){
            if(data[l] > data[i]){
                acc++;
            }
        }
        array[i] = acc;
        acc = 0;
    } 
    mine->data = array;
    mine->len = arr_len;
    return mine; 
}
