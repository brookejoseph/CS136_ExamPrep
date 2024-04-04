void sawp(struct llist *lst){
    struct llnode *current = lst->front;
    struct llnode *prev = current->next;
    int acc = 0;
    while((current != NULL) && (prev != NULL)){
        if(acc != 0){
            current = current->next;
            prev = prev->next;
            acc++;
        }
        else{
            lst->front = prev;
            current->next = prev->next;
            prev->next = current;
            acc = 0;
        }
        lst = lst->front;
        current = current->next;
        prev = prev->next;
    }
}
