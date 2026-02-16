#ifndef QUEUE_H
#define QUEUE_H

#include <stdexcept>

/*
 * Array-based circular Queue
 * Fixed capacity queue supporting FIFO operations.
 */
class Queue {
private:
    int* data;        // array storage
    int capacity;     // maximum size
    int frontIndex;   // index of front element
    int rearIndex;    // index of last element
    int count;        // current number of elements

public:
    // Constructor
    Queue(int cap = 10);

    // Destructor
    ~Queue();

    // Adds element to rear of queue
    void enqueue(int item);

    // Removes and returns front element
    int dequeue();

    // Returns front element without removing
    int peek();

    // Returns true if queue is empty
    bool isEmpty();

    // Returns true if queue is full
    bool isFull();

    // Returns number of stored elements
    int size();

    // Clears the queue
    void clear();

    // Optional helper: print queue contents
    void printQueue();
};

#endif
