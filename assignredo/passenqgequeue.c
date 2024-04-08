#include "queue.h"
#include "passenger.h"
#include <stdlib.h>

struct queue {
  struct passenger **data;
  int len;
  int len_max;
};

// See queue.h for documentation.
struct queue *queue_create(void) {
  struct queue *mine = malloc(sizeof(struct queue));
  mine->len = 0; 
  mine->len_max = 10;
  mine->data = malloc(sizeof(struct passenger *) * mine->len_max);
  mine->data = passenger_create(NULL, NULL);
  return mine;
}

// See queue.h for documentation.
void queue_destroy(struct queue *q) {
  for(int i = 0; i < q->len; i++){
    passenger_destroy(q->data[i]);
  }

}

// See queue.h for documentation.
void queue_enqueue(struct queue *q, const char *name, const int zone) {
  struct passenger *new = passenger_create(name, zone);
  q->len++;
  q->data = realloc(q->data, sizeof(struct passenger *) * q->len);
  q->data[q->len - 1] = new;
}

// See queue.h for documentation.
struct passenger *queue_dequeue(struct queue *q) {
  struct passenger *left = q->data[0];
  
}

// See queue.h for documentation.
struct passenger *queue_front(const struct queue *q) {
  // Your implementation goes here
  return NULL;
}

// See queue.h for documentation.
bool queue_is_empty(const struct queue *q) {
  // Your implementation goes here
  return false;
}

// See queue.h for documentation.
void queue_print(const struct queue *q) {
  // Your implementation goes here
}

