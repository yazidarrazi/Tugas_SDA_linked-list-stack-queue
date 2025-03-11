#include <stdlib.h>
#include "stack.h"

void initStack(Stack *s) {
    s->top = NULL;
}

int isEmptyStack(Stack *s) {
    return s->top == NULL;
}

void push(Stack *s, void *data) {
    Node *newNode = createNode(data);
    if (!newNode) return;
    newNode->next = s->top;
    s->top = newNode;
}

void* pop(Stack *s) {
    if (isEmptyStack(s)) return NULL;
    Node *temp = s->top;
    void *data = temp->data;
    s->top = temp->next;
    free(temp);
    return data;
}
