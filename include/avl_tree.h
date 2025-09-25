#ifndef AVL_TREE_H
#define AVL_TREE_H

// Twoja dokładna definicja struktury
struct Node {
    int value;
    int height;
    struct Node *leftNode;
    struct Node *rightNode;
};

// Twoje funkcje (zgodne z .c)
struct Node *CreateNewNode(int value);
struct Node *AddValue(struct Node *currNode, int value);
struct Node *RemoveValue(struct Node *currNode, int value);
void FreeAVLtree(struct Node *root);
void preOrder(struct Node *root);

#endif // AVL_TREE_H