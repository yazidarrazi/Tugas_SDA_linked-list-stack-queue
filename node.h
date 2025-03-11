#ifndef NODE_H
#define NODE_H

typedef struct Node {
    void *data;
    struct Node *next;
} Node;

Node* createNode(void *data);

#endif
