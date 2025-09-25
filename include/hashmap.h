#ifndef HASHMAP_H
#define HASHMAP_H

struct Node {
    int key;
    int value;
    struct Node *next;
};

struct HashMap {
    struct Node **buckets;
    int size;
    int capacity;
};

int hash(int key, int capacity);
void Rehash(struct hm *hm);
struct HashMap* CreateHashMap(int key, int value);
void Insert(struct hm *hm, int key, int value);
void Remove(struct hm *hm, int key);
struct Node *GetNode(struct hm *hm, int key);

#endif