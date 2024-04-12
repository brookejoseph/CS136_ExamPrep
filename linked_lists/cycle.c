struct llnode{
    int val;
    struct llnode *next;
};

struct llist{
    struct llnode *front;
};

bool cycle(struct llist *m){
    struct llnode *current = m->front;
    while(current != NULL){
        struct llnode *slow = current;
        struct llnode *fast = current->next;
        if((fast == NULL)||(slow == NULL)){
            return false;
        }
        else if(fast == slow){
            return true;
        }
        slow = slow->next;
        fast = fast->ext;
    }
    return false;
}
