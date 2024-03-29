struct llist {
  struct llnode *front; 
};

struct llnode {
  int data;
  struct llnode *next; 
};

struct llnode *lln_create(int data) {
  struct llnode *lln = malloc(sizeof(struct llnode));
  assert(lln);
  lln->data = data;
  lln->next = NULL;
  return lln;
}
void ll_insert_front(struct llist *lst, int itm) {
  struct llnode *new_node = lln_create(itm);
  new_node->next = lst->front; 
  lst->front = new_node;
}

struct llnode *lln_create(int data){
  struct llnode *lln = malloc(sizeof(llnode));
  lln->data = data;
  lln->next = NULL;
  return lln;
}

