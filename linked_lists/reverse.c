struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *current = head;
    struct ListNode *new = NULL;
    while(current != NULL){
        struct ListNode *prev = malloc(sizeof(struct ListNode));
        prev->val = current->val;
        prev->next = new;
        new = prev;
        current = current->next;
    }
    return new;
}


//I think this is the proper implementation 

void rev(struct llist *val) {
    struct llnode *prev = NULL;
    struct llnode *current = val->front;
    struct llnode *nextNode = NULL;

    if (current == NULL || current->next == NULL) {
        return;
    }

    while (current != NULL) {
        nextNode = current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    }

    val->front = prev;
}
