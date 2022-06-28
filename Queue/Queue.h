#ifndef LAB5_QUEUE_H
#define LAB5_QUEUE_H

#include <stdlib.h>

#include "../Messages/Messages.h"
//  Очередь. Используется только для BFS.

typedef struct Queue {
    int* items;
    int front;
    int rear;
} Queue;

Queue* createQueue(int size);

int isEmpty(Queue* queue);
void enqueue(Queue* queue, int value);
int dequeue(Queue* queue);
void removeQueue(Queue* queue);


#endif
