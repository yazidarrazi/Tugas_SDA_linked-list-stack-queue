#include <stdlib.h>
#include "queue.h"

void initQueue(Queue *q) {
    q->front = q->rear = NULL;
}

int isEmptyQueue(Queue *q) {
    return q->front == NULL;
}

void enqueue(Queue *q, void *data) {
    Node *newNode = createNode(data);
    if (!newNode) return;
    if (q->rear) q->rear->next = newNode;
    else q->front = newNode;
    q->rear = newNode;
}

void* dequeue(Queue *q) {
    if (isEmptyQueue(q)) return NULL;
    Node *temp = q->front;
    void *data = temp->data;
    q->front = temp->next;
    if (!q->front) q->rear = NULL;
    free(temp);
    return data;
}
