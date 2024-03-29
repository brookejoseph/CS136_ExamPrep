struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *currentA = headA;
    struct ListNode *currentB = headB;
    
    while (currentA != NULL && currentB != NULL) {
        if (currentA == currentB) {
            return currentA;
        }
        
        currentA = currentA->next;
        currentB = currentB->next;
        
        if (currentA == NULL) {
            currentA = headB;
        }
        if (currentB == NULL) {
            currentB = headA;
        }
    }
    
    return NULL;
}
