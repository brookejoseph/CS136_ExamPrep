struct Node {
    int data;
    struct Node* next;
};

void traverse(struct node *m){
  struct node *current = m;
  while(current != NULL){
    printf("%d", current->data);
    current = m->next;
  }
}
