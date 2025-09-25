#ifndef HEAP_H
#define HEAP_H

// --- Struktury ---
typedef struct MaxHeap {
    int *data;
    int size;
    int capacity;
} MaxHeap;

typedef struct MinHeap {
    int *data;
    int size;
    int capacity;
} MinHeap;


// --- Funkcje dla Max Heap (z max_heap.c) ---
// Zmieniono nazwy, aby były unikalne
MaxHeap* MaxHeap_Create(int capacity);
void MaxHeap_Insert(MaxHeap* heap, int value);
int MaxHeap_Remove(MaxHeap* heap, int index);
int MaxHeap_ExtractMax(MaxHeap* heap);
void MaxHeap_Print(MaxHeap* heap);


// --- Funkcje dla Min Heap (z min_heap.c) ---
// Zmieniono nazwy, aby były unikalne
MinHeap* MinHeap_Create(int capacity);
void MinHeap_Insert(MinHeap* heap, int value);
int MinHeap_Remove(MinHeap* heap, int index);
int MinHeap_ExtractMin(MinHeap* heap);
void MinHeap_Print(MinHeap* heap);

#endif // HEAP_H