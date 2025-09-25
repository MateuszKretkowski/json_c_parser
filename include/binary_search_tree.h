#ifndef BINARY_SEARCH_TREE_H
#define BINARY_SEARCH_TREE_H

// Twoje dokładne definicje struktur
struct Node {
    int value;
    struct Node *leftNode;
    struct Node *rightNode;
};

struct bst {
    int size;
    struct Node *rootNode;
};

// Twoje funkcje (zgodne z .c)
struct bst *CreateBinarySearchTree(int value);
void AddValue(int value, struct Node *currNode);
struct Node *RemoveValue(struct Node *currNode, int value);
void InOrderTraversalPrint(struct Node *currNode);
struct Node *GetValue(struct Node *currNode, int value);
void FreeTree(struct bst *bst, struct Node *currNode);

#endif // BINARY_SEARCH_TREE_H