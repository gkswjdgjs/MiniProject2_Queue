MiniProject2_Queue

The queue follows First-In, First-Out behavior.

1. build/run commands
    • enqueue(item)
    Adds a new element to the back (rear) of the queue. Think of a person stepping into the
    end of a line.
    • dequeue()
    Removes and returns the element at the front of the queue the one that has been waiting
    the longest.
    • front() / peek()
    Returns the element at the front without removing it. A cautious glance at who’s next in
    line.
    • isEmpty()
    Returns true if the queue has no elements; otherwise false. A quick existential check: is
    anyone here?
    • isFull()
    Returns true if the queue cannot accept more elements because it has reached its
    maximum size.
    • size()
    Returns the number of elements currently stored in the queue.
    • clear()
    Removes all elements from the queue, resetting it to an empty state. The velvet rope goes
    up; everyone leaves.

2. file structure explanation
MiniProject2_Queue
    include 
        Queue.h - class declaration and public API
    src
        main.cpp - interactive terminal menu
        Queue.cpp - full implementation of Queue methods
        queue
    tests
        TESTING.md - testing documentation
    README.md


3. example usage 

1. Enqueue
2. Dequeue
3. Peek
4. Size
5. Print Queue
6. Exit
Choose: 1
Enter value: 1
Enqueued.

1. Enqueue
2. Dequeue
3. Peek
4. Size
5. Print Queue
6. Exit
Choose: 1
Enter value: 2
Enqueued.

1. Enqueue
2. Dequeue
3. Peek
4. Size
5. Print Queue
6. Exit
Choose: 1
Enter value: 3
Enqueued.

1. Enqueue
2. Dequeue
3. Peek
4. Size
5. Print Queue
6. Exit
Choose: 1
Enter value: 4
Enqueued.

1. Enqueue
2. Dequeue
3. Peek
4. Size
5. Print Queue
6. Exit
Choose: 5
Queue: 1 2 3 4 

1. Enqueue
2. Dequeue
3. Peek
4. Size
5. Print Queue
6. Exit
Choose: 2
Dequeued: 1

1. Enqueue
2. Dequeue
3. Peek
4. Size
5. Print Queue
6. Exit
Choose: 2
Dequeued: 2

1. Enqueue
2. Dequeue
3. Peek
4. Size
5. Print Queue
6. Exit
Choose: 1
Enter value: 8
Enqueued.

1. Enqueue
2. Dequeue
3. Peek
4. Size
5. Print Queue
6. Exit
Choose: 3
Front: 3

1. Enqueue
2. Dequeue
3. Peek
4. Size
5. Print Queue
6. Exit
Choose: 5
Queue: 3 4 8 

1. Enqueue
2. Dequeue
3. Peek
4. Size
5. Print Queue
6. Exit
Choose: 6
Exiting...