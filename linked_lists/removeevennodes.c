void remove_even(struct llist *val){
    struct llnode *current = val->front;
    struct llnode *prev = NULL;
    struct llnode *newcur = NULL; 
    while(current != NULL){
        if(current->data % 2 == 0){
            prev = current;
            current = prev->next;
        }
        else{
            newcur = current;
            prev = current;
            current = prev->next;
        }
    }
    val->front = newcur;
}
