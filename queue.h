#ifndef QUEUE_H
#define QUEUE_H

#include "node.h"

typedef struct {
    Node *front, *rear;
} Queue;

void initQueue(Queue *q);
int isEmptyQueue(Queue *q);
void enqueue(Queue *q, void *data);
void* dequeue(Queue *q);

#endif
