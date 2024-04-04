// Write a program to partition a linked list around a value x such that all nodes less than x come before 
// all nodes greater than or equal to x, preserving the original order of elements.

void x_part(struct llist *lst, int pos){
    struct llnode *current = lst->front;
    struct llnode *pivot = NULL;
    int acc = 1;
    if((current == NULL) && (pos < acc)){
        lst = pivot->next;
        current->next = lst->front;
        pivot->next = NULL;
    }
    else if((current != NULL) && (pos == acc)){
        pivot = current;
        acc++;
        current = current->next;
    }
    else{
        current = current->next;
        acc++;
    }
}
