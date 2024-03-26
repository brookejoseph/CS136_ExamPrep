struct stack{
    char *str;
    int len;
}

struct stack* createStack(int len, char *c){
  struct stack str = malloc(sizeof(struct stack));
  str->len = strlen(str->str);
  str->str = malloc(str->len * sizeof(struct stack));
  return str;
}

void push(struct stack *s, char item){
    s->str = realloc(s->str, sizeof(s->len + 1) * sizeof(char));
    s->str[s->len] = item;
    s->len++;
}

void pop(struct stack *s){
    char top = s->str[0];
    for(int i = 1; i < s->len - 1; i++){
        s->str[i - 1] = s->str[i];
    }
    s->str = realloc(s->str, s->len * sizeof(char));
    s->len--;
}

void top(struct stack *s){
    return s->str[0];
}
