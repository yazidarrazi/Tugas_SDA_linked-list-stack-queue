#ifndef STACK_H
#define STACK_H

#include "node.h"

typedef struct {
    Node *top;
} Stack;

void initStack(Stack *s);
int isEmptyStack(Stack *s);
void push(Stack *s, void *data);
void* pop(Stack *s);

#endif
