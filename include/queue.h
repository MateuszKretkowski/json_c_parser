#ifndef QUEUE_H
#define QUEUE_H

// Twoje dokładne definicje struktur
struct Node {
    int value;
    struct Node *next;
};

struct Queue {
    int size;
    struct Node *headNode;
    struct Node *lastNode;
};

// Twoje funkcje (zgodne z .c)
struct Queue *CreateQueue(int value);
void Enqueue(struct Queue *queue, int value);
void Dequeue(struct Queue *queue);
void PrintQueue(struct Queue *queue);

#endif // QUEUE_H