#include <stdlib.h>
#include "sequence.h"
#include <assert.h>

// See sequence.h for documentation.
struct sequence {
  int *data;
  int len_max;
  int len;
};

// See sequence.h for documentation.
struct sequence *seq_create(void) {
  struct sequence *mine = malloc(sizeof(struct sequence));
  mine->data = NULL;
  mine->len_max = 10;
  mine->len = 0; 
  return mine;
}

// See sequence.h for documentation.
void seq_destroy(struct sequence *seq) {
  free(seq);
}

// See sequence.h for documentation.
int seq_item_at(const struct sequence *seq, int pos) {
  return seq->data[pos];
}

// See sequence.h for documentation.
void seq_insert_at(struct sequence *seq, int pos, int val) {
  seq->len++;
  int *temp = malloc(sizeof(int) * seq->len);
  assert(temp);
  temp[pos] = val;
  for(int i = 0; i < pos; i++){
    temp[i] = seq->data[i];
  }
  for(int i = pos; i < seq->len; i++){
    temp[i + 1] = seq->data[i];
  }
  seq = realloc(seq, sizeof(struct sequence) * seq->len);
  seq->data = temp;
  free(temp);
}

// See sequence.h for documentation.
int seq_remove_at(struct sequence *seq, int pos) {
  assert(seq);
  int saved = seq->data[pos];
  int *temp = malloc(sizeof(int) * seq->len--);
  for(int i = 0; i < pos; i++){
    seq->data[i] = seq->data[i];
  }
  for(int i = pos; i < seq->len; i++){
    seq->data[i + 1] = temp[i];
  }
  seq = realloc(seq, sizeof(struct sequence) * seq->len--);
  seq->len--;
  seq->data = temp;
  free(temp);
  return saved;
}
