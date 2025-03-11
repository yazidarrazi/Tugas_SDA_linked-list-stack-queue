#include <stdlib.h>
#include "node.h"

Node* createNode(void *data) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) return NULL;
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
