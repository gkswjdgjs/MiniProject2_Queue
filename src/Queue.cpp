#include "Queue.h"
#include <iostream>
using namespace std;

Queue::Queue(int cap)
    : capacity(cap), frontIndex(0), rearIndex(-1), count(0)
{
    data = new int[capacity];
}

Queue::~Queue() {
    delete[] data;
}

bool Queue::isEmpty(){
    return count == 0;
}

bool Queue::isFull(){
    return count == capacity;
}

int Queue::size(){
    return count;
}

void Queue::enqueue(int item) {
    if (isFull()) {
        throw overflow_error("Queue is full.");
    }

    rearIndex = (rearIndex + 1) % capacity;
    data[rearIndex] = item;
    count++;
}

int Queue::dequeue() {
    if (isEmpty()) {
        throw underflow_error("Queue is empty.");
    }

    int value = data[frontIndex];
    frontIndex = (frontIndex + 1) % capacity;
    count--;

    return value;
}

int Queue::peek(){
    if (isEmpty()) {
        throw underflow_error("Queue is empty.");
    }

    return data[frontIndex];
}

void Queue::clear() {
    frontIndex = 0;
    rearIndex = -1;
    count = 0;
}

void Queue::printQueue(){
    if (isEmpty()) {
        cout << "Queue is empty.\n";
        return;
    }

    cout << "Queue: ";
    for (int i = 0; i < count; i++) {
        int index = (frontIndex + i) % capacity;
        cout << data[index] << " ";
    }
    cout << endl;
}
