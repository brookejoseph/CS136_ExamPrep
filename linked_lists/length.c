struct llist {
  struct llnode *front; 
};

struct llnode {
  int data;
  struct llnode *next;
};

//iteration
int ll_length(const struct llist *llst){
  int len = 0;
  const struct llist *current = llst;
  while(current != NULL){
    len++;
    current = llst->next;
  }
  return len;
}


//recursion

int ll_length(const struct llist *llst){
  if(llst->next == NULL){
    return 0; 
  }
  else if(llst->next != NULL){
    return 1 + ll_length(llst->next);
  }
}





