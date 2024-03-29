struct llnode {
  int data; 
  struct llnode *next; 
};

struct llist {
  struct llnode *front; 
};

bool cycle(struct llist *m){
  struct llnode *current = m->front;
  int cap = 10; 
  int size = 0;
  struct llnode **list = malloc(sizeof(struct llnode) * cap);
  while(current->next != NULL){
    if(cap == size){
      cap *= 2;
    }
    list[size] = current;
    size++;
    current = current->next;
  }
  for(int i = 0; i < size; i++){
    for(int l = i + 1; l < size; l++){
      if(list[l] == list[i]){
        return true;
      }
      return false;
    }
  }
}
