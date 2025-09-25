#ifndef STACK_H
#define STACK_H

// Twoje dokładne definicje struktur
struct Node {
    int value;
    struct Node *next;
};

struct Stack {
    struct Node *headNode;
    int size;
};

// Twoje funkcje (zgodne z .c)
struct Stack *CreateStack(int value);
void Push(struct Stack *stack, int value);
void Pop(struct Stack *stack);
void PrintStack(struct Stack *stack);
int StackLength(struct Stack *stack);
void FreeNodeMemory(struct Stack *stack);

#endif // STACK_H