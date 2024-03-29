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
