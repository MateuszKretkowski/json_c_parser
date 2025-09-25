#ifndef LINKED_LIST_H
#define LINKED_LIST_H

// Twoje dokładne definicje struktur
struct Node {
    struct Node *next;
    int value;
};

struct LinkedList {
    struct Node *headNode;
    int size;
};

// Twoje funkcje (zgodne z .c)
struct LinkedList *CreateLinkedList(int value);
void CreateNode(struct LinkedList *linkedList, int value);
void RemoveNode(struct LinkedList *linkedList, int index);
void PrintLinkedList(struct LinkedList *LinkedList);

#endif // LINKED_LIST_H